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
void* _11010 = arg_buffer[1];
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

void* kont1073710841 = prim_car(lst);
void* lst10842 = prim_cdr(lst);
void* x1064510843 = apply_prim__u43(lst10842);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1073710841);
arg_buffer[2] = x1064510843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1073710841))[0]);
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
void* _11011 = arg_buffer[1];
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

void* kont1073910844 = prim_car(lst);
void* lst10845 = prim_cdr(lst);
void* x1064610846 = apply_prim__u45(lst10845);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1073910844);
arg_buffer[2] = x1064610846;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1073910844))[0]);
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
void* _11012 = arg_buffer[1];
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

void* kont1074110847 = prim_car(lst);
void* lst10848 = prim_cdr(lst);
void* x1064710849 = apply_prim__u42(lst10848);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1074110847);
arg_buffer[2] = x1064710849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1074110847))[0]);
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
void* _11013 = arg_buffer[1];
//reading env and args
void* kont10743 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1064810850 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10743);
arg_buffer[2] = x1064810850;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10743))[0]);
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
void* _11014 = arg_buffer[1];
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

void* kont1074410851 = prim_car(lst);
void* lst10852 = prim_cdr(lst);
void* x1064910853 = apply_prim__u47(lst10852);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1074410851);
arg_buffer[2] = x1064910853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1074410851))[0]);
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
void* _11015 = arg_buffer[1];
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

void* kont1074610854 = prim_car(lst);
void* lst10855 = prim_cdr(lst);
void* x1065010856 = apply_prim__u61(lst10855);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1074610854);
arg_buffer[2] = x1065010856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1074610854))[0]);
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
void* _11016 = arg_buffer[1];
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

void* kont1074810857 = prim_car(lst);
void* lst10858 = prim_cdr(lst);
void* x1065110859 = apply_prim__u62(lst10858);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1074810857);
arg_buffer[2] = x1065110859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1074810857))[0]);
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
void* _11017 = arg_buffer[1];
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

void* kont1075010860 = prim_car(lst);
void* lst10861 = prim_cdr(lst);
void* x1065210862 = apply_prim__u60(lst10861);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1075010860);
arg_buffer[2] = x1065210862;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1075010860))[0]);
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
void* _11018 = arg_buffer[1];
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

void* kont1075210863 = prim_car(lst);
void* lst10864 = prim_cdr(lst);
void* x1065310865 = apply_prim__u60_u61(lst10864);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1075210863);
arg_buffer[2] = x1065310865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1075210863))[0]);
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
void* _11019 = arg_buffer[1];
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

void* kont1075410866 = prim_car(lst);
void* lst10867 = prim_cdr(lst);
void* x1065410868 = apply_prim__u62_u61(lst10867);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1075410866);
arg_buffer[2] = x1065410868;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1075410866))[0]);
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
void* _11020 = arg_buffer[1];
//reading env and args
void* kont10756 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1065510869 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10756);
arg_buffer[2] = x1065510869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10756))[0]);
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
void* _11021 = arg_buffer[1];
//reading env and args
void* kont10757 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1065610870 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10757);
arg_buffer[2] = x1065610870;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10757))[0]);
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
void* _11022 = arg_buffer[1];
//reading env and args
void* kont10758 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1065710871 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10758);
arg_buffer[2] = x1065710871;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10758))[0]);
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
void* _11023 = arg_buffer[1];
//reading env and args
void* kont10759 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1065810872 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10759);
arg_buffer[2] = x1065810872;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10759))[0]);
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
void* _11024 = arg_buffer[1];
//reading env and args
void* kont10760 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1065910873 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10760);
arg_buffer[2] = x1065910873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10760))[0]);
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
void* _11025 = arg_buffer[1];
//reading env and args
void* kont10761 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1066010874 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10761);
arg_buffer[2] = x1066010874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10761))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam11026_fptr() // lam11026 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11027 = arg_buffer[1];
//reading env and args
void* a1066310878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1066110875 = (decode_clo(env11027))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env11027))[2];
//not do dummy comment
void* kont10762 = (decode_clo(env11027))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10762;
arg_buffer[3] = a1066110875;
arg_buffer[4] = a1066310878;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11026 = encode_clo(alloc_clo(lam11026_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11030 = arg_buffer[1];
//reading env and args
void* kont10762 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar11710 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11710, "0", 10);
void* a1066110875 = encode_mpz(mpzvar11710);
mpz_t* mpzvar11711 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11711, "2", 10);
void* a1066210876 = encode_mpz(mpzvar11711);

//creating new closure instance
void** clo11713 = alloc_clo(lam11026_fptr, 3);

//setting env list
clo11713[1] = kont10762;
clo11713[2] = equal_u63;
clo11713[3] = a1066110875;
void* f1076310877 = encode_clo(clo11713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1076310877;
arg_buffer[3] = x;
arg_buffer[4] = a1066210876;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam11031_fptr() // lam11031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11032 = arg_buffer[1];
//reading env and args
void* a1066610882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10764 = (decode_clo(env11032))[3];
//not do dummy comment
void* a1066410879 = (decode_clo(env11032))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env11032))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10764;
arg_buffer[3] = a1066410879;
arg_buffer[4] = a1066610882;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11031 = encode_clo(alloc_clo(lam11031_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11035 = arg_buffer[1];
//reading env and args
void* kont10764 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar11714 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11714, "1", 10);
void* a1066410879 = encode_mpz(mpzvar11714);
mpz_t* mpzvar11715 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11715, "2", 10);
void* a1066510880 = encode_mpz(mpzvar11715);

//creating new closure instance
void** clo11717 = alloc_clo(lam11031_fptr, 3);

//setting env list
clo11717[1] = equal_u63;
clo11717[2] = a1066410879;
clo11717[3] = kont10764;
void* f1076510881 = encode_clo(clo11717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1076510881;
arg_buffer[3] = x;
arg_buffer[4] = a1066510880;
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
void* _11036 = arg_buffer[1];
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

void* kont1076610883 = prim_car(x);
void* x10884 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1076610883);
arg_buffer[2] = x10884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1076610883))[0]);
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
void* _11037 = arg_buffer[1];
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

void* kont1076810885 = prim_car(lst);
void* lst10886 = prim_cdr(lst);
void* x1066710887 = apply_prim_and(lst10886);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1076810885);
arg_buffer[2] = x1066710887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1076810885))[0]);
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
void* _11038 = arg_buffer[1];
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

