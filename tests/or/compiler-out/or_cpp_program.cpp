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
void* _30015 = arg_buffer[1];
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

void* kont2970929828 = prim_car(lst);
void* lst29829 = prim_cdr(lst);
void* x2960129830 = apply_prim__u43(lst29829);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2970929828);
arg_buffer[2] = x2960129830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2970929828))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30016 = arg_buffer[1];
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

void* kont2971129831 = prim_car(lst);
void* lst29832 = prim_cdr(lst);
void* x2960229833 = apply_prim_max(lst29832);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2971129831);
arg_buffer[2] = x2960229833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2971129831))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30017 = arg_buffer[1];
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

void* kont2971329834 = prim_car(lst);
void* lst29835 = prim_cdr(lst);
void* x2960329836 = apply_prim__u45(lst29835);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2971329834);
arg_buffer[2] = x2960329836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2971329834))[0]);
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
void* _30018 = arg_buffer[1];
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

void* kont2971529837 = prim_car(lst);
void* lst29838 = prim_cdr(lst);
void* x2960429839 = apply_prim__u42(lst29838);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2971529837);
arg_buffer[2] = x2960429839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2971529837))[0]);
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
void* _30019 = arg_buffer[1];
//reading env and args
void* kont29717 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2960529840 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29717);
arg_buffer[2] = x2960529840;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29717))[0]);
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
void* _30020 = arg_buffer[1];
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

void* kont2971829841 = prim_car(lst);
void* lst29842 = prim_cdr(lst);
void* x2960629843 = apply_prim__u47(lst29842);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2971829841);
arg_buffer[2] = x2960629843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2971829841))[0]);
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
void* _30021 = arg_buffer[1];
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

void* kont2972029844 = prim_car(lst);
void* lst29845 = prim_cdr(lst);
void* x2960729846 = apply_prim__u61(lst29845);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2972029844);
arg_buffer[2] = x2960729846;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2972029844))[0]);
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
void* _30022 = arg_buffer[1];
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

void* kont2972229847 = prim_car(lst);
void* lst29848 = prim_cdr(lst);
void* x2960829849 = apply_prim__u62(lst29848);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2972229847);
arg_buffer[2] = x2960829849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2972229847))[0]);
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
void* _30023 = arg_buffer[1];
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

void* kont2972429850 = prim_car(lst);
void* lst29851 = prim_cdr(lst);
void* x2960929852 = apply_prim__u60(lst29851);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2972429850);
arg_buffer[2] = x2960929852;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2972429850))[0]);
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
void* _30024 = arg_buffer[1];
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

void* kont2972629853 = prim_car(lst);
void* lst29854 = prim_cdr(lst);
void* x2961029855 = apply_prim__u60_u61(lst29854);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2972629853);
arg_buffer[2] = x2961029855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2972629853))[0]);
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
void* _30025 = arg_buffer[1];
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

void* kont2972829856 = prim_car(lst);
void* lst29857 = prim_cdr(lst);
void* x2961129858 = apply_prim__u62_u61(lst29857);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2972829856);
arg_buffer[2] = x2961129858;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2972829856))[0]);
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
void* _30026 = arg_buffer[1];
//reading env and args
void* kont29730 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2961229859 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29730);
arg_buffer[2] = x2961229859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29730))[0]);
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
void* _30027 = arg_buffer[1];
//reading env and args
void* kont29731 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2961329860 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29731);
arg_buffer[2] = x2961329860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29731))[0]);
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
void* _30028 = arg_buffer[1];
//reading env and args
void* kont29732 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2961429861 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29732);
arg_buffer[2] = x2961429861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29732))[0]);
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
void* _30029 = arg_buffer[1];
//reading env and args
void* kont29733 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2961529862 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29733);
arg_buffer[2] = x2961529862;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29733))[0]);
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
void* _30030 = arg_buffer[1];
//reading env and args
void* kont29734 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2961629863 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29734);
arg_buffer[2] = x2961629863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29734))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30031 = arg_buffer[1];
//reading env and args
void* kont29735 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2961729864 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29735);
arg_buffer[2] = x2961729864;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29735))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs = encode_clo(alloc_clo(abs_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30032 = arg_buffer[1];
//reading env and args
void* kont29736 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2961829865 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29736);
arg_buffer[2] = x2961829865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29736))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam30033_fptr() // lam30033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30034 = arg_buffer[1];
//reading env and args
void* a2962129869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2961929866 = (decode_clo(env30034))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env30034))[2];
//not do dummy comment
void* kont29737 = (decode_clo(env30034))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29737;
arg_buffer[3] = a2961929866;
arg_buffer[4] = a2962129869;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30033 = encode_clo(alloc_clo(lam30033_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30037 = arg_buffer[1];
//reading env and args
void* kont29737 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar30193 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30193, "0", 10);
void* a2961929866 = encode_mpz(mpzvar30193);
mpz_t* mpzvar30194 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30194, "2", 10);
void* a2962029867 = encode_mpz(mpzvar30194);

//creating new closure instance
void** clo30196 = alloc_clo(lam30033_fptr, 3);

//setting env list
clo30196[1] = kont29737;
clo30196[2] = equal_u63;
clo30196[3] = a2961929866;
void* f2973829868 = encode_clo(clo30196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2973829868;
arg_buffer[3] = x;
arg_buffer[4] = a2962029867;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam30038_fptr() // lam30038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30039 = arg_buffer[1];
//reading env and args
void* a2962429873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29739 = (decode_clo(env30039))[3];
//not do dummy comment
void* a2962229870 = (decode_clo(env30039))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env30039))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29739;
arg_buffer[3] = a2962229870;
arg_buffer[4] = a2962429873;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30038 = encode_clo(alloc_clo(lam30038_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30042 = arg_buffer[1];
//reading env and args
void* kont29739 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar30197 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30197, "1", 10);
void* a2962229870 = encode_mpz(mpzvar30197);
mpz_t* mpzvar30198 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30198, "2", 10);
void* a2962329871 = encode_mpz(mpzvar30198);

//creating new closure instance
void** clo30200 = alloc_clo(lam30038_fptr, 3);

//setting env list
clo30200[1] = equal_u63;
clo30200[2] = a2962229870;
clo30200[3] = kont29739;
void* f2974029872 = encode_clo(clo30200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2974029872;
arg_buffer[3] = x;
arg_buffer[4] = a2962329871;
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
void* _30043 = arg_buffer[1];
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

void* kont2974129874 = prim_car(x);
void* x29875 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2974129874);
arg_buffer[2] = x29875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2974129874))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30044 = arg_buffer[1];
//reading env and args
void* kont29743 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2962529876 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29743);
arg_buffer[2] = x2962529876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29743))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30045 = arg_buffer[1];
//reading env and args
void* kont29744 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2962629877 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29744);
arg_buffer[2] = x2962629877;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29744))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam30048_fptr() // lam30048 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30049 = arg_buffer[1];
//reading env and args
void* a2963229887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29745 = (decode_clo(env30049))[3];
//not do dummy comment
void* x = (decode_clo(env30049))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30049))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont29745;
arg_buffer[3] = x;
arg_buffer[4] = a2963229887;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30048 = encode_clo(alloc_clo(lam30048_fptr, 0));

