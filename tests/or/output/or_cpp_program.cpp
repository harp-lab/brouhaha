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
void* _93036 = arg_buffer[1];
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

void* kont9276692868 = prim_car(lst);
void* lst92869 = prim_cdr(lst);
void* x9267392870 = apply_prim__u43(lst92869);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9276692868);
arg_buffer[2] = x9267392870;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9276692868))[0]);
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
void* _93037 = arg_buffer[1];
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

void* kont9276892871 = prim_car(lst);
void* lst92872 = prim_cdr(lst);
void* x9267492873 = apply_prim__u45(lst92872);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9276892871);
arg_buffer[2] = x9267492873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9276892871))[0]);
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
void* _93038 = arg_buffer[1];
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

void* kont9277092874 = prim_car(lst);
void* lst92875 = prim_cdr(lst);
void* x9267592876 = apply_prim__u42(lst92875);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9277092874);
arg_buffer[2] = x9267592876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9277092874))[0]);
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
void* _93039 = arg_buffer[1];
//reading env and args
void* kont92772 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9267692877 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92772);
arg_buffer[2] = x9267692877;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92772))[0]);
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
void* _93040 = arg_buffer[1];
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

void* kont9277392878 = prim_car(lst);
void* lst92879 = prim_cdr(lst);
void* x9267792880 = apply_prim__u47(lst92879);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9277392878);
arg_buffer[2] = x9267792880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9277392878))[0]);
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
void* _93041 = arg_buffer[1];
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

void* kont9277592881 = prim_car(lst);
void* lst92882 = prim_cdr(lst);
void* x9267892883 = apply_prim__u61(lst92882);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9277592881);
arg_buffer[2] = x9267892883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9277592881))[0]);
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
void* _93042 = arg_buffer[1];
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

void* kont9277792884 = prim_car(lst);
void* lst92885 = prim_cdr(lst);
void* x9267992886 = apply_prim__u62(lst92885);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9277792884);
arg_buffer[2] = x9267992886;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9277792884))[0]);
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
void* _93043 = arg_buffer[1];
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

void* kont9277992887 = prim_car(lst);
void* lst92888 = prim_cdr(lst);
void* x9268092889 = apply_prim__u60(lst92888);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9277992887);
arg_buffer[2] = x9268092889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9277992887))[0]);
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
void* _93044 = arg_buffer[1];
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

void* kont9278192890 = prim_car(lst);
void* lst92891 = prim_cdr(lst);
void* x9268192892 = apply_prim__u60_u61(lst92891);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9278192890);
arg_buffer[2] = x9268192892;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9278192890))[0]);
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
void* _93045 = arg_buffer[1];
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

void* kont9278392893 = prim_car(lst);
void* lst92894 = prim_cdr(lst);
void* x9268292895 = apply_prim__u62_u61(lst92894);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9278392893);
arg_buffer[2] = x9268292895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9278392893))[0]);
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
void* _93046 = arg_buffer[1];
//reading env and args
void* kont92785 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x9268392896 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92785);
arg_buffer[2] = x9268392896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92785))[0]);
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
void* _93047 = arg_buffer[1];
//reading env and args
void* kont92786 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9268492897 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92786);
arg_buffer[2] = x9268492897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92786))[0]);
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
void* _93048 = arg_buffer[1];
//reading env and args
void* kont92787 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9268592898 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92787);
arg_buffer[2] = x9268592898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92787))[0]);
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
void* _93049 = arg_buffer[1];
//reading env and args
void* kont92788 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9268692899 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92788);
arg_buffer[2] = x9268692899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92788))[0]);
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
void* _93050 = arg_buffer[1];
//reading env and args
void* kont92789 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9268792900 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92789);
arg_buffer[2] = x9268792900;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92789))[0]);
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
void* _93051 = arg_buffer[1];
//reading env and args
void* kont92790 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9268892901 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92790);
arg_buffer[2] = x9268892901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92790))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam93052_fptr() // lam93052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93053 = arg_buffer[1];
//reading env and args
void* a9269192905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env93053))[3];
//not do dummy comment
void* a9268992902 = (decode_clo(env93053))[2];
//not do dummy comment
void* kont92791 = (decode_clo(env93053))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont92791;
arg_buffer[3] = a9268992902;
arg_buffer[4] = a9269192905;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93052 = encode_clo(alloc_clo(lam93052_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93056 = arg_buffer[1];
//reading env and args
void* kont92791 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar94599 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94599, "0", 10);
void* a9268992902 = encode_mpz(mpzvar94599);
mpz_t* mpzvar94600 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94600, "2", 10);
void* a9269092903 = encode_mpz(mpzvar94600);

//creating new closure instance
void** clo94602 = alloc_clo(lam93052_fptr, 3);

//setting env list
clo94602[1] = kont92791;
clo94602[2] = a9268992902;
clo94602[3] = equal_u63;
void* f9279292904 = encode_clo(clo94602);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9279292904;
arg_buffer[3] = x;
arg_buffer[4] = a9269092903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam93057_fptr() // lam93057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93058 = arg_buffer[1];
//reading env and args
void* a9269492909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92793 = (decode_clo(env93058))[3];
//not do dummy comment
void* a9269292906 = (decode_clo(env93058))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env93058))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont92793;
arg_buffer[3] = a9269292906;
arg_buffer[4] = a9269492909;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93057 = encode_clo(alloc_clo(lam93057_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93061 = arg_buffer[1];
//reading env and args
void* kont92793 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar94603 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94603, "1", 10);
void* a9269292906 = encode_mpz(mpzvar94603);
mpz_t* mpzvar94604 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94604, "2", 10);
void* a9269392907 = encode_mpz(mpzvar94604);

//creating new closure instance
void** clo94606 = alloc_clo(lam93057_fptr, 3);

//setting env list
clo94606[1] = equal_u63;
clo94606[2] = a9269292906;
clo94606[3] = kont92793;
void* f9279492908 = encode_clo(clo94606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9279492908;
arg_buffer[3] = x;
arg_buffer[4] = a9269392907;
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
void* _93062 = arg_buffer[1];
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

void* kont9279592910 = prim_car(x);
void* x92911 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9279592910);
arg_buffer[2] = x92911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9279592910))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam93065_fptr() // lam93065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93066 = arg_buffer[1];
//reading env and args
void* a9270092921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92797 = (decode_clo(env93066))[3];
//not do dummy comment
void* x = (decode_clo(env93066))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env93066))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont92797;
arg_buffer[3] = x;
arg_buffer[4] = a9270092921;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93065 = encode_clo(alloc_clo(lam93065_fptr, 0));

void* lam93067_fptr() // lam93067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93068 = arg_buffer[1];
//reading env and args
void* a9269892918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93068))[5];
//not do dummy comment
void* lst = (decode_clo(env93068))[4];
//not do dummy comment
void* kont92797 = (decode_clo(env93068))[3];
//not do dummy comment
void* x = (decode_clo(env93068))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env93068))[1];

