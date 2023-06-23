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
void* _31937 = arg_buffer[1];
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

void* kont3167031772 = prim_car(lst);
void* lst31773 = prim_cdr(lst);
void* x3158031774 = apply_prim__u43(lst31773);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3167031772);
arg_buffer[2] = x3158031774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3167031772))[0]);
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
void* _31938 = arg_buffer[1];
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

void* kont3167231775 = prim_car(lst);
void* lst31776 = prim_cdr(lst);
void* x3158131777 = apply_prim__u45(lst31776);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3167231775);
arg_buffer[2] = x3158131777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3167231775))[0]);
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
void* _31939 = arg_buffer[1];
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

void* kont3167431778 = prim_car(lst);
void* lst31779 = prim_cdr(lst);
void* x3158231780 = apply_prim__u42(lst31779);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3167431778);
arg_buffer[2] = x3158231780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3167431778))[0]);
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
void* _31940 = arg_buffer[1];
//reading env and args
void* kont31676 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3158331781 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31676);
arg_buffer[2] = x3158331781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31676))[0]);
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
void* _31941 = arg_buffer[1];
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

void* kont3167731782 = prim_car(lst);
void* lst31783 = prim_cdr(lst);
void* x3158431784 = apply_prim__u47(lst31783);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3167731782);
arg_buffer[2] = x3158431784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3167731782))[0]);
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
void* _31942 = arg_buffer[1];
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

void* kont3167931785 = prim_car(lst);
void* lst31786 = prim_cdr(lst);
void* x3158531787 = apply_prim__u61(lst31786);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3167931785);
arg_buffer[2] = x3158531787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3167931785))[0]);
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
void* _31943 = arg_buffer[1];
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

void* kont3168131788 = prim_car(lst);
void* lst31789 = prim_cdr(lst);
void* x3158631790 = apply_prim__u62(lst31789);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3168131788);
arg_buffer[2] = x3158631790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3168131788))[0]);
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
void* _31944 = arg_buffer[1];
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

void* kont3168331791 = prim_car(lst);
void* lst31792 = prim_cdr(lst);
void* x3158731793 = apply_prim__u60(lst31792);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3168331791);
arg_buffer[2] = x3158731793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3168331791))[0]);
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
void* _31945 = arg_buffer[1];
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

void* kont3168531794 = prim_car(lst);
void* lst31795 = prim_cdr(lst);
void* x3158831796 = apply_prim__u60_u61(lst31795);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3168531794);
arg_buffer[2] = x3158831796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3168531794))[0]);
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
void* _31946 = arg_buffer[1];
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

void* kont3168731797 = prim_car(lst);
void* lst31798 = prim_cdr(lst);
void* x3158931799 = apply_prim__u62_u61(lst31798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3168731797);
arg_buffer[2] = x3158931799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3168731797))[0]);
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
void* _31947 = arg_buffer[1];
//reading env and args
void* kont31689 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3159031800 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31689);
arg_buffer[2] = x3159031800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31689))[0]);
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
void* _31948 = arg_buffer[1];
//reading env and args
void* kont31690 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3159131801 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31690);
arg_buffer[2] = x3159131801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31690))[0]);
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
void* _31949 = arg_buffer[1];
//reading env and args
void* kont31691 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3159231802 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31691);
arg_buffer[2] = x3159231802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31691))[0]);
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
void* _31950 = arg_buffer[1];
//reading env and args
void* kont31692 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3159331803 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31692);
arg_buffer[2] = x3159331803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31692))[0]);
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
void* _31951 = arg_buffer[1];
//reading env and args
void* kont31693 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3159431804 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31693);
arg_buffer[2] = x3159431804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31693))[0]);
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
void* _31952 = arg_buffer[1];
//reading env and args
void* kont31694 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3159531805 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31694);
arg_buffer[2] = x3159531805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31694))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam31953_fptr() // lam31953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31954 = arg_buffer[1];
//reading env and args
void* a3159831809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env31954))[3];
//not do dummy comment
void* a3159631806 = (decode_clo(env31954))[2];
//not do dummy comment
void* kont31695 = (decode_clo(env31954))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont31695;
arg_buffer[3] = a3159631806;
arg_buffer[4] = a3159831809;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31953 = encode_clo(alloc_clo(lam31953_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31957 = arg_buffer[1];
//reading env and args
void* kont31695 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar40161 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40161, "0", 10);
void* a3159631806 = encode_mpz(mpzvar40161);
mpz_t* mpzvar40162 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40162, "2", 10);
void* a3159731807 = encode_mpz(mpzvar40162);

//creating new closure instance
void** clo40164 = alloc_clo(lam31953_fptr, 3);

//setting env list
clo40164[1] = kont31695;
clo40164[2] = a3159631806;
clo40164[3] = equal_u63;
void* f3169631808 = encode_clo(clo40164);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3169631808;
arg_buffer[3] = x;
arg_buffer[4] = a3159731807;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam31958_fptr() // lam31958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31959 = arg_buffer[1];
//reading env and args
void* a3160131813 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31697 = (decode_clo(env31959))[3];
//not do dummy comment
void* a3159931810 = (decode_clo(env31959))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env31959))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont31697;
arg_buffer[3] = a3159931810;
arg_buffer[4] = a3160131813;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31958 = encode_clo(alloc_clo(lam31958_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31962 = arg_buffer[1];
//reading env and args
void* kont31697 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar40165 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40165, "1", 10);
void* a3159931810 = encode_mpz(mpzvar40165);
mpz_t* mpzvar40166 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40166, "2", 10);
void* a3160031811 = encode_mpz(mpzvar40166);

//creating new closure instance
void** clo40168 = alloc_clo(lam31958_fptr, 3);

//setting env list
clo40168[1] = equal_u63;
clo40168[2] = a3159931810;
clo40168[3] = kont31697;
void* f3169831812 = encode_clo(clo40168);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3169831812;
arg_buffer[3] = x;
arg_buffer[4] = a3160031811;
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
void* _31963 = arg_buffer[1];
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

void* kont3169931814 = prim_car(x);
void* x31815 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3169931814);
arg_buffer[2] = x31815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3169931814))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam31966_fptr() // lam31966 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31967 = arg_buffer[1];
//reading env and args
void* a3160731825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31701 = (decode_clo(env31967))[3];
//not do dummy comment
void* x = (decode_clo(env31967))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31967))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont31701;
arg_buffer[3] = x;
arg_buffer[4] = a3160731825;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31966 = encode_clo(alloc_clo(lam31966_fptr, 0));

void* lam31968_fptr() // lam31968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31969 = arg_buffer[1];
//reading env and args
void* a3160531822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31969))[5];
//not do dummy comment
void* x = (decode_clo(env31969))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env31969))[3];
//not do dummy comment
void* lst = (decode_clo(env31969))[2];
//not do dummy comment
void* kont31701 = (decode_clo(env31969))[1];

