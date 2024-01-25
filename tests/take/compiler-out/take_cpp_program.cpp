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
void* _42029 = arg_buffer[1];
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

void* kont4172841846 = prim_car(lst);
void* lst41847 = prim_cdr(lst);
void* x4162341848 = apply_prim__u43(lst41847);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4172841846);
arg_buffer[2] = x4162341848;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4172841846))[0]);
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
void* _42030 = arg_buffer[1];
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

void* kont4173041849 = prim_car(lst);
void* lst41850 = prim_cdr(lst);
void* x4162441851 = apply_prim_max(lst41850);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4173041849);
arg_buffer[2] = x4162441851;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4173041849))[0]);
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
void* _42031 = arg_buffer[1];
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

void* kont4173241852 = prim_car(lst);
void* lst41853 = prim_cdr(lst);
void* x4162541854 = apply_prim__u45(lst41853);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4173241852);
arg_buffer[2] = x4162541854;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4173241852))[0]);
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
void* _42032 = arg_buffer[1];
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

void* kont4173441855 = prim_car(lst);
void* lst41856 = prim_cdr(lst);
void* x4162641857 = apply_prim__u42(lst41856);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4173441855);
arg_buffer[2] = x4162641857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4173441855))[0]);
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
void* _42033 = arg_buffer[1];
//reading env and args
void* kont41736 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4162741858 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41736);
arg_buffer[2] = x4162741858;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41736))[0]);
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
void* _42034 = arg_buffer[1];
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

void* kont4173741859 = prim_car(lst);
void* lst41860 = prim_cdr(lst);
void* x4162841861 = apply_prim__u47(lst41860);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4173741859);
arg_buffer[2] = x4162841861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4173741859))[0]);
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
void* _42035 = arg_buffer[1];
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

void* kont4173941862 = prim_car(lst);
void* lst41863 = prim_cdr(lst);
void* x4162941864 = apply_prim__u61(lst41863);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4173941862);
arg_buffer[2] = x4162941864;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4173941862))[0]);
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
void* _42036 = arg_buffer[1];
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

void* kont4174141865 = prim_car(lst);
void* lst41866 = prim_cdr(lst);
void* x4163041867 = apply_prim__u62(lst41866);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4174141865);
arg_buffer[2] = x4163041867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4174141865))[0]);
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
void* _42037 = arg_buffer[1];
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

void* kont4174341868 = prim_car(lst);
void* lst41869 = prim_cdr(lst);
void* x4163141870 = apply_prim__u60(lst41869);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4174341868);
arg_buffer[2] = x4163141870;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4174341868))[0]);
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
void* _42038 = arg_buffer[1];
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

void* kont4174541871 = prim_car(lst);
void* lst41872 = prim_cdr(lst);
void* x4163241873 = apply_prim__u60_u61(lst41872);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4174541871);
arg_buffer[2] = x4163241873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4174541871))[0]);
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
void* _42039 = arg_buffer[1];
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

void* kont4174741874 = prim_car(lst);
void* lst41875 = prim_cdr(lst);
void* x4163341876 = apply_prim__u62_u61(lst41875);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4174741874);
arg_buffer[2] = x4163341876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4174741874))[0]);
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
void* _42040 = arg_buffer[1];
//reading env and args
void* kont41749 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4163441877 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41749);
arg_buffer[2] = x4163441877;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41749))[0]);
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
void* _42041 = arg_buffer[1];
//reading env and args
void* kont41750 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4163541878 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41750);
arg_buffer[2] = x4163541878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41750))[0]);
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
void* _42042 = arg_buffer[1];
//reading env and args
void* kont41751 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4163641879 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41751);
arg_buffer[2] = x4163641879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41751))[0]);
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
void* _42043 = arg_buffer[1];
//reading env and args
void* kont41752 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4163741880 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41752);
arg_buffer[2] = x4163741880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41752))[0]);
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
void* _42044 = arg_buffer[1];
//reading env and args
void* kont41753 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4163841881 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41753);
arg_buffer[2] = x4163841881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41753))[0]);
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
void* _42045 = arg_buffer[1];
//reading env and args
void* kont41754 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4163941882 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41754);
arg_buffer[2] = x4163941882;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41754))[0]);
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
void* _42046 = arg_buffer[1];
//reading env and args
void* kont41755 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4164041883 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41755);
arg_buffer[2] = x4164041883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41755))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam42047_fptr() // lam42047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42048 = arg_buffer[1];
//reading env and args
void* a4164341887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env42048))[3];
//not do dummy comment
void* a4164141884 = (decode_clo(env42048))[2];
//not do dummy comment
void* kont41756 = (decode_clo(env42048))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont41756;
arg_buffer[3] = a4164141884;
arg_buffer[4] = a4164341887;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42047 = encode_clo(alloc_clo(lam42047_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42051 = arg_buffer[1];
//reading env and args
void* kont41756 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42203 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42203, "0", 10);
void* a4164141884 = encode_mpz(mpzvar42203);
mpz_t* mpzvar42204 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42204, "2", 10);
void* a4164241885 = encode_mpz(mpzvar42204);

//creating new closure instance
void** clo42206 = alloc_clo(lam42047_fptr, 3);

//setting env list
clo42206[1] = kont41756;
clo42206[2] = a4164141884;
clo42206[3] = equal_u63;
void* f4175741886 = encode_clo(clo42206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4175741886;
arg_buffer[3] = x;
arg_buffer[4] = a4164241885;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam42052_fptr() // lam42052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42053 = arg_buffer[1];
//reading env and args
void* a4164641891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4164441888 = (decode_clo(env42053))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env42053))[2];
//not do dummy comment
void* kont41758 = (decode_clo(env42053))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont41758;
arg_buffer[3] = a4164441888;
arg_buffer[4] = a4164641891;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42052 = encode_clo(alloc_clo(lam42052_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42056 = arg_buffer[1];
//reading env and args
void* kont41758 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42207 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42207, "1", 10);
void* a4164441888 = encode_mpz(mpzvar42207);
mpz_t* mpzvar42208 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42208, "2", 10);
void* a4164541889 = encode_mpz(mpzvar42208);

//creating new closure instance
void** clo42210 = alloc_clo(lam42052_fptr, 3);

//setting env list
clo42210[1] = kont41758;
clo42210[2] = equal_u63;
clo42210[3] = a4164441888;
void* f4175941890 = encode_clo(clo42210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4175941890;
arg_buffer[3] = x;
arg_buffer[4] = a4164541889;
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
void* _42057 = arg_buffer[1];
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

void* kont4176041892 = prim_car(x);
void* x41893 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4176041892);
arg_buffer[2] = x41893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4176041892))[0]);
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
void* _42058 = arg_buffer[1];
//reading env and args
void* kont41762 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4164741894 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41762);
arg_buffer[2] = x4164741894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41762))[0]);
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
void* _42059 = arg_buffer[1];
//reading env and args
void* kont41763 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4164841895 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41763);
arg_buffer[2] = x4164841895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41763))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam42062_fptr() // lam42062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42063 = arg_buffer[1];
//reading env and args
void* a4165441905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41764 = (decode_clo(env42063))[3];
//not do dummy comment
void* x = (decode_clo(env42063))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42063))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont41764;
arg_buffer[3] = x;
arg_buffer[4] = a4165441905;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42062 = encode_clo(alloc_clo(lam42062_fptr, 0));

