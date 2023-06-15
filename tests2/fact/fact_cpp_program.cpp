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
void* _13909 = arg_buffer[1];
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

void* kont1364213744 = prim_car(lst);
void* lst13745 = prim_cdr(lst);
void* x1355213746 = apply_prim__u43(lst13745);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1364213744);
arg_buffer[2] = x1355213746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1364213744))[0]);
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
void* _13910 = arg_buffer[1];
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

void* kont1364413747 = prim_car(lst);
void* lst13748 = prim_cdr(lst);
void* x1355313749 = apply_prim__u45(lst13748);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1364413747);
arg_buffer[2] = x1355313749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1364413747))[0]);
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
void* _13911 = arg_buffer[1];
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

void* kont1364613750 = prim_car(lst);
void* lst13751 = prim_cdr(lst);
void* x1355413752 = apply_prim__u42(lst13751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1364613750);
arg_buffer[2] = x1355413752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1364613750))[0]);
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
void* _13912 = arg_buffer[1];
//reading env and args
void* kont13648 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1355513753 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13648);
arg_buffer[2] = x1355513753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13648))[0]);
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
void* _13913 = arg_buffer[1];
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

void* kont1364913754 = prim_car(lst);
void* lst13755 = prim_cdr(lst);
void* x1355613756 = apply_prim__u47(lst13755);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1364913754);
arg_buffer[2] = x1355613756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1364913754))[0]);
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
void* _13914 = arg_buffer[1];
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

void* kont1365113757 = prim_car(lst);
void* lst13758 = prim_cdr(lst);
void* x1355713759 = apply_prim__u61(lst13758);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1365113757);
arg_buffer[2] = x1355713759;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1365113757))[0]);
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
void* _13915 = arg_buffer[1];
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

void* kont1365313760 = prim_car(lst);
void* lst13761 = prim_cdr(lst);
void* x1355813762 = apply_prim__u62(lst13761);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1365313760);
arg_buffer[2] = x1355813762;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1365313760))[0]);
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
void* _13916 = arg_buffer[1];
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

void* kont1365513763 = prim_car(lst);
void* lst13764 = prim_cdr(lst);
void* x1355913765 = apply_prim__u60(lst13764);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1365513763);
arg_buffer[2] = x1355913765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1365513763))[0]);
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
void* _13917 = arg_buffer[1];
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

void* kont1365713766 = prim_car(lst);
void* lst13767 = prim_cdr(lst);
void* x1356013768 = apply_prim__u60_u61(lst13767);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1365713766);
arg_buffer[2] = x1356013768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1365713766))[0]);
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
void* _13918 = arg_buffer[1];
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

void* kont1365913769 = prim_car(lst);
void* lst13770 = prim_cdr(lst);
void* x1356113771 = apply_prim__u62_u61(lst13770);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1365913769);
arg_buffer[2] = x1356113771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1365913769))[0]);
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
void* _13919 = arg_buffer[1];
//reading env and args
void* kont13661 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1356213772 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13661);
arg_buffer[2] = x1356213772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13661))[0]);
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
void* _13920 = arg_buffer[1];
//reading env and args
void* kont13662 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1356313773 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13662);
arg_buffer[2] = x1356313773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13662))[0]);
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
void* _13921 = arg_buffer[1];
//reading env and args
void* kont13663 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1356413774 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13663);
arg_buffer[2] = x1356413774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13663))[0]);
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
void* _13922 = arg_buffer[1];
//reading env and args
void* kont13664 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1356513775 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13664);
arg_buffer[2] = x1356513775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13664))[0]);
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
void* _13923 = arg_buffer[1];
//reading env and args
void* kont13665 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1356613776 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13665);
arg_buffer[2] = x1356613776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13665))[0]);
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
void* _13924 = arg_buffer[1];
//reading env and args
void* kont13666 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1356713777 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13666);
arg_buffer[2] = x1356713777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13666))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam13925_fptr() // lam13925 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13926 = arg_buffer[1];
//reading env and args
void* a1357013781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13667 = (decode_clo(env13926))[3];
//not do dummy comment
void* a1356813778 = (decode_clo(env13926))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env13926))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13667;
arg_buffer[3] = a1356813778;
arg_buffer[4] = a1357013781;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13925 = encode_clo(alloc_clo(lam13925_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13929 = arg_buffer[1];
//reading env and args
void* kont13667 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22709 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22709, "0", 10);
void* a1356813778 = encode_mpz(mpzvar22709);
mpz_t* mpzvar22710 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22710, "2", 10);
void* a1356913779 = encode_mpz(mpzvar22710);

//creating new closure instance
void** clo22712 = alloc_clo(lam13925_fptr, 3);

//setting env list
clo22712[1] = equal_u63;
clo22712[2] = a1356813778;
clo22712[3] = kont13667;
void* f1366813780 = encode_clo(clo22712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1366813780;
arg_buffer[3] = x;
arg_buffer[4] = a1356913779;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam13930_fptr() // lam13930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13931 = arg_buffer[1];
//reading env and args
void* a1357313785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env13931))[3];
//not do dummy comment
void* kont13669 = (decode_clo(env13931))[2];
//not do dummy comment
void* a1357113782 = (decode_clo(env13931))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13669;
arg_buffer[3] = a1357113782;
arg_buffer[4] = a1357313785;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13930 = encode_clo(alloc_clo(lam13930_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13934 = arg_buffer[1];
//reading env and args
void* kont13669 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22713 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22713, "1", 10);
void* a1357113782 = encode_mpz(mpzvar22713);
mpz_t* mpzvar22714 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22714, "2", 10);
void* a1357213783 = encode_mpz(mpzvar22714);

//creating new closure instance
void** clo22716 = alloc_clo(lam13930_fptr, 3);

//setting env list
clo22716[1] = a1357113782;
clo22716[2] = kont13669;
clo22716[3] = equal_u63;
void* f1367013784 = encode_clo(clo22716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1367013784;
arg_buffer[3] = x;
arg_buffer[4] = a1357213783;
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
void* _13935 = arg_buffer[1];
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

void* kont1367113786 = prim_car(x);
void* x13787 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1367113786);
arg_buffer[2] = x13787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1367113786))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam13938_fptr() // lam13938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13939 = arg_buffer[1];
//reading env and args
void* a1357913797 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env13939))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env13939))[2];
//not do dummy comment
void* kont13673 = (decode_clo(env13939))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont13673;
arg_buffer[3] = x;
arg_buffer[4] = a1357913797;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13938 = encode_clo(alloc_clo(lam13938_fptr, 0));

void* lam13940_fptr() // lam13940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13941 = arg_buffer[1];
//reading env and args
void* a1357713794 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13941))[5];
//not do dummy comment
void* lst = (decode_clo(env13941))[4];
//not do dummy comment
void* x = (decode_clo(env13941))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env13941))[2];
//not do dummy comment
void* kont13673 = (decode_clo(env13941))[1];

