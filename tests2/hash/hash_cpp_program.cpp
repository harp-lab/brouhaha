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
void* _44960 = arg_buffer[1];
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

void* kont4469944799 = prim_car(lst);
void* lst44800 = prim_cdr(lst);
void* x4461144801 = apply_prim__u43(lst44800);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4469944799);
arg_buffer[2] = x4461144801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4469944799))[0]);
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
void* _44961 = arg_buffer[1];
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

void* kont4470144802 = prim_car(lst);
void* lst44803 = prim_cdr(lst);
void* x4461244804 = apply_prim__u45(lst44803);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4470144802);
arg_buffer[2] = x4461244804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4470144802))[0]);
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
void* _44962 = arg_buffer[1];
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

void* kont4470344805 = prim_car(lst);
void* lst44806 = prim_cdr(lst);
void* x4461344807 = apply_prim__u42(lst44806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4470344805);
arg_buffer[2] = x4461344807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4470344805))[0]);
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
void* _44963 = arg_buffer[1];
//reading env and args
void* kont44705 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4461444808 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44705);
arg_buffer[2] = x4461444808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44705))[0]);
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
void* _44964 = arg_buffer[1];
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

void* kont4470644809 = prim_car(lst);
void* lst44810 = prim_cdr(lst);
void* x4461544811 = apply_prim__u47(lst44810);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4470644809);
arg_buffer[2] = x4461544811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4470644809))[0]);
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
void* _44965 = arg_buffer[1];
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

void* kont4470844812 = prim_car(lst);
void* lst44813 = prim_cdr(lst);
void* x4461644814 = apply_prim__u61(lst44813);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4470844812);
arg_buffer[2] = x4461644814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4470844812))[0]);
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
void* _44966 = arg_buffer[1];
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

void* kont4471044815 = prim_car(lst);
void* lst44816 = prim_cdr(lst);
void* x4461744817 = apply_prim__u62(lst44816);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4471044815);
arg_buffer[2] = x4461744817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4471044815))[0]);
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
void* _44967 = arg_buffer[1];
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

void* kont4471244818 = prim_car(lst);
void* lst44819 = prim_cdr(lst);
void* x4461844820 = apply_prim__u60(lst44819);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4471244818);
arg_buffer[2] = x4461844820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4471244818))[0]);
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
void* _44968 = arg_buffer[1];
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

void* kont4471444821 = prim_car(lst);
void* lst44822 = prim_cdr(lst);
void* x4461944823 = apply_prim__u60_u61(lst44822);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4471444821);
arg_buffer[2] = x4461944823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4471444821))[0]);
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
void* _44969 = arg_buffer[1];
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

void* kont4471644824 = prim_car(lst);
void* lst44825 = prim_cdr(lst);
void* x4462044826 = apply_prim__u62_u61(lst44825);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4471644824);
arg_buffer[2] = x4462044826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4471644824))[0]);
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
void* _44970 = arg_buffer[1];
//reading env and args
void* kont44718 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4462144827 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44718);
arg_buffer[2] = x4462144827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44718))[0]);
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
void* _44971 = arg_buffer[1];
//reading env and args
void* kont44719 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4462244828 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44719);
arg_buffer[2] = x4462244828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44719))[0]);
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
void* _44972 = arg_buffer[1];
//reading env and args
void* kont44720 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4462344829 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44720);
arg_buffer[2] = x4462344829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44720))[0]);
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
void* _44973 = arg_buffer[1];
//reading env and args
void* kont44721 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4462444830 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44721);
arg_buffer[2] = x4462444830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44721))[0]);
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
void* _44974 = arg_buffer[1];
//reading env and args
void* kont44722 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4462544831 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44722);
arg_buffer[2] = x4462544831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44722))[0]);
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
void* _44975 = arg_buffer[1];
//reading env and args
void* kont44723 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4462644832 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44723);
arg_buffer[2] = x4462644832;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44723))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam44976_fptr() // lam44976 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44977 = arg_buffer[1];
//reading env and args
void* a4462944836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44724 = (decode_clo(env44977))[3];
//not do dummy comment
void* a4462744833 = (decode_clo(env44977))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env44977))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont44724;
arg_buffer[3] = a4462744833;
arg_buffer[4] = a4462944836;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44976 = encode_clo(alloc_clo(lam44976_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44980 = arg_buffer[1];
//reading env and args
void* kont44724 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45656 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45656, "0", 10);
void* a4462744833 = encode_mpz(mpzvar45656);
mpz_t* mpzvar45657 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45657, "2", 10);
void* a4462844834 = encode_mpz(mpzvar45657);

//creating new closure instance
void** clo45659 = alloc_clo(lam44976_fptr, 3);

//setting env list
clo45659[1] = equal_u63;
clo45659[2] = a4462744833;
clo45659[3] = kont44724;
void* f4472544835 = encode_clo(clo45659);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4472544835;
arg_buffer[3] = x;
arg_buffer[4] = a4462844834;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam44981_fptr() // lam44981 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44982 = arg_buffer[1];
//reading env and args
void* a4463244840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env44982))[3];
//not do dummy comment
void* a4463044837 = (decode_clo(env44982))[2];
//not do dummy comment
void* kont44726 = (decode_clo(env44982))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont44726;
arg_buffer[3] = a4463044837;
arg_buffer[4] = a4463244840;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44981 = encode_clo(alloc_clo(lam44981_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44985 = arg_buffer[1];
//reading env and args
void* kont44726 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45660 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45660, "1", 10);
void* a4463044837 = encode_mpz(mpzvar45660);
mpz_t* mpzvar45661 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45661, "2", 10);
void* a4463144838 = encode_mpz(mpzvar45661);

//creating new closure instance
void** clo45663 = alloc_clo(lam44981_fptr, 3);

//setting env list
clo45663[1] = kont44726;
clo45663[2] = a4463044837;
clo45663[3] = equal_u63;
void* f4472744839 = encode_clo(clo45663);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4472744839;
arg_buffer[3] = x;
arg_buffer[4] = a4463144838;
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
void* _44986 = arg_buffer[1];
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

void* kont4472844841 = prim_car(x);
void* x44842 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4472844841);
arg_buffer[2] = x44842;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4472844841))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam44989_fptr() // lam44989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44990 = arg_buffer[1];
//reading env and args
void* a4463844852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44730 = (decode_clo(env44990))[3];
//not do dummy comment
void* x = (decode_clo(env44990))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44990))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont44730;
arg_buffer[3] = x;
arg_buffer[4] = a4463844852;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44989 = encode_clo(alloc_clo(lam44989_fptr, 0));