void* kont1077010888 = prim_car(lst);
void* lst10889 = prim_cdr(lst);
void* x1066810890 = apply_prim_or(lst10889);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1077010888);
arg_buffer[2] = x1066810890;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1077010888))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam11041_fptr() // lam11041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11042 = arg_buffer[1];
//reading env and args
void* a1067410900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10772 = (decode_clo(env11042))[3];
//not do dummy comment
void* x = (decode_clo(env11042))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env11042))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont10772;
arg_buffer[3] = x;
arg_buffer[4] = a1067410900;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11041 = encode_clo(alloc_clo(lam11041_fptr, 0));

void* lam11043_fptr() // lam11043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11044 = arg_buffer[1];
//reading env and args
void* a1067210897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11044))[5];
//not do dummy comment
void* lst = (decode_clo(env11044))[4];
//not do dummy comment
void* kont10772 = (decode_clo(env11044))[3];
//not do dummy comment
void* x = (decode_clo(env11044))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env11044))[1];

//if-clause
bool if_guard11718 = is_true(a1067210897);
if(if_guard11718)
{
void* x1067310898 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10772);
arg_buffer[2] = x1067310898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10772))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11720 = alloc_clo(lam11041_fptr, 3);

//setting env list
clo11720[1] = member_u63;
clo11720[2] = x;
clo11720[3] = kont10772;
void* f1077310899 = encode_clo(clo11720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1077310899;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11043 = encode_clo(alloc_clo(lam11043_fptr, 0));

void* lam11045_fptr() // lam11045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11046 = arg_buffer[1];
//reading env and args
void* a1067110895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11046))[6];
//not do dummy comment
void* lst = (decode_clo(env11046))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env11046))[4];
//not do dummy comment
void* kont10772 = (decode_clo(env11046))[3];
//not do dummy comment
void* x = (decode_clo(env11046))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env11046))[1];

//creating new closure instance
void** clo11722 = alloc_clo(lam11043_fptr, 5);

//setting env list
clo11722[1] = member_u63;
clo11722[2] = x;
clo11722[3] = kont10772;
clo11722[4] = lst;
clo11722[5] = cdr;
void* f1077410896 = encode_clo(clo11722);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1077410896;
arg_buffer[3] = a1067110895;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11045 = encode_clo(alloc_clo(lam11045_fptr, 0));

void* lam11047_fptr() // lam11047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11048 = arg_buffer[1];
//reading env and args
void* a1066910892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11048))[7];
//not do dummy comment
void* lst = (decode_clo(env11048))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env11048))[5];
//not do dummy comment
void* kont10772 = (decode_clo(env11048))[4];
//not do dummy comment
void* x = (decode_clo(env11048))[3];
//not do dummy comment
void* car = (decode_clo(env11048))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env11048))[1];

//if-clause
bool if_guard11723 = is_true(a1066910892);
if(if_guard11723)
{
void* x1067010893 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10772);
arg_buffer[2] = x1067010893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10772))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11725 = alloc_clo(lam11045_fptr, 6);

//setting env list
clo11725[1] = member_u63;
clo11725[2] = x;
clo11725[3] = kont10772;
clo11725[4] = equal_u63;
clo11725[5] = lst;
clo11725[6] = cdr;
void* f1077510894 = encode_clo(clo11725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1077510894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11047 = encode_clo(alloc_clo(lam11047_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11049 = arg_buffer[1];
//reading env and args
void* kont10772 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11727 = alloc_clo(lam11047_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo11727[1] = member_u63;
clo11727[2] = car;
clo11727[3] = x;
clo11727[4] = kont10772;
clo11727[5] = equal_u63;
clo11727[6] = lst;
clo11727[7] = cdr;
void* f1077610891 = encode_clo(clo11727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1077610891;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam11050_fptr() // lam11050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11051 = arg_buffer[1];
//reading env and args
void* a1067810908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env11051))[4];
//not do dummy comment
void* a1067710906 = (decode_clo(env11051))[3];
//not do dummy comment
void* kont10777 = (decode_clo(env11051))[2];
//not do dummy comment
void* foldl = (decode_clo(env11051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont10777;
arg_buffer[3] = fun;
arg_buffer[4] = a1067710906;
arg_buffer[5] = a1067810908;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11050 = encode_clo(alloc_clo(lam11050_fptr, 0));

void* lam11052_fptr() // lam11052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11053 = arg_buffer[1];
//reading env and args
void* a1067710906 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11053))[5];
//not do dummy comment
void* lst = (decode_clo(env11053))[4];
//not do dummy comment
void* fun = (decode_clo(env11053))[3];
//not do dummy comment
void* kont10777 = (decode_clo(env11053))[2];
//not do dummy comment
void* foldl = (decode_clo(env11053))[1];

//creating new closure instance
void** clo11729 = alloc_clo(lam11050_fptr, 4);

//setting env list
clo11729[1] = foldl;
clo11729[2] = kont10777;
clo11729[3] = a1067710906;
clo11729[4] = fun;
void* f1077810907 = encode_clo(clo11729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1077810907;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11052 = encode_clo(alloc_clo(lam11052_fptr, 0));

void* lam11054_fptr() // lam11054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11055 = arg_buffer[1];
//reading env and args
void* a1067610904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11055))[6];
//not do dummy comment
void* lst = (decode_clo(env11055))[5];
//not do dummy comment
void* fun = (decode_clo(env11055))[4];
//not do dummy comment
void* acc = (decode_clo(env11055))[3];
//not do dummy comment
void* kont10777 = (decode_clo(env11055))[2];
//not do dummy comment
void* foldl = (decode_clo(env11055))[1];

//creating new closure instance
void** clo11731 = alloc_clo(lam11052_fptr, 5);

//setting env list
clo11731[1] = foldl;
clo11731[2] = kont10777;
clo11731[3] = fun;
clo11731[4] = lst;
clo11731[5] = cdr;
void* f1077910905 = encode_clo(clo11731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1077910905;
arg_buffer[3] = a1067610904;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11054 = encode_clo(alloc_clo(lam11054_fptr, 0));

void* lam11056_fptr() // lam11056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11057 = arg_buffer[1];
//reading env and args
void* a1067510902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11057))[7];
//not do dummy comment
void* lst = (decode_clo(env11057))[6];
//not do dummy comment
void* fun = (decode_clo(env11057))[5];
//not do dummy comment
void* acc = (decode_clo(env11057))[4];
//not do dummy comment
void* car = (decode_clo(env11057))[3];
//not do dummy comment
void* kont10777 = (decode_clo(env11057))[2];
//not do dummy comment
void* foldl = (decode_clo(env11057))[1];

//if-clause
bool if_guard11732 = is_true(a1067510902);
if(if_guard11732)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10777);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10777))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11734 = alloc_clo(lam11054_fptr, 6);

