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
void* _10953 = arg_buffer[1];
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

void* kont1068910790 = prim_car(lst);
void* lst10791 = prim_cdr(lst);
void* x1060010792 = apply_prim__u43(lst10791);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1068910790);
arg_buffer[2] = x1060010792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1068910790))[0]);
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
void* _10954 = arg_buffer[1];
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

void* kont1069110793 = prim_car(lst);
void* lst10794 = prim_cdr(lst);
void* x1060110795 = apply_prim__u45(lst10794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1069110793);
arg_buffer[2] = x1060110795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1069110793))[0]);
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
void* _10955 = arg_buffer[1];
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

void* kont1069310796 = prim_car(lst);
void* lst10797 = prim_cdr(lst);
void* x1060210798 = apply_prim__u42(lst10797);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1069310796);
arg_buffer[2] = x1060210798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1069310796))[0]);
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
void* _10956 = arg_buffer[1];
//reading env and args
void* kont10695 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1060310799 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10695);
arg_buffer[2] = x1060310799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10695))[0]);
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

void* kont1069610800 = prim_car(lst);
void* lst10801 = prim_cdr(lst);
void* x1060410802 = apply_prim__u47(lst10801);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1069610800);
arg_buffer[2] = x1060410802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1069610800))[0]);
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

void* kont1069810803 = prim_car(lst);
void* lst10804 = prim_cdr(lst);
void* x1060510805 = apply_prim__u61(lst10804);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1069810803);
arg_buffer[2] = x1060510805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1069810803))[0]);
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

void* kont1070010806 = prim_car(lst);
void* lst10807 = prim_cdr(lst);
void* x1060610808 = apply_prim__u62(lst10807);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1070010806);
arg_buffer[2] = x1060610808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1070010806))[0]);
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
void* _10960 = arg_buffer[1];
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

void* kont1070210809 = prim_car(lst);
void* lst10810 = prim_cdr(lst);
void* x1060710811 = apply_prim__u60(lst10810);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1070210809);
arg_buffer[2] = x1060710811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1070210809))[0]);
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

void* kont1070410812 = prim_car(lst);
void* lst10813 = prim_cdr(lst);
void* x1060810814 = apply_prim__u60_u61(lst10813);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1070410812);
arg_buffer[2] = x1060810814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1070410812))[0]);
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

void* kont1070610815 = prim_car(lst);
void* lst10816 = prim_cdr(lst);
void* x1060910817 = apply_prim__u62_u61(lst10816);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1070610815);
arg_buffer[2] = x1060910817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1070610815))[0]);
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
void* _10963 = arg_buffer[1];
//reading env and args
void* kont10708 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1061010818 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10708);
arg_buffer[2] = x1061010818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10708))[0]);
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
void* _10964 = arg_buffer[1];
//reading env and args
void* kont10709 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1061110819 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10709);
arg_buffer[2] = x1061110819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10709))[0]);
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
void* _10965 = arg_buffer[1];
//reading env and args
void* kont10710 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1061210820 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10710);
arg_buffer[2] = x1061210820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10710))[0]);
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
void* _10966 = arg_buffer[1];
//reading env and args
void* kont10711 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1061310821 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10711);
arg_buffer[2] = x1061310821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10711))[0]);
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
void* _10967 = arg_buffer[1];
//reading env and args
void* kont10712 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1061410822 = prim_car(lst);

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

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10968 = arg_buffer[1];
//reading env and args
void* kont10713 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1061510823 = prim_cdr(lst);

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

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam10969_fptr() // lam10969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10970 = arg_buffer[1];
//reading env and args
void* a1061810827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1061610824 = (decode_clo(env10970))[3];
//not do dummy comment
void* kont10714 = (decode_clo(env10970))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env10970))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10714;
arg_buffer[3] = a1061610824;
arg_buffer[4] = a1061810827;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10969 = encode_clo(alloc_clo(lam10969_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10973 = arg_buffer[1];
//reading env and args
void* kont10714 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar12191 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12191, "0", 10);
void* a1061610824 = encode_mpz(mpzvar12191);
mpz_t* mpzvar12192 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12192, "2", 10);
void* a1061710825 = encode_mpz(mpzvar12192);

//creating new closure instance
void** clo12194 = alloc_clo(lam10969_fptr, 3);

//setting env list
clo12194[1] = equal_u63;
clo12194[2] = kont10714;
clo12194[3] = a1061610824;
void* f1071510826 = encode_clo(clo12194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1071510826;
arg_buffer[3] = x;
arg_buffer[4] = a1061710825;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam10974_fptr() // lam10974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10975 = arg_buffer[1];
//reading env and args
void* a1062110831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env10975))[3];
//not do dummy comment
void* a1061910828 = (decode_clo(env10975))[2];
//not do dummy comment
void* kont10716 = (decode_clo(env10975))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10716;
arg_buffer[3] = a1061910828;
arg_buffer[4] = a1062110831;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10974 = encode_clo(alloc_clo(lam10974_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10978 = arg_buffer[1];
//reading env and args
void* kont10716 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar12195 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12195, "1", 10);
void* a1061910828 = encode_mpz(mpzvar12195);
mpz_t* mpzvar12196 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12196, "2", 10);
void* a1062010829 = encode_mpz(mpzvar12196);

//creating new closure instance
void** clo12198 = alloc_clo(lam10974_fptr, 3);

//setting env list
clo12198[1] = kont10716;
clo12198[2] = a1061910828;
clo12198[3] = equal_u63;
void* f1071710830 = encode_clo(clo12198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1071710830;
arg_buffer[3] = x;
arg_buffer[4] = a1062010829;
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
void* _10979 = arg_buffer[1];
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

void* kont1071810832 = prim_car(x);
void* x10833 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1071810832);
arg_buffer[2] = x10833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1071810832))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam10982_fptr() // lam10982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10983 = arg_buffer[1];
//reading env and args
void* a1062710843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10720 = (decode_clo(env10983))[3];
//not do dummy comment
void* x = (decode_clo(env10983))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10983))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont10720;
arg_buffer[3] = x;
arg_buffer[4] = a1062710843;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10982 = encode_clo(alloc_clo(lam10982_fptr, 0));