void* lam44991_fptr() // lam44991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44992 = arg_buffer[1];
//reading env and args
void* a4463644849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44992))[5];
//not do dummy comment
void* kont44730 = (decode_clo(env44992))[4];
//not do dummy comment
void* lst = (decode_clo(env44992))[3];
//not do dummy comment
void* x = (decode_clo(env44992))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44992))[1];

//if-clause
bool if_guard45664 = is_true(a4463644849);
if(if_guard45664)
{
void* x4463744850 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44730);
arg_buffer[2] = x4463744850;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44730))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45666 = alloc_clo(lam44989_fptr, 3);

//setting env list
clo45666[1] = member_u63;
clo45666[2] = x;
clo45666[3] = kont44730;
void* f4473144851 = encode_clo(clo45666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4473144851;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44991 = encode_clo(alloc_clo(lam44991_fptr, 0));

void* lam44993_fptr() // lam44993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44994 = arg_buffer[1];
//reading env and args
void* a4463544847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44994))[6];
//not do dummy comment
void* kont44730 = (decode_clo(env44994))[5];
//not do dummy comment
void* lst = (decode_clo(env44994))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env44994))[3];
//not do dummy comment
void* x = (decode_clo(env44994))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44994))[1];

//creating new closure instance
void** clo45668 = alloc_clo(lam44991_fptr, 5);

//setting env list
clo45668[1] = member_u63;
clo45668[2] = x;
clo45668[3] = lst;
clo45668[4] = kont44730;
clo45668[5] = cdr;
void* f4473244848 = encode_clo(clo45668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4473244848;
arg_buffer[3] = a4463544847;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44993 = encode_clo(alloc_clo(lam44993_fptr, 0));

void* lam44995_fptr() // lam44995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44996 = arg_buffer[1];
//reading env and args
void* a4463344844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44996))[7];
//not do dummy comment
void* kont44730 = (decode_clo(env44996))[6];
//not do dummy comment
void* lst = (decode_clo(env44996))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env44996))[4];
//not do dummy comment
void* x = (decode_clo(env44996))[3];
//not do dummy comment
void* car = (decode_clo(env44996))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44996))[1];

//if-clause
bool if_guard45669 = is_true(a4463344844);
if(if_guard45669)
{
void* x4463444845 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44730);
arg_buffer[2] = x4463444845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44730))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45671 = alloc_clo(lam44993_fptr, 6);

//setting env list
clo45671[1] = member_u63;
clo45671[2] = x;
clo45671[3] = equal_u63;
clo45671[4] = lst;
clo45671[5] = kont44730;
clo45671[6] = cdr;
void* f4473344846 = encode_clo(clo45671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4473344846;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44995 = encode_clo(alloc_clo(lam44995_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44997 = arg_buffer[1];
//reading env and args
void* kont44730 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45673 = alloc_clo(lam44995_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo45673[1] = member_u63;
clo45673[2] = car;
clo45673[3] = x;
clo45673[4] = equal_u63;
clo45673[5] = lst;
clo45673[6] = kont44730;
clo45673[7] = cdr;
void* f4473444843 = encode_clo(clo45673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4473444843;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam44998_fptr() // lam44998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44999 = arg_buffer[1];
//reading env and args
void* a4464244860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4464144858 = (decode_clo(env44999))[4];
//not do dummy comment
void* kont44735 = (decode_clo(env44999))[3];
//not do dummy comment
void* fun = (decode_clo(env44999))[2];
//not do dummy comment
void* foldl = (decode_clo(env44999))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont44735;
arg_buffer[3] = fun;
arg_buffer[4] = a4464144858;
arg_buffer[5] = a4464244860;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44998 = encode_clo(alloc_clo(lam44998_fptr, 0));

void* lam45000_fptr() // lam45000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45001 = arg_buffer[1];
//reading env and args
void* a4464144858 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45001))[5];
//not do dummy comment
void* lst = (decode_clo(env45001))[4];
//not do dummy comment
void* kont44735 = (decode_clo(env45001))[3];
//not do dummy comment
void* fun = (decode_clo(env45001))[2];
//not do dummy comment
void* foldl = (decode_clo(env45001))[1];

//creating new closure instance
void** clo45675 = alloc_clo(lam44998_fptr, 4);

//setting env list
clo45675[1] = foldl;
clo45675[2] = fun;
clo45675[3] = kont44735;
clo45675[4] = a4464144858;
void* f4473644859 = encode_clo(clo45675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4473644859;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45000 = encode_clo(alloc_clo(lam45000_fptr, 0));

void* lam45002_fptr() // lam45002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45003 = arg_buffer[1];
//reading env and args
void* a4464044856 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45003))[6];
//not do dummy comment
void* lst = (decode_clo(env45003))[5];
//not do dummy comment
void* kont44735 = (decode_clo(env45003))[4];
//not do dummy comment
void* fun = (decode_clo(env45003))[3];
//not do dummy comment
void* acc = (decode_clo(env45003))[2];
//not do dummy comment
void* foldl = (decode_clo(env45003))[1];

//creating new closure instance
void** clo45677 = alloc_clo(lam45000_fptr, 5);

//setting env list
clo45677[1] = foldl;
clo45677[2] = fun;
clo45677[3] = kont44735;
clo45677[4] = lst;
clo45677[5] = cdr;
void* f4473744857 = encode_clo(clo45677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4473744857;
arg_buffer[3] = a4464044856;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45002 = encode_clo(alloc_clo(lam45002_fptr, 0));

void* lam45004_fptr() // lam45004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45005 = arg_buffer[1];
//reading env and args
void* a4463944854 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45005))[7];
//not do dummy comment
void* lst = (decode_clo(env45005))[6];
//not do dummy comment
void* kont44735 = (decode_clo(env45005))[5];
//not do dummy comment
void* fun = (decode_clo(env45005))[4];
//not do dummy comment
void* acc = (decode_clo(env45005))[3];
//not do dummy comment
void* car = (decode_clo(env45005))[2];
//not do dummy comment
void* foldl = (decode_clo(env45005))[1];

//if-clause
bool if_guard45678 = is_true(a4463944854);
if(if_guard45678)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44735);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44735))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45680 = alloc_clo(lam45002_fptr, 6);