//setting env list
clo11734[1] = foldl;
clo11734[2] = kont10777;
clo11734[3] = acc;
clo11734[4] = fun;
clo11734[5] = lst;
clo11734[6] = cdr;
void* f1078010903 = encode_clo(clo11734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1078010903;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11056 = encode_clo(alloc_clo(lam11056_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11058 = arg_buffer[1];
//reading env and args
void* kont10777 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo11736 = alloc_clo(lam11056_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo11736[1] = foldl;
clo11736[2] = kont10777;
clo11736[3] = car;
clo11736[4] = acc;
clo11736[5] = fun;
clo11736[6] = lst;
clo11736[7] = cdr;
void* f1078110901 = encode_clo(clo11736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1078110901;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam11059_fptr() // lam11059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11060 = arg_buffer[1];
//reading env and args
void* a1068210916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10782 = (decode_clo(env11060))[3];
//not do dummy comment
void* a1068010912 = (decode_clo(env11060))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11060))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10782;
arg_buffer[3] = a1068010912;
arg_buffer[4] = a1068210916;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11059 = encode_clo(alloc_clo(lam11059_fptr, 0));

void* lam11061_fptr() // lam11061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11062 = arg_buffer[1];
//reading env and args
void* a1068110914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10782 = (decode_clo(env11062))[5];
//not do dummy comment
void* a1068010912 = (decode_clo(env11062))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11062))[3];
//not do dummy comment
void* lst2 = (decode_clo(env11062))[2];
//not do dummy comment
void* cons = (decode_clo(env11062))[1];

//creating new closure instance
void** clo11738 = alloc_clo(lam11059_fptr, 3);

//setting env list
clo11738[1] = reverse_u45helper;
clo11738[2] = a1068010912;
clo11738[3] = kont10782;
void* f1078310915 = encode_clo(clo11738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1078310915;
arg_buffer[3] = a1068110914;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11061 = encode_clo(alloc_clo(lam11061_fptr, 0));

void* lam11063_fptr() // lam11063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11064 = arg_buffer[1];
//reading env and args
void* a1068010912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10782 = (decode_clo(env11064))[6];
//not do dummy comment
void* lst = (decode_clo(env11064))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11064))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11064))[3];
//not do dummy comment
void* car = (decode_clo(env11064))[2];
//not do dummy comment
void* cons = (decode_clo(env11064))[1];

//creating new closure instance
void** clo11740 = alloc_clo(lam11061_fptr, 5);

//setting env list
clo11740[1] = cons;
clo11740[2] = lst2;
clo11740[3] = reverse_u45helper;
clo11740[4] = a1068010912;
clo11740[5] = kont10782;
void* f1078410913 = encode_clo(clo11740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1078410913;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11063 = encode_clo(alloc_clo(lam11063_fptr, 0));

void* lam11065_fptr() // lam11065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11066 = arg_buffer[1];
//reading env and args
void* a1067910910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11066))[7];
//not do dummy comment
void* kont10782 = (decode_clo(env11066))[6];
//not do dummy comment
void* lst = (decode_clo(env11066))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11066))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11066))[3];
//not do dummy comment
void* car = (decode_clo(env11066))[2];
//not do dummy comment
void* cons = (decode_clo(env11066))[1];

//if-clause
bool if_guard11741 = is_true(a1067910910);
if(if_guard11741)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10782);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11743 = alloc_clo(lam11063_fptr, 6);

//setting env list
clo11743[1] = cons;
clo11743[2] = car;
clo11743[3] = lst2;
clo11743[4] = reverse_u45helper;
clo11743[5] = lst;
clo11743[6] = kont10782;
void* f1078510911 = encode_clo(clo11743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1078510911;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11065 = encode_clo(alloc_clo(lam11065_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11067 = arg_buffer[1];
//reading env and args
void* kont10782 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11745 = alloc_clo(lam11065_fptr, 7);

//setting env list
clo11745[1] = cons;
clo11745[2] = car;
clo11745[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo11745[4] = reverse_u45helper;
clo11745[5] = lst;
clo11745[6] = kont10782;
clo11745[7] = cdr;
void* f1078610909 = encode_clo(clo11745);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1078610909;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam11068_fptr() // lam11068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11069 = arg_buffer[1];
//reading env and args
void* a1068310918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11069))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11069))[2];
//not do dummy comment
void* kont10787 = (decode_clo(env11069))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10787;
arg_buffer[3] = lst;
arg_buffer[4] = a1068310918;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11068 = encode_clo(alloc_clo(lam11068_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11070 = arg_buffer[1];
//reading env and args
void* kont10787 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo11747 = alloc_clo(lam11068_fptr, 3);

//setting env list
clo11747[1] = kont10787;
clo11747[2] = reverse_u45helper;
clo11747[3] = lst;
void* f1078810917 = encode_clo(clo11747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1078810917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam11071_fptr() // lam11071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11072 = arg_buffer[1];
//reading env and args
void* x1068610923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10789 = (decode_clo(env11072))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10789);
arg_buffer[2] = x1068610923;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10789))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11071 = encode_clo(alloc_clo(lam11071_fptr, 0));

void* lam11073_fptr() // lam11073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11074 = arg_buffer[1];
//reading env and args
void* a1069110932 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1068710925 = (decode_clo(env11074))[4];
//not do dummy comment
void* a1068910928 = (decode_clo(env11074))[3];
//not do dummy comment
void* kont10789 = (decode_clo(env11074))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env11074))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10789;
arg_buffer[3] = a1068710925;
arg_buffer[4] = a1068910928;
arg_buffer[5] = a1069110932;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11073 = encode_clo(alloc_clo(lam11073_fptr, 0));

void* lam11075_fptr() // lam11075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11076 = arg_buffer[1];
//reading env and args
void* a1069010930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1068710925 = (decode_clo(env11076))[6];
//not do dummy comment
void* a1068910928 = (decode_clo(env11076))[5];
//not do dummy comment
void* kont10789 = (decode_clo(env11076))[4];
//not do dummy comment
void* cons = (decode_clo(env11076))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env11076))[2];
//not do dummy comment
void* lst2 = (decode_clo(env11076))[1];

//creating new closure instance
void** clo11749 = alloc_clo(lam11073_fptr, 4);

//setting env list
clo11749[1] = take_u45helper;
clo11749[2] = kont10789;
clo11749[3] = a1068910928;
clo11749[4] = a1068710925;
void* f1079110931 = encode_clo(clo11749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1079110931;
arg_buffer[3] = a1069010930;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11075 = encode_clo(alloc_clo(lam11075_fptr, 0));

void* lam11077_fptr() // lam11077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11078 = arg_buffer[1];
//reading env and args
void* a1068910928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1068710925 = (decode_clo(env11078))[7];
//not do dummy comment
void* lst = (decode_clo(env11078))[6];
//not do dummy comment
void* kont10789 = (decode_clo(env11078))[5];
//not do dummy comment
void* car = (decode_clo(env11078))[4];
//not do dummy comment
void* cons = (decode_clo(env11078))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env11078))[2];
//not do dummy comment
void* lst2 = (decode_clo(env11078))[1];