void* lam30050_fptr() // lam30050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30051 = arg_buffer[1];
//reading env and args
void* a2963029884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30051))[5];
//not do dummy comment
void* lst = (decode_clo(env30051))[4];
//not do dummy comment
void* kont29745 = (decode_clo(env30051))[3];
//not do dummy comment
void* x = (decode_clo(env30051))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30051))[1];

//if-clause
bool if_guard30201 = is_true(a2963029884);
if(if_guard30201)
{
void* x2963129885 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29745);
arg_buffer[2] = x2963129885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29745))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30203 = alloc_clo(lam30048_fptr, 3);

//setting env list
clo30203[1] = member_u63;
clo30203[2] = x;
clo30203[3] = kont29745;
void* f2974629886 = encode_clo(clo30203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2974629886;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30050 = encode_clo(alloc_clo(lam30050_fptr, 0));

void* lam30052_fptr() // lam30052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30053 = arg_buffer[1];
//reading env and args
void* a2962929882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30053))[6];
//not do dummy comment
void* lst = (decode_clo(env30053))[5];
//not do dummy comment
void* kont29745 = (decode_clo(env30053))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env30053))[3];
//not do dummy comment
void* x = (decode_clo(env30053))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30053))[1];

//creating new closure instance
void** clo30205 = alloc_clo(lam30050_fptr, 5);

//setting env list
clo30205[1] = member_u63;
clo30205[2] = x;
clo30205[3] = kont29745;
clo30205[4] = lst;
clo30205[5] = cdr;
void* f2974729883 = encode_clo(clo30205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2974729883;
arg_buffer[3] = a2962929882;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30052 = encode_clo(alloc_clo(lam30052_fptr, 0));

void* lam30054_fptr() // lam30054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30055 = arg_buffer[1];
//reading env and args
void* a2962729879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30055))[7];
//not do dummy comment
void* lst = (decode_clo(env30055))[6];
//not do dummy comment
void* kont29745 = (decode_clo(env30055))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env30055))[4];
//not do dummy comment
void* x = (decode_clo(env30055))[3];
//not do dummy comment
void* car = (decode_clo(env30055))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30055))[1];

//if-clause
bool if_guard30206 = is_true(a2962729879);
if(if_guard30206)
{
void* x2962829880 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29745);
arg_buffer[2] = x2962829880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29745))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30208 = alloc_clo(lam30052_fptr, 6);

//setting env list
clo30208[1] = member_u63;
clo30208[2] = x;
clo30208[3] = equal_u63;
clo30208[4] = kont29745;
clo30208[5] = lst;
clo30208[6] = cdr;
void* f2974829881 = encode_clo(clo30208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2974829881;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30054 = encode_clo(alloc_clo(lam30054_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30056 = arg_buffer[1];
//reading env and args
void* kont29745 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30210 = alloc_clo(lam30054_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo30210[1] = member_u63;
clo30210[2] = car;
clo30210[3] = x;
clo30210[4] = equal_u63;
clo30210[5] = kont29745;
clo30210[6] = lst;
clo30210[7] = cdr;
void* f2974929878 = encode_clo(clo30210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2974929878;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam30057_fptr() // lam30057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30058 = arg_buffer[1];
//reading env and args
void* a2963629895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env30058))[4];
//not do dummy comment
void* a2963529893 = (decode_clo(env30058))[3];
//not do dummy comment
void* kont29750 = (decode_clo(env30058))[2];
//not do dummy comment
void* foldl = (decode_clo(env30058))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont29750;
arg_buffer[3] = fun;
arg_buffer[4] = a2963529893;
arg_buffer[5] = a2963629895;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30057 = encode_clo(alloc_clo(lam30057_fptr, 0));

void* lam30059_fptr() // lam30059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30060 = arg_buffer[1];
//reading env and args
void* a2963529893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30060))[5];
//not do dummy comment
void* lst = (decode_clo(env30060))[4];
//not do dummy comment
void* fun = (decode_clo(env30060))[3];
//not do dummy comment
void* kont29750 = (decode_clo(env30060))[2];
//not do dummy comment
void* foldl = (decode_clo(env30060))[1];

//creating new closure instance
void** clo30212 = alloc_clo(lam30057_fptr, 4);

//setting env list
clo30212[1] = foldl;
clo30212[2] = kont29750;
clo30212[3] = a2963529893;
clo30212[4] = fun;
void* f2975129894 = encode_clo(clo30212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2975129894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30059 = encode_clo(alloc_clo(lam30059_fptr, 0));

void* lam30061_fptr() // lam30061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30062 = arg_buffer[1];
//reading env and args
void* a2963429891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30062))[6];
//not do dummy comment
void* lst = (decode_clo(env30062))[5];
//not do dummy comment
void* fun = (decode_clo(env30062))[4];
//not do dummy comment
void* acc = (decode_clo(env30062))[3];
//not do dummy comment
void* kont29750 = (decode_clo(env30062))[2];
//not do dummy comment
void* foldl = (decode_clo(env30062))[1];

//creating new closure instance
void** clo30214 = alloc_clo(lam30059_fptr, 5);

//setting env list
clo30214[1] = foldl;
clo30214[2] = kont29750;
clo30214[3] = fun;
clo30214[4] = lst;
clo30214[5] = cdr;
void* f2975229892 = encode_clo(clo30214);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2975229892;
arg_buffer[3] = a2963429891;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30061 = encode_clo(alloc_clo(lam30061_fptr, 0));

void* lam30063_fptr() // lam30063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30064 = arg_buffer[1];
//reading env and args
void* a2963329889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30064))[7];
//not do dummy comment
void* lst = (decode_clo(env30064))[6];
//not do dummy comment
void* fun = (decode_clo(env30064))[5];
//not do dummy comment
void* acc = (decode_clo(env30064))[4];
//not do dummy comment
void* kont29750 = (decode_clo(env30064))[3];
//not do dummy comment
void* car = (decode_clo(env30064))[2];
//not do dummy comment
void* foldl = (decode_clo(env30064))[1];

//if-clause
bool if_guard30215 = is_true(a2963329889);
if(if_guard30215)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29750);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29750))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30217 = alloc_clo(lam30061_fptr, 6);