//if-clause
bool if_guard22717 = is_true(a1357713794);
if(if_guard22717)
{
void* x1357813795 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13673);
arg_buffer[2] = x1357813795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13673))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22719 = alloc_clo(lam13938_fptr, 3);

//setting env list
clo22719[1] = kont13673;
clo22719[2] = member_u63;
clo22719[3] = x;
void* f1367413796 = encode_clo(clo22719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1367413796;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13940 = encode_clo(alloc_clo(lam13940_fptr, 0));

void* lam13942_fptr() // lam13942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13943 = arg_buffer[1];
//reading env and args
void* a1357613792 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13943))[6];
//not do dummy comment
void* lst = (decode_clo(env13943))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env13943))[4];
//not do dummy comment
void* x = (decode_clo(env13943))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env13943))[2];
//not do dummy comment
void* kont13673 = (decode_clo(env13943))[1];

//creating new closure instance
void** clo22721 = alloc_clo(lam13940_fptr, 5);

//setting env list
clo22721[1] = kont13673;
clo22721[2] = member_u63;
clo22721[3] = x;
clo22721[4] = lst;
clo22721[5] = cdr;
void* f1367513793 = encode_clo(clo22721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1367513793;
arg_buffer[3] = a1357613792;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13942 = encode_clo(alloc_clo(lam13942_fptr, 0));

void* lam13944_fptr() // lam13944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13945 = arg_buffer[1];
//reading env and args
void* a1357413789 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13945))[7];
//not do dummy comment
void* lst = (decode_clo(env13945))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env13945))[5];
//not do dummy comment
void* x = (decode_clo(env13945))[4];
//not do dummy comment
void* car = (decode_clo(env13945))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env13945))[2];
//not do dummy comment
void* kont13673 = (decode_clo(env13945))[1];

//if-clause
bool if_guard22722 = is_true(a1357413789);
if(if_guard22722)
{
void* x1357513790 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13673);
arg_buffer[2] = x1357513790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13673))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22724 = alloc_clo(lam13942_fptr, 6);

//setting env list
clo22724[1] = kont13673;
clo22724[2] = member_u63;
clo22724[3] = x;
clo22724[4] = equal_u63;
clo22724[5] = lst;
clo22724[6] = cdr;
void* f1367613791 = encode_clo(clo22724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1367613791;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13944 = encode_clo(alloc_clo(lam13944_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13946 = arg_buffer[1];
//reading env and args
void* kont13673 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22726 = alloc_clo(lam13944_fptr, 7);

//setting env list
clo22726[1] = kont13673;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo22726[2] = member_u63;
clo22726[3] = car;
clo22726[4] = x;
clo22726[5] = equal_u63;
clo22726[6] = lst;
clo22726[7] = cdr;
void* f1367713788 = encode_clo(clo22726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1367713788;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam13947_fptr() // lam13947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13948 = arg_buffer[1];
//reading env and args
void* a1358313805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1358213803 = (decode_clo(env13948))[4];
//not do dummy comment
void* kont13678 = (decode_clo(env13948))[3];
//not do dummy comment
void* fun = (decode_clo(env13948))[2];
//not do dummy comment
void* foldl = (decode_clo(env13948))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont13678;
arg_buffer[3] = fun;
arg_buffer[4] = a1358213803;
arg_buffer[5] = a1358313805;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13947 = encode_clo(alloc_clo(lam13947_fptr, 0));

void* lam13949_fptr() // lam13949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13950 = arg_buffer[1];
//reading env and args
void* a1358213803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13950))[5];
//not do dummy comment
void* fun = (decode_clo(env13950))[4];
//not do dummy comment
void* foldl = (decode_clo(env13950))[3];
//not do dummy comment
void* lst = (decode_clo(env13950))[2];
//not do dummy comment
void* kont13678 = (decode_clo(env13950))[1];

//creating new closure instance
void** clo22728 = alloc_clo(lam13947_fptr, 4);

//setting env list
clo22728[1] = foldl;
clo22728[2] = fun;
clo22728[3] = kont13678;
clo22728[4] = a1358213803;
void* f1367913804 = encode_clo(clo22728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1367913804;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13949 = encode_clo(alloc_clo(lam13949_fptr, 0));

void* lam13951_fptr() // lam13951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13952 = arg_buffer[1];
//reading env and args
void* a1358113801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13952))[6];
//not do dummy comment
void* fun = (decode_clo(env13952))[5];
//not do dummy comment
void* acc = (decode_clo(env13952))[4];
//not do dummy comment
void* foldl = (decode_clo(env13952))[3];
//not do dummy comment
void* lst = (decode_clo(env13952))[2];
//not do dummy comment
void* kont13678 = (decode_clo(env13952))[1];

//creating new closure instance
void** clo22730 = alloc_clo(lam13949_fptr, 5);

//setting env list
clo22730[1] = kont13678;
clo22730[2] = lst;
clo22730[3] = foldl;
clo22730[4] = fun;
clo22730[5] = cdr;
void* f1368013802 = encode_clo(clo22730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1368013802;
arg_buffer[3] = a1358113801;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13951 = encode_clo(alloc_clo(lam13951_fptr, 0));

void* lam13953_fptr() // lam13953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13954 = arg_buffer[1];
//reading env and args
void* a1358013799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13954))[7];
//not do dummy comment
void* fun = (decode_clo(env13954))[6];
//not do dummy comment
void* acc = (decode_clo(env13954))[5];
//not do dummy comment
void* car = (decode_clo(env13954))[4];
//not do dummy comment
void* foldl = (decode_clo(env13954))[3];
//not do dummy comment
void* lst = (decode_clo(env13954))[2];
//not do dummy comment
void* kont13678 = (decode_clo(env13954))[1];

//if-clause
bool if_guard22731 = is_true(a1358013799);
if(if_guard22731)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13678);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13678))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22733 = alloc_clo(lam13951_fptr, 6);