//if-clause
bool if_guard40169 = is_true(a3160531822);
if(if_guard40169)
{
void* x3160631823 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31701);
arg_buffer[2] = x3160631823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31701))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40171 = alloc_clo(lam31966_fptr, 3);

//setting env list
clo40171[1] = member_u63;
clo40171[2] = x;
clo40171[3] = kont31701;
void* f3170231824 = encode_clo(clo40171);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3170231824;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31968 = encode_clo(alloc_clo(lam31968_fptr, 0));

void* lam31970_fptr() // lam31970 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31971 = arg_buffer[1];
//reading env and args
void* a3160431820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31971))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env31971))[5];
//not do dummy comment
void* x = (decode_clo(env31971))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env31971))[3];
//not do dummy comment
void* lst = (decode_clo(env31971))[2];
//not do dummy comment
void* kont31701 = (decode_clo(env31971))[1];

//creating new closure instance
void** clo40173 = alloc_clo(lam31968_fptr, 5);

//setting env list
clo40173[1] = kont31701;
clo40173[2] = lst;
clo40173[3] = member_u63;
clo40173[4] = x;
clo40173[5] = cdr;
void* f3170331821 = encode_clo(clo40173);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3170331821;
arg_buffer[3] = a3160431820;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31970 = encode_clo(alloc_clo(lam31970_fptr, 0));

void* lam31972_fptr() // lam31972 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31973 = arg_buffer[1];
//reading env and args
void* a3160231817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31973))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env31973))[6];
//not do dummy comment
void* x = (decode_clo(env31973))[5];
//not do dummy comment
void* car = (decode_clo(env31973))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env31973))[3];
//not do dummy comment
void* lst = (decode_clo(env31973))[2];
//not do dummy comment
void* kont31701 = (decode_clo(env31973))[1];

//if-clause
bool if_guard40174 = is_true(a3160231817);
if(if_guard40174)
{
void* x3160331818 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31701);
arg_buffer[2] = x3160331818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31701))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40176 = alloc_clo(lam31970_fptr, 6);

//setting env list
clo40176[1] = kont31701;
clo40176[2] = lst;
clo40176[3] = member_u63;
clo40176[4] = x;
clo40176[5] = equal_u63;
clo40176[6] = cdr;
void* f3170431819 = encode_clo(clo40176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3170431819;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31972 = encode_clo(alloc_clo(lam31972_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31974 = arg_buffer[1];
//reading env and args
void* kont31701 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40178 = alloc_clo(lam31972_fptr, 7);

//setting env list
clo40178[1] = kont31701;
clo40178[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo40178[3] = member_u63;
clo40178[4] = car;
clo40178[5] = x;
clo40178[6] = equal_u63;
clo40178[7] = cdr;
void* f3170531816 = encode_clo(clo40178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3170531816;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam31975_fptr() // lam31975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31976 = arg_buffer[1];
//reading env and args
void* a3161131833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3161031831 = (decode_clo(env31976))[4];
//not do dummy comment
void* kont31706 = (decode_clo(env31976))[3];
//not do dummy comment
void* fun = (decode_clo(env31976))[2];
//not do dummy comment
void* foldl = (decode_clo(env31976))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont31706;
arg_buffer[3] = fun;
arg_buffer[4] = a3161031831;
arg_buffer[5] = a3161131833;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31975 = encode_clo(alloc_clo(lam31975_fptr, 0));

void* lam31977_fptr() // lam31977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31978 = arg_buffer[1];
//reading env and args
void* a3161031831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31978))[5];
//not do dummy comment
void* lst = (decode_clo(env31978))[4];
//not do dummy comment
void* kont31706 = (decode_clo(env31978))[3];
//not do dummy comment
void* fun = (decode_clo(env31978))[2];
//not do dummy comment
void* foldl = (decode_clo(env31978))[1];

//creating new closure instance
void** clo40180 = alloc_clo(lam31975_fptr, 4);

//setting env list
clo40180[1] = foldl;
clo40180[2] = fun;
clo40180[3] = kont31706;
clo40180[4] = a3161031831;
void* f3170731832 = encode_clo(clo40180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3170731832;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31977 = encode_clo(alloc_clo(lam31977_fptr, 0));

void* lam31979_fptr() // lam31979 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31980 = arg_buffer[1];
//reading env and args
void* a3160931829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31980))[6];
//not do dummy comment
void* lst = (decode_clo(env31980))[5];
//not do dummy comment
void* kont31706 = (decode_clo(env31980))[4];
//not do dummy comment
void* fun = (decode_clo(env31980))[3];
//not do dummy comment
void* acc = (decode_clo(env31980))[2];
//not do dummy comment
void* foldl = (decode_clo(env31980))[1];

//creating new closure instance
void** clo40182 = alloc_clo(lam31977_fptr, 5);

//setting env list
clo40182[1] = foldl;
clo40182[2] = fun;
clo40182[3] = kont31706;
clo40182[4] = lst;
clo40182[5] = cdr;
void* f3170831830 = encode_clo(clo40182);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3170831830;
arg_buffer[3] = a3160931829;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31979 = encode_clo(alloc_clo(lam31979_fptr, 0));

void* lam31981_fptr() // lam31981 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31982 = arg_buffer[1];
//reading env and args
void* a3160831827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31982))[7];
//not do dummy comment
void* lst = (decode_clo(env31982))[6];
//not do dummy comment
void* kont31706 = (decode_clo(env31982))[5];
//not do dummy comment
void* fun = (decode_clo(env31982))[4];
//not do dummy comment
void* acc = (decode_clo(env31982))[3];
//not do dummy comment
void* car = (decode_clo(env31982))[2];
//not do dummy comment
void* foldl = (decode_clo(env31982))[1];

//if-clause
bool if_guard40183 = is_true(a3160831827);
if(if_guard40183)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31706);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31706))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40185 = alloc_clo(lam31979_fptr, 6);

//setting env list
clo40185[1] = foldl;
clo40185[2] = acc;
clo40185[3] = fun;
clo40185[4] = kont31706;
clo40185[5] = lst;
clo40185[6] = cdr;
void* f3170931828 = encode_clo(clo40185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3170931828;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31981 = encode_clo(alloc_clo(lam31981_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31983 = arg_buffer[1];
//reading env and args
void* kont31706 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo40187 = alloc_clo(lam31981_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo40187[1] = foldl;
clo40187[2] = car;
clo40187[3] = acc;
clo40187[4] = fun;
clo40187[5] = kont31706;
clo40187[6] = lst;
clo40187[7] = cdr;
void* f3171031826 = encode_clo(clo40187);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3171031826;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam31984_fptr() // lam31984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31985 = arg_buffer[1];
//reading env and args
void* a3161531841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31985))[3];
//not do dummy comment
void* a3161331837 = (decode_clo(env31985))[2];
//not do dummy comment
void* kont31711 = (decode_clo(env31985))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont31711;
arg_buffer[3] = a3161331837;
arg_buffer[4] = a3161531841;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31984 = encode_clo(alloc_clo(lam31984_fptr, 0));

void* lam31986_fptr() // lam31986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31987 = arg_buffer[1];
//reading env and args
void* a3161431839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31987))[5];
//not do dummy comment
void* a3161331837 = (decode_clo(env31987))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31987))[3];
//not do dummy comment
void* cons = (decode_clo(env31987))[2];
//not do dummy comment
void* kont31711 = (decode_clo(env31987))[1];