void* lam42064_fptr() // lam42064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42065 = arg_buffer[1];
//reading env and args
void* a4165241902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42065))[5];
//not do dummy comment
void* lst = (decode_clo(env42065))[4];
//not do dummy comment
void* kont41764 = (decode_clo(env42065))[3];
//not do dummy comment
void* x = (decode_clo(env42065))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42065))[1];

//if-clause
bool if_guard42211 = is_true(a4165241902);
if(if_guard42211)
{
void* x4165341903 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41764);
arg_buffer[2] = x4165341903;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41764))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42213 = alloc_clo(lam42062_fptr, 3);

//setting env list
clo42213[1] = member_u63;
clo42213[2] = x;
clo42213[3] = kont41764;
void* f4176541904 = encode_clo(clo42213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4176541904;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42064 = encode_clo(alloc_clo(lam42064_fptr, 0));

void* lam42066_fptr() // lam42066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42067 = arg_buffer[1];
//reading env and args
void* a4165141900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42067))[6];
//not do dummy comment
void* lst = (decode_clo(env42067))[5];
//not do dummy comment
void* kont41764 = (decode_clo(env42067))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env42067))[3];
//not do dummy comment
void* x = (decode_clo(env42067))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42067))[1];

//creating new closure instance
void** clo42215 = alloc_clo(lam42064_fptr, 5);

//setting env list
clo42215[1] = member_u63;
clo42215[2] = x;
clo42215[3] = kont41764;
clo42215[4] = lst;
clo42215[5] = cdr;
void* f4176641901 = encode_clo(clo42215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4176641901;
arg_buffer[3] = a4165141900;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42066 = encode_clo(alloc_clo(lam42066_fptr, 0));

void* lam42068_fptr() // lam42068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42069 = arg_buffer[1];
//reading env and args
void* a4164941897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42069))[7];
//not do dummy comment
void* lst = (decode_clo(env42069))[6];
//not do dummy comment
void* kont41764 = (decode_clo(env42069))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env42069))[4];
//not do dummy comment
void* x = (decode_clo(env42069))[3];
//not do dummy comment
void* car = (decode_clo(env42069))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42069))[1];

//if-clause
bool if_guard42216 = is_true(a4164941897);
if(if_guard42216)
{
void* x4165041898 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41764);
arg_buffer[2] = x4165041898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41764))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42218 = alloc_clo(lam42066_fptr, 6);

//setting env list
clo42218[1] = member_u63;
clo42218[2] = x;
clo42218[3] = equal_u63;
clo42218[4] = kont41764;
clo42218[5] = lst;
clo42218[6] = cdr;
void* f4176741899 = encode_clo(clo42218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4176741899;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42068 = encode_clo(alloc_clo(lam42068_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42070 = arg_buffer[1];
//reading env and args
void* kont41764 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42220 = alloc_clo(lam42068_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo42220[1] = member_u63;
clo42220[2] = car;
clo42220[3] = x;
clo42220[4] = equal_u63;
clo42220[5] = kont41764;
clo42220[6] = lst;
clo42220[7] = cdr;
void* f4176841896 = encode_clo(clo42220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4176841896;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam42071_fptr() // lam42071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42072 = arg_buffer[1];
//reading env and args
void* a4165841913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4165741911 = (decode_clo(env42072))[4];
//not do dummy comment
void* foldl = (decode_clo(env42072))[3];
//not do dummy comment
void* kont41769 = (decode_clo(env42072))[2];
//not do dummy comment
void* fun = (decode_clo(env42072))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont41769;
arg_buffer[3] = fun;
arg_buffer[4] = a4165741911;
arg_buffer[5] = a4165841913;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42071 = encode_clo(alloc_clo(lam42071_fptr, 0));

void* lam42073_fptr() // lam42073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42074 = arg_buffer[1];
//reading env and args
void* a4165741911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42074))[5];
//not do dummy comment
void* lst = (decode_clo(env42074))[4];
//not do dummy comment
void* foldl = (decode_clo(env42074))[3];
//not do dummy comment
void* kont41769 = (decode_clo(env42074))[2];
//not do dummy comment
void* fun = (decode_clo(env42074))[1];

//creating new closure instance
void** clo42222 = alloc_clo(lam42071_fptr, 4);

//setting env list
clo42222[1] = fun;
clo42222[2] = kont41769;
clo42222[3] = foldl;
clo42222[4] = a4165741911;
void* f4177041912 = encode_clo(clo42222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4177041912;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42073 = encode_clo(alloc_clo(lam42073_fptr, 0));

void* lam42075_fptr() // lam42075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42076 = arg_buffer[1];
//reading env and args
void* a4165641909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42076))[6];
//not do dummy comment
void* lst = (decode_clo(env42076))[5];
//not do dummy comment
void* acc = (decode_clo(env42076))[4];
//not do dummy comment
void* foldl = (decode_clo(env42076))[3];
//not do dummy comment
void* kont41769 = (decode_clo(env42076))[2];
//not do dummy comment
void* fun = (decode_clo(env42076))[1];

//creating new closure instance
void** clo42224 = alloc_clo(lam42073_fptr, 5);

//setting env list
clo42224[1] = fun;
clo42224[2] = kont41769;
clo42224[3] = foldl;
clo42224[4] = lst;
clo42224[5] = cdr;
void* f4177141910 = encode_clo(clo42224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4177141910;
arg_buffer[3] = a4165641909;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42075 = encode_clo(alloc_clo(lam42075_fptr, 0));

void* lam42077_fptr() // lam42077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42078 = arg_buffer[1];
//reading env and args
void* a4165541907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42078))[7];
//not do dummy comment
void* lst = (decode_clo(env42078))[6];
//not do dummy comment
void* acc = (decode_clo(env42078))[5];
//not do dummy comment
void* car = (decode_clo(env42078))[4];
//not do dummy comment
void* foldl = (decode_clo(env42078))[3];
//not do dummy comment
void* kont41769 = (decode_clo(env42078))[2];
//not do dummy comment
void* fun = (decode_clo(env42078))[1];

//if-clause
bool if_guard42225 = is_true(a4165541907);
if(if_guard42225)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41769);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41769))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42227 = alloc_clo(lam42075_fptr, 6);

