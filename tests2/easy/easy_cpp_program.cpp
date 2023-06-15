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
void* _10957 = arg_buffer[1];
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

void* kont1069310794 = prim_car(lst);
void* lst10795 = prim_cdr(lst);
void* x1060410796 = apply_prim__u43(lst10795);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1069310794);
arg_buffer[2] = x1060410796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1069310794))[0]);
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
void* _10958 = arg_buffer[1];
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

void* kont1069510797 = prim_car(lst);
void* lst10798 = prim_cdr(lst);
void* x1060510799 = apply_prim__u45(lst10798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1069510797);
arg_buffer[2] = x1060510799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1069510797))[0]);
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
void* _10959 = arg_buffer[1];
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

void* kont1069710800 = prim_car(lst);
void* lst10801 = prim_cdr(lst);
void* x1060610802 = apply_prim__u42(lst10801);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1069710800);
arg_buffer[2] = x1060610802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1069710800))[0]);
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
void* _10960 = arg_buffer[1];
//reading env and args
void* kont10699 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1060710803 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10699);
arg_buffer[2] = x1060710803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10699))[0]);
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
void* _10961 = arg_buffer[1];
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

void* kont1070010804 = prim_car(lst);
void* lst10805 = prim_cdr(lst);
void* x1060810806 = apply_prim__u47(lst10805);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1070010804);
arg_buffer[2] = x1060810806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1070010804))[0]);
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
void* _10962 = arg_buffer[1];
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

void* kont1070210807 = prim_car(lst);
void* lst10808 = prim_cdr(lst);
void* x1060910809 = apply_prim__u61(lst10808);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1070210807);
arg_buffer[2] = x1060910809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1070210807))[0]);
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
void* _10963 = arg_buffer[1];
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

void* kont1070410810 = prim_car(lst);
void* lst10811 = prim_cdr(lst);
void* x1061010812 = apply_prim__u62(lst10811);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1070410810);
arg_buffer[2] = x1061010812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1070410810))[0]);
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
void* _10964 = arg_buffer[1];
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

void* kont1070610813 = prim_car(lst);
void* lst10814 = prim_cdr(lst);
void* x1061110815 = apply_prim__u60(lst10814);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1070610813);
arg_buffer[2] = x1061110815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1070610813))[0]);
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
void* _10965 = arg_buffer[1];
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

void* kont1070810816 = prim_car(lst);
void* lst10817 = prim_cdr(lst);
void* x1061210818 = apply_prim__u60_u61(lst10817);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1070810816);
arg_buffer[2] = x1061210818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1070810816))[0]);
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
void* _10966 = arg_buffer[1];
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

void* kont1071010819 = prim_car(lst);
void* lst10820 = prim_cdr(lst);
void* x1061310821 = apply_prim__u62_u61(lst10820);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1071010819);
arg_buffer[2] = x1061310821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1071010819))[0]);
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
void* _10967 = arg_buffer[1];
//reading env and args
void* kont10712 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1061410822 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10712);
arg_buffer[2] = x1061410822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10712))[0]);
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
void* _10968 = arg_buffer[1];
//reading env and args
void* kont10713 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1061510823 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10713);
arg_buffer[2] = x1061510823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10713))[0]);
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
void* _10969 = arg_buffer[1];
//reading env and args
void* kont10714 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1061610824 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10714);
arg_buffer[2] = x1061610824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10714))[0]);
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
void* _10970 = arg_buffer[1];
//reading env and args
void* kont10715 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1061710825 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10715);
arg_buffer[2] = x1061710825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10715))[0]);
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
void* _10971 = arg_buffer[1];
//reading env and args
void* kont10716 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1061810826 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10716);
arg_buffer[2] = x1061810826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10716))[0]);
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
void* _10972 = arg_buffer[1];
//reading env and args
void* kont10717 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1061910827 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10717);
arg_buffer[2] = x1061910827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10717))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam10973_fptr() // lam10973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10974 = arg_buffer[1];
//reading env and args
void* a1062210831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1062010828 = (decode_clo(env10974))[3];
//not do dummy comment
void* kont10718 = (decode_clo(env10974))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env10974))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10718;
arg_buffer[3] = a1062010828;
arg_buffer[4] = a1062210831;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10973 = encode_clo(alloc_clo(lam10973_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10977 = arg_buffer[1];
//reading env and args
void* kont10718 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar12195 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12195, "0", 10);
void* a1062010828 = encode_mpz(mpzvar12195);
mpz_t* mpzvar12196 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12196, "2", 10);
void* a1062110829 = encode_mpz(mpzvar12196);

//creating new closure instance
void** clo12198 = alloc_clo(lam10973_fptr, 3);

//setting env list
clo12198[1] = equal_u63;
clo12198[2] = kont10718;
clo12198[3] = a1062010828;
void* f1071910830 = encode_clo(clo12198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1071910830;
arg_buffer[3] = x;
arg_buffer[4] = a1062110829;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam10978_fptr() // lam10978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10979 = arg_buffer[1];
//reading env and args
void* a1062510835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env10979))[3];
//not do dummy comment
void* a1062310832 = (decode_clo(env10979))[2];
//not do dummy comment
void* kont10720 = (decode_clo(env10979))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10720;
arg_buffer[3] = a1062310832;
arg_buffer[4] = a1062510835;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10978 = encode_clo(alloc_clo(lam10978_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10982 = arg_buffer[1];
//reading env and args
void* kont10720 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar12199 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12199, "1", 10);
void* a1062310832 = encode_mpz(mpzvar12199);
mpz_t* mpzvar12200 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12200, "2", 10);
void* a1062410833 = encode_mpz(mpzvar12200);

//creating new closure instance
void** clo12202 = alloc_clo(lam10978_fptr, 3);

//setting env list
clo12202[1] = kont10720;
clo12202[2] = a1062310832;
clo12202[3] = equal_u63;
void* f1072110834 = encode_clo(clo12202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1072110834;
arg_buffer[3] = x;
arg_buffer[4] = a1062410833;
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
void* _10983 = arg_buffer[1];
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

void* kont1072210836 = prim_car(x);
void* x10837 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1072210836);
arg_buffer[2] = x10837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1072210836))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam10986_fptr() // lam10986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10987 = arg_buffer[1];
//reading env and args
void* a1063110847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10724 = (decode_clo(env10987))[3];
//not do dummy comment
void* x = (decode_clo(env10987))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10987))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont10724;
arg_buffer[3] = x;
arg_buffer[4] = a1063110847;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10986 = encode_clo(alloc_clo(lam10986_fptr, 0));