//if-clause
bool if_guard94607 = is_true(a9269892918);
if(if_guard94607)
{
void* x9269992919 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92797);
arg_buffer[2] = x9269992919;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92797))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo94609 = alloc_clo(lam93065_fptr, 3);

//setting env list
clo94609[1] = member_u63;
clo94609[2] = x;
clo94609[3] = kont92797;
void* f9279892920 = encode_clo(clo94609);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9279892920;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93067 = encode_clo(alloc_clo(lam93067_fptr, 0));

void* lam93069_fptr() // lam93069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93070 = arg_buffer[1];
//reading env and args
void* a9269792916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93070))[6];
//not do dummy comment
void* lst = (decode_clo(env93070))[5];
//not do dummy comment
void* kont92797 = (decode_clo(env93070))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env93070))[3];
//not do dummy comment
void* x = (decode_clo(env93070))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env93070))[1];

//creating new closure instance
void** clo94611 = alloc_clo(lam93067_fptr, 5);

//setting env list
clo94611[1] = member_u63;
clo94611[2] = x;
clo94611[3] = kont92797;
clo94611[4] = lst;
clo94611[5] = cdr;
void* f9279992917 = encode_clo(clo94611);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9279992917;
arg_buffer[3] = a9269792916;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93069 = encode_clo(alloc_clo(lam93069_fptr, 0));

void* lam93071_fptr() // lam93071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93072 = arg_buffer[1];
//reading env and args
void* a9269592913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93072))[7];
//not do dummy comment
void* lst = (decode_clo(env93072))[6];
//not do dummy comment
void* kont92797 = (decode_clo(env93072))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env93072))[4];
//not do dummy comment
void* x = (decode_clo(env93072))[3];
//not do dummy comment
void* car = (decode_clo(env93072))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env93072))[1];

//if-clause
bool if_guard94612 = is_true(a9269592913);
if(if_guard94612)
{
void* x9269692914 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92797);
arg_buffer[2] = x9269692914;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92797))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo94614 = alloc_clo(lam93069_fptr, 6);

//setting env list
clo94614[1] = member_u63;
clo94614[2] = x;
clo94614[3] = equal_u63;
clo94614[4] = kont92797;
clo94614[5] = lst;
clo94614[6] = cdr;
void* f9280092915 = encode_clo(clo94614);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9280092915;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93071 = encode_clo(alloc_clo(lam93071_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93073 = arg_buffer[1];
//reading env and args
void* kont92797 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo94616 = alloc_clo(lam93071_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo94616[1] = member_u63;
clo94616[2] = car;
clo94616[3] = x;
clo94616[4] = equal_u63;
clo94616[5] = kont92797;
clo94616[6] = lst;
clo94616[7] = cdr;
void* f9280192912 = encode_clo(clo94616);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9280192912;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam93074_fptr() // lam93074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93075 = arg_buffer[1];
//reading env and args
void* a9270492929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9270392927 = (decode_clo(env93075))[4];
//not do dummy comment
void* foldl = (decode_clo(env93075))[3];
//not do dummy comment
void* fun = (decode_clo(env93075))[2];
//not do dummy comment
void* kont92802 = (decode_clo(env93075))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont92802;
arg_buffer[3] = fun;
arg_buffer[4] = a9270392927;
arg_buffer[5] = a9270492929;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93074 = encode_clo(alloc_clo(lam93074_fptr, 0));

void* lam93076_fptr() // lam93076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93077 = arg_buffer[1];
//reading env and args
void* a9270392927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93077))[5];
//not do dummy comment
void* lst = (decode_clo(env93077))[4];
//not do dummy comment
void* foldl = (decode_clo(env93077))[3];
//not do dummy comment
void* fun = (decode_clo(env93077))[2];
//not do dummy comment
void* kont92802 = (decode_clo(env93077))[1];

//creating new closure instance
void** clo94618 = alloc_clo(lam93074_fptr, 4);

//setting env list
clo94618[1] = kont92802;
clo94618[2] = fun;
clo94618[3] = foldl;
clo94618[4] = a9270392927;
void* f9280392928 = encode_clo(clo94618);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9280392928;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93076 = encode_clo(alloc_clo(lam93076_fptr, 0));

void* lam93078_fptr() // lam93078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93079 = arg_buffer[1];
//reading env and args
void* a9270292925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93079))[6];
//not do dummy comment
void* lst = (decode_clo(env93079))[5];
//not do dummy comment
void* acc = (decode_clo(env93079))[4];
//not do dummy comment
void* foldl = (decode_clo(env93079))[3];
//not do dummy comment
void* fun = (decode_clo(env93079))[2];
//not do dummy comment
void* kont92802 = (decode_clo(env93079))[1];

//creating new closure instance
void** clo94620 = alloc_clo(lam93076_fptr, 5);

//setting env list
clo94620[1] = kont92802;
clo94620[2] = fun;
clo94620[3] = foldl;
clo94620[4] = lst;
clo94620[5] = cdr;
void* f9280492926 = encode_clo(clo94620);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f9280492926;
arg_buffer[3] = a9270292925;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93078 = encode_clo(alloc_clo(lam93078_fptr, 0));

void* lam93080_fptr() // lam93080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93081 = arg_buffer[1];
//reading env and args
void* a9270192923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93081))[7];
//not do dummy comment
void* lst = (decode_clo(env93081))[6];
//not do dummy comment
void* acc = (decode_clo(env93081))[5];
//not do dummy comment
void* car = (decode_clo(env93081))[4];
//not do dummy comment
void* foldl = (decode_clo(env93081))[3];
//not do dummy comment
void* fun = (decode_clo(env93081))[2];
//not do dummy comment
void* kont92802 = (decode_clo(env93081))[1];

//if-clause
bool if_guard94621 = is_true(a9270192923);
if(if_guard94621)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92802);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92802))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo94623 = alloc_clo(lam93078_fptr, 6);

//setting env list
clo94623[1] = kont92802;
clo94623[2] = fun;
clo94623[3] = foldl;
clo94623[4] = acc;
clo94623[5] = lst;
clo94623[6] = cdr;
void* f9280592924 = encode_clo(clo94623);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9280592924;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93080 = encode_clo(alloc_clo(lam93080_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93082 = arg_buffer[1];
//reading env and args
void* kont92802 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo94625 = alloc_clo(lam93080_fptr, 7);

//setting env list
clo94625[1] = kont92802;
clo94625[2] = fun;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo94625[3] = foldl;
clo94625[4] = car;
clo94625[5] = acc;
clo94625[6] = lst;
clo94625[7] = cdr;
void* f9280692922 = encode_clo(clo94625);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9280692922;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam93083_fptr() // lam93083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93084 = arg_buffer[1];
//reading env and args
void* a9270892937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env93084))[3];
//not do dummy comment
void* a9270692933 = (decode_clo(env93084))[2];
//not do dummy comment
void* kont92807 = (decode_clo(env93084))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont92807;
arg_buffer[3] = a9270692933;
arg_buffer[4] = a9270892937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93083 = encode_clo(alloc_clo(lam93083_fptr, 0));