void* lam10984_fptr() // lam10984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10985 = arg_buffer[1];
//reading env and args
void* a1062510840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10985))[5];
//not do dummy comment
void* lst = (decode_clo(env10985))[4];
//not do dummy comment
void* kont10720 = (decode_clo(env10985))[3];
//not do dummy comment
void* x = (decode_clo(env10985))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10985))[1];

//if-clause
bool if_guard12199 = is_true(a1062510840);
if(if_guard12199)
{
void* x1062610841 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10720);
arg_buffer[2] = x1062610841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10720))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12201 = alloc_clo(lam10982_fptr, 3);

//setting env list
clo12201[1] = member_u63;
clo12201[2] = x;
clo12201[3] = kont10720;
void* f1072110842 = encode_clo(clo12201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1072110842;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10984 = encode_clo(alloc_clo(lam10984_fptr, 0));

void* lam10986_fptr() // lam10986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10987 = arg_buffer[1];
//reading env and args
void* a1062410838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10987))[6];
//not do dummy comment
void* lst = (decode_clo(env10987))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env10987))[4];
//not do dummy comment
void* kont10720 = (decode_clo(env10987))[3];
//not do dummy comment
void* x = (decode_clo(env10987))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10987))[1];

//creating new closure instance
void** clo12203 = alloc_clo(lam10984_fptr, 5);

//setting env list
clo12203[1] = member_u63;
clo12203[2] = x;
clo12203[3] = kont10720;
clo12203[4] = lst;
clo12203[5] = cdr;
void* f1072210839 = encode_clo(clo12203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1072210839;
arg_buffer[3] = a1062410838;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
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
void* a1062210835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10989))[7];
//not do dummy comment
void* lst = (decode_clo(env10989))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env10989))[5];
//not do dummy comment
void* kont10720 = (decode_clo(env10989))[4];
//not do dummy comment
void* x = (decode_clo(env10989))[3];
//not do dummy comment
void* car = (decode_clo(env10989))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10989))[1];

//if-clause
bool if_guard12204 = is_true(a1062210835);
if(if_guard12204)
{
void* x1062310836 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10720);
arg_buffer[2] = x1062310836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10720))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12206 = alloc_clo(lam10986_fptr, 6);

//setting env list
clo12206[1] = member_u63;
clo12206[2] = x;
clo12206[3] = kont10720;
clo12206[4] = equal_u63;
clo12206[5] = lst;
clo12206[6] = cdr;
void* f1072310837 = encode_clo(clo12206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1072310837;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10988 = encode_clo(alloc_clo(lam10988_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10990 = arg_buffer[1];
//reading env and args
void* kont10720 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12208 = alloc_clo(lam10988_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo12208[1] = member_u63;
clo12208[2] = car;
clo12208[3] = x;
clo12208[4] = kont10720;
clo12208[5] = equal_u63;
clo12208[6] = lst;
clo12208[7] = cdr;
void* f1072410834 = encode_clo(clo12208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1072410834;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam10991_fptr() // lam10991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10992 = arg_buffer[1];
//reading env and args
void* a1063110851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env10992))[4];
//not do dummy comment
void* a1063010849 = (decode_clo(env10992))[3];
//not do dummy comment
void* foldl = (decode_clo(env10992))[2];
//not do dummy comment
void* kont10725 = (decode_clo(env10992))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont10725;
arg_buffer[3] = fun;
arg_buffer[4] = a1063010849;
arg_buffer[5] = a1063110851;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10991 = encode_clo(alloc_clo(lam10991_fptr, 0));

void* lam10993_fptr() // lam10993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10994 = arg_buffer[1];
//reading env and args
void* a1063010849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10994))[5];
//not do dummy comment
void* lst = (decode_clo(env10994))[4];
//not do dummy comment
void* fun = (decode_clo(env10994))[3];
//not do dummy comment
void* foldl = (decode_clo(env10994))[2];
//not do dummy comment
void* kont10725 = (decode_clo(env10994))[1];

//creating new closure instance
void** clo12210 = alloc_clo(lam10991_fptr, 4);

//setting env list
clo12210[1] = kont10725;
clo12210[2] = foldl;
clo12210[3] = a1063010849;
clo12210[4] = fun;
void* f1072610850 = encode_clo(clo12210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1072610850;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10993 = encode_clo(alloc_clo(lam10993_fptr, 0));

void* lam10995_fptr() // lam10995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10996 = arg_buffer[1];
//reading env and args
void* a1062910847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10996))[6];
//not do dummy comment
void* lst = (decode_clo(env10996))[5];
//not do dummy comment
void* fun = (decode_clo(env10996))[4];
//not do dummy comment
void* acc = (decode_clo(env10996))[3];
//not do dummy comment
void* foldl = (decode_clo(env10996))[2];
//not do dummy comment
void* kont10725 = (decode_clo(env10996))[1];

//creating new closure instance
void** clo12212 = alloc_clo(lam10993_fptr, 5);

//setting env list
clo12212[1] = kont10725;
clo12212[2] = foldl;
clo12212[3] = fun;
clo12212[4] = lst;
clo12212[5] = cdr;
void* f1072710848 = encode_clo(clo12212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1072710848;
arg_buffer[3] = a1062910847;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a1062810845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10998))[7];
//not do dummy comment
void* lst = (decode_clo(env10998))[6];
//not do dummy comment
void* fun = (decode_clo(env10998))[5];
//not do dummy comment
void* acc = (decode_clo(env10998))[4];
//not do dummy comment
void* car = (decode_clo(env10998))[3];
//not do dummy comment
void* foldl = (decode_clo(env10998))[2];
//not do dummy comment
void* kont10725 = (decode_clo(env10998))[1];

//if-clause
bool if_guard12213 = is_true(a1062810845);
if(if_guard12213)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10725);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10725))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12215 = alloc_clo(lam10995_fptr, 6);

