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
void* _54068 = arg_buffer[1];
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

void* kont5379653900 = prim_car(lst);
void* lst53901 = prim_cdr(lst);
void* x5370553902 = apply_prim__u43(lst53901);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5379653900);
arg_buffer[2] = x5370553902;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5379653900))[0]);
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
void* _54069 = arg_buffer[1];
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

void* kont5379853903 = prim_car(lst);
void* lst53904 = prim_cdr(lst);
void* x5370653905 = apply_prim__u45(lst53904);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5379853903);
arg_buffer[2] = x5370653905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5379853903))[0]);
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
void* _54070 = arg_buffer[1];
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

void* kont5380053906 = prim_car(lst);
void* lst53907 = prim_cdr(lst);
void* x5370753908 = apply_prim__u42(lst53907);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5380053906);
arg_buffer[2] = x5370753908;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5380053906))[0]);
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
void* _54071 = arg_buffer[1];
//reading env and args
void* kont53802 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5370853909 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53802);
arg_buffer[2] = x5370853909;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53802))[0]);
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
void* _54072 = arg_buffer[1];
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

void* kont5380353910 = prim_car(lst);
void* lst53911 = prim_cdr(lst);
void* x5370953912 = apply_prim__u47(lst53911);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5380353910);
arg_buffer[2] = x5370953912;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5380353910))[0]);
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
void* _54073 = arg_buffer[1];
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

void* kont5380553913 = prim_car(lst);
void* lst53914 = prim_cdr(lst);
void* x5371053915 = apply_prim__u61(lst53914);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5380553913);
arg_buffer[2] = x5371053915;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5380553913))[0]);
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
void* _54074 = arg_buffer[1];
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

void* kont5380753916 = prim_car(lst);
void* lst53917 = prim_cdr(lst);
void* x5371153918 = apply_prim__u62(lst53917);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5380753916);
arg_buffer[2] = x5371153918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5380753916))[0]);
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
void* _54075 = arg_buffer[1];
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

void* kont5380953919 = prim_car(lst);
void* lst53920 = prim_cdr(lst);
void* x5371253921 = apply_prim__u60(lst53920);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5380953919);
arg_buffer[2] = x5371253921;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5380953919))[0]);
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
void* _54076 = arg_buffer[1];
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

void* kont5381153922 = prim_car(lst);
void* lst53923 = prim_cdr(lst);
void* x5371353924 = apply_prim__u60_u61(lst53923);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5381153922);
arg_buffer[2] = x5371353924;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5381153922))[0]);
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
void* _54077 = arg_buffer[1];
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

void* kont5381353925 = prim_car(lst);
void* lst53926 = prim_cdr(lst);
void* x5371453927 = apply_prim__u62_u61(lst53926);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5381353925);
arg_buffer[2] = x5371453927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5381353925))[0]);
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
void* _54078 = arg_buffer[1];
//reading env and args
void* kont53815 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5371553928 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53815);
arg_buffer[2] = x5371553928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53815))[0]);
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
void* _54079 = arg_buffer[1];
//reading env and args
void* kont53816 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5371653929 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53816);
arg_buffer[2] = x5371653929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53816))[0]);
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
void* _54080 = arg_buffer[1];
//reading env and args
void* kont53817 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5371753930 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53817);
arg_buffer[2] = x5371753930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53817))[0]);
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
void* _54081 = arg_buffer[1];
//reading env and args
void* kont53818 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5371853931 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53818);
arg_buffer[2] = x5371853931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53818))[0]);
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
void* _54082 = arg_buffer[1];
//reading env and args
void* kont53819 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5371953932 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53819);
arg_buffer[2] = x5371953932;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53819))[0]);
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
void* _54083 = arg_buffer[1];
//reading env and args
void* kont53820 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5372053933 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53820);
arg_buffer[2] = x5372053933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53820))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam54084_fptr() // lam54084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54085 = arg_buffer[1];
//reading env and args
void* a5372353937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53821 = (decode_clo(env54085))[3];
//not do dummy comment
void* a5372153934 = (decode_clo(env54085))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env54085))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont53821;
arg_buffer[3] = a5372153934;
arg_buffer[4] = a5372353937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54084 = encode_clo(alloc_clo(lam54084_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54088 = arg_buffer[1];
//reading env and args
void* kont53821 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54767, "0", 10);
void* a5372153934 = encode_mpz(mpzvar54767);
mpz_t* mpzvar54768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54768, "2", 10);
void* a5372253935 = encode_mpz(mpzvar54768);

//creating new closure instance
void** clo54770 = alloc_clo(lam54084_fptr, 3);

//setting env list
clo54770[1] = equal_u63;
clo54770[2] = a5372153934;
clo54770[3] = kont53821;
void* f5382253936 = encode_clo(clo54770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5382253936;
arg_buffer[3] = x;
arg_buffer[4] = a5372253935;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam54089_fptr() // lam54089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54090 = arg_buffer[1];
//reading env and args
void* a5372653941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env54090))[3];
//not do dummy comment
void* kont53823 = (decode_clo(env54090))[2];
//not do dummy comment
void* a5372453938 = (decode_clo(env54090))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont53823;
arg_buffer[3] = a5372453938;
arg_buffer[4] = a5372653941;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54089 = encode_clo(alloc_clo(lam54089_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54093 = arg_buffer[1];
//reading env and args
void* kont53823 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54771 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54771, "1", 10);
void* a5372453938 = encode_mpz(mpzvar54771);
mpz_t* mpzvar54772 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54772, "2", 10);
void* a5372553939 = encode_mpz(mpzvar54772);

//creating new closure instance
void** clo54774 = alloc_clo(lam54089_fptr, 3);

//setting env list
clo54774[1] = a5372453938;
clo54774[2] = kont53823;
clo54774[3] = equal_u63;
void* f5382453940 = encode_clo(clo54774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5382453940;
arg_buffer[3] = x;
arg_buffer[4] = a5372553939;
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
void* _54094 = arg_buffer[1];
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

void* kont5382553942 = prim_car(x);
void* x53943 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5382553942);
arg_buffer[2] = x53943;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5382553942))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* and_fptr() // and 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54095 = arg_buffer[1];
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

void* kont5382753944 = prim_car(lst);
void* lst53945 = prim_cdr(lst);
void* x5372753946 = apply_prim_and(lst53945);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5382753944);
arg_buffer[2] = x5372753946;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5382753944))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* and = encode_clo(alloc_clo(and_fptr, 0));

void* or_fptr() // or 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54096 = arg_buffer[1];
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