//setting env list
clo42227[1] = fun;
clo42227[2] = kont41769;
clo42227[3] = foldl;
clo42227[4] = acc;
clo42227[5] = lst;
clo42227[6] = cdr;
void* f4177241908 = encode_clo(clo42227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4177241908;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42077 = encode_clo(alloc_clo(lam42077_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42079 = arg_buffer[1];
//reading env and args
void* kont41769 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42229 = alloc_clo(lam42077_fptr, 7);

//setting env list
clo42229[1] = fun;
clo42229[2] = kont41769;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo42229[3] = foldl;
clo42229[4] = car;
clo42229[5] = acc;
clo42229[6] = lst;
clo42229[7] = cdr;
void* f4177341906 = encode_clo(clo42229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4177341906;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam42080_fptr() // lam42080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42081 = arg_buffer[1];
//reading env and args
void* a4166241921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42081))[3];
//not do dummy comment
void* a4166041917 = (decode_clo(env42081))[2];
//not do dummy comment
void* kont41774 = (decode_clo(env42081))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont41774;
arg_buffer[3] = a4166041917;
arg_buffer[4] = a4166241921;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42080 = encode_clo(alloc_clo(lam42080_fptr, 0));

void* lam42082_fptr() // lam42082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42083 = arg_buffer[1];
//reading env and args
void* a4166141919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42083))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42083))[4];
//not do dummy comment
void* kont41774 = (decode_clo(env42083))[3];
//not do dummy comment
void* cons = (decode_clo(env42083))[2];
//not do dummy comment
void* a4166041917 = (decode_clo(env42083))[1];

//creating new closure instance
void** clo42231 = alloc_clo(lam42080_fptr, 3);

//setting env list
clo42231[1] = kont41774;
clo42231[2] = a4166041917;
clo42231[3] = reverse_u45helper;
void* f4177541920 = encode_clo(clo42231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4177541920;
arg_buffer[3] = a4166141919;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42082 = encode_clo(alloc_clo(lam42082_fptr, 0));

void* lam42084_fptr() // lam42084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42085 = arg_buffer[1];
//reading env and args
void* a4166041917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42085))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42085))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42085))[4];
//not do dummy comment
void* car = (decode_clo(env42085))[3];
//not do dummy comment
void* cons = (decode_clo(env42085))[2];
//not do dummy comment
void* kont41774 = (decode_clo(env42085))[1];

//creating new closure instance
void** clo42233 = alloc_clo(lam42082_fptr, 5);

//setting env list
clo42233[1] = a4166041917;
clo42233[2] = cons;
clo42233[3] = kont41774;
clo42233[4] = lst2;
clo42233[5] = reverse_u45helper;
void* f4177641918 = encode_clo(clo42233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4177641918;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42084 = encode_clo(alloc_clo(lam42084_fptr, 0));

void* lam42086_fptr() // lam42086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42087 = arg_buffer[1];
//reading env and args
void* a4165941915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42087))[7];
//not do dummy comment
void* lst = (decode_clo(env42087))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42087))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42087))[4];
//not do dummy comment
void* car = (decode_clo(env42087))[3];
//not do dummy comment
void* cons = (decode_clo(env42087))[2];
//not do dummy comment
void* kont41774 = (decode_clo(env42087))[1];

//if-clause
bool if_guard42234 = is_true(a4165941915);
if(if_guard42234)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41774);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41774))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42236 = alloc_clo(lam42084_fptr, 6);

//setting env list
clo42236[1] = kont41774;
clo42236[2] = cons;
clo42236[3] = car;
clo42236[4] = lst2;
clo42236[5] = reverse_u45helper;
clo42236[6] = lst;
void* f4177741916 = encode_clo(clo42236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4177741916;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42086 = encode_clo(alloc_clo(lam42086_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42088 = arg_buffer[1];
//reading env and args
void* kont41774 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42238 = alloc_clo(lam42086_fptr, 7);

//setting env list
clo42238[1] = kont41774;
clo42238[2] = cons;
clo42238[3] = car;
clo42238[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo42238[5] = reverse_u45helper;
clo42238[6] = lst;
clo42238[7] = cdr;
void* f4177841914 = encode_clo(clo42238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4177841914;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam42089_fptr() // lam42089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42090 = arg_buffer[1];
//reading env and args
void* a4166341923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42090))[3];
//not do dummy comment
void* kont41779 = (decode_clo(env42090))[2];
//not do dummy comment
void* lst = (decode_clo(env42090))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont41779;
arg_buffer[3] = lst;
arg_buffer[4] = a4166341923;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42089 = encode_clo(alloc_clo(lam42089_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42091 = arg_buffer[1];
//reading env and args
void* kont41779 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42240 = alloc_clo(lam42089_fptr, 3);

//setting env list
clo42240[1] = lst;
clo42240[2] = kont41779;
clo42240[3] = reverse_u45helper;
void* f4178041922 = encode_clo(clo42240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4178041922;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam42092_fptr() // lam42092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42093 = arg_buffer[1];
//reading env and args
void* x4166641928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41781 = (decode_clo(env42093))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41781);
arg_buffer[2] = x4166641928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41781))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42092 = encode_clo(alloc_clo(lam42092_fptr, 0));

void* lam42094_fptr() // lam42094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42095 = arg_buffer[1];
//reading env and args
void* a4167141937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41781 = (decode_clo(env42095))[4];
//not do dummy comment
void* a4166741930 = (decode_clo(env42095))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42095))[2];
//not do dummy comment
void* a4166941933 = (decode_clo(env42095))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont41781;
arg_buffer[3] = a4166741930;
arg_buffer[4] = a4166941933;
arg_buffer[5] = a4167141937;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42094 = encode_clo(alloc_clo(lam42094_fptr, 0));

void* lam42096_fptr() // lam42096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42097 = arg_buffer[1];
//reading env and args
void* a4167041935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41781 = (decode_clo(env42097))[6];
//not do dummy comment
void* a4166741930 = (decode_clo(env42097))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42097))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42097))[3];
//not do dummy comment
void* cons = (decode_clo(env42097))[2];
//not do dummy comment
void* a4166941933 = (decode_clo(env42097))[1];

//creating new closure instance
void** clo42242 = alloc_clo(lam42094_fptr, 4);

//setting env list
clo42242[1] = a4166941933;
clo42242[2] = take_u45helper;
clo42242[3] = a4166741930;
clo42242[4] = kont41781;
void* f4178341936 = encode_clo(clo42242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4178341936;
arg_buffer[3] = a4167041935;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42096 = encode_clo(alloc_clo(lam42096_fptr, 0));

void* lam42098_fptr() // lam42098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42099 = arg_buffer[1];
//reading env and args
void* a4166941933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42099))[7];
//not do dummy comment
void* kont41781 = (decode_clo(env42099))[6];
//not do dummy comment
void* a4166741930 = (decode_clo(env42099))[5];
//not do dummy comment
void* car = (decode_clo(env42099))[4];
//not do dummy comment
void* cons = (decode_clo(env42099))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42099))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42099))[1];

//creating new closure instance
void** clo42244 = alloc_clo(lam42096_fptr, 6);

