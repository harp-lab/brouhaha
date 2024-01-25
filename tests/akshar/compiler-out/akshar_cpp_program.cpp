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
void* _6896 = arg_buffer[1];
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

void* kont65986716 = prim_car(lst);
void* lst6717 = prim_cdr(lst);
void* x64986718 = apply_prim__u43(lst6717);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont65986716);
arg_buffer[2] = x64986718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont65986716))[0]);
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
void* _6897 = arg_buffer[1];
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

void* kont66006719 = prim_car(lst);
void* lst6720 = prim_cdr(lst);
void* x64996721 = apply_prim_max(lst6720);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66006719);
arg_buffer[2] = x64996721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66006719))[0]);
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
void* _6898 = arg_buffer[1];
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

void* kont66026722 = prim_car(lst);
void* lst6723 = prim_cdr(lst);
void* x65006724 = apply_prim__u45(lst6723);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66026722);
arg_buffer[2] = x65006724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66026722))[0]);
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
void* _6899 = arg_buffer[1];
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

void* kont66046725 = prim_car(lst);
void* lst6726 = prim_cdr(lst);
void* x65016727 = apply_prim__u42(lst6726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66046725);
arg_buffer[2] = x65016727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66046725))[0]);
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
void* _6900 = arg_buffer[1];
//reading env and args
void* kont6606 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x65026728 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6606);
arg_buffer[2] = x65026728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6606))[0]);
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
void* _6901 = arg_buffer[1];
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

void* kont66076729 = prim_car(lst);
void* lst6730 = prim_cdr(lst);
void* x65036731 = apply_prim__u47(lst6730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66076729);
arg_buffer[2] = x65036731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66076729))[0]);
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
void* _6902 = arg_buffer[1];
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

void* kont66096732 = prim_car(lst);
void* lst6733 = prim_cdr(lst);
void* x65046734 = apply_prim__u61(lst6733);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66096732);
arg_buffer[2] = x65046734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66096732))[0]);
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
void* _6903 = arg_buffer[1];
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

void* kont66116735 = prim_car(lst);
void* lst6736 = prim_cdr(lst);
void* x65056737 = apply_prim__u62(lst6736);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66116735);
arg_buffer[2] = x65056737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66116735))[0]);
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
void* _6904 = arg_buffer[1];
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

void* kont66136738 = prim_car(lst);
void* lst6739 = prim_cdr(lst);
void* x65066740 = apply_prim__u60(lst6739);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66136738);
arg_buffer[2] = x65066740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66136738))[0]);
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
void* _6905 = arg_buffer[1];
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

void* kont66156741 = prim_car(lst);
void* lst6742 = prim_cdr(lst);
void* x65076743 = apply_prim__u60_u61(lst6742);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66156741);
arg_buffer[2] = x65076743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66156741))[0]);
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
void* _6906 = arg_buffer[1];
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

void* kont66176744 = prim_car(lst);
void* lst6745 = prim_cdr(lst);
void* x65086746 = apply_prim__u62_u61(lst6745);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66176744);
arg_buffer[2] = x65086746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66176744))[0]);
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
void* _6907 = arg_buffer[1];
//reading env and args
void* kont6619 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x65096747 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6619);
arg_buffer[2] = x65096747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6619))[0]);
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
void* _6908 = arg_buffer[1];
//reading env and args
void* kont6620 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x65106748 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6620);
arg_buffer[2] = x65106748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6620))[0]);
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
void* _6909 = arg_buffer[1];
//reading env and args
void* kont6621 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x65116749 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6621);
arg_buffer[2] = x65116749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6621))[0]);
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
void* _6910 = arg_buffer[1];
//reading env and args
void* kont6622 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x65126750 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6622);
arg_buffer[2] = x65126750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6622))[0]);
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
void* _6911 = arg_buffer[1];
//reading env and args
void* kont6623 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x65136751 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6623);
arg_buffer[2] = x65136751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6623))[0]);
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
void* _6912 = arg_buffer[1];
//reading env and args
void* kont6624 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x65146752 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6624);
arg_buffer[2] = x65146752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6624))[0]);
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
void* _6913 = arg_buffer[1];
//reading env and args
void* kont6625 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x65156753 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6625);
arg_buffer[2] = x65156753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6625))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam6914_fptr() // lam6914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6915 = arg_buffer[1];
//reading env and args
void* a65186757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env6915))[3];
//not do dummy comment
void* kont6626 = (decode_clo(env6915))[2];
//not do dummy comment
void* a65166754 = (decode_clo(env6915))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont6626;
arg_buffer[3] = a65166754;
arg_buffer[4] = a65186757;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6914 = encode_clo(alloc_clo(lam6914_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6918 = arg_buffer[1];
//reading env and args
void* kont6626 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7067 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7067, "0", 10);
void* a65166754 = encode_mpz(mpzvar7067);
mpz_t* mpzvar7068 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7068, "2", 10);
void* a65176755 = encode_mpz(mpzvar7068);

//creating new closure instance
void** clo7070 = alloc_clo(lam6914_fptr, 3);

//setting env list
clo7070[1] = a65166754;
clo7070[2] = kont6626;
clo7070[3] = equal_u63;
void* f66276756 = encode_clo(clo7070);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f66276756;
arg_buffer[3] = x;
arg_buffer[4] = a65176755;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam6919_fptr() // lam6919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6920 = arg_buffer[1];
//reading env and args
void* a65216761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6628 = (decode_clo(env6920))[3];
//not do dummy comment
void* a65196758 = (decode_clo(env6920))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6920))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont6628;
arg_buffer[3] = a65196758;
arg_buffer[4] = a65216761;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6919 = encode_clo(alloc_clo(lam6919_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6923 = arg_buffer[1];
//reading env and args
void* kont6628 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7071 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7071, "1", 10);
void* a65196758 = encode_mpz(mpzvar7071);
mpz_t* mpzvar7072 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7072, "2", 10);
void* a65206759 = encode_mpz(mpzvar7072);

//creating new closure instance
void** clo7074 = alloc_clo(lam6919_fptr, 3);

//setting env list
clo7074[1] = equal_u63;
clo7074[2] = a65196758;
clo7074[3] = kont6628;
void* f66296760 = encode_clo(clo7074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f66296760;
arg_buffer[3] = x;
arg_buffer[4] = a65206759;
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
void* _6924 = arg_buffer[1];
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

void* kont66306762 = prim_car(x);
void* x6763 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66306762);
arg_buffer[2] = x6763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66306762))[0]);
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
void* _6925 = arg_buffer[1];
//reading env and args
void* kont6632 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x65226764 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6632);
arg_buffer[2] = x65226764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6632))[0]);
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
void* _6926 = arg_buffer[1];
//reading env and args
void* kont6633 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x65236765 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6633);
arg_buffer[2] = x65236765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6633))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam6929_fptr() // lam6929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6930 = arg_buffer[1];
//reading env and args
void* a65296775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6634 = (decode_clo(env6930))[3];
//not do dummy comment
void* x = (decode_clo(env6930))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6930))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont6634;
arg_buffer[3] = x;
arg_buffer[4] = a65296775;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6929 = encode_clo(alloc_clo(lam6929_fptr, 0));