void* lam10988_fptr() // lam10988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10989 = arg_buffer[1];
//reading env and args
void* a1062910844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10989))[5];
//not do dummy comment
void* lst = (decode_clo(env10989))[4];
//not do dummy comment
void* kont10724 = (decode_clo(env10989))[3];
//not do dummy comment
void* x = (decode_clo(env10989))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10989))[1];

//if-clause
bool if_guard12203 = is_true(a1062910844);
if(if_guard12203)
{
void* x1063010845 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10724);
arg_buffer[2] = x1063010845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10724))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12205 = alloc_clo(lam10986_fptr, 3);

//setting env list
clo12205[1] = member_u63;
clo12205[2] = x;
clo12205[3] = kont10724;
void* f1072510846 = encode_clo(clo12205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1072510846;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10988 = encode_clo(alloc_clo(lam10988_fptr, 0));

void* lam10990_fptr() // lam10990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10991 = arg_buffer[1];
//reading env and args
void* a1062810842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10991))[6];
//not do dummy comment
void* lst = (decode_clo(env10991))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env10991))[4];
//not do dummy comment
void* kont10724 = (decode_clo(env10991))[3];
//not do dummy comment
void* x = (decode_clo(env10991))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10991))[1];

//creating new closure instance
void** clo12207 = alloc_clo(lam10988_fptr, 5);

//setting env list
clo12207[1] = member_u63;
clo12207[2] = x;
clo12207[3] = kont10724;
clo12207[4] = lst;
clo12207[5] = cdr;
void* f1072610843 = encode_clo(clo12207);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1072610843;
arg_buffer[3] = a1062810842;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10990 = encode_clo(alloc_clo(lam10990_fptr, 0));

void* lam10992_fptr() // lam10992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10993 = arg_buffer[1];
//reading env and args
void* a1062610839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10993))[7];
//not do dummy comment
void* lst = (decode_clo(env10993))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env10993))[5];
//not do dummy comment
void* kont10724 = (decode_clo(env10993))[4];
//not do dummy comment
void* x = (decode_clo(env10993))[3];
//not do dummy comment
void* car = (decode_clo(env10993))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10993))[1];

//if-clause
bool if_guard12208 = is_true(a1062610839);
if(if_guard12208)
{
void* x1062710840 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10724);
arg_buffer[2] = x1062710840;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10724))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12210 = alloc_clo(lam10990_fptr, 6);

//setting env list
clo12210[1] = member_u63;
clo12210[2] = x;
clo12210[3] = kont10724;
clo12210[4] = equal_u63;
clo12210[5] = lst;
clo12210[6] = cdr;
void* f1072710841 = encode_clo(clo12210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1072710841;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10992 = encode_clo(alloc_clo(lam10992_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10994 = arg_buffer[1];
//reading env and args
void* kont10724 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12212 = alloc_clo(lam10992_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo12212[1] = member_u63;
clo12212[2] = car;
clo12212[3] = x;
clo12212[4] = kont10724;
clo12212[5] = equal_u63;
clo12212[6] = lst;
clo12212[7] = cdr;
void* f1072810838 = encode_clo(clo12212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1072810838;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam10995_fptr() // lam10995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10996 = arg_buffer[1];
//reading env and args
void* a1063510855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env10996))[4];
//not do dummy comment
void* a1063410853 = (decode_clo(env10996))[3];
//not do dummy comment
void* foldl = (decode_clo(env10996))[2];
//not do dummy comment
void* kont10729 = (decode_clo(env10996))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont10729;
arg_buffer[3] = fun;
arg_buffer[4] = a1063410853;
arg_buffer[5] = a1063510855;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10995 = encode_clo(alloc_clo(lam10995_fptr, 0));

void* lam10997_fptr() // lam10997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10998 = arg_buffer[1];
//reading env and args
void* a1063410853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10998))[5];
//not do dummy comment
void* lst = (decode_clo(env10998))[4];
//not do dummy comment
void* fun = (decode_clo(env10998))[3];
//not do dummy comment
void* foldl = (decode_clo(env10998))[2];
//not do dummy comment
void* kont10729 = (decode_clo(env10998))[1];

//creating new closure instance
void** clo12214 = alloc_clo(lam10995_fptr, 4);

//setting env list
clo12214[1] = kont10729;
clo12214[2] = foldl;
clo12214[3] = a1063410853;
clo12214[4] = fun;
void* f1073010854 = encode_clo(clo12214);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1073010854;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10997 = encode_clo(alloc_clo(lam10997_fptr, 0));

void* lam10999_fptr() // lam10999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11000 = arg_buffer[1];
//reading env and args
void* a1063310851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11000))[6];
//not do dummy comment
void* lst = (decode_clo(env11000))[5];
//not do dummy comment
void* fun = (decode_clo(env11000))[4];
//not do dummy comment
void* acc = (decode_clo(env11000))[3];
//not do dummy comment
void* foldl = (decode_clo(env11000))[2];
//not do dummy comment
void* kont10729 = (decode_clo(env11000))[1];

//creating new closure instance
void** clo12216 = alloc_clo(lam10997_fptr, 5);

//setting env list
clo12216[1] = kont10729;
clo12216[2] = foldl;
clo12216[3] = fun;
clo12216[4] = lst;
clo12216[5] = cdr;
void* f1073110852 = encode_clo(clo12216);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1073110852;
arg_buffer[3] = a1063310851;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10999 = encode_clo(alloc_clo(lam10999_fptr, 0));

void* lam11001_fptr() // lam11001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11002 = arg_buffer[1];
//reading env and args
void* a1063210849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11002))[7];
//not do dummy comment
void* lst = (decode_clo(env11002))[6];
//not do dummy comment
void* fun = (decode_clo(env11002))[5];
//not do dummy comment
void* acc = (decode_clo(env11002))[4];
//not do dummy comment
void* car = (decode_clo(env11002))[3];
//not do dummy comment
void* foldl = (decode_clo(env11002))[2];
//not do dummy comment
void* kont10729 = (decode_clo(env11002))[1];

//if-clause
bool if_guard12217 = is_true(a1063210849);
if(if_guard12217)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10729);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10729))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12219 = alloc_clo(lam10999_fptr, 6);