//setting env list
clo45680[1] = foldl;
clo45680[2] = acc;
clo45680[3] = fun;
clo45680[4] = kont44735;
clo45680[5] = lst;
clo45680[6] = cdr;
void* f4473844855 = encode_clo(clo45680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4473844855;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45004 = encode_clo(alloc_clo(lam45004_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45006 = arg_buffer[1];
//reading env and args
void* kont44735 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45682 = alloc_clo(lam45004_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo45682[1] = foldl;
clo45682[2] = car;
clo45682[3] = acc;
clo45682[4] = fun;
clo45682[5] = kont44735;
clo45682[6] = lst;
clo45682[7] = cdr;
void* f4473944853 = encode_clo(clo45682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4473944853;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam45007_fptr() // lam45007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45008 = arg_buffer[1];
//reading env and args
void* a4464644868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44740 = (decode_clo(env45008))[3];
//not do dummy comment
void* a4464444864 = (decode_clo(env45008))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45008))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont44740;
arg_buffer[3] = a4464444864;
arg_buffer[4] = a4464644868;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45007 = encode_clo(alloc_clo(lam45007_fptr, 0));

void* lam45009_fptr() // lam45009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45010 = arg_buffer[1];
//reading env and args
void* a4464544866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44740 = (decode_clo(env45010))[5];
//not do dummy comment
void* lst2 = (decode_clo(env45010))[4];
//not do dummy comment
void* cons = (decode_clo(env45010))[3];
//not do dummy comment
void* a4464444864 = (decode_clo(env45010))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45010))[1];

//creating new closure instance
void** clo45684 = alloc_clo(lam45007_fptr, 3);

//setting env list
clo45684[1] = reverse_u45helper;
clo45684[2] = a4464444864;
clo45684[3] = kont44740;
void* f4474144867 = encode_clo(clo45684);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4474144867;
arg_buffer[3] = a4464544866;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45009 = encode_clo(alloc_clo(lam45009_fptr, 0));

void* lam45011_fptr() // lam45011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45012 = arg_buffer[1];
//reading env and args
void* a4464444864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45012))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45012))[5];
//not do dummy comment
void* kont44740 = (decode_clo(env45012))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45012))[3];
//not do dummy comment
void* car = (decode_clo(env45012))[2];
//not do dummy comment
void* cons = (decode_clo(env45012))[1];

//creating new closure instance
void** clo45686 = alloc_clo(lam45009_fptr, 5);

//setting env list
clo45686[1] = reverse_u45helper;
clo45686[2] = a4464444864;
clo45686[3] = cons;
clo45686[4] = lst2;
clo45686[5] = kont44740;
void* f4474244865 = encode_clo(clo45686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4474244865;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45011 = encode_clo(alloc_clo(lam45011_fptr, 0));

void* lam45013_fptr() // lam45013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45014 = arg_buffer[1];
//reading env and args
void* a4464344862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45014))[7];
//not do dummy comment
void* lst = (decode_clo(env45014))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45014))[5];
//not do dummy comment
void* kont44740 = (decode_clo(env45014))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45014))[3];
//not do dummy comment
void* car = (decode_clo(env45014))[2];
//not do dummy comment
void* cons = (decode_clo(env45014))[1];

//if-clause
bool if_guard45687 = is_true(a4464344862);
if(if_guard45687)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44740);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44740))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45689 = alloc_clo(lam45011_fptr, 6);

//setting env list
clo45689[1] = cons;
clo45689[2] = car;
clo45689[3] = lst2;
clo45689[4] = kont44740;
clo45689[5] = reverse_u45helper;
clo45689[6] = lst;
void* f4474344863 = encode_clo(clo45689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4474344863;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45013 = encode_clo(alloc_clo(lam45013_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45015 = arg_buffer[1];
//reading env and args
void* kont44740 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45691 = alloc_clo(lam45013_fptr, 7);

//setting env list
clo45691[1] = cons;
clo45691[2] = car;
clo45691[3] = lst2;
clo45691[4] = kont44740;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo45691[5] = reverse_u45helper;
clo45691[6] = lst;
clo45691[7] = cdr;
void* f4474444861 = encode_clo(clo45691);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4474444861;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam45016_fptr() // lam45016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45017 = arg_buffer[1];
//reading env and args
void* a4464744870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44745 = (decode_clo(env45017))[3];
//not do dummy comment
void* lst = (decode_clo(env45017))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45017))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont44745;
arg_buffer[3] = lst;
arg_buffer[4] = a4464744870;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45016 = encode_clo(alloc_clo(lam45016_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45018 = arg_buffer[1];
//reading env and args
void* kont44745 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45693 = alloc_clo(lam45016_fptr, 3);

//setting env list
clo45693[1] = reverse_u45helper;
clo45693[2] = lst;
clo45693[3] = kont44745;
void* f4474644869 = encode_clo(clo45693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4474644869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam45019_fptr() // lam45019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45020 = arg_buffer[1];
//reading env and args
void* x4465044875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44747 = (decode_clo(env45020))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44747);
arg_buffer[2] = x4465044875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44747))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45019 = encode_clo(alloc_clo(lam45019_fptr, 0));

void* lam45021_fptr() // lam45021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45022 = arg_buffer[1];
//reading env and args
void* a4465544884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44747 = (decode_clo(env45022))[4];
//not do dummy comment
void* a4465144877 = (decode_clo(env45022))[3];
//not do dummy comment
void* a4465344880 = (decode_clo(env45022))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env45022))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont44747;
arg_buffer[3] = a4465144877;
arg_buffer[4] = a4465344880;
arg_buffer[5] = a4465544884;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45021 = encode_clo(alloc_clo(lam45021_fptr, 0));

void* lam45023_fptr() // lam45023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45024 = arg_buffer[1];
//reading env and args
void* a4465444882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44747 = (decode_clo(env45024))[6];
//not do dummy comment
void* a4465144877 = (decode_clo(env45024))[5];
//not do dummy comment
void* a4465344880 = (decode_clo(env45024))[4];
//not do dummy comment
void* cons = (decode_clo(env45024))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45024))[2];
//not do dummy comment
void* lst2 = (decode_clo(env45024))[1];

//creating new closure instance
void** clo45695 = alloc_clo(lam45021_fptr, 4);

//setting env list
clo45695[1] = take_u45helper;
clo45695[2] = a4465344880;
clo45695[3] = a4465144877;
clo45695[4] = kont44747;
void* f4474944883 = encode_clo(clo45695);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4474944883;
arg_buffer[3] = a4465444882;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45023 = encode_clo(alloc_clo(lam45023_fptr, 0));