//creating new closure instance
void** clo40189 = alloc_clo(lam31984_fptr, 3);

//setting env list
clo40189[1] = kont31711;
clo40189[2] = a3161331837;
clo40189[3] = reverse_u45helper;
void* f3171231840 = encode_clo(clo40189);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3171231840;
arg_buffer[3] = a3161431839;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31986 = encode_clo(alloc_clo(lam31986_fptr, 0));

void* lam31988_fptr() // lam31988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31989 = arg_buffer[1];
//reading env and args
void* a3161331837 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31989))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31989))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31989))[4];
//not do dummy comment
void* car = (decode_clo(env31989))[3];
//not do dummy comment
void* cons = (decode_clo(env31989))[2];
//not do dummy comment
void* kont31711 = (decode_clo(env31989))[1];

//creating new closure instance
void** clo40191 = alloc_clo(lam31986_fptr, 5);

//setting env list
clo40191[1] = kont31711;
clo40191[2] = cons;
clo40191[3] = lst2;
clo40191[4] = a3161331837;
clo40191[5] = reverse_u45helper;
void* f3171331838 = encode_clo(clo40191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3171331838;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31988 = encode_clo(alloc_clo(lam31988_fptr, 0));

void* lam31990_fptr() // lam31990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31991 = arg_buffer[1];
//reading env and args
void* a3161231835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31991))[7];
//not do dummy comment
void* lst = (decode_clo(env31991))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31991))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31991))[4];
//not do dummy comment
void* car = (decode_clo(env31991))[3];
//not do dummy comment
void* cons = (decode_clo(env31991))[2];
//not do dummy comment
void* kont31711 = (decode_clo(env31991))[1];

//if-clause
bool if_guard40192 = is_true(a3161231835);
if(if_guard40192)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31711);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31711))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40194 = alloc_clo(lam31988_fptr, 6);

//setting env list
clo40194[1] = kont31711;
clo40194[2] = cons;
clo40194[3] = car;
clo40194[4] = lst2;
clo40194[5] = reverse_u45helper;
clo40194[6] = lst;
void* f3171431836 = encode_clo(clo40194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3171431836;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31990 = encode_clo(alloc_clo(lam31990_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31992 = arg_buffer[1];
//reading env and args
void* kont31711 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40196 = alloc_clo(lam31990_fptr, 7);

//setting env list
clo40196[1] = kont31711;
clo40196[2] = cons;
clo40196[3] = car;
clo40196[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo40196[5] = reverse_u45helper;
clo40196[6] = lst;
clo40196[7] = cdr;
void* f3171531834 = encode_clo(clo40196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3171531834;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam31993_fptr() // lam31993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31994 = arg_buffer[1];
//reading env and args
void* a3161631843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31716 = (decode_clo(env31994))[3];
//not do dummy comment
void* lst = (decode_clo(env31994))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31994))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont31716;
arg_buffer[3] = lst;
arg_buffer[4] = a3161631843;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31993 = encode_clo(alloc_clo(lam31993_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31995 = arg_buffer[1];
//reading env and args
void* kont31716 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo40198 = alloc_clo(lam31993_fptr, 3);

//setting env list
clo40198[1] = reverse_u45helper;
clo40198[2] = lst;
clo40198[3] = kont31716;
void* f3171731842 = encode_clo(clo40198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3171731842;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam31996_fptr() // lam31996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31997 = arg_buffer[1];
//reading env and args
void* x3161931848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31718 = (decode_clo(env31997))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31718);
arg_buffer[2] = x3161931848;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31718))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31996 = encode_clo(alloc_clo(lam31996_fptr, 0));

void* lam31998_fptr() // lam31998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31999 = arg_buffer[1];
//reading env and args
void* a3162431857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31718 = (decode_clo(env31999))[4];
//not do dummy comment
void* a3162031850 = (decode_clo(env31999))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env31999))[2];
//not do dummy comment
void* a3162231853 = (decode_clo(env31999))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont31718;
arg_buffer[3] = a3162031850;
arg_buffer[4] = a3162231853;
arg_buffer[5] = a3162431857;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31998 = encode_clo(alloc_clo(lam31998_fptr, 0));

void* lam32000_fptr() // lam32000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32001 = arg_buffer[1];
//reading env and args
void* a3162331855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31718 = (decode_clo(env32001))[6];
//not do dummy comment
void* a3162031850 = (decode_clo(env32001))[5];
//not do dummy comment
void* cons = (decode_clo(env32001))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env32001))[3];
//not do dummy comment
void* a3162231853 = (decode_clo(env32001))[2];
//not do dummy comment
void* lst2 = (decode_clo(env32001))[1];

//creating new closure instance
void** clo40200 = alloc_clo(lam31998_fptr, 4);

//setting env list
clo40200[1] = a3162231853;
clo40200[2] = take_u45helper;
clo40200[3] = a3162031850;
clo40200[4] = kont31718;
void* f3172031856 = encode_clo(clo40200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3172031856;
arg_buffer[3] = a3162331855;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32000 = encode_clo(alloc_clo(lam32000_fptr, 0));

void* lam32002_fptr() // lam32002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32003 = arg_buffer[1];
//reading env and args
void* a3162231853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env32003))[7];
//not do dummy comment
void* kont31718 = (decode_clo(env32003))[6];
//not do dummy comment
void* a3162031850 = (decode_clo(env32003))[5];
//not do dummy comment
void* car = (decode_clo(env32003))[4];
//not do dummy comment
void* cons = (decode_clo(env32003))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env32003))[2];
//not do dummy comment
void* lst2 = (decode_clo(env32003))[1];

//creating new closure instance
void** clo40202 = alloc_clo(lam32000_fptr, 6);