//setting env list
clo30217[1] = foldl;
clo30217[2] = kont29750;
clo30217[3] = acc;
clo30217[4] = fun;
clo30217[5] = lst;
clo30217[6] = cdr;
void* f2975329890 = encode_clo(clo30217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2975329890;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30063 = encode_clo(alloc_clo(lam30063_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30065 = arg_buffer[1];
//reading env and args
void* kont29750 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo30219 = alloc_clo(lam30063_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo30219[1] = foldl;
clo30219[2] = car;
clo30219[3] = kont29750;
clo30219[4] = acc;
clo30219[5] = fun;
clo30219[6] = lst;
clo30219[7] = cdr;
void* f2975429888 = encode_clo(clo30219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2975429888;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam30066_fptr() // lam30066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30067 = arg_buffer[1];
//reading env and args
void* a2964029903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30067))[3];
//not do dummy comment
void* a2963829899 = (decode_clo(env30067))[2];
//not do dummy comment
void* kont29755 = (decode_clo(env30067))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29755;
arg_buffer[3] = a2963829899;
arg_buffer[4] = a2964029903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30066 = encode_clo(alloc_clo(lam30066_fptr, 0));

void* lam30068_fptr() // lam30068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30069 = arg_buffer[1];
//reading env and args
void* a2963929901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30069))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30069))[4];
//not do dummy comment
void* cons = (decode_clo(env30069))[3];
//not do dummy comment
void* a2963829899 = (decode_clo(env30069))[2];
//not do dummy comment
void* kont29755 = (decode_clo(env30069))[1];

//creating new closure instance
void** clo30221 = alloc_clo(lam30066_fptr, 3);

//setting env list
clo30221[1] = kont29755;
clo30221[2] = a2963829899;
clo30221[3] = reverse_u45helper;
void* f2975629902 = encode_clo(clo30221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2975629902;
arg_buffer[3] = a2963929901;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30068 = encode_clo(alloc_clo(lam30068_fptr, 0));

void* lam30070_fptr() // lam30070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30071 = arg_buffer[1];
//reading env and args
void* a2963829899 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29755 = (decode_clo(env30071))[6];
//not do dummy comment
void* lst = (decode_clo(env30071))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30071))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30071))[3];
//not do dummy comment
void* car = (decode_clo(env30071))[2];
//not do dummy comment
void* cons = (decode_clo(env30071))[1];

//creating new closure instance
void** clo30223 = alloc_clo(lam30068_fptr, 5);

//setting env list
clo30223[1] = kont29755;
clo30223[2] = a2963829899;
clo30223[3] = cons;
clo30223[4] = lst2;
clo30223[5] = reverse_u45helper;
void* f2975729900 = encode_clo(clo30223);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2975729900;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30070 = encode_clo(alloc_clo(lam30070_fptr, 0));

void* lam30072_fptr() // lam30072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30073 = arg_buffer[1];
//reading env and args
void* a2963729897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30073))[7];
//not do dummy comment
void* kont29755 = (decode_clo(env30073))[6];
//not do dummy comment
void* lst = (decode_clo(env30073))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30073))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30073))[3];
//not do dummy comment
void* car = (decode_clo(env30073))[2];
//not do dummy comment
void* cons = (decode_clo(env30073))[1];

//if-clause
bool if_guard30224 = is_true(a2963729897);
if(if_guard30224)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29755);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29755))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30226 = alloc_clo(lam30070_fptr, 6);

//setting env list
clo30226[1] = cons;
clo30226[2] = car;
clo30226[3] = lst2;
clo30226[4] = reverse_u45helper;
clo30226[5] = lst;
clo30226[6] = kont29755;
void* f2975829898 = encode_clo(clo30226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2975829898;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30072 = encode_clo(alloc_clo(lam30072_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30074 = arg_buffer[1];
//reading env and args
void* kont29755 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30228 = alloc_clo(lam30072_fptr, 7);

//setting env list
clo30228[1] = cons;
clo30228[2] = car;
clo30228[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo30228[4] = reverse_u45helper;
clo30228[5] = lst;
clo30228[6] = kont29755;
clo30228[7] = cdr;
void* f2975929896 = encode_clo(clo30228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2975929896;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam30075_fptr() // lam30075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30076 = arg_buffer[1];
//reading env and args
void* a2964129905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30076))[3];
//not do dummy comment
void* kont29760 = (decode_clo(env30076))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30076))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29760;
arg_buffer[3] = lst;
arg_buffer[4] = a2964129905;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30075 = encode_clo(alloc_clo(lam30075_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30077 = arg_buffer[1];
//reading env and args
void* kont29760 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo30230 = alloc_clo(lam30075_fptr, 3);

//setting env list
clo30230[1] = reverse_u45helper;
clo30230[2] = kont29760;
clo30230[3] = lst;
void* f2976129904 = encode_clo(clo30230);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2976129904;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam30078_fptr() // lam30078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30079 = arg_buffer[1];
//reading env and args
void* x2964429910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29762 = (decode_clo(env30079))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29762);
arg_buffer[2] = x2964429910;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29762))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30078 = encode_clo(alloc_clo(lam30078_fptr, 0));

void* lam30080_fptr() // lam30080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30081 = arg_buffer[1];
//reading env and args
void* a2964929919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2964729915 = (decode_clo(env30081))[4];
//not do dummy comment
void* kont29762 = (decode_clo(env30081))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30081))[2];
//not do dummy comment
void* a2964529912 = (decode_clo(env30081))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29762;
arg_buffer[3] = a2964529912;
arg_buffer[4] = a2964729915;
arg_buffer[5] = a2964929919;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30080 = encode_clo(alloc_clo(lam30080_fptr, 0));

void* lam30082_fptr() // lam30082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30083 = arg_buffer[1];
//reading env and args
void* a2964829917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2964729915 = (decode_clo(env30083))[6];
//not do dummy comment
void* kont29762 = (decode_clo(env30083))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30083))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30083))[3];
//not do dummy comment
void* cons = (decode_clo(env30083))[2];
//not do dummy comment
void* a2964529912 = (decode_clo(env30083))[1];

//creating new closure instance
void** clo30232 = alloc_clo(lam30080_fptr, 4);

//setting env list
clo30232[1] = a2964529912;
clo30232[2] = take_u45helper;
clo30232[3] = kont29762;
clo30232[4] = a2964729915;
void* f2976429918 = encode_clo(clo30232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2976429918;
arg_buffer[3] = a2964829917;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30082 = encode_clo(alloc_clo(lam30082_fptr, 0));

void* lam30084_fptr() // lam30084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30085 = arg_buffer[1];
//reading env and args
void* a2964729915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30085))[7];
//not do dummy comment
void* kont29762 = (decode_clo(env30085))[6];
//not do dummy comment
void* car = (decode_clo(env30085))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30085))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30085))[3];
//not do dummy comment
void* cons = (decode_clo(env30085))[2];
//not do dummy comment
void* a2964529912 = (decode_clo(env30085))[1];

//creating new closure instance
void** clo30234 = alloc_clo(lam30082_fptr, 6);

//setting env list
clo30234[1] = a2964529912;
clo30234[2] = cons;
clo30234[3] = lst2;
clo30234[4] = take_u45helper;
clo30234[5] = kont29762;
clo30234[6] = a2964729915;
void* f2976529916 = encode_clo(clo30234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2976529916;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30084 = encode_clo(alloc_clo(lam30084_fptr, 0));

void* lam30087_fptr() // lam30087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30088 = arg_buffer[1];
//reading env and args
void* a2964529912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30088))[8];
//not do dummy comment
void* kont29762 = (decode_clo(env30088))[7];
//not do dummy comment
void* cons = (decode_clo(env30088))[6];
//not do dummy comment
void* _u45 = (decode_clo(env30088))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30088))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30088))[3];
//not do dummy comment
void* n = (decode_clo(env30088))[2];
//not do dummy comment
void* car = (decode_clo(env30088))[1];
mpz_t* mpzvar30235 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30235, "1", 10);
void* a2964629913 = encode_mpz(mpzvar30235);