//setting env list
clo22733[1] = kont13678;
clo22733[2] = lst;
clo22733[3] = foldl;
clo22733[4] = acc;
clo22733[5] = fun;
clo22733[6] = cdr;
void* f1368113800 = encode_clo(clo22733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1368113800;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13953 = encode_clo(alloc_clo(lam13953_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13955 = arg_buffer[1];
//reading env and args
void* kont13678 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo22735 = alloc_clo(lam13953_fptr, 7);

//setting env list
clo22735[1] = kont13678;
clo22735[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo22735[3] = foldl;
clo22735[4] = car;
clo22735[5] = acc;
clo22735[6] = fun;
clo22735[7] = cdr;
void* f1368213798 = encode_clo(clo22735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1368213798;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam13956_fptr() // lam13956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13957 = arg_buffer[1];
//reading env and args
void* a1358713813 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13683 = (decode_clo(env13957))[3];
//not do dummy comment
void* a1358513809 = (decode_clo(env13957))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13957))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont13683;
arg_buffer[3] = a1358513809;
arg_buffer[4] = a1358713813;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13956 = encode_clo(alloc_clo(lam13956_fptr, 0));

void* lam13958_fptr() // lam13958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13959 = arg_buffer[1];
//reading env and args
void* a1358613811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13683 = (decode_clo(env13959))[5];
//not do dummy comment
void* lst2 = (decode_clo(env13959))[4];
//not do dummy comment
void* cons = (decode_clo(env13959))[3];
//not do dummy comment
void* a1358513809 = (decode_clo(env13959))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13959))[1];

//creating new closure instance
void** clo22737 = alloc_clo(lam13956_fptr, 3);

//setting env list
clo22737[1] = reverse_u45helper;
clo22737[2] = a1358513809;
clo22737[3] = kont13683;
void* f1368413812 = encode_clo(clo22737);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1368413812;
arg_buffer[3] = a1358613811;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13958 = encode_clo(alloc_clo(lam13958_fptr, 0));

void* lam13960_fptr() // lam13960 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13961 = arg_buffer[1];
//reading env and args
void* a1358513809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13961))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13961))[5];
//not do dummy comment
void* kont13683 = (decode_clo(env13961))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13961))[3];
//not do dummy comment
void* car = (decode_clo(env13961))[2];
//not do dummy comment
void* cons = (decode_clo(env13961))[1];

//creating new closure instance
void** clo22739 = alloc_clo(lam13958_fptr, 5);

//setting env list
clo22739[1] = reverse_u45helper;
clo22739[2] = a1358513809;
clo22739[3] = cons;
clo22739[4] = lst2;
clo22739[5] = kont13683;
void* f1368513810 = encode_clo(clo22739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1368513810;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13960 = encode_clo(alloc_clo(lam13960_fptr, 0));

void* lam13962_fptr() // lam13962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13963 = arg_buffer[1];
//reading env and args
void* a1358413807 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13963))[7];
//not do dummy comment
void* lst = (decode_clo(env13963))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13963))[5];
//not do dummy comment
void* kont13683 = (decode_clo(env13963))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13963))[3];
//not do dummy comment
void* car = (decode_clo(env13963))[2];
//not do dummy comment
void* cons = (decode_clo(env13963))[1];

//if-clause
bool if_guard22740 = is_true(a1358413807);
if(if_guard22740)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13683);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13683))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22742 = alloc_clo(lam13960_fptr, 6);

//setting env list
clo22742[1] = cons;
clo22742[2] = car;
clo22742[3] = lst2;
clo22742[4] = kont13683;
clo22742[5] = reverse_u45helper;
clo22742[6] = lst;
void* f1368613808 = encode_clo(clo22742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1368613808;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13962 = encode_clo(alloc_clo(lam13962_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13964 = arg_buffer[1];
//reading env and args
void* kont13683 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22744 = alloc_clo(lam13962_fptr, 7);

//setting env list
clo22744[1] = cons;
clo22744[2] = car;
clo22744[3] = lst2;
clo22744[4] = kont13683;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo22744[5] = reverse_u45helper;
clo22744[6] = lst;
clo22744[7] = cdr;
void* f1368713806 = encode_clo(clo22744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1368713806;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam13965_fptr() // lam13965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13966 = arg_buffer[1];
//reading env and args
void* a1358813815 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13966))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13966))[2];
//not do dummy comment
void* kont13688 = (decode_clo(env13966))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont13688;
arg_buffer[3] = lst;
arg_buffer[4] = a1358813815;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13965 = encode_clo(alloc_clo(lam13965_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13967 = arg_buffer[1];
//reading env and args
void* kont13688 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo22746 = alloc_clo(lam13965_fptr, 3);

//setting env list
clo22746[1] = kont13688;
clo22746[2] = reverse_u45helper;
clo22746[3] = lst;
void* f1368913814 = encode_clo(clo22746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1368913814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam13968_fptr() // lam13968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13969 = arg_buffer[1];
//reading env and args
void* x1359113820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13690 = (decode_clo(env13969))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13690);
arg_buffer[2] = x1359113820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13690))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13968 = encode_clo(alloc_clo(lam13968_fptr, 0));

void* lam13970_fptr() // lam13970 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13971 = arg_buffer[1];
//reading env and args
void* a1359613829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13690 = (decode_clo(env13971))[4];
//not do dummy comment
void* a1359213822 = (decode_clo(env13971))[3];
//not do dummy comment
void* a1359413825 = (decode_clo(env13971))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env13971))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont13690;
arg_buffer[3] = a1359213822;
arg_buffer[4] = a1359413825;
arg_buffer[5] = a1359613829;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13970 = encode_clo(alloc_clo(lam13970_fptr, 0));

void* lam13972_fptr() // lam13972 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13973 = arg_buffer[1];
//reading env and args
void* a1359513827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13690 = (decode_clo(env13973))[6];
//not do dummy comment
void* a1359213822 = (decode_clo(env13973))[5];
//not do dummy comment
void* a1359413825 = (decode_clo(env13973))[4];
//not do dummy comment
void* cons = (decode_clo(env13973))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13973))[2];
//not do dummy comment
void* lst2 = (decode_clo(env13973))[1];

//creating new closure instance
void** clo22748 = alloc_clo(lam13970_fptr, 4);

//setting env list
clo22748[1] = take_u45helper;
clo22748[2] = a1359413825;
clo22748[3] = a1359213822;
clo22748[4] = kont13690;
void* f1369213828 = encode_clo(clo22748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1369213828;
arg_buffer[3] = a1359513827;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13972 = encode_clo(alloc_clo(lam13972_fptr, 0));

void* lam13974_fptr() // lam13974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13975 = arg_buffer[1];
//reading env and args
void* a1359413825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13690 = (decode_clo(env13975))[7];
//not do dummy comment
void* car = (decode_clo(env13975))[6];
//not do dummy comment
void* cons = (decode_clo(env13975))[5];
//not do dummy comment
void* lst = (decode_clo(env13975))[4];
//not do dummy comment
void* a1359213822 = (decode_clo(env13975))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13975))[2];
//not do dummy comment
void* lst2 = (decode_clo(env13975))[1];

//creating new closure instance
void** clo22750 = alloc_clo(lam13972_fptr, 6);