void* lam93085_fptr() // lam93085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93086 = arg_buffer[1];
//reading env and args
void* a9270792935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env93086))[5];
//not do dummy comment
void* lst2 = (decode_clo(env93086))[4];
//not do dummy comment
void* a9270692933 = (decode_clo(env93086))[3];
//not do dummy comment
void* cons = (decode_clo(env93086))[2];
//not do dummy comment
void* kont92807 = (decode_clo(env93086))[1];

//creating new closure instance
void** clo94627 = alloc_clo(lam93083_fptr, 3);

//setting env list
clo94627[1] = kont92807;
clo94627[2] = a9270692933;
clo94627[3] = reverse_u45helper;
void* f9280892936 = encode_clo(clo94627);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9280892936;
arg_buffer[3] = a9270792935;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93085 = encode_clo(alloc_clo(lam93085_fptr, 0));

void* lam93087_fptr() // lam93087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93088 = arg_buffer[1];
//reading env and args
void* a9270692933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env93088))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env93088))[5];
//not do dummy comment
void* lst2 = (decode_clo(env93088))[4];
//not do dummy comment
void* car = (decode_clo(env93088))[3];
//not do dummy comment
void* cons = (decode_clo(env93088))[2];
//not do dummy comment
void* kont92807 = (decode_clo(env93088))[1];

//creating new closure instance
void** clo94629 = alloc_clo(lam93085_fptr, 5);

//setting env list
clo94629[1] = kont92807;
clo94629[2] = cons;
clo94629[3] = a9270692933;
clo94629[4] = lst2;
clo94629[5] = reverse_u45helper;
void* f9280992934 = encode_clo(clo94629);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9280992934;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93087 = encode_clo(alloc_clo(lam93087_fptr, 0));

void* lam93089_fptr() // lam93089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93090 = arg_buffer[1];
//reading env and args
void* a9270592931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93090))[7];
//not do dummy comment
void* lst = (decode_clo(env93090))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env93090))[5];
//not do dummy comment
void* lst2 = (decode_clo(env93090))[4];
//not do dummy comment
void* car = (decode_clo(env93090))[3];
//not do dummy comment
void* cons = (decode_clo(env93090))[2];
//not do dummy comment
void* kont92807 = (decode_clo(env93090))[1];

//if-clause
bool if_guard94630 = is_true(a9270592931);
if(if_guard94630)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92807);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92807))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo94632 = alloc_clo(lam93087_fptr, 6);

//setting env list
clo94632[1] = kont92807;
clo94632[2] = cons;
clo94632[3] = car;
clo94632[4] = lst2;
clo94632[5] = reverse_u45helper;
clo94632[6] = lst;
void* f9281092932 = encode_clo(clo94632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9281092932;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93089 = encode_clo(alloc_clo(lam93089_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93091 = arg_buffer[1];
//reading env and args
void* kont92807 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo94634 = alloc_clo(lam93089_fptr, 7);

//setting env list
clo94634[1] = kont92807;
clo94634[2] = cons;
clo94634[3] = car;
clo94634[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo94634[5] = reverse_u45helper;
clo94634[6] = lst;
clo94634[7] = cdr;
void* f9281192930 = encode_clo(clo94634);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9281192930;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam93092_fptr() // lam93092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93093 = arg_buffer[1];
//reading env and args
void* a9270992939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env93093))[3];
//not do dummy comment
void* kont92812 = (decode_clo(env93093))[2];
//not do dummy comment
void* lst = (decode_clo(env93093))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont92812;
arg_buffer[3] = lst;
arg_buffer[4] = a9270992939;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93092 = encode_clo(alloc_clo(lam93092_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93094 = arg_buffer[1];
//reading env and args
void* kont92812 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo94636 = alloc_clo(lam93092_fptr, 3);

//setting env list
clo94636[1] = lst;
clo94636[2] = kont92812;
clo94636[3] = reverse_u45helper;
void* f9281392938 = encode_clo(clo94636);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9281392938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam93095_fptr() // lam93095 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93096 = arg_buffer[1];
//reading env and args
void* x9271292944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92814 = (decode_clo(env93096))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92814);
arg_buffer[2] = x9271292944;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92814))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93095 = encode_clo(alloc_clo(lam93095_fptr, 0));

void* lam93097_fptr() // lam93097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93098 = arg_buffer[1];
//reading env and args
void* a9271792953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92814 = (decode_clo(env93098))[4];
//not do dummy comment
void* a9271392946 = (decode_clo(env93098))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env93098))[2];
//not do dummy comment
void* a9271592949 = (decode_clo(env93098))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont92814;
arg_buffer[3] = a9271392946;
arg_buffer[4] = a9271592949;
arg_buffer[5] = a9271792953;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93097 = encode_clo(alloc_clo(lam93097_fptr, 0));

void* lam93099_fptr() // lam93099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93100 = arg_buffer[1];
//reading env and args
void* a9271692951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92814 = (decode_clo(env93100))[6];
//not do dummy comment
void* a9271392946 = (decode_clo(env93100))[5];
//not do dummy comment
void* a9271592949 = (decode_clo(env93100))[4];
//not do dummy comment
void* cons = (decode_clo(env93100))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env93100))[2];
//not do dummy comment
void* lst2 = (decode_clo(env93100))[1];

//creating new closure instance
void** clo94638 = alloc_clo(lam93097_fptr, 4);

//setting env list
clo94638[1] = a9271592949;
clo94638[2] = take_u45helper;
clo94638[3] = a9271392946;
clo94638[4] = kont92814;
void* f9281692952 = encode_clo(clo94638);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9281692952;
arg_buffer[3] = a9271692951;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93099 = encode_clo(alloc_clo(lam93099_fptr, 0));

void* lam93101_fptr() // lam93101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93102 = arg_buffer[1];
//reading env and args
void* a9271592949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env93102))[7];
//not do dummy comment
void* kont92814 = (decode_clo(env93102))[6];
//not do dummy comment
void* a9271392946 = (decode_clo(env93102))[5];
//not do dummy comment
void* car = (decode_clo(env93102))[4];
//not do dummy comment
void* cons = (decode_clo(env93102))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env93102))[2];
//not do dummy comment
void* lst2 = (decode_clo(env93102))[1];

//creating new closure instance
void** clo94640 = alloc_clo(lam93099_fptr, 6);

//setting env list
clo94640[1] = lst2;
clo94640[2] = take_u45helper;
clo94640[3] = cons;
clo94640[4] = a9271592949;
clo94640[5] = a9271392946;
clo94640[6] = kont92814;
void* f9281792950 = encode_clo(clo94640);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9281792950;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93101 = encode_clo(alloc_clo(lam93101_fptr, 0));