//creating new closure instance
void** clo30237 = alloc_clo(lam30084_fptr, 7);

//setting env list
clo30237[1] = a2964529912;
clo30237[2] = cons;
clo30237[3] = lst2;
clo30237[4] = take_u45helper;
clo30237[5] = car;
clo30237[6] = kont29762;
clo30237[7] = lst;
void* f2976629914 = encode_clo(clo30237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2976629914;
arg_buffer[3] = n;
arg_buffer[4] = a2964629913;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30087 = encode_clo(alloc_clo(lam30087_fptr, 0));

void* lam30089_fptr() // lam30089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30090 = arg_buffer[1];
//reading env and args
void* a2964329908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30090))[10];
//not do dummy comment
void* lst = (decode_clo(env30090))[9];
//not do dummy comment
void* reverse = (decode_clo(env30090))[8];
//not do dummy comment
void* kont29762 = (decode_clo(env30090))[7];
//not do dummy comment
void* cons = (decode_clo(env30090))[6];
//not do dummy comment
void* _u45 = (decode_clo(env30090))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30090))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30090))[3];
//not do dummy comment
void* n = (decode_clo(env30090))[2];
//not do dummy comment
void* car = (decode_clo(env30090))[1];

//if-clause
bool if_guard30238 = is_true(a2964329908);
if(if_guard30238)
{

//creating new closure instance
void** clo30240 = alloc_clo(lam30078_fptr, 1);

//setting env list
clo30240[1] = kont29762;
void* f2976329909 = encode_clo(clo30240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2976329909;
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
void** clo30242 = alloc_clo(lam30087_fptr, 8);

//setting env list
clo30242[1] = car;
clo30242[2] = n;
clo30242[3] = lst2;
clo30242[4] = take_u45helper;
clo30242[5] = _u45;
clo30242[6] = cons;
clo30242[7] = kont29762;
clo30242[8] = lst;
void* f2976729911 = encode_clo(clo30242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2976729911;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30089 = encode_clo(alloc_clo(lam30089_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30092 = arg_buffer[1];
//reading env and args
void* kont29762 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar30243 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30243, "0", 10);
void* a2964229906 = encode_mpz(mpzvar30243);

//creating new closure instance
void** clo30245 = alloc_clo(lam30089_fptr, 10);

//setting env list
clo30245[1] = car;
clo30245[2] = n;
clo30245[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo30245[4] = take_u45helper;
clo30245[5] = _u45;
clo30245[6] = cons;
clo30245[7] = kont29762;
clo30245[8] = reverse;
clo30245[9] = lst;
clo30245[10] = cdr;
void* f2976829907 = encode_clo(clo30245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2976829907;
arg_buffer[3] = n;
arg_buffer[4] = a2964229906;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam30093_fptr() // lam30093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30094 = arg_buffer[1];
//reading env and args
void* a2965029921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30094))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env30094))[3];
//not do dummy comment
void* n = (decode_clo(env30094))[2];
//not do dummy comment
void* kont29769 = (decode_clo(env30094))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29769;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2965029921;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30093 = encode_clo(alloc_clo(lam30093_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30095 = arg_buffer[1];
//reading env and args
void* kont29769 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30247 = alloc_clo(lam30093_fptr, 4);

//setting env list
clo30247[1] = kont29769;
clo30247[2] = n;
clo30247[3] = take_u45helper;
clo30247[4] = lst;
void* f2977029920 = encode_clo(clo30247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2977029920;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam30097_fptr() // lam30097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30098 = arg_buffer[1];
//reading env and args
void* a2965529929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29771 = (decode_clo(env30098))[3];
//not do dummy comment
void* _u43 = (decode_clo(env30098))[2];
//not do dummy comment
void* a2965329925 = (decode_clo(env30098))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont29771;
arg_buffer[3] = a2965329925;
arg_buffer[4] = a2965529929;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30097 = encode_clo(alloc_clo(lam30097_fptr, 0));

void* lam30099_fptr() // lam30099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30100 = arg_buffer[1];
//reading env and args
void* a2965429927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29771 = (decode_clo(env30100))[4];
//not do dummy comment
void* length = (decode_clo(env30100))[3];
//not do dummy comment
void* _u43 = (decode_clo(env30100))[2];
//not do dummy comment
void* a2965329925 = (decode_clo(env30100))[1];

//creating new closure instance
void** clo30249 = alloc_clo(lam30097_fptr, 3);

//setting env list
clo30249[1] = a2965329925;
clo30249[2] = _u43;
clo30249[3] = kont29771;
void* f2977229928 = encode_clo(clo30249);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2977229928;
arg_buffer[3] = a2965429927;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30099 = encode_clo(alloc_clo(lam30099_fptr, 0));

void* lam30102_fptr() // lam30102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30103 = arg_buffer[1];
//reading env and args
void* a2965129923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30103))[5];
//not do dummy comment
void* kont29771 = (decode_clo(env30103))[4];
//not do dummy comment
void* lst = (decode_clo(env30103))[3];
//not do dummy comment
void* length = (decode_clo(env30103))[2];
//not do dummy comment
void* _u43 = (decode_clo(env30103))[1];

//if-clause
bool if_guard30250 = is_true(a2965129923);
if(if_guard30250)
{
mpz_t* mpzvar30251 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30251, "0", 10);
void* x2965229924 = encode_mpz(mpzvar30251);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29771);
arg_buffer[2] = x2965229924;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29771))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar30252 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30252, "1", 10);
void* a2965329925 = encode_mpz(mpzvar30252);

//creating new closure instance
void** clo30254 = alloc_clo(lam30099_fptr, 4);