//setting env list
clo12219[1] = kont10729;
clo12219[2] = foldl;
clo12219[3] = acc;
clo12219[4] = fun;
clo12219[5] = lst;
clo12219[6] = cdr;
void* f1073210850 = encode_clo(clo12219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1073210850;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11001 = encode_clo(alloc_clo(lam11001_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11003 = arg_buffer[1];
//reading env and args
void* kont10729 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo12221 = alloc_clo(lam11001_fptr, 7);

//setting env list
clo12221[1] = kont10729;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo12221[2] = foldl;
clo12221[3] = car;
clo12221[4] = acc;
clo12221[5] = fun;
clo12221[6] = lst;
clo12221[7] = cdr;
void* f1073310848 = encode_clo(clo12221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1073310848;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam11004_fptr() // lam11004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11005 = arg_buffer[1];
//reading env and args
void* a1063910863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1063710859 = (decode_clo(env11005))[3];
//not do dummy comment
void* kont10734 = (decode_clo(env11005))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11005))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10734;
arg_buffer[3] = a1063710859;
arg_buffer[4] = a1063910863;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11004 = encode_clo(alloc_clo(lam11004_fptr, 0));

void* lam11006_fptr() // lam11006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11007 = arg_buffer[1];
//reading env and args
void* a1063810861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1063710859 = (decode_clo(env11007))[5];
//not do dummy comment
void* kont10734 = (decode_clo(env11007))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11007))[3];
//not do dummy comment
void* lst2 = (decode_clo(env11007))[2];
//not do dummy comment
void* cons = (decode_clo(env11007))[1];

//creating new closure instance
void** clo12223 = alloc_clo(lam11004_fptr, 3);

//setting env list
clo12223[1] = reverse_u45helper;
clo12223[2] = kont10734;
clo12223[3] = a1063710859;
void* f1073510862 = encode_clo(clo12223);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1073510862;
arg_buffer[3] = a1063810861;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11006 = encode_clo(alloc_clo(lam11006_fptr, 0));

void* lam11008_fptr() // lam11008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11009 = arg_buffer[1];
//reading env and args
void* a1063710859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11009))[6];
//not do dummy comment
void* lst2 = (decode_clo(env11009))[5];
//not do dummy comment
void* car = (decode_clo(env11009))[4];
//not do dummy comment
void* cons = (decode_clo(env11009))[3];
//not do dummy comment
void* lst = (decode_clo(env11009))[2];
//not do dummy comment
void* kont10734 = (decode_clo(env11009))[1];

//creating new closure instance
void** clo12225 = alloc_clo(lam11006_fptr, 5);

//setting env list
clo12225[1] = cons;
clo12225[2] = lst2;
clo12225[3] = reverse_u45helper;
clo12225[4] = kont10734;
clo12225[5] = a1063710859;
void* f1073610860 = encode_clo(clo12225);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1073610860;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11008 = encode_clo(alloc_clo(lam11008_fptr, 0));

void* lam11010_fptr() // lam11010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11011 = arg_buffer[1];
//reading env and args
void* a1063610857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11011))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11011))[6];
//not do dummy comment
void* lst2 = (decode_clo(env11011))[5];
//not do dummy comment
void* car = (decode_clo(env11011))[4];
//not do dummy comment
void* cons = (decode_clo(env11011))[3];
//not do dummy comment
void* lst = (decode_clo(env11011))[2];
//not do dummy comment
void* kont10734 = (decode_clo(env11011))[1];

//if-clause
bool if_guard12226 = is_true(a1063610857);
if(if_guard12226)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10734);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10734))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12228 = alloc_clo(lam11008_fptr, 6);

//setting env list
clo12228[1] = kont10734;
clo12228[2] = lst;
clo12228[3] = cons;
clo12228[4] = car;
clo12228[5] = lst2;
clo12228[6] = reverse_u45helper;
void* f1073710858 = encode_clo(clo12228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1073710858;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11010 = encode_clo(alloc_clo(lam11010_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11012 = arg_buffer[1];
//reading env and args
void* kont10734 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12230 = alloc_clo(lam11010_fptr, 7);

//setting env list
clo12230[1] = kont10734;
clo12230[2] = lst;
clo12230[3] = cons;
clo12230[4] = car;
clo12230[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo12230[6] = reverse_u45helper;
clo12230[7] = cdr;
void* f1073810856 = encode_clo(clo12230);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1073810856;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam11013_fptr() // lam11013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11014 = arg_buffer[1];
//reading env and args
void* a1064010865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11014))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11014))[2];
//not do dummy comment
void* kont10739 = (decode_clo(env11014))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10739;
arg_buffer[3] = lst;
arg_buffer[4] = a1064010865;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11013 = encode_clo(alloc_clo(lam11013_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11015 = arg_buffer[1];
//reading env and args
void* kont10739 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo12232 = alloc_clo(lam11013_fptr, 3);

//setting env list
clo12232[1] = kont10739;
clo12232[2] = reverse_u45helper;
clo12232[3] = lst;
void* f1074010864 = encode_clo(clo12232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1074010864;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam11016_fptr() // lam11016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11017 = arg_buffer[1];
//reading env and args
void* x1064310870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10741 = (decode_clo(env11017))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10741);
arg_buffer[2] = x1064310870;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10741))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11016 = encode_clo(alloc_clo(lam11016_fptr, 0));

void* lam11018_fptr() // lam11018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11019 = arg_buffer[1];
//reading env and args
void* a1064810879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1064610875 = (decode_clo(env11019))[4];
//not do dummy comment
void* kont10741 = (decode_clo(env11019))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env11019))[2];
//not do dummy comment
void* a1064410872 = (decode_clo(env11019))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10741;
arg_buffer[3] = a1064410872;
arg_buffer[4] = a1064610875;
arg_buffer[5] = a1064810879;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11018 = encode_clo(alloc_clo(lam11018_fptr, 0));

void* lam11020_fptr() // lam11020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11021 = arg_buffer[1];
//reading env and args
void* a1064710877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1064610875 = (decode_clo(env11021))[6];
//not do dummy comment
void* kont10741 = (decode_clo(env11021))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11021))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11021))[3];
//not do dummy comment
void* cons = (decode_clo(env11021))[2];
//not do dummy comment
void* a1064410872 = (decode_clo(env11021))[1];

//creating new closure instance
void** clo12234 = alloc_clo(lam11018_fptr, 4);

//setting env list
clo12234[1] = a1064410872;
clo12234[2] = take_u45helper;
clo12234[3] = kont10741;
clo12234[4] = a1064610875;
void* f1074310878 = encode_clo(clo12234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1074310878;
arg_buffer[3] = a1064710877;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11020 = encode_clo(alloc_clo(lam11020_fptr, 0));

void* lam11022_fptr() // lam11022 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11023 = arg_buffer[1];
//reading env and args
void* a1064610875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11023))[7];
//not do dummy comment
void* kont10741 = (decode_clo(env11023))[6];
//not do dummy comment
void* car = (decode_clo(env11023))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11023))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11023))[3];
//not do dummy comment
void* cons = (decode_clo(env11023))[2];
//not do dummy comment
void* a1064410872 = (decode_clo(env11023))[1];