void* lam6931_fptr() // lam6931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6932 = arg_buffer[1];
//reading env and args
void* a65276772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6932))[5];
//not do dummy comment
void* lst = (decode_clo(env6932))[4];
//not do dummy comment
void* kont6634 = (decode_clo(env6932))[3];
//not do dummy comment
void* x = (decode_clo(env6932))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6932))[1];

//if-clause
bool if_guard7075 = is_true(a65276772);
if(if_guard7075)
{
void* x65286773 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6634);
arg_buffer[2] = x65286773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6634))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7077 = alloc_clo(lam6929_fptr, 3);

//setting env list
clo7077[1] = member_u63;
clo7077[2] = x;
clo7077[3] = kont6634;
void* f66356774 = encode_clo(clo7077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66356774;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6931 = encode_clo(alloc_clo(lam6931_fptr, 0));

void* lam6933_fptr() // lam6933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6934 = arg_buffer[1];
//reading env and args
void* a65266770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6934))[6];
//not do dummy comment
void* lst = (decode_clo(env6934))[5];
//not do dummy comment
void* kont6634 = (decode_clo(env6934))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env6934))[3];
//not do dummy comment
void* x = (decode_clo(env6934))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6934))[1];

//creating new closure instance
void** clo7079 = alloc_clo(lam6931_fptr, 5);

//setting env list
clo7079[1] = member_u63;
clo7079[2] = x;
clo7079[3] = kont6634;
clo7079[4] = lst;
clo7079[5] = cdr;
void* f66366771 = encode_clo(clo7079);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f66366771;
arg_buffer[3] = a65266770;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6933 = encode_clo(alloc_clo(lam6933_fptr, 0));

void* lam6935_fptr() // lam6935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6936 = arg_buffer[1];
//reading env and args
void* a65246767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6936))[7];
//not do dummy comment
void* lst = (decode_clo(env6936))[6];
//not do dummy comment
void* kont6634 = (decode_clo(env6936))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env6936))[4];
//not do dummy comment
void* x = (decode_clo(env6936))[3];
//not do dummy comment
void* car = (decode_clo(env6936))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6936))[1];

//if-clause
bool if_guard7080 = is_true(a65246767);
if(if_guard7080)
{
void* x65256768 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6634);
arg_buffer[2] = x65256768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6634))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7082 = alloc_clo(lam6933_fptr, 6);

//setting env list
clo7082[1] = member_u63;
clo7082[2] = x;
clo7082[3] = equal_u63;
clo7082[4] = kont6634;
clo7082[5] = lst;
clo7082[6] = cdr;
void* f66376769 = encode_clo(clo7082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f66376769;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6935 = encode_clo(alloc_clo(lam6935_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6937 = arg_buffer[1];
//reading env and args
void* kont6634 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7084 = alloc_clo(lam6935_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo7084[1] = member_u63;
clo7084[2] = car;
clo7084[3] = x;
clo7084[4] = equal_u63;
clo7084[5] = kont6634;
clo7084[6] = lst;
clo7084[7] = cdr;
void* f66386766 = encode_clo(clo7084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f66386766;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam6938_fptr() // lam6938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6939 = arg_buffer[1];
//reading env and args
void* a65336783 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a65326781 = (decode_clo(env6939))[4];
//not do dummy comment
void* fun = (decode_clo(env6939))[3];
//not do dummy comment
void* kont6639 = (decode_clo(env6939))[2];
//not do dummy comment
void* foldl = (decode_clo(env6939))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont6639;
arg_buffer[3] = fun;
arg_buffer[4] = a65326781;
arg_buffer[5] = a65336783;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6938 = encode_clo(alloc_clo(lam6938_fptr, 0));

void* lam6940_fptr() // lam6940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6941 = arg_buffer[1];
//reading env and args
void* a65326781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6941))[5];
//not do dummy comment
void* lst = (decode_clo(env6941))[4];
//not do dummy comment
void* fun = (decode_clo(env6941))[3];
//not do dummy comment
void* kont6639 = (decode_clo(env6941))[2];
//not do dummy comment
void* foldl = (decode_clo(env6941))[1];

//creating new closure instance
void** clo7086 = alloc_clo(lam6938_fptr, 4);

//setting env list
clo7086[1] = foldl;
clo7086[2] = kont6639;
clo7086[3] = fun;
clo7086[4] = a65326781;
void* f66406782 = encode_clo(clo7086);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66406782;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6940 = encode_clo(alloc_clo(lam6940_fptr, 0));

void* lam6942_fptr() // lam6942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6943 = arg_buffer[1];
//reading env and args
void* a65316779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6943))[6];
//not do dummy comment
void* lst = (decode_clo(env6943))[5];
//not do dummy comment
void* fun = (decode_clo(env6943))[4];
//not do dummy comment
void* foldl = (decode_clo(env6943))[3];
//not do dummy comment
void* kont6639 = (decode_clo(env6943))[2];
//not do dummy comment
void* acc = (decode_clo(env6943))[1];

//creating new closure instance
void** clo7088 = alloc_clo(lam6940_fptr, 5);

//setting env list
clo7088[1] = foldl;
clo7088[2] = kont6639;
clo7088[3] = fun;
clo7088[4] = lst;
clo7088[5] = cdr;
void* f66416780 = encode_clo(clo7088);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f66416780;
arg_buffer[3] = a65316779;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6942 = encode_clo(alloc_clo(lam6942_fptr, 0));

void* lam6944_fptr() // lam6944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6945 = arg_buffer[1];
//reading env and args
void* a65306777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6945))[7];
//not do dummy comment
void* lst = (decode_clo(env6945))[6];
//not do dummy comment
void* fun = (decode_clo(env6945))[5];
//not do dummy comment
void* car = (decode_clo(env6945))[4];
//not do dummy comment
void* foldl = (decode_clo(env6945))[3];
//not do dummy comment
void* kont6639 = (decode_clo(env6945))[2];
//not do dummy comment
void* acc = (decode_clo(env6945))[1];

//if-clause
bool if_guard7089 = is_true(a65306777);
if(if_guard7089)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6639);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6639))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7091 = alloc_clo(lam6942_fptr, 6);