//setting env list
clo40202[1] = lst2;
clo40202[2] = a3162231853;
clo40202[3] = take_u45helper;
clo40202[4] = cons;
clo40202[5] = a3162031850;
clo40202[6] = kont31718;
void* f3172131854 = encode_clo(clo40202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3172131854;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32002 = encode_clo(alloc_clo(lam32002_fptr, 0));

void* lam32005_fptr() // lam32005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32006 = arg_buffer[1];
//reading env and args
void* a3162031850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env32006))[8];
//not do dummy comment
void* kont31718 = (decode_clo(env32006))[7];
//not do dummy comment
void* cons = (decode_clo(env32006))[6];
//not do dummy comment
void* _u45 = (decode_clo(env32006))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env32006))[4];
//not do dummy comment
void* lst2 = (decode_clo(env32006))[3];
//not do dummy comment
void* n = (decode_clo(env32006))[2];
//not do dummy comment
void* car = (decode_clo(env32006))[1];
mpz_t* mpzvar40203 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40203, "1", 10);
void* a3162131851 = encode_mpz(mpzvar40203);

//creating new closure instance
void** clo40205 = alloc_clo(lam32002_fptr, 7);

//setting env list
clo40205[1] = lst2;
clo40205[2] = take_u45helper;
clo40205[3] = cons;
clo40205[4] = car;
clo40205[5] = a3162031850;
clo40205[6] = kont31718;
clo40205[7] = lst;
void* f3172231852 = encode_clo(clo40205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3172231852;
arg_buffer[3] = n;
arg_buffer[4] = a3162131851;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32005 = encode_clo(alloc_clo(lam32005_fptr, 0));

void* lam32007_fptr() // lam32007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32008 = arg_buffer[1];
//reading env and args
void* a3161831846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32008))[10];
//not do dummy comment
void* lst = (decode_clo(env32008))[9];
//not do dummy comment
void* kont31718 = (decode_clo(env32008))[8];
//not do dummy comment
void* reverse = (decode_clo(env32008))[7];
//not do dummy comment
void* cons = (decode_clo(env32008))[6];
//not do dummy comment
void* _u45 = (decode_clo(env32008))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env32008))[4];
//not do dummy comment
void* lst2 = (decode_clo(env32008))[3];
//not do dummy comment
void* n = (decode_clo(env32008))[2];
//not do dummy comment
void* car = (decode_clo(env32008))[1];

//if-clause
bool if_guard40206 = is_true(a3161831846);
if(if_guard40206)
{

//creating new closure instance
void** clo40208 = alloc_clo(lam31996_fptr, 1);

//setting env list
clo40208[1] = kont31718;
void* f3171931847 = encode_clo(clo40208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3171931847;
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
void** clo40210 = alloc_clo(lam32005_fptr, 8);

//setting env list
clo40210[1] = car;
clo40210[2] = n;
clo40210[3] = lst2;
clo40210[4] = take_u45helper;
clo40210[5] = _u45;
clo40210[6] = cons;
clo40210[7] = kont31718;
clo40210[8] = lst;
void* f3172331849 = encode_clo(clo40210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3172331849;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32007 = encode_clo(alloc_clo(lam32007_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32010 = arg_buffer[1];
//reading env and args
void* kont31718 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar40211 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40211, "0", 10);
void* a3161731844 = encode_mpz(mpzvar40211);

//creating new closure instance
void** clo40213 = alloc_clo(lam32007_fptr, 10);

//setting env list
clo40213[1] = car;
clo40213[2] = n;
clo40213[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo40213[4] = take_u45helper;
clo40213[5] = _u45;
clo40213[6] = cons;
clo40213[7] = reverse;
clo40213[8] = kont31718;
clo40213[9] = lst;
clo40213[10] = cdr;
void* f3172431845 = encode_clo(clo40213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3172431845;
arg_buffer[3] = n;
arg_buffer[4] = a3161731844;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam32011_fptr() // lam32011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32012 = arg_buffer[1];
//reading env and args
void* a3162531859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env32012))[4];
//not do dummy comment
void* n = (decode_clo(env32012))[3];
//not do dummy comment
void* kont31725 = (decode_clo(env32012))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env32012))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont31725;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3162531859;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32011 = encode_clo(alloc_clo(lam32011_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32013 = arg_buffer[1];
//reading env and args
void* kont31725 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40215 = alloc_clo(lam32011_fptr, 4);

//setting env list
clo40215[1] = take_u45helper;
clo40215[2] = kont31725;
clo40215[3] = n;
clo40215[4] = lst;
void* f3172631858 = encode_clo(clo40215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3172631858;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam32015_fptr() // lam32015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32016 = arg_buffer[1];
//reading env and args
void* a3163031867 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3162831863 = (decode_clo(env32016))[3];
//not do dummy comment
void* _u43 = (decode_clo(env32016))[2];
//not do dummy comment
void* kont31727 = (decode_clo(env32016))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont31727;
arg_buffer[3] = a3162831863;
arg_buffer[4] = a3163031867;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32015 = encode_clo(alloc_clo(lam32015_fptr, 0));

void* lam32017_fptr() // lam32017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32018 = arg_buffer[1];
//reading env and args
void* a3162931865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env32018))[4];
//not do dummy comment
void* a3162831863 = (decode_clo(env32018))[3];
//not do dummy comment
void* _u43 = (decode_clo(env32018))[2];
//not do dummy comment
void* kont31727 = (decode_clo(env32018))[1];

//creating new closure instance
void** clo40217 = alloc_clo(lam32015_fptr, 3);

//setting env list
clo40217[1] = kont31727;
clo40217[2] = _u43;
clo40217[3] = a3162831863;
void* f3172831866 = encode_clo(clo40217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3172831866;
arg_buffer[3] = a3162931865;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32017 = encode_clo(alloc_clo(lam32017_fptr, 0));

void* lam32020_fptr() // lam32020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32021 = arg_buffer[1];
//reading env and args
void* a3162631861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32021))[5];
//not do dummy comment
void* lst = (decode_clo(env32021))[4];
//not do dummy comment
void* length = (decode_clo(env32021))[3];
//not do dummy comment
void* _u43 = (decode_clo(env32021))[2];
//not do dummy comment
void* kont31727 = (decode_clo(env32021))[1];

//if-clause
bool if_guard40218 = is_true(a3162631861);
if(if_guard40218)
{
mpz_t* mpzvar40219 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40219, "0", 10);
void* x3162731862 = encode_mpz(mpzvar40219);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31727);
arg_buffer[2] = x3162731862;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31727))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar40220 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40220, "1", 10);
void* a3162831863 = encode_mpz(mpzvar40220);

//creating new closure instance
void** clo40222 = alloc_clo(lam32017_fptr, 4);