//setting env list
clo12215[1] = kont10725;
clo12215[2] = foldl;
clo12215[3] = acc;
clo12215[4] = fun;
clo12215[5] = lst;
clo12215[6] = cdr;
void* f1072810846 = encode_clo(clo12215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1072810846;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10997 = encode_clo(alloc_clo(lam10997_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10999 = arg_buffer[1];
//reading env and args
void* kont10725 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo12217 = alloc_clo(lam10997_fptr, 7);

//setting env list
clo12217[1] = kont10725;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo12217[2] = foldl;
clo12217[3] = car;
clo12217[4] = acc;
clo12217[5] = fun;
clo12217[6] = lst;
clo12217[7] = cdr;
void* f1072910844 = encode_clo(clo12217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1072910844;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam11000_fptr() // lam11000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11001 = arg_buffer[1];
//reading env and args
void* a1063510859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1063310855 = (decode_clo(env11001))[3];
//not do dummy comment
void* kont10730 = (decode_clo(env11001))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11001))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10730;
arg_buffer[3] = a1063310855;
arg_buffer[4] = a1063510859;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11000 = encode_clo(alloc_clo(lam11000_fptr, 0));

void* lam11002_fptr() // lam11002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11003 = arg_buffer[1];
//reading env and args
void* a1063410857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1063310855 = (decode_clo(env11003))[5];
//not do dummy comment
void* kont10730 = (decode_clo(env11003))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11003))[3];
//not do dummy comment
void* lst2 = (decode_clo(env11003))[2];
//not do dummy comment
void* cons = (decode_clo(env11003))[1];

//creating new closure instance
void** clo12219 = alloc_clo(lam11000_fptr, 3);

//setting env list
clo12219[1] = reverse_u45helper;
clo12219[2] = kont10730;
clo12219[3] = a1063310855;
void* f1073110858 = encode_clo(clo12219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1073110858;
arg_buffer[3] = a1063410857;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11002 = encode_clo(alloc_clo(lam11002_fptr, 0));

void* lam11004_fptr() // lam11004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11005 = arg_buffer[1];
//reading env and args
void* a1063310855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11005))[6];
//not do dummy comment
void* lst2 = (decode_clo(env11005))[5];
//not do dummy comment
void* car = (decode_clo(env11005))[4];
//not do dummy comment
void* cons = (decode_clo(env11005))[3];
//not do dummy comment
void* lst = (decode_clo(env11005))[2];
//not do dummy comment
void* kont10730 = (decode_clo(env11005))[1];

//creating new closure instance
void** clo12221 = alloc_clo(lam11002_fptr, 5);

//setting env list
clo12221[1] = cons;
clo12221[2] = lst2;
clo12221[3] = reverse_u45helper;
clo12221[4] = kont10730;
clo12221[5] = a1063310855;
void* f1073210856 = encode_clo(clo12221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1073210856;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a1063210853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11007))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11007))[6];
//not do dummy comment
void* lst2 = (decode_clo(env11007))[5];
//not do dummy comment
void* car = (decode_clo(env11007))[4];
//not do dummy comment
void* cons = (decode_clo(env11007))[3];
//not do dummy comment
void* lst = (decode_clo(env11007))[2];
//not do dummy comment
void* kont10730 = (decode_clo(env11007))[1];

//if-clause
bool if_guard12222 = is_true(a1063210853);
if(if_guard12222)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10730);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10730))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12224 = alloc_clo(lam11004_fptr, 6);

//setting env list
clo12224[1] = kont10730;
clo12224[2] = lst;
clo12224[3] = cons;
clo12224[4] = car;
clo12224[5] = lst2;
clo12224[6] = reverse_u45helper;
void* f1073310854 = encode_clo(clo12224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1073310854;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11006 = encode_clo(alloc_clo(lam11006_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11008 = arg_buffer[1];
//reading env and args
void* kont10730 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12226 = alloc_clo(lam11006_fptr, 7);

//setting env list
clo12226[1] = kont10730;
clo12226[2] = lst;
clo12226[3] = cons;
clo12226[4] = car;
clo12226[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo12226[6] = reverse_u45helper;
clo12226[7] = cdr;
void* f1073410852 = encode_clo(clo12226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1073410852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam11009_fptr() // lam11009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11010 = arg_buffer[1];
//reading env and args
void* a1063610861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11010))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env11010))[2];
//not do dummy comment
void* kont10735 = (decode_clo(env11010))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10735;
arg_buffer[3] = lst;
arg_buffer[4] = a1063610861;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11009 = encode_clo(alloc_clo(lam11009_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11011 = arg_buffer[1];
//reading env and args
void* kont10735 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo12228 = alloc_clo(lam11009_fptr, 3);

//setting env list
clo12228[1] = kont10735;
clo12228[2] = reverse_u45helper;
clo12228[3] = lst;
void* f1073610860 = encode_clo(clo12228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1073610860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam11012_fptr() // lam11012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11013 = arg_buffer[1];
//reading env and args
void* x1063910866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10737 = (decode_clo(env11013))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10737);
arg_buffer[2] = x1063910866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10737))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11012 = encode_clo(alloc_clo(lam11012_fptr, 0));

void* lam11014_fptr() // lam11014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11015 = arg_buffer[1];
//reading env and args
void* a1064410875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1064210871 = (decode_clo(env11015))[4];
//not do dummy comment
void* kont10737 = (decode_clo(env11015))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env11015))[2];
//not do dummy comment
void* a1064010868 = (decode_clo(env11015))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10737;
arg_buffer[3] = a1064010868;
arg_buffer[4] = a1064210871;
arg_buffer[5] = a1064410875;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11014 = encode_clo(alloc_clo(lam11014_fptr, 0));

void* lam11016_fptr() // lam11016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11017 = arg_buffer[1];
//reading env and args
void* a1064310873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1064210871 = (decode_clo(env11017))[6];
//not do dummy comment
void* kont10737 = (decode_clo(env11017))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11017))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11017))[3];
//not do dummy comment
void* a1064010868 = (decode_clo(env11017))[2];
//not do dummy comment
void* cons = (decode_clo(env11017))[1];

//creating new closure instance
void** clo12230 = alloc_clo(lam11014_fptr, 4);

//setting env list
clo12230[1] = a1064010868;
clo12230[2] = take_u45helper;
clo12230[3] = kont10737;
clo12230[4] = a1064210871;
void* f1073910874 = encode_clo(clo12230);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1073910874;
arg_buffer[3] = a1064310873;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a1064210871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11019))[7];
//not do dummy comment
void* kont10737 = (decode_clo(env11019))[6];
//not do dummy comment
void* car = (decode_clo(env11019))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11019))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11019))[3];
//not do dummy comment
void* a1064010868 = (decode_clo(env11019))[2];
//not do dummy comment
void* cons = (decode_clo(env11019))[1];