//setting env list
clo7091[1] = acc;
clo7091[2] = kont6639;
clo7091[3] = foldl;
clo7091[4] = fun;
clo7091[5] = lst;
clo7091[6] = cdr;
void* f66426778 = encode_clo(clo7091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f66426778;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6944 = encode_clo(alloc_clo(lam6944_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6946 = arg_buffer[1];
//reading env and args
void* kont6639 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7093 = alloc_clo(lam6944_fptr, 7);

//setting env list
clo7093[1] = acc;
clo7093[2] = kont6639;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo7093[3] = foldl;
clo7093[4] = car;
clo7093[5] = fun;
clo7093[6] = lst;
clo7093[7] = cdr;
void* f66436776 = encode_clo(clo7093);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f66436776;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam6947_fptr() // lam6947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6948 = arg_buffer[1];
//reading env and args
void* a65376791 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6644 = (decode_clo(env6948))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6948))[2];
//not do dummy comment
void* a65356787 = (decode_clo(env6948))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont6644;
arg_buffer[3] = a65356787;
arg_buffer[4] = a65376791;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6947 = encode_clo(alloc_clo(lam6947_fptr, 0));

void* lam6949_fptr() // lam6949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6950 = arg_buffer[1];
//reading env and args
void* a65366789 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6644 = (decode_clo(env6950))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6950))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6950))[3];
//not do dummy comment
void* cons = (decode_clo(env6950))[2];
//not do dummy comment
void* a65356787 = (decode_clo(env6950))[1];

//creating new closure instance
void** clo7095 = alloc_clo(lam6947_fptr, 3);

//setting env list
clo7095[1] = a65356787;
clo7095[2] = reverse_u45helper;
clo7095[3] = kont6644;
void* f66456790 = encode_clo(clo7095);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f66456790;
arg_buffer[3] = a65366789;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6949 = encode_clo(alloc_clo(lam6949_fptr, 0));

void* lam6951_fptr() // lam6951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6952 = arg_buffer[1];
//reading env and args
void* a65356787 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6644 = (decode_clo(env6952))[6];
//not do dummy comment
void* lst = (decode_clo(env6952))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6952))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6952))[3];
//not do dummy comment
void* car = (decode_clo(env6952))[2];
//not do dummy comment
void* cons = (decode_clo(env6952))[1];

//creating new closure instance
void** clo7097 = alloc_clo(lam6949_fptr, 5);

//setting env list
clo7097[1] = a65356787;
clo7097[2] = cons;
clo7097[3] = lst2;
clo7097[4] = reverse_u45helper;
clo7097[5] = kont6644;
void* f66466788 = encode_clo(clo7097);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f66466788;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6951 = encode_clo(alloc_clo(lam6951_fptr, 0));

void* lam6953_fptr() // lam6953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6954 = arg_buffer[1];
//reading env and args
void* a65346785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6954))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6954))[6];
//not do dummy comment
void* lst2 = (decode_clo(env6954))[5];
//not do dummy comment
void* car = (decode_clo(env6954))[4];
//not do dummy comment
void* cons = (decode_clo(env6954))[3];
//not do dummy comment
void* kont6644 = (decode_clo(env6954))[2];
//not do dummy comment
void* cdr = (decode_clo(env6954))[1];

//if-clause
bool if_guard7098 = is_true(a65346785);
if(if_guard7098)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6644);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6644))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7100 = alloc_clo(lam6951_fptr, 6);

//setting env list
clo7100[1] = cons;
clo7100[2] = car;
clo7100[3] = lst2;
clo7100[4] = reverse_u45helper;
clo7100[5] = lst;
clo7100[6] = kont6644;
void* f66476786 = encode_clo(clo7100);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66476786;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6953 = encode_clo(alloc_clo(lam6953_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6955 = arg_buffer[1];
//reading env and args
void* kont6644 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7102 = alloc_clo(lam6953_fptr, 7);

//setting env list
clo7102[1] = cdr;
clo7102[2] = kont6644;
clo7102[3] = cons;
clo7102[4] = car;
clo7102[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo7102[6] = reverse_u45helper;
clo7102[7] = lst;
void* f66486784 = encode_clo(clo7102);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f66486784;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam6956_fptr() // lam6956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6957 = arg_buffer[1];
//reading env and args
void* a65386793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6957))[3];
//not do dummy comment
void* kont6649 = (decode_clo(env6957))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6957))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont6649;
arg_buffer[3] = lst;
arg_buffer[4] = a65386793;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6956 = encode_clo(alloc_clo(lam6956_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6958 = arg_buffer[1];
//reading env and args
void* kont6649 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7104 = alloc_clo(lam6956_fptr, 3);

//setting env list
clo7104[1] = reverse_u45helper;
clo7104[2] = kont6649;
clo7104[3] = lst;
void* f66506792 = encode_clo(clo7104);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f66506792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam6959_fptr() // lam6959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6960 = arg_buffer[1];
//reading env and args
void* x65416798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6651 = (decode_clo(env6960))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6651);
arg_buffer[2] = x65416798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6651))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6959 = encode_clo(alloc_clo(lam6959_fptr, 0));

void* lam6961_fptr() // lam6961 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6962 = arg_buffer[1];
//reading env and args
void* a65466807 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6651 = (decode_clo(env6962))[4];
//not do dummy comment
void* a65446803 = (decode_clo(env6962))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6962))[2];
//not do dummy comment
void* a65426800 = (decode_clo(env6962))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont6651;
arg_buffer[3] = a65426800;
arg_buffer[4] = a65446803;
arg_buffer[5] = a65466807;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6961 = encode_clo(alloc_clo(lam6961_fptr, 0));

void* lam6963_fptr() // lam6963 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6964 = arg_buffer[1];
//reading env and args
void* a65456805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6651 = (decode_clo(env6964))[6];
//not do dummy comment
void* cons = (decode_clo(env6964))[5];
//not do dummy comment
void* a65446803 = (decode_clo(env6964))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6964))[3];
//not do dummy comment
void* a65426800 = (decode_clo(env6964))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6964))[1];

//creating new closure instance
void** clo7106 = alloc_clo(lam6961_fptr, 4);

//setting env list
clo7106[1] = a65426800;
clo7106[2] = take_u45helper;
clo7106[3] = a65446803;
clo7106[4] = kont6651;
void* f66536806 = encode_clo(clo7106);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f66536806;
arg_buffer[3] = a65456805;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6963 = encode_clo(alloc_clo(lam6963_fptr, 0));

void* lam6965_fptr() // lam6965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6966 = arg_buffer[1];
//reading env and args
void* a65446803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6966))[7];
//not do dummy comment
void* kont6651 = (decode_clo(env6966))[6];
//not do dummy comment
void* car = (decode_clo(env6966))[5];
//not do dummy comment
void* cons = (decode_clo(env6966))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6966))[3];
//not do dummy comment
void* a65426800 = (decode_clo(env6966))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6966))[1];

//creating new closure instance
void** clo7108 = alloc_clo(lam6963_fptr, 6);