//setting env list
clo40222[1] = kont31727;
clo40222[2] = _u43;
clo40222[3] = a3162831863;
clo40222[4] = length;
void* f3172931864 = encode_clo(clo40222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3172931864;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32020 = encode_clo(alloc_clo(lam32020_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32022 = arg_buffer[1];
//reading env and args
void* kont31727 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo40224 = alloc_clo(lam32020_fptr, 5);

//setting env list
clo40224[1] = kont31727;
clo40224[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo40224[3] = length;
clo40224[4] = lst;
clo40224[5] = cdr;
void* f3173031860 = encode_clo(clo40224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3173031860;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam32023_fptr() // lam32023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32024 = arg_buffer[1];
//reading env and args
void* x3163231871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31731 = (decode_clo(env32024))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31731);
arg_buffer[2] = x3163231871;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31731))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32023 = encode_clo(alloc_clo(lam32023_fptr, 0));

void* lam32025_fptr() // lam32025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32026 = arg_buffer[1];
//reading env and args
void* a3163631879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env32026))[3];
//not do dummy comment
void* kont31731 = (decode_clo(env32026))[2];
//not do dummy comment
void* a3163431875 = (decode_clo(env32026))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31731;
arg_buffer[3] = a3163431875;
arg_buffer[4] = a3163631879;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32025 = encode_clo(alloc_clo(lam32025_fptr, 0));

void* lam32027_fptr() // lam32027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32028 = arg_buffer[1];
//reading env and args
void* a3163531877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env32028))[5];
//not do dummy comment
void* proc = (decode_clo(env32028))[4];
//not do dummy comment
void* cons = (decode_clo(env32028))[3];
//not do dummy comment
void* kont31731 = (decode_clo(env32028))[2];
//not do dummy comment
void* a3163431875 = (decode_clo(env32028))[1];

//creating new closure instance
void** clo40226 = alloc_clo(lam32025_fptr, 3);

//setting env list
clo40226[1] = a3163431875;
clo40226[2] = kont31731;
clo40226[3] = cons;
void* f3173331878 = encode_clo(clo40226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3173331878;
arg_buffer[3] = proc;
arg_buffer[4] = a3163531877;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32027 = encode_clo(alloc_clo(lam32027_fptr, 0));

void* lam32029_fptr() // lam32029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32030 = arg_buffer[1];
//reading env and args
void* a3163431875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32030))[6];
//not do dummy comment
void* kont31731 = (decode_clo(env32030))[5];
//not do dummy comment
void* lst = (decode_clo(env32030))[4];
//not do dummy comment
void* map = (decode_clo(env32030))[3];
//not do dummy comment
void* proc = (decode_clo(env32030))[2];
//not do dummy comment
void* cons = (decode_clo(env32030))[1];

//creating new closure instance
void** clo40228 = alloc_clo(lam32027_fptr, 5);

//setting env list
clo40228[1] = a3163431875;
clo40228[2] = kont31731;
clo40228[3] = cons;
clo40228[4] = proc;
clo40228[5] = map;
void* f3173431876 = encode_clo(clo40228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3173431876;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32029 = encode_clo(alloc_clo(lam32029_fptr, 0));

void* lam32031_fptr() // lam32031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32032 = arg_buffer[1];
//reading env and args
void* a3163331873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32032))[6];
//not do dummy comment
void* kont31731 = (decode_clo(env32032))[5];
//not do dummy comment
void* lst = (decode_clo(env32032))[4];
//not do dummy comment
void* map = (decode_clo(env32032))[3];
//not do dummy comment
void* proc = (decode_clo(env32032))[2];
//not do dummy comment
void* cons = (decode_clo(env32032))[1];

//creating new closure instance
void** clo40230 = alloc_clo(lam32029_fptr, 6);

//setting env list
clo40230[1] = cons;
clo40230[2] = proc;
clo40230[3] = map;
clo40230[4] = lst;
clo40230[5] = kont31731;
clo40230[6] = cdr;
void* f3173531874 = encode_clo(clo40230);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3173531874;
arg_buffer[3] = a3163331873;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32031 = encode_clo(alloc_clo(lam32031_fptr, 0));

void* lam32033_fptr() // lam32033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32034 = arg_buffer[1];
//reading env and args
void* a3163131869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31731 = (decode_clo(env32034))[8];
//not do dummy comment
void* lst = (decode_clo(env32034))[7];
//not do dummy comment
void* map = (decode_clo(env32034))[6];
//not do dummy comment
void* proc = (decode_clo(env32034))[5];
//not do dummy comment
void* car = (decode_clo(env32034))[4];
//not do dummy comment
void* cons = (decode_clo(env32034))[3];
//not do dummy comment
void* list = (decode_clo(env32034))[2];
//not do dummy comment
void* cdr = (decode_clo(env32034))[1];

//if-clause
bool if_guard40231 = is_true(a3163131869);
if(if_guard40231)
{

//creating new closure instance
void** clo40233 = alloc_clo(lam32023_fptr, 1);

//setting env list
clo40233[1] = kont31731;
void* f3173231870 = encode_clo(clo40233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3173231870;
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
void** clo40235 = alloc_clo(lam32031_fptr, 6);

//setting env list
clo40235[1] = cons;
clo40235[2] = proc;
clo40235[3] = map;
clo40235[4] = lst;
clo40235[5] = kont31731;
clo40235[6] = cdr;
void* f3173631872 = encode_clo(clo40235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3173631872;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32033 = encode_clo(alloc_clo(lam32033_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32035 = arg_buffer[1];
//reading env and args
void* kont31731 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40237 = alloc_clo(lam32033_fptr, 8);

//setting env list
clo40237[1] = cdr;
clo40237[2] = list;
clo40237[3] = cons;
clo40237[4] = car;
clo40237[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo40237[6] = map;
clo40237[7] = lst;
clo40237[8] = kont31731;
void* f3173731868 = encode_clo(clo40237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3173731868;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam32036_fptr() // lam32036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32037 = arg_buffer[1];
//reading env and args
void* x3163831883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31738 = (decode_clo(env32037))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31738);
arg_buffer[2] = x3163831883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31738))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32036 = encode_clo(alloc_clo(lam32036_fptr, 0));

void* lam32038_fptr() // lam32038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32039 = arg_buffer[1];
//reading env and args
void* a3164331893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3164131889 = (decode_clo(env32039))[3];
//not do dummy comment
void* kont31738 = (decode_clo(env32039))[2];
//not do dummy comment
void* cons = (decode_clo(env32039))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31738;
arg_buffer[3] = a3164131889;
arg_buffer[4] = a3164331893;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32038 = encode_clo(alloc_clo(lam32038_fptr, 0));

void* lam32040_fptr() // lam32040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32041 = arg_buffer[1];
//reading env and args
void* a3164231891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3164131889 = (decode_clo(env32041))[5];
//not do dummy comment
void* op = (decode_clo(env32041))[4];
//not do dummy comment
void* kont31738 = (decode_clo(env32041))[3];
//not do dummy comment
void* filter = (decode_clo(env32041))[2];
//not do dummy comment
void* cons = (decode_clo(env32041))[1];

//creating new closure instance
void** clo40239 = alloc_clo(lam32038_fptr, 3);

//setting env list
clo40239[1] = cons;
clo40239[2] = kont31738;
clo40239[3] = a3164131889;
void* f3174031892 = encode_clo(clo40239);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3174031892;
arg_buffer[3] = op;
arg_buffer[4] = a3164231891;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32040 = encode_clo(alloc_clo(lam32040_fptr, 0));

void* lam32042_fptr() // lam32042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32043 = arg_buffer[1];
//reading env and args
void* a3164131889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32043))[6];
//not do dummy comment
void* lst = (decode_clo(env32043))[5];
//not do dummy comment
void* op = (decode_clo(env32043))[4];
//not do dummy comment
void* kont31738 = (decode_clo(env32043))[3];
//not do dummy comment
void* filter = (decode_clo(env32043))[2];
//not do dummy comment
void* cons = (decode_clo(env32043))[1];

//creating new closure instance
void** clo40241 = alloc_clo(lam32040_fptr, 5);

//setting env list
clo40241[1] = cons;
clo40241[2] = filter;
clo40241[3] = kont31738;
clo40241[4] = op;
clo40241[5] = a3164131889;
void* f3174131890 = encode_clo(clo40241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3174131890;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32042 = encode_clo(alloc_clo(lam32042_fptr, 0));

void* lam32044_fptr() // lam32044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32045 = arg_buffer[1];
//reading env and args
void* a3164431895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env32045))[3];
//not do dummy comment
void* kont31738 = (decode_clo(env32045))[2];
//not do dummy comment
void* filter = (decode_clo(env32045))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont31738;
arg_buffer[3] = op;
arg_buffer[4] = a3164431895;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32044 = encode_clo(alloc_clo(lam32044_fptr, 0));

void* lam32046_fptr() // lam32046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32047 = arg_buffer[1];
//reading env and args
void* a3164031887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32047))[7];
//not do dummy comment
void* lst = (decode_clo(env32047))[6];
//not do dummy comment
void* op = (decode_clo(env32047))[5];
//not do dummy comment
void* kont31738 = (decode_clo(env32047))[4];
//not do dummy comment
void* cons = (decode_clo(env32047))[3];
//not do dummy comment
void* filter = (decode_clo(env32047))[2];
//not do dummy comment
void* car = (decode_clo(env32047))[1];