//creating new closure instance
void** clo11751 = alloc_clo(lam11075_fptr, 6);

//setting env list
clo11751[1] = lst2;
clo11751[2] = take_u45helper;
clo11751[3] = cons;
clo11751[4] = kont10789;
clo11751[5] = a1068910928;
clo11751[6] = a1068710925;
void* f1079210929 = encode_clo(clo11751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1079210929;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11077 = encode_clo(alloc_clo(lam11077_fptr, 0));

void* lam11080_fptr() // lam11080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11081 = arg_buffer[1];
//reading env and args
void* a1068710925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11081))[8];
//not do dummy comment
void* kont10789 = (decode_clo(env11081))[7];
//not do dummy comment
void* cons = (decode_clo(env11081))[6];
//not do dummy comment
void* _u45 = (decode_clo(env11081))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11081))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11081))[3];
//not do dummy comment
void* n = (decode_clo(env11081))[2];
//not do dummy comment
void* car = (decode_clo(env11081))[1];
mpz_t* mpzvar11752 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11752, "1", 10);
void* a1068810926 = encode_mpz(mpzvar11752);

//creating new closure instance
void** clo11754 = alloc_clo(lam11077_fptr, 7);

//setting env list
clo11754[1] = lst2;
clo11754[2] = take_u45helper;
clo11754[3] = cons;
clo11754[4] = car;
clo11754[5] = kont10789;
clo11754[6] = lst;
clo11754[7] = a1068710925;
void* f1079310927 = encode_clo(clo11754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1079310927;
arg_buffer[3] = n;
arg_buffer[4] = a1068810926;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11080 = encode_clo(alloc_clo(lam11080_fptr, 0));

void* lam11082_fptr() // lam11082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11083 = arg_buffer[1];
//reading env and args
void* a1068510921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11083))[10];
//not do dummy comment
void* lst = (decode_clo(env11083))[9];
//not do dummy comment
void* reverse = (decode_clo(env11083))[8];
//not do dummy comment
void* kont10789 = (decode_clo(env11083))[7];
//not do dummy comment
void* cons = (decode_clo(env11083))[6];
//not do dummy comment
void* _u45 = (decode_clo(env11083))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11083))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11083))[3];
//not do dummy comment
void* n = (decode_clo(env11083))[2];
//not do dummy comment
void* car = (decode_clo(env11083))[1];