//setting env list
clo30254[1] = a2965329925;
clo30254[2] = _u43;
clo30254[3] = length;
clo30254[4] = kont29771;
void* f2977329926 = encode_clo(clo30254);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2977329926;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30102 = encode_clo(alloc_clo(lam30102_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30104 = arg_buffer[1];
//reading env and args
void* kont29771 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo30256 = alloc_clo(lam30102_fptr, 5);

//setting env list
clo30256[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo30256[2] = length;
clo30256[3] = lst;
clo30256[4] = kont29771;
clo30256[5] = cdr;
void* f2977429922 = encode_clo(clo30256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2977429922;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam30105_fptr() // lam30105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30106 = arg_buffer[1];
//reading env and args
void* x2965729933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29775 = (decode_clo(env30106))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29775);
arg_buffer[2] = x2965729933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29775))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30105 = encode_clo(alloc_clo(lam30105_fptr, 0));

void* lam30107_fptr() // lam30107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30108 = arg_buffer[1];
//reading env and args
void* a2966129941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29775 = (decode_clo(env30108))[3];
//not do dummy comment
void* a2965929937 = (decode_clo(env30108))[2];
//not do dummy comment
void* cons = (decode_clo(env30108))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29775;
arg_buffer[3] = a2965929937;
arg_buffer[4] = a2966129941;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30107 = encode_clo(alloc_clo(lam30107_fptr, 0));

void* lam30109_fptr() // lam30109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30110 = arg_buffer[1];
//reading env and args
void* a2966029939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2965929937 = (decode_clo(env30110))[5];
//not do dummy comment
void* proc = (decode_clo(env30110))[4];
//not do dummy comment
void* cons = (decode_clo(env30110))[3];
//not do dummy comment
void* map = (decode_clo(env30110))[2];
//not do dummy comment
void* kont29775 = (decode_clo(env30110))[1];

//creating new closure instance
void** clo30258 = alloc_clo(lam30107_fptr, 3);

//setting env list
clo30258[1] = cons;
clo30258[2] = a2965929937;
clo30258[3] = kont29775;
void* f2977729940 = encode_clo(clo30258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2977729940;
arg_buffer[3] = proc;
arg_buffer[4] = a2966029939;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30109 = encode_clo(alloc_clo(lam30109_fptr, 0));

void* lam30111_fptr() // lam30111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30112 = arg_buffer[1];
//reading env and args
void* a2965929937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30112))[6];
//not do dummy comment
void* lst = (decode_clo(env30112))[5];
//not do dummy comment
void* proc = (decode_clo(env30112))[4];
//not do dummy comment
void* cons = (decode_clo(env30112))[3];
//not do dummy comment
void* map = (decode_clo(env30112))[2];
//not do dummy comment
void* kont29775 = (decode_clo(env30112))[1];

//creating new closure instance
void** clo30260 = alloc_clo(lam30109_fptr, 5);

//setting env list
clo30260[1] = kont29775;
clo30260[2] = map;
clo30260[3] = cons;
clo30260[4] = proc;
clo30260[5] = a2965929937;
void* f2977829938 = encode_clo(clo30260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2977829938;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30111 = encode_clo(alloc_clo(lam30111_fptr, 0));

void* lam30113_fptr() // lam30113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30114 = arg_buffer[1];
//reading env and args
void* a2965829935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30114))[6];
//not do dummy comment
void* lst = (decode_clo(env30114))[5];
//not do dummy comment
void* proc = (decode_clo(env30114))[4];
//not do dummy comment
void* cons = (decode_clo(env30114))[3];
//not do dummy comment
void* map = (decode_clo(env30114))[2];
//not do dummy comment
void* kont29775 = (decode_clo(env30114))[1];

//creating new closure instance
void** clo30262 = alloc_clo(lam30111_fptr, 6);

//setting env list
clo30262[1] = kont29775;
clo30262[2] = map;
clo30262[3] = cons;
clo30262[4] = proc;
clo30262[5] = lst;
clo30262[6] = cdr;
void* f2977929936 = encode_clo(clo30262);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2977929936;
arg_buffer[3] = a2965829935;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30113 = encode_clo(alloc_clo(lam30113_fptr, 0));

void* lam30115_fptr() // lam30115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30116 = arg_buffer[1];
//reading env and args
void* a2965629931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30116))[8];
//not do dummy comment
void* proc = (decode_clo(env30116))[7];
//not do dummy comment
void* car = (decode_clo(env30116))[6];
//not do dummy comment
void* cons = (decode_clo(env30116))[5];
//not do dummy comment
void* list = (decode_clo(env30116))[4];
//not do dummy comment
void* cdr = (decode_clo(env30116))[3];
//not do dummy comment
void* map = (decode_clo(env30116))[2];
//not do dummy comment
void* kont29775 = (decode_clo(env30116))[1];