//setting env list
clo7108[1] = lst2;
clo7108[2] = a65426800;
clo7108[3] = take_u45helper;
clo7108[4] = a65446803;
clo7108[5] = cons;
clo7108[6] = kont6651;
void* f66546804 = encode_clo(clo7108);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f66546804;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6965 = encode_clo(alloc_clo(lam6965_fptr, 0));

void* lam6968_fptr() // lam6968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6969 = arg_buffer[1];
//reading env and args
void* a65426800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6969))[8];
//not do dummy comment
void* kont6651 = (decode_clo(env6969))[7];
//not do dummy comment
void* cons = (decode_clo(env6969))[6];
//not do dummy comment
void* _u45 = (decode_clo(env6969))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env6969))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6969))[3];
//not do dummy comment
void* n = (decode_clo(env6969))[2];
//not do dummy comment
void* car = (decode_clo(env6969))[1];
mpz_t* mpzvar7109 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7109, "1", 10);
void* a65436801 = encode_mpz(mpzvar7109);

//creating new closure instance
void** clo7111 = alloc_clo(lam6965_fptr, 7);

//setting env list
clo7111[1] = lst2;
clo7111[2] = a65426800;
clo7111[3] = take_u45helper;
clo7111[4] = cons;
clo7111[5] = car;
clo7111[6] = kont6651;
clo7111[7] = lst;
void* f66556802 = encode_clo(clo7111);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f66556802;
arg_buffer[3] = n;
arg_buffer[4] = a65436801;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6968 = encode_clo(alloc_clo(lam6968_fptr, 0));

void* lam6970_fptr() // lam6970 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6971 = arg_buffer[1];
//reading env and args
void* a65406796 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6971))[10];
//not do dummy comment
void* lst = (decode_clo(env6971))[9];
//not do dummy comment
void* cons = (decode_clo(env6971))[8];
//not do dummy comment
void* _u45 = (decode_clo(env6971))[7];
//not do dummy comment
void* kont6651 = (decode_clo(env6971))[6];
//not do dummy comment
void* reverse = (decode_clo(env6971))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env6971))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6971))[3];
//not do dummy comment
void* n = (decode_clo(env6971))[2];
//not do dummy comment
void* car = (decode_clo(env6971))[1];

//if-clause
bool if_guard7112 = is_true(a65406796);
if(if_guard7112)
{

//creating new closure instance
void** clo7114 = alloc_clo(lam6959_fptr, 1);

//setting env list
clo7114[1] = kont6651;
void* f66526797 = encode_clo(clo7114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f66526797;
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
void** clo7116 = alloc_clo(lam6968_fptr, 8);

//setting env list
clo7116[1] = car;
clo7116[2] = n;
clo7116[3] = lst2;
clo7116[4] = take_u45helper;
clo7116[5] = _u45;
clo7116[6] = cons;
clo7116[7] = kont6651;
clo7116[8] = lst;
void* f66566799 = encode_clo(clo7116);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66566799;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6970 = encode_clo(alloc_clo(lam6970_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6973 = arg_buffer[1];
//reading env and args
void* kont6651 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar7117 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7117, "0", 10);
void* a65396794 = encode_mpz(mpzvar7117);

//creating new closure instance
void** clo7119 = alloc_clo(lam6970_fptr, 10);

//setting env list
clo7119[1] = car;
clo7119[2] = n;
clo7119[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo7119[4] = take_u45helper;
clo7119[5] = reverse;
clo7119[6] = kont6651;
clo7119[7] = _u45;
clo7119[8] = cons;
clo7119[9] = lst;
clo7119[10] = cdr;
void* f66576795 = encode_clo(clo7119);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f66576795;
arg_buffer[3] = n;
arg_buffer[4] = a65396794;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam6974_fptr() // lam6974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6975 = arg_buffer[1];
//reading env and args
void* a65476809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6975))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6975))[3];
//not do dummy comment
void* n = (decode_clo(env6975))[2];
//not do dummy comment
void* kont6658 = (decode_clo(env6975))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont6658;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a65476809;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6974 = encode_clo(alloc_clo(lam6974_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6976 = arg_buffer[1];
//reading env and args
void* kont6658 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7121 = alloc_clo(lam6974_fptr, 4);

//setting env list
clo7121[1] = kont6658;
clo7121[2] = n;
clo7121[3] = take_u45helper;
clo7121[4] = lst;
void* f66596808 = encode_clo(clo7121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f66596808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam6978_fptr() // lam6978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6979 = arg_buffer[1];
//reading env and args
void* a65526817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6660 = (decode_clo(env6979))[3];
//not do dummy comment
void* _u43 = (decode_clo(env6979))[2];
//not do dummy comment
void* a65506813 = (decode_clo(env6979))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont6660;
arg_buffer[3] = a65506813;
arg_buffer[4] = a65526817;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6978 = encode_clo(alloc_clo(lam6978_fptr, 0));

void* lam6980_fptr() // lam6980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6981 = arg_buffer[1];
//reading env and args
void* a65516815 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6660 = (decode_clo(env6981))[4];
//not do dummy comment
void* length = (decode_clo(env6981))[3];
//not do dummy comment
void* _u43 = (decode_clo(env6981))[2];
//not do dummy comment
void* a65506813 = (decode_clo(env6981))[1];

//creating new closure instance
void** clo7123 = alloc_clo(lam6978_fptr, 3);

//setting env list
clo7123[1] = a65506813;
clo7123[2] = _u43;
clo7123[3] = kont6660;
void* f66616816 = encode_clo(clo7123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f66616816;
arg_buffer[3] = a65516815;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6980 = encode_clo(alloc_clo(lam6980_fptr, 0));

void* lam6983_fptr() // lam6983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6984 = arg_buffer[1];
//reading env and args
void* a65486811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6984))[5];
//not do dummy comment
void* length = (decode_clo(env6984))[4];
//not do dummy comment
void* _u43 = (decode_clo(env6984))[3];
//not do dummy comment
void* kont6660 = (decode_clo(env6984))[2];
//not do dummy comment
void* cdr = (decode_clo(env6984))[1];

//if-clause
bool if_guard7124 = is_true(a65486811);
if(if_guard7124)
{
mpz_t* mpzvar7125 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7125, "0", 10);
void* x65496812 = encode_mpz(mpzvar7125);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6660);
arg_buffer[2] = x65496812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6660))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar7126 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7126, "1", 10);
void* a65506813 = encode_mpz(mpzvar7126);

//creating new closure instance
void** clo7128 = alloc_clo(lam6980_fptr, 4);

//setting env list
clo7128[1] = a65506813;
clo7128[2] = _u43;
clo7128[3] = length;
clo7128[4] = kont6660;
void* f66626814 = encode_clo(clo7128);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66626814;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6983 = encode_clo(alloc_clo(lam6983_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6985 = arg_buffer[1];
//reading env and args
void* kont6660 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7130 = alloc_clo(lam6983_fptr, 5);

//setting env list
clo7130[1] = cdr;
clo7130[2] = kont6660;
clo7130[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo7130[4] = length;
clo7130[5] = lst;
void* f66636810 = encode_clo(clo7130);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f66636810;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam6986_fptr() // lam6986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6987 = arg_buffer[1];
//reading env and args
void* x65546821 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6664 = (decode_clo(env6987))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6664);
arg_buffer[2] = x65546821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6664))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6986 = encode_clo(alloc_clo(lam6986_fptr, 0));