//if-clause
bool if_guard40242 = is_true(a3164031887);
if(if_guard40242)
{

//creating new closure instance
void** clo40244 = alloc_clo(lam32042_fptr, 6);

//setting env list
clo40244[1] = cons;
clo40244[2] = filter;
clo40244[3] = kont31738;
clo40244[4] = op;
clo40244[5] = lst;
clo40244[6] = cdr;
void* f3174231888 = encode_clo(clo40244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3174231888;
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
void** clo40246 = alloc_clo(lam32044_fptr, 3);

//setting env list
clo40246[1] = filter;
clo40246[2] = kont31738;
clo40246[3] = op;
void* f3174331894 = encode_clo(clo40246);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3174331894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32046 = encode_clo(alloc_clo(lam32046_fptr, 0));

void* lam32048_fptr() // lam32048 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32049 = arg_buffer[1];
//reading env and args
void* a3163931885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32049))[7];
//not do dummy comment
void* lst = (decode_clo(env32049))[6];
//not do dummy comment
void* op = (decode_clo(env32049))[5];
//not do dummy comment
void* kont31738 = (decode_clo(env32049))[4];
//not do dummy comment
void* cons = (decode_clo(env32049))[3];
//not do dummy comment
void* filter = (decode_clo(env32049))[2];
//not do dummy comment
void* car = (decode_clo(env32049))[1];

//creating new closure instance
void** clo40248 = alloc_clo(lam32046_fptr, 7);

//setting env list
clo40248[1] = car;
clo40248[2] = filter;
clo40248[3] = cons;
clo40248[4] = kont31738;
clo40248[5] = op;
clo40248[6] = lst;
clo40248[7] = cdr;
void* f3174431886 = encode_clo(clo40248);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3174431886;
arg_buffer[3] = a3163931885;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32048 = encode_clo(alloc_clo(lam32048_fptr, 0));

void* lam32050_fptr() // lam32050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32051 = arg_buffer[1];
//reading env and args
void* a3163731881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env32051))[8];
//not do dummy comment
void* op = (decode_clo(env32051))[7];
//not do dummy comment
void* kont31738 = (decode_clo(env32051))[6];
//not do dummy comment
void* cons = (decode_clo(env32051))[5];
//not do dummy comment
void* list = (decode_clo(env32051))[4];
//not do dummy comment
void* cdr = (decode_clo(env32051))[3];
//not do dummy comment
void* filter = (decode_clo(env32051))[2];
//not do dummy comment
void* car = (decode_clo(env32051))[1];