//creating new closure instance
void** clo12236 = alloc_clo(lam11020_fptr, 6);

//setting env list
clo12236[1] = a1064410872;
clo12236[2] = cons;
clo12236[3] = lst2;
clo12236[4] = take_u45helper;
clo12236[5] = kont10741;
clo12236[6] = a1064610875;
void* f1074410876 = encode_clo(clo12236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1074410876;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11022 = encode_clo(alloc_clo(lam11022_fptr, 0));

void* lam11025_fptr() // lam11025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11026 = arg_buffer[1];
//reading env and args
void* a1064410872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11026))[8];
//not do dummy comment
void* kont10741 = (decode_clo(env11026))[7];
//not do dummy comment
void* cons = (decode_clo(env11026))[6];
//not do dummy comment
void* _u45 = (decode_clo(env11026))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11026))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11026))[3];
//not do dummy comment
void* n = (decode_clo(env11026))[2];
//not do dummy comment
void* car = (decode_clo(env11026))[1];
mpz_t* mpzvar12237 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12237, "1", 10);
void* a1064510873 = encode_mpz(mpzvar12237);

//creating new closure instance
void** clo12239 = alloc_clo(lam11022_fptr, 7);

//setting env list
clo12239[1] = a1064410872;
clo12239[2] = cons;
clo12239[3] = lst2;
clo12239[4] = take_u45helper;
clo12239[5] = car;
clo12239[6] = kont10741;
clo12239[7] = lst;
void* f1074510874 = encode_clo(clo12239);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1074510874;
arg_buffer[3] = n;
arg_buffer[4] = a1064510873;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11025 = encode_clo(alloc_clo(lam11025_fptr, 0));

void* lam11027_fptr() // lam11027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11028 = arg_buffer[1];
//reading env and args
void* a1064210868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11028))[10];
//not do dummy comment
void* lst = (decode_clo(env11028))[9];
//not do dummy comment
void* reverse = (decode_clo(env11028))[8];
//not do dummy comment
void* kont10741 = (decode_clo(env11028))[7];
//not do dummy comment
void* cons = (decode_clo(env11028))[6];
//not do dummy comment
void* _u45 = (decode_clo(env11028))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11028))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11028))[3];
//not do dummy comment
void* n = (decode_clo(env11028))[2];
//not do dummy comment
void* car = (decode_clo(env11028))[1];

//if-clause
bool if_guard12240 = is_true(a1064210868);
if(if_guard12240)
{

//creating new closure instance
void** clo12242 = alloc_clo(lam11016_fptr, 1);

//setting env list
clo12242[1] = kont10741;
void* f1074210869 = encode_clo(clo12242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1074210869;
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
void** clo12244 = alloc_clo(lam11025_fptr, 8);

//setting env list
clo12244[1] = car;
clo12244[2] = n;
clo12244[3] = lst2;
clo12244[4] = take_u45helper;
clo12244[5] = _u45;
clo12244[6] = cons;
clo12244[7] = kont10741;
clo12244[8] = lst;
void* f1074610871 = encode_clo(clo12244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1074610871;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11027 = encode_clo(alloc_clo(lam11027_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11030 = arg_buffer[1];
//reading env and args
void* kont10741 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar12245 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12245, "0", 10);
void* a1064110866 = encode_mpz(mpzvar12245);

//creating new closure instance
void** clo12247 = alloc_clo(lam11027_fptr, 10);

//setting env list
clo12247[1] = car;
clo12247[2] = n;
clo12247[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo12247[4] = take_u45helper;
clo12247[5] = _u45;
clo12247[6] = cons;
clo12247[7] = kont10741;
clo12247[8] = reverse;
clo12247[9] = lst;
clo12247[10] = cdr;
void* f1074710867 = encode_clo(clo12247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1074710867;
arg_buffer[3] = n;
arg_buffer[4] = a1064110866;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam11031_fptr() // lam11031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11032 = arg_buffer[1];
//reading env and args
void* a1064910881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10748 = (decode_clo(env11032))[4];
//not do dummy comment
void* lst = (decode_clo(env11032))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env11032))[2];
//not do dummy comment
void* n = (decode_clo(env11032))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10748;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1064910881;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11031 = encode_clo(alloc_clo(lam11031_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11033 = arg_buffer[1];
//reading env and args
void* kont10748 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12249 = alloc_clo(lam11031_fptr, 4);

//setting env list
clo12249[1] = n;
clo12249[2] = take_u45helper;
clo12249[3] = lst;
clo12249[4] = kont10748;
void* f1074910880 = encode_clo(clo12249);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1074910880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam11035_fptr() // lam11035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11036 = arg_buffer[1];
//reading env and args
void* a1065410889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10750 = (decode_clo(env11036))[3];
//not do dummy comment
void* _u43 = (decode_clo(env11036))[2];
//not do dummy comment
void* a1065210885 = (decode_clo(env11036))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont10750;
arg_buffer[3] = a1065210885;
arg_buffer[4] = a1065410889;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11035 = encode_clo(alloc_clo(lam11035_fptr, 0));

void* lam11037_fptr() // lam11037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11038 = arg_buffer[1];
//reading env and args
void* a1065310887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10750 = (decode_clo(env11038))[4];
//not do dummy comment
void* length = (decode_clo(env11038))[3];
//not do dummy comment
void* _u43 = (decode_clo(env11038))[2];
//not do dummy comment
void* a1065210885 = (decode_clo(env11038))[1];

//creating new closure instance
void** clo12251 = alloc_clo(lam11035_fptr, 3);

//setting env list
clo12251[1] = a1065210885;
clo12251[2] = _u43;
clo12251[3] = kont10750;
void* f1075110888 = encode_clo(clo12251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1075110888;
arg_buffer[3] = a1065310887;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11037 = encode_clo(alloc_clo(lam11037_fptr, 0));

void* lam11040_fptr() // lam11040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11041 = arg_buffer[1];
//reading env and args
void* a1065010883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11041))[5];
//not do dummy comment
void* length = (decode_clo(env11041))[4];
//not do dummy comment
void* _u43 = (decode_clo(env11041))[3];
//not do dummy comment
void* lst = (decode_clo(env11041))[2];
//not do dummy comment
void* kont10750 = (decode_clo(env11041))[1];

//if-clause
bool if_guard12252 = is_true(a1065010883);
if(if_guard12252)
{
mpz_t* mpzvar12253 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12253, "0", 10);
void* x1065110884 = encode_mpz(mpzvar12253);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10750);
arg_buffer[2] = x1065110884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10750))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar12254 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12254, "1", 10);
void* a1065210885 = encode_mpz(mpzvar12254);

//creating new closure instance
void** clo12256 = alloc_clo(lam11037_fptr, 4);

//setting env list
clo12256[1] = a1065210885;
clo12256[2] = _u43;
clo12256[3] = length;
clo12256[4] = kont10750;
void* f1075210886 = encode_clo(clo12256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1075210886;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11040 = encode_clo(alloc_clo(lam11040_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11042 = arg_buffer[1];
//reading env and args
void* kont10750 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo12258 = alloc_clo(lam11040_fptr, 5);

//setting env list
clo12258[1] = kont10750;
clo12258[2] = lst;
clo12258[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo12258[4] = length;
clo12258[5] = cdr;
void* f1075310882 = encode_clo(clo12258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1075310882;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam11043_fptr() // lam11043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11044 = arg_buffer[1];
//reading env and args
void* x1065610893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10754 = (decode_clo(env11044))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10754);
arg_buffer[2] = x1065610893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10754))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11043 = encode_clo(alloc_clo(lam11043_fptr, 0));

void* lam11045_fptr() // lam11045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11046 = arg_buffer[1];
//reading env and args
void* a1066010901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1065810897 = (decode_clo(env11046))[3];
//not do dummy comment
void* kont10754 = (decode_clo(env11046))[2];
//not do dummy comment
void* cons = (decode_clo(env11046))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10754;
arg_buffer[3] = a1065810897;
arg_buffer[4] = a1066010901;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a1065910899 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env11048))[5];
//not do dummy comment
void* a1065810897 = (decode_clo(env11048))[4];
//not do dummy comment
void* kont10754 = (decode_clo(env11048))[3];
//not do dummy comment
void* proc = (decode_clo(env11048))[2];
//not do dummy comment
void* cons = (decode_clo(env11048))[1];

//creating new closure instance
void** clo12260 = alloc_clo(lam11045_fptr, 3);

//setting env list
clo12260[1] = cons;
clo12260[2] = kont10754;
clo12260[3] = a1065810897;
void* f1075610900 = encode_clo(clo12260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1075610900;
arg_buffer[3] = proc;
arg_buffer[4] = a1065910899;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11047 = encode_clo(alloc_clo(lam11047_fptr, 0));

void* lam11049_fptr() // lam11049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11050 = arg_buffer[1];
//reading env and args
void* a1065810897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11050))[6];
//not do dummy comment
void* lst = (decode_clo(env11050))[5];
//not do dummy comment
void* map = (decode_clo(env11050))[4];
//not do dummy comment
void* kont10754 = (decode_clo(env11050))[3];
//not do dummy comment
void* proc = (decode_clo(env11050))[2];
//not do dummy comment
void* cons = (decode_clo(env11050))[1];