//if-clause
bool if_guard11755 = is_true(a1068510921);
if(if_guard11755)
{

//creating new closure instance
void** clo11757 = alloc_clo(lam11071_fptr, 1);

//setting env list
clo11757[1] = kont10789;
void* f1079010922 = encode_clo(clo11757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1079010922;
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
void** clo11759 = alloc_clo(lam11080_fptr, 8);

//setting env list
clo11759[1] = car;
clo11759[2] = n;
clo11759[3] = lst2;
clo11759[4] = take_u45helper;
clo11759[5] = _u45;
clo11759[6] = cons;
clo11759[7] = kont10789;
clo11759[8] = lst;
void* f1079410924 = encode_clo(clo11759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1079410924;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11082 = encode_clo(alloc_clo(lam11082_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11085 = arg_buffer[1];
//reading env and args
void* kont10789 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar11760 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11760, "0", 10);
void* a1068410919 = encode_mpz(mpzvar11760);

//creating new closure instance
void** clo11762 = alloc_clo(lam11082_fptr, 10);

//setting env list
clo11762[1] = car;
clo11762[2] = n;
clo11762[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo11762[4] = take_u45helper;
clo11762[5] = _u45;
clo11762[6] = cons;
clo11762[7] = kont10789;
clo11762[8] = reverse;
clo11762[9] = lst;
clo11762[10] = cdr;
void* f1079510920 = encode_clo(clo11762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1079510920;
arg_buffer[3] = n;
arg_buffer[4] = a1068410919;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam11086_fptr() // lam11086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11087 = arg_buffer[1];
//reading env and args
void* a1069210934 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10796 = (decode_clo(env11087))[4];
//not do dummy comment
void* lst = (decode_clo(env11087))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env11087))[2];
//not do dummy comment
void* n = (decode_clo(env11087))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10796;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1069210934;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11086 = encode_clo(alloc_clo(lam11086_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11088 = arg_buffer[1];
//reading env and args
void* kont10796 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11764 = alloc_clo(lam11086_fptr, 4);

//setting env list
clo11764[1] = n;
clo11764[2] = take_u45helper;
clo11764[3] = lst;
clo11764[4] = kont10796;
void* f1079710933 = encode_clo(clo11764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1079710933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam11090_fptr() // lam11090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11091 = arg_buffer[1];
//reading env and args
void* a1069710942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10798 = (decode_clo(env11091))[3];
//not do dummy comment
void* _u43 = (decode_clo(env11091))[2];
//not do dummy comment
void* a1069510938 = (decode_clo(env11091))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont10798;
arg_buffer[3] = a1069510938;
arg_buffer[4] = a1069710942;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11090 = encode_clo(alloc_clo(lam11090_fptr, 0));

void* lam11092_fptr() // lam11092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11093 = arg_buffer[1];
//reading env and args
void* a1069610940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10798 = (decode_clo(env11093))[4];
//not do dummy comment
void* length = (decode_clo(env11093))[3];
//not do dummy comment
void* _u43 = (decode_clo(env11093))[2];
//not do dummy comment
void* a1069510938 = (decode_clo(env11093))[1];

//creating new closure instance
void** clo11766 = alloc_clo(lam11090_fptr, 3);

//setting env list
clo11766[1] = a1069510938;
clo11766[2] = _u43;
clo11766[3] = kont10798;
void* f1079910941 = encode_clo(clo11766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1079910941;
arg_buffer[3] = a1069610940;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11092 = encode_clo(alloc_clo(lam11092_fptr, 0));

void* lam11095_fptr() // lam11095 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11096 = arg_buffer[1];
//reading env and args
void* a1069310936 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11096))[5];
//not do dummy comment
void* kont10798 = (decode_clo(env11096))[4];
//not do dummy comment
void* lst = (decode_clo(env11096))[3];
//not do dummy comment
void* length = (decode_clo(env11096))[2];
//not do dummy comment
void* _u43 = (decode_clo(env11096))[1];

//if-clause
bool if_guard11767 = is_true(a1069310936);
if(if_guard11767)
{
mpz_t* mpzvar11768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11768, "0", 10);
void* x1069410937 = encode_mpz(mpzvar11768);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10798);
arg_buffer[2] = x1069410937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10798))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar11769 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11769, "1", 10);
void* a1069510938 = encode_mpz(mpzvar11769);

//creating new closure instance
void** clo11771 = alloc_clo(lam11092_fptr, 4);

//setting env list
clo11771[1] = a1069510938;
clo11771[2] = _u43;
clo11771[3] = length;
clo11771[4] = kont10798;
void* f1080010939 = encode_clo(clo11771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1080010939;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11095 = encode_clo(alloc_clo(lam11095_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11097 = arg_buffer[1];
//reading env and args
void* kont10798 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo11773 = alloc_clo(lam11095_fptr, 5);

//setting env list
clo11773[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo11773[2] = length;
clo11773[3] = lst;
clo11773[4] = kont10798;
clo11773[5] = cdr;
void* f1080110935 = encode_clo(clo11773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1080110935;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam11098_fptr() // lam11098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11099 = arg_buffer[1];
//reading env and args
void* x1069910946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10802 = (decode_clo(env11099))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10802);
arg_buffer[2] = x1069910946;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10802))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11098 = encode_clo(alloc_clo(lam11098_fptr, 0));

void* lam11100_fptr() // lam11100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11101 = arg_buffer[1];
//reading env and args
void* a1070310954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10802 = (decode_clo(env11101))[3];
//not do dummy comment
void* a1070110950 = (decode_clo(env11101))[2];
//not do dummy comment
void* cons = (decode_clo(env11101))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10802;
arg_buffer[3] = a1070110950;
arg_buffer[4] = a1070310954;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11100 = encode_clo(alloc_clo(lam11100_fptr, 0));

void* lam11102_fptr() // lam11102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11103 = arg_buffer[1];
//reading env and args
void* a1070210952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env11103))[5];
//not do dummy comment
void* kont10802 = (decode_clo(env11103))[4];
//not do dummy comment
void* cons = (decode_clo(env11103))[3];
//not do dummy comment
void* proc = (decode_clo(env11103))[2];
//not do dummy comment
void* a1070110950 = (decode_clo(env11103))[1];

//creating new closure instance
void** clo11775 = alloc_clo(lam11100_fptr, 3);

//setting env list
clo11775[1] = cons;
clo11775[2] = a1070110950;
clo11775[3] = kont10802;
void* f1080410953 = encode_clo(clo11775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1080410953;
arg_buffer[3] = proc;
arg_buffer[4] = a1070210952;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11102 = encode_clo(alloc_clo(lam11102_fptr, 0));

void* lam11104_fptr() // lam11104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11105 = arg_buffer[1];
//reading env and args
void* a1070110950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11105))[6];
//not do dummy comment
void* lst = (decode_clo(env11105))[5];
//not do dummy comment
void* map = (decode_clo(env11105))[4];
//not do dummy comment
void* kont10802 = (decode_clo(env11105))[3];
//not do dummy comment
void* proc = (decode_clo(env11105))[2];
//not do dummy comment
void* cons = (decode_clo(env11105))[1];

//creating new closure instance
void** clo11777 = alloc_clo(lam11102_fptr, 5);

//setting env list
clo11777[1] = a1070110950;
clo11777[2] = proc;
clo11777[3] = cons;
clo11777[4] = kont10802;
clo11777[5] = map;
void* f1080510951 = encode_clo(clo11777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1080510951;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11104 = encode_clo(alloc_clo(lam11104_fptr, 0));

void* lam11106_fptr() // lam11106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11107 = arg_buffer[1];
//reading env and args
void* a1070010948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11107))[6];
//not do dummy comment
void* lst = (decode_clo(env11107))[5];
//not do dummy comment
void* map = (decode_clo(env11107))[4];
//not do dummy comment
void* kont10802 = (decode_clo(env11107))[3];
//not do dummy comment
void* proc = (decode_clo(env11107))[2];
//not do dummy comment
void* cons = (decode_clo(env11107))[1];

//creating new closure instance
void** clo11779 = alloc_clo(lam11104_fptr, 6);

//setting env list
clo11779[1] = cons;
clo11779[2] = proc;
clo11779[3] = kont10802;
clo11779[4] = map;
clo11779[5] = lst;
clo11779[6] = cdr;
void* f1080610949 = encode_clo(clo11779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1080610949;
arg_buffer[3] = a1070010948;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11106 = encode_clo(alloc_clo(lam11106_fptr, 0));

void* lam11108_fptr() // lam11108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11109 = arg_buffer[1];
//reading env and args
void* a1069810944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11109))[8];
//not do dummy comment
void* map = (decode_clo(env11109))[7];
//not do dummy comment
void* kont10802 = (decode_clo(env11109))[6];
//not do dummy comment
void* proc = (decode_clo(env11109))[5];
//not do dummy comment
void* car = (decode_clo(env11109))[4];
//not do dummy comment
void* cons = (decode_clo(env11109))[3];
//not do dummy comment
void* list = (decode_clo(env11109))[2];
//not do dummy comment
void* cdr = (decode_clo(env11109))[1];