void* kont5382953947 = prim_car(lst);
void* lst53948 = prim_cdr(lst);
void* x5372853949 = apply_prim_or(lst53948);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5382953947);
arg_buffer[2] = x5372853949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5382953947))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam54099_fptr() // lam54099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54100 = arg_buffer[1];
//reading env and args
void* a5373453959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53831 = (decode_clo(env54100))[3];
//not do dummy comment
void* x = (decode_clo(env54100))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54100))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont53831;
arg_buffer[3] = x;
arg_buffer[4] = a5373453959;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54099 = encode_clo(alloc_clo(lam54099_fptr, 0));

void* lam54101_fptr() // lam54101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54102 = arg_buffer[1];
//reading env and args
void* a5373253956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54102))[5];
//not do dummy comment
void* kont53831 = (decode_clo(env54102))[4];
//not do dummy comment
void* lst = (decode_clo(env54102))[3];
//not do dummy comment
void* x = (decode_clo(env54102))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54102))[1];

//if-clause
bool if_guard54775 = is_true(a5373253956);
if(if_guard54775)
{
void* x5373353957 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53831);
arg_buffer[2] = x5373353957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53831))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54777 = alloc_clo(lam54099_fptr, 3);

//setting env list
clo54777[1] = member_u63;
clo54777[2] = x;
clo54777[3] = kont53831;
void* f5383253958 = encode_clo(clo54777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5383253958;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54101 = encode_clo(alloc_clo(lam54101_fptr, 0));

void* lam54103_fptr() // lam54103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54104 = arg_buffer[1];
//reading env and args
void* a5373153954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54104))[6];
//not do dummy comment
void* kont53831 = (decode_clo(env54104))[5];
//not do dummy comment
void* lst = (decode_clo(env54104))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env54104))[3];
//not do dummy comment
void* x = (decode_clo(env54104))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54104))[1];

//creating new closure instance
void** clo54779 = alloc_clo(lam54101_fptr, 5);

//setting env list
clo54779[1] = member_u63;
clo54779[2] = x;
clo54779[3] = lst;
clo54779[4] = kont53831;
clo54779[5] = cdr;
void* f5383353955 = encode_clo(clo54779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5383353955;
arg_buffer[3] = a5373153954;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54103 = encode_clo(alloc_clo(lam54103_fptr, 0));

void* lam54105_fptr() // lam54105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54106 = arg_buffer[1];
//reading env and args
void* a5372953951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54106))[7];
//not do dummy comment
void* kont53831 = (decode_clo(env54106))[6];
//not do dummy comment
void* lst = (decode_clo(env54106))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env54106))[4];
//not do dummy comment
void* x = (decode_clo(env54106))[3];
//not do dummy comment
void* car = (decode_clo(env54106))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54106))[1];

//if-clause
bool if_guard54780 = is_true(a5372953951);
if(if_guard54780)
{
void* x5373053952 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53831);
arg_buffer[2] = x5373053952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53831))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54782 = alloc_clo(lam54103_fptr, 6);

//setting env list
clo54782[1] = member_u63;
clo54782[2] = x;
clo54782[3] = equal_u63;
clo54782[4] = lst;
clo54782[5] = kont53831;
clo54782[6] = cdr;
void* f5383453953 = encode_clo(clo54782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5383453953;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54105 = encode_clo(alloc_clo(lam54105_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54107 = arg_buffer[1];
//reading env and args
void* kont53831 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54784 = alloc_clo(lam54105_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo54784[1] = member_u63;
clo54784[2] = car;
clo54784[3] = x;
clo54784[4] = equal_u63;
clo54784[5] = lst;
clo54784[6] = kont53831;
clo54784[7] = cdr;
void* f5383553950 = encode_clo(clo54784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5383553950;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam54108_fptr() // lam54108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54109 = arg_buffer[1];
//reading env and args
void* a5373853967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53836 = (decode_clo(env54109))[4];
//not do dummy comment
void* a5373753965 = (decode_clo(env54109))[3];
//not do dummy comment
void* fun = (decode_clo(env54109))[2];
//not do dummy comment
void* foldl = (decode_clo(env54109))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont53836;
arg_buffer[3] = fun;
arg_buffer[4] = a5373753965;
arg_buffer[5] = a5373853967;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54108 = encode_clo(alloc_clo(lam54108_fptr, 0));

void* lam54110_fptr() // lam54110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54111 = arg_buffer[1];
//reading env and args
void* a5373753965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54111))[5];
//not do dummy comment
void* lst = (decode_clo(env54111))[4];
//not do dummy comment
void* kont53836 = (decode_clo(env54111))[3];
//not do dummy comment
void* fun = (decode_clo(env54111))[2];
//not do dummy comment
void* foldl = (decode_clo(env54111))[1];

//creating new closure instance
void** clo54786 = alloc_clo(lam54108_fptr, 4);

//setting env list
clo54786[1] = foldl;
clo54786[2] = fun;
clo54786[3] = a5373753965;
clo54786[4] = kont53836;
void* f5383753966 = encode_clo(clo54786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5383753966;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54110 = encode_clo(alloc_clo(lam54110_fptr, 0));

void* lam54112_fptr() // lam54112 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54113 = arg_buffer[1];
//reading env and args
void* a5373653963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54113))[6];
//not do dummy comment
void* lst = (decode_clo(env54113))[5];
//not do dummy comment
void* kont53836 = (decode_clo(env54113))[4];
//not do dummy comment
void* fun = (decode_clo(env54113))[3];
//not do dummy comment
void* acc = (decode_clo(env54113))[2];
//not do dummy comment
void* foldl = (decode_clo(env54113))[1];

//creating new closure instance
void** clo54788 = alloc_clo(lam54110_fptr, 5);

//setting env list
clo54788[1] = foldl;
clo54788[2] = fun;
clo54788[3] = kont53836;
clo54788[4] = lst;
clo54788[5] = cdr;
void* f5383853964 = encode_clo(clo54788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5383853964;
arg_buffer[3] = a5373653963;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54112 = encode_clo(alloc_clo(lam54112_fptr, 0));

void* lam54114_fptr() // lam54114 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54115 = arg_buffer[1];
//reading env and args
void* a5373553961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54115))[7];
//not do dummy comment
void* lst = (decode_clo(env54115))[6];
//not do dummy comment
void* kont53836 = (decode_clo(env54115))[5];
//not do dummy comment
void* fun = (decode_clo(env54115))[4];
//not do dummy comment
void* acc = (decode_clo(env54115))[3];
//not do dummy comment
void* car = (decode_clo(env54115))[2];
//not do dummy comment
void* foldl = (decode_clo(env54115))[1];

//if-clause
bool if_guard54789 = is_true(a5373553961);
if(if_guard54789)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53836);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53836))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54791 = alloc_clo(lam54112_fptr, 6);