void* lam93104_fptr() // lam93104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93105 = arg_buffer[1];
//reading env and args
void* a9271392946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env93105))[8];
//not do dummy comment
void* kont92814 = (decode_clo(env93105))[7];
//not do dummy comment
void* cons = (decode_clo(env93105))[6];
//not do dummy comment
void* _u45 = (decode_clo(env93105))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env93105))[4];
//not do dummy comment
void* lst2 = (decode_clo(env93105))[3];
//not do dummy comment
void* n = (decode_clo(env93105))[2];
//not do dummy comment
void* car = (decode_clo(env93105))[1];
mpz_t* mpzvar94641 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94641, "1", 10);
void* a9271492947 = encode_mpz(mpzvar94641);

//creating new closure instance
void** clo94643 = alloc_clo(lam93101_fptr, 7);

//setting env list
clo94643[1] = lst2;
clo94643[2] = take_u45helper;
clo94643[3] = cons;
clo94643[4] = car;
clo94643[5] = a9271392946;
clo94643[6] = kont92814;
clo94643[7] = lst;
void* f9281892948 = encode_clo(clo94643);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9281892948;
arg_buffer[3] = n;
arg_buffer[4] = a9271492947;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93104 = encode_clo(alloc_clo(lam93104_fptr, 0));

void* lam93106_fptr() // lam93106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93107 = arg_buffer[1];
//reading env and args
void* a9271192942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93107))[10];
//not do dummy comment
void* lst = (decode_clo(env93107))[9];
//not do dummy comment
void* kont92814 = (decode_clo(env93107))[8];
//not do dummy comment
void* reverse = (decode_clo(env93107))[7];
//not do dummy comment
void* cons = (decode_clo(env93107))[6];
//not do dummy comment
void* _u45 = (decode_clo(env93107))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env93107))[4];
//not do dummy comment
void* lst2 = (decode_clo(env93107))[3];
//not do dummy comment
void* n = (decode_clo(env93107))[2];
//not do dummy comment
void* car = (decode_clo(env93107))[1];

//if-clause
bool if_guard94644 = is_true(a9271192942);
if(if_guard94644)
{

//creating new closure instance
void** clo94646 = alloc_clo(lam93095_fptr, 1);

//setting env list
clo94646[1] = kont92814;
void* f9281592943 = encode_clo(clo94646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f9281592943;
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
void** clo94648 = alloc_clo(lam93104_fptr, 8);

//setting env list
clo94648[1] = car;
clo94648[2] = n;
clo94648[3] = lst2;
clo94648[4] = take_u45helper;
clo94648[5] = _u45;
clo94648[6] = cons;
clo94648[7] = kont92814;
clo94648[8] = lst;
void* f9281992945 = encode_clo(clo94648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9281992945;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93106 = encode_clo(alloc_clo(lam93106_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93109 = arg_buffer[1];
//reading env and args
void* kont92814 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar94649 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94649, "0", 10);
void* a9271092940 = encode_mpz(mpzvar94649);

//creating new closure instance
void** clo94651 = alloc_clo(lam93106_fptr, 10);

//setting env list
clo94651[1] = car;
clo94651[2] = n;
clo94651[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo94651[4] = take_u45helper;
clo94651[5] = _u45;
clo94651[6] = cons;
clo94651[7] = reverse;
clo94651[8] = kont92814;
clo94651[9] = lst;
clo94651[10] = cdr;
void* f9282092941 = encode_clo(clo94651);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9282092941;
arg_buffer[3] = n;
arg_buffer[4] = a9271092940;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam93110_fptr() // lam93110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93111 = arg_buffer[1];
//reading env and args
void* a9271892955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env93111))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env93111))[3];
//not do dummy comment
void* kont92821 = (decode_clo(env93111))[2];
//not do dummy comment
void* n = (decode_clo(env93111))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont92821;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a9271892955;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93110 = encode_clo(alloc_clo(lam93110_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93112 = arg_buffer[1];
//reading env and args
void* kont92821 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo94653 = alloc_clo(lam93110_fptr, 4);

//setting env list
clo94653[1] = n;
clo94653[2] = kont92821;
clo94653[3] = take_u45helper;
clo94653[4] = lst;
void* f9282292954 = encode_clo(clo94653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9282292954;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam93114_fptr() // lam93114 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93115 = arg_buffer[1];
//reading env and args
void* a9272392963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9272192959 = (decode_clo(env93115))[3];
//not do dummy comment
void* _u43 = (decode_clo(env93115))[2];
//not do dummy comment
void* kont92823 = (decode_clo(env93115))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont92823;
arg_buffer[3] = a9272192959;
arg_buffer[4] = a9272392963;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93114 = encode_clo(alloc_clo(lam93114_fptr, 0));

void* lam93116_fptr() // lam93116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93117 = arg_buffer[1];
//reading env and args
void* a9272292961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env93117))[4];
//not do dummy comment
void* a9272192959 = (decode_clo(env93117))[3];
//not do dummy comment
void* _u43 = (decode_clo(env93117))[2];
//not do dummy comment
void* kont92823 = (decode_clo(env93117))[1];

//creating new closure instance
void** clo94655 = alloc_clo(lam93114_fptr, 3);

//setting env list
clo94655[1] = kont92823;
clo94655[2] = _u43;
clo94655[3] = a9272192959;
void* f9282492962 = encode_clo(clo94655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f9282492962;
arg_buffer[3] = a9272292961;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93116 = encode_clo(alloc_clo(lam93116_fptr, 0));

void* lam93119_fptr() // lam93119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93120 = arg_buffer[1];
//reading env and args
void* a9271992957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93120))[5];
//not do dummy comment
void* lst = (decode_clo(env93120))[4];
//not do dummy comment
void* length = (decode_clo(env93120))[3];
//not do dummy comment
void* _u43 = (decode_clo(env93120))[2];
//not do dummy comment
void* kont92823 = (decode_clo(env93120))[1];

//if-clause
bool if_guard94656 = is_true(a9271992957);
if(if_guard94656)
{
mpz_t* mpzvar94657 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94657, "0", 10);
void* x9272092958 = encode_mpz(mpzvar94657);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92823);
arg_buffer[2] = x9272092958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92823))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar94658 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94658, "1", 10);
void* a9272192959 = encode_mpz(mpzvar94658);

//creating new closure instance
void** clo94660 = alloc_clo(lam93116_fptr, 4);