//creating new closure instance
void** clo12262 = alloc_clo(lam11047_fptr, 5);

//setting env list
clo12262[1] = cons;
clo12262[2] = proc;
clo12262[3] = kont10754;
clo12262[4] = a1065810897;
clo12262[5] = map;
void* f1075710898 = encode_clo(clo12262);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1075710898;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11049 = encode_clo(alloc_clo(lam11049_fptr, 0));

void* lam11051_fptr() // lam11051 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11052 = arg_buffer[1];
//reading env and args
void* a1065710895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11052))[6];
//not do dummy comment
void* lst = (decode_clo(env11052))[5];
//not do dummy comment
void* map = (decode_clo(env11052))[4];
//not do dummy comment
void* kont10754 = (decode_clo(env11052))[3];
//not do dummy comment
void* proc = (decode_clo(env11052))[2];
//not do dummy comment
void* cons = (decode_clo(env11052))[1];

//creating new closure instance
void** clo12264 = alloc_clo(lam11049_fptr, 6);

//setting env list
clo12264[1] = cons;
clo12264[2] = proc;
clo12264[3] = kont10754;
clo12264[4] = map;
clo12264[5] = lst;
clo12264[6] = cdr;
void* f1075810896 = encode_clo(clo12264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1075810896;
arg_buffer[3] = a1065710895;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11051 = encode_clo(alloc_clo(lam11051_fptr, 0));

void* lam11053_fptr() // lam11053 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11054 = arg_buffer[1];
//reading env and args
void* a1065510891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11054))[8];
//not do dummy comment
void* map = (decode_clo(env11054))[7];
//not do dummy comment
void* kont10754 = (decode_clo(env11054))[6];
//not do dummy comment
void* proc = (decode_clo(env11054))[5];
//not do dummy comment
void* car = (decode_clo(env11054))[4];
//not do dummy comment
void* cons = (decode_clo(env11054))[3];
//not do dummy comment
void* list = (decode_clo(env11054))[2];
//not do dummy comment
void* cdr = (decode_clo(env11054))[1];