//setting env list
clo54791[1] = foldl;
clo54791[2] = acc;
clo54791[3] = fun;
clo54791[4] = kont53836;
clo54791[5] = lst;
clo54791[6] = cdr;
void* f5383953962 = encode_clo(clo54791);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5383953962;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54114 = encode_clo(alloc_clo(lam54114_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54116 = arg_buffer[1];
//reading env and args
void* kont53836 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54793 = alloc_clo(lam54114_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo54793[1] = foldl;
clo54793[2] = car;
clo54793[3] = acc;
clo54793[4] = fun;
clo54793[5] = kont53836;
clo54793[6] = lst;
clo54793[7] = cdr;
void* f5384053960 = encode_clo(clo54793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5384053960;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam54117_fptr() // lam54117 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54118 = arg_buffer[1];
//reading env and args
void* a5374253975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54118))[3];
//not do dummy comment
void* kont53841 = (decode_clo(env54118))[2];
//not do dummy comment
void* a5374053971 = (decode_clo(env54118))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont53841;
arg_buffer[3] = a5374053971;
arg_buffer[4] = a5374253975;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54117 = encode_clo(alloc_clo(lam54117_fptr, 0));

void* lam54119_fptr() // lam54119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54120 = arg_buffer[1];
//reading env and args
void* a5374153973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54120))[5];
//not do dummy comment
void* kont53841 = (decode_clo(env54120))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54120))[3];
//not do dummy comment
void* a5374053971 = (decode_clo(env54120))[2];
//not do dummy comment
void* cons = (decode_clo(env54120))[1];

//creating new closure instance
void** clo54795 = alloc_clo(lam54117_fptr, 3);

//setting env list
clo54795[1] = a5374053971;
clo54795[2] = kont53841;
clo54795[3] = reverse_u45helper;
void* f5384253974 = encode_clo(clo54795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5384253974;
arg_buffer[3] = a5374153973;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54119 = encode_clo(alloc_clo(lam54119_fptr, 0));

void* lam54121_fptr() // lam54121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54122 = arg_buffer[1];
//reading env and args
void* a5374053971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54122))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54122))[5];
//not do dummy comment
void* kont53841 = (decode_clo(env54122))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54122))[3];
//not do dummy comment
void* car = (decode_clo(env54122))[2];
//not do dummy comment
void* cons = (decode_clo(env54122))[1];

//creating new closure instance
void** clo54797 = alloc_clo(lam54119_fptr, 5);

//setting env list
clo54797[1] = cons;
clo54797[2] = a5374053971;
clo54797[3] = lst2;
clo54797[4] = kont53841;
clo54797[5] = reverse_u45helper;
void* f5384353972 = encode_clo(clo54797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5384353972;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54121 = encode_clo(alloc_clo(lam54121_fptr, 0));

void* lam54123_fptr() // lam54123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54124 = arg_buffer[1];
//reading env and args
void* a5373953969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54124))[7];
//not do dummy comment
void* lst = (decode_clo(env54124))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54124))[5];
//not do dummy comment
void* kont53841 = (decode_clo(env54124))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54124))[3];
//not do dummy comment
void* car = (decode_clo(env54124))[2];
//not do dummy comment
void* cons = (decode_clo(env54124))[1];

//if-clause
bool if_guard54798 = is_true(a5373953969);
if(if_guard54798)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53841);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53841))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54800 = alloc_clo(lam54121_fptr, 6);

//setting env list
clo54800[1] = cons;
clo54800[2] = car;
clo54800[3] = lst2;
clo54800[4] = kont53841;
clo54800[5] = reverse_u45helper;
clo54800[6] = lst;
void* f5384453970 = encode_clo(clo54800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5384453970;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54123 = encode_clo(alloc_clo(lam54123_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54125 = arg_buffer[1];
//reading env and args
void* kont53841 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54802 = alloc_clo(lam54123_fptr, 7);

//setting env list
clo54802[1] = cons;
clo54802[2] = car;
clo54802[3] = lst2;
clo54802[4] = kont53841;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo54802[5] = reverse_u45helper;
clo54802[6] = lst;
clo54802[7] = cdr;
void* f5384553968 = encode_clo(clo54802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5384553968;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam54126_fptr() // lam54126 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54127 = arg_buffer[1];
//reading env and args
void* a5374353977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53846 = (decode_clo(env54127))[3];
//not do dummy comment
void* lst = (decode_clo(env54127))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54127))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont53846;
arg_buffer[3] = lst;
arg_buffer[4] = a5374353977;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54126 = encode_clo(alloc_clo(lam54126_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54128 = arg_buffer[1];
//reading env and args
void* kont53846 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54804 = alloc_clo(lam54126_fptr, 3);

//setting env list
clo54804[1] = reverse_u45helper;
clo54804[2] = lst;
clo54804[3] = kont53846;
void* f5384753976 = encode_clo(clo54804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5384753976;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam54129_fptr() // lam54129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54130 = arg_buffer[1];
//reading env and args
void* x5374653982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53848 = (decode_clo(env54130))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53848);
arg_buffer[2] = x5374653982;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53848))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54129 = encode_clo(alloc_clo(lam54129_fptr, 0));

void* lam54131_fptr() // lam54131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54132 = arg_buffer[1];
//reading env and args
void* a5375153991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53848 = (decode_clo(env54132))[4];
//not do dummy comment
void* a5374753984 = (decode_clo(env54132))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54132))[2];
//not do dummy comment
void* a5374953987 = (decode_clo(env54132))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont53848;
arg_buffer[3] = a5374753984;
arg_buffer[4] = a5374953987;
arg_buffer[5] = a5375153991;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54131 = encode_clo(alloc_clo(lam54131_fptr, 0));

void* lam54133_fptr() // lam54133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54134 = arg_buffer[1];
//reading env and args
void* a5375053989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53848 = (decode_clo(env54134))[6];
//not do dummy comment
void* a5374753984 = (decode_clo(env54134))[5];
//not do dummy comment
void* a5374953987 = (decode_clo(env54134))[4];
//not do dummy comment
void* cons = (decode_clo(env54134))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54134))[2];
//not do dummy comment
void* lst2 = (decode_clo(env54134))[1];

//creating new closure instance
void** clo54806 = alloc_clo(lam54131_fptr, 4);