//setting env list
clo42244[1] = a4166941933;
clo42244[2] = cons;
clo42244[3] = lst2;
clo42244[4] = take_u45helper;
clo42244[5] = a4166741930;
clo42244[6] = kont41781;
void* f4178441934 = encode_clo(clo42244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4178441934;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42098 = encode_clo(alloc_clo(lam42098_fptr, 0));

void* lam42101_fptr() // lam42101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42102 = arg_buffer[1];
//reading env and args
void* a4166741930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42102))[8];
//not do dummy comment
void* kont41781 = (decode_clo(env42102))[7];
//not do dummy comment
void* cons = (decode_clo(env42102))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42102))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42102))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42102))[3];
//not do dummy comment
void* n = (decode_clo(env42102))[2];
//not do dummy comment
void* car = (decode_clo(env42102))[1];
mpz_t* mpzvar42245 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42245, "1", 10);
void* a4166841931 = encode_mpz(mpzvar42245);

//creating new closure instance
void** clo42247 = alloc_clo(lam42098_fptr, 7);

//setting env list
clo42247[1] = lst2;
clo42247[2] = take_u45helper;
clo42247[3] = cons;
clo42247[4] = car;
clo42247[5] = a4166741930;
clo42247[6] = kont41781;
clo42247[7] = lst;
void* f4178541932 = encode_clo(clo42247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4178541932;
arg_buffer[3] = n;
arg_buffer[4] = a4166841931;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42101 = encode_clo(alloc_clo(lam42101_fptr, 0));

void* lam42103_fptr() // lam42103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42104 = arg_buffer[1];
//reading env and args
void* a4166541926 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42104))[10];
//not do dummy comment
void* lst = (decode_clo(env42104))[9];
//not do dummy comment
void* kont41781 = (decode_clo(env42104))[8];
//not do dummy comment
void* reverse = (decode_clo(env42104))[7];
//not do dummy comment
void* cons = (decode_clo(env42104))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42104))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42104))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42104))[3];
//not do dummy comment
void* n = (decode_clo(env42104))[2];
//not do dummy comment
void* car = (decode_clo(env42104))[1];

//if-clause
bool if_guard42248 = is_true(a4166541926);
if(if_guard42248)
{

//creating new closure instance
void** clo42250 = alloc_clo(lam42092_fptr, 1);

//setting env list
clo42250[1] = kont41781;
void* f4178241927 = encode_clo(clo42250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4178241927;
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
void** clo42252 = alloc_clo(lam42101_fptr, 8);

//setting env list
clo42252[1] = car;
clo42252[2] = n;
clo42252[3] = lst2;
clo42252[4] = take_u45helper;
clo42252[5] = _u45;
clo42252[6] = cons;
clo42252[7] = kont41781;
clo42252[8] = lst;
void* f4178641929 = encode_clo(clo42252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4178641929;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42103 = encode_clo(alloc_clo(lam42103_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42106 = arg_buffer[1];
//reading env and args
void* kont41781 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar42253 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42253, "0", 10);
void* a4166441924 = encode_mpz(mpzvar42253);

//creating new closure instance
void** clo42255 = alloc_clo(lam42103_fptr, 10);

//setting env list
clo42255[1] = car;
clo42255[2] = n;
clo42255[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo42255[4] = take_u45helper;
clo42255[5] = _u45;
clo42255[6] = cons;
clo42255[7] = reverse;
clo42255[8] = kont41781;
clo42255[9] = lst;
clo42255[10] = cdr;
void* f4178741925 = encode_clo(clo42255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4178741925;
arg_buffer[3] = n;
arg_buffer[4] = a4166441924;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam42107_fptr() // lam42107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42108 = arg_buffer[1];
//reading env and args
void* a4167241939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42108))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env42108))[3];
//not do dummy comment
void* kont41788 = (decode_clo(env42108))[2];
//not do dummy comment
void* n = (decode_clo(env42108))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont41788;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4167241939;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42107 = encode_clo(alloc_clo(lam42107_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42109 = arg_buffer[1];
//reading env and args
void* kont41788 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42257 = alloc_clo(lam42107_fptr, 4);

//setting env list
clo42257[1] = n;
clo42257[2] = kont41788;
clo42257[3] = take_u45helper;
clo42257[4] = lst;
void* f4178941938 = encode_clo(clo42257);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4178941938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam42111_fptr() // lam42111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42112 = arg_buffer[1];
//reading env and args
void* a4167741947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4167541943 = (decode_clo(env42112))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42112))[2];
//not do dummy comment
void* kont41790 = (decode_clo(env42112))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont41790;
arg_buffer[3] = a4167541943;
arg_buffer[4] = a4167741947;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42111 = encode_clo(alloc_clo(lam42111_fptr, 0));

void* lam42113_fptr() // lam42113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42114 = arg_buffer[1];
//reading env and args
void* a4167641945 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env42114))[4];
//not do dummy comment
void* a4167541943 = (decode_clo(env42114))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42114))[2];
//not do dummy comment
void* kont41790 = (decode_clo(env42114))[1];

//creating new closure instance
void** clo42259 = alloc_clo(lam42111_fptr, 3);

//setting env list
clo42259[1] = kont41790;
clo42259[2] = _u43;
clo42259[3] = a4167541943;
void* f4179141946 = encode_clo(clo42259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4179141946;
arg_buffer[3] = a4167641945;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42113 = encode_clo(alloc_clo(lam42113_fptr, 0));

void* lam42116_fptr() // lam42116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42117 = arg_buffer[1];
//reading env and args
void* a4167341941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42117))[5];
//not do dummy comment
void* lst = (decode_clo(env42117))[4];
//not do dummy comment
void* length = (decode_clo(env42117))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42117))[2];
//not do dummy comment
void* kont41790 = (decode_clo(env42117))[1];

//if-clause
bool if_guard42260 = is_true(a4167341941);
if(if_guard42260)
{
mpz_t* mpzvar42261 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42261, "0", 10);
void* x4167441942 = encode_mpz(mpzvar42261);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41790);
arg_buffer[2] = x4167441942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41790))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar42262 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42262, "1", 10);
void* a4167541943 = encode_mpz(mpzvar42262);

//creating new closure instance
void** clo42264 = alloc_clo(lam42113_fptr, 4);