void* lam6988_fptr() // lam6988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6989 = arg_buffer[1];
//reading env and args
void* a65586829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6664 = (decode_clo(env6989))[3];
//not do dummy comment
void* a65566825 = (decode_clo(env6989))[2];
//not do dummy comment
void* cons = (decode_clo(env6989))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont6664;
arg_buffer[3] = a65566825;
arg_buffer[4] = a65586829;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6988 = encode_clo(alloc_clo(lam6988_fptr, 0));

void* lam6990_fptr() // lam6990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6991 = arg_buffer[1];
//reading env and args
void* a65576827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6664 = (decode_clo(env6991))[5];
//not do dummy comment
void* proc = (decode_clo(env6991))[4];
//not do dummy comment
void* cons = (decode_clo(env6991))[3];
//not do dummy comment
void* map = (decode_clo(env6991))[2];
//not do dummy comment
void* a65566825 = (decode_clo(env6991))[1];

//creating new closure instance
void** clo7132 = alloc_clo(lam6988_fptr, 3);

//setting env list
clo7132[1] = cons;
clo7132[2] = a65566825;
clo7132[3] = kont6664;
void* f66666828 = encode_clo(clo7132);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f66666828;
arg_buffer[3] = proc;
arg_buffer[4] = a65576827;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6990 = encode_clo(alloc_clo(lam6990_fptr, 0));

void* lam6992_fptr() // lam6992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6993 = arg_buffer[1];
//reading env and args
void* a65566825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6993))[6];
//not do dummy comment
void* map = (decode_clo(env6993))[5];
//not do dummy comment
void* proc = (decode_clo(env6993))[4];
//not do dummy comment
void* cons = (decode_clo(env6993))[3];
//not do dummy comment
void* lst = (decode_clo(env6993))[2];
//not do dummy comment
void* kont6664 = (decode_clo(env6993))[1];

//creating new closure instance
void** clo7134 = alloc_clo(lam6990_fptr, 5);

//setting env list
clo7134[1] = a65566825;
clo7134[2] = map;
clo7134[3] = cons;
clo7134[4] = proc;
clo7134[5] = kont6664;
void* f66676826 = encode_clo(clo7134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66676826;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6992 = encode_clo(alloc_clo(lam6992_fptr, 0));

void* lam6994_fptr() // lam6994 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6995 = arg_buffer[1];
//reading env and args
void* a65556823 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6995))[6];
//not do dummy comment
void* map = (decode_clo(env6995))[5];
//not do dummy comment
void* proc = (decode_clo(env6995))[4];
//not do dummy comment
void* cons = (decode_clo(env6995))[3];
//not do dummy comment
void* lst = (decode_clo(env6995))[2];
//not do dummy comment
void* kont6664 = (decode_clo(env6995))[1];

//creating new closure instance
void** clo7136 = alloc_clo(lam6992_fptr, 6);

//setting env list
clo7136[1] = kont6664;
clo7136[2] = lst;
clo7136[3] = cons;
clo7136[4] = proc;
clo7136[5] = map;
clo7136[6] = cdr;
void* f66686824 = encode_clo(clo7136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f66686824;
arg_buffer[3] = a65556823;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6994 = encode_clo(alloc_clo(lam6994_fptr, 0));

void* lam6996_fptr() // lam6996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6997 = arg_buffer[1];
//reading env and args
void* a65536819 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env6997))[8];
//not do dummy comment
void* proc = (decode_clo(env6997))[7];
//not do dummy comment
void* car = (decode_clo(env6997))[6];
//not do dummy comment
void* cons = (decode_clo(env6997))[5];
//not do dummy comment
void* list = (decode_clo(env6997))[4];
//not do dummy comment
void* cdr = (decode_clo(env6997))[3];
//not do dummy comment
void* lst = (decode_clo(env6997))[2];
//not do dummy comment
void* kont6664 = (decode_clo(env6997))[1];

//if-clause
bool if_guard7137 = is_true(a65536819);
if(if_guard7137)
{

//creating new closure instance
void** clo7139 = alloc_clo(lam6986_fptr, 1);

//setting env list
clo7139[1] = kont6664;
void* f66656820 = encode_clo(clo7139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f66656820;
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
void** clo7141 = alloc_clo(lam6994_fptr, 6);

//setting env list
clo7141[1] = kont6664;
clo7141[2] = lst;
clo7141[3] = cons;
clo7141[4] = proc;
clo7141[5] = map;
clo7141[6] = cdr;
void* f66696822 = encode_clo(clo7141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f66696822;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6996 = encode_clo(alloc_clo(lam6996_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6998 = arg_buffer[1];
//reading env and args
void* kont6664 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7143 = alloc_clo(lam6996_fptr, 8);

//setting env list
clo7143[1] = kont6664;
clo7143[2] = lst;
clo7143[3] = cdr;
clo7143[4] = list;
clo7143[5] = cons;
clo7143[6] = car;
clo7143[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo7143[8] = map;
void* f66706818 = encode_clo(clo7143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f66706818;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam6999_fptr() // lam6999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7000 = arg_buffer[1];
//reading env and args
void* x65606833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6671 = (decode_clo(env7000))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6671);
arg_buffer[2] = x65606833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6671))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6999 = encode_clo(alloc_clo(lam6999_fptr, 0));

void* lam7001_fptr() // lam7001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7002 = arg_buffer[1];
//reading env and args
void* a65656843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a65636839 = (decode_clo(env7002))[3];
//not do dummy comment
void* kont6671 = (decode_clo(env7002))[2];
//not do dummy comment
void* cons = (decode_clo(env7002))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont6671;
arg_buffer[3] = a65636839;
arg_buffer[4] = a65656843;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7001 = encode_clo(alloc_clo(lam7001_fptr, 0));

void* lam7003_fptr() // lam7003 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7004 = arg_buffer[1];
//reading env and args
void* a65646841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a65636839 = (decode_clo(env7004))[5];
//not do dummy comment
void* op = (decode_clo(env7004))[4];
//not do dummy comment
void* kont6671 = (decode_clo(env7004))[3];
//not do dummy comment
void* filter = (decode_clo(env7004))[2];
//not do dummy comment
void* cons = (decode_clo(env7004))[1];

//creating new closure instance
void** clo7145 = alloc_clo(lam7001_fptr, 3);

//setting env list
clo7145[1] = cons;
clo7145[2] = kont6671;
clo7145[3] = a65636839;
void* f66736842 = encode_clo(clo7145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f66736842;
arg_buffer[3] = op;
arg_buffer[4] = a65646841;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7003 = encode_clo(alloc_clo(lam7003_fptr, 0));

void* lam7005_fptr() // lam7005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7006 = arg_buffer[1];
//reading env and args
void* a65636839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7006))[6];
//not do dummy comment
void* lst = (decode_clo(env7006))[5];
//not do dummy comment
void* op = (decode_clo(env7006))[4];
//not do dummy comment
void* kont6671 = (decode_clo(env7006))[3];
//not do dummy comment
void* filter = (decode_clo(env7006))[2];
//not do dummy comment
void* cons = (decode_clo(env7006))[1];

//creating new closure instance
void** clo7147 = alloc_clo(lam7003_fptr, 5);

//setting env list
clo7147[1] = cons;
clo7147[2] = filter;
clo7147[3] = kont6671;
clo7147[4] = op;
clo7147[5] = a65636839;
void* f66746840 = encode_clo(clo7147);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66746840;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7005 = encode_clo(alloc_clo(lam7005_fptr, 0));

void* lam7007_fptr() // lam7007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7008 = arg_buffer[1];
//reading env and args
void* a65666845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env7008))[3];
//not do dummy comment
void* kont6671 = (decode_clo(env7008))[2];
//not do dummy comment
void* filter = (decode_clo(env7008))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont6671;
arg_buffer[3] = op;
arg_buffer[4] = a65666845;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7007 = encode_clo(alloc_clo(lam7007_fptr, 0));

void* lam7009_fptr() // lam7009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7010 = arg_buffer[1];
//reading env and args
void* a65626837 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7010))[7];
//not do dummy comment
void* lst = (decode_clo(env7010))[6];
//not do dummy comment
void* op = (decode_clo(env7010))[5];
//not do dummy comment
void* kont6671 = (decode_clo(env7010))[4];
//not do dummy comment
void* cons = (decode_clo(env7010))[3];
//not do dummy comment
void* filter = (decode_clo(env7010))[2];
//not do dummy comment
void* car = (decode_clo(env7010))[1];