//setting env list
clo54806[1] = a5374953987;
clo54806[2] = take_u45helper;
clo54806[3] = a5374753984;
clo54806[4] = kont53848;
void* f5385053990 = encode_clo(clo54806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5385053990;
arg_buffer[3] = a5375053989;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54133 = encode_clo(alloc_clo(lam54133_fptr, 0));

void* lam54135_fptr() // lam54135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54136 = arg_buffer[1];
//reading env and args
void* a5374953987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53848 = (decode_clo(env54136))[7];
//not do dummy comment
void* lst = (decode_clo(env54136))[6];
//not do dummy comment
void* a5374753984 = (decode_clo(env54136))[5];
//not do dummy comment
void* car = (decode_clo(env54136))[4];
//not do dummy comment
void* cons = (decode_clo(env54136))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54136))[2];
//not do dummy comment
void* lst2 = (decode_clo(env54136))[1];

//creating new closure instance
void** clo54808 = alloc_clo(lam54133_fptr, 6);

//setting env list
clo54808[1] = lst2;
clo54808[2] = take_u45helper;
clo54808[3] = cons;
clo54808[4] = a5374953987;
clo54808[5] = a5374753984;
clo54808[6] = kont53848;
void* f5385153988 = encode_clo(clo54808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5385153988;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54135 = encode_clo(alloc_clo(lam54135_fptr, 0));

void* lam54138_fptr() // lam54138 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54139 = arg_buffer[1];
//reading env and args
void* a5374753984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53848 = (decode_clo(env54139))[8];
//not do dummy comment
void* lst = (decode_clo(env54139))[7];
//not do dummy comment
void* cons = (decode_clo(env54139))[6];
//not do dummy comment
void* _u45 = (decode_clo(env54139))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env54139))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54139))[3];
//not do dummy comment
void* n = (decode_clo(env54139))[2];
//not do dummy comment
void* car = (decode_clo(env54139))[1];
mpz_t* mpzvar54809 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54809, "1", 10);
void* a5374853985 = encode_mpz(mpzvar54809);

//creating new closure instance
void** clo54811 = alloc_clo(lam54135_fptr, 7);

//setting env list
clo54811[1] = lst2;
clo54811[2] = take_u45helper;
clo54811[3] = cons;
clo54811[4] = car;
clo54811[5] = a5374753984;
clo54811[6] = lst;
clo54811[7] = kont53848;
void* f5385253986 = encode_clo(clo54811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5385253986;
arg_buffer[3] = n;
arg_buffer[4] = a5374853985;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54138 = encode_clo(alloc_clo(lam54138_fptr, 0));

void* lam54140_fptr() // lam54140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54141 = arg_buffer[1];
//reading env and args
void* a5374553980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54141))[10];
//not do dummy comment
void* kont53848 = (decode_clo(env54141))[9];
//not do dummy comment
void* lst = (decode_clo(env54141))[8];
//not do dummy comment
void* reverse = (decode_clo(env54141))[7];
//not do dummy comment
void* cons = (decode_clo(env54141))[6];
//not do dummy comment
void* _u45 = (decode_clo(env54141))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env54141))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54141))[3];
//not do dummy comment
void* n = (decode_clo(env54141))[2];
//not do dummy comment
void* car = (decode_clo(env54141))[1];

//if-clause
bool if_guard54812 = is_true(a5374553980);
if(if_guard54812)
{

//creating new closure instance
void** clo54814 = alloc_clo(lam54129_fptr, 1);

//setting env list
clo54814[1] = kont53848;
void* f5384953981 = encode_clo(clo54814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5384953981;
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
void** clo54816 = alloc_clo(lam54138_fptr, 8);

//setting env list
clo54816[1] = car;
clo54816[2] = n;
clo54816[3] = lst2;
clo54816[4] = take_u45helper;
clo54816[5] = _u45;
clo54816[6] = cons;
clo54816[7] = lst;
clo54816[8] = kont53848;
void* f5385353983 = encode_clo(clo54816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5385353983;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54140 = encode_clo(alloc_clo(lam54140_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54143 = arg_buffer[1];
//reading env and args
void* kont53848 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar54817 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54817, "0", 10);
void* a5374453978 = encode_mpz(mpzvar54817);

//creating new closure instance
void** clo54819 = alloc_clo(lam54140_fptr, 10);

//setting env list
clo54819[1] = car;
clo54819[2] = n;
clo54819[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo54819[4] = take_u45helper;
clo54819[5] = _u45;
clo54819[6] = cons;
clo54819[7] = reverse;
clo54819[8] = lst;
clo54819[9] = kont53848;
clo54819[10] = cdr;
void* f5385453979 = encode_clo(clo54819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5385453979;
arg_buffer[3] = n;
arg_buffer[4] = a5374453978;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam54144_fptr() // lam54144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54145 = arg_buffer[1];
//reading env and args
void* a5375253993 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54145))[4];
//not do dummy comment
void* kont53855 = (decode_clo(env54145))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54145))[2];
//not do dummy comment
void* n = (decode_clo(env54145))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont53855;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5375253993;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54144 = encode_clo(alloc_clo(lam54144_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54146 = arg_buffer[1];
//reading env and args
void* kont53855 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54821 = alloc_clo(lam54144_fptr, 4);

//setting env list
clo54821[1] = n;
clo54821[2] = take_u45helper;
clo54821[3] = kont53855;
clo54821[4] = lst;
void* f5385653992 = encode_clo(clo54821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5385653992;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam54148_fptr() // lam54148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54149 = arg_buffer[1];
//reading env and args
void* a5375754001 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5375553997 = (decode_clo(env54149))[3];
//not do dummy comment
void* _u43 = (decode_clo(env54149))[2];
//not do dummy comment
void* kont53857 = (decode_clo(env54149))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont53857;
arg_buffer[3] = a5375553997;
arg_buffer[4] = a5375754001;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54148 = encode_clo(alloc_clo(lam54148_fptr, 0));

void* lam54150_fptr() // lam54150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54151 = arg_buffer[1];
//reading env and args
void* a5375653999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env54151))[4];
//not do dummy comment
void* a5375553997 = (decode_clo(env54151))[3];
//not do dummy comment
void* _u43 = (decode_clo(env54151))[2];
//not do dummy comment
void* kont53857 = (decode_clo(env54151))[1];

//creating new closure instance
void** clo54823 = alloc_clo(lam54148_fptr, 3);

//setting env list
clo54823[1] = kont53857;
clo54823[2] = _u43;
clo54823[3] = a5375553997;
void* f5385854000 = encode_clo(clo54823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5385854000;
arg_buffer[3] = a5375653999;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54150 = encode_clo(alloc_clo(lam54150_fptr, 0));

void* lam54153_fptr() // lam54153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54154 = arg_buffer[1];
//reading env and args
void* a5375353995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54154))[5];
//not do dummy comment
void* lst = (decode_clo(env54154))[4];
//not do dummy comment
void* length = (decode_clo(env54154))[3];
//not do dummy comment
void* _u43 = (decode_clo(env54154))[2];
//not do dummy comment
void* kont53857 = (decode_clo(env54154))[1];

//if-clause
bool if_guard54824 = is_true(a5375353995);
if(if_guard54824)
{
mpz_t* mpzvar54825 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54825, "0", 10);
void* x5375453996 = encode_mpz(mpzvar54825);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53857);
arg_buffer[2] = x5375453996;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53857))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar54826 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54826, "1", 10);
void* a5375553997 = encode_mpz(mpzvar54826);