//creating new closure instance
void** clo12232 = alloc_clo(lam11016_fptr, 6);

//setting env list
clo12232[1] = cons;
clo12232[2] = a1064010868;
clo12232[3] = lst2;
clo12232[4] = take_u45helper;
clo12232[5] = kont10737;
clo12232[6] = a1064210871;
void* f1074010872 = encode_clo(clo12232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1074010872;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11018 = encode_clo(alloc_clo(lam11018_fptr, 0));

void* lam11021_fptr() // lam11021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11022 = arg_buffer[1];
//reading env and args
void* a1064010868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11022))[8];
//not do dummy comment
void* kont10737 = (decode_clo(env11022))[7];
//not do dummy comment
void* cons = (decode_clo(env11022))[6];
//not do dummy comment
void* _u45 = (decode_clo(env11022))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11022))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11022))[3];
//not do dummy comment
void* n = (decode_clo(env11022))[2];
//not do dummy comment
void* car = (decode_clo(env11022))[1];
mpz_t* mpzvar12233 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12233, "1", 10);
void* a1064110869 = encode_mpz(mpzvar12233);

//creating new closure instance
void** clo12235 = alloc_clo(lam11018_fptr, 7);

//setting env list
clo12235[1] = cons;
clo12235[2] = a1064010868;
clo12235[3] = lst2;
clo12235[4] = take_u45helper;
clo12235[5] = car;
clo12235[6] = kont10737;
clo12235[7] = lst;
void* f1074110870 = encode_clo(clo12235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1074110870;
arg_buffer[3] = n;
arg_buffer[4] = a1064110869;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11021 = encode_clo(alloc_clo(lam11021_fptr, 0));

void* lam11023_fptr() // lam11023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11024 = arg_buffer[1];
//reading env and args
void* a1063810864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11024))[10];
//not do dummy comment
void* lst = (decode_clo(env11024))[9];
//not do dummy comment
void* reverse = (decode_clo(env11024))[8];
//not do dummy comment
void* kont10737 = (decode_clo(env11024))[7];
//not do dummy comment
void* cons = (decode_clo(env11024))[6];
//not do dummy comment
void* _u45 = (decode_clo(env11024))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env11024))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11024))[3];
//not do dummy comment
void* n = (decode_clo(env11024))[2];
//not do dummy comment
void* car = (decode_clo(env11024))[1];

//if-clause
bool if_guard12236 = is_true(a1063810864);
if(if_guard12236)
{

//creating new closure instance
void** clo12238 = alloc_clo(lam11012_fptr, 1);

//setting env list
clo12238[1] = kont10737;
void* f1073810865 = encode_clo(clo12238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1073810865;
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
void** clo12240 = alloc_clo(lam11021_fptr, 8);

//setting env list
clo12240[1] = car;
clo12240[2] = n;
clo12240[3] = lst2;
clo12240[4] = take_u45helper;
clo12240[5] = _u45;
clo12240[6] = cons;
clo12240[7] = kont10737;
clo12240[8] = lst;
void* f1074210867 = encode_clo(clo12240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1074210867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11023 = encode_clo(alloc_clo(lam11023_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11026 = arg_buffer[1];
//reading env and args
void* kont10737 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar12241 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12241, "0", 10);
void* a1063710862 = encode_mpz(mpzvar12241);

//creating new closure instance
void** clo12243 = alloc_clo(lam11023_fptr, 10);

//setting env list
clo12243[1] = car;
clo12243[2] = n;
clo12243[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo12243[4] = take_u45helper;
clo12243[5] = _u45;
clo12243[6] = cons;
clo12243[7] = kont10737;
clo12243[8] = reverse;
clo12243[9] = lst;
clo12243[10] = cdr;
void* f1074310863 = encode_clo(clo12243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1074310863;
arg_buffer[3] = n;
arg_buffer[4] = a1063710862;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam11027_fptr() // lam11027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11028 = arg_buffer[1];
//reading env and args
void* a1064510877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10744 = (decode_clo(env11028))[4];
//not do dummy comment
void* lst = (decode_clo(env11028))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env11028))[2];
//not do dummy comment
void* n = (decode_clo(env11028))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10744;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1064510877;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11027 = encode_clo(alloc_clo(lam11027_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11029 = arg_buffer[1];
//reading env and args
void* kont10744 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12245 = alloc_clo(lam11027_fptr, 4);

//setting env list
clo12245[1] = n;
clo12245[2] = take_u45helper;
clo12245[3] = lst;
clo12245[4] = kont10744;
void* f1074510876 = encode_clo(clo12245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1074510876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam11031_fptr() // lam11031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11032 = arg_buffer[1];
//reading env and args
void* a1065010885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10746 = (decode_clo(env11032))[3];
//not do dummy comment
void* _u43 = (decode_clo(env11032))[2];
//not do dummy comment
void* a1064810881 = (decode_clo(env11032))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont10746;
arg_buffer[3] = a1064810881;
arg_buffer[4] = a1065010885;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11031 = encode_clo(alloc_clo(lam11031_fptr, 0));

void* lam11033_fptr() // lam11033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11034 = arg_buffer[1];
//reading env and args
void* a1064910883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10746 = (decode_clo(env11034))[4];
//not do dummy comment
void* length = (decode_clo(env11034))[3];
//not do dummy comment
void* _u43 = (decode_clo(env11034))[2];
//not do dummy comment
void* a1064810881 = (decode_clo(env11034))[1];

//creating new closure instance
void** clo12247 = alloc_clo(lam11031_fptr, 3);

//setting env list
clo12247[1] = a1064810881;
clo12247[2] = _u43;
clo12247[3] = kont10746;
void* f1074710884 = encode_clo(clo12247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1074710884;
arg_buffer[3] = a1064910883;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11033 = encode_clo(alloc_clo(lam11033_fptr, 0));

void* lam11036_fptr() // lam11036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11037 = arg_buffer[1];
//reading env and args
void* a1064610879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11037))[5];
//not do dummy comment
void* length = (decode_clo(env11037))[4];
//not do dummy comment
void* _u43 = (decode_clo(env11037))[3];
//not do dummy comment
void* lst = (decode_clo(env11037))[2];
//not do dummy comment
void* kont10746 = (decode_clo(env11037))[1];

//if-clause
bool if_guard12248 = is_true(a1064610879);
if(if_guard12248)
{
mpz_t* mpzvar12249 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12249, "0", 10);
void* x1064710880 = encode_mpz(mpzvar12249);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10746);
arg_buffer[2] = x1064710880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10746))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar12250 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12250, "1", 10);
void* a1064810881 = encode_mpz(mpzvar12250);

//creating new closure instance
void** clo12252 = alloc_clo(lam11033_fptr, 4);

//setting env list
clo12252[1] = a1064810881;
clo12252[2] = _u43;
clo12252[3] = length;
clo12252[4] = kont10746;
void* f1074810882 = encode_clo(clo12252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1074810882;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11036 = encode_clo(alloc_clo(lam11036_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11038 = arg_buffer[1];
//reading env and args
void* kont10746 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo12254 = alloc_clo(lam11036_fptr, 5);

//setting env list
clo12254[1] = kont10746;
clo12254[2] = lst;
clo12254[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo12254[4] = length;
clo12254[5] = cdr;
void* f1074910878 = encode_clo(clo12254);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1074910878;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam11039_fptr() // lam11039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11040 = arg_buffer[1];
//reading env and args
void* x1065210889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10750 = (decode_clo(env11040))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10750);
arg_buffer[2] = x1065210889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10750))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11039 = encode_clo(alloc_clo(lam11039_fptr, 0));

void* lam11041_fptr() // lam11041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11042 = arg_buffer[1];
//reading env and args
void* a1065610897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1065410893 = (decode_clo(env11042))[3];
//not do dummy comment
void* kont10750 = (decode_clo(env11042))[2];
//not do dummy comment
void* cons = (decode_clo(env11042))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10750;
arg_buffer[3] = a1065410893;
arg_buffer[4] = a1065610897;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a1065510895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env11044))[5];
//not do dummy comment
void* a1065410893 = (decode_clo(env11044))[4];
//not do dummy comment
void* kont10750 = (decode_clo(env11044))[3];
//not do dummy comment
void* proc = (decode_clo(env11044))[2];
//not do dummy comment
void* cons = (decode_clo(env11044))[1];

//creating new closure instance
void** clo12256 = alloc_clo(lam11041_fptr, 3);

//setting env list
clo12256[1] = cons;
clo12256[2] = kont10750;
clo12256[3] = a1065410893;
void* f1075210896 = encode_clo(clo12256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1075210896;
arg_buffer[3] = proc;
arg_buffer[4] = a1065510895;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a1065410893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11046))[6];
//not do dummy comment
void* lst = (decode_clo(env11046))[5];
//not do dummy comment
void* map = (decode_clo(env11046))[4];
//not do dummy comment
void* kont10750 = (decode_clo(env11046))[3];
//not do dummy comment
void* proc = (decode_clo(env11046))[2];
//not do dummy comment
void* cons = (decode_clo(env11046))[1];