//setting env list
clo42264[1] = kont41790;
clo42264[2] = _u43;
clo42264[3] = a4167541943;
clo42264[4] = length;
void* f4179241944 = encode_clo(clo42264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4179241944;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42116 = encode_clo(alloc_clo(lam42116_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42118 = arg_buffer[1];
//reading env and args
void* kont41790 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42266 = alloc_clo(lam42116_fptr, 5);

//setting env list
clo42266[1] = kont41790;
clo42266[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo42266[3] = length;
clo42266[4] = lst;
clo42266[5] = cdr;
void* f4179341940 = encode_clo(clo42266);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4179341940;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam42119_fptr() // lam42119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42120 = arg_buffer[1];
//reading env and args
void* x4167941951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41794 = (decode_clo(env42120))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41794);
arg_buffer[2] = x4167941951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41794))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42119 = encode_clo(alloc_clo(lam42119_fptr, 0));

void* lam42121_fptr() // lam42121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42122 = arg_buffer[1];
//reading env and args
void* a4168341959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41794 = (decode_clo(env42122))[3];
//not do dummy comment
void* a4168141955 = (decode_clo(env42122))[2];
//not do dummy comment
void* cons = (decode_clo(env42122))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41794;
arg_buffer[3] = a4168141955;
arg_buffer[4] = a4168341959;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42121 = encode_clo(alloc_clo(lam42121_fptr, 0));

void* lam42123_fptr() // lam42123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42124 = arg_buffer[1];
//reading env and args
void* a4168241957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41794 = (decode_clo(env42124))[5];
//not do dummy comment
void* a4168141955 = (decode_clo(env42124))[4];
//not do dummy comment
void* map = (decode_clo(env42124))[3];
//not do dummy comment
void* proc = (decode_clo(env42124))[2];
//not do dummy comment
void* cons = (decode_clo(env42124))[1];

//creating new closure instance
void** clo42268 = alloc_clo(lam42121_fptr, 3);

//setting env list
clo42268[1] = cons;
clo42268[2] = a4168141955;
clo42268[3] = kont41794;
void* f4179641958 = encode_clo(clo42268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4179641958;
arg_buffer[3] = proc;
arg_buffer[4] = a4168241957;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42123 = encode_clo(alloc_clo(lam42123_fptr, 0));

void* lam42125_fptr() // lam42125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42126 = arg_buffer[1];
//reading env and args
void* a4168141955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42126))[6];
//not do dummy comment
void* kont41794 = (decode_clo(env42126))[5];
//not do dummy comment
void* lst = (decode_clo(env42126))[4];
//not do dummy comment
void* map = (decode_clo(env42126))[3];
//not do dummy comment
void* proc = (decode_clo(env42126))[2];
//not do dummy comment
void* cons = (decode_clo(env42126))[1];

//creating new closure instance
void** clo42270 = alloc_clo(lam42123_fptr, 5);

//setting env list
clo42270[1] = cons;
clo42270[2] = proc;
clo42270[3] = map;
clo42270[4] = a4168141955;
clo42270[5] = kont41794;
void* f4179741956 = encode_clo(clo42270);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4179741956;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42125 = encode_clo(alloc_clo(lam42125_fptr, 0));

void* lam42127_fptr() // lam42127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42128 = arg_buffer[1];
//reading env and args
void* a4168041953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42128))[6];
//not do dummy comment
void* kont41794 = (decode_clo(env42128))[5];
//not do dummy comment
void* lst = (decode_clo(env42128))[4];
//not do dummy comment
void* map = (decode_clo(env42128))[3];
//not do dummy comment
void* proc = (decode_clo(env42128))[2];
//not do dummy comment
void* cons = (decode_clo(env42128))[1];

//creating new closure instance
void** clo42272 = alloc_clo(lam42125_fptr, 6);

//setting env list
clo42272[1] = cons;
clo42272[2] = proc;
clo42272[3] = map;
clo42272[4] = lst;
clo42272[5] = kont41794;
clo42272[6] = cdr;
void* f4179841954 = encode_clo(clo42272);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4179841954;
arg_buffer[3] = a4168041953;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42127 = encode_clo(alloc_clo(lam42127_fptr, 0));

void* lam42129_fptr() // lam42129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42130 = arg_buffer[1];
//reading env and args
void* a4167841949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41794 = (decode_clo(env42130))[8];
//not do dummy comment
void* lst = (decode_clo(env42130))[7];
//not do dummy comment
void* map = (decode_clo(env42130))[6];
//not do dummy comment
void* proc = (decode_clo(env42130))[5];
//not do dummy comment
void* car = (decode_clo(env42130))[4];
//not do dummy comment
void* cons = (decode_clo(env42130))[3];
//not do dummy comment
void* list = (decode_clo(env42130))[2];
//not do dummy comment
void* cdr = (decode_clo(env42130))[1];

//if-clause
bool if_guard42273 = is_true(a4167841949);
if(if_guard42273)
{

//creating new closure instance
void** clo42275 = alloc_clo(lam42119_fptr, 1);

//setting env list
clo42275[1] = kont41794;
void* f4179541950 = encode_clo(clo42275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4179541950;
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
void** clo42277 = alloc_clo(lam42127_fptr, 6);

//setting env list
clo42277[1] = cons;
clo42277[2] = proc;
clo42277[3] = map;
clo42277[4] = lst;
clo42277[5] = kont41794;
clo42277[6] = cdr;
void* f4179941952 = encode_clo(clo42277);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4179941952;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42129 = encode_clo(alloc_clo(lam42129_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42131 = arg_buffer[1];
//reading env and args
void* kont41794 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42279 = alloc_clo(lam42129_fptr, 8);

//setting env list
clo42279[1] = cdr;
clo42279[2] = list;
clo42279[3] = cons;
clo42279[4] = car;
clo42279[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo42279[6] = map;
clo42279[7] = lst;
clo42279[8] = kont41794;
void* f4180041948 = encode_clo(clo42279);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4180041948;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam42132_fptr() // lam42132 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42133 = arg_buffer[1];
//reading env and args
void* x4168541963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41801 = (decode_clo(env42133))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41801);
arg_buffer[2] = x4168541963;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41801))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42132 = encode_clo(alloc_clo(lam42132_fptr, 0));

void* lam42134_fptr() // lam42134 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42135 = arg_buffer[1];
//reading env and args
void* a4169041973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4168841969 = (decode_clo(env42135))[3];
//not do dummy comment
void* kont41801 = (decode_clo(env42135))[2];
//not do dummy comment
void* cons = (decode_clo(env42135))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41801;
arg_buffer[3] = a4168841969;
arg_buffer[4] = a4169041973;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42134 = encode_clo(alloc_clo(lam42134_fptr, 0));

void* lam42136_fptr() // lam42136 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42137 = arg_buffer[1];
//reading env and args
void* a4168941971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4168841969 = (decode_clo(env42137))[5];
//not do dummy comment
void* op = (decode_clo(env42137))[4];
//not do dummy comment
void* kont41801 = (decode_clo(env42137))[3];
//not do dummy comment
void* filter = (decode_clo(env42137))[2];
//not do dummy comment
void* cons = (decode_clo(env42137))[1];

//creating new closure instance
void** clo42281 = alloc_clo(lam42134_fptr, 3);

//setting env list
clo42281[1] = cons;
clo42281[2] = kont41801;
clo42281[3] = a4168841969;
void* f4180341972 = encode_clo(clo42281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4180341972;
arg_buffer[3] = op;
arg_buffer[4] = a4168941971;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42136 = encode_clo(alloc_clo(lam42136_fptr, 0));

void* lam42138_fptr() // lam42138 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42139 = arg_buffer[1];
//reading env and args
void* a4168841969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42139))[6];
//not do dummy comment
void* lst = (decode_clo(env42139))[5];
//not do dummy comment
void* op = (decode_clo(env42139))[4];
//not do dummy comment
void* kont41801 = (decode_clo(env42139))[3];
//not do dummy comment
void* filter = (decode_clo(env42139))[2];
//not do dummy comment
void* cons = (decode_clo(env42139))[1];

//creating new closure instance
void** clo42283 = alloc_clo(lam42136_fptr, 5);

//setting env list
clo42283[1] = cons;
clo42283[2] = filter;
clo42283[3] = kont41801;
clo42283[4] = op;
clo42283[5] = a4168841969;
void* f4180441970 = encode_clo(clo42283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4180441970;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42138 = encode_clo(alloc_clo(lam42138_fptr, 0));

void* lam42140_fptr() // lam42140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42141 = arg_buffer[1];
//reading env and args
void* a4169141975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env42141))[3];
//not do dummy comment
void* kont41801 = (decode_clo(env42141))[2];
//not do dummy comment
void* filter = (decode_clo(env42141))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont41801;
arg_buffer[3] = op;
arg_buffer[4] = a4169141975;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42140 = encode_clo(alloc_clo(lam42140_fptr, 0));