//creating new closure instance
void** clo54828 = alloc_clo(lam54150_fptr, 4);

//setting env list
clo54828[1] = kont53857;
clo54828[2] = _u43;
clo54828[3] = a5375553997;
clo54828[4] = length;
void* f5385953998 = encode_clo(clo54828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5385953998;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54153 = encode_clo(alloc_clo(lam54153_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54155 = arg_buffer[1];
//reading env and args
void* kont53857 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54830 = alloc_clo(lam54153_fptr, 5);

//setting env list
clo54830[1] = kont53857;
clo54830[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo54830[3] = length;
clo54830[4] = lst;
clo54830[5] = cdr;
void* f5386053994 = encode_clo(clo54830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5386053994;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam54156_fptr() // lam54156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54157 = arg_buffer[1];
//reading env and args
void* x5375954005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53861 = (decode_clo(env54157))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53861);
arg_buffer[2] = x5375954005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53861))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54156 = encode_clo(alloc_clo(lam54156_fptr, 0));

void* lam54158_fptr() // lam54158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54159 = arg_buffer[1];
//reading env and args
void* a5376354013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5376154009 = (decode_clo(env54159))[3];
//not do dummy comment
void* cons = (decode_clo(env54159))[2];
//not do dummy comment
void* kont53861 = (decode_clo(env54159))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53861;
arg_buffer[3] = a5376154009;
arg_buffer[4] = a5376354013;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54158 = encode_clo(alloc_clo(lam54158_fptr, 0));

void* lam54160_fptr() // lam54160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54161 = arg_buffer[1];
//reading env and args
void* a5376254011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5376154009 = (decode_clo(env54161))[5];
//not do dummy comment
void* map = (decode_clo(env54161))[4];
//not do dummy comment
void* proc = (decode_clo(env54161))[3];
//not do dummy comment
void* cons = (decode_clo(env54161))[2];
//not do dummy comment
void* kont53861 = (decode_clo(env54161))[1];

//creating new closure instance
void** clo54832 = alloc_clo(lam54158_fptr, 3);

//setting env list
clo54832[1] = kont53861;
clo54832[2] = cons;
clo54832[3] = a5376154009;
void* f5386354012 = encode_clo(clo54832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5386354012;
arg_buffer[3] = proc;
arg_buffer[4] = a5376254011;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54160 = encode_clo(alloc_clo(lam54160_fptr, 0));

void* lam54162_fptr() // lam54162 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54163 = arg_buffer[1];
//reading env and args
void* a5376154009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54163))[6];
//not do dummy comment
void* lst = (decode_clo(env54163))[5];
//not do dummy comment
void* map = (decode_clo(env54163))[4];
//not do dummy comment
void* proc = (decode_clo(env54163))[3];
//not do dummy comment
void* cons = (decode_clo(env54163))[2];
//not do dummy comment
void* kont53861 = (decode_clo(env54163))[1];

//creating new closure instance
void** clo54834 = alloc_clo(lam54160_fptr, 5);

//setting env list
clo54834[1] = kont53861;
clo54834[2] = cons;
clo54834[3] = proc;
clo54834[4] = map;
clo54834[5] = a5376154009;
void* f5386454010 = encode_clo(clo54834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5386454010;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54162 = encode_clo(alloc_clo(lam54162_fptr, 0));

void* lam54164_fptr() // lam54164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54165 = arg_buffer[1];
//reading env and args
void* a5376054007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54165))[6];
//not do dummy comment
void* lst = (decode_clo(env54165))[5];
//not do dummy comment
void* map = (decode_clo(env54165))[4];
//not do dummy comment
void* proc = (decode_clo(env54165))[3];
//not do dummy comment
void* cons = (decode_clo(env54165))[2];
//not do dummy comment
void* kont53861 = (decode_clo(env54165))[1];

//creating new closure instance
void** clo54836 = alloc_clo(lam54162_fptr, 6);

//setting env list
clo54836[1] = kont53861;
clo54836[2] = cons;
clo54836[3] = proc;
clo54836[4] = map;
clo54836[5] = lst;
clo54836[6] = cdr;
void* f5386554008 = encode_clo(clo54836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5386554008;
arg_buffer[3] = a5376054007;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54164 = encode_clo(alloc_clo(lam54164_fptr, 0));

void* lam54166_fptr() // lam54166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54167 = arg_buffer[1];
//reading env and args
void* a5375854003 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54167))[8];
//not do dummy comment
void* map = (decode_clo(env54167))[7];
//not do dummy comment
void* proc = (decode_clo(env54167))[6];
//not do dummy comment
void* car = (decode_clo(env54167))[5];
//not do dummy comment
void* cons = (decode_clo(env54167))[4];
//not do dummy comment
void* kont53861 = (decode_clo(env54167))[3];
//not do dummy comment
void* list = (decode_clo(env54167))[2];
//not do dummy comment
void* cdr = (decode_clo(env54167))[1];