//if-clause
bool if_guard30263 = is_true(a2965629931);
if(if_guard30263)
{

//creating new closure instance
void** clo30265 = alloc_clo(lam30105_fptr, 1);

//setting env list
clo30265[1] = kont29775;
void* f2977629932 = encode_clo(clo30265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2977629932;
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
void** clo30267 = alloc_clo(lam30113_fptr, 6);

//setting env list
clo30267[1] = kont29775;
clo30267[2] = map;
clo30267[3] = cons;
clo30267[4] = proc;
clo30267[5] = lst;
clo30267[6] = cdr;
void* f2978029934 = encode_clo(clo30267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2978029934;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30115 = encode_clo(alloc_clo(lam30115_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30117 = arg_buffer[1];
//reading env and args
void* kont29775 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30269 = alloc_clo(lam30115_fptr, 8);

//setting env list
clo30269[1] = kont29775;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo30269[2] = map;
clo30269[3] = cdr;
clo30269[4] = list;
clo30269[5] = cons;
clo30269[6] = car;
clo30269[7] = proc;
clo30269[8] = lst;
void* f2978129930 = encode_clo(clo30269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2978129930;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam30118_fptr() // lam30118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30119 = arg_buffer[1];
//reading env and args
void* x2966329945 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29782 = (decode_clo(env30119))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29782);
arg_buffer[2] = x2966329945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30118 = encode_clo(alloc_clo(lam30118_fptr, 0));

void* lam30120_fptr() // lam30120 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30121 = arg_buffer[1];
//reading env and args
void* a2966829955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2966629951 = (decode_clo(env30121))[3];
//not do dummy comment
void* kont29782 = (decode_clo(env30121))[2];
//not do dummy comment
void* cons = (decode_clo(env30121))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29782;
arg_buffer[3] = a2966629951;
arg_buffer[4] = a2966829955;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30120 = encode_clo(alloc_clo(lam30120_fptr, 0));

void* lam30122_fptr() // lam30122 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30123 = arg_buffer[1];
//reading env and args
void* a2966729953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2966629951 = (decode_clo(env30123))[5];
//not do dummy comment
void* op = (decode_clo(env30123))[4];
//not do dummy comment
void* kont29782 = (decode_clo(env30123))[3];
//not do dummy comment
void* filter = (decode_clo(env30123))[2];
//not do dummy comment
void* cons = (decode_clo(env30123))[1];

//creating new closure instance
void** clo30271 = alloc_clo(lam30120_fptr, 3);

//setting env list
clo30271[1] = cons;
clo30271[2] = kont29782;
clo30271[3] = a2966629951;
void* f2978429954 = encode_clo(clo30271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2978429954;
arg_buffer[3] = op;
arg_buffer[4] = a2966729953;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30122 = encode_clo(alloc_clo(lam30122_fptr, 0));

void* lam30124_fptr() // lam30124 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30125 = arg_buffer[1];
//reading env and args
void* a2966629951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30125))[6];
//not do dummy comment
void* lst = (decode_clo(env30125))[5];
//not do dummy comment
void* op = (decode_clo(env30125))[4];
//not do dummy comment
void* kont29782 = (decode_clo(env30125))[3];
//not do dummy comment
void* filter = (decode_clo(env30125))[2];
//not do dummy comment
void* cons = (decode_clo(env30125))[1];

//creating new closure instance
void** clo30273 = alloc_clo(lam30122_fptr, 5);

//setting env list
clo30273[1] = cons;
clo30273[2] = filter;
clo30273[3] = kont29782;
clo30273[4] = op;
clo30273[5] = a2966629951;
void* f2978529952 = encode_clo(clo30273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2978529952;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30124 = encode_clo(alloc_clo(lam30124_fptr, 0));

void* lam30126_fptr() // lam30126 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30127 = arg_buffer[1];
//reading env and args
void* a2966929957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env30127))[3];
//not do dummy comment
void* kont29782 = (decode_clo(env30127))[2];
//not do dummy comment
void* filter = (decode_clo(env30127))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont29782;
arg_buffer[3] = op;
arg_buffer[4] = a2966929957;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30126 = encode_clo(alloc_clo(lam30126_fptr, 0));

void* lam30128_fptr() // lam30128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30129 = arg_buffer[1];
//reading env and args
void* a2966529949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30129))[7];
//not do dummy comment
void* lst = (decode_clo(env30129))[6];
//not do dummy comment
void* op = (decode_clo(env30129))[5];
//not do dummy comment
void* kont29782 = (decode_clo(env30129))[4];
//not do dummy comment
void* cons = (decode_clo(env30129))[3];
//not do dummy comment
void* filter = (decode_clo(env30129))[2];
//not do dummy comment
void* car = (decode_clo(env30129))[1];

//if-clause
bool if_guard30274 = is_true(a2966529949);
if(if_guard30274)
{

//creating new closure instance
void** clo30276 = alloc_clo(lam30124_fptr, 6);

//setting env list
clo30276[1] = cons;
clo30276[2] = filter;
clo30276[3] = kont29782;
clo30276[4] = op;
clo30276[5] = lst;
clo30276[6] = cdr;
void* f2978629950 = encode_clo(clo30276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2978629950;
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
void** clo30278 = alloc_clo(lam30126_fptr, 3);

//setting env list
clo30278[1] = filter;
clo30278[2] = kont29782;
clo30278[3] = op;
void* f2978729956 = encode_clo(clo30278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2978729956;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30128 = encode_clo(alloc_clo(lam30128_fptr, 0));

void* lam30130_fptr() // lam30130 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30131 = arg_buffer[1];
//reading env and args
void* a2966429947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30131))[7];
//not do dummy comment
void* lst = (decode_clo(env30131))[6];
//not do dummy comment
void* op = (decode_clo(env30131))[5];
//not do dummy comment
void* kont29782 = (decode_clo(env30131))[4];
//not do dummy comment
void* cons = (decode_clo(env30131))[3];
//not do dummy comment
void* filter = (decode_clo(env30131))[2];
//not do dummy comment
void* car = (decode_clo(env30131))[1];

//creating new closure instance
void** clo30280 = alloc_clo(lam30128_fptr, 7);

//setting env list
clo30280[1] = car;
clo30280[2] = filter;
clo30280[3] = cons;
clo30280[4] = kont29782;
clo30280[5] = op;
clo30280[6] = lst;
clo30280[7] = cdr;
void* f2978829948 = encode_clo(clo30280);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2978829948;
arg_buffer[3] = a2966429947;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30130 = encode_clo(alloc_clo(lam30130_fptr, 0));

void* lam30132_fptr() // lam30132 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30133 = arg_buffer[1];
//reading env and args
void* a2966229943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30133))[8];
//not do dummy comment
void* op = (decode_clo(env30133))[7];
//not do dummy comment
void* kont29782 = (decode_clo(env30133))[6];
//not do dummy comment
void* cons = (decode_clo(env30133))[5];
//not do dummy comment
void* list = (decode_clo(env30133))[4];
//not do dummy comment
void* cdr = (decode_clo(env30133))[3];
//not do dummy comment
void* filter = (decode_clo(env30133))[2];
//not do dummy comment
void* car = (decode_clo(env30133))[1];

//if-clause
bool if_guard30281 = is_true(a2966229943);
if(if_guard30281)
{

//creating new closure instance
void** clo30283 = alloc_clo(lam30118_fptr, 1);

//setting env list
clo30283[1] = kont29782;
void* f2978329944 = encode_clo(clo30283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2978329944;
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
void** clo30285 = alloc_clo(lam30130_fptr, 7);

//setting env list
clo30285[1] = car;
clo30285[2] = filter;
clo30285[3] = cons;
clo30285[4] = kont29782;
clo30285[5] = op;
clo30285[6] = lst;
clo30285[7] = cdr;
void* f2978929946 = encode_clo(clo30285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2978929946;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30132 = encode_clo(alloc_clo(lam30132_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30134 = arg_buffer[1];
//reading env and args
void* kont29782 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30287 = alloc_clo(lam30132_fptr, 8);

//setting env list
clo30287[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo30287[2] = filter;
clo30287[3] = cdr;
clo30287[4] = list;
clo30287[5] = cons;
clo30287[6] = kont29782;
clo30287[7] = op;
clo30287[8] = lst;
void* f2979029942 = encode_clo(clo30287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2979029942;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam30135_fptr() // lam30135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30136 = arg_buffer[1];
//reading env and args
void* a2967429965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2967229962 = (decode_clo(env30136))[3];
//not do dummy comment
void* drop = (decode_clo(env30136))[2];
//not do dummy comment
void* kont29791 = (decode_clo(env30136))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont29791;
arg_buffer[3] = a2967229962;
arg_buffer[4] = a2967429965;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30135 = encode_clo(alloc_clo(lam30135_fptr, 0));

void* lam30138_fptr() // lam30138 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30139 = arg_buffer[1];
//reading env and args
void* a2967229962 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env30139))[4];
//not do dummy comment
void* kont29791 = (decode_clo(env30139))[3];
//not do dummy comment
void* n = (decode_clo(env30139))[2];
//not do dummy comment
void* _u45 = (decode_clo(env30139))[1];
mpz_t* mpzvar30288 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30288, "1", 10);
void* a2967329963 = encode_mpz(mpzvar30288);

//creating new closure instance
void** clo30290 = alloc_clo(lam30135_fptr, 3);

//setting env list
clo30290[1] = kont29791;
clo30290[2] = drop;
clo30290[3] = a2967229962;
void* f2979229964 = encode_clo(clo30290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2979229964;
arg_buffer[3] = n;
arg_buffer[4] = a2967329963;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30138 = encode_clo(alloc_clo(lam30138_fptr, 0));

void* lam30140_fptr() // lam30140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30141 = arg_buffer[1];
//reading env and args
void* a2967129960 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30141))[6];
//not do dummy comment
void* kont29791 = (decode_clo(env30141))[5];
//not do dummy comment
void* n = (decode_clo(env30141))[4];
//not do dummy comment
void* _u45 = (decode_clo(env30141))[3];
//not do dummy comment
void* lst = (decode_clo(env30141))[2];
//not do dummy comment
void* drop = (decode_clo(env30141))[1];

//if-clause
bool if_guard30291 = is_true(a2967129960);
if(if_guard30291)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29791);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29791))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30293 = alloc_clo(lam30138_fptr, 4);