void* lam45025_fptr() // lam45025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45026 = arg_buffer[1];
//reading env and args
void* a4465344880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44747 = (decode_clo(env45026))[7];
//not do dummy comment
void* car = (decode_clo(env45026))[6];
//not do dummy comment
void* cons = (decode_clo(env45026))[5];
//not do dummy comment
void* a4465144877 = (decode_clo(env45026))[4];
//not do dummy comment
void* lst = (decode_clo(env45026))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45026))[2];
//not do dummy comment
void* lst2 = (decode_clo(env45026))[1];

//creating new closure instance
void** clo45697 = alloc_clo(lam45023_fptr, 6);

//setting env list
clo45697[1] = lst2;
clo45697[2] = take_u45helper;
clo45697[3] = cons;
clo45697[4] = a4465344880;
clo45697[5] = a4465144877;
clo45697[6] = kont44747;
void* f4475044881 = encode_clo(clo45697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4475044881;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45025 = encode_clo(alloc_clo(lam45025_fptr, 0));

void* lam45028_fptr() // lam45028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45029 = arg_buffer[1];
//reading env and args
void* a4465144877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44747 = (decode_clo(env45029))[8];
//not do dummy comment
void* lst = (decode_clo(env45029))[7];
//not do dummy comment
void* cons = (decode_clo(env45029))[6];
//not do dummy comment
void* _u45 = (decode_clo(env45029))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env45029))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45029))[3];
//not do dummy comment
void* n = (decode_clo(env45029))[2];
//not do dummy comment
void* car = (decode_clo(env45029))[1];
mpz_t* mpzvar45698 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45698, "1", 10);
void* a4465244878 = encode_mpz(mpzvar45698);

//creating new closure instance
void** clo45700 = alloc_clo(lam45025_fptr, 7);

//setting env list
clo45700[1] = lst2;
clo45700[2] = take_u45helper;
clo45700[3] = lst;
clo45700[4] = a4465144877;
clo45700[5] = cons;
clo45700[6] = car;
clo45700[7] = kont44747;
void* f4475144879 = encode_clo(clo45700);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4475144879;
arg_buffer[3] = n;
arg_buffer[4] = a4465244878;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45028 = encode_clo(alloc_clo(lam45028_fptr, 0));

void* lam45030_fptr() // lam45030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45031 = arg_buffer[1];
//reading env and args
void* a4464944873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45031))[10];
//not do dummy comment
void* kont44747 = (decode_clo(env45031))[9];
//not do dummy comment
void* lst = (decode_clo(env45031))[8];
//not do dummy comment
void* reverse = (decode_clo(env45031))[7];
//not do dummy comment
void* cons = (decode_clo(env45031))[6];
//not do dummy comment
void* _u45 = (decode_clo(env45031))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env45031))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45031))[3];
//not do dummy comment
void* n = (decode_clo(env45031))[2];
//not do dummy comment
void* car = (decode_clo(env45031))[1];

//if-clause
bool if_guard45701 = is_true(a4464944873);
if(if_guard45701)
{

//creating new closure instance
void** clo45703 = alloc_clo(lam45019_fptr, 1);

//setting env list
clo45703[1] = kont44747;
void* f4474844874 = encode_clo(clo45703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4474844874;
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
void** clo45705 = alloc_clo(lam45028_fptr, 8);

//setting env list
clo45705[1] = car;
clo45705[2] = n;
clo45705[3] = lst2;
clo45705[4] = take_u45helper;
clo45705[5] = _u45;
clo45705[6] = cons;
clo45705[7] = lst;
clo45705[8] = kont44747;
void* f4475244876 = encode_clo(clo45705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4475244876;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45030 = encode_clo(alloc_clo(lam45030_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45033 = arg_buffer[1];
//reading env and args
void* kont44747 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar45706 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45706, "0", 10);
void* a4464844871 = encode_mpz(mpzvar45706);

//creating new closure instance
void** clo45708 = alloc_clo(lam45030_fptr, 10);

//setting env list
clo45708[1] = car;
clo45708[2] = n;
clo45708[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo45708[4] = take_u45helper;
clo45708[5] = _u45;
clo45708[6] = cons;
clo45708[7] = reverse;
clo45708[8] = lst;
clo45708[9] = kont44747;
clo45708[10] = cdr;
void* f4475344872 = encode_clo(clo45708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4475344872;
arg_buffer[3] = n;
arg_buffer[4] = a4464844871;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam45034_fptr() // lam45034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45035 = arg_buffer[1];
//reading env and args
void* a4465644886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45035))[4];
//not do dummy comment
void* kont44754 = (decode_clo(env45035))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45035))[2];
//not do dummy comment
void* n = (decode_clo(env45035))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont44754;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4465644886;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45034 = encode_clo(alloc_clo(lam45034_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45036 = arg_buffer[1];
//reading env and args
void* kont44754 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45710 = alloc_clo(lam45034_fptr, 4);

//setting env list
clo45710[1] = n;
clo45710[2] = take_u45helper;
clo45710[3] = kont44754;
clo45710[4] = lst;
void* f4475544885 = encode_clo(clo45710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4475544885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam45038_fptr() // lam45038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45039 = arg_buffer[1];
//reading env and args
void* a4466144894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4465944890 = (decode_clo(env45039))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45039))[2];
//not do dummy comment
void* kont44756 = (decode_clo(env45039))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont44756;
arg_buffer[3] = a4465944890;
arg_buffer[4] = a4466144894;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45038 = encode_clo(alloc_clo(lam45038_fptr, 0));

void* lam45040_fptr() // lam45040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45041 = arg_buffer[1];
//reading env and args
void* a4466044892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4465944890 = (decode_clo(env45041))[4];
//not do dummy comment
void* length = (decode_clo(env45041))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45041))[2];
//not do dummy comment
void* kont44756 = (decode_clo(env45041))[1];

//creating new closure instance
void** clo45712 = alloc_clo(lam45038_fptr, 3);

//setting env list
clo45712[1] = kont44756;
clo45712[2] = _u43;
clo45712[3] = a4465944890;
void* f4475744893 = encode_clo(clo45712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4475744893;
arg_buffer[3] = a4466044892;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45040 = encode_clo(alloc_clo(lam45040_fptr, 0));

void* lam45043_fptr() // lam45043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45044 = arg_buffer[1];
//reading env and args
void* a4465744888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45044))[5];
//not do dummy comment
void* lst = (decode_clo(env45044))[4];
//not do dummy comment
void* length = (decode_clo(env45044))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45044))[2];
//not do dummy comment
void* kont44756 = (decode_clo(env45044))[1];