//if-clause
bool if_guard11780 = is_true(a1069810944);
if(if_guard11780)
{

//creating new closure instance
void** clo11782 = alloc_clo(lam11098_fptr, 1);

//setting env list
clo11782[1] = kont10802;
void* f1080310945 = encode_clo(clo11782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1080310945;
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
void** clo11784 = alloc_clo(lam11106_fptr, 6);

//setting env list
clo11784[1] = cons;
clo11784[2] = proc;
clo11784[3] = kont10802;
clo11784[4] = map;
clo11784[5] = lst;
clo11784[6] = cdr;
void* f1080710947 = encode_clo(clo11784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1080710947;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11108 = encode_clo(alloc_clo(lam11108_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11110 = arg_buffer[1];
//reading env and args
void* kont10802 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11786 = alloc_clo(lam11108_fptr, 8);

//setting env list
clo11786[1] = cdr;
clo11786[2] = list;
clo11786[3] = cons;
clo11786[4] = car;
clo11786[5] = proc;
clo11786[6] = kont10802;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo11786[7] = map;
clo11786[8] = lst;
void* f1080810943 = encode_clo(clo11786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1080810943;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam11111_fptr() // lam11111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11112 = arg_buffer[1];
//reading env and args
void* x1070510958 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10809 = (decode_clo(env11112))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10809);
arg_buffer[2] = x1070510958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10809))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11111 = encode_clo(alloc_clo(lam11111_fptr, 0));

void* lam11113_fptr() // lam11113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11114 = arg_buffer[1];
//reading env and args
void* a1071010968 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1070810964 = (decode_clo(env11114))[3];
//not do dummy comment
void* cons = (decode_clo(env11114))[2];
//not do dummy comment
void* kont10809 = (decode_clo(env11114))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10809;
arg_buffer[3] = a1070810964;
arg_buffer[4] = a1071010968;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11113 = encode_clo(alloc_clo(lam11113_fptr, 0));

void* lam11115_fptr() // lam11115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11116 = arg_buffer[1];
//reading env and args
void* a1070910966 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env11116))[5];
//not do dummy comment
void* a1070810964 = (decode_clo(env11116))[4];
//not do dummy comment
void* filter = (decode_clo(env11116))[3];
//not do dummy comment
void* cons = (decode_clo(env11116))[2];
//not do dummy comment
void* kont10809 = (decode_clo(env11116))[1];

//creating new closure instance
void** clo11788 = alloc_clo(lam11113_fptr, 3);

//setting env list
clo11788[1] = kont10809;
clo11788[2] = cons;
clo11788[3] = a1070810964;
void* f1081110967 = encode_clo(clo11788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1081110967;
arg_buffer[3] = op;
arg_buffer[4] = a1070910966;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11115 = encode_clo(alloc_clo(lam11115_fptr, 0));

void* lam11117_fptr() // lam11117 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11118 = arg_buffer[1];
//reading env and args
void* a1070810964 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11118))[6];
//not do dummy comment
void* lst = (decode_clo(env11118))[5];
//not do dummy comment
void* op = (decode_clo(env11118))[4];
//not do dummy comment
void* filter = (decode_clo(env11118))[3];
//not do dummy comment
void* cons = (decode_clo(env11118))[2];
//not do dummy comment
void* kont10809 = (decode_clo(env11118))[1];

//creating new closure instance
void** clo11790 = alloc_clo(lam11115_fptr, 5);

//setting env list
clo11790[1] = kont10809;
clo11790[2] = cons;
clo11790[3] = filter;
clo11790[4] = a1070810964;
clo11790[5] = op;
void* f1081210965 = encode_clo(clo11790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1081210965;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11117 = encode_clo(alloc_clo(lam11117_fptr, 0));

void* lam11119_fptr() // lam11119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11120 = arg_buffer[1];
//reading env and args
void* a1071110970 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env11120))[3];
//not do dummy comment
void* filter = (decode_clo(env11120))[2];
//not do dummy comment
void* kont10809 = (decode_clo(env11120))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont10809;
arg_buffer[3] = op;
arg_buffer[4] = a1071110970;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11119 = encode_clo(alloc_clo(lam11119_fptr, 0));

void* lam11121_fptr() // lam11121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11122 = arg_buffer[1];
//reading env and args
void* a1070710962 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11122))[7];
//not do dummy comment
void* lst = (decode_clo(env11122))[6];
//not do dummy comment
void* op = (decode_clo(env11122))[5];
//not do dummy comment
void* filter = (decode_clo(env11122))[4];
//not do dummy comment
void* car = (decode_clo(env11122))[3];
//not do dummy comment
void* cons = (decode_clo(env11122))[2];
//not do dummy comment
void* kont10809 = (decode_clo(env11122))[1];

//if-clause
bool if_guard11791 = is_true(a1070710962);
if(if_guard11791)
{

//creating new closure instance
void** clo11793 = alloc_clo(lam11117_fptr, 6);

//setting env list
clo11793[1] = kont10809;
clo11793[2] = cons;
clo11793[3] = filter;
clo11793[4] = op;
clo11793[5] = lst;
clo11793[6] = cdr;
void* f1081310963 = encode_clo(clo11793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1081310963;
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
void** clo11795 = alloc_clo(lam11119_fptr, 3);

//setting env list
clo11795[1] = kont10809;
clo11795[2] = filter;
clo11795[3] = op;
void* f1081410969 = encode_clo(clo11795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1081410969;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11121 = encode_clo(alloc_clo(lam11121_fptr, 0));

void* lam11123_fptr() // lam11123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11124 = arg_buffer[1];
//reading env and args
void* a1070610960 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11124))[7];
//not do dummy comment
void* lst = (decode_clo(env11124))[6];
//not do dummy comment
void* op = (decode_clo(env11124))[5];
//not do dummy comment
void* filter = (decode_clo(env11124))[4];
//not do dummy comment
void* car = (decode_clo(env11124))[3];
//not do dummy comment
void* cons = (decode_clo(env11124))[2];
//not do dummy comment
void* kont10809 = (decode_clo(env11124))[1];

//creating new closure instance
void** clo11797 = alloc_clo(lam11121_fptr, 7);

//setting env list
clo11797[1] = kont10809;
clo11797[2] = cons;
clo11797[3] = car;
clo11797[4] = filter;
clo11797[5] = op;
clo11797[6] = lst;
clo11797[7] = cdr;
void* f1081510961 = encode_clo(clo11797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1081510961;
arg_buffer[3] = a1070610960;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11123 = encode_clo(alloc_clo(lam11123_fptr, 0));

void* lam11125_fptr() // lam11125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11126 = arg_buffer[1];
//reading env and args
void* a1070410956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11126))[8];
//not do dummy comment
void* op = (decode_clo(env11126))[7];
//not do dummy comment
void* list = (decode_clo(env11126))[6];
//not do dummy comment
void* cdr = (decode_clo(env11126))[5];
//not do dummy comment
void* filter = (decode_clo(env11126))[4];
//not do dummy comment
void* car = (decode_clo(env11126))[3];
//not do dummy comment
void* cons = (decode_clo(env11126))[2];
//not do dummy comment
void* kont10809 = (decode_clo(env11126))[1];