void* lam42142_fptr() // lam42142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42143 = arg_buffer[1];
//reading env and args
void* a4168741967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42143))[7];
//not do dummy comment
void* lst = (decode_clo(env42143))[6];
//not do dummy comment
void* op = (decode_clo(env42143))[5];
//not do dummy comment
void* kont41801 = (decode_clo(env42143))[4];
//not do dummy comment
void* cons = (decode_clo(env42143))[3];
//not do dummy comment
void* filter = (decode_clo(env42143))[2];
//not do dummy comment
void* car = (decode_clo(env42143))[1];

//if-clause
bool if_guard42284 = is_true(a4168741967);
if(if_guard42284)
{

//creating new closure instance
void** clo42286 = alloc_clo(lam42138_fptr, 6);

//setting env list
clo42286[1] = cons;
clo42286[2] = filter;
clo42286[3] = kont41801;
clo42286[4] = op;
clo42286[5] = lst;
clo42286[6] = cdr;
void* f4180541968 = encode_clo(clo42286);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4180541968;
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
void** clo42288 = alloc_clo(lam42140_fptr, 3);

//setting env list
clo42288[1] = filter;
clo42288[2] = kont41801;
clo42288[3] = op;
void* f4180641974 = encode_clo(clo42288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4180641974;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42142 = encode_clo(alloc_clo(lam42142_fptr, 0));

void* lam42144_fptr() // lam42144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42145 = arg_buffer[1];
//reading env and args
void* a4168641965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42145))[7];
//not do dummy comment
void* lst = (decode_clo(env42145))[6];
//not do dummy comment
void* op = (decode_clo(env42145))[5];
//not do dummy comment
void* kont41801 = (decode_clo(env42145))[4];
//not do dummy comment
void* cons = (decode_clo(env42145))[3];
//not do dummy comment
void* filter = (decode_clo(env42145))[2];
//not do dummy comment
void* car = (decode_clo(env42145))[1];

//creating new closure instance
void** clo42290 = alloc_clo(lam42142_fptr, 7);

//setting env list
clo42290[1] = car;
clo42290[2] = filter;
clo42290[3] = cons;
clo42290[4] = kont41801;
clo42290[5] = op;
clo42290[6] = lst;
clo42290[7] = cdr;
void* f4180741966 = encode_clo(clo42290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4180741966;
arg_buffer[3] = a4168641965;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42144 = encode_clo(alloc_clo(lam42144_fptr, 0));

void* lam42146_fptr() // lam42146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42147 = arg_buffer[1];
//reading env and args
void* a4168441961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42147))[8];
//not do dummy comment
void* op = (decode_clo(env42147))[7];
//not do dummy comment
void* kont41801 = (decode_clo(env42147))[6];
//not do dummy comment
void* cons = (decode_clo(env42147))[5];
//not do dummy comment
void* list = (decode_clo(env42147))[4];
//not do dummy comment
void* cdr = (decode_clo(env42147))[3];
//not do dummy comment
void* filter = (decode_clo(env42147))[2];
//not do dummy comment
void* car = (decode_clo(env42147))[1];