//if-clause
bool if_guard45713 = is_true(a4465744888);
if(if_guard45713)
{
mpz_t* mpzvar45714 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45714, "0", 10);
void* x4465844889 = encode_mpz(mpzvar45714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44756);
arg_buffer[2] = x4465844889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44756))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar45715 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45715, "1", 10);
void* a4465944890 = encode_mpz(mpzvar45715);

//creating new closure instance
void** clo45717 = alloc_clo(lam45040_fptr, 4);

//setting env list
clo45717[1] = kont44756;
clo45717[2] = _u43;
clo45717[3] = length;
clo45717[4] = a4465944890;
void* f4475844891 = encode_clo(clo45717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4475844891;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45043 = encode_clo(alloc_clo(lam45043_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45045 = arg_buffer[1];
//reading env and args
void* kont44756 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45719 = alloc_clo(lam45043_fptr, 5);

//setting env list
clo45719[1] = kont44756;
clo45719[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo45719[3] = length;
clo45719[4] = lst;
clo45719[5] = cdr;
void* f4475944887 = encode_clo(clo45719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4475944887;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam45046_fptr() // lam45046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45047 = arg_buffer[1];
//reading env and args
void* x4466344898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44760 = (decode_clo(env45047))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44760);
arg_buffer[2] = x4466344898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44760))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45046 = encode_clo(alloc_clo(lam45046_fptr, 0));

void* lam45048_fptr() // lam45048 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45049 = arg_buffer[1];
//reading env and args
void* a4466744906 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4466544902 = (decode_clo(env45049))[3];
//not do dummy comment
void* cons = (decode_clo(env45049))[2];
//not do dummy comment
void* kont44760 = (decode_clo(env45049))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44760;
arg_buffer[3] = a4466544902;
arg_buffer[4] = a4466744906;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45048 = encode_clo(alloc_clo(lam45048_fptr, 0));

void* lam45050_fptr() // lam45050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45051 = arg_buffer[1];
//reading env and args
void* a4466644904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env45051))[5];
//not do dummy comment
void* proc = (decode_clo(env45051))[4];
//not do dummy comment
void* a4466544902 = (decode_clo(env45051))[3];
//not do dummy comment
void* cons = (decode_clo(env45051))[2];
//not do dummy comment
void* kont44760 = (decode_clo(env45051))[1];

//creating new closure instance
void** clo45721 = alloc_clo(lam45048_fptr, 3);

//setting env list
clo45721[1] = kont44760;
clo45721[2] = cons;
clo45721[3] = a4466544902;
void* f4476244905 = encode_clo(clo45721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4476244905;
arg_buffer[3] = proc;
arg_buffer[4] = a4466644904;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45050 = encode_clo(alloc_clo(lam45050_fptr, 0));

void* lam45052_fptr() // lam45052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45053 = arg_buffer[1];
//reading env and args
void* a4466544902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45053))[6];
//not do dummy comment
void* lst = (decode_clo(env45053))[5];
//not do dummy comment
void* map = (decode_clo(env45053))[4];
//not do dummy comment
void* proc = (decode_clo(env45053))[3];
//not do dummy comment
void* cons = (decode_clo(env45053))[2];
//not do dummy comment
void* kont44760 = (decode_clo(env45053))[1];

//creating new closure instance
void** clo45723 = alloc_clo(lam45050_fptr, 5);

//setting env list
clo45723[1] = kont44760;
clo45723[2] = cons;
clo45723[3] = a4466544902;
clo45723[4] = proc;
clo45723[5] = map;
void* f4476344903 = encode_clo(clo45723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4476344903;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45052 = encode_clo(alloc_clo(lam45052_fptr, 0));

void* lam45054_fptr() // lam45054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45055 = arg_buffer[1];
//reading env and args
void* a4466444900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45055))[6];
//not do dummy comment
void* lst = (decode_clo(env45055))[5];
//not do dummy comment
void* map = (decode_clo(env45055))[4];
//not do dummy comment
void* proc = (decode_clo(env45055))[3];
//not do dummy comment
void* cons = (decode_clo(env45055))[2];
//not do dummy comment
void* kont44760 = (decode_clo(env45055))[1];

//creating new closure instance
void** clo45725 = alloc_clo(lam45052_fptr, 6);

//setting env list
clo45725[1] = kont44760;
clo45725[2] = cons;
clo45725[3] = proc;
clo45725[4] = map;
clo45725[5] = lst;
clo45725[6] = cdr;
void* f4476444901 = encode_clo(clo45725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4476444901;
arg_buffer[3] = a4466444900;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45054 = encode_clo(alloc_clo(lam45054_fptr, 0));

void* lam45056_fptr() // lam45056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45057 = arg_buffer[1];
//reading env and args
void* a4466244896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45057))[8];
//not do dummy comment
void* map = (decode_clo(env45057))[7];
//not do dummy comment
void* proc = (decode_clo(env45057))[6];
//not do dummy comment
void* car = (decode_clo(env45057))[5];
//not do dummy comment
void* cons = (decode_clo(env45057))[4];
//not do dummy comment
void* kont44760 = (decode_clo(env45057))[3];
//not do dummy comment
void* list = (decode_clo(env45057))[2];
//not do dummy comment
void* cdr = (decode_clo(env45057))[1];