//if-clause
bool if_guard54837 = is_true(a5375854003);
if(if_guard54837)
{

//creating new closure instance
void** clo54839 = alloc_clo(lam54156_fptr, 1);

//setting env list
clo54839[1] = kont53861;
void* f5386254004 = encode_clo(clo54839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5386254004;
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
void** clo54841 = alloc_clo(lam54164_fptr, 6);

//setting env list
clo54841[1] = kont53861;
clo54841[2] = cons;
clo54841[3] = proc;
clo54841[4] = map;
clo54841[5] = lst;
clo54841[6] = cdr;
void* f5386654006 = encode_clo(clo54841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5386654006;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54166 = encode_clo(alloc_clo(lam54166_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54168 = arg_buffer[1];
//reading env and args
void* kont53861 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54843 = alloc_clo(lam54166_fptr, 8);

//setting env list
clo54843[1] = cdr;
clo54843[2] = list;
clo54843[3] = kont53861;
clo54843[4] = cons;
clo54843[5] = car;
clo54843[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo54843[7] = map;
clo54843[8] = lst;
void* f5386754002 = encode_clo(clo54843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5386754002;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam54169_fptr() // lam54169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54170 = arg_buffer[1];
//reading env and args
void* x5376554017 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53868 = (decode_clo(env54170))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53868);
arg_buffer[2] = x5376554017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53868))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54169 = encode_clo(alloc_clo(lam54169_fptr, 0));

void* lam54171_fptr() // lam54171 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54172 = arg_buffer[1];
//reading env and args
void* a5377054027 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5376854023 = (decode_clo(env54172))[3];
//not do dummy comment
void* kont53868 = (decode_clo(env54172))[2];
//not do dummy comment
void* cons = (decode_clo(env54172))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53868;
arg_buffer[3] = a5376854023;
arg_buffer[4] = a5377054027;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54171 = encode_clo(alloc_clo(lam54171_fptr, 0));

void* lam54173_fptr() // lam54173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54174 = arg_buffer[1];
//reading env and args
void* a5376954025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5376854023 = (decode_clo(env54174))[5];
//not do dummy comment
void* kont53868 = (decode_clo(env54174))[4];
//not do dummy comment
void* op = (decode_clo(env54174))[3];
//not do dummy comment
void* filter = (decode_clo(env54174))[2];
//not do dummy comment
void* cons = (decode_clo(env54174))[1];

//creating new closure instance
void** clo54845 = alloc_clo(lam54171_fptr, 3);

//setting env list
clo54845[1] = cons;
clo54845[2] = kont53868;
clo54845[3] = a5376854023;
void* f5387054026 = encode_clo(clo54845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5387054026;
arg_buffer[3] = op;
arg_buffer[4] = a5376954025;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54173 = encode_clo(alloc_clo(lam54173_fptr, 0));

void* lam54175_fptr() // lam54175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54176 = arg_buffer[1];
//reading env and args
void* a5376854023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54176))[6];
//not do dummy comment
void* lst = (decode_clo(env54176))[5];
//not do dummy comment
void* kont53868 = (decode_clo(env54176))[4];
//not do dummy comment
void* op = (decode_clo(env54176))[3];
//not do dummy comment
void* filter = (decode_clo(env54176))[2];
//not do dummy comment
void* cons = (decode_clo(env54176))[1];

//creating new closure instance
void** clo54847 = alloc_clo(lam54173_fptr, 5);

//setting env list
clo54847[1] = cons;
clo54847[2] = filter;
clo54847[3] = op;
clo54847[4] = kont53868;
clo54847[5] = a5376854023;
void* f5387154024 = encode_clo(clo54847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5387154024;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54175 = encode_clo(alloc_clo(lam54175_fptr, 0));

void* lam54177_fptr() // lam54177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54178 = arg_buffer[1];
//reading env and args
void* a5377154029 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53868 = (decode_clo(env54178))[3];
//not do dummy comment
void* op = (decode_clo(env54178))[2];
//not do dummy comment
void* filter = (decode_clo(env54178))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont53868;
arg_buffer[3] = op;
arg_buffer[4] = a5377154029;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54177 = encode_clo(alloc_clo(lam54177_fptr, 0));

void* lam54179_fptr() // lam54179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54180 = arg_buffer[1];
//reading env and args
void* a5376754021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54180))[7];
//not do dummy comment
void* lst = (decode_clo(env54180))[6];
//not do dummy comment
void* kont53868 = (decode_clo(env54180))[5];
//not do dummy comment
void* op = (decode_clo(env54180))[4];
//not do dummy comment
void* cons = (decode_clo(env54180))[3];
//not do dummy comment
void* filter = (decode_clo(env54180))[2];
//not do dummy comment
void* car = (decode_clo(env54180))[1];

//if-clause
bool if_guard54848 = is_true(a5376754021);
if(if_guard54848)
{

//creating new closure instance
void** clo54850 = alloc_clo(lam54175_fptr, 6);

//setting env list
clo54850[1] = cons;
clo54850[2] = filter;
clo54850[3] = op;
clo54850[4] = kont53868;
clo54850[5] = lst;
clo54850[6] = cdr;
void* f5387254022 = encode_clo(clo54850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5387254022;
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
void** clo54852 = alloc_clo(lam54177_fptr, 3);

//setting env list
clo54852[1] = filter;
clo54852[2] = op;
clo54852[3] = kont53868;
void* f5387354028 = encode_clo(clo54852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5387354028;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54179 = encode_clo(alloc_clo(lam54179_fptr, 0));

void* lam54181_fptr() // lam54181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54182 = arg_buffer[1];
//reading env and args
void* a5376654019 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54182))[7];
//not do dummy comment
void* lst = (decode_clo(env54182))[6];
//not do dummy comment
void* kont53868 = (decode_clo(env54182))[5];
//not do dummy comment
void* op = (decode_clo(env54182))[4];
//not do dummy comment
void* cons = (decode_clo(env54182))[3];
//not do dummy comment
void* filter = (decode_clo(env54182))[2];
//not do dummy comment
void* car = (decode_clo(env54182))[1];

//creating new closure instance
void** clo54854 = alloc_clo(lam54179_fptr, 7);

//setting env list
clo54854[1] = car;
clo54854[2] = filter;
clo54854[3] = cons;
clo54854[4] = op;
clo54854[5] = kont53868;
clo54854[6] = lst;
clo54854[7] = cdr;
void* f5387454020 = encode_clo(clo54854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5387454020;
arg_buffer[3] = a5376654019;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54181 = encode_clo(alloc_clo(lam54181_fptr, 0));

void* lam54183_fptr() // lam54183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54184 = arg_buffer[1];
//reading env and args
void* a5376454015 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54184))[8];
//not do dummy comment
void* kont53868 = (decode_clo(env54184))[7];
//not do dummy comment
void* op = (decode_clo(env54184))[6];
//not do dummy comment
void* cons = (decode_clo(env54184))[5];
//not do dummy comment
void* list = (decode_clo(env54184))[4];
//not do dummy comment
void* cdr = (decode_clo(env54184))[3];
//not do dummy comment
void* filter = (decode_clo(env54184))[2];
//not do dummy comment
void* car = (decode_clo(env54184))[1];

//if-clause
bool if_guard54855 = is_true(a5376454015);
if(if_guard54855)
{

//creating new closure instance
void** clo54857 = alloc_clo(lam54169_fptr, 1);

//setting env list
clo54857[1] = kont53868;
void* f5386954016 = encode_clo(clo54857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5386954016;
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
void** clo54859 = alloc_clo(lam54181_fptr, 7);

//setting env list
clo54859[1] = car;
clo54859[2] = filter;
clo54859[3] = cons;
clo54859[4] = op;
clo54859[5] = kont53868;
clo54859[6] = lst;
clo54859[7] = cdr;
void* f5387554018 = encode_clo(clo54859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5387554018;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54183 = encode_clo(alloc_clo(lam54183_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54185 = arg_buffer[1];
//reading env and args
void* kont53868 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54861 = alloc_clo(lam54183_fptr, 8);

//setting env list
clo54861[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo54861[2] = filter;
clo54861[3] = cdr;
clo54861[4] = list;
clo54861[5] = cons;
clo54861[6] = op;
clo54861[7] = kont53868;
clo54861[8] = lst;
void* f5387654014 = encode_clo(clo54861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5387654014;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam54186_fptr() // lam54186 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54187 = arg_buffer[1];
//reading env and args
void* a5377654037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env54187))[3];
//not do dummy comment
void* a5377454034 = (decode_clo(env54187))[2];
//not do dummy comment
void* kont53877 = (decode_clo(env54187))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont53877;
arg_buffer[3] = a5377454034;
arg_buffer[4] = a5377654037;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54186 = encode_clo(alloc_clo(lam54186_fptr, 0));

void* lam54189_fptr() // lam54189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54190 = arg_buffer[1];
//reading env and args
void* a5377454034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env54190))[4];
//not do dummy comment
void* n = (decode_clo(env54190))[3];
//not do dummy comment
void* kont53877 = (decode_clo(env54190))[2];
//not do dummy comment
void* _u45 = (decode_clo(env54190))[1];
mpz_t* mpzvar54862 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54862, "1", 10);
void* a5377554035 = encode_mpz(mpzvar54862);

//creating new closure instance
void** clo54864 = alloc_clo(lam54186_fptr, 3);

//setting env list
clo54864[1] = kont53877;
clo54864[2] = a5377454034;
clo54864[3] = drop;
void* f5387854036 = encode_clo(clo54864);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5387854036;
arg_buffer[3] = n;
arg_buffer[4] = a5377554035;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54189 = encode_clo(alloc_clo(lam54189_fptr, 0));

void* lam54191_fptr() // lam54191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54192 = arg_buffer[1];
//reading env and args
void* a5377354032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54192))[6];
//not do dummy comment
void* n = (decode_clo(env54192))[5];
//not do dummy comment
void* lst = (decode_clo(env54192))[4];
//not do dummy comment
void* drop = (decode_clo(env54192))[3];
//not do dummy comment
void* kont53877 = (decode_clo(env54192))[2];
//not do dummy comment
void* _u45 = (decode_clo(env54192))[1];

//if-clause
bool if_guard54865 = is_true(a5377354032);
if(if_guard54865)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53877);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53877))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54867 = alloc_clo(lam54189_fptr, 4);