//creating new closure instance
void** clo12258 = alloc_clo(lam11043_fptr, 5);

//setting env list
clo12258[1] = cons;
clo12258[2] = proc;
clo12258[3] = kont10750;
clo12258[4] = a1065410893;
clo12258[5] = map;
void* f1075310894 = encode_clo(clo12258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1075310894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a1065310891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11048))[6];
//not do dummy comment
void* lst = (decode_clo(env11048))[5];
//not do dummy comment
void* map = (decode_clo(env11048))[4];
//not do dummy comment
void* kont10750 = (decode_clo(env11048))[3];
//not do dummy comment
void* proc = (decode_clo(env11048))[2];
//not do dummy comment
void* cons = (decode_clo(env11048))[1];

//creating new closure instance
void** clo12260 = alloc_clo(lam11045_fptr, 6);

//setting env list
clo12260[1] = cons;
clo12260[2] = proc;
clo12260[3] = kont10750;
clo12260[4] = map;
clo12260[5] = lst;
clo12260[6] = cdr;
void* f1075410892 = encode_clo(clo12260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1075410892;
arg_buffer[3] = a1065310891;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a1065110887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11050))[8];
//not do dummy comment
void* map = (decode_clo(env11050))[7];
//not do dummy comment
void* kont10750 = (decode_clo(env11050))[6];
//not do dummy comment
void* proc = (decode_clo(env11050))[5];
//not do dummy comment
void* car = (decode_clo(env11050))[4];
//not do dummy comment
void* cons = (decode_clo(env11050))[3];
//not do dummy comment
void* list = (decode_clo(env11050))[2];
//not do dummy comment
void* cdr = (decode_clo(env11050))[1];

//if-clause
bool if_guard12261 = is_true(a1065110887);
if(if_guard12261)
{

//creating new closure instance
void** clo12263 = alloc_clo(lam11039_fptr, 1);

//setting env list
clo12263[1] = kont10750;
void* f1075110888 = encode_clo(clo12263);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1075110888;
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
void** clo12265 = alloc_clo(lam11047_fptr, 6);

//setting env list
clo12265[1] = cons;
clo12265[2] = proc;
clo12265[3] = kont10750;
clo12265[4] = map;
clo12265[5] = lst;
clo12265[6] = cdr;
void* f1075510890 = encode_clo(clo12265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1075510890;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11049 = encode_clo(alloc_clo(lam11049_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11051 = arg_buffer[1];
//reading env and args
void* kont10750 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12267 = alloc_clo(lam11049_fptr, 8);

//setting env list
clo12267[1] = cdr;
clo12267[2] = list;
clo12267[3] = cons;
clo12267[4] = car;
clo12267[5] = proc;
clo12267[6] = kont10750;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo12267[7] = map;
clo12267[8] = lst;
void* f1075610886 = encode_clo(clo12267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1075610886;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam11052_fptr() // lam11052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11053 = arg_buffer[1];
//reading env and args
void* x1065810901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10757 = (decode_clo(env11053))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10757);
arg_buffer[2] = x1065810901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10757))[0]);
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
void* a1066310911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1066110907 = (decode_clo(env11055))[3];
//not do dummy comment
void* cons = (decode_clo(env11055))[2];
//not do dummy comment
void* kont10757 = (decode_clo(env11055))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10757;
arg_buffer[3] = a1066110907;
arg_buffer[4] = a1066310911;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a1066210909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1066110907 = (decode_clo(env11057))[5];
//not do dummy comment
void* op = (decode_clo(env11057))[4];
//not do dummy comment
void* filter = (decode_clo(env11057))[3];
//not do dummy comment
void* cons = (decode_clo(env11057))[2];
//not do dummy comment
void* kont10757 = (decode_clo(env11057))[1];

//creating new closure instance
void** clo12269 = alloc_clo(lam11054_fptr, 3);

//setting env list
clo12269[1] = kont10757;
clo12269[2] = cons;
clo12269[3] = a1066110907;
void* f1075910910 = encode_clo(clo12269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1075910910;
arg_buffer[3] = op;
arg_buffer[4] = a1066210909;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a1066110907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11059))[6];
//not do dummy comment
void* lst = (decode_clo(env11059))[5];
//not do dummy comment
void* op = (decode_clo(env11059))[4];
//not do dummy comment
void* filter = (decode_clo(env11059))[3];
//not do dummy comment
void* cons = (decode_clo(env11059))[2];
//not do dummy comment
void* kont10757 = (decode_clo(env11059))[1];