//if-clause
bool if_guard45726 = is_true(a4466244896);
if(if_guard45726)
{

//creating new closure instance
void** clo45728 = alloc_clo(lam45046_fptr, 1);

//setting env list
clo45728[1] = kont44760;
void* f4476144897 = encode_clo(clo45728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4476144897;
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
void** clo45730 = alloc_clo(lam45054_fptr, 6);

//setting env list
clo45730[1] = kont44760;
clo45730[2] = cons;
clo45730[3] = proc;
clo45730[4] = map;
clo45730[5] = lst;
clo45730[6] = cdr;
void* f4476544899 = encode_clo(clo45730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4476544899;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45056 = encode_clo(alloc_clo(lam45056_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45058 = arg_buffer[1];
//reading env and args
void* kont44760 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45732 = alloc_clo(lam45056_fptr, 8);

//setting env list
clo45732[1] = cdr;
clo45732[2] = list;
clo45732[3] = kont44760;
clo45732[4] = cons;
clo45732[5] = car;
clo45732[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo45732[7] = map;
clo45732[8] = lst;
void* f4476644895 = encode_clo(clo45732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4476644895;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam45059_fptr() // lam45059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45060 = arg_buffer[1];
//reading env and args
void* x4466944910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44767 = (decode_clo(env45060))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44767);
arg_buffer[2] = x4466944910;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44767))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45059 = encode_clo(alloc_clo(lam45059_fptr, 0));

void* lam45061_fptr() // lam45061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45062 = arg_buffer[1];
//reading env and args
void* a4467444920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44767 = (decode_clo(env45062))[3];
//not do dummy comment
void* a4467244916 = (decode_clo(env45062))[2];
//not do dummy comment
void* cons = (decode_clo(env45062))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44767;
arg_buffer[3] = a4467244916;
arg_buffer[4] = a4467444920;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45061 = encode_clo(alloc_clo(lam45061_fptr, 0));

void* lam45063_fptr() // lam45063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45064 = arg_buffer[1];
//reading env and args
void* a4467344918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44767 = (decode_clo(env45064))[5];
//not do dummy comment
void* op = (decode_clo(env45064))[4];
//not do dummy comment
void* a4467244916 = (decode_clo(env45064))[3];
//not do dummy comment
void* filter = (decode_clo(env45064))[2];
//not do dummy comment
void* cons = (decode_clo(env45064))[1];

//creating new closure instance
void** clo45734 = alloc_clo(lam45061_fptr, 3);

//setting env list
clo45734[1] = cons;
clo45734[2] = a4467244916;
clo45734[3] = kont44767;
void* f4476944919 = encode_clo(clo45734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4476944919;
arg_buffer[3] = op;
arg_buffer[4] = a4467344918;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45063 = encode_clo(alloc_clo(lam45063_fptr, 0));

void* lam45065_fptr() // lam45065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45066 = arg_buffer[1];
//reading env and args
void* a4467244916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45066))[6];
//not do dummy comment
void* lst = (decode_clo(env45066))[5];
//not do dummy comment
void* kont44767 = (decode_clo(env45066))[4];
//not do dummy comment
void* op = (decode_clo(env45066))[3];
//not do dummy comment
void* filter = (decode_clo(env45066))[2];
//not do dummy comment
void* cons = (decode_clo(env45066))[1];

//creating new closure instance
void** clo45736 = alloc_clo(lam45063_fptr, 5);

//setting env list
clo45736[1] = cons;
clo45736[2] = filter;
clo45736[3] = a4467244916;
clo45736[4] = op;
clo45736[5] = kont44767;
void* f4477044917 = encode_clo(clo45736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4477044917;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45065 = encode_clo(alloc_clo(lam45065_fptr, 0));

void* lam45067_fptr() // lam45067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45068 = arg_buffer[1];
//reading env and args
void* a4467544922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44767 = (decode_clo(env45068))[3];
//not do dummy comment
void* op = (decode_clo(env45068))[2];
//not do dummy comment
void* filter = (decode_clo(env45068))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont44767;
arg_buffer[3] = op;
arg_buffer[4] = a4467544922;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45067 = encode_clo(alloc_clo(lam45067_fptr, 0));

void* lam45069_fptr() // lam45069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45070 = arg_buffer[1];
//reading env and args
void* a4467144914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45070))[7];
//not do dummy comment
void* lst = (decode_clo(env45070))[6];
//not do dummy comment
void* kont44767 = (decode_clo(env45070))[5];
//not do dummy comment
void* op = (decode_clo(env45070))[4];
//not do dummy comment
void* cons = (decode_clo(env45070))[3];
//not do dummy comment
void* filter = (decode_clo(env45070))[2];
//not do dummy comment
void* car = (decode_clo(env45070))[1];

//if-clause
bool if_guard45737 = is_true(a4467144914);
if(if_guard45737)
{

//creating new closure instance
void** clo45739 = alloc_clo(lam45065_fptr, 6);

//setting env list
clo45739[1] = cons;
clo45739[2] = filter;
clo45739[3] = op;
clo45739[4] = kont44767;
clo45739[5] = lst;
clo45739[6] = cdr;
void* f4477144915 = encode_clo(clo45739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4477144915;
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
void** clo45741 = alloc_clo(lam45067_fptr, 3);

//setting env list
clo45741[1] = filter;
clo45741[2] = op;
clo45741[3] = kont44767;
void* f4477244921 = encode_clo(clo45741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4477244921;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45069 = encode_clo(alloc_clo(lam45069_fptr, 0));

void* lam45071_fptr() // lam45071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45072 = arg_buffer[1];
//reading env and args
void* a4467044912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45072))[7];
//not do dummy comment
void* lst = (decode_clo(env45072))[6];
//not do dummy comment
void* kont44767 = (decode_clo(env45072))[5];
//not do dummy comment
void* op = (decode_clo(env45072))[4];
//not do dummy comment
void* cons = (decode_clo(env45072))[3];
//not do dummy comment
void* filter = (decode_clo(env45072))[2];
//not do dummy comment
void* car = (decode_clo(env45072))[1];

//creating new closure instance
void** clo45743 = alloc_clo(lam45069_fptr, 7);

//setting env list
clo45743[1] = car;
clo45743[2] = filter;
clo45743[3] = cons;
clo45743[4] = op;
clo45743[5] = kont44767;
clo45743[6] = lst;
clo45743[7] = cdr;
void* f4477344913 = encode_clo(clo45743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4477344913;
arg_buffer[3] = a4467044912;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45071 = encode_clo(alloc_clo(lam45071_fptr, 0));

void* lam45073_fptr() // lam45073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45074 = arg_buffer[1];
//reading env and args
void* a4466844908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45074))[8];
//not do dummy comment
void* kont44767 = (decode_clo(env45074))[7];
//not do dummy comment
void* op = (decode_clo(env45074))[6];
//not do dummy comment
void* cons = (decode_clo(env45074))[5];
//not do dummy comment
void* list = (decode_clo(env45074))[4];
//not do dummy comment
void* cdr = (decode_clo(env45074))[3];
//not do dummy comment
void* filter = (decode_clo(env45074))[2];
//not do dummy comment
void* car = (decode_clo(env45074))[1];

//if-clause
bool if_guard45744 = is_true(a4466844908);
if(if_guard45744)
{

//creating new closure instance
void** clo45746 = alloc_clo(lam45059_fptr, 1);

//setting env list
clo45746[1] = kont44767;
void* f4476844909 = encode_clo(clo45746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4476844909;
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
void** clo45748 = alloc_clo(lam45071_fptr, 7);

//setting env list
clo45748[1] = car;
clo45748[2] = filter;
clo45748[3] = cons;
clo45748[4] = op;
clo45748[5] = kont44767;
clo45748[6] = lst;
clo45748[7] = cdr;
void* f4477444911 = encode_clo(clo45748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4477444911;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45073 = encode_clo(alloc_clo(lam45073_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45075 = arg_buffer[1];
//reading env and args
void* kont44767 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45750 = alloc_clo(lam45073_fptr, 8);

//setting env list
clo45750[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo45750[2] = filter;
clo45750[3] = cdr;
clo45750[4] = list;
clo45750[5] = cons;
clo45750[6] = op;
clo45750[7] = kont44767;
clo45750[8] = lst;
void* f4477544907 = encode_clo(clo45750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4477544907;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam45076_fptr() // lam45076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45077 = arg_buffer[1];
//reading env and args
void* a4468044930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env45077))[3];
//not do dummy comment
void* a4467844927 = (decode_clo(env45077))[2];
//not do dummy comment
void* kont44776 = (decode_clo(env45077))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont44776;
arg_buffer[3] = a4467844927;
arg_buffer[4] = a4468044930;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45076 = encode_clo(alloc_clo(lam45076_fptr, 0));

void* lam45079_fptr() // lam45079 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45080 = arg_buffer[1];
//reading env and args
void* a4467844927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env45080))[4];
//not do dummy comment
void* n = (decode_clo(env45080))[3];
//not do dummy comment
void* kont44776 = (decode_clo(env45080))[2];
//not do dummy comment
void* _u45 = (decode_clo(env45080))[1];
mpz_t* mpzvar45751 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45751, "1", 10);
void* a4467944928 = encode_mpz(mpzvar45751);

//creating new closure instance
void** clo45753 = alloc_clo(lam45076_fptr, 3);

//setting env list
clo45753[1] = kont44776;
clo45753[2] = a4467844927;
clo45753[3] = drop;
void* f4477744929 = encode_clo(clo45753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4477744929;
arg_buffer[3] = n;
arg_buffer[4] = a4467944928;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45079 = encode_clo(alloc_clo(lam45079_fptr, 0));

void* lam45081_fptr() // lam45081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45082 = arg_buffer[1];
//reading env and args
void* a4467744925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45082))[6];
//not do dummy comment
void* n = (decode_clo(env45082))[5];
//not do dummy comment
void* lst = (decode_clo(env45082))[4];
//not do dummy comment
void* drop = (decode_clo(env45082))[3];
//not do dummy comment
void* kont44776 = (decode_clo(env45082))[2];
//not do dummy comment
void* _u45 = (decode_clo(env45082))[1];

//if-clause
bool if_guard45754 = is_true(a4467744925);
if(if_guard45754)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44776);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44776))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45756 = alloc_clo(lam45079_fptr, 4);