//if-clause
bool if_guard40249 = is_true(a3163731881);
if(if_guard40249)
{

//creating new closure instance
void** clo40251 = alloc_clo(lam32036_fptr, 1);

//setting env list
clo40251[1] = kont31738;
void* f3173931882 = encode_clo(clo40251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3173931882;
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
void** clo40253 = alloc_clo(lam32048_fptr, 7);

//setting env list
clo40253[1] = car;
clo40253[2] = filter;
clo40253[3] = cons;
clo40253[4] = kont31738;
clo40253[5] = op;
clo40253[6] = lst;
clo40253[7] = cdr;
void* f3174531884 = encode_clo(clo40253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3174531884;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32050 = encode_clo(alloc_clo(lam32050_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32052 = arg_buffer[1];
//reading env and args
void* kont31738 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40255 = alloc_clo(lam32050_fptr, 8);

//setting env list
clo40255[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo40255[2] = filter;
clo40255[3] = cdr;
clo40255[4] = list;
clo40255[5] = cons;
clo40255[6] = kont31738;
clo40255[7] = op;
clo40255[8] = lst;
void* f3174631880 = encode_clo(clo40255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3174631880;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam32053_fptr() // lam32053 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32054 = arg_buffer[1];
//reading env and args
void* a3164931903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31747 = (decode_clo(env32054))[3];
//not do dummy comment
void* drop = (decode_clo(env32054))[2];
//not do dummy comment
void* a3164731900 = (decode_clo(env32054))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont31747;
arg_buffer[3] = a3164731900;
arg_buffer[4] = a3164931903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32053 = encode_clo(alloc_clo(lam32053_fptr, 0));

void* lam32056_fptr() // lam32056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32057 = arg_buffer[1];
//reading env and args
void* a3164731900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31747 = (decode_clo(env32057))[4];
//not do dummy comment
void* drop = (decode_clo(env32057))[3];
//not do dummy comment
void* n = (decode_clo(env32057))[2];
//not do dummy comment
void* _u45 = (decode_clo(env32057))[1];
mpz_t* mpzvar40256 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40256, "1", 10);
void* a3164831901 = encode_mpz(mpzvar40256);

//creating new closure instance
void** clo40258 = alloc_clo(lam32053_fptr, 3);

//setting env list
clo40258[1] = a3164731900;
clo40258[2] = drop;
clo40258[3] = kont31747;
void* f3174831902 = encode_clo(clo40258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3174831902;
arg_buffer[3] = n;
arg_buffer[4] = a3164831901;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32056 = encode_clo(alloc_clo(lam32056_fptr, 0));

void* lam32058_fptr() // lam32058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32059 = arg_buffer[1];
//reading env and args
void* a3164631898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32059))[6];
//not do dummy comment
void* kont31747 = (decode_clo(env32059))[5];
//not do dummy comment
void* n = (decode_clo(env32059))[4];
//not do dummy comment
void* _u45 = (decode_clo(env32059))[3];
//not do dummy comment
void* lst = (decode_clo(env32059))[2];
//not do dummy comment
void* drop = (decode_clo(env32059))[1];

//if-clause
bool if_guard40259 = is_true(a3164631898);
if(if_guard40259)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31747);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31747))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40261 = alloc_clo(lam32056_fptr, 4);

//setting env list
clo40261[1] = _u45;
clo40261[2] = n;
clo40261[3] = drop;
clo40261[4] = kont31747;
void* f3174931899 = encode_clo(clo40261);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3174931899;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32058 = encode_clo(alloc_clo(lam32058_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32061 = arg_buffer[1];
//reading env and args
void* kont31747 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar40262 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40262, "0", 10);
void* a3164531896 = encode_mpz(mpzvar40262);

//creating new closure instance
void** clo40264 = alloc_clo(lam32058_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo40264[1] = drop;
clo40264[2] = lst;
clo40264[3] = _u45;
clo40264[4] = n;
clo40264[5] = kont31747;
clo40264[6] = cdr;
void* f3175031897 = encode_clo(clo40264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3175031897;
arg_buffer[3] = n;
arg_buffer[4] = a3164531896;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam32062_fptr() // lam32062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32063 = arg_buffer[1];
//reading env and args
void* a3165331911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3165131907 = (decode_clo(env32063))[3];
//not do dummy comment
void* kont31751 = (decode_clo(env32063))[2];
//not do dummy comment
void* proc = (decode_clo(env32063))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont31751;
arg_buffer[3] = a3165131907;
arg_buffer[4] = a3165331911;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32062 = encode_clo(alloc_clo(lam32062_fptr, 0));

void* lam32064_fptr() // lam32064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32065 = arg_buffer[1];
//reading env and args
void* a3165231909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3165131907 = (decode_clo(env32065))[5];
//not do dummy comment
void* foldr = (decode_clo(env32065))[4];
//not do dummy comment
void* kont31751 = (decode_clo(env32065))[3];
//not do dummy comment
void* proc = (decode_clo(env32065))[2];
//not do dummy comment
void* acc = (decode_clo(env32065))[1];

//creating new closure instance
void** clo40266 = alloc_clo(lam32062_fptr, 3);

//setting env list
clo40266[1] = proc;
clo40266[2] = kont31751;
clo40266[3] = a3165131907;
void* f3175231910 = encode_clo(clo40266);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3175231910;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3165231909;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32064 = encode_clo(alloc_clo(lam32064_fptr, 0));

void* lam32066_fptr() // lam32066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32067 = arg_buffer[1];
//reading env and args
void* a3165131907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32067))[6];
//not do dummy comment
void* kont31751 = (decode_clo(env32067))[5];
//not do dummy comment
void* foldr = (decode_clo(env32067))[4];
//not do dummy comment
void* lst = (decode_clo(env32067))[3];
//not do dummy comment
void* proc = (decode_clo(env32067))[2];
//not do dummy comment
void* acc = (decode_clo(env32067))[1];

//creating new closure instance
void** clo40268 = alloc_clo(lam32064_fptr, 5);

//setting env list
clo40268[1] = acc;
clo40268[2] = proc;
clo40268[3] = kont31751;
clo40268[4] = foldr;
clo40268[5] = a3165131907;
void* f3175331908 = encode_clo(clo40268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3175331908;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32066 = encode_clo(alloc_clo(lam32066_fptr, 0));

void* lam32068_fptr() // lam32068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32069 = arg_buffer[1];
//reading env and args
void* a3165031905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32069))[7];
//not do dummy comment
void* kont31751 = (decode_clo(env32069))[6];
//not do dummy comment
void* car = (decode_clo(env32069))[5];
//not do dummy comment
void* foldr = (decode_clo(env32069))[4];
//not do dummy comment
void* lst = (decode_clo(env32069))[3];
//not do dummy comment
void* proc = (decode_clo(env32069))[2];
//not do dummy comment
void* acc = (decode_clo(env32069))[1];

//if-clause
bool if_guard40269 = is_true(a3165031905);
if(if_guard40269)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31751);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31751))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40271 = alloc_clo(lam32066_fptr, 6);

//setting env list
clo40271[1] = acc;
clo40271[2] = proc;
clo40271[3] = lst;
clo40271[4] = foldr;
clo40271[5] = kont31751;
clo40271[6] = cdr;
void* f3175431906 = encode_clo(clo40271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3175431906;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32068 = encode_clo(alloc_clo(lam32068_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32070 = arg_buffer[1];
//reading env and args
void* kont31751 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo40273 = alloc_clo(lam32068_fptr, 7);

//setting env list
clo40273[1] = acc;
clo40273[2] = proc;
clo40273[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo40273[4] = foldr;
clo40273[5] = car;
clo40273[6] = kont31751;
clo40273[7] = cdr;
void* f3175531904 = encode_clo(clo40273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3175531904;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam32071_fptr() // lam32071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32072 = arg_buffer[1];
//reading env and args
void* a3165731919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3165531915 = (decode_clo(env32072))[3];
//not do dummy comment
void* kont31756 = (decode_clo(env32072))[2];
//not do dummy comment
void* cons = (decode_clo(env32072))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31756;
arg_buffer[3] = a3165531915;
arg_buffer[4] = a3165731919;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32071 = encode_clo(alloc_clo(lam32071_fptr, 0));

void* lam32073_fptr() // lam32073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32074 = arg_buffer[1];
//reading env and args
void* a3165631917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env32074))[5];
//not do dummy comment
void* a3165531915 = (decode_clo(env32074))[4];
//not do dummy comment
void* kont31756 = (decode_clo(env32074))[3];
//not do dummy comment
void* lst2 = (decode_clo(env32074))[2];
//not do dummy comment
void* cons = (decode_clo(env32074))[1];

//creating new closure instance
void** clo40275 = alloc_clo(lam32071_fptr, 3);

//setting env list
clo40275[1] = cons;
clo40275[2] = kont31756;
clo40275[3] = a3165531915;
void* f3175731918 = encode_clo(clo40275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3175731918;
arg_buffer[3] = a3165631917;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32073 = encode_clo(alloc_clo(lam32073_fptr, 0));

void* lam32075_fptr() // lam32075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32076 = arg_buffer[1];
//reading env and args
void* a3165531915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32076))[6];
//not do dummy comment
void* append = (decode_clo(env32076))[5];
//not do dummy comment
void* kont31756 = (decode_clo(env32076))[4];
//not do dummy comment
void* lst2 = (decode_clo(env32076))[3];
//not do dummy comment
void* lst1 = (decode_clo(env32076))[2];
//not do dummy comment
void* cons = (decode_clo(env32076))[1];

//creating new closure instance
void** clo40277 = alloc_clo(lam32073_fptr, 5);

//setting env list
clo40277[1] = cons;
clo40277[2] = lst2;
clo40277[3] = kont31756;
clo40277[4] = a3165531915;
clo40277[5] = append;
void* f3175831916 = encode_clo(clo40277);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3175831916;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32075 = encode_clo(alloc_clo(lam32075_fptr, 0));

void* lam32077_fptr() // lam32077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32078 = arg_buffer[1];
//reading env and args
void* a3165431913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32078))[7];
//not do dummy comment
void* append = (decode_clo(env32078))[6];
//not do dummy comment
void* kont31756 = (decode_clo(env32078))[5];
//not do dummy comment
void* lst2 = (decode_clo(env32078))[4];
//not do dummy comment
void* cons = (decode_clo(env32078))[3];
//not do dummy comment
void* lst1 = (decode_clo(env32078))[2];
//not do dummy comment
void* car = (decode_clo(env32078))[1];