//if-clause
bool if_guard12265 = is_true(a1065510891);
if(if_guard12265)
{

//creating new closure instance
void** clo12267 = alloc_clo(lam11043_fptr, 1);

//setting env list
clo12267[1] = kont10754;
void* f1075510892 = encode_clo(clo12267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1075510892;
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
void** clo12269 = alloc_clo(lam11051_fptr, 6);

//setting env list
clo12269[1] = cons;
clo12269[2] = proc;
clo12269[3] = kont10754;
clo12269[4] = map;
clo12269[5] = lst;
clo12269[6] = cdr;
void* f1075910894 = encode_clo(clo12269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1075910894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11053 = encode_clo(alloc_clo(lam11053_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11055 = arg_buffer[1];
//reading env and args
void* kont10754 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12271 = alloc_clo(lam11053_fptr, 8);

//setting env list
clo12271[1] = cdr;
clo12271[2] = list;
clo12271[3] = cons;
clo12271[4] = car;
clo12271[5] = proc;
clo12271[6] = kont10754;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo12271[7] = map;
clo12271[8] = lst;
void* f1076010890 = encode_clo(clo12271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1076010890;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam11056_fptr() // lam11056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11057 = arg_buffer[1];
//reading env and args
void* x1066210905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10761 = (decode_clo(env11057))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10761);
arg_buffer[2] = x1066210905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10761))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11056 = encode_clo(alloc_clo(lam11056_fptr, 0));

void* lam11058_fptr() // lam11058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11059 = arg_buffer[1];
//reading env and args
void* a1066710915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1066510911 = (decode_clo(env11059))[3];
//not do dummy comment
void* cons = (decode_clo(env11059))[2];
//not do dummy comment
void* kont10761 = (decode_clo(env11059))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10761;
arg_buffer[3] = a1066510911;
arg_buffer[4] = a1066710915;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11058 = encode_clo(alloc_clo(lam11058_fptr, 0));

void* lam11060_fptr() // lam11060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11061 = arg_buffer[1];
//reading env and args
void* a1066610913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1066510911 = (decode_clo(env11061))[5];
//not do dummy comment
void* op = (decode_clo(env11061))[4];
//not do dummy comment
void* filter = (decode_clo(env11061))[3];
//not do dummy comment
void* cons = (decode_clo(env11061))[2];
//not do dummy comment
void* kont10761 = (decode_clo(env11061))[1];

//creating new closure instance
void** clo12273 = alloc_clo(lam11058_fptr, 3);

//setting env list
clo12273[1] = kont10761;
clo12273[2] = cons;
clo12273[3] = a1066510911;
void* f1076310914 = encode_clo(clo12273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1076310914;
arg_buffer[3] = op;
arg_buffer[4] = a1066610913;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11060 = encode_clo(alloc_clo(lam11060_fptr, 0));

void* lam11062_fptr() // lam11062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11063 = arg_buffer[1];
//reading env and args
void* a1066510911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11063))[6];
//not do dummy comment
void* lst = (decode_clo(env11063))[5];
//not do dummy comment
void* op = (decode_clo(env11063))[4];
//not do dummy comment
void* filter = (decode_clo(env11063))[3];
//not do dummy comment
void* cons = (decode_clo(env11063))[2];
//not do dummy comment
void* kont10761 = (decode_clo(env11063))[1];

//creating new closure instance
void** clo12275 = alloc_clo(lam11060_fptr, 5);

//setting env list
clo12275[1] = kont10761;
clo12275[2] = cons;
clo12275[3] = filter;
clo12275[4] = op;
clo12275[5] = a1066510911;
void* f1076410912 = encode_clo(clo12275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1076410912;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11062 = encode_clo(alloc_clo(lam11062_fptr, 0));

void* lam11064_fptr() // lam11064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11065 = arg_buffer[1];
//reading env and args
void* a1066810917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env11065))[3];
//not do dummy comment
void* filter = (decode_clo(env11065))[2];
//not do dummy comment
void* kont10761 = (decode_clo(env11065))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont10761;
arg_buffer[3] = op;
arg_buffer[4] = a1066810917;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11064 = encode_clo(alloc_clo(lam11064_fptr, 0));

void* lam11066_fptr() // lam11066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11067 = arg_buffer[1];
//reading env and args
void* a1066410909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11067))[7];
//not do dummy comment
void* lst = (decode_clo(env11067))[6];
//not do dummy comment
void* op = (decode_clo(env11067))[5];
//not do dummy comment
void* cons = (decode_clo(env11067))[4];
//not do dummy comment
void* kont10761 = (decode_clo(env11067))[3];
//not do dummy comment
void* filter = (decode_clo(env11067))[2];
//not do dummy comment
void* car = (decode_clo(env11067))[1];

//if-clause
bool if_guard12276 = is_true(a1066410909);
if(if_guard12276)
{

//creating new closure instance
void** clo12278 = alloc_clo(lam11062_fptr, 6);

//setting env list
clo12278[1] = kont10761;
clo12278[2] = cons;
clo12278[3] = filter;
clo12278[4] = op;
clo12278[5] = lst;
clo12278[6] = cdr;
void* f1076510910 = encode_clo(clo12278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1076510910;
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
void** clo12280 = alloc_clo(lam11064_fptr, 3);

//setting env list
clo12280[1] = kont10761;
clo12280[2] = filter;
clo12280[3] = op;
void* f1076610916 = encode_clo(clo12280);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1076610916;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11066 = encode_clo(alloc_clo(lam11066_fptr, 0));

void* lam11068_fptr() // lam11068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11069 = arg_buffer[1];
//reading env and args
void* a1066310907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11069))[7];
//not do dummy comment
void* lst = (decode_clo(env11069))[6];
//not do dummy comment
void* op = (decode_clo(env11069))[5];
//not do dummy comment
void* cons = (decode_clo(env11069))[4];
//not do dummy comment
void* kont10761 = (decode_clo(env11069))[3];
//not do dummy comment
void* filter = (decode_clo(env11069))[2];
//not do dummy comment
void* car = (decode_clo(env11069))[1];

//creating new closure instance
void** clo12282 = alloc_clo(lam11066_fptr, 7);

//setting env list
clo12282[1] = car;
clo12282[2] = filter;
clo12282[3] = kont10761;
clo12282[4] = cons;
clo12282[5] = op;
clo12282[6] = lst;
clo12282[7] = cdr;
void* f1076710908 = encode_clo(clo12282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1076710908;
arg_buffer[3] = a1066310907;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11068 = encode_clo(alloc_clo(lam11068_fptr, 0));

void* lam11070_fptr() // lam11070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11071 = arg_buffer[1];
//reading env and args
void* a1066110903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11071))[8];
//not do dummy comment
void* op = (decode_clo(env11071))[7];
//not do dummy comment
void* cons = (decode_clo(env11071))[6];
//not do dummy comment
void* kont10761 = (decode_clo(env11071))[5];
//not do dummy comment
void* list = (decode_clo(env11071))[4];
//not do dummy comment
void* cdr = (decode_clo(env11071))[3];
//not do dummy comment
void* filter = (decode_clo(env11071))[2];
//not do dummy comment
void* car = (decode_clo(env11071))[1];