//setting env list
clo22750[1] = lst2;
clo22750[2] = take_u45helper;
clo22750[3] = cons;
clo22750[4] = a1359413825;
clo22750[5] = a1359213822;
clo22750[6] = kont13690;
void* f1369313826 = encode_clo(clo22750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1369313826;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13974 = encode_clo(alloc_clo(lam13974_fptr, 0));

void* lam13977_fptr() // lam13977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13978 = arg_buffer[1];
//reading env and args
void* a1359213822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13690 = (decode_clo(env13978))[8];
//not do dummy comment
void* lst = (decode_clo(env13978))[7];
//not do dummy comment
void* cons = (decode_clo(env13978))[6];
//not do dummy comment
void* _u45 = (decode_clo(env13978))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env13978))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13978))[3];
//not do dummy comment
void* n = (decode_clo(env13978))[2];
//not do dummy comment
void* car = (decode_clo(env13978))[1];
mpz_t* mpzvar22751 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22751, "1", 10);
void* a1359313823 = encode_mpz(mpzvar22751);

//creating new closure instance
void** clo22753 = alloc_clo(lam13974_fptr, 7);

//setting env list
clo22753[1] = lst2;
clo22753[2] = take_u45helper;
clo22753[3] = a1359213822;
clo22753[4] = lst;
clo22753[5] = cons;
clo22753[6] = car;
clo22753[7] = kont13690;
void* f1369413824 = encode_clo(clo22753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1369413824;
arg_buffer[3] = n;
arg_buffer[4] = a1359313823;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13977 = encode_clo(alloc_clo(lam13977_fptr, 0));

void* lam13979_fptr() // lam13979 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13980 = arg_buffer[1];
//reading env and args
void* a1359013818 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13980))[10];
//not do dummy comment
void* reverse = (decode_clo(env13980))[9];
//not do dummy comment
void* cons = (decode_clo(env13980))[8];
//not do dummy comment
void* _u45 = (decode_clo(env13980))[7];
//not do dummy comment
void* kont13690 = (decode_clo(env13980))[6];
//not do dummy comment
void* cdr = (decode_clo(env13980))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env13980))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13980))[3];
//not do dummy comment
void* n = (decode_clo(env13980))[2];
//not do dummy comment
void* car = (decode_clo(env13980))[1];

//if-clause
bool if_guard22754 = is_true(a1359013818);
if(if_guard22754)
{

//creating new closure instance
void** clo22756 = alloc_clo(lam13968_fptr, 1);

//setting env list
clo22756[1] = kont13690;
void* f1369113819 = encode_clo(clo22756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1369113819;
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
void** clo22758 = alloc_clo(lam13977_fptr, 8);

//setting env list
clo22758[1] = car;
clo22758[2] = n;
clo22758[3] = lst2;
clo22758[4] = take_u45helper;
clo22758[5] = _u45;
clo22758[6] = cons;
clo22758[7] = lst;
clo22758[8] = kont13690;
void* f1369513821 = encode_clo(clo22758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1369513821;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13979 = encode_clo(alloc_clo(lam13979_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13982 = arg_buffer[1];
//reading env and args
void* kont13690 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar22759 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22759, "0", 10);
void* a1358913816 = encode_mpz(mpzvar22759);

//creating new closure instance
void** clo22761 = alloc_clo(lam13979_fptr, 10);

//setting env list
clo22761[1] = car;
clo22761[2] = n;
clo22761[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo22761[4] = take_u45helper;
clo22761[5] = cdr;
clo22761[6] = kont13690;
clo22761[7] = _u45;
clo22761[8] = cons;
clo22761[9] = reverse;
clo22761[10] = lst;
void* f1369613817 = encode_clo(clo22761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1369613817;
arg_buffer[3] = n;
arg_buffer[4] = a1358913816;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam13983_fptr() // lam13983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13984 = arg_buffer[1];
//reading env and args
void* a1359713831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13984))[4];
//not do dummy comment
void* kont13697 = (decode_clo(env13984))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13984))[2];
//not do dummy comment
void* n = (decode_clo(env13984))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont13697;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1359713831;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13983 = encode_clo(alloc_clo(lam13983_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13985 = arg_buffer[1];
//reading env and args
void* kont13697 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22763 = alloc_clo(lam13983_fptr, 4);

//setting env list
clo22763[1] = n;
clo22763[2] = take_u45helper;
clo22763[3] = kont13697;
clo22763[4] = lst;
void* f1369813830 = encode_clo(clo22763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1369813830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam13987_fptr() // lam13987 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13988 = arg_buffer[1];
//reading env and args
void* a1360213839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1360013835 = (decode_clo(env13988))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13988))[2];
//not do dummy comment
void* kont13699 = (decode_clo(env13988))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont13699;
arg_buffer[3] = a1360013835;
arg_buffer[4] = a1360213839;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13987 = encode_clo(alloc_clo(lam13987_fptr, 0));

void* lam13989_fptr() // lam13989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13990 = arg_buffer[1];
//reading env and args
void* a1360113837 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1360013835 = (decode_clo(env13990))[4];
//not do dummy comment
void* length = (decode_clo(env13990))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13990))[2];
//not do dummy comment
void* kont13699 = (decode_clo(env13990))[1];

//creating new closure instance
void** clo22765 = alloc_clo(lam13987_fptr, 3);

//setting env list
clo22765[1] = kont13699;
clo22765[2] = _u43;
clo22765[3] = a1360013835;
void* f1370013838 = encode_clo(clo22765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1370013838;
arg_buffer[3] = a1360113837;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13989 = encode_clo(alloc_clo(lam13989_fptr, 0));

void* lam13992_fptr() // lam13992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13993 = arg_buffer[1];
//reading env and args
void* a1359813833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13993))[5];
//not do dummy comment
void* lst = (decode_clo(env13993))[4];
//not do dummy comment
void* length = (decode_clo(env13993))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13993))[2];
//not do dummy comment
void* kont13699 = (decode_clo(env13993))[1];

//if-clause
bool if_guard22766 = is_true(a1359813833);
if(if_guard22766)
{
mpz_t* mpzvar22767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22767, "0", 10);
void* x1359913834 = encode_mpz(mpzvar22767);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13699);
arg_buffer[2] = x1359913834;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13699))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar22768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22768, "1", 10);
void* a1360013835 = encode_mpz(mpzvar22768);

//creating new closure instance
void** clo22770 = alloc_clo(lam13989_fptr, 4);

//setting env list
clo22770[1] = kont13699;
clo22770[2] = _u43;
clo22770[3] = length;
clo22770[4] = a1360013835;
void* f1370113836 = encode_clo(clo22770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1370113836;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13992 = encode_clo(alloc_clo(lam13992_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13994 = arg_buffer[1];
//reading env and args
void* kont13699 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo22772 = alloc_clo(lam13992_fptr, 5);

//setting env list
clo22772[1] = kont13699;
clo22772[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo22772[3] = length;
clo22772[4] = lst;
clo22772[5] = cdr;
void* f1370213832 = encode_clo(clo22772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1370213832;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam13995_fptr() // lam13995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13996 = arg_buffer[1];
//reading env and args
void* x1360413843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13703 = (decode_clo(env13996))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13703);
arg_buffer[2] = x1360413843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13703))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13995 = encode_clo(alloc_clo(lam13995_fptr, 0));

void* lam13997_fptr() // lam13997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13998 = arg_buffer[1];
//reading env and args
void* a1360813851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env13998))[3];
//not do dummy comment
void* a1360613847 = (decode_clo(env13998))[2];
//not do dummy comment
void* kont13703 = (decode_clo(env13998))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13703;
arg_buffer[3] = a1360613847;
arg_buffer[4] = a1360813851;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13997 = encode_clo(alloc_clo(lam13997_fptr, 0));