//if-clause
bool if_guard40278 = is_true(a3165431913);
if(if_guard40278)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31756);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31756))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40280 = alloc_clo(lam32075_fptr, 6);

//setting env list
clo40280[1] = cons;
clo40280[2] = lst1;
clo40280[3] = lst2;
clo40280[4] = kont31756;
clo40280[5] = append;
clo40280[6] = cdr;
void* f3175931914 = encode_clo(clo40280);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3175931914;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32077 = encode_clo(alloc_clo(lam32077_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32079 = arg_buffer[1];
//reading env and args
void* kont31756 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40282 = alloc_clo(lam32077_fptr, 7);

//setting env list
clo40282[1] = car;
clo40282[2] = lst1;
clo40282[3] = cons;
clo40282[4] = lst2;
clo40282[5] = kont31756;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo40282[6] = append;
clo40282[7] = cdr;
void* f3176031912 = encode_clo(clo40282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3176031912;
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
void* _32080 = arg_buffer[1];
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

void* kont3176131920 = prim_car(lst);
void* lst31921 = prim_cdr(lst);
void* x3165831922 = apply_prim_hash(lst31921);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3176131920);
arg_buffer[2] = x3165831922;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3176131920))[0]);
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
void* _32081 = arg_buffer[1];
//reading env and args
void* kont31763 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3165931923 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31763);
arg_buffer[2] = x3165931923;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31763))[0]);
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
void* _32082 = arg_buffer[1];
//reading env and args
void* kont31764 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3166031924 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31764);
arg_buffer[2] = x3166031924;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31764))[0]);
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
void* _32083 = arg_buffer[1];
//reading env and args
void* kont31765 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3166131925 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31765);
arg_buffer[2] = x3166131925;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31765))[0]);
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
void* _32084 = arg_buffer[1];
//reading env and args
void* kont31766 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3166231926 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31766);
arg_buffer[2] = x3166231926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31766))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam32086_fptr() // lam32086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32087 = arg_buffer[1];
//reading env and args
void* a3166831935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31767 = (decode_clo(env32087))[3];
//not do dummy comment
void* _u42 = (decode_clo(env32087))[2];
//not do dummy comment
void* n = (decode_clo(env32087))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont31767;
arg_buffer[3] = n;
arg_buffer[4] = a3166831935;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32086 = encode_clo(alloc_clo(lam32086_fptr, 0));

void* lam32088_fptr() // lam32088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32089 = arg_buffer[1];
//reading env and args
void* a3166731933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31767 = (decode_clo(env32089))[4];
//not do dummy comment
void* _u42 = (decode_clo(env32089))[3];
//not do dummy comment
void* fact = (decode_clo(env32089))[2];
//not do dummy comment
void* n = (decode_clo(env32089))[1];

//creating new closure instance
void** clo40284 = alloc_clo(lam32086_fptr, 3);

//setting env list
clo40284[1] = n;
clo40284[2] = _u42;
clo40284[3] = kont31767;
void* f3176831934 = encode_clo(clo40284);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = f3176831934;
arg_buffer[3] = a3166731933;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32088 = encode_clo(alloc_clo(lam32088_fptr, 0));

void* lam32091_fptr() // lam32091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32092 = arg_buffer[1];
//reading env and args
void* a3166431929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31767 = (decode_clo(env32092))[5];
//not do dummy comment
void* _u42 = (decode_clo(env32092))[4];
//not do dummy comment
void* fact = (decode_clo(env32092))[3];
//not do dummy comment
void* n = (decode_clo(env32092))[2];
//not do dummy comment
void* _u45 = (decode_clo(env32092))[1];

//if-clause
bool if_guard40285 = is_true(a3166431929);
if(if_guard40285)
{
mpz_t* mpzvar40286 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40286, "1", 10);
void* x3166531930 = encode_mpz(mpzvar40286);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31767);
arg_buffer[2] = x3166531930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31767))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar40287 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40287, "1", 10);
void* a3166631931 = encode_mpz(mpzvar40287);

//creating new closure instance
void** clo40289 = alloc_clo(lam32088_fptr, 4);

//setting env list
clo40289[1] = n;
clo40289[2] = fact;
clo40289[3] = _u42;
clo40289[4] = kont31767;
void* f3176931932 = encode_clo(clo40289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3176931932;
arg_buffer[3] = n;
arg_buffer[4] = a3166631931;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32091 = encode_clo(alloc_clo(lam32091_fptr, 0));

void* fact_fptr() // fact 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32094 = arg_buffer[1];
//reading env and args
void* kont31767 = arg_buffer[2];
void* n = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar40290 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40290, "0", 10);
void* a3166331927 = encode_mpz(mpzvar40290);

//creating new closure instance
void** clo40292 = alloc_clo(lam32091_fptr, 5);

//setting env list
clo40292[1] = _u45;
clo40292[2] = n;
void* fact = encode_clo(alloc_clo(fact_fptr, 0));

clo40292[3] = fact;
clo40292[4] = _u42;
clo40292[5] = kont31767;
void* f3177031928 = encode_clo(clo40292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3177031928;
arg_buffer[3] = a3166331927;
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
void* _32096 = arg_buffer[1];
//reading env and args
void* kont31771 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar40293 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40293, "5", 10);
void* a3166931936 = encode_mpz(mpzvar40293);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = kont31771;
arg_buffer[3] = a3166931936;
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