//setting env list
clo54867[1] = _u45;
clo54867[2] = kont53877;
clo54867[3] = n;
clo54867[4] = drop;
void* f5387954033 = encode_clo(clo54867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5387954033;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54191 = encode_clo(alloc_clo(lam54191_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54194 = arg_buffer[1];
//reading env and args
void* kont53877 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar54868 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54868, "0", 10);
void* a5377254030 = encode_mpz(mpzvar54868);

//creating new closure instance
void** clo54870 = alloc_clo(lam54191_fptr, 6);

//setting env list
clo54870[1] = _u45;
clo54870[2] = kont53877;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo54870[3] = drop;
clo54870[4] = lst;
clo54870[5] = n;
clo54870[6] = cdr;
void* f5388054031 = encode_clo(clo54870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5388054031;
arg_buffer[3] = n;
arg_buffer[4] = a5377254030;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam54195_fptr() // lam54195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54196 = arg_buffer[1];
//reading env and args
void* a5378054045 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env54196))[3];
//not do dummy comment
void* kont53881 = (decode_clo(env54196))[2];
//not do dummy comment
void* a5377854041 = (decode_clo(env54196))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont53881;
arg_buffer[3] = a5377854041;
arg_buffer[4] = a5378054045;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54195 = encode_clo(alloc_clo(lam54195_fptr, 0));

void* lam54197_fptr() // lam54197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54198 = arg_buffer[1];
//reading env and args
void* a5377954043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env54198))[5];
//not do dummy comment
void* kont53881 = (decode_clo(env54198))[4];
//not do dummy comment
void* a5377854041 = (decode_clo(env54198))[3];
//not do dummy comment
void* proc = (decode_clo(env54198))[2];
//not do dummy comment
void* acc = (decode_clo(env54198))[1];

//creating new closure instance
void** clo54872 = alloc_clo(lam54195_fptr, 3);

//setting env list
clo54872[1] = a5377854041;
clo54872[2] = kont53881;
clo54872[3] = proc;
void* f5388254044 = encode_clo(clo54872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5388254044;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5377954043;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54197 = encode_clo(alloc_clo(lam54197_fptr, 0));

void* lam54199_fptr() // lam54199 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54200 = arg_buffer[1];
//reading env and args
void* a5377854041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54200))[6];
//not do dummy comment
void* kont53881 = (decode_clo(env54200))[5];
//not do dummy comment
void* foldr = (decode_clo(env54200))[4];
//not do dummy comment
void* lst = (decode_clo(env54200))[3];
//not do dummy comment
void* proc = (decode_clo(env54200))[2];
//not do dummy comment
void* acc = (decode_clo(env54200))[1];

//creating new closure instance
void** clo54874 = alloc_clo(lam54197_fptr, 5);

//setting env list
clo54874[1] = acc;
clo54874[2] = proc;
clo54874[3] = a5377854041;
clo54874[4] = kont53881;
clo54874[5] = foldr;
void* f5388354042 = encode_clo(clo54874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5388354042;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54199 = encode_clo(alloc_clo(lam54199_fptr, 0));

void* lam54201_fptr() // lam54201 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54202 = arg_buffer[1];
//reading env and args
void* a5377754039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54202))[7];
//not do dummy comment
void* kont53881 = (decode_clo(env54202))[6];
//not do dummy comment
void* car = (decode_clo(env54202))[5];
//not do dummy comment
void* foldr = (decode_clo(env54202))[4];
//not do dummy comment
void* lst = (decode_clo(env54202))[3];
//not do dummy comment
void* proc = (decode_clo(env54202))[2];
//not do dummy comment
void* acc = (decode_clo(env54202))[1];

//if-clause
bool if_guard54875 = is_true(a5377754039);
if(if_guard54875)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53881);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53881))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54877 = alloc_clo(lam54199_fptr, 6);