//if-clause
bool if_guard42291 = is_true(a4168441961);
if(if_guard42291)
{

//creating new closure instance
void** clo42293 = alloc_clo(lam42132_fptr, 1);

//setting env list
clo42293[1] = kont41801;
void* f4180241962 = encode_clo(clo42293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4180241962;
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
void** clo42295 = alloc_clo(lam42144_fptr, 7);

//setting env list
clo42295[1] = car;
clo42295[2] = filter;
clo42295[3] = cons;
clo42295[4] = kont41801;
clo42295[5] = op;
clo42295[6] = lst;
clo42295[7] = cdr;
void* f4180841964 = encode_clo(clo42295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4180841964;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42146 = encode_clo(alloc_clo(lam42146_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42148 = arg_buffer[1];
//reading env and args
void* kont41801 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42297 = alloc_clo(lam42146_fptr, 8);

//setting env list
clo42297[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo42297[2] = filter;
clo42297[3] = cdr;
clo42297[4] = list;
clo42297[5] = cons;
clo42297[6] = kont41801;
clo42297[7] = op;
clo42297[8] = lst;
void* f4180941960 = encode_clo(clo42297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4180941960;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam42149_fptr() // lam42149 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42150 = arg_buffer[1];
//reading env and args
void* a4169641983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41810 = (decode_clo(env42150))[3];
//not do dummy comment
void* drop = (decode_clo(env42150))[2];
//not do dummy comment
void* a4169441980 = (decode_clo(env42150))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont41810;
arg_buffer[3] = a4169441980;
arg_buffer[4] = a4169641983;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42149 = encode_clo(alloc_clo(lam42149_fptr, 0));

void* lam42152_fptr() // lam42152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42153 = arg_buffer[1];
//reading env and args
void* a4169441980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41810 = (decode_clo(env42153))[4];
//not do dummy comment
void* drop = (decode_clo(env42153))[3];
//not do dummy comment
void* n = (decode_clo(env42153))[2];
//not do dummy comment
void* _u45 = (decode_clo(env42153))[1];
mpz_t* mpzvar42298 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42298, "1", 10);
void* a4169541981 = encode_mpz(mpzvar42298);

//creating new closure instance
void** clo42300 = alloc_clo(lam42149_fptr, 3);

//setting env list
clo42300[1] = a4169441980;
clo42300[2] = drop;
clo42300[3] = kont41810;
void* f4181141982 = encode_clo(clo42300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4181141982;
arg_buffer[3] = n;
arg_buffer[4] = a4169541981;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42152 = encode_clo(alloc_clo(lam42152_fptr, 0));

void* lam42154_fptr() // lam42154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42155 = arg_buffer[1];
//reading env and args
void* a4169341978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42155))[6];
//not do dummy comment
void* kont41810 = (decode_clo(env42155))[5];
//not do dummy comment
void* n = (decode_clo(env42155))[4];
//not do dummy comment
void* _u45 = (decode_clo(env42155))[3];
//not do dummy comment
void* lst = (decode_clo(env42155))[2];
//not do dummy comment
void* drop = (decode_clo(env42155))[1];

//if-clause
bool if_guard42301 = is_true(a4169341978);
if(if_guard42301)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41810);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41810))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42303 = alloc_clo(lam42152_fptr, 4);

//setting env list
clo42303[1] = _u45;
clo42303[2] = n;
clo42303[3] = drop;
clo42303[4] = kont41810;
void* f4181241979 = encode_clo(clo42303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4181241979;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42154 = encode_clo(alloc_clo(lam42154_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42157 = arg_buffer[1];
//reading env and args
void* kont41810 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar42304 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42304, "0", 10);
void* a4169241976 = encode_mpz(mpzvar42304);

//creating new closure instance
void** clo42306 = alloc_clo(lam42154_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo42306[1] = drop;
clo42306[2] = lst;
clo42306[3] = _u45;
clo42306[4] = n;
clo42306[5] = kont41810;
clo42306[6] = cdr;
void* f4181341977 = encode_clo(clo42306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4181341977;
arg_buffer[3] = n;
arg_buffer[4] = a4169241976;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam42158_fptr() // lam42158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42159 = arg_buffer[1];
//reading env and args
void* a4170041991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4169841987 = (decode_clo(env42159))[3];
//not do dummy comment
void* kont41814 = (decode_clo(env42159))[2];
//not do dummy comment
void* proc = (decode_clo(env42159))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont41814;
arg_buffer[3] = a4169841987;
arg_buffer[4] = a4170041991;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42158 = encode_clo(alloc_clo(lam42158_fptr, 0));

void* lam42160_fptr() // lam42160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42161 = arg_buffer[1];
//reading env and args
void* a4169941989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41814 = (decode_clo(env42161))[5];
//not do dummy comment
void* foldr = (decode_clo(env42161))[4];
//not do dummy comment
void* a4169841987 = (decode_clo(env42161))[3];
//not do dummy comment
void* proc = (decode_clo(env42161))[2];
//not do dummy comment
void* acc = (decode_clo(env42161))[1];

//creating new closure instance
void** clo42308 = alloc_clo(lam42158_fptr, 3);

//setting env list
clo42308[1] = proc;
clo42308[2] = kont41814;
clo42308[3] = a4169841987;
void* f4181541990 = encode_clo(clo42308);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4181541990;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4169941989;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42160 = encode_clo(alloc_clo(lam42160_fptr, 0));

void* lam42162_fptr() // lam42162 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42163 = arg_buffer[1];
//reading env and args
void* a4169841987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42163))[6];
//not do dummy comment
void* kont41814 = (decode_clo(env42163))[5];
//not do dummy comment
void* foldr = (decode_clo(env42163))[4];
//not do dummy comment
void* lst = (decode_clo(env42163))[3];
//not do dummy comment
void* proc = (decode_clo(env42163))[2];
//not do dummy comment
void* acc = (decode_clo(env42163))[1];

//creating new closure instance
void** clo42310 = alloc_clo(lam42160_fptr, 5);

//setting env list
clo42310[1] = acc;
clo42310[2] = proc;
clo42310[3] = a4169841987;
clo42310[4] = foldr;
clo42310[5] = kont41814;
void* f4181641988 = encode_clo(clo42310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4181641988;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42162 = encode_clo(alloc_clo(lam42162_fptr, 0));

void* lam42164_fptr() // lam42164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42165 = arg_buffer[1];
//reading env and args
void* a4169741985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42165))[7];
//not do dummy comment
void* kont41814 = (decode_clo(env42165))[6];
//not do dummy comment
void* car = (decode_clo(env42165))[5];
//not do dummy comment
void* foldr = (decode_clo(env42165))[4];
//not do dummy comment
void* lst = (decode_clo(env42165))[3];
//not do dummy comment
void* proc = (decode_clo(env42165))[2];
//not do dummy comment
void* acc = (decode_clo(env42165))[1];

//if-clause
bool if_guard42311 = is_true(a4169741985);
if(if_guard42311)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41814);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41814))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42313 = alloc_clo(lam42162_fptr, 6);

//setting env list
clo42313[1] = acc;
clo42313[2] = proc;
clo42313[3] = lst;
clo42313[4] = foldr;
clo42313[5] = kont41814;
clo42313[6] = cdr;
void* f4181741986 = encode_clo(clo42313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4181741986;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42164 = encode_clo(alloc_clo(lam42164_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42166 = arg_buffer[1];
//reading env and args
void* kont41814 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42315 = alloc_clo(lam42164_fptr, 7);

//setting env list
clo42315[1] = acc;
clo42315[2] = proc;
clo42315[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo42315[4] = foldr;
clo42315[5] = car;
clo42315[6] = kont41814;
clo42315[7] = cdr;
void* f4181841984 = encode_clo(clo42315);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4181841984;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam42167_fptr() // lam42167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42168 = arg_buffer[1];
//reading env and args
void* a4170441999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env42168))[3];
//not do dummy comment
void* kont41819 = (decode_clo(env42168))[2];
//not do dummy comment
void* a4170241995 = (decode_clo(env42168))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41819;
arg_buffer[3] = a4170241995;
arg_buffer[4] = a4170441999;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42167 = encode_clo(alloc_clo(lam42167_fptr, 0));

void* lam42169_fptr() // lam42169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42170 = arg_buffer[1];
//reading env and args
void* a4170341997 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env42170))[5];
//not do dummy comment
void* cons = (decode_clo(env42170))[4];
//not do dummy comment
void* kont41819 = (decode_clo(env42170))[3];
//not do dummy comment
void* lst2 = (decode_clo(env42170))[2];
//not do dummy comment
void* a4170241995 = (decode_clo(env42170))[1];

//creating new closure instance
void** clo42317 = alloc_clo(lam42167_fptr, 3);

//setting env list
clo42317[1] = a4170241995;
clo42317[2] = kont41819;
clo42317[3] = cons;
void* f4182041998 = encode_clo(clo42317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4182041998;
arg_buffer[3] = a4170341997;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42169 = encode_clo(alloc_clo(lam42169_fptr, 0));

void* lam42171_fptr() // lam42171 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42172 = arg_buffer[1];
//reading env and args
void* a4170241995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42172))[6];
//not do dummy comment
void* append = (decode_clo(env42172))[5];
//not do dummy comment
void* lst1 = (decode_clo(env42172))[4];
//not do dummy comment
void* cons = (decode_clo(env42172))[3];
//not do dummy comment
void* kont41819 = (decode_clo(env42172))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42172))[1];