//setting env list
clo94660[1] = kont92823;
clo94660[2] = _u43;
clo94660[3] = a9272192959;
clo94660[4] = length;
void* f9282592960 = encode_clo(clo94660);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9282592960;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93119 = encode_clo(alloc_clo(lam93119_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93121 = arg_buffer[1];
//reading env and args
void* kont92823 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo94662 = alloc_clo(lam93119_fptr, 5);

//setting env list
clo94662[1] = kont92823;
clo94662[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo94662[3] = length;
clo94662[4] = lst;
clo94662[5] = cdr;
void* f9282692956 = encode_clo(clo94662);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9282692956;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam93122_fptr() // lam93122 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93123 = arg_buffer[1];
//reading env and args
void* x9272592967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92827 = (decode_clo(env93123))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92827);
arg_buffer[2] = x9272592967;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92827))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93122 = encode_clo(alloc_clo(lam93122_fptr, 0));

void* lam93124_fptr() // lam93124 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93125 = arg_buffer[1];
//reading env and args
void* a9272992975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env93125))[3];
//not do dummy comment
void* kont92827 = (decode_clo(env93125))[2];
//not do dummy comment
void* a9272792971 = (decode_clo(env93125))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont92827;
arg_buffer[3] = a9272792971;
arg_buffer[4] = a9272992975;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93124 = encode_clo(alloc_clo(lam93124_fptr, 0));

void* lam93126_fptr() // lam93126 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93127 = arg_buffer[1];
//reading env and args
void* a9272892973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env93127))[5];
//not do dummy comment
void* proc = (decode_clo(env93127))[4];
//not do dummy comment
void* cons = (decode_clo(env93127))[3];
//not do dummy comment
void* kont92827 = (decode_clo(env93127))[2];
//not do dummy comment
void* a9272792971 = (decode_clo(env93127))[1];

//creating new closure instance
void** clo94664 = alloc_clo(lam93124_fptr, 3);

//setting env list
clo94664[1] = a9272792971;
clo94664[2] = kont92827;
clo94664[3] = cons;
void* f9282992974 = encode_clo(clo94664);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f9282992974;
arg_buffer[3] = proc;
arg_buffer[4] = a9272892973;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93126 = encode_clo(alloc_clo(lam93126_fptr, 0));

void* lam93128_fptr() // lam93128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93129 = arg_buffer[1];
//reading env and args
void* a9272792971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93129))[6];
//not do dummy comment
void* kont92827 = (decode_clo(env93129))[5];
//not do dummy comment
void* lst = (decode_clo(env93129))[4];
//not do dummy comment
void* map = (decode_clo(env93129))[3];
//not do dummy comment
void* proc = (decode_clo(env93129))[2];
//not do dummy comment
void* cons = (decode_clo(env93129))[1];

//creating new closure instance
void** clo94666 = alloc_clo(lam93126_fptr, 5);

//setting env list
clo94666[1] = a9272792971;
clo94666[2] = kont92827;
clo94666[3] = cons;
clo94666[4] = proc;
clo94666[5] = map;
void* f9283092972 = encode_clo(clo94666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9283092972;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93128 = encode_clo(alloc_clo(lam93128_fptr, 0));

void* lam93130_fptr() // lam93130 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93131 = arg_buffer[1];
//reading env and args
void* a9272692969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93131))[6];
//not do dummy comment
void* kont92827 = (decode_clo(env93131))[5];
//not do dummy comment
void* lst = (decode_clo(env93131))[4];
//not do dummy comment
void* map = (decode_clo(env93131))[3];
//not do dummy comment
void* proc = (decode_clo(env93131))[2];
//not do dummy comment
void* cons = (decode_clo(env93131))[1];

//creating new closure instance
void** clo94668 = alloc_clo(lam93128_fptr, 6);

//setting env list
clo94668[1] = cons;
clo94668[2] = proc;
clo94668[3] = map;
clo94668[4] = lst;
clo94668[5] = kont92827;
clo94668[6] = cdr;
void* f9283192970 = encode_clo(clo94668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f9283192970;
arg_buffer[3] = a9272692969;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93130 = encode_clo(alloc_clo(lam93130_fptr, 0));

void* lam93132_fptr() // lam93132 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93133 = arg_buffer[1];
//reading env and args
void* a9272492965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92827 = (decode_clo(env93133))[8];
//not do dummy comment
void* lst = (decode_clo(env93133))[7];
//not do dummy comment
void* map = (decode_clo(env93133))[6];
//not do dummy comment
void* proc = (decode_clo(env93133))[5];
//not do dummy comment
void* car = (decode_clo(env93133))[4];
//not do dummy comment
void* cons = (decode_clo(env93133))[3];
//not do dummy comment
void* list = (decode_clo(env93133))[2];
//not do dummy comment
void* cdr = (decode_clo(env93133))[1];

//if-clause
bool if_guard94669 = is_true(a9272492965);
if(if_guard94669)
{

//creating new closure instance
void** clo94671 = alloc_clo(lam93122_fptr, 1);

//setting env list
clo94671[1] = kont92827;
void* f9282892966 = encode_clo(clo94671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9282892966;
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
void** clo94673 = alloc_clo(lam93130_fptr, 6);

//setting env list
clo94673[1] = cons;
clo94673[2] = proc;
clo94673[3] = map;
clo94673[4] = lst;
clo94673[5] = kont92827;
clo94673[6] = cdr;
void* f9283292968 = encode_clo(clo94673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9283292968;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93132 = encode_clo(alloc_clo(lam93132_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93134 = arg_buffer[1];
//reading env and args
void* kont92827 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo94675 = alloc_clo(lam93132_fptr, 8);

//setting env list
clo94675[1] = cdr;
clo94675[2] = list;
clo94675[3] = cons;
clo94675[4] = car;
clo94675[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo94675[6] = map;
clo94675[7] = lst;
clo94675[8] = kont92827;
void* f9283392964 = encode_clo(clo94675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9283392964;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam93135_fptr() // lam93135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93136 = arg_buffer[1];
//reading env and args
void* x9273192979 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92834 = (decode_clo(env93136))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92834);
arg_buffer[2] = x9273192979;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92834))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93135 = encode_clo(alloc_clo(lam93135_fptr, 0));

void* lam93137_fptr() // lam93137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93138 = arg_buffer[1];
//reading env and args
void* a9273692989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9273492985 = (decode_clo(env93138))[3];
//not do dummy comment
void* kont92834 = (decode_clo(env93138))[2];
//not do dummy comment
void* cons = (decode_clo(env93138))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont92834;
arg_buffer[3] = a9273492985;
arg_buffer[4] = a9273692989;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93137 = encode_clo(alloc_clo(lam93137_fptr, 0));

void* lam93139_fptr() // lam93139 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93140 = arg_buffer[1];
//reading env and args
void* a9273592987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9273492985 = (decode_clo(env93140))[5];
//not do dummy comment
void* op = (decode_clo(env93140))[4];
//not do dummy comment
void* kont92834 = (decode_clo(env93140))[3];
//not do dummy comment
void* filter = (decode_clo(env93140))[2];
//not do dummy comment
void* cons = (decode_clo(env93140))[1];

//creating new closure instance
void** clo94677 = alloc_clo(lam93137_fptr, 3);

//setting env list
clo94677[1] = cons;
clo94677[2] = kont92834;
clo94677[3] = a9273492985;
void* f9283692988 = encode_clo(clo94677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f9283692988;
arg_buffer[3] = op;
arg_buffer[4] = a9273592987;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93139 = encode_clo(alloc_clo(lam93139_fptr, 0));

void* lam93141_fptr() // lam93141 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93142 = arg_buffer[1];
//reading env and args
void* a9273492985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93142))[6];
//not do dummy comment
void* lst = (decode_clo(env93142))[5];
//not do dummy comment
void* op = (decode_clo(env93142))[4];
//not do dummy comment
void* kont92834 = (decode_clo(env93142))[3];
//not do dummy comment
void* filter = (decode_clo(env93142))[2];
//not do dummy comment
void* cons = (decode_clo(env93142))[1];

//creating new closure instance
void** clo94679 = alloc_clo(lam93139_fptr, 5);

//setting env list
clo94679[1] = cons;
clo94679[2] = filter;
clo94679[3] = kont92834;
clo94679[4] = op;
clo94679[5] = a9273492985;
void* f9283792986 = encode_clo(clo94679);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9283792986;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93141 = encode_clo(alloc_clo(lam93141_fptr, 0));

void* lam93143_fptr() // lam93143 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93144 = arg_buffer[1];
//reading env and args
void* a9273792991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env93144))[3];
//not do dummy comment
void* kont92834 = (decode_clo(env93144))[2];
//not do dummy comment
void* filter = (decode_clo(env93144))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont92834;
arg_buffer[3] = op;
arg_buffer[4] = a9273792991;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93143 = encode_clo(alloc_clo(lam93143_fptr, 0));

void* lam93145_fptr() // lam93145 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93146 = arg_buffer[1];
//reading env and args
void* a9273392983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93146))[7];
//not do dummy comment
void* lst = (decode_clo(env93146))[6];
//not do dummy comment
void* op = (decode_clo(env93146))[5];
//not do dummy comment
void* kont92834 = (decode_clo(env93146))[4];
//not do dummy comment
void* cons = (decode_clo(env93146))[3];
//not do dummy comment
void* filter = (decode_clo(env93146))[2];
//not do dummy comment
void* car = (decode_clo(env93146))[1];