//creating new closure instance
void** clo12271 = alloc_clo(lam11056_fptr, 5);

//setting env list
clo12271[1] = kont10757;
clo12271[2] = cons;
clo12271[3] = filter;
clo12271[4] = op;
clo12271[5] = a1066110907;
void* f1076010908 = encode_clo(clo12271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1076010908;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a1066410913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env11061))[3];
//not do dummy comment
void* filter = (decode_clo(env11061))[2];
//not do dummy comment
void* kont10757 = (decode_clo(env11061))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont10757;
arg_buffer[3] = op;
arg_buffer[4] = a1066410913;
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
void* a1066010905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11063))[7];
//not do dummy comment
void* lst = (decode_clo(env11063))[6];
//not do dummy comment
void* op = (decode_clo(env11063))[5];
//not do dummy comment
void* cons = (decode_clo(env11063))[4];
//not do dummy comment
void* kont10757 = (decode_clo(env11063))[3];
//not do dummy comment
void* filter = (decode_clo(env11063))[2];
//not do dummy comment
void* car = (decode_clo(env11063))[1];

//if-clause
bool if_guard12272 = is_true(a1066010905);
if(if_guard12272)
{

//creating new closure instance
void** clo12274 = alloc_clo(lam11058_fptr, 6);

//setting env list
clo12274[1] = kont10757;
clo12274[2] = cons;
clo12274[3] = filter;
clo12274[4] = op;
clo12274[5] = lst;
clo12274[6] = cdr;
void* f1076110906 = encode_clo(clo12274);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1076110906;
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
void** clo12276 = alloc_clo(lam11060_fptr, 3);

//setting env list
clo12276[1] = kont10757;
clo12276[2] = filter;
clo12276[3] = op;
void* f1076210912 = encode_clo(clo12276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1076210912;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11062 = encode_clo(alloc_clo(lam11062_fptr, 0));

void* lam11064_fptr() // lam11064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11065 = arg_buffer[1];
//reading env and args
void* a1065910903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11065))[7];
//not do dummy comment
void* lst = (decode_clo(env11065))[6];
//not do dummy comment
void* op = (decode_clo(env11065))[5];
//not do dummy comment
void* cons = (decode_clo(env11065))[4];
//not do dummy comment
void* kont10757 = (decode_clo(env11065))[3];
//not do dummy comment
void* filter = (decode_clo(env11065))[2];
//not do dummy comment
void* car = (decode_clo(env11065))[1];

//creating new closure instance
void** clo12278 = alloc_clo(lam11062_fptr, 7);

//setting env list
clo12278[1] = car;
clo12278[2] = filter;
clo12278[3] = kont10757;
clo12278[4] = cons;
clo12278[5] = op;
clo12278[6] = lst;
clo12278[7] = cdr;
void* f1076310904 = encode_clo(clo12278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1076310904;
arg_buffer[3] = a1065910903;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a1065710899 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env11067))[8];
//not do dummy comment
void* op = (decode_clo(env11067))[7];
//not do dummy comment
void* cons = (decode_clo(env11067))[6];
//not do dummy comment
void* kont10757 = (decode_clo(env11067))[5];
//not do dummy comment
void* list = (decode_clo(env11067))[4];
//not do dummy comment
void* cdr = (decode_clo(env11067))[3];
//not do dummy comment
void* filter = (decode_clo(env11067))[2];
//not do dummy comment
void* car = (decode_clo(env11067))[1];