//setting env list
clo30293[1] = _u45;
clo30293[2] = n;
clo30293[3] = kont29791;
clo30293[4] = drop;
void* f2979329961 = encode_clo(clo30293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2979329961;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30140 = encode_clo(alloc_clo(lam30140_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30143 = arg_buffer[1];
//reading env and args
void* kont29791 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar30294 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30294, "0", 10);
void* a2967029958 = encode_mpz(mpzvar30294);

//creating new closure instance
void** clo30296 = alloc_clo(lam30140_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo30296[1] = drop;
clo30296[2] = lst;
clo30296[3] = _u45;
clo30296[4] = n;
clo30296[5] = kont29791;
clo30296[6] = cdr;
void* f2979429959 = encode_clo(clo30296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2979429959;
arg_buffer[3] = n;
arg_buffer[4] = a2967029958;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam30144_fptr() // lam30144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30145 = arg_buffer[1];
//reading env and args
void* a2967829973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2967629969 = (decode_clo(env30145))[3];
//not do dummy comment
void* kont29795 = (decode_clo(env30145))[2];
//not do dummy comment
void* proc = (decode_clo(env30145))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont29795;
arg_buffer[3] = a2967629969;
arg_buffer[4] = a2967829973;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30144 = encode_clo(alloc_clo(lam30144_fptr, 0));

void* lam30146_fptr() // lam30146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30147 = arg_buffer[1];
//reading env and args
void* a2967729971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env30147))[5];
//not do dummy comment
void* a2967629969 = (decode_clo(env30147))[4];
//not do dummy comment
void* kont29795 = (decode_clo(env30147))[3];
//not do dummy comment
void* proc = (decode_clo(env30147))[2];
//not do dummy comment
void* acc = (decode_clo(env30147))[1];

//creating new closure instance
void** clo30298 = alloc_clo(lam30144_fptr, 3);

//setting env list
clo30298[1] = proc;
clo30298[2] = kont29795;
clo30298[3] = a2967629969;
void* f2979629972 = encode_clo(clo30298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2979629972;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2967729971;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30146 = encode_clo(alloc_clo(lam30146_fptr, 0));

void* lam30148_fptr() // lam30148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30149 = arg_buffer[1];
//reading env and args
void* a2967629969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30149))[6];
//not do dummy comment
void* kont29795 = (decode_clo(env30149))[5];
//not do dummy comment
void* foldr = (decode_clo(env30149))[4];
//not do dummy comment
void* lst = (decode_clo(env30149))[3];
//not do dummy comment
void* proc = (decode_clo(env30149))[2];
//not do dummy comment
void* acc = (decode_clo(env30149))[1];

//creating new closure instance
void** clo30300 = alloc_clo(lam30146_fptr, 5);

//setting env list
clo30300[1] = acc;
clo30300[2] = proc;
clo30300[3] = kont29795;
clo30300[4] = a2967629969;
clo30300[5] = foldr;
void* f2979729970 = encode_clo(clo30300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2979729970;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30148 = encode_clo(alloc_clo(lam30148_fptr, 0));

void* lam30150_fptr() // lam30150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30151 = arg_buffer[1];
//reading env and args
void* a2967529967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30151))[7];
//not do dummy comment
void* kont29795 = (decode_clo(env30151))[6];
//not do dummy comment
void* car = (decode_clo(env30151))[5];
//not do dummy comment
void* foldr = (decode_clo(env30151))[4];
//not do dummy comment
void* lst = (decode_clo(env30151))[3];
//not do dummy comment
void* proc = (decode_clo(env30151))[2];
//not do dummy comment
void* acc = (decode_clo(env30151))[1];

//if-clause
bool if_guard30301 = is_true(a2967529967);
if(if_guard30301)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29795);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29795))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30303 = alloc_clo(lam30148_fptr, 6);

//setting env list
clo30303[1] = acc;
clo30303[2] = proc;
clo30303[3] = lst;
clo30303[4] = foldr;
clo30303[5] = kont29795;
clo30303[6] = cdr;
void* f2979829968 = encode_clo(clo30303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2979829968;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30150 = encode_clo(alloc_clo(lam30150_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30152 = arg_buffer[1];
//reading env and args
void* kont29795 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo30305 = alloc_clo(lam30150_fptr, 7);

//setting env list
clo30305[1] = acc;
clo30305[2] = proc;
clo30305[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo30305[4] = foldr;
clo30305[5] = car;
clo30305[6] = kont29795;
clo30305[7] = cdr;
void* f2979929966 = encode_clo(clo30305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2979929966;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam30153_fptr() // lam30153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30154 = arg_buffer[1];
//reading env and args
void* a2968229981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2968029977 = (decode_clo(env30154))[3];
//not do dummy comment
void* cons = (decode_clo(env30154))[2];
//not do dummy comment
void* kont29800 = (decode_clo(env30154))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29800;
arg_buffer[3] = a2968029977;
arg_buffer[4] = a2968229981;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30153 = encode_clo(alloc_clo(lam30153_fptr, 0));

void* lam30155_fptr() // lam30155 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30156 = arg_buffer[1];
//reading env and args
void* a2968129979 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env30156))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30156))[4];
//not do dummy comment
void* a2968029977 = (decode_clo(env30156))[3];
//not do dummy comment
void* cons = (decode_clo(env30156))[2];
//not do dummy comment
void* kont29800 = (decode_clo(env30156))[1];

//creating new closure instance
void** clo30307 = alloc_clo(lam30153_fptr, 3);

//setting env list
clo30307[1] = kont29800;
clo30307[2] = cons;
clo30307[3] = a2968029977;
void* f2980129980 = encode_clo(clo30307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2980129980;
arg_buffer[3] = a2968129979;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30155 = encode_clo(alloc_clo(lam30155_fptr, 0));

void* lam30157_fptr() // lam30157 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30158 = arg_buffer[1];
//reading env and args
void* a2968029977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30158))[6];
//not do dummy comment
void* append = (decode_clo(env30158))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30158))[4];
//not do dummy comment
void* lst1 = (decode_clo(env30158))[3];
//not do dummy comment
void* cons = (decode_clo(env30158))[2];
//not do dummy comment
void* kont29800 = (decode_clo(env30158))[1];

//creating new closure instance
void** clo30309 = alloc_clo(lam30155_fptr, 5);

//setting env list
clo30309[1] = kont29800;
clo30309[2] = cons;
clo30309[3] = a2968029977;
clo30309[4] = lst2;
clo30309[5] = append;
void* f2980229978 = encode_clo(clo30309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2980229978;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30157 = encode_clo(alloc_clo(lam30157_fptr, 0));

void* lam30159_fptr() // lam30159 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30160 = arg_buffer[1];
//reading env and args
void* a2967929975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30160))[7];
//not do dummy comment
void* append = (decode_clo(env30160))[6];
//not do dummy comment
void* lst2 = (decode_clo(env30160))[5];
//not do dummy comment
void* lst1 = (decode_clo(env30160))[4];
//not do dummy comment
void* car = (decode_clo(env30160))[3];
//not do dummy comment
void* cons = (decode_clo(env30160))[2];
//not do dummy comment
void* kont29800 = (decode_clo(env30160))[1];