//if-clause
bool if_guard94680 = is_true(a9273392983);
if(if_guard94680)
{

//creating new closure instance
void** clo94682 = alloc_clo(lam93141_fptr, 6);

//setting env list
clo94682[1] = cons;
clo94682[2] = filter;
clo94682[3] = kont92834;
clo94682[4] = op;
clo94682[5] = lst;
clo94682[6] = cdr;
void* f9283892984 = encode_clo(clo94682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9283892984;
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
void** clo94684 = alloc_clo(lam93143_fptr, 3);

//setting env list
clo94684[1] = filter;
clo94684[2] = kont92834;
clo94684[3] = op;
void* f9283992990 = encode_clo(clo94684);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9283992990;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93145 = encode_clo(alloc_clo(lam93145_fptr, 0));

void* lam93147_fptr() // lam93147 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93148 = arg_buffer[1];
//reading env and args
void* a9273292981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93148))[7];
//not do dummy comment
void* lst = (decode_clo(env93148))[6];
//not do dummy comment
void* op = (decode_clo(env93148))[5];
//not do dummy comment
void* kont92834 = (decode_clo(env93148))[4];
//not do dummy comment
void* cons = (decode_clo(env93148))[3];
//not do dummy comment
void* filter = (decode_clo(env93148))[2];
//not do dummy comment
void* car = (decode_clo(env93148))[1];

//creating new closure instance
void** clo94686 = alloc_clo(lam93145_fptr, 7);

//setting env list
clo94686[1] = car;
clo94686[2] = filter;
clo94686[3] = cons;
clo94686[4] = kont92834;
clo94686[5] = op;
clo94686[6] = lst;
clo94686[7] = cdr;
void* f9284092982 = encode_clo(clo94686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f9284092982;
arg_buffer[3] = a9273292981;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93147 = encode_clo(alloc_clo(lam93147_fptr, 0));

void* lam93149_fptr() // lam93149 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93150 = arg_buffer[1];
//reading env and args
void* a9273092977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env93150))[8];
//not do dummy comment
void* op = (decode_clo(env93150))[7];
//not do dummy comment
void* kont92834 = (decode_clo(env93150))[6];
//not do dummy comment
void* cons = (decode_clo(env93150))[5];
//not do dummy comment
void* list = (decode_clo(env93150))[4];
//not do dummy comment
void* cdr = (decode_clo(env93150))[3];
//not do dummy comment
void* filter = (decode_clo(env93150))[2];
//not do dummy comment
void* car = (decode_clo(env93150))[1];