void* lam13999_fptr() // lam13999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14000 = arg_buffer[1];
//reading env and args
void* a1360713849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env14000))[5];
//not do dummy comment
void* proc = (decode_clo(env14000))[4];
//not do dummy comment
void* cons = (decode_clo(env14000))[3];
//not do dummy comment
void* a1360613847 = (decode_clo(env14000))[2];
//not do dummy comment
void* kont13703 = (decode_clo(env14000))[1];

//creating new closure instance
void** clo22774 = alloc_clo(lam13997_fptr, 3);

//setting env list
clo22774[1] = kont13703;
clo22774[2] = a1360613847;
clo22774[3] = cons;
void* f1370513850 = encode_clo(clo22774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1370513850;
arg_buffer[3] = proc;
arg_buffer[4] = a1360713849;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13999 = encode_clo(alloc_clo(lam13999_fptr, 0));

void* lam14001_fptr() // lam14001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14002 = arg_buffer[1];
//reading env and args
void* a1360613847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14002))[6];
//not do dummy comment
void* lst = (decode_clo(env14002))[5];
//not do dummy comment
void* map = (decode_clo(env14002))[4];
//not do dummy comment
void* proc = (decode_clo(env14002))[3];
//not do dummy comment
void* kont13703 = (decode_clo(env14002))[2];
//not do dummy comment
void* cons = (decode_clo(env14002))[1];

//creating new closure instance
void** clo22776 = alloc_clo(lam13999_fptr, 5);

//setting env list
clo22776[1] = kont13703;
clo22776[2] = a1360613847;
clo22776[3] = cons;
clo22776[4] = proc;
clo22776[5] = map;
void* f1370613848 = encode_clo(clo22776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1370613848;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14001 = encode_clo(alloc_clo(lam14001_fptr, 0));

void* lam14003_fptr() // lam14003 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14004 = arg_buffer[1];
//reading env and args
void* a1360513845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14004))[6];
//not do dummy comment
void* lst = (decode_clo(env14004))[5];
//not do dummy comment
void* map = (decode_clo(env14004))[4];
//not do dummy comment
void* proc = (decode_clo(env14004))[3];
//not do dummy comment
void* kont13703 = (decode_clo(env14004))[2];
//not do dummy comment
void* cons = (decode_clo(env14004))[1];

//creating new closure instance
void** clo22778 = alloc_clo(lam14001_fptr, 6);

//setting env list
clo22778[1] = cons;
clo22778[2] = kont13703;
clo22778[3] = proc;
clo22778[4] = map;
clo22778[5] = lst;
clo22778[6] = cdr;
void* f1370713846 = encode_clo(clo22778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1370713846;
arg_buffer[3] = a1360513845;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14003 = encode_clo(alloc_clo(lam14003_fptr, 0));

void* lam14005_fptr() // lam14005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14006 = arg_buffer[1];
//reading env and args
void* a1360313841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env14006))[8];
//not do dummy comment
void* map = (decode_clo(env14006))[7];
//not do dummy comment
void* proc = (decode_clo(env14006))[6];
//not do dummy comment
void* cons = (decode_clo(env14006))[5];
//not do dummy comment
void* list = (decode_clo(env14006))[4];
//not do dummy comment
void* cdr = (decode_clo(env14006))[3];
//not do dummy comment
void* kont13703 = (decode_clo(env14006))[2];
//not do dummy comment
void* car = (decode_clo(env14006))[1];