//if-clause
bool if_guard7148 = is_true(a65626837);
if(if_guard7148)
{

//creating new closure instance
void** clo7150 = alloc_clo(lam7005_fptr, 6);

//setting env list
clo7150[1] = cons;
clo7150[2] = filter;
clo7150[3] = kont6671;
clo7150[4] = op;
clo7150[5] = lst;
clo7150[6] = cdr;
void* f66756838 = encode_clo(clo7150);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f66756838;
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
void** clo7152 = alloc_clo(lam7007_fptr, 3);

//setting env list
clo7152[1] = filter;
clo7152[2] = kont6671;
clo7152[3] = op;
void* f66766844 = encode_clo(clo7152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66766844;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7009 = encode_clo(alloc_clo(lam7009_fptr, 0));

void* lam7011_fptr() // lam7011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7012 = arg_buffer[1];
//reading env and args
void* a65616835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7012))[7];
//not do dummy comment
void* lst = (decode_clo(env7012))[6];
//not do dummy comment
void* op = (decode_clo(env7012))[5];
//not do dummy comment
void* kont6671 = (decode_clo(env7012))[4];
//not do dummy comment
void* cons = (decode_clo(env7012))[3];
//not do dummy comment
void* filter = (decode_clo(env7012))[2];
//not do dummy comment
void* car = (decode_clo(env7012))[1];

//creating new closure instance
void** clo7154 = alloc_clo(lam7009_fptr, 7);

//setting env list
clo7154[1] = car;
clo7154[2] = filter;
clo7154[3] = cons;
clo7154[4] = kont6671;
clo7154[5] = op;
clo7154[6] = lst;
clo7154[7] = cdr;
void* f66776836 = encode_clo(clo7154);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f66776836;
arg_buffer[3] = a65616835;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7011 = encode_clo(alloc_clo(lam7011_fptr, 0));

void* lam7013_fptr() // lam7013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7014 = arg_buffer[1];
//reading env and args
void* a65596831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env7014))[8];
//not do dummy comment
void* op = (decode_clo(env7014))[7];
//not do dummy comment
void* kont6671 = (decode_clo(env7014))[6];
//not do dummy comment
void* cons = (decode_clo(env7014))[5];
//not do dummy comment
void* list = (decode_clo(env7014))[4];
//not do dummy comment
void* cdr = (decode_clo(env7014))[3];
//not do dummy comment
void* filter = (decode_clo(env7014))[2];
//not do dummy comment
void* car = (decode_clo(env7014))[1];

//if-clause
bool if_guard7155 = is_true(a65596831);
if(if_guard7155)
{

//creating new closure instance
void** clo7157 = alloc_clo(lam6999_fptr, 1);

//setting env list
clo7157[1] = kont6671;
void* f66726832 = encode_clo(clo7157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f66726832;
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
void** clo7159 = alloc_clo(lam7011_fptr, 7);

//setting env list
clo7159[1] = car;
clo7159[2] = filter;
clo7159[3] = cons;
clo7159[4] = kont6671;
clo7159[5] = op;
clo7159[6] = lst;
clo7159[7] = cdr;
void* f66786834 = encode_clo(clo7159);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f66786834;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7013 = encode_clo(alloc_clo(lam7013_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7015 = arg_buffer[1];
//reading env and args
void* kont6671 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7161 = alloc_clo(lam7013_fptr, 8);

//setting env list
clo7161[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo7161[2] = filter;
clo7161[3] = cdr;
clo7161[4] = list;
clo7161[5] = cons;
clo7161[6] = kont6671;
clo7161[7] = op;
clo7161[8] = lst;
void* f66796830 = encode_clo(clo7161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f66796830;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam7016_fptr() // lam7016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7017 = arg_buffer[1];
//reading env and args
void* a65716853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a65696850 = (decode_clo(env7017))[3];
//not do dummy comment
void* kont6680 = (decode_clo(env7017))[2];
//not do dummy comment
void* drop = (decode_clo(env7017))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont6680;
arg_buffer[3] = a65696850;
arg_buffer[4] = a65716853;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7016 = encode_clo(alloc_clo(lam7016_fptr, 0));

void* lam7019_fptr() // lam7019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7020 = arg_buffer[1];
//reading env and args
void* a65696850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env7020))[4];
//not do dummy comment
void* _u45 = (decode_clo(env7020))[3];
//not do dummy comment
void* kont6680 = (decode_clo(env7020))[2];
//not do dummy comment
void* drop = (decode_clo(env7020))[1];
mpz_t* mpzvar7162 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7162, "1", 10);
void* a65706851 = encode_mpz(mpzvar7162);

//creating new closure instance
void** clo7164 = alloc_clo(lam7016_fptr, 3);

//setting env list
clo7164[1] = drop;
clo7164[2] = kont6680;
clo7164[3] = a65696850;
void* f66816852 = encode_clo(clo7164);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f66816852;
arg_buffer[3] = n;
arg_buffer[4] = a65706851;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7019 = encode_clo(alloc_clo(lam7019_fptr, 0));

void* lam7021_fptr() // lam7021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7022 = arg_buffer[1];
//reading env and args
void* a65686848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7022))[6];
//not do dummy comment
void* n = (decode_clo(env7022))[5];
//not do dummy comment
void* _u45 = (decode_clo(env7022))[4];
//not do dummy comment
void* lst = (decode_clo(env7022))[3];
//not do dummy comment
void* kont6680 = (decode_clo(env7022))[2];
//not do dummy comment
void* drop = (decode_clo(env7022))[1];

//if-clause
bool if_guard7165 = is_true(a65686848);
if(if_guard7165)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6680);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6680))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7167 = alloc_clo(lam7019_fptr, 4);