//if-clause
bool if_guard94687 = is_true(a9273092977);
if(if_guard94687)
{

//creating new closure instance
void** clo94689 = alloc_clo(lam93135_fptr, 1);

//setting env list
clo94689[1] = kont92834;
void* f9283592978 = encode_clo(clo94689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9283592978;
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
void** clo94691 = alloc_clo(lam93147_fptr, 7);

//setting env list
clo94691[1] = car;
clo94691[2] = filter;
clo94691[3] = cons;
clo94691[4] = kont92834;
clo94691[5] = op;
clo94691[6] = lst;
clo94691[7] = cdr;
void* f9284192980 = encode_clo(clo94691);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9284192980;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93149 = encode_clo(alloc_clo(lam93149_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93151 = arg_buffer[1];
//reading env and args
void* kont92834 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo94693 = alloc_clo(lam93149_fptr, 8);

//setting env list
clo94693[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo94693[2] = filter;
clo94693[3] = cdr;
clo94693[4] = list;
clo94693[5] = cons;
clo94693[6] = kont92834;
clo94693[7] = op;
clo94693[8] = lst;
void* f9284292976 = encode_clo(clo94693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9284292976;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam93152_fptr() // lam93152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93153 = arg_buffer[1];
//reading env and args
void* a9274292999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92843 = (decode_clo(env93153))[3];
//not do dummy comment
void* drop = (decode_clo(env93153))[2];
//not do dummy comment
void* a9274092996 = (decode_clo(env93153))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont92843;
arg_buffer[3] = a9274092996;
arg_buffer[4] = a9274292999;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93152 = encode_clo(alloc_clo(lam93152_fptr, 0));

void* lam93155_fptr() // lam93155 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93156 = arg_buffer[1];
//reading env and args
void* a9274092996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92843 = (decode_clo(env93156))[4];
//not do dummy comment
void* drop = (decode_clo(env93156))[3];
//not do dummy comment
void* n = (decode_clo(env93156))[2];
//not do dummy comment
void* _u45 = (decode_clo(env93156))[1];
mpz_t* mpzvar94694 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94694, "1", 10);
void* a9274192997 = encode_mpz(mpzvar94694);

//creating new closure instance
void** clo94696 = alloc_clo(lam93152_fptr, 3);

//setting env list
clo94696[1] = a9274092996;
clo94696[2] = drop;
clo94696[3] = kont92843;
void* f9284492998 = encode_clo(clo94696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9284492998;
arg_buffer[3] = n;
arg_buffer[4] = a9274192997;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93155 = encode_clo(alloc_clo(lam93155_fptr, 0));

void* lam93157_fptr() // lam93157 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93158 = arg_buffer[1];
//reading env and args
void* a9273992994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93158))[6];
//not do dummy comment
void* kont92843 = (decode_clo(env93158))[5];
//not do dummy comment
void* n = (decode_clo(env93158))[4];
//not do dummy comment
void* _u45 = (decode_clo(env93158))[3];
//not do dummy comment
void* lst = (decode_clo(env93158))[2];
//not do dummy comment
void* drop = (decode_clo(env93158))[1];

//if-clause
bool if_guard94697 = is_true(a9273992994);
if(if_guard94697)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92843);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92843))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo94699 = alloc_clo(lam93155_fptr, 4);

//setting env list
clo94699[1] = _u45;
clo94699[2] = n;
clo94699[3] = drop;
clo94699[4] = kont92843;
void* f9284592995 = encode_clo(clo94699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9284592995;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93157 = encode_clo(alloc_clo(lam93157_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93160 = arg_buffer[1];
//reading env and args
void* kont92843 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar94700 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94700, "0", 10);
void* a9273892992 = encode_mpz(mpzvar94700);

//creating new closure instance
void** clo94702 = alloc_clo(lam93157_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo94702[1] = drop;
clo94702[2] = lst;
clo94702[3] = _u45;
clo94702[4] = n;
clo94702[5] = kont92843;
clo94702[6] = cdr;
void* f9284692993 = encode_clo(clo94702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9284692993;
arg_buffer[3] = n;
arg_buffer[4] = a9273892992;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam93161_fptr() // lam93161 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93162 = arg_buffer[1];
//reading env and args
void* a9274693007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9274493003 = (decode_clo(env93162))[3];
//not do dummy comment
void* kont92847 = (decode_clo(env93162))[2];
//not do dummy comment
void* proc = (decode_clo(env93162))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont92847;
arg_buffer[3] = a9274493003;
arg_buffer[4] = a9274693007;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93161 = encode_clo(alloc_clo(lam93161_fptr, 0));

void* lam93163_fptr() // lam93163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93164 = arg_buffer[1];
//reading env and args
void* a9274593005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9274493003 = (decode_clo(env93164))[5];
//not do dummy comment
void* foldr = (decode_clo(env93164))[4];
//not do dummy comment
void* kont92847 = (decode_clo(env93164))[3];
//not do dummy comment
void* proc = (decode_clo(env93164))[2];
//not do dummy comment
void* acc = (decode_clo(env93164))[1];

//creating new closure instance
void** clo94704 = alloc_clo(lam93161_fptr, 3);

//setting env list
clo94704[1] = proc;
clo94704[2] = kont92847;
clo94704[3] = a9274493003;
void* f9284893006 = encode_clo(clo94704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f9284893006;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a9274593005;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93163 = encode_clo(alloc_clo(lam93163_fptr, 0));

void* lam93165_fptr() // lam93165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93166 = arg_buffer[1];
//reading env and args
void* a9274493003 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93166))[6];
//not do dummy comment
void* kont92847 = (decode_clo(env93166))[5];
//not do dummy comment
void* foldr = (decode_clo(env93166))[4];
//not do dummy comment
void* lst = (decode_clo(env93166))[3];
//not do dummy comment
void* proc = (decode_clo(env93166))[2];
//not do dummy comment
void* acc = (decode_clo(env93166))[1];

//creating new closure instance
void** clo94706 = alloc_clo(lam93163_fptr, 5);

//setting env list
clo94706[1] = acc;
clo94706[2] = proc;
clo94706[3] = kont92847;
clo94706[4] = foldr;
clo94706[5] = a9274493003;
void* f9284993004 = encode_clo(clo94706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9284993004;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93165 = encode_clo(alloc_clo(lam93165_fptr, 0));

void* lam93167_fptr() // lam93167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93168 = arg_buffer[1];
//reading env and args
void* a9274393001 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93168))[7];
//not do dummy comment
void* kont92847 = (decode_clo(env93168))[6];
//not do dummy comment
void* car = (decode_clo(env93168))[5];
//not do dummy comment
void* foldr = (decode_clo(env93168))[4];
//not do dummy comment
void* lst = (decode_clo(env93168))[3];
//not do dummy comment
void* proc = (decode_clo(env93168))[2];
//not do dummy comment
void* acc = (decode_clo(env93168))[1];

//if-clause
bool if_guard94707 = is_true(a9274393001);
if(if_guard94707)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92847);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92847))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo94709 = alloc_clo(lam93165_fptr, 6);

//setting env list
clo94709[1] = acc;
clo94709[2] = proc;
clo94709[3] = lst;
clo94709[4] = foldr;
clo94709[5] = kont92847;
clo94709[6] = cdr;
void* f9285093002 = encode_clo(clo94709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9285093002;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93167 = encode_clo(alloc_clo(lam93167_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93169 = arg_buffer[1];
//reading env and args
void* kont92847 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo94711 = alloc_clo(lam93167_fptr, 7);

//setting env list
clo94711[1] = acc;
clo94711[2] = proc;
clo94711[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo94711[4] = foldr;
clo94711[5] = car;
clo94711[6] = kont92847;
clo94711[7] = cdr;
void* f9285193000 = encode_clo(clo94711);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9285193000;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam93170_fptr() // lam93170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93171 = arg_buffer[1];
//reading env and args
void* a9275093015 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9274893011 = (decode_clo(env93171))[3];
//not do dummy comment
void* kont92852 = (decode_clo(env93171))[2];
//not do dummy comment
void* cons = (decode_clo(env93171))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont92852;
arg_buffer[3] = a9274893011;
arg_buffer[4] = a9275093015;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93170 = encode_clo(alloc_clo(lam93170_fptr, 0));

void* lam93172_fptr() // lam93172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93173 = arg_buffer[1];
//reading env and args
void* a9274993013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env93173))[5];
//not do dummy comment
void* a9274893011 = (decode_clo(env93173))[4];
//not do dummy comment
void* cons = (decode_clo(env93173))[3];
//not do dummy comment
void* kont92852 = (decode_clo(env93173))[2];
//not do dummy comment
void* lst2 = (decode_clo(env93173))[1];

//creating new closure instance
void** clo94713 = alloc_clo(lam93170_fptr, 3);

//setting env list
clo94713[1] = cons;
clo94713[2] = kont92852;
clo94713[3] = a9274893011;
void* f9285393014 = encode_clo(clo94713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f9285393014;
arg_buffer[3] = a9274993013;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93172 = encode_clo(alloc_clo(lam93172_fptr, 0));

void* lam93174_fptr() // lam93174 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93175 = arg_buffer[1];
//reading env and args
void* a9274893011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93175))[6];
//not do dummy comment
void* append = (decode_clo(env93175))[5];
//not do dummy comment
void* lst1 = (decode_clo(env93175))[4];
//not do dummy comment
void* cons = (decode_clo(env93175))[3];
//not do dummy comment
void* kont92852 = (decode_clo(env93175))[2];
//not do dummy comment
void* lst2 = (decode_clo(env93175))[1];

//creating new closure instance
void** clo94715 = alloc_clo(lam93172_fptr, 5);

//setting env list
clo94715[1] = lst2;
clo94715[2] = kont92852;
clo94715[3] = cons;
clo94715[4] = a9274893011;
clo94715[5] = append;
void* f9285493012 = encode_clo(clo94715);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9285493012;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93174 = encode_clo(alloc_clo(lam93174_fptr, 0));

void* lam93176_fptr() // lam93176 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93177 = arg_buffer[1];
//reading env and args
void* a9274793009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env93177))[7];
//not do dummy comment
void* append = (decode_clo(env93177))[6];
//not do dummy comment
void* cons = (decode_clo(env93177))[5];
//not do dummy comment
void* kont92852 = (decode_clo(env93177))[4];
//not do dummy comment
void* lst2 = (decode_clo(env93177))[3];
//not do dummy comment
void* lst1 = (decode_clo(env93177))[2];
//not do dummy comment
void* car = (decode_clo(env93177))[1];