//if-clause
bool if_guard12279 = is_true(a1065710899);
if(if_guard12279)
{

//creating new closure instance
void** clo12281 = alloc_clo(lam11052_fptr, 1);

//setting env list
clo12281[1] = kont10757;
void* f1075810900 = encode_clo(clo12281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1075810900;
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
void** clo12283 = alloc_clo(lam11064_fptr, 7);

//setting env list
clo12283[1] = car;
clo12283[2] = filter;
clo12283[3] = kont10757;
clo12283[4] = cons;
clo12283[5] = op;
clo12283[6] = lst;
clo12283[7] = cdr;
void* f1076410902 = encode_clo(clo12283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1076410902;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11066 = encode_clo(alloc_clo(lam11066_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11068 = arg_buffer[1];
//reading env and args
void* kont10757 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12285 = alloc_clo(lam11066_fptr, 8);

//setting env list
clo12285[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo12285[2] = filter;
clo12285[3] = cdr;
clo12285[4] = list;
clo12285[5] = kont10757;
clo12285[6] = cons;
clo12285[7] = op;
clo12285[8] = lst;
void* f1076510898 = encode_clo(clo12285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1076510898;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam11069_fptr() // lam11069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11070 = arg_buffer[1];
//reading env and args
void* a1066910921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1066710918 = (decode_clo(env11070))[3];
//not do dummy comment
void* drop = (decode_clo(env11070))[2];
//not do dummy comment
void* kont10766 = (decode_clo(env11070))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont10766;
arg_buffer[3] = a1066710918;
arg_buffer[4] = a1066910921;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11069 = encode_clo(alloc_clo(lam11069_fptr, 0));

void* lam11072_fptr() // lam11072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11073 = arg_buffer[1];
//reading env and args
void* a1066710918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env11073))[4];
//not do dummy comment
void* kont10766 = (decode_clo(env11073))[3];
//not do dummy comment
void* n = (decode_clo(env11073))[2];
//not do dummy comment
void* _u45 = (decode_clo(env11073))[1];
mpz_t* mpzvar12286 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12286, "1", 10);
void* a1066810919 = encode_mpz(mpzvar12286);

//creating new closure instance
void** clo12288 = alloc_clo(lam11069_fptr, 3);

//setting env list
clo12288[1] = kont10766;
clo12288[2] = drop;
clo12288[3] = a1066710918;
void* f1076710920 = encode_clo(clo12288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1076710920;
arg_buffer[3] = n;
arg_buffer[4] = a1066810919;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11072 = encode_clo(alloc_clo(lam11072_fptr, 0));

void* lam11074_fptr() // lam11074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11075 = arg_buffer[1];
//reading env and args
void* a1066610916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11075))[6];
//not do dummy comment
void* kont10766 = (decode_clo(env11075))[5];
//not do dummy comment
void* n = (decode_clo(env11075))[4];
//not do dummy comment
void* _u45 = (decode_clo(env11075))[3];
//not do dummy comment
void* lst = (decode_clo(env11075))[2];
//not do dummy comment
void* drop = (decode_clo(env11075))[1];

//if-clause
bool if_guard12289 = is_true(a1066610916);
if(if_guard12289)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10766);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10766))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12291 = alloc_clo(lam11072_fptr, 4);

//setting env list
clo12291[1] = _u45;
clo12291[2] = n;
clo12291[3] = kont10766;
clo12291[4] = drop;
void* f1076810917 = encode_clo(clo12291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1076810917;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11074 = encode_clo(alloc_clo(lam11074_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11077 = arg_buffer[1];
//reading env and args
void* kont10766 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar12292 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12292, "0", 10);
void* a1066510914 = encode_mpz(mpzvar12292);

//creating new closure instance
void** clo12294 = alloc_clo(lam11074_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo12294[1] = drop;
clo12294[2] = lst;
clo12294[3] = _u45;
clo12294[4] = n;
clo12294[5] = kont10766;
clo12294[6] = cdr;
void* f1076910915 = encode_clo(clo12294);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1076910915;
arg_buffer[3] = n;
arg_buffer[4] = a1066510914;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam11078_fptr() // lam11078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11079 = arg_buffer[1];
//reading env and args
void* a1067310929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1067110925 = (decode_clo(env11079))[3];
//not do dummy comment
void* proc = (decode_clo(env11079))[2];
//not do dummy comment
void* kont10770 = (decode_clo(env11079))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont10770;
arg_buffer[3] = a1067110925;
arg_buffer[4] = a1067310929;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11078 = encode_clo(alloc_clo(lam11078_fptr, 0));

void* lam11080_fptr() // lam11080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11081 = arg_buffer[1];
//reading env and args
void* a1067210927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env11081))[5];
//not do dummy comment
void* a1067110925 = (decode_clo(env11081))[4];
//not do dummy comment
void* kont10770 = (decode_clo(env11081))[3];
//not do dummy comment
void* proc = (decode_clo(env11081))[2];
//not do dummy comment
void* acc = (decode_clo(env11081))[1];

//creating new closure instance
void** clo12296 = alloc_clo(lam11078_fptr, 3);

//setting env list
clo12296[1] = kont10770;
clo12296[2] = proc;
clo12296[3] = a1067110925;
void* f1077110928 = encode_clo(clo12296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1077110928;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1067210927;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a1067110925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11083))[6];
//not do dummy comment
void* kont10770 = (decode_clo(env11083))[5];
//not do dummy comment
void* foldr = (decode_clo(env11083))[4];
//not do dummy comment
void* lst = (decode_clo(env11083))[3];
//not do dummy comment
void* proc = (decode_clo(env11083))[2];
//not do dummy comment
void* acc = (decode_clo(env11083))[1];

//creating new closure instance
void** clo12298 = alloc_clo(lam11080_fptr, 5);

//setting env list
clo12298[1] = acc;
clo12298[2] = proc;
clo12298[3] = kont10770;
clo12298[4] = a1067110925;
clo12298[5] = foldr;
void* f1077210926 = encode_clo(clo12298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1077210926;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a1067010923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11085))[7];
//not do dummy comment
void* kont10770 = (decode_clo(env11085))[6];
//not do dummy comment
void* car = (decode_clo(env11085))[5];
//not do dummy comment
void* foldr = (decode_clo(env11085))[4];
//not do dummy comment
void* lst = (decode_clo(env11085))[3];
//not do dummy comment
void* proc = (decode_clo(env11085))[2];
//not do dummy comment
void* acc = (decode_clo(env11085))[1];

//if-clause
bool if_guard12299 = is_true(a1067010923);
if(if_guard12299)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10770);
arg_buffer[2] = acc;
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
void** clo12301 = alloc_clo(lam11082_fptr, 6);