//if-clause
bool if_guard30310 = is_true(a2967929975);
if(if_guard30310)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29800);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29800))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30312 = alloc_clo(lam30157_fptr, 6);

//setting env list
clo30312[1] = kont29800;
clo30312[2] = cons;
clo30312[3] = lst1;
clo30312[4] = lst2;
clo30312[5] = append;
clo30312[6] = cdr;
void* f2980329976 = encode_clo(clo30312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2980329976;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30159 = encode_clo(alloc_clo(lam30159_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30161 = arg_buffer[1];
//reading env and args
void* kont29800 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30314 = alloc_clo(lam30159_fptr, 7);

//setting env list
clo30314[1] = kont29800;
clo30314[2] = cons;
clo30314[3] = car;
clo30314[4] = lst1;
clo30314[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo30314[6] = append;
clo30314[7] = cdr;
void* f2980429974 = encode_clo(clo30314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2980429974;
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
void* _30162 = arg_buffer[1];
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

void* kont2980529982 = prim_car(lst);
void* lst29983 = prim_cdr(lst);
void* x2968329984 = apply_prim_hash(lst29983);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2980529982);
arg_buffer[2] = x2968329984;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2980529982))[0]);
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
void* _30163 = arg_buffer[1];
//reading env and args
void* kont29807 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2968429985 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29807);
arg_buffer[2] = x2968429985;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29807))[0]);
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
void* _30164 = arg_buffer[1];
//reading env and args
void* kont29808 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2968529986 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29808);
arg_buffer[2] = x2968529986;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29808))[0]);
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
void* _30165 = arg_buffer[1];
//reading env and args
void* kont29809 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2968629987 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29809);
arg_buffer[2] = x2968629987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29809))[0]);
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
void* _30166 = arg_buffer[1];
//reading env and args
void* kont29810 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2968729988 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29810);
arg_buffer[2] = x2968729988;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29810))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30167 = arg_buffer[1];
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

void* kont2981129989 = prim_car(lst);
void* lst29990 = prim_cdr(lst);
void* x2968829991 = apply_prim_set(lst29990);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2981129989);
arg_buffer[2] = x2968829991;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2981129989))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30168 = arg_buffer[1];
//reading env and args
void* kont29813 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2968929992 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29813);
arg_buffer[2] = x2968929992;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29813))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30169 = arg_buffer[1];
//reading env and args
void* kont29814 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2969029993 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29814);
arg_buffer[2] = x2969029993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29814))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30170 = arg_buffer[1];
//reading env and args
void* kont29815 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2969129994 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29815);
arg_buffer[2] = x2969129994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29815))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30171 = arg_buffer[1];
//reading env and args
void* kont29816 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2969229995 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29816);
arg_buffer[2] = x2969229995;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29816))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30172 = arg_buffer[1];
//reading env and args
void* kont29817 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2969329996 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29817);
arg_buffer[2] = x2969329996;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29817))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30173 = arg_buffer[1];
//reading env and args
void* kont29818 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2969429997 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29818);
arg_buffer[2] = x2969429997;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29818))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30174 = arg_buffer[1];
//reading env and args
void* kont29819 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x2969529998 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29819);
arg_buffer[2] = x2969529998;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29819))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30175 = arg_buffer[1];
//reading env and args
void* kont29820 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x2969629999 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29820);
arg_buffer[2] = x2969629999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29820))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30176 = arg_buffer[1];
//reading env and args
void* kont29821 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x2969730000 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29821);
arg_buffer[2] = x2969730000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29821))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30177 = arg_buffer[1];
//reading env and args
void* kont29822 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2969830001 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29822);
arg_buffer[2] = x2969830001;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29822))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam30182_fptr() // lam30182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30183 = arg_buffer[1];
//reading env and args
void* a2970530010 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env30183))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env30183))[2];
//not do dummy comment
void* kont29823 = (decode_clo(env30183))[1];

//if-clause
bool if_guard30315 = is_true(a2970530010);
if(if_guard30315)
{
mpz_t* mpzvar30316 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30316, "3", 10);
void* a2970630011 = encode_mpz(mpzvar30316);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont29823;
arg_buffer[3] = a2970630011;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar30317 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30317, "2", 10);
void* a2970730012 = encode_mpz(mpzvar30317);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont29823;
arg_buffer[3] = a2970730012;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30182 = encode_clo(alloc_clo(lam30182_fptr, 0));

void* lam30185_fptr() // lam30185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30186 = arg_buffer[1];
//reading env and args
void* a2970130005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env30186))[4];
//not do dummy comment
void* even_u63 = (decode_clo(env30186))[3];
//not do dummy comment
void* kont29823 = (decode_clo(env30186))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env30186))[1];

//if-clause
bool if_guard30318 = is_true(a2970130005);
if(if_guard30318)
{
mpz_t* mpzvar30319 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30319, "1", 10);
void* a2970230006 = encode_mpz(mpzvar30319);
mpz_t* mpzvar30320 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30320, "2", 10);
void* a2970330007 = encode_mpz(mpzvar30320);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29823;
arg_buffer[3] = a2970230006;
arg_buffer[4] = a2970330007;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar30321 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30321, "3", 10);
void* a2970430008 = encode_mpz(mpzvar30321);

//creating new closure instance
void** clo30323 = alloc_clo(lam30182_fptr, 3);

//setting env list
clo30323[1] = kont29823;
clo30323[2] = even_u63;
clo30323[3] = odd_u63;
void* f2982430009 = encode_clo(clo30323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f2982430009;
arg_buffer[3] = a2970430008;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30185 = encode_clo(alloc_clo(lam30185_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30189 = arg_buffer[1];
//reading env and args
void* kont29823 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar30324 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30324, "1", 10);
void* a2969930002 = encode_mpz(mpzvar30324);
mpz_t* mpzvar30325 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30325, "2", 10);
void* a2970030003 = encode_mpz(mpzvar30325);

//creating new closure instance
void** clo30327 = alloc_clo(lam30185_fptr, 4);

//setting env list
clo30327[1] = equal_u63;
clo30327[2] = kont29823;
clo30327[3] = even_u63;
clo30327[4] = odd_u63;
void* f2982530004 = encode_clo(clo30327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2982530004;
arg_buffer[3] = a2969930002;
arg_buffer[4] = a2970030003;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam30190_fptr() // lam30190 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30191 = arg_buffer[1];
//reading env and args
void* x2970830014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29826 = (decode_clo(env30191))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29826);
arg_buffer[2] = x2970830014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29826))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30190 = encode_clo(alloc_clo(lam30190_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30192 = arg_buffer[1];
//reading env and args
void* kont29826 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo30329 = alloc_clo(lam30190_fptr, 1);

//setting env list
clo30329[1] = kont29826;
void* f2982730013 = encode_clo(clo30329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2982730013;
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