//setting env list
clo7167[1] = drop;
clo7167[2] = kont6680;
clo7167[3] = _u45;
clo7167[4] = n;
void* f66826849 = encode_clo(clo7167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66826849;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7021 = encode_clo(alloc_clo(lam7021_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7024 = arg_buffer[1];
//reading env and args
void* kont6680 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar7168 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7168, "0", 10);
void* a65676846 = encode_mpz(mpzvar7168);

//creating new closure instance
void** clo7170 = alloc_clo(lam7021_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo7170[1] = drop;
clo7170[2] = kont6680;
clo7170[3] = lst;
clo7170[4] = _u45;
clo7170[5] = n;
clo7170[6] = cdr;
void* f66836847 = encode_clo(clo7170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f66836847;
arg_buffer[3] = n;
arg_buffer[4] = a65676846;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam7025_fptr() // lam7025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7026 = arg_buffer[1];
//reading env and args
void* a65756861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a65736857 = (decode_clo(env7026))[3];
//not do dummy comment
void* kont6684 = (decode_clo(env7026))[2];
//not do dummy comment
void* proc = (decode_clo(env7026))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont6684;
arg_buffer[3] = a65736857;
arg_buffer[4] = a65756861;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7025 = encode_clo(alloc_clo(lam7025_fptr, 0));

void* lam7027_fptr() // lam7027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7028 = arg_buffer[1];
//reading env and args
void* a65746859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env7028))[5];
//not do dummy comment
void* a65736857 = (decode_clo(env7028))[4];
//not do dummy comment
void* kont6684 = (decode_clo(env7028))[3];
//not do dummy comment
void* proc = (decode_clo(env7028))[2];
//not do dummy comment
void* acc = (decode_clo(env7028))[1];

//creating new closure instance
void** clo7172 = alloc_clo(lam7025_fptr, 3);

//setting env list
clo7172[1] = proc;
clo7172[2] = kont6684;
clo7172[3] = a65736857;
void* f66856860 = encode_clo(clo7172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f66856860;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a65746859;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7027 = encode_clo(alloc_clo(lam7027_fptr, 0));

void* lam7029_fptr() // lam7029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7030 = arg_buffer[1];
//reading env and args
void* a65736857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7030))[6];
//not do dummy comment
void* kont6684 = (decode_clo(env7030))[5];
//not do dummy comment
void* foldr = (decode_clo(env7030))[4];
//not do dummy comment
void* lst = (decode_clo(env7030))[3];
//not do dummy comment
void* proc = (decode_clo(env7030))[2];
//not do dummy comment
void* acc = (decode_clo(env7030))[1];

//creating new closure instance
void** clo7174 = alloc_clo(lam7027_fptr, 5);

//setting env list
clo7174[1] = acc;
clo7174[2] = proc;
clo7174[3] = kont6684;
clo7174[4] = a65736857;
clo7174[5] = foldr;
void* f66866858 = encode_clo(clo7174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66866858;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7029 = encode_clo(alloc_clo(lam7029_fptr, 0));

void* lam7031_fptr() // lam7031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7032 = arg_buffer[1];
//reading env and args
void* a65726855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7032))[7];
//not do dummy comment
void* kont6684 = (decode_clo(env7032))[6];
//not do dummy comment
void* car = (decode_clo(env7032))[5];
//not do dummy comment
void* foldr = (decode_clo(env7032))[4];
//not do dummy comment
void* lst = (decode_clo(env7032))[3];
//not do dummy comment
void* proc = (decode_clo(env7032))[2];
//not do dummy comment
void* acc = (decode_clo(env7032))[1];

//if-clause
bool if_guard7175 = is_true(a65726855);
if(if_guard7175)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6684);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6684))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7177 = alloc_clo(lam7029_fptr, 6);

//setting env list
clo7177[1] = acc;
clo7177[2] = proc;
clo7177[3] = lst;
clo7177[4] = foldr;
clo7177[5] = kont6684;
clo7177[6] = cdr;
void* f66876856 = encode_clo(clo7177);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f66876856;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7031 = encode_clo(alloc_clo(lam7031_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7033 = arg_buffer[1];
//reading env and args
void* kont6684 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7179 = alloc_clo(lam7031_fptr, 7);

//setting env list
clo7179[1] = acc;
clo7179[2] = proc;
clo7179[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo7179[4] = foldr;
clo7179[5] = car;
clo7179[6] = kont6684;
clo7179[7] = cdr;
void* f66886854 = encode_clo(clo7179);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f66886854;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam7034_fptr() // lam7034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7035 = arg_buffer[1];
//reading env and args
void* a65796869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env7035))[3];
//not do dummy comment
void* kont6689 = (decode_clo(env7035))[2];
//not do dummy comment
void* a65776865 = (decode_clo(env7035))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont6689;
arg_buffer[3] = a65776865;
arg_buffer[4] = a65796869;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7034 = encode_clo(alloc_clo(lam7034_fptr, 0));

void* lam7036_fptr() // lam7036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7037 = arg_buffer[1];
//reading env and args
void* a65786867 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env7037))[5];
//not do dummy comment
void* lst2 = (decode_clo(env7037))[4];
//not do dummy comment
void* cons = (decode_clo(env7037))[3];
//not do dummy comment
void* kont6689 = (decode_clo(env7037))[2];
//not do dummy comment
void* a65776865 = (decode_clo(env7037))[1];

//creating new closure instance
void** clo7181 = alloc_clo(lam7034_fptr, 3);

//setting env list
clo7181[1] = a65776865;
clo7181[2] = kont6689;
clo7181[3] = cons;
void* f66906868 = encode_clo(clo7181);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f66906868;
arg_buffer[3] = a65786867;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7036 = encode_clo(alloc_clo(lam7036_fptr, 0));