//if-clause
bool if_guard22779 = is_true(a1360313841);
if(if_guard22779)
{

//creating new closure instance
void** clo22781 = alloc_clo(lam13995_fptr, 1);

//setting env list
clo22781[1] = kont13703;
void* f1370413842 = encode_clo(clo22781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1370413842;
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
void** clo22783 = alloc_clo(lam14003_fptr, 6);

//setting env list
clo22783[1] = cons;
clo22783[2] = kont13703;
clo22783[3] = proc;
clo22783[4] = map;
clo22783[5] = lst;
clo22783[6] = cdr;
void* f1370813844 = encode_clo(clo22783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1370813844;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14005 = encode_clo(alloc_clo(lam14005_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14007 = arg_buffer[1];
//reading env and args
void* kont13703 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22785 = alloc_clo(lam14005_fptr, 8);

//setting env list
clo22785[1] = car;
clo22785[2] = kont13703;
clo22785[3] = cdr;
clo22785[4] = list;
clo22785[5] = cons;
clo22785[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo22785[7] = map;
clo22785[8] = lst;
void* f1370913840 = encode_clo(clo22785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1370913840;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam14008_fptr() // lam14008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14009 = arg_buffer[1];
//reading env and args
void* x1361013855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13710 = (decode_clo(env14009))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13710);
arg_buffer[2] = x1361013855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13710))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14008 = encode_clo(alloc_clo(lam14008_fptr, 0));

void* lam14010_fptr() // lam14010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14011 = arg_buffer[1];
//reading env and args
void* a1361513865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13710 = (decode_clo(env14011))[3];
//not do dummy comment
void* a1361313861 = (decode_clo(env14011))[2];
//not do dummy comment
void* cons = (decode_clo(env14011))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13710;
arg_buffer[3] = a1361313861;
arg_buffer[4] = a1361513865;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14010 = encode_clo(alloc_clo(lam14010_fptr, 0));

void* lam14012_fptr() // lam14012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14013 = arg_buffer[1];
//reading env and args
void* a1361413863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13710 = (decode_clo(env14013))[5];
//not do dummy comment
void* op = (decode_clo(env14013))[4];
//not do dummy comment
void* a1361313861 = (decode_clo(env14013))[3];
//not do dummy comment
void* filter = (decode_clo(env14013))[2];
//not do dummy comment
void* cons = (decode_clo(env14013))[1];

//creating new closure instance
void** clo22787 = alloc_clo(lam14010_fptr, 3);

//setting env list
clo22787[1] = cons;
clo22787[2] = a1361313861;
clo22787[3] = kont13710;
void* f1371213864 = encode_clo(clo22787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1371213864;
arg_buffer[3] = op;
arg_buffer[4] = a1361413863;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14012 = encode_clo(alloc_clo(lam14012_fptr, 0));

void* lam14014_fptr() // lam14014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14015 = arg_buffer[1];
//reading env and args
void* a1361313861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14015))[6];
//not do dummy comment
void* op = (decode_clo(env14015))[5];
//not do dummy comment
void* filter = (decode_clo(env14015))[4];
//not do dummy comment
void* cons = (decode_clo(env14015))[3];
//not do dummy comment
void* lst = (decode_clo(env14015))[2];
//not do dummy comment
void* kont13710 = (decode_clo(env14015))[1];

//creating new closure instance
void** clo22789 = alloc_clo(lam14012_fptr, 5);

//setting env list
clo22789[1] = cons;
clo22789[2] = filter;
clo22789[3] = a1361313861;
clo22789[4] = op;
clo22789[5] = kont13710;
void* f1371313862 = encode_clo(clo22789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1371313862;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14014 = encode_clo(alloc_clo(lam14014_fptr, 0));

void* lam14016_fptr() // lam14016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14017 = arg_buffer[1];
//reading env and args
void* a1361613867 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13710 = (decode_clo(env14017))[3];
//not do dummy comment
void* op = (decode_clo(env14017))[2];
//not do dummy comment
void* filter = (decode_clo(env14017))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont13710;
arg_buffer[3] = op;
arg_buffer[4] = a1361613867;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14016 = encode_clo(alloc_clo(lam14016_fptr, 0));

void* lam14018_fptr() // lam14018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14019 = arg_buffer[1];
//reading env and args
void* a1361213859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14019))[7];
//not do dummy comment
void* op = (decode_clo(env14019))[6];
//not do dummy comment
void* cons = (decode_clo(env14019))[5];
//not do dummy comment
void* lst = (decode_clo(env14019))[4];
//not do dummy comment
void* kont13710 = (decode_clo(env14019))[3];
//not do dummy comment
void* filter = (decode_clo(env14019))[2];
//not do dummy comment
void* car = (decode_clo(env14019))[1];

//if-clause
bool if_guard22790 = is_true(a1361213859);
if(if_guard22790)
{

//creating new closure instance
void** clo22792 = alloc_clo(lam14014_fptr, 6);

//setting env list
clo22792[1] = kont13710;
clo22792[2] = lst;
clo22792[3] = cons;
clo22792[4] = filter;
clo22792[5] = op;
clo22792[6] = cdr;
void* f1371413860 = encode_clo(clo22792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1371413860;
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
void** clo22794 = alloc_clo(lam14016_fptr, 3);

//setting env list
clo22794[1] = filter;
clo22794[2] = op;
clo22794[3] = kont13710;
void* f1371513866 = encode_clo(clo22794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1371513866;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14018 = encode_clo(alloc_clo(lam14018_fptr, 0));

void* lam14020_fptr() // lam14020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14021 = arg_buffer[1];
//reading env and args
void* a1361113857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14021))[7];
//not do dummy comment
void* op = (decode_clo(env14021))[6];
//not do dummy comment
void* cons = (decode_clo(env14021))[5];
//not do dummy comment
void* lst = (decode_clo(env14021))[4];
//not do dummy comment
void* kont13710 = (decode_clo(env14021))[3];
//not do dummy comment
void* filter = (decode_clo(env14021))[2];
//not do dummy comment
void* car = (decode_clo(env14021))[1];

//creating new closure instance
void** clo22796 = alloc_clo(lam14018_fptr, 7);

//setting env list
clo22796[1] = car;
clo22796[2] = filter;
clo22796[3] = kont13710;
clo22796[4] = lst;
clo22796[5] = cons;
clo22796[6] = op;
clo22796[7] = cdr;
void* f1371613858 = encode_clo(clo22796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1371613858;
arg_buffer[3] = a1361113857;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14020 = encode_clo(alloc_clo(lam14020_fptr, 0));

void* lam14022_fptr() // lam14022 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14023 = arg_buffer[1];
//reading env and args
void* a1360913853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env14023))[8];
//not do dummy comment
void* cons = (decode_clo(env14023))[7];
//not do dummy comment
void* list = (decode_clo(env14023))[6];
//not do dummy comment
void* cdr = (decode_clo(env14023))[5];
//not do dummy comment
void* lst = (decode_clo(env14023))[4];
//not do dummy comment
void* kont13710 = (decode_clo(env14023))[3];
//not do dummy comment
void* filter = (decode_clo(env14023))[2];
//not do dummy comment
void* car = (decode_clo(env14023))[1];

//if-clause
bool if_guard22797 = is_true(a1360913853);
if(if_guard22797)
{

//creating new closure instance
void** clo22799 = alloc_clo(lam14008_fptr, 1);

//setting env list
clo22799[1] = kont13710;
void* f1371113854 = encode_clo(clo22799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1371113854;
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
void** clo22801 = alloc_clo(lam14020_fptr, 7);

//setting env list
clo22801[1] = car;
clo22801[2] = filter;
clo22801[3] = kont13710;
clo22801[4] = lst;
clo22801[5] = cons;
clo22801[6] = op;
clo22801[7] = cdr;
void* f1371713856 = encode_clo(clo22801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1371713856;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14022 = encode_clo(alloc_clo(lam14022_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14024 = arg_buffer[1];
//reading env and args
void* kont13710 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22803 = alloc_clo(lam14022_fptr, 8);

//setting env list
clo22803[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo22803[2] = filter;
clo22803[3] = kont13710;
clo22803[4] = lst;
clo22803[5] = cdr;
clo22803[6] = list;
clo22803[7] = cons;
clo22803[8] = op;
void* f1371813852 = encode_clo(clo22803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1371813852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam14025_fptr() // lam14025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14026 = arg_buffer[1];
//reading env and args
void* a1362113875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env14026))[3];
//not do dummy comment
void* a1361913872 = (decode_clo(env14026))[2];
//not do dummy comment
void* kont13719 = (decode_clo(env14026))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont13719;
arg_buffer[3] = a1361913872;
arg_buffer[4] = a1362113875;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14025 = encode_clo(alloc_clo(lam14025_fptr, 0));

void* lam14028_fptr() // lam14028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14029 = arg_buffer[1];
//reading env and args
void* a1361913872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env14029))[4];
//not do dummy comment
void* _u45 = (decode_clo(env14029))[3];
//not do dummy comment
void* kont13719 = (decode_clo(env14029))[2];
//not do dummy comment
void* n = (decode_clo(env14029))[1];
mpz_t* mpzvar22804 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22804, "1", 10);
void* a1362013873 = encode_mpz(mpzvar22804);

//creating new closure instance
void** clo22806 = alloc_clo(lam14025_fptr, 3);

//setting env list
clo22806[1] = kont13719;
clo22806[2] = a1361913872;
clo22806[3] = drop;
void* f1372013874 = encode_clo(clo22806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1372013874;
arg_buffer[3] = n;
arg_buffer[4] = a1362013873;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14028 = encode_clo(alloc_clo(lam14028_fptr, 0));

void* lam14030_fptr() // lam14030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14031 = arg_buffer[1];
//reading env and args
void* a1361813870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14031))[6];
//not do dummy comment
void* _u45 = (decode_clo(env14031))[5];
//not do dummy comment
void* lst = (decode_clo(env14031))[4];
//not do dummy comment
void* drop = (decode_clo(env14031))[3];
//not do dummy comment
void* kont13719 = (decode_clo(env14031))[2];
//not do dummy comment
void* n = (decode_clo(env14031))[1];

//if-clause
bool if_guard22807 = is_true(a1361813870);
if(if_guard22807)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13719);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13719))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22809 = alloc_clo(lam14028_fptr, 4);