//setting env list
clo54877[1] = acc;
clo54877[2] = proc;
clo54877[3] = lst;
clo54877[4] = foldr;
clo54877[5] = kont53881;
clo54877[6] = cdr;
void* f5388454040 = encode_clo(clo54877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5388454040;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54201 = encode_clo(alloc_clo(lam54201_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54203 = arg_buffer[1];
//reading env and args
void* kont53881 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54879 = alloc_clo(lam54201_fptr, 7);

//setting env list
clo54879[1] = acc;
clo54879[2] = proc;
clo54879[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo54879[4] = foldr;
clo54879[5] = car;
clo54879[6] = kont53881;
clo54879[7] = cdr;
void* f5388554038 = encode_clo(clo54879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5388554038;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam54204_fptr() // lam54204 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54205 = arg_buffer[1];
//reading env and args
void* a5378454053 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53886 = (decode_clo(env54205))[3];
//not do dummy comment
void* a5378254049 = (decode_clo(env54205))[2];
//not do dummy comment
void* cons = (decode_clo(env54205))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53886;
arg_buffer[3] = a5378254049;
arg_buffer[4] = a5378454053;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54204 = encode_clo(alloc_clo(lam54204_fptr, 0));

void* lam54206_fptr() // lam54206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54207 = arg_buffer[1];
//reading env and args
void* a5378354051 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5378254049 = (decode_clo(env54207))[5];
//not do dummy comment
void* lst2 = (decode_clo(env54207))[4];
//not do dummy comment
void* cons = (decode_clo(env54207))[3];
//not do dummy comment
void* append = (decode_clo(env54207))[2];
//not do dummy comment
void* kont53886 = (decode_clo(env54207))[1];

//creating new closure instance
void** clo54881 = alloc_clo(lam54204_fptr, 3);

//setting env list
clo54881[1] = cons;
clo54881[2] = a5378254049;
clo54881[3] = kont53886;
void* f5388754052 = encode_clo(clo54881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5388754052;
arg_buffer[3] = a5378354051;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54206 = encode_clo(alloc_clo(lam54206_fptr, 0));

void* lam54208_fptr() // lam54208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54209 = arg_buffer[1];
//reading env and args
void* a5378254049 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54209))[6];
//not do dummy comment
void* lst2 = (decode_clo(env54209))[5];
//not do dummy comment
void* lst1 = (decode_clo(env54209))[4];
//not do dummy comment
void* cons = (decode_clo(env54209))[3];
//not do dummy comment
void* append = (decode_clo(env54209))[2];
//not do dummy comment
void* kont53886 = (decode_clo(env54209))[1];

//creating new closure instance
void** clo54883 = alloc_clo(lam54206_fptr, 5);

//setting env list
clo54883[1] = kont53886;
clo54883[2] = append;
clo54883[3] = cons;
clo54883[4] = lst2;
clo54883[5] = a5378254049;
void* f5388854050 = encode_clo(clo54883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5388854050;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54208 = encode_clo(alloc_clo(lam54208_fptr, 0));

void* lam54210_fptr() // lam54210 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54211 = arg_buffer[1];
//reading env and args
void* a5378154047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54211))[7];
//not do dummy comment
void* lst2 = (decode_clo(env54211))[6];
//not do dummy comment
void* cons = (decode_clo(env54211))[5];
//not do dummy comment
void* append = (decode_clo(env54211))[4];
//not do dummy comment
void* kont53886 = (decode_clo(env54211))[3];
//not do dummy comment
void* lst1 = (decode_clo(env54211))[2];
//not do dummy comment
void* car = (decode_clo(env54211))[1];

//if-clause
bool if_guard54884 = is_true(a5378154047);
if(if_guard54884)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53886);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53886))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54886 = alloc_clo(lam54208_fptr, 6);

//setting env list
clo54886[1] = kont53886;
clo54886[2] = append;
clo54886[3] = cons;
clo54886[4] = lst1;
clo54886[5] = lst2;
clo54886[6] = cdr;
void* f5388954048 = encode_clo(clo54886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5388954048;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54210 = encode_clo(alloc_clo(lam54210_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54212 = arg_buffer[1];
//reading env and args
void* kont53886 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54888 = alloc_clo(lam54210_fptr, 7);

//setting env list
clo54888[1] = car;
clo54888[2] = lst1;
clo54888[3] = kont53886;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo54888[4] = append;
clo54888[5] = cons;
clo54888[6] = lst2;
clo54888[7] = cdr;
void* f5389054046 = encode_clo(clo54888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5389054046;
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
void* _54213 = arg_buffer[1];
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

void* kont5389154054 = prim_car(lst);
void* lst54055 = prim_cdr(lst);
void* x5378554056 = apply_prim_hash(lst54055);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5389154054);
arg_buffer[2] = x5378554056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5389154054))[0]);
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
void* _54214 = arg_buffer[1];
//reading env and args
void* kont53893 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5378654057 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53893);
arg_buffer[2] = x5378654057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53893))[0]);
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
void* _54215 = arg_buffer[1];
//reading env and args
void* kont53894 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5378754058 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53894);
arg_buffer[2] = x5378754058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53894))[0]);
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
void* _54216 = arg_buffer[1];
//reading env and args
void* kont53895 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5378854059 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53895);
arg_buffer[2] = x5378854059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53895))[0]);
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
void* _54217 = arg_buffer[1];
//reading env and args
void* kont53896 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5378954060 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53896);
arg_buffer[2] = x5378954060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53896))[0]);
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
void* _54223 = arg_buffer[1];
//reading env and args
void* kont53897 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar54889 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54889, "100", 10);
void* a5379054061 = encode_mpz(mpzvar54889);
mpz_t* mpzvar54890 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54890, "100", 10);
void* a5379154062 = encode_mpz(mpzvar54890);
mpz_t* mpzvar54891 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54891, "100", 10);
void* a5379254063 = encode_mpz(mpzvar54891);
mpz_t* mpzvar54892 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54892, "100", 10);
void* a5379354064 = encode_mpz(mpzvar54892);
mpz_t* mpzvar54893 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54893, "100", 10);
void* a5379454065 = encode_mpz(mpzvar54893);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = kont53897;
arg_buffer[3] = a5379054061;
arg_buffer[4] = a5379154062;
arg_buffer[5] = a5379254063;
arg_buffer[6] = a5379354064;
arg_buffer[7] = a5379454065;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam54224_fptr() // lam54224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54225 = arg_buffer[1];
//reading env and args
void* x5379554067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53898 = (decode_clo(env54225))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53898);
arg_buffer[2] = x5379554067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53898))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54224 = encode_clo(alloc_clo(lam54224_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54226 = arg_buffer[1];
//reading env and args
void* kont53898 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo54895 = alloc_clo(lam54224_fptr, 1);

//setting env list
clo54895[1] = kont53898;
void* f5389954066 = encode_clo(clo54895);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5389954066;
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