//if-clause
bool if_guard12283 = is_true(a1066110903);
if(if_guard12283)
{

//creating new closure instance
void** clo12285 = alloc_clo(lam11056_fptr, 1);

//setting env list
clo12285[1] = kont10761;
void* f1076210904 = encode_clo(clo12285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1076210904;
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
void** clo12287 = alloc_clo(lam11068_fptr, 7);

//setting env list
clo12287[1] = car;
clo12287[2] = filter;
clo12287[3] = kont10761;
clo12287[4] = cons;
clo12287[5] = op;
clo12287[6] = lst;
clo12287[7] = cdr;
void* f1076810906 = encode_clo(clo12287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1076810906;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11070 = encode_clo(alloc_clo(lam11070_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11072 = arg_buffer[1];
//reading env and args
void* kont10761 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12289 = alloc_clo(lam11070_fptr, 8);

//setting env list
clo12289[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo12289[2] = filter;
clo12289[3] = cdr;
clo12289[4] = list;
clo12289[5] = kont10761;
clo12289[6] = cons;
clo12289[7] = op;
clo12289[8] = lst;
void* f1076910902 = encode_clo(clo12289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1076910902;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam11073_fptr() // lam11073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11074 = arg_buffer[1];
//reading env and args
void* a1067310925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1067110922 = (decode_clo(env11074))[3];
//not do dummy comment
void* drop = (decode_clo(env11074))[2];
//not do dummy comment
void* kont10770 = (decode_clo(env11074))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont10770;
arg_buffer[3] = a1067110922;
arg_buffer[4] = a1067310925;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11073 = encode_clo(alloc_clo(lam11073_fptr, 0));

void* lam11076_fptr() // lam11076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11077 = arg_buffer[1];
//reading env and args
void* a1067110922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env11077))[4];
//not do dummy comment
void* kont10770 = (decode_clo(env11077))[3];
//not do dummy comment
void* n = (decode_clo(env11077))[2];
//not do dummy comment
void* _u45 = (decode_clo(env11077))[1];
mpz_t* mpzvar12290 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12290, "1", 10);
void* a1067210923 = encode_mpz(mpzvar12290);

//creating new closure instance
void** clo12292 = alloc_clo(lam11073_fptr, 3);

//setting env list
clo12292[1] = kont10770;
clo12292[2] = drop;
clo12292[3] = a1067110922;
void* f1077110924 = encode_clo(clo12292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1077110924;
arg_buffer[3] = n;
arg_buffer[4] = a1067210923;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11076 = encode_clo(alloc_clo(lam11076_fptr, 0));

void* lam11078_fptr() // lam11078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11079 = arg_buffer[1];
//reading env and args
void* a1067010920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11079))[6];
//not do dummy comment
void* kont10770 = (decode_clo(env11079))[5];
//not do dummy comment
void* n = (decode_clo(env11079))[4];
//not do dummy comment
void* _u45 = (decode_clo(env11079))[3];
//not do dummy comment
void* lst = (decode_clo(env11079))[2];
//not do dummy comment
void* drop = (decode_clo(env11079))[1];

//if-clause
bool if_guard12293 = is_true(a1067010920);
if(if_guard12293)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10770);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10770))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12295 = alloc_clo(lam11076_fptr, 4);

//setting env list
clo12295[1] = _u45;
clo12295[2] = n;
clo12295[3] = kont10770;
clo12295[4] = drop;
void* f1077210921 = encode_clo(clo12295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1077210921;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11078 = encode_clo(alloc_clo(lam11078_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11081 = arg_buffer[1];
//reading env and args
void* kont10770 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar12296 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12296, "0", 10);
void* a1066910918 = encode_mpz(mpzvar12296);

//creating new closure instance
void** clo12298 = alloc_clo(lam11078_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo12298[1] = drop;
clo12298[2] = lst;
clo12298[3] = _u45;
clo12298[4] = n;
clo12298[5] = kont10770;
clo12298[6] = cdr;
void* f1077310919 = encode_clo(clo12298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1077310919;
arg_buffer[3] = n;
arg_buffer[4] = a1066910918;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam11082_fptr() // lam11082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11083 = arg_buffer[1];
//reading env and args
void* a1067710933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1067510929 = (decode_clo(env11083))[3];
//not do dummy comment
void* proc = (decode_clo(env11083))[2];
//not do dummy comment
void* kont10774 = (decode_clo(env11083))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont10774;
arg_buffer[3] = a1067510929;
arg_buffer[4] = a1067710933;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11082 = encode_clo(alloc_clo(lam11082_fptr, 0));

void* lam11084_fptr() // lam11084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11085 = arg_buffer[1];
//reading env and args
void* a1067610931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env11085))[5];
//not do dummy comment
void* a1067510929 = (decode_clo(env11085))[4];
//not do dummy comment
void* kont10774 = (decode_clo(env11085))[3];
//not do dummy comment
void* proc = (decode_clo(env11085))[2];
//not do dummy comment
void* acc = (decode_clo(env11085))[1];

//creating new closure instance
void** clo12300 = alloc_clo(lam11082_fptr, 3);

//setting env list
clo12300[1] = kont10774;
clo12300[2] = proc;
clo12300[3] = a1067510929;
void* f1077510932 = encode_clo(clo12300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1077510932;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1067610931;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11084 = encode_clo(alloc_clo(lam11084_fptr, 0));

void* lam11086_fptr() // lam11086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11087 = arg_buffer[1];
//reading env and args
void* a1067510929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11087))[6];
//not do dummy comment
void* kont10774 = (decode_clo(env11087))[5];
//not do dummy comment
void* foldr = (decode_clo(env11087))[4];
//not do dummy comment
void* lst = (decode_clo(env11087))[3];
//not do dummy comment
void* proc = (decode_clo(env11087))[2];
//not do dummy comment
void* acc = (decode_clo(env11087))[1];

//creating new closure instance
void** clo12302 = alloc_clo(lam11084_fptr, 5);

//setting env list
clo12302[1] = acc;
clo12302[2] = proc;
clo12302[3] = kont10774;
clo12302[4] = a1067510929;
clo12302[5] = foldr;
void* f1077610930 = encode_clo(clo12302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1077610930;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11086 = encode_clo(alloc_clo(lam11086_fptr, 0));

void* lam11088_fptr() // lam11088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11089 = arg_buffer[1];
//reading env and args
void* a1067410927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11089))[7];
//not do dummy comment
void* kont10774 = (decode_clo(env11089))[6];
//not do dummy comment
void* car = (decode_clo(env11089))[5];
//not do dummy comment
void* foldr = (decode_clo(env11089))[4];
//not do dummy comment
void* lst = (decode_clo(env11089))[3];
//not do dummy comment
void* proc = (decode_clo(env11089))[2];
//not do dummy comment
void* acc = (decode_clo(env11089))[1];

//if-clause
bool if_guard12303 = is_true(a1067410927);
if(if_guard12303)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10774);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10774))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12305 = alloc_clo(lam11086_fptr, 6);