//setting env list
clo22809[1] = n;
clo22809[2] = kont13719;
clo22809[3] = _u45;
clo22809[4] = drop;
void* f1372113871 = encode_clo(clo22809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1372113871;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14030 = encode_clo(alloc_clo(lam14030_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14033 = arg_buffer[1];
//reading env and args
void* kont13719 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar22810 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22810, "0", 10);
void* a1361713868 = encode_mpz(mpzvar22810);

//creating new closure instance
void** clo22812 = alloc_clo(lam14030_fptr, 6);

//setting env list
clo22812[1] = n;
clo22812[2] = kont13719;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo22812[3] = drop;
clo22812[4] = lst;
clo22812[5] = _u45;
clo22812[6] = cdr;
void* f1372213869 = encode_clo(clo22812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1372213869;
arg_buffer[3] = n;
arg_buffer[4] = a1361713868;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam14034_fptr() // lam14034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14035 = arg_buffer[1];
//reading env and args
void* a1362513883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13723 = (decode_clo(env14035))[3];
//not do dummy comment
void* proc = (decode_clo(env14035))[2];
//not do dummy comment
void* a1362313879 = (decode_clo(env14035))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont13723;
arg_buffer[3] = a1362313879;
arg_buffer[4] = a1362513883;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14034 = encode_clo(alloc_clo(lam14034_fptr, 0));

void* lam14036_fptr() // lam14036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14037 = arg_buffer[1];
//reading env and args
void* a1362413881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13723 = (decode_clo(env14037))[5];
//not do dummy comment
void* foldr = (decode_clo(env14037))[4];
//not do dummy comment
void* a1362313879 = (decode_clo(env14037))[3];
//not do dummy comment
void* proc = (decode_clo(env14037))[2];
//not do dummy comment
void* acc = (decode_clo(env14037))[1];

//creating new closure instance
void** clo22814 = alloc_clo(lam14034_fptr, 3);

//setting env list
clo22814[1] = a1362313879;
clo22814[2] = proc;
clo22814[3] = kont13723;
void* f1372413882 = encode_clo(clo22814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1372413882;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1362413881;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14036 = encode_clo(alloc_clo(lam14036_fptr, 0));

void* lam14038_fptr() // lam14038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14039 = arg_buffer[1];
//reading env and args
void* a1362313879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14039))[6];
//not do dummy comment
void* kont13723 = (decode_clo(env14039))[5];
//not do dummy comment
void* foldr = (decode_clo(env14039))[4];
//not do dummy comment
void* lst = (decode_clo(env14039))[3];
//not do dummy comment
void* proc = (decode_clo(env14039))[2];
//not do dummy comment
void* acc = (decode_clo(env14039))[1];

//creating new closure instance
void** clo22816 = alloc_clo(lam14036_fptr, 5);

//setting env list
clo22816[1] = acc;
clo22816[2] = proc;
clo22816[3] = a1362313879;
clo22816[4] = foldr;
clo22816[5] = kont13723;
void* f1372513880 = encode_clo(clo22816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1372513880;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14038 = encode_clo(alloc_clo(lam14038_fptr, 0));

void* lam14040_fptr() // lam14040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14041 = arg_buffer[1];
//reading env and args
void* a1362213877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14041))[7];
//not do dummy comment
void* kont13723 = (decode_clo(env14041))[6];
//not do dummy comment
void* car = (decode_clo(env14041))[5];
//not do dummy comment
void* foldr = (decode_clo(env14041))[4];
//not do dummy comment
void* lst = (decode_clo(env14041))[3];
//not do dummy comment
void* proc = (decode_clo(env14041))[2];
//not do dummy comment
void* acc = (decode_clo(env14041))[1];

//if-clause
bool if_guard22817 = is_true(a1362213877);
if(if_guard22817)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13723);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13723))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22819 = alloc_clo(lam14038_fptr, 6);

//setting env list
clo22819[1] = acc;
clo22819[2] = proc;
clo22819[3] = lst;
clo22819[4] = foldr;
clo22819[5] = kont13723;
clo22819[6] = cdr;
void* f1372613878 = encode_clo(clo22819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1372613878;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14040 = encode_clo(alloc_clo(lam14040_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14042 = arg_buffer[1];
//reading env and args
void* kont13723 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo22821 = alloc_clo(lam14040_fptr, 7);

//setting env list
clo22821[1] = acc;
clo22821[2] = proc;
clo22821[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo22821[4] = foldr;
clo22821[5] = car;
clo22821[6] = kont13723;
clo22821[7] = cdr;
void* f1372713876 = encode_clo(clo22821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1372713876;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam14043_fptr() // lam14043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14044 = arg_buffer[1];
//reading env and args
void* a1362913891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1362713887 = (decode_clo(env14044))[3];
//not do dummy comment
void* kont13728 = (decode_clo(env14044))[2];
//not do dummy comment
void* cons = (decode_clo(env14044))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13728;
arg_buffer[3] = a1362713887;
arg_buffer[4] = a1362913891;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14043 = encode_clo(alloc_clo(lam14043_fptr, 0));

void* lam14045_fptr() // lam14045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14046 = arg_buffer[1];
//reading env and args
void* a1362813889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1362713887 = (decode_clo(env14046))[5];
//not do dummy comment
void* kont13728 = (decode_clo(env14046))[4];
//not do dummy comment
void* append = (decode_clo(env14046))[3];
//not do dummy comment
void* lst2 = (decode_clo(env14046))[2];
//not do dummy comment
void* cons = (decode_clo(env14046))[1];

//creating new closure instance
void** clo22823 = alloc_clo(lam14043_fptr, 3);

//setting env list
clo22823[1] = cons;
clo22823[2] = kont13728;
clo22823[3] = a1362713887;
void* f1372913890 = encode_clo(clo22823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1372913890;
arg_buffer[3] = a1362813889;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14045 = encode_clo(alloc_clo(lam14045_fptr, 0));

void* lam14047_fptr() // lam14047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14048 = arg_buffer[1];
//reading env and args
void* a1362713887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14048))[6];
//not do dummy comment
void* kont13728 = (decode_clo(env14048))[5];
//not do dummy comment
void* append = (decode_clo(env14048))[4];
//not do dummy comment
void* lst2 = (decode_clo(env14048))[3];
//not do dummy comment
void* lst1 = (decode_clo(env14048))[2];
//not do dummy comment
void* cons = (decode_clo(env14048))[1];

//creating new closure instance
void** clo22825 = alloc_clo(lam14045_fptr, 5);

//setting env list
clo22825[1] = cons;
clo22825[2] = lst2;
clo22825[3] = append;
clo22825[4] = kont13728;
clo22825[5] = a1362713887;
void* f1373013888 = encode_clo(clo22825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1373013888;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14047 = encode_clo(alloc_clo(lam14047_fptr, 0));

void* lam14049_fptr() // lam14049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14050 = arg_buffer[1];
//reading env and args
void* a1362613885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14050))[7];
//not do dummy comment
void* kont13728 = (decode_clo(env14050))[6];
//not do dummy comment
void* append = (decode_clo(env14050))[5];
//not do dummy comment
void* lst2 = (decode_clo(env14050))[4];
//not do dummy comment
void* cons = (decode_clo(env14050))[3];
//not do dummy comment
void* lst1 = (decode_clo(env14050))[2];
//not do dummy comment
void* car = (decode_clo(env14050))[1];

//if-clause
bool if_guard22826 = is_true(a1362613885);
if(if_guard22826)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13728);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13728))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22828 = alloc_clo(lam14047_fptr, 6);