void* lam7038_fptr() // lam7038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7039 = arg_buffer[1];
//reading env and args
void* a65776865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7039))[6];
//not do dummy comment
void* append = (decode_clo(env7039))[5];
//not do dummy comment
void* lst2 = (decode_clo(env7039))[4];
//not do dummy comment
void* cons = (decode_clo(env7039))[3];
//not do dummy comment
void* kont6689 = (decode_clo(env7039))[2];
//not do dummy comment
void* lst1 = (decode_clo(env7039))[1];

//creating new closure instance
void** clo7183 = alloc_clo(lam7036_fptr, 5);

//setting env list
clo7183[1] = a65776865;
clo7183[2] = kont6689;
clo7183[3] = cons;
clo7183[4] = lst2;
clo7183[5] = append;
void* f66916866 = encode_clo(clo7183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f66916866;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7038 = encode_clo(alloc_clo(lam7038_fptr, 0));

void* lam7040_fptr() // lam7040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7041 = arg_buffer[1];
//reading env and args
void* a65766863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env7041))[7];
//not do dummy comment
void* append = (decode_clo(env7041))[6];
//not do dummy comment
void* lst2 = (decode_clo(env7041))[5];
//not do dummy comment
void* cons = (decode_clo(env7041))[4];
//not do dummy comment
void* kont6689 = (decode_clo(env7041))[3];
//not do dummy comment
void* lst1 = (decode_clo(env7041))[2];
//not do dummy comment
void* car = (decode_clo(env7041))[1];

//if-clause
bool if_guard7184 = is_true(a65766863);
if(if_guard7184)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6689);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6689))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7186 = alloc_clo(lam7038_fptr, 6);

//setting env list
clo7186[1] = lst1;
clo7186[2] = kont6689;
clo7186[3] = cons;
clo7186[4] = lst2;
clo7186[5] = append;
clo7186[6] = cdr;
void* f66926864 = encode_clo(clo7186);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f66926864;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam7040 = encode_clo(alloc_clo(lam7040_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7042 = arg_buffer[1];
//reading env and args
void* kont6689 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7188 = alloc_clo(lam7040_fptr, 7);

//setting env list
clo7188[1] = car;
clo7188[2] = lst1;
clo7188[3] = kont6689;
clo7188[4] = cons;
clo7188[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo7188[6] = append;
clo7188[7] = cdr;
void* f66936862 = encode_clo(clo7188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f66936862;
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
void* _7043 = arg_buffer[1];
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

void* kont66946870 = prim_car(lst);
void* lst6871 = prim_cdr(lst);
void* x65806872 = apply_prim_hash(lst6871);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont66946870);
arg_buffer[2] = x65806872;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont66946870))[0]);
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
void* _7044 = arg_buffer[1];
//reading env and args
void* kont6696 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x65816873 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6696);
arg_buffer[2] = x65816873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6696))[0]);
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
void* _7045 = arg_buffer[1];
//reading env and args
void* kont6697 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x65826874 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6697);
arg_buffer[2] = x65826874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6697))[0]);
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
void* _7046 = arg_buffer[1];
//reading env and args
void* kont6698 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x65836875 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6698);
arg_buffer[2] = x65836875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6698))[0]);
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
void* _7047 = arg_buffer[1];
//reading env and args
void* kont6699 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x65846876 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6699);
arg_buffer[2] = x65846876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6699))[0]);
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
void* _7048 = arg_buffer[1];
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

void* kont67006877 = prim_car(lst);
void* lst6878 = prim_cdr(lst);
void* x65856879 = apply_prim_set(lst6878);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont67006877);
arg_buffer[2] = x65856879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont67006877))[0]);
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
void* _7049 = arg_buffer[1];
//reading env and args
void* kont6702 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x65866880 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6702);
arg_buffer[2] = x65866880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6702))[0]);
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
void* _7050 = arg_buffer[1];
//reading env and args
void* kont6703 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x65876881 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6703);
arg_buffer[2] = x65876881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6703))[0]);
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
void* _7051 = arg_buffer[1];
//reading env and args
void* kont6704 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x65886882 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6704);
arg_buffer[2] = x65886882;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6704))[0]);
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
void* _7052 = arg_buffer[1];
//reading env and args
void* kont6705 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x65896883 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6705);
arg_buffer[2] = x65896883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6705))[0]);
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
void* _7053 = arg_buffer[1];
//reading env and args
void* kont6706 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x65906884 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6706);
arg_buffer[2] = x65906884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6706))[0]);
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
void* _7054 = arg_buffer[1];
//reading env and args
void* kont6707 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x65916885 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6707);
arg_buffer[2] = x65916885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6707))[0]);
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
void* _7055 = arg_buffer[1];
//reading env and args
void* kont6708 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x65926886 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6708);
arg_buffer[2] = x65926886;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6708))[0]);
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
void* _7056 = arg_buffer[1];
//reading env and args
void* kont6709 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x65936887 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6709);
arg_buffer[2] = x65936887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6709))[0]);
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
void* _7057 = arg_buffer[1];
//reading env and args
void* kont6710 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x65946888 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6710);
arg_buffer[2] = x65946888;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6710))[0]);
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
void* _7058 = arg_buffer[1];
//reading env and args
void* kont6711 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x65956889 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6711);
arg_buffer[2] = x65956889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6711))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam7059_fptr() // lam7059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7060 = arg_buffer[1];
//reading env and args
void* y64976893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6712 = (decode_clo(env7060))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6712);
arg_buffer[2] = y64976893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6712))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7059 = encode_clo(alloc_clo(lam7059_fptr, 0));

void* lam7061_fptr() // lam7061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7062 = arg_buffer[1];
//reading env and args
void* x64966891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont6712 = (decode_clo(env7062))[2];
//not do dummy comment
void* num2 = (decode_clo(env7062))[1];

//creating new closure instance
void** clo7190 = alloc_clo(lam7059_fptr, 1);

//setting env list
clo7190[1] = kont6712;
void* f67136892 = encode_clo(clo7190);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f67136892);
arg_buffer[2] = num2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f67136892))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7061 = encode_clo(alloc_clo(lam7061_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7063 = arg_buffer[1];
//reading env and args
void* kont6712 = arg_buffer[2];
void* num1 = arg_buffer[3];
void* num2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7192 = alloc_clo(lam7061_fptr, 2);

//setting env list
clo7192[1] = num2;
clo7192[2] = kont6712;
void* f67146890 = encode_clo(clo7192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f67146890);
arg_buffer[2] = num1;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f67146890))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7066 = arg_buffer[1];
//reading env and args
void* kont6715 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar7193 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7193, "1", 10);
void* a65966894 = encode_mpz(mpzvar7193);
mpz_t* mpzvar7194 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7194, "2", 10);
void* a65976895 = encode_mpz(mpzvar7194);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont6715;
arg_buffer[3] = a65966894;
arg_buffer[4] = a65976895;
arg_buffer[0] = reinterpret_cast<void*>(4);
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