//setting env list
clo12301[1] = acc;
clo12301[2] = proc;
clo12301[3] = lst;
clo12301[4] = foldr;
clo12301[5] = kont10770;
clo12301[6] = cdr;
void* f1077310924 = encode_clo(clo12301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1077310924;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11084 = encode_clo(alloc_clo(lam11084_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11086 = arg_buffer[1];
//reading env and args
void* kont10770 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo12303 = alloc_clo(lam11084_fptr, 7);

//setting env list
clo12303[1] = acc;
clo12303[2] = proc;
clo12303[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo12303[4] = foldr;
clo12303[5] = car;
clo12303[6] = kont10770;
clo12303[7] = cdr;
void* f1077410922 = encode_clo(clo12303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1077410922;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam11087_fptr() // lam11087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11088 = arg_buffer[1];
//reading env and args
void* a1067710937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10775 = (decode_clo(env11088))[3];
//not do dummy comment
void* cons = (decode_clo(env11088))[2];
//not do dummy comment
void* a1067510933 = (decode_clo(env11088))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10775;
arg_buffer[3] = a1067510933;
arg_buffer[4] = a1067710937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11087 = encode_clo(alloc_clo(lam11087_fptr, 0));

void* lam11089_fptr() // lam11089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11090 = arg_buffer[1];
//reading env and args
void* a1067610935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10775 = (decode_clo(env11090))[5];
//not do dummy comment
void* append = (decode_clo(env11090))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11090))[3];
//not do dummy comment
void* cons = (decode_clo(env11090))[2];
//not do dummy comment
void* a1067510933 = (decode_clo(env11090))[1];

//creating new closure instance
void** clo12305 = alloc_clo(lam11087_fptr, 3);

//setting env list
clo12305[1] = a1067510933;
clo12305[2] = cons;
clo12305[3] = kont10775;
void* f1077610936 = encode_clo(clo12305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1077610936;
arg_buffer[3] = a1067610935;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11089 = encode_clo(alloc_clo(lam11089_fptr, 0));

void* lam11091_fptr() // lam11091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11092 = arg_buffer[1];
//reading env and args
void* a1067510933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11092))[6];
//not do dummy comment
void* kont10775 = (decode_clo(env11092))[5];
//not do dummy comment
void* append = (decode_clo(env11092))[4];
//not do dummy comment
void* lst2 = (decode_clo(env11092))[3];
//not do dummy comment
void* lst1 = (decode_clo(env11092))[2];
//not do dummy comment
void* cons = (decode_clo(env11092))[1];

//creating new closure instance
void** clo12307 = alloc_clo(lam11089_fptr, 5);

//setting env list
clo12307[1] = a1067510933;
clo12307[2] = cons;
clo12307[3] = lst2;
clo12307[4] = append;
clo12307[5] = kont10775;
void* f1077710934 = encode_clo(clo12307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1077710934;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a1067410931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env11094))[7];
//not do dummy comment
void* kont10775 = (decode_clo(env11094))[6];
//not do dummy comment
void* append = (decode_clo(env11094))[5];
//not do dummy comment
void* lst2 = (decode_clo(env11094))[4];
//not do dummy comment
void* cons = (decode_clo(env11094))[3];
//not do dummy comment
void* lst1 = (decode_clo(env11094))[2];
//not do dummy comment
void* car = (decode_clo(env11094))[1];

//if-clause
bool if_guard12308 = is_true(a1067410931);
if(if_guard12308)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10775);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10775))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12310 = alloc_clo(lam11091_fptr, 6);

//setting env list
clo12310[1] = cons;
clo12310[2] = lst1;
clo12310[3] = lst2;
clo12310[4] = append;
clo12310[5] = kont10775;
clo12310[6] = cdr;
void* f1077810932 = encode_clo(clo12310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1077810932;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam11093 = encode_clo(alloc_clo(lam11093_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11095 = arg_buffer[1];
//reading env and args
void* kont10775 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12312 = alloc_clo(lam11093_fptr, 7);

//setting env list
clo12312[1] = car;
clo12312[2] = lst1;
clo12312[3] = cons;
clo12312[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo12312[5] = append;
clo12312[6] = kont10775;
clo12312[7] = cdr;
void* f1077910930 = encode_clo(clo12312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1077910930;
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
void* _11096 = arg_buffer[1];
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

void* kont1078010938 = prim_car(lst);
void* lst10939 = prim_cdr(lst);
void* x1067810940 = apply_prim_hash(lst10939);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1078010938);
arg_buffer[2] = x1067810940;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1078010938))[0]);
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
void* _11097 = arg_buffer[1];
//reading env and args
void* kont10782 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1067910941 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10782);
arg_buffer[2] = x1067910941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10782))[0]);
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
void* _11098 = arg_buffer[1];
//reading env and args
void* kont10783 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1068010942 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10783);
arg_buffer[2] = x1068010942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10783))[0]);
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
void* _11099 = arg_buffer[1];
//reading env and args
void* kont10784 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1068110943 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10784);
arg_buffer[2] = x1068110943;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10784))[0]);
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
void* _11100 = arg_buffer[1];
//reading env and args
void* kont10785 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1068210944 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10785);
arg_buffer[2] = x1068210944;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10785))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam11101_fptr() // lam11101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11102 = arg_buffer[1];
//reading env and args
void* a1068710950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env11102))[4];
//not do dummy comment
void* a1068310945 = (decode_clo(env11102))[3];
//not do dummy comment
void* a1068410946 = (decode_clo(env11102))[2];
//not do dummy comment
void* kont10786 = (decode_clo(env11102))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont10786;
arg_buffer[3] = a1068310945;
arg_buffer[4] = a1068410946;
arg_buffer[5] = a1068710950;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11101 = encode_clo(alloc_clo(lam11101_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11107 = arg_buffer[1];
//reading env and args
void* kont10786 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar12313 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12313, "10", 10);
void* a1068310945 = encode_mpz(mpzvar12313);
mpz_t* mpzvar12314 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12314, "3", 10);
void* a1068410946 = encode_mpz(mpzvar12314);
mpz_t* mpzvar12315 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12315, "4", 10);
void* a1068510947 = encode_mpz(mpzvar12315);
mpz_t* mpzvar12316 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12316, "3", 10);
void* a1068610948 = encode_mpz(mpzvar12316);

//creating new closure instance
void** clo12318 = alloc_clo(lam11101_fptr, 4);

//setting env list
clo12318[1] = kont10786;
clo12318[2] = a1068410946;
clo12318[3] = a1068310945;
clo12318[4] = _u43;
void* f1078710949 = encode_clo(clo12318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f1078710949;
arg_buffer[3] = a1068510947;
arg_buffer[4] = a1068610948;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam11108_fptr() // lam11108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env11109 = arg_buffer[1];
//reading env and args
void* x1068810952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10788 = (decode_clo(env11109))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10788);
arg_buffer[2] = x1068810952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10788))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam11108 = encode_clo(alloc_clo(lam11108_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _11110 = arg_buffer[1];
//reading env and args
void* kont10788 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo12320 = alloc_clo(lam11108_fptr, 1);

//setting env list
clo12320[1] = kont10788;
void* f1078910951 = encode_clo(clo12320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1078910951;
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