//setting env list
clo12305[1] = acc;
clo12305[2] = proc;
clo12305[3] = lst;
clo12305[4] = foldr;
clo12305[5] = kont10774;
clo12305[6] = cdr;
void* f1077710928 = encode_clo(clo12305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1077710928;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11088 = encode_clo(alloc_clo(lam11088_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11090 = arg_buffer[1];
//reading env and args
void* kont10774 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo12307 = alloc_clo(lam11088_fptr, 7);

//setting env list
clo12307[1] = acc;
clo12307[2] = proc;
clo12307[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo12307[4] = foldr;
clo12307[5] = car;
clo12307[6] = kont10774;
clo12307[7] = cdr;
void* f1077810926 = encode_clo(clo12307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1077810926;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam11091_fptr() // lam11091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11092 = arg_buffer[1];
//reading env and args
void* a1068110941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10779 = (decode_clo(env11092))[3];
//not do dummy comment
void* cons = (decode_clo(env11092))[2];
//not do dummy comment
void* a1067910937 = (decode_clo(env11092))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10779;
arg_buffer[3] = a1067910937;
arg_buffer[4] = a1068110941;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11091 = encode_clo(alloc_clo(lam11091_fptr, 0));

void* lam11093_fptr() // lam11093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11094 = arg_buffer[1];
//reading env and args
void* a1068010939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10779 = (decode_clo(env11094))[5];
//not do dummy comment
void* append = (decode_clo(env11094))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11094))[3];
//not do dummy comment
void* cons = (decode_clo(env11094))[2];
//not do dummy comment
void* a1067910937 = (decode_clo(env11094))[1];

//creating new closure instance
void** clo12309 = alloc_clo(lam11091_fptr, 3);

//setting env list
clo12309[1] = a1067910937;
clo12309[2] = cons;
clo12309[3] = kont10779;
void* f1078010940 = encode_clo(clo12309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1078010940;
arg_buffer[3] = a1068010939;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11093 = encode_clo(alloc_clo(lam11093_fptr, 0));

void* lam11095_fptr() // lam11095 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11096 = arg_buffer[1];
//reading env and args
void* a1067910937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11096))[6];
//not do dummy comment
void* kont10779 = (decode_clo(env11096))[5];
//not do dummy comment
void* append = (decode_clo(env11096))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11096))[3];
//not do dummy comment
void* lst1 = (decode_clo(env11096))[2];
//not do dummy comment
void* cons = (decode_clo(env11096))[1];

//creating new closure instance
void** clo12311 = alloc_clo(lam11093_fptr, 5);

//setting env list
clo12311[1] = a1067910937;
clo12311[2] = cons;
clo12311[3] = lst2;
clo12311[4] = append;
clo12311[5] = kont10779;
void* f1078110938 = encode_clo(clo12311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1078110938;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11095 = encode_clo(alloc_clo(lam11095_fptr, 0));

void* lam11097_fptr() // lam11097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11098 = arg_buffer[1];
//reading env and args
void* a1067810935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11098))[7];
//not do dummy comment
void* kont10779 = (decode_clo(env11098))[6];
//not do dummy comment
void* append = (decode_clo(env11098))[5];
//not do dummy comment
void* lst2 = (decode_clo(env11098))[4];
//not do dummy comment
void* cons = (decode_clo(env11098))[3];
//not do dummy comment
void* lst1 = (decode_clo(env11098))[2];
//not do dummy comment
void* car = (decode_clo(env11098))[1];

//if-clause
bool if_guard12312 = is_true(a1067810935);
if(if_guard12312)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10779);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10779))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12314 = alloc_clo(lam11095_fptr, 6);

//setting env list
clo12314[1] = cons;
clo12314[2] = lst1;
clo12314[3] = lst2;
clo12314[4] = append;
clo12314[5] = kont10779;
clo12314[6] = cdr;
void* f1078210936 = encode_clo(clo12314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1078210936;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11097 = encode_clo(alloc_clo(lam11097_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11099 = arg_buffer[1];
//reading env and args
void* kont10779 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12316 = alloc_clo(lam11097_fptr, 7);

//setting env list
clo12316[1] = car;
clo12316[2] = lst1;
clo12316[3] = cons;
clo12316[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo12316[5] = append;
clo12316[6] = kont10779;
clo12316[7] = cdr;
void* f1078310934 = encode_clo(clo12316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1078310934;
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
void* _11100 = arg_buffer[1];
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

void* kont1078410942 = prim_car(lst);
void* lst10943 = prim_cdr(lst);
void* x1068210944 = apply_prim_hash(lst10943);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1078410942);
arg_buffer[2] = x1068210944;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1078410942))[0]);
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
void* _11101 = arg_buffer[1];
//reading env and args
void* kont10786 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1068310945 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10786);
arg_buffer[2] = x1068310945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10786))[0]);
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
void* _11102 = arg_buffer[1];
//reading env and args
void* kont10787 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1068410946 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10787);
arg_buffer[2] = x1068410946;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10787))[0]);
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
void* _11103 = arg_buffer[1];
//reading env and args
void* kont10788 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1068510947 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10788);
arg_buffer[2] = x1068510947;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10788))[0]);
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
void* _11104 = arg_buffer[1];
//reading env and args
void* kont10789 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1068610948 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10789);
arg_buffer[2] = x1068610948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10789))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam11105_fptr() // lam11105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11106 = arg_buffer[1];
//reading env and args
void* a1069110954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env11106))[4];
//not do dummy comment
void* a1068710949 = (decode_clo(env11106))[3];
//not do dummy comment
void* a1068810950 = (decode_clo(env11106))[2];
//not do dummy comment
void* kont10790 = (decode_clo(env11106))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont10790;
arg_buffer[3] = a1068710949;
arg_buffer[4] = a1068810950;
arg_buffer[5] = a1069110954;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11105 = encode_clo(alloc_clo(lam11105_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11111 = arg_buffer[1];
//reading env and args
void* kont10790 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar12317 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12317, "10", 10);
void* a1068710949 = encode_mpz(mpzvar12317);
mpz_t* mpzvar12318 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12318, "3", 10);
void* a1068810950 = encode_mpz(mpzvar12318);
mpz_t* mpzvar12319 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12319, "4", 10);
void* a1068910951 = encode_mpz(mpzvar12319);
mpz_t* mpzvar12320 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12320, "3", 10);
void* a1069010952 = encode_mpz(mpzvar12320);

//creating new closure instance
void** clo12322 = alloc_clo(lam11105_fptr, 4);

//setting env list
clo12322[1] = kont10790;
clo12322[2] = a1068810950;
clo12322[3] = a1068710949;
clo12322[4] = _u43;
void* f1079110953 = encode_clo(clo12322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f1079110953;
arg_buffer[3] = a1068910951;
arg_buffer[4] = a1069010952;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam11112_fptr() // lam11112 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11113 = arg_buffer[1];
//reading env and args
void* x1069210956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10792 = (decode_clo(env11113))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10792);
arg_buffer[2] = x1069210956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10792))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11112 = encode_clo(alloc_clo(lam11112_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11114 = arg_buffer[1];
//reading env and args
void* kont10792 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo12324 = alloc_clo(lam11112_fptr, 1);

//setting env list
clo12324[1] = kont10792;
void* f1079310955 = encode_clo(clo12324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1079310955;
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