//setting env list
clo45756[1] = _u45;
clo45756[2] = kont44776;
clo45756[3] = n;
clo45756[4] = drop;
void* f4477844926 = encode_clo(clo45756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4477844926;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45081 = encode_clo(alloc_clo(lam45081_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45084 = arg_buffer[1];
//reading env and args
void* kont44776 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar45757 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45757, "0", 10);
void* a4467644923 = encode_mpz(mpzvar45757);

//creating new closure instance
void** clo45759 = alloc_clo(lam45081_fptr, 6);

//setting env list
clo45759[1] = _u45;
clo45759[2] = kont44776;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo45759[3] = drop;
clo45759[4] = lst;
clo45759[5] = n;
clo45759[6] = cdr;
void* f4477944924 = encode_clo(clo45759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4477944924;
arg_buffer[3] = n;
arg_buffer[4] = a4467644923;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam45085_fptr() // lam45085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45086 = arg_buffer[1];
//reading env and args
void* a4468444938 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44780 = (decode_clo(env45086))[3];
//not do dummy comment
void* proc = (decode_clo(env45086))[2];
//not do dummy comment
void* a4468244934 = (decode_clo(env45086))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont44780;
arg_buffer[3] = a4468244934;
arg_buffer[4] = a4468444938;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45085 = encode_clo(alloc_clo(lam45085_fptr, 0));

void* lam45087_fptr() // lam45087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45088 = arg_buffer[1];
//reading env and args
void* a4468344936 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44780 = (decode_clo(env45088))[5];
//not do dummy comment
void* foldr = (decode_clo(env45088))[4];
//not do dummy comment
void* a4468244934 = (decode_clo(env45088))[3];
//not do dummy comment
void* proc = (decode_clo(env45088))[2];
//not do dummy comment
void* acc = (decode_clo(env45088))[1];

//creating new closure instance
void** clo45761 = alloc_clo(lam45085_fptr, 3);

//setting env list
clo45761[1] = a4468244934;
clo45761[2] = proc;
clo45761[3] = kont44780;
void* f4478144937 = encode_clo(clo45761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4478144937;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4468344936;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45087 = encode_clo(alloc_clo(lam45087_fptr, 0));

void* lam45089_fptr() // lam45089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45090 = arg_buffer[1];
//reading env and args
void* a4468244934 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45090))[6];
//not do dummy comment
void* kont44780 = (decode_clo(env45090))[5];
//not do dummy comment
void* foldr = (decode_clo(env45090))[4];
//not do dummy comment
void* lst = (decode_clo(env45090))[3];
//not do dummy comment
void* proc = (decode_clo(env45090))[2];
//not do dummy comment
void* acc = (decode_clo(env45090))[1];

//creating new closure instance
void** clo45763 = alloc_clo(lam45087_fptr, 5);

//setting env list
clo45763[1] = acc;
clo45763[2] = proc;
clo45763[3] = a4468244934;
clo45763[4] = foldr;
clo45763[5] = kont44780;
void* f4478244935 = encode_clo(clo45763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4478244935;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45089 = encode_clo(alloc_clo(lam45089_fptr, 0));

void* lam45091_fptr() // lam45091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45092 = arg_buffer[1];
//reading env and args
void* a4468144932 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45092))[7];
//not do dummy comment
void* kont44780 = (decode_clo(env45092))[6];
//not do dummy comment
void* car = (decode_clo(env45092))[5];
//not do dummy comment
void* foldr = (decode_clo(env45092))[4];
//not do dummy comment
void* lst = (decode_clo(env45092))[3];
//not do dummy comment
void* proc = (decode_clo(env45092))[2];
//not do dummy comment
void* acc = (decode_clo(env45092))[1];

//if-clause
bool if_guard45764 = is_true(a4468144932);
if(if_guard45764)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44780);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44780))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45766 = alloc_clo(lam45089_fptr, 6);