//if-clause
bool if_guard94716 = is_true(a9274793009);
if(if_guard94716)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92852);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92852))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo94718 = alloc_clo(lam93174_fptr, 6);

//setting env list
clo94718[1] = lst2;
clo94718[2] = kont92852;
clo94718[3] = cons;
clo94718[4] = lst1;
clo94718[5] = append;
clo94718[6] = cdr;
void* f9285593010 = encode_clo(clo94718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9285593010;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93176 = encode_clo(alloc_clo(lam93176_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93178 = arg_buffer[1];
//reading env and args
void* kont92852 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo94720 = alloc_clo(lam93176_fptr, 7);

//setting env list
clo94720[1] = car;
clo94720[2] = lst1;
clo94720[3] = lst2;
clo94720[4] = kont92852;
clo94720[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo94720[6] = append;
clo94720[7] = cdr;
void* f9285693008 = encode_clo(clo94720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9285693008;
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
void* _93179 = arg_buffer[1];
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

void* kont9285793016 = prim_car(lst);
void* lst93017 = prim_cdr(lst);
void* x9275193018 = apply_prim_hash(lst93017);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9285793016);
arg_buffer[2] = x9275193018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9285793016))[0]);
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
void* _93180 = arg_buffer[1];
//reading env and args
void* kont92859 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9275293019 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92859);
arg_buffer[2] = x9275293019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92859))[0]);
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
void* _93181 = arg_buffer[1];
//reading env and args
void* kont92860 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x9275393020 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92860);
arg_buffer[2] = x9275393020;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92860))[0]);
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
void* _93182 = arg_buffer[1];
//reading env and args
void* kont92861 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9275493021 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92861);
arg_buffer[2] = x9275493021;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92861))[0]);
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
void* _93183 = arg_buffer[1];
//reading env and args
void* kont92862 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x9275593022 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92862);
arg_buffer[2] = x9275593022;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92862))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam93188_fptr() // lam93188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93189 = arg_buffer[1];
//reading env and args
void* a9276293031 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env93189))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env93189))[2];
//not do dummy comment
void* kont92863 = (decode_clo(env93189))[1];

//if-clause
bool if_guard94721 = is_true(a9276293031);
if(if_guard94721)
{
mpz_t* mpzvar94722 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94722, "3", 10);
void* a9276393032 = encode_mpz(mpzvar94722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont92863;
arg_buffer[3] = a9276393032;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar94723 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94723, "2", 10);
void* a9276493033 = encode_mpz(mpzvar94723);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont92863;
arg_buffer[3] = a9276493033;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93188 = encode_clo(alloc_clo(lam93188_fptr, 0));

void* lam93191_fptr() // lam93191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93192 = arg_buffer[1];
//reading env and args
void* a9275893026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env93192))[4];
//not do dummy comment
void* even_u63 = (decode_clo(env93192))[3];
//not do dummy comment
void* kont92863 = (decode_clo(env93192))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env93192))[1];

//if-clause
bool if_guard94724 = is_true(a9275893026);
if(if_guard94724)
{
mpz_t* mpzvar94725 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94725, "1", 10);
void* a9275993027 = encode_mpz(mpzvar94725);
mpz_t* mpzvar94726 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94726, "2", 10);
void* a9276093028 = encode_mpz(mpzvar94726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont92863;
arg_buffer[3] = a9275993027;
arg_buffer[4] = a9276093028;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar94727 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94727, "3", 10);
void* a9276193029 = encode_mpz(mpzvar94727);

//creating new closure instance
void** clo94729 = alloc_clo(lam93188_fptr, 3);

//setting env list
clo94729[1] = kont92863;
clo94729[2] = even_u63;
clo94729[3] = odd_u63;
void* f9286493030 = encode_clo(clo94729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f9286493030;
arg_buffer[3] = a9276193029;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam93191 = encode_clo(alloc_clo(lam93191_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93195 = arg_buffer[1];
//reading env and args
void* kont92863 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar94730 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94730, "1", 10);
void* a9275693023 = encode_mpz(mpzvar94730);
mpz_t* mpzvar94731 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar94731, "2", 10);
void* a9275793024 = encode_mpz(mpzvar94731);

//creating new closure instance
void** clo94733 = alloc_clo(lam93191_fptr, 4);

//setting env list
clo94733[1] = equal_u63;
clo94733[2] = kont92863;
clo94733[3] = even_u63;
clo94733[4] = odd_u63;
void* f9286593025 = encode_clo(clo94733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9286593025;
arg_buffer[3] = a9275693023;
arg_buffer[4] = a9275793024;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam93196_fptr() // lam93196 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env93197 = arg_buffer[1];
//reading env and args
void* x9276593035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont92866 = (decode_clo(env93197))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont92866);
arg_buffer[2] = x9276593035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont92866))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam93196 = encode_clo(alloc_clo(lam93196_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _93198 = arg_buffer[1];
//reading env and args
void* kont92866 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo94735 = alloc_clo(lam93196_fptr, 1);

//setting env list
clo94735[1] = kont92866;
void* f9286793034 = encode_clo(clo94735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f9286793034;
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