//setting env list
clo22828[1] = cons;
clo22828[2] = lst1;
clo22828[3] = lst2;
clo22828[4] = append;
clo22828[5] = kont13728;
clo22828[6] = cdr;
void* f1373113886 = encode_clo(clo22828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1373113886;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14049 = encode_clo(alloc_clo(lam14049_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14051 = arg_buffer[1];
//reading env and args
void* kont13728 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22830 = alloc_clo(lam14049_fptr, 7);

//setting env list
clo22830[1] = car;
clo22830[2] = lst1;
clo22830[3] = cons;
clo22830[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo22830[5] = append;
clo22830[6] = kont13728;
clo22830[7] = cdr;
void* f1373213884 = encode_clo(clo22830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1373213884;
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
void* _14052 = arg_buffer[1];
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

void* kont1373313892 = prim_car(lst);
void* lst13893 = prim_cdr(lst);
void* x1363013894 = apply_prim_hash(lst13893);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1373313892);
arg_buffer[2] = x1363013894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1373313892))[0]);
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
void* _14053 = arg_buffer[1];
//reading env and args
void* kont13735 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1363113895 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13735);
arg_buffer[2] = x1363113895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13735))[0]);
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
void* _14054 = arg_buffer[1];
//reading env and args
void* kont13736 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1363213896 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13736);
arg_buffer[2] = x1363213896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13736))[0]);
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
void* _14055 = arg_buffer[1];
//reading env and args
void* kont13737 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1363313897 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13737);
arg_buffer[2] = x1363313897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13737))[0]);
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
void* _14056 = arg_buffer[1];
//reading env and args
void* kont13738 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1363413898 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13738);
arg_buffer[2] = x1363413898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13738))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam14058_fptr() // lam14058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14059 = arg_buffer[1];
//reading env and args
void* a1364013907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13739 = (decode_clo(env14059))[3];
//not do dummy comment
void* _u42 = (decode_clo(env14059))[2];
//not do dummy comment
void* n = (decode_clo(env14059))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont13739;
arg_buffer[3] = n;
arg_buffer[4] = a1364013907;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14058 = encode_clo(alloc_clo(lam14058_fptr, 0));

void* lam14060_fptr() // lam14060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14061 = arg_buffer[1];
//reading env and args
void* a1363913905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13739 = (decode_clo(env14061))[4];
//not do dummy comment
void* _u42 = (decode_clo(env14061))[3];
//not do dummy comment
void* fact = (decode_clo(env14061))[2];
//not do dummy comment
void* n = (decode_clo(env14061))[1];

//creating new closure instance
void** clo22832 = alloc_clo(lam14058_fptr, 3);

//setting env list
clo22832[1] = n;
clo22832[2] = _u42;
clo22832[3] = kont13739;
void* f1374013906 = encode_clo(clo22832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = f1374013906;
arg_buffer[3] = a1363913905;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14060 = encode_clo(alloc_clo(lam14060_fptr, 0));

void* lam14063_fptr() // lam14063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14064 = arg_buffer[1];
//reading env and args
void* a1363613901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13739 = (decode_clo(env14064))[5];
//not do dummy comment
void* _u42 = (decode_clo(env14064))[4];
//not do dummy comment
void* fact = (decode_clo(env14064))[3];
//not do dummy comment
void* n = (decode_clo(env14064))[2];
//not do dummy comment
void* _u45 = (decode_clo(env14064))[1];

//if-clause
bool if_guard22833 = is_true(a1363613901);
if(if_guard22833)
{
mpz_t* mpzvar22834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22834, "1", 10);
void* x1363713902 = encode_mpz(mpzvar22834);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13739);
arg_buffer[2] = x1363713902;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13739))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar22835 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22835, "1", 10);
void* a1363813903 = encode_mpz(mpzvar22835);

//creating new closure instance
void** clo22837 = alloc_clo(lam14060_fptr, 4);

//setting env list
clo22837[1] = n;
clo22837[2] = fact;
clo22837[3] = _u42;
clo22837[4] = kont13739;
void* f1374113904 = encode_clo(clo22837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1374113904;
arg_buffer[3] = n;
arg_buffer[4] = a1363813903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14063 = encode_clo(alloc_clo(lam14063_fptr, 0));

void* fact_fptr() // fact 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14066 = arg_buffer[1];
//reading env and args
void* kont13739 = arg_buffer[2];
void* n = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22838 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22838, "0", 10);
void* a1363513899 = encode_mpz(mpzvar22838);

//creating new closure instance
void** clo22840 = alloc_clo(lam14063_fptr, 5);

//setting env list
clo22840[1] = _u45;
clo22840[2] = n;
void* fact = encode_clo(alloc_clo(fact_fptr, 0));

clo22840[3] = fact;
clo22840[4] = _u42;
clo22840[5] = kont13739;
void* f1374213900 = encode_clo(clo22840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1374213900;
arg_buffer[3] = a1363513899;
arg_buffer[4] = n;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* fact = encode_clo(alloc_clo(fact_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14068 = arg_buffer[1];
//reading env and args
void* kont13743 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar22841 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22841, "5", 10);
void* a1364113908 = encode_mpz(mpzvar22841);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = kont13743;
arg_buffer[3] = a1364113908;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
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