//setting env list
clo45766[1] = acc;
clo45766[2] = proc;
clo45766[3] = lst;
clo45766[4] = foldr;
clo45766[5] = kont44780;
clo45766[6] = cdr;
void* f4478344933 = encode_clo(clo45766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4478344933;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45091 = encode_clo(alloc_clo(lam45091_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45093 = arg_buffer[1];
//reading env and args
void* kont44780 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45768 = alloc_clo(lam45091_fptr, 7);

//setting env list
clo45768[1] = acc;
clo45768[2] = proc;
clo45768[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo45768[4] = foldr;
clo45768[5] = car;
clo45768[6] = kont44780;
clo45768[7] = cdr;
void* f4478444931 = encode_clo(clo45768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4478444931;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam45094_fptr() // lam45094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45095 = arg_buffer[1];
//reading env and args
void* a4468844946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4468644942 = (decode_clo(env45095))[3];
//not do dummy comment
void* kont44785 = (decode_clo(env45095))[2];
//not do dummy comment
void* cons = (decode_clo(env45095))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44785;
arg_buffer[3] = a4468644942;
arg_buffer[4] = a4468844946;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45094 = encode_clo(alloc_clo(lam45094_fptr, 0));

void* lam45096_fptr() // lam45096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45097 = arg_buffer[1];
//reading env and args
void* a4468744944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4468644942 = (decode_clo(env45097))[5];
//not do dummy comment
void* lst2 = (decode_clo(env45097))[4];
//not do dummy comment
void* cons = (decode_clo(env45097))[3];
//not do dummy comment
void* append = (decode_clo(env45097))[2];
//not do dummy comment
void* kont44785 = (decode_clo(env45097))[1];

//creating new closure instance
void** clo45770 = alloc_clo(lam45094_fptr, 3);

//setting env list
clo45770[1] = cons;
clo45770[2] = kont44785;
clo45770[3] = a4468644942;
void* f4478644945 = encode_clo(clo45770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4478644945;
arg_buffer[3] = a4468744944;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45096 = encode_clo(alloc_clo(lam45096_fptr, 0));

void* lam45098_fptr() // lam45098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45099 = arg_buffer[1];
//reading env and args
void* a4468644942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45099))[6];
//not do dummy comment
void* lst2 = (decode_clo(env45099))[5];
//not do dummy comment
void* lst1 = (decode_clo(env45099))[4];
//not do dummy comment
void* cons = (decode_clo(env45099))[3];
//not do dummy comment
void* append = (decode_clo(env45099))[2];
//not do dummy comment
void* kont44785 = (decode_clo(env45099))[1];

//creating new closure instance
void** clo45772 = alloc_clo(lam45096_fptr, 5);

//setting env list
clo45772[1] = kont44785;
clo45772[2] = append;
clo45772[3] = cons;
clo45772[4] = lst2;
clo45772[5] = a4468644942;
void* f4478744943 = encode_clo(clo45772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4478744943;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45098 = encode_clo(alloc_clo(lam45098_fptr, 0));

void* lam45100_fptr() // lam45100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45101 = arg_buffer[1];
//reading env and args
void* a4468544940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45101))[7];
//not do dummy comment
void* lst2 = (decode_clo(env45101))[6];
//not do dummy comment
void* cons = (decode_clo(env45101))[5];
//not do dummy comment
void* append = (decode_clo(env45101))[4];
//not do dummy comment
void* kont44785 = (decode_clo(env45101))[3];
//not do dummy comment
void* lst1 = (decode_clo(env45101))[2];
//not do dummy comment
void* car = (decode_clo(env45101))[1];

//if-clause
bool if_guard45773 = is_true(a4468544940);
if(if_guard45773)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44785);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44785))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45775 = alloc_clo(lam45098_fptr, 6);

//setting env list
clo45775[1] = kont44785;
clo45775[2] = append;
clo45775[3] = cons;
clo45775[4] = lst1;
clo45775[5] = lst2;
clo45775[6] = cdr;
void* f4478844941 = encode_clo(clo45775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4478844941;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45100 = encode_clo(alloc_clo(lam45100_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45102 = arg_buffer[1];
//reading env and args
void* kont44785 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45777 = alloc_clo(lam45100_fptr, 7);

//setting env list
clo45777[1] = car;
clo45777[2] = lst1;
clo45777[3] = kont44785;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo45777[4] = append;
clo45777[5] = cons;
clo45777[6] = lst2;
clo45777[7] = cdr;
void* f4478944939 = encode_clo(clo45777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4478944939;
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
void* _45103 = arg_buffer[1];
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

void* kont4479044947 = prim_car(lst);
void* lst44948 = prim_cdr(lst);
void* x4468944949 = apply_prim_hash(lst44948);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4479044947);
arg_buffer[2] = x4468944949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4479044947))[0]);
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
void* _45104 = arg_buffer[1];
//reading env and args
void* kont44792 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4469044950 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44792);
arg_buffer[2] = x4469044950;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44792))[0]);
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
void* _45105 = arg_buffer[1];
//reading env and args
void* kont44793 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4469144951 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44793);
arg_buffer[2] = x4469144951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44793))[0]);
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
void* _45106 = arg_buffer[1];
//reading env and args
void* kont44794 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4469244952 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44794);
arg_buffer[2] = x4469244952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44794))[0]);
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
void* _45107 = arg_buffer[1];
//reading env and args
void* kont44795 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4469344953 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44795);
arg_buffer[2] = x4469344953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44795))[0]);
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
void* _45112 = arg_buffer[1];
//reading env and args
void* kont44796 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar45778 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45778, "100", 10);
void* a4469444954 = encode_mpz(mpzvar45778);
mpz_t* mpzvar45779 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45779, "80", 10);
void* a4469544955 = encode_mpz(mpzvar45779);
mpz_t* mpzvar45780 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45780, "10", 10);
void* a4469644956 = encode_mpz(mpzvar45780);
mpz_t* mpzvar45781 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45781, "2", 10);
void* a4469744957 = encode_mpz(mpzvar45781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = kont44796;
arg_buffer[3] = a4469444954;
arg_buffer[4] = a4469544955;
arg_buffer[5] = a4469644956;
arg_buffer[6] = a4469744957;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam45113_fptr() // lam45113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45114 = arg_buffer[1];
//reading env and args
void* x4469844959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44797 = (decode_clo(env45114))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44797);
arg_buffer[2] = x4469844959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44797))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45113 = encode_clo(alloc_clo(lam45113_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45115 = arg_buffer[1];
//reading env and args
void* kont44797 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo45783 = alloc_clo(lam45113_fptr, 1);

//setting env list
clo45783[1] = kont44797;
void* f4479844958 = encode_clo(clo45783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4479844958;
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