//if-clause
bool if_guard11798 = is_true(a1070410956);
if(if_guard11798)
{

//creating new closure instance
void** clo11800 = alloc_clo(lam11111_fptr, 1);

//setting env list
clo11800[1] = kont10809;
void* f1081010957 = encode_clo(clo11800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1081010957;
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
void** clo11802 = alloc_clo(lam11123_fptr, 7);

//setting env list
clo11802[1] = kont10809;
clo11802[2] = cons;
clo11802[3] = car;
clo11802[4] = filter;
clo11802[5] = op;
clo11802[6] = lst;
clo11802[7] = cdr;
void* f1081610959 = encode_clo(clo11802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1081610959;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11125 = encode_clo(alloc_clo(lam11125_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11127 = arg_buffer[1];
//reading env and args
void* kont10809 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11804 = alloc_clo(lam11125_fptr, 8);

//setting env list
clo11804[1] = kont10809;
clo11804[2] = cons;
clo11804[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo11804[4] = filter;
clo11804[5] = cdr;
clo11804[6] = list;
clo11804[7] = op;
clo11804[8] = lst;
void* f1081710955 = encode_clo(clo11804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1081710955;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam11128_fptr() // lam11128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11129 = arg_buffer[1];
//reading env and args
void* a1071610978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10818 = (decode_clo(env11129))[3];
//not do dummy comment
void* a1071410975 = (decode_clo(env11129))[2];
//not do dummy comment
void* drop = (decode_clo(env11129))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont10818;
arg_buffer[3] = a1071410975;
arg_buffer[4] = a1071610978;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11128 = encode_clo(alloc_clo(lam11128_fptr, 0));

void* lam11131_fptr() // lam11131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11132 = arg_buffer[1];
//reading env and args
void* a1071410975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env11132))[4];
//not do dummy comment
void* kont10818 = (decode_clo(env11132))[3];
//not do dummy comment
void* n = (decode_clo(env11132))[2];
//not do dummy comment
void* _u45 = (decode_clo(env11132))[1];
mpz_t* mpzvar11805 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11805, "1", 10);
void* a1071510976 = encode_mpz(mpzvar11805);

//creating new closure instance
void** clo11807 = alloc_clo(lam11128_fptr, 3);

//setting env list
clo11807[1] = drop;
clo11807[2] = a1071410975;
clo11807[3] = kont10818;
void* f1081910977 = encode_clo(clo11807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1081910977;
arg_buffer[3] = n;
arg_buffer[4] = a1071510976;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11131 = encode_clo(alloc_clo(lam11131_fptr, 0));

void* lam11133_fptr() // lam11133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11134 = arg_buffer[1];
//reading env and args
void* a1071310973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11134))[6];
//not do dummy comment
void* kont10818 = (decode_clo(env11134))[5];
//not do dummy comment
void* n = (decode_clo(env11134))[4];
//not do dummy comment
void* _u45 = (decode_clo(env11134))[3];
//not do dummy comment
void* lst = (decode_clo(env11134))[2];
//not do dummy comment
void* drop = (decode_clo(env11134))[1];

//if-clause
bool if_guard11808 = is_true(a1071310973);
if(if_guard11808)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10818);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10818))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11810 = alloc_clo(lam11131_fptr, 4);

//setting env list
clo11810[1] = _u45;
clo11810[2] = n;
clo11810[3] = kont10818;
clo11810[4] = drop;
void* f1082010974 = encode_clo(clo11810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1082010974;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11133 = encode_clo(alloc_clo(lam11133_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11136 = arg_buffer[1];
//reading env and args
void* kont10818 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar11811 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11811, "0", 10);
void* a1071210971 = encode_mpz(mpzvar11811);

//creating new closure instance
void** clo11813 = alloc_clo(lam11133_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo11813[1] = drop;
clo11813[2] = lst;
clo11813[3] = _u45;
clo11813[4] = n;
clo11813[5] = kont10818;
clo11813[6] = cdr;
void* f1082110972 = encode_clo(clo11813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1082110972;
arg_buffer[3] = n;
arg_buffer[4] = a1071210971;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam11137_fptr() // lam11137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11138 = arg_buffer[1];
//reading env and args
void* a1072010986 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env11138))[3];
//not do dummy comment
void* a1071810982 = (decode_clo(env11138))[2];
//not do dummy comment
void* kont10822 = (decode_clo(env11138))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont10822;
arg_buffer[3] = a1071810982;
arg_buffer[4] = a1072010986;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11137 = encode_clo(alloc_clo(lam11137_fptr, 0));

void* lam11139_fptr() // lam11139 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11140 = arg_buffer[1];
//reading env and args
void* a1071910984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env11140))[5];
//not do dummy comment
void* proc = (decode_clo(env11140))[4];
//not do dummy comment
void* acc = (decode_clo(env11140))[3];
//not do dummy comment
void* a1071810982 = (decode_clo(env11140))[2];
//not do dummy comment
void* kont10822 = (decode_clo(env11140))[1];

//creating new closure instance
void** clo11815 = alloc_clo(lam11137_fptr, 3);

//setting env list
clo11815[1] = kont10822;
clo11815[2] = a1071810982;
clo11815[3] = proc;
void* f1082310985 = encode_clo(clo11815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1082310985;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1071910984;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11139 = encode_clo(alloc_clo(lam11139_fptr, 0));

void* lam11141_fptr() // lam11141 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11142 = arg_buffer[1];
//reading env and args
void* a1071810982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11142))[6];
//not do dummy comment
void* foldr = (decode_clo(env11142))[5];
//not do dummy comment
void* lst = (decode_clo(env11142))[4];
//not do dummy comment
void* proc = (decode_clo(env11142))[3];
//not do dummy comment
void* acc = (decode_clo(env11142))[2];
//not do dummy comment
void* kont10822 = (decode_clo(env11142))[1];

//creating new closure instance
void** clo11817 = alloc_clo(lam11139_fptr, 5);

//setting env list
clo11817[1] = kont10822;
clo11817[2] = a1071810982;
clo11817[3] = acc;
clo11817[4] = proc;
clo11817[5] = foldr;
void* f1082410983 = encode_clo(clo11817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1082410983;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11141 = encode_clo(alloc_clo(lam11141_fptr, 0));

void* lam11143_fptr() // lam11143 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11144 = arg_buffer[1];
//reading env and args
void* a1071710980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11144))[7];
//not do dummy comment
void* car = (decode_clo(env11144))[6];
//not do dummy comment
void* foldr = (decode_clo(env11144))[5];
//not do dummy comment
void* lst = (decode_clo(env11144))[4];
//not do dummy comment
void* proc = (decode_clo(env11144))[3];
//not do dummy comment
void* acc = (decode_clo(env11144))[2];
//not do dummy comment
void* kont10822 = (decode_clo(env11144))[1];

//if-clause
bool if_guard11818 = is_true(a1071710980);
if(if_guard11818)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10822);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10822))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11820 = alloc_clo(lam11141_fptr, 6);