//creating new closure instance
void** clo42319 = alloc_clo(lam42169_fptr, 5);

//setting env list
clo42319[1] = a4170241995;
clo42319[2] = lst2;
clo42319[3] = kont41819;
clo42319[4] = cons;
clo42319[5] = append;
void* f4182141996 = encode_clo(clo42319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4182141996;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42171 = encode_clo(alloc_clo(lam42171_fptr, 0));

void* lam42173_fptr() // lam42173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42174 = arg_buffer[1];
//reading env and args
void* a4170141993 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42174))[7];
//not do dummy comment
void* append = (decode_clo(env42174))[6];
//not do dummy comment
void* cons = (decode_clo(env42174))[5];
//not do dummy comment
void* kont41819 = (decode_clo(env42174))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42174))[3];
//not do dummy comment
void* lst1 = (decode_clo(env42174))[2];
//not do dummy comment
void* car = (decode_clo(env42174))[1];

//if-clause
bool if_guard42320 = is_true(a4170141993);
if(if_guard42320)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41819);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41819))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42322 = alloc_clo(lam42171_fptr, 6);

//setting env list
clo42322[1] = lst2;
clo42322[2] = kont41819;
clo42322[3] = cons;
clo42322[4] = lst1;
clo42322[5] = append;
clo42322[6] = cdr;
void* f4182241994 = encode_clo(clo42322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4182241994;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42173 = encode_clo(alloc_clo(lam42173_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42175 = arg_buffer[1];
//reading env and args
void* kont41819 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42324 = alloc_clo(lam42173_fptr, 7);

//setting env list
clo42324[1] = car;
clo42324[2] = lst1;
clo42324[3] = lst2;
clo42324[4] = kont41819;
clo42324[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo42324[6] = append;
clo42324[7] = cdr;
void* f4182341992 = encode_clo(clo42324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4182341992;
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
void* _42176 = arg_buffer[1];
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

void* kont4182442000 = prim_car(lst);
void* lst42001 = prim_cdr(lst);
void* x4170542002 = apply_prim_hash(lst42001);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4182442000);
arg_buffer[2] = x4170542002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4182442000))[0]);
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
void* _42177 = arg_buffer[1];
//reading env and args
void* kont41826 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4170642003 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41826);
arg_buffer[2] = x4170642003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41826))[0]);
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
void* _42178 = arg_buffer[1];
//reading env and args
void* kont41827 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4170742004 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41827);
arg_buffer[2] = x4170742004;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41827))[0]);
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
void* _42179 = arg_buffer[1];
//reading env and args
void* kont41828 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4170842005 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41828);
arg_buffer[2] = x4170842005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41828))[0]);
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
void* _42180 = arg_buffer[1];
//reading env and args
void* kont41829 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4170942006 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41829);
arg_buffer[2] = x4170942006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41829))[0]);
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
void* _42181 = arg_buffer[1];
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

void* kont4183042007 = prim_car(lst);
void* lst42008 = prim_cdr(lst);
void* x4171042009 = apply_prim_set(lst42008);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4183042007);
arg_buffer[2] = x4171042009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4183042007))[0]);
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
void* _42182 = arg_buffer[1];
//reading env and args
void* kont41832 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4171142010 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41832);
arg_buffer[2] = x4171142010;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41832))[0]);
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
void* _42183 = arg_buffer[1];
//reading env and args
void* kont41833 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4171242011 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41833);
arg_buffer[2] = x4171242011;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41833))[0]);
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
void* _42184 = arg_buffer[1];
//reading env and args
void* kont41834 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4171342012 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41834);
arg_buffer[2] = x4171342012;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41834))[0]);
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
void* _42185 = arg_buffer[1];
//reading env and args
void* kont41835 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4171442013 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41835);
arg_buffer[2] = x4171442013;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41835))[0]);
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
void* _42186 = arg_buffer[1];
//reading env and args
void* kont41836 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4171542014 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41836);
arg_buffer[2] = x4171542014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41836))[0]);
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
void* _42187 = arg_buffer[1];
//reading env and args
void* kont41837 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4171642015 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41837);
arg_buffer[2] = x4171642015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41837))[0]);
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
void* _42188 = arg_buffer[1];
//reading env and args
void* kont41838 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x4171742016 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41838);
arg_buffer[2] = x4171742016;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41838))[0]);
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
void* _42189 = arg_buffer[1];
//reading env and args
void* kont41839 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x4171842017 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41839);
arg_buffer[2] = x4171842017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41839))[0]);
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
void* _42190 = arg_buffer[1];
//reading env and args
void* kont41840 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x4171942018 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41840);
arg_buffer[2] = x4171942018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41840))[0]);
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
void* _42191 = arg_buffer[1];
//reading env and args
void* kont41841 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4172042019 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41841);
arg_buffer[2] = x4172042019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41841))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam42193_fptr() // lam42193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42194 = arg_buffer[1];
//reading env and args
void* a4172542025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41842 = (decode_clo(env42194))[2];
//not do dummy comment
void* take = (decode_clo(env42194))[1];
mpz_t* mpzvar42325 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42325, "2", 10);
void* a4172642026 = encode_mpz(mpzvar42325);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take);
arg_buffer[2] = kont41842;
arg_buffer[3] = a4172542025;
arg_buffer[4] = a4172642026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42193 = encode_clo(alloc_clo(lam42193_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42199 = arg_buffer[1];
//reading env and args
void* kont41842 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar42326 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42326, "1", 10);
void* a4172142020 = encode_mpz(mpzvar42326);
mpz_t* mpzvar42327 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42327, "2", 10);
void* a4172242021 = encode_mpz(mpzvar42327);
mpz_t* mpzvar42328 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42328, "3", 10);
void* a4172342022 = encode_mpz(mpzvar42328);
mpz_t* mpzvar42329 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42329, "4", 10);
void* a4172442023 = encode_mpz(mpzvar42329);

//creating new closure instance
void** clo42331 = alloc_clo(lam42193_fptr, 2);

//setting env list
clo42331[1] = take;
clo42331[2] = kont41842;
void* f4184342024 = encode_clo(clo42331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4184342024;
arg_buffer[3] = a4172142020;
arg_buffer[4] = a4172242021;
arg_buffer[5] = a4172342022;
arg_buffer[6] = a4172442023;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam42200_fptr() // lam42200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42201 = arg_buffer[1];
//reading env and args
void* x4172742028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41844 = (decode_clo(env42201))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41844);
arg_buffer[2] = x4172742028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41844))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42200 = encode_clo(alloc_clo(lam42200_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42202 = arg_buffer[1];
//reading env and args
void* kont41844 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo42333 = alloc_clo(lam42200_fptr, 1);

//setting env list
clo42333[1] = kont41844;
void* f4184542027 = encode_clo(clo42333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4184542027;
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