//setting env list
clo11820[1] = kont10822;
clo11820[2] = acc;
clo11820[3] = proc;
clo11820[4] = lst;
clo11820[5] = foldr;
clo11820[6] = cdr;
void* f1082510981 = encode_clo(clo11820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1082510981;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11143 = encode_clo(alloc_clo(lam11143_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11145 = arg_buffer[1];
//reading env and args
void* kont10822 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo11822 = alloc_clo(lam11143_fptr, 7);

//setting env list
clo11822[1] = kont10822;
clo11822[2] = acc;
clo11822[3] = proc;
clo11822[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo11822[5] = foldr;
clo11822[6] = car;
clo11822[7] = cdr;
void* f1082610979 = encode_clo(clo11822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1082610979;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam11146_fptr() // lam11146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11147 = arg_buffer[1];
//reading env and args
void* a1072410994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10827 = (decode_clo(env11147))[3];
//not do dummy comment
void* a1072210990 = (decode_clo(env11147))[2];
//not do dummy comment
void* cons = (decode_clo(env11147))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10827;
arg_buffer[3] = a1072210990;
arg_buffer[4] = a1072410994;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11146 = encode_clo(alloc_clo(lam11146_fptr, 0));

void* lam11148_fptr() // lam11148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11149 = arg_buffer[1];
//reading env and args
void* a1072310992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10827 = (decode_clo(env11149))[5];
//not do dummy comment
void* a1072210990 = (decode_clo(env11149))[4];
//not do dummy comment
void* append = (decode_clo(env11149))[3];
//not do dummy comment
void* lst2 = (decode_clo(env11149))[2];
//not do dummy comment
void* cons = (decode_clo(env11149))[1];

//creating new closure instance
void** clo11824 = alloc_clo(lam11146_fptr, 3);

//setting env list
clo11824[1] = cons;
clo11824[2] = a1072210990;
clo11824[3] = kont10827;
void* f1082810993 = encode_clo(clo11824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1082810993;
arg_buffer[3] = a1072310992;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11148 = encode_clo(alloc_clo(lam11148_fptr, 0));

void* lam11150_fptr() // lam11150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11151 = arg_buffer[1];
//reading env and args
void* a1072210990 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env11151))[6];
//not do dummy comment
void* lst2 = (decode_clo(env11151))[5];
//not do dummy comment
void* lst1 = (decode_clo(env11151))[4];
//not do dummy comment
void* cons = (decode_clo(env11151))[3];
//not do dummy comment
void* kont10827 = (decode_clo(env11151))[2];
//not do dummy comment
void* cdr = (decode_clo(env11151))[1];

//creating new closure instance
void** clo11826 = alloc_clo(lam11148_fptr, 5);

//setting env list
clo11826[1] = cons;
clo11826[2] = lst2;
clo11826[3] = append;
clo11826[4] = a1072210990;
clo11826[5] = kont10827;
void* f1082910991 = encode_clo(clo11826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1082910991;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11150 = encode_clo(alloc_clo(lam11150_fptr, 0));

void* lam11152_fptr() // lam11152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11153 = arg_buffer[1];
//reading env and args
void* a1072110988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env11153))[7];
//not do dummy comment
void* lst2 = (decode_clo(env11153))[6];
//not do dummy comment
void* cons = (decode_clo(env11153))[5];
//not do dummy comment
void* kont10827 = (decode_clo(env11153))[4];
//not do dummy comment
void* cdr = (decode_clo(env11153))[3];
//not do dummy comment
void* lst1 = (decode_clo(env11153))[2];
//not do dummy comment
void* car = (decode_clo(env11153))[1];

//if-clause
bool if_guard11827 = is_true(a1072110988);
if(if_guard11827)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10827);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10827))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11829 = alloc_clo(lam11150_fptr, 6);

//setting env list
clo11829[1] = cdr;
clo11829[2] = kont10827;
clo11829[3] = cons;
clo11829[4] = lst1;
clo11829[5] = lst2;
clo11829[6] = append;
void* f1083010989 = encode_clo(clo11829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1083010989;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11152 = encode_clo(alloc_clo(lam11152_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11154 = arg_buffer[1];
//reading env and args
void* kont10827 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11831 = alloc_clo(lam11152_fptr, 7);

//setting env list
clo11831[1] = car;
clo11831[2] = lst1;
clo11831[3] = cdr;
clo11831[4] = kont10827;
clo11831[5] = cons;
clo11831[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo11831[7] = append;
void* f1083110987 = encode_clo(clo11831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1083110987;
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
void* _11155 = arg_buffer[1];
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

void* kont1083210995 = prim_car(lst);
void* lst10996 = prim_cdr(lst);
void* x1072510997 = apply_prim_hash(lst10996);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1083210995);
arg_buffer[2] = x1072510997;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1083210995))[0]);
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
void* _11156 = arg_buffer[1];
//reading env and args
void* kont10834 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1072610998 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10834);
arg_buffer[2] = x1072610998;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10834))[0]);
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
void* _11157 = arg_buffer[1];
//reading env and args
void* kont10835 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1072710999 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10835);
arg_buffer[2] = x1072710999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10835))[0]);
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
void* _11158 = arg_buffer[1];
//reading env and args
void* kont10836 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1072811000 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10836);
arg_buffer[2] = x1072811000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10836))[0]);
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
void* _11159 = arg_buffer[1];
//reading env and args
void* kont10837 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1072911001 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10837);
arg_buffer[2] = x1072911001;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10837))[0]);
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
void* _11166 = arg_buffer[1];
//reading env and args
void* kont10838 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar11832 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11832, "10", 10);
void* a1073011002 = encode_mpz(mpzvar11832);
mpz_t* mpzvar11833 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11833, "2", 10);
void* a1073111003 = encode_mpz(mpzvar11833);
mpz_t* mpzvar11834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11834, "3", 10);
void* a1073211004 = encode_mpz(mpzvar11834);
mpz_t* mpzvar11835 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11835, "4", 10);
void* a1073311005 = encode_mpz(mpzvar11835);
mpz_t* mpzvar11836 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11836, "5", 10);
void* a1073411006 = encode_mpz(mpzvar11836);
mpz_t* mpzvar11837 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11837, "6", 10);
void* a1073511007 = encode_mpz(mpzvar11837);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont10838;
arg_buffer[3] = a1073011002;
arg_buffer[4] = a1073111003;
arg_buffer[5] = a1073211004;
arg_buffer[6] = a1073311005;
arg_buffer[7] = a1073411006;
arg_buffer[8] = a1073511007;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam11167_fptr() // lam11167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11168 = arg_buffer[1];
//reading env and args
void* x1073611009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10839 = (decode_clo(env11168))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10839);
arg_buffer[2] = x1073611009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10839))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11167 = encode_clo(alloc_clo(lam11167_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11169 = arg_buffer[1];
//reading env and args
void* kont10839 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo11839 = alloc_clo(lam11167_fptr, 1);

//setting env list
clo11839[1] = kont10839;
void* f1084011008 = encode_clo(clo11839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1084011008;
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

