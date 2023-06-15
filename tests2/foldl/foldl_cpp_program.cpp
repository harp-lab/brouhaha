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
void* _29887 = arg_buffer[1];
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

void* kont2961429718 = prim_car(lst);
void* lst29719 = prim_cdr(lst);
void* x2952229720 = apply_prim__u43(lst29719);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2961429718);
arg_buffer[2] = x2952229720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2961429718))[0]);
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
void* _29888 = arg_buffer[1];
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

void* kont2961629721 = prim_car(lst);
void* lst29722 = prim_cdr(lst);
void* x2952329723 = apply_prim__u45(lst29722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2961629721);
arg_buffer[2] = x2952329723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2961629721))[0]);
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
void* _29889 = arg_buffer[1];
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

void* kont2961829724 = prim_car(lst);
void* lst29725 = prim_cdr(lst);
void* x2952429726 = apply_prim__u42(lst29725);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2961829724);
arg_buffer[2] = x2952429726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2961829724))[0]);
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
void* _29890 = arg_buffer[1];
//reading env and args
void* kont29620 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2952529727 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29620);
arg_buffer[2] = x2952529727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29620))[0]);
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
void* _29891 = arg_buffer[1];
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

void* kont2962129728 = prim_car(lst);
void* lst29729 = prim_cdr(lst);
void* x2952629730 = apply_prim__u47(lst29729);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2962129728);
arg_buffer[2] = x2952629730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2962129728))[0]);
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
void* _29892 = arg_buffer[1];
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

void* kont2962329731 = prim_car(lst);
void* lst29732 = prim_cdr(lst);
void* x2952729733 = apply_prim__u61(lst29732);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2962329731);
arg_buffer[2] = x2952729733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2962329731))[0]);
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
void* _29893 = arg_buffer[1];
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

void* kont2962529734 = prim_car(lst);
void* lst29735 = prim_cdr(lst);
void* x2952829736 = apply_prim__u62(lst29735);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2962529734);
arg_buffer[2] = x2952829736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2962529734))[0]);
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
void* _29894 = arg_buffer[1];
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

void* kont2962729737 = prim_car(lst);
void* lst29738 = prim_cdr(lst);
void* x2952929739 = apply_prim__u60(lst29738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2962729737);
arg_buffer[2] = x2952929739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2962729737))[0]);
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
void* _29895 = arg_buffer[1];
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

void* kont2962929740 = prim_car(lst);
void* lst29741 = prim_cdr(lst);
void* x2953029742 = apply_prim__u60_u61(lst29741);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2962929740);
arg_buffer[2] = x2953029742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2962929740))[0]);
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
void* _29896 = arg_buffer[1];
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

void* kont2963129743 = prim_car(lst);
void* lst29744 = prim_cdr(lst);
void* x2953129745 = apply_prim__u62_u61(lst29744);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2963129743);
arg_buffer[2] = x2953129745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2963129743))[0]);
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
void* _29897 = arg_buffer[1];
//reading env and args
void* kont29633 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2953229746 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29633);
arg_buffer[2] = x2953229746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29633))[0]);
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
void* _29898 = arg_buffer[1];
//reading env and args
void* kont29634 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2953329747 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29634);
arg_buffer[2] = x2953329747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29634))[0]);
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
void* _29899 = arg_buffer[1];
//reading env and args
void* kont29635 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2953429748 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29635);
arg_buffer[2] = x2953429748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29635))[0]);
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
void* _29900 = arg_buffer[1];
//reading env and args
void* kont29636 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2953529749 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29636);
arg_buffer[2] = x2953529749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29636))[0]);
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
void* _29901 = arg_buffer[1];
//reading env and args
void* kont29637 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2953629750 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29637);
arg_buffer[2] = x2953629750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29637))[0]);
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
void* _29902 = arg_buffer[1];
//reading env and args
void* kont29638 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2953729751 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29638);
arg_buffer[2] = x2953729751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29638))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam29903_fptr() // lam29903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29904 = arg_buffer[1];
//reading env and args
void* a2954029755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29639 = (decode_clo(env29904))[3];
//not do dummy comment
void* a2953829752 = (decode_clo(env29904))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env29904))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29639;
arg_buffer[3] = a2953829752;
arg_buffer[4] = a2954029755;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29903 = encode_clo(alloc_clo(lam29903_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29907 = arg_buffer[1];
//reading env and args
void* kont29639 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar37787 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37787, "0", 10);
void* a2953829752 = encode_mpz(mpzvar37787);
mpz_t* mpzvar37788 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37788, "2", 10);
void* a2953929753 = encode_mpz(mpzvar37788);

//creating new closure instance
void** clo37790 = alloc_clo(lam29903_fptr, 3);

//setting env list
clo37790[1] = equal_u63;
clo37790[2] = a2953829752;
clo37790[3] = kont29639;
void* f2964029754 = encode_clo(clo37790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2964029754;
arg_buffer[3] = x;
arg_buffer[4] = a2953929753;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam29908_fptr() // lam29908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29909 = arg_buffer[1];
//reading env and args
void* a2954329759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29641 = (decode_clo(env29909))[3];
//not do dummy comment
void* a2954129756 = (decode_clo(env29909))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env29909))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29641;
arg_buffer[3] = a2954129756;
arg_buffer[4] = a2954329759;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29908 = encode_clo(alloc_clo(lam29908_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29912 = arg_buffer[1];
//reading env and args
void* kont29641 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar37791 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37791, "1", 10);
void* a2954129756 = encode_mpz(mpzvar37791);
mpz_t* mpzvar37792 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37792, "2", 10);
void* a2954229757 = encode_mpz(mpzvar37792);

//creating new closure instance
void** clo37794 = alloc_clo(lam29908_fptr, 3);

//setting env list
clo37794[1] = equal_u63;
clo37794[2] = a2954129756;
clo37794[3] = kont29641;
void* f2964229758 = encode_clo(clo37794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2964229758;
arg_buffer[3] = x;
arg_buffer[4] = a2954229757;
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
void* _29913 = arg_buffer[1];
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

void* kont2964329760 = prim_car(x);
void* x29761 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2964329760);
arg_buffer[2] = x29761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2964329760))[0]);
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
void* _29914 = arg_buffer[1];
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

void* kont2964529762 = prim_car(lst);
void* lst29763 = prim_cdr(lst);
void* x2954429764 = apply_prim_and(lst29763);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2964529762);
arg_buffer[2] = x2954429764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2964529762))[0]);
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
void* _29915 = arg_buffer[1];
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

void* kont2964729765 = prim_car(lst);
void* lst29766 = prim_cdr(lst);
void* x2954529767 = apply_prim_or(lst29766);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2964729765);
arg_buffer[2] = x2954529767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2964729765))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam29918_fptr() // lam29918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29919 = arg_buffer[1];
//reading env and args
void* a2955129777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29649 = (decode_clo(env29919))[3];
//not do dummy comment
void* x = (decode_clo(env29919))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29919))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont29649;
arg_buffer[3] = x;
arg_buffer[4] = a2955129777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29918 = encode_clo(alloc_clo(lam29918_fptr, 0));

void* lam29920_fptr() // lam29920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29921 = arg_buffer[1];
//reading env and args
void* a2954929774 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29921))[5];
//not do dummy comment
void* lst = (decode_clo(env29921))[4];
//not do dummy comment
void* kont29649 = (decode_clo(env29921))[3];
//not do dummy comment
void* x = (decode_clo(env29921))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29921))[1];

//if-clause
bool if_guard37795 = is_true(a2954929774);
if(if_guard37795)
{
void* x2955029775 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29649);
arg_buffer[2] = x2955029775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29649))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37797 = alloc_clo(lam29918_fptr, 3);

//setting env list
clo37797[1] = member_u63;
clo37797[2] = x;
clo37797[3] = kont29649;
void* f2965029776 = encode_clo(clo37797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2965029776;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29920 = encode_clo(alloc_clo(lam29920_fptr, 0));

void* lam29922_fptr() // lam29922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29923 = arg_buffer[1];
//reading env and args
void* a2954829772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29923))[6];
//not do dummy comment
void* lst = (decode_clo(env29923))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env29923))[4];
//not do dummy comment
void* kont29649 = (decode_clo(env29923))[3];
//not do dummy comment
void* x = (decode_clo(env29923))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29923))[1];

//creating new closure instance
void** clo37799 = alloc_clo(lam29920_fptr, 5);

//setting env list
clo37799[1] = member_u63;
clo37799[2] = x;
clo37799[3] = kont29649;
clo37799[4] = lst;
clo37799[5] = cdr;
void* f2965129773 = encode_clo(clo37799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2965129773;
arg_buffer[3] = a2954829772;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29922 = encode_clo(alloc_clo(lam29922_fptr, 0));

void* lam29924_fptr() // lam29924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29925 = arg_buffer[1];
//reading env and args
void* a2954629769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29925))[7];
//not do dummy comment
void* lst = (decode_clo(env29925))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env29925))[5];
//not do dummy comment
void* kont29649 = (decode_clo(env29925))[4];
//not do dummy comment
void* x = (decode_clo(env29925))[3];
//not do dummy comment
void* car = (decode_clo(env29925))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29925))[1];

//if-clause
bool if_guard37800 = is_true(a2954629769);
if(if_guard37800)
{
void* x2954729770 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29649);
arg_buffer[2] = x2954729770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29649))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37802 = alloc_clo(lam29922_fptr, 6);

//setting env list
clo37802[1] = member_u63;
clo37802[2] = x;
clo37802[3] = kont29649;
clo37802[4] = equal_u63;
clo37802[5] = lst;
clo37802[6] = cdr;
void* f2965229771 = encode_clo(clo37802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2965229771;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29924 = encode_clo(alloc_clo(lam29924_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29926 = arg_buffer[1];
//reading env and args
void* kont29649 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37804 = alloc_clo(lam29924_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo37804[1] = member_u63;
clo37804[2] = car;
clo37804[3] = x;
clo37804[4] = kont29649;
clo37804[5] = equal_u63;
clo37804[6] = lst;
clo37804[7] = cdr;
void* f2965329768 = encode_clo(clo37804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2965329768;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam29927_fptr() // lam29927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29928 = arg_buffer[1];
//reading env and args
void* a2955529785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2955429783 = (decode_clo(env29928))[4];
//not do dummy comment
void* fun = (decode_clo(env29928))[3];
//not do dummy comment
void* foldl = (decode_clo(env29928))[2];
//not do dummy comment
void* kont29654 = (decode_clo(env29928))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont29654;
arg_buffer[3] = fun;
arg_buffer[4] = a2955429783;
arg_buffer[5] = a2955529785;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29927 = encode_clo(alloc_clo(lam29927_fptr, 0));

void* lam29929_fptr() // lam29929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29930 = arg_buffer[1];
//reading env and args
void* a2955429783 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29930))[5];
//not do dummy comment
void* lst = (decode_clo(env29930))[4];
//not do dummy comment
void* fun = (decode_clo(env29930))[3];
//not do dummy comment
void* foldl = (decode_clo(env29930))[2];
//not do dummy comment
void* kont29654 = (decode_clo(env29930))[1];

//creating new closure instance
void** clo37806 = alloc_clo(lam29927_fptr, 4);

//setting env list
clo37806[1] = kont29654;
clo37806[2] = foldl;
clo37806[3] = fun;
clo37806[4] = a2955429783;
void* f2965529784 = encode_clo(clo37806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2965529784;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29929 = encode_clo(alloc_clo(lam29929_fptr, 0));

void* lam29931_fptr() // lam29931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29932 = arg_buffer[1];
//reading env and args
void* a2955329781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29932))[6];
//not do dummy comment
void* lst = (decode_clo(env29932))[5];
//not do dummy comment
void* fun = (decode_clo(env29932))[4];
//not do dummy comment
void* acc = (decode_clo(env29932))[3];
//not do dummy comment
void* foldl = (decode_clo(env29932))[2];
//not do dummy comment
void* kont29654 = (decode_clo(env29932))[1];

//creating new closure instance
void** clo37808 = alloc_clo(lam29929_fptr, 5);

//setting env list
clo37808[1] = kont29654;
clo37808[2] = foldl;
clo37808[3] = fun;
clo37808[4] = lst;
clo37808[5] = cdr;
void* f2965629782 = encode_clo(clo37808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2965629782;
arg_buffer[3] = a2955329781;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29931 = encode_clo(alloc_clo(lam29931_fptr, 0));

void* lam29933_fptr() // lam29933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29934 = arg_buffer[1];
//reading env and args
void* a2955229779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29934))[7];
//not do dummy comment
void* lst = (decode_clo(env29934))[6];
//not do dummy comment
void* fun = (decode_clo(env29934))[5];
//not do dummy comment
void* acc = (decode_clo(env29934))[4];
//not do dummy comment
void* car = (decode_clo(env29934))[3];
//not do dummy comment
void* foldl = (decode_clo(env29934))[2];
//not do dummy comment
void* kont29654 = (decode_clo(env29934))[1];

//if-clause
bool if_guard37809 = is_true(a2955229779);
if(if_guard37809)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29654);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29654))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37811 = alloc_clo(lam29931_fptr, 6);

//setting env list
clo37811[1] = kont29654;
clo37811[2] = foldl;
clo37811[3] = acc;
clo37811[4] = fun;
clo37811[5] = lst;
clo37811[6] = cdr;
void* f2965729780 = encode_clo(clo37811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2965729780;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29933 = encode_clo(alloc_clo(lam29933_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29935 = arg_buffer[1];
//reading env and args
void* kont29654 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo37813 = alloc_clo(lam29933_fptr, 7);

//setting env list
clo37813[1] = kont29654;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo37813[2] = foldl;
clo37813[3] = car;
clo37813[4] = acc;
clo37813[5] = fun;
clo37813[6] = lst;
clo37813[7] = cdr;
void* f2965829778 = encode_clo(clo37813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2965829778;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam29936_fptr() // lam29936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29937 = arg_buffer[1];
//reading env and args
void* a2955929793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29659 = (decode_clo(env29937))[3];
//not do dummy comment
void* a2955729789 = (decode_clo(env29937))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29937))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29659;
arg_buffer[3] = a2955729789;
arg_buffer[4] = a2955929793;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29936 = encode_clo(alloc_clo(lam29936_fptr, 0));

void* lam29938_fptr() // lam29938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29939 = arg_buffer[1];
//reading env and args
void* a2955829791 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29659 = (decode_clo(env29939))[5];
//not do dummy comment
void* a2955729789 = (decode_clo(env29939))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29939))[3];
//not do dummy comment
void* lst2 = (decode_clo(env29939))[2];
//not do dummy comment
void* cons = (decode_clo(env29939))[1];

//creating new closure instance
void** clo37815 = alloc_clo(lam29936_fptr, 3);

//setting env list
clo37815[1] = reverse_u45helper;
clo37815[2] = a2955729789;
clo37815[3] = kont29659;
void* f2966029792 = encode_clo(clo37815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2966029792;
arg_buffer[3] = a2955829791;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29938 = encode_clo(alloc_clo(lam29938_fptr, 0));

void* lam29940_fptr() // lam29940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29941 = arg_buffer[1];
//reading env and args
void* a2955729789 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29941))[6];
//not do dummy comment
void* lst2 = (decode_clo(env29941))[5];
//not do dummy comment
void* car = (decode_clo(env29941))[4];
//not do dummy comment
void* cons = (decode_clo(env29941))[3];
//not do dummy comment
void* lst = (decode_clo(env29941))[2];
//not do dummy comment
void* kont29659 = (decode_clo(env29941))[1];

//creating new closure instance
void** clo37817 = alloc_clo(lam29938_fptr, 5);

//setting env list
clo37817[1] = cons;
clo37817[2] = lst2;
clo37817[3] = reverse_u45helper;
clo37817[4] = a2955729789;
clo37817[5] = kont29659;
void* f2966129790 = encode_clo(clo37817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2966129790;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29940 = encode_clo(alloc_clo(lam29940_fptr, 0));

void* lam29942_fptr() // lam29942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29943 = arg_buffer[1];
//reading env and args
void* a2955629787 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29943))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29943))[6];
//not do dummy comment
void* lst2 = (decode_clo(env29943))[5];
//not do dummy comment
void* car = (decode_clo(env29943))[4];
//not do dummy comment
void* cons = (decode_clo(env29943))[3];
//not do dummy comment
void* lst = (decode_clo(env29943))[2];
//not do dummy comment
void* kont29659 = (decode_clo(env29943))[1];

//if-clause
bool if_guard37818 = is_true(a2955629787);
if(if_guard37818)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29659);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29659))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37820 = alloc_clo(lam29940_fptr, 6);

//setting env list
clo37820[1] = kont29659;
clo37820[2] = lst;
clo37820[3] = cons;
clo37820[4] = car;
clo37820[5] = lst2;
clo37820[6] = reverse_u45helper;
void* f2966229788 = encode_clo(clo37820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2966229788;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29942 = encode_clo(alloc_clo(lam29942_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29944 = arg_buffer[1];
//reading env and args
void* kont29659 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37822 = alloc_clo(lam29942_fptr, 7);

//setting env list
clo37822[1] = kont29659;
clo37822[2] = lst;
clo37822[3] = cons;
clo37822[4] = car;
clo37822[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo37822[6] = reverse_u45helper;
clo37822[7] = cdr;
void* f2966329786 = encode_clo(clo37822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2966329786;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam29945_fptr() // lam29945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29946 = arg_buffer[1];
//reading env and args
void* a2956029795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29946))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29946))[2];
//not do dummy comment
void* kont29664 = (decode_clo(env29946))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29664;
arg_buffer[3] = lst;
arg_buffer[4] = a2956029795;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29945 = encode_clo(alloc_clo(lam29945_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29947 = arg_buffer[1];
//reading env and args
void* kont29664 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo37824 = alloc_clo(lam29945_fptr, 3);

//setting env list
clo37824[1] = kont29664;
clo37824[2] = reverse_u45helper;
clo37824[3] = lst;
void* f2966529794 = encode_clo(clo37824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2966529794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam29948_fptr() // lam29948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29949 = arg_buffer[1];
//reading env and args
void* x2956329800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29666 = (decode_clo(env29949))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29666);
arg_buffer[2] = x2956329800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29666))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29948 = encode_clo(alloc_clo(lam29948_fptr, 0));

void* lam29950_fptr() // lam29950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29951 = arg_buffer[1];
//reading env and args
void* a2956829809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2956429802 = (decode_clo(env29951))[4];
//not do dummy comment
void* a2956629805 = (decode_clo(env29951))[3];
//not do dummy comment
void* kont29666 = (decode_clo(env29951))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env29951))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29666;
arg_buffer[3] = a2956429802;
arg_buffer[4] = a2956629805;
arg_buffer[5] = a2956829809;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29950 = encode_clo(alloc_clo(lam29950_fptr, 0));

void* lam29952_fptr() // lam29952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29953 = arg_buffer[1];
//reading env and args
void* a2956729807 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2956429802 = (decode_clo(env29953))[6];
//not do dummy comment
void* a2956629805 = (decode_clo(env29953))[5];
//not do dummy comment
void* kont29666 = (decode_clo(env29953))[4];
//not do dummy comment
void* cons = (decode_clo(env29953))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env29953))[2];
//not do dummy comment
void* lst2 = (decode_clo(env29953))[1];

//creating new closure instance
void** clo37826 = alloc_clo(lam29950_fptr, 4);

//setting env list
clo37826[1] = take_u45helper;
clo37826[2] = kont29666;
clo37826[3] = a2956629805;
clo37826[4] = a2956429802;
void* f2966829808 = encode_clo(clo37826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2966829808;
arg_buffer[3] = a2956729807;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29952 = encode_clo(alloc_clo(lam29952_fptr, 0));

void* lam29954_fptr() // lam29954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29955 = arg_buffer[1];
//reading env and args
void* a2956629805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2956429802 = (decode_clo(env29955))[7];
//not do dummy comment
void* lst = (decode_clo(env29955))[6];
//not do dummy comment
void* kont29666 = (decode_clo(env29955))[5];
//not do dummy comment
void* car = (decode_clo(env29955))[4];
//not do dummy comment
void* cons = (decode_clo(env29955))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env29955))[2];
//not do dummy comment
void* lst2 = (decode_clo(env29955))[1];

//creating new closure instance
void** clo37828 = alloc_clo(lam29952_fptr, 6);

//setting env list
clo37828[1] = lst2;
clo37828[2] = take_u45helper;
clo37828[3] = cons;
clo37828[4] = kont29666;
clo37828[5] = a2956629805;
clo37828[6] = a2956429802;
void* f2966929806 = encode_clo(clo37828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2966929806;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29954 = encode_clo(alloc_clo(lam29954_fptr, 0));

void* lam29957_fptr() // lam29957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29958 = arg_buffer[1];
//reading env and args
void* a2956429802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29958))[8];
//not do dummy comment
void* kont29666 = (decode_clo(env29958))[7];
//not do dummy comment
void* cons = (decode_clo(env29958))[6];
//not do dummy comment
void* _u45 = (decode_clo(env29958))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env29958))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29958))[3];
//not do dummy comment
void* n = (decode_clo(env29958))[2];
//not do dummy comment
void* car = (decode_clo(env29958))[1];
mpz_t* mpzvar37829 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37829, "1", 10);
void* a2956529803 = encode_mpz(mpzvar37829);

//creating new closure instance
void** clo37831 = alloc_clo(lam29954_fptr, 7);

//setting env list
clo37831[1] = lst2;
clo37831[2] = take_u45helper;
clo37831[3] = cons;
clo37831[4] = car;
clo37831[5] = kont29666;
clo37831[6] = lst;
clo37831[7] = a2956429802;
void* f2967029804 = encode_clo(clo37831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2967029804;
arg_buffer[3] = n;
arg_buffer[4] = a2956529803;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29957 = encode_clo(alloc_clo(lam29957_fptr, 0));

void* lam29959_fptr() // lam29959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29960 = arg_buffer[1];
//reading env and args
void* a2956229798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29960))[10];
//not do dummy comment
void* lst = (decode_clo(env29960))[9];
//not do dummy comment
void* reverse = (decode_clo(env29960))[8];
//not do dummy comment
void* kont29666 = (decode_clo(env29960))[7];
//not do dummy comment
void* cons = (decode_clo(env29960))[6];
//not do dummy comment
void* _u45 = (decode_clo(env29960))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env29960))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29960))[3];
//not do dummy comment
void* n = (decode_clo(env29960))[2];
//not do dummy comment
void* car = (decode_clo(env29960))[1];

//if-clause
bool if_guard37832 = is_true(a2956229798);
if(if_guard37832)
{

//creating new closure instance
void** clo37834 = alloc_clo(lam29948_fptr, 1);

//setting env list
clo37834[1] = kont29666;
void* f2966729799 = encode_clo(clo37834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2966729799;
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
void** clo37836 = alloc_clo(lam29957_fptr, 8);

//setting env list
clo37836[1] = car;
clo37836[2] = n;
clo37836[3] = lst2;
clo37836[4] = take_u45helper;
clo37836[5] = _u45;
clo37836[6] = cons;
clo37836[7] = kont29666;
clo37836[8] = lst;
void* f2967129801 = encode_clo(clo37836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2967129801;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29959 = encode_clo(alloc_clo(lam29959_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29962 = arg_buffer[1];
//reading env and args
void* kont29666 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar37837 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37837, "0", 10);
void* a2956129796 = encode_mpz(mpzvar37837);

//creating new closure instance
void** clo37839 = alloc_clo(lam29959_fptr, 10);

//setting env list
clo37839[1] = car;
clo37839[2] = n;
clo37839[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo37839[4] = take_u45helper;
clo37839[5] = _u45;
clo37839[6] = cons;
clo37839[7] = kont29666;
clo37839[8] = reverse;
clo37839[9] = lst;
clo37839[10] = cdr;
void* f2967229797 = encode_clo(clo37839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2967229797;
arg_buffer[3] = n;
arg_buffer[4] = a2956129796;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam29963_fptr() // lam29963 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29964 = arg_buffer[1];
//reading env and args
void* a2956929811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29673 = (decode_clo(env29964))[4];
//not do dummy comment
void* lst = (decode_clo(env29964))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env29964))[2];
//not do dummy comment
void* n = (decode_clo(env29964))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29673;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2956929811;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29963 = encode_clo(alloc_clo(lam29963_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29965 = arg_buffer[1];
//reading env and args
void* kont29673 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37841 = alloc_clo(lam29963_fptr, 4);

//setting env list
clo37841[1] = n;
clo37841[2] = take_u45helper;
clo37841[3] = lst;
clo37841[4] = kont29673;
void* f2967429810 = encode_clo(clo37841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2967429810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam29967_fptr() // lam29967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29968 = arg_buffer[1];
//reading env and args
void* a2957429819 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2957229815 = (decode_clo(env29968))[3];
//not do dummy comment
void* kont29675 = (decode_clo(env29968))[2];
//not do dummy comment
void* _u43 = (decode_clo(env29968))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont29675;
arg_buffer[3] = a2957229815;
arg_buffer[4] = a2957429819;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29967 = encode_clo(alloc_clo(lam29967_fptr, 0));

void* lam29969_fptr() // lam29969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29970 = arg_buffer[1];
//reading env and args
void* a2957329817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2957229815 = (decode_clo(env29970))[4];
//not do dummy comment
void* kont29675 = (decode_clo(env29970))[3];
//not do dummy comment
void* length = (decode_clo(env29970))[2];
//not do dummy comment
void* _u43 = (decode_clo(env29970))[1];

//creating new closure instance
void** clo37843 = alloc_clo(lam29967_fptr, 3);

//setting env list
clo37843[1] = _u43;
clo37843[2] = kont29675;
clo37843[3] = a2957229815;
void* f2967629818 = encode_clo(clo37843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2967629818;
arg_buffer[3] = a2957329817;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29969 = encode_clo(alloc_clo(lam29969_fptr, 0));

void* lam29972_fptr() // lam29972 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29973 = arg_buffer[1];
//reading env and args
void* a2957029813 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29973))[5];
//not do dummy comment
void* length = (decode_clo(env29973))[4];
//not do dummy comment
void* _u43 = (decode_clo(env29973))[3];
//not do dummy comment
void* lst = (decode_clo(env29973))[2];
//not do dummy comment
void* kont29675 = (decode_clo(env29973))[1];

//if-clause
bool if_guard37844 = is_true(a2957029813);
if(if_guard37844)
{
mpz_t* mpzvar37845 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37845, "0", 10);
void* x2957129814 = encode_mpz(mpzvar37845);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29675);
arg_buffer[2] = x2957129814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29675))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar37846 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37846, "1", 10);
void* a2957229815 = encode_mpz(mpzvar37846);

//creating new closure instance
void** clo37848 = alloc_clo(lam29969_fptr, 4);

//setting env list
clo37848[1] = _u43;
clo37848[2] = length;
clo37848[3] = kont29675;
clo37848[4] = a2957229815;
void* f2967729816 = encode_clo(clo37848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2967729816;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29972 = encode_clo(alloc_clo(lam29972_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29974 = arg_buffer[1];
//reading env and args
void* kont29675 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo37850 = alloc_clo(lam29972_fptr, 5);

//setting env list
clo37850[1] = kont29675;
clo37850[2] = lst;
clo37850[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo37850[4] = length;
clo37850[5] = cdr;
void* f2967829812 = encode_clo(clo37850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2967829812;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam29975_fptr() // lam29975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29976 = arg_buffer[1];
//reading env and args
void* x2957629823 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29679 = (decode_clo(env29976))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29679);
arg_buffer[2] = x2957629823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29679))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29975 = encode_clo(alloc_clo(lam29975_fptr, 0));

void* lam29977_fptr() // lam29977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29978 = arg_buffer[1];
//reading env and args
void* a2958029831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29679 = (decode_clo(env29978))[3];
//not do dummy comment
void* a2957829827 = (decode_clo(env29978))[2];
//not do dummy comment
void* cons = (decode_clo(env29978))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29679;
arg_buffer[3] = a2957829827;
arg_buffer[4] = a2958029831;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29977 = encode_clo(alloc_clo(lam29977_fptr, 0));

void* lam29979_fptr() // lam29979 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29980 = arg_buffer[1];
//reading env and args
void* a2957929829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env29980))[5];
//not do dummy comment
void* kont29679 = (decode_clo(env29980))[4];
//not do dummy comment
void* proc = (decode_clo(env29980))[3];
//not do dummy comment
void* a2957829827 = (decode_clo(env29980))[2];
//not do dummy comment
void* cons = (decode_clo(env29980))[1];

//creating new closure instance
void** clo37852 = alloc_clo(lam29977_fptr, 3);

//setting env list
clo37852[1] = cons;
clo37852[2] = a2957829827;
clo37852[3] = kont29679;
void* f2968129830 = encode_clo(clo37852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2968129830;
arg_buffer[3] = proc;
arg_buffer[4] = a2957929829;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29979 = encode_clo(alloc_clo(lam29979_fptr, 0));

void* lam29981_fptr() // lam29981 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29982 = arg_buffer[1];
//reading env and args
void* a2957829827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29982))[6];
//not do dummy comment
void* lst = (decode_clo(env29982))[5];
//not do dummy comment
void* map = (decode_clo(env29982))[4];
//not do dummy comment
void* kont29679 = (decode_clo(env29982))[3];
//not do dummy comment
void* proc = (decode_clo(env29982))[2];
//not do dummy comment
void* cons = (decode_clo(env29982))[1];

//creating new closure instance
void** clo37854 = alloc_clo(lam29979_fptr, 5);

//setting env list
clo37854[1] = cons;
clo37854[2] = a2957829827;
clo37854[3] = proc;
clo37854[4] = kont29679;
clo37854[5] = map;
void* f2968229828 = encode_clo(clo37854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2968229828;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29981 = encode_clo(alloc_clo(lam29981_fptr, 0));

void* lam29983_fptr() // lam29983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29984 = arg_buffer[1];
//reading env and args
void* a2957729825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29984))[6];
//not do dummy comment
void* lst = (decode_clo(env29984))[5];
//not do dummy comment
void* map = (decode_clo(env29984))[4];
//not do dummy comment
void* kont29679 = (decode_clo(env29984))[3];
//not do dummy comment
void* proc = (decode_clo(env29984))[2];
//not do dummy comment
void* cons = (decode_clo(env29984))[1];

//creating new closure instance
void** clo37856 = alloc_clo(lam29981_fptr, 6);

//setting env list
clo37856[1] = cons;
clo37856[2] = proc;
clo37856[3] = kont29679;
clo37856[4] = map;
clo37856[5] = lst;
clo37856[6] = cdr;
void* f2968329826 = encode_clo(clo37856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2968329826;
arg_buffer[3] = a2957729825;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29983 = encode_clo(alloc_clo(lam29983_fptr, 0));

void* lam29985_fptr() // lam29985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29986 = arg_buffer[1];
//reading env and args
void* a2957529821 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29986))[8];
//not do dummy comment
void* map = (decode_clo(env29986))[7];
//not do dummy comment
void* kont29679 = (decode_clo(env29986))[6];
//not do dummy comment
void* proc = (decode_clo(env29986))[5];
//not do dummy comment
void* car = (decode_clo(env29986))[4];
//not do dummy comment
void* cons = (decode_clo(env29986))[3];
//not do dummy comment
void* list = (decode_clo(env29986))[2];
//not do dummy comment
void* cdr = (decode_clo(env29986))[1];

//if-clause
bool if_guard37857 = is_true(a2957529821);
if(if_guard37857)
{

//creating new closure instance
void** clo37859 = alloc_clo(lam29975_fptr, 1);

//setting env list
clo37859[1] = kont29679;
void* f2968029822 = encode_clo(clo37859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2968029822;
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
void** clo37861 = alloc_clo(lam29983_fptr, 6);

//setting env list
clo37861[1] = cons;
clo37861[2] = proc;
clo37861[3] = kont29679;
clo37861[4] = map;
clo37861[5] = lst;
clo37861[6] = cdr;
void* f2968429824 = encode_clo(clo37861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2968429824;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29985 = encode_clo(alloc_clo(lam29985_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29987 = arg_buffer[1];
//reading env and args
void* kont29679 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37863 = alloc_clo(lam29985_fptr, 8);

//setting env list
clo37863[1] = cdr;
clo37863[2] = list;
clo37863[3] = cons;
clo37863[4] = car;
clo37863[5] = proc;
clo37863[6] = kont29679;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo37863[7] = map;
clo37863[8] = lst;
void* f2968529820 = encode_clo(clo37863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2968529820;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam29988_fptr() // lam29988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29989 = arg_buffer[1];
//reading env and args
void* x2958229835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29686 = (decode_clo(env29989))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29686);
arg_buffer[2] = x2958229835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29686))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29988 = encode_clo(alloc_clo(lam29988_fptr, 0));

void* lam29990_fptr() // lam29990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29991 = arg_buffer[1];
//reading env and args
void* a2958729845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2958529841 = (decode_clo(env29991))[3];
//not do dummy comment
void* cons = (decode_clo(env29991))[2];
//not do dummy comment
void* kont29686 = (decode_clo(env29991))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29686;
arg_buffer[3] = a2958529841;
arg_buffer[4] = a2958729845;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29990 = encode_clo(alloc_clo(lam29990_fptr, 0));

void* lam29992_fptr() // lam29992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29993 = arg_buffer[1];
//reading env and args
void* a2958629843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env29993))[5];
//not do dummy comment
void* a2958529841 = (decode_clo(env29993))[4];
//not do dummy comment
void* filter = (decode_clo(env29993))[3];
//not do dummy comment
void* cons = (decode_clo(env29993))[2];
//not do dummy comment
void* kont29686 = (decode_clo(env29993))[1];

//creating new closure instance
void** clo37865 = alloc_clo(lam29990_fptr, 3);

//setting env list
clo37865[1] = kont29686;
clo37865[2] = cons;
clo37865[3] = a2958529841;
void* f2968829844 = encode_clo(clo37865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2968829844;
arg_buffer[3] = op;
arg_buffer[4] = a2958629843;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29992 = encode_clo(alloc_clo(lam29992_fptr, 0));

void* lam29994_fptr() // lam29994 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29995 = arg_buffer[1];
//reading env and args
void* a2958529841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29995))[6];
//not do dummy comment
void* lst = (decode_clo(env29995))[5];
//not do dummy comment
void* op = (decode_clo(env29995))[4];
//not do dummy comment
void* filter = (decode_clo(env29995))[3];
//not do dummy comment
void* cons = (decode_clo(env29995))[2];
//not do dummy comment
void* kont29686 = (decode_clo(env29995))[1];

//creating new closure instance
void** clo37867 = alloc_clo(lam29992_fptr, 5);

//setting env list
clo37867[1] = kont29686;
clo37867[2] = cons;
clo37867[3] = filter;
clo37867[4] = a2958529841;
clo37867[5] = op;
void* f2968929842 = encode_clo(clo37867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2968929842;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29994 = encode_clo(alloc_clo(lam29994_fptr, 0));

void* lam29996_fptr() // lam29996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29997 = arg_buffer[1];
//reading env and args
void* a2958829847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env29997))[3];
//not do dummy comment
void* filter = (decode_clo(env29997))[2];
//not do dummy comment
void* kont29686 = (decode_clo(env29997))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont29686;
arg_buffer[3] = op;
arg_buffer[4] = a2958829847;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29996 = encode_clo(alloc_clo(lam29996_fptr, 0));

void* lam29998_fptr() // lam29998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29999 = arg_buffer[1];
//reading env and args
void* a2958429839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29999))[7];
//not do dummy comment
void* lst = (decode_clo(env29999))[6];
//not do dummy comment
void* op = (decode_clo(env29999))[5];
//not do dummy comment
void* cons = (decode_clo(env29999))[4];
//not do dummy comment
void* kont29686 = (decode_clo(env29999))[3];
//not do dummy comment
void* filter = (decode_clo(env29999))[2];
//not do dummy comment
void* car = (decode_clo(env29999))[1];

//if-clause
bool if_guard37868 = is_true(a2958429839);
if(if_guard37868)
{

//creating new closure instance
void** clo37870 = alloc_clo(lam29994_fptr, 6);

//setting env list
clo37870[1] = kont29686;
clo37870[2] = cons;
clo37870[3] = filter;
clo37870[4] = op;
clo37870[5] = lst;
clo37870[6] = cdr;
void* f2969029840 = encode_clo(clo37870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2969029840;
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
void** clo37872 = alloc_clo(lam29996_fptr, 3);

//setting env list
clo37872[1] = kont29686;
clo37872[2] = filter;
clo37872[3] = op;
void* f2969129846 = encode_clo(clo37872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2969129846;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29998 = encode_clo(alloc_clo(lam29998_fptr, 0));

void* lam30000_fptr() // lam30000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30001 = arg_buffer[1];
//reading env and args
void* a2958329837 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30001))[7];
//not do dummy comment
void* lst = (decode_clo(env30001))[6];
//not do dummy comment
void* op = (decode_clo(env30001))[5];
//not do dummy comment
void* cons = (decode_clo(env30001))[4];
//not do dummy comment
void* kont29686 = (decode_clo(env30001))[3];
//not do dummy comment
void* filter = (decode_clo(env30001))[2];
//not do dummy comment
void* car = (decode_clo(env30001))[1];

//creating new closure instance
void** clo37874 = alloc_clo(lam29998_fptr, 7);

//setting env list
clo37874[1] = car;
clo37874[2] = filter;
clo37874[3] = kont29686;
clo37874[4] = cons;
clo37874[5] = op;
clo37874[6] = lst;
clo37874[7] = cdr;
void* f2969229838 = encode_clo(clo37874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2969229838;
arg_buffer[3] = a2958329837;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30000 = encode_clo(alloc_clo(lam30000_fptr, 0));

void* lam30002_fptr() // lam30002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30003 = arg_buffer[1];
//reading env and args
void* a2958129833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30003))[8];
//not do dummy comment
void* op = (decode_clo(env30003))[7];
//not do dummy comment
void* cons = (decode_clo(env30003))[6];
//not do dummy comment
void* kont29686 = (decode_clo(env30003))[5];
//not do dummy comment
void* list = (decode_clo(env30003))[4];
//not do dummy comment
void* cdr = (decode_clo(env30003))[3];
//not do dummy comment
void* filter = (decode_clo(env30003))[2];
//not do dummy comment
void* car = (decode_clo(env30003))[1];

//if-clause
bool if_guard37875 = is_true(a2958129833);
if(if_guard37875)
{

//creating new closure instance
void** clo37877 = alloc_clo(lam29988_fptr, 1);

//setting env list
clo37877[1] = kont29686;
void* f2968729834 = encode_clo(clo37877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2968729834;
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
void** clo37879 = alloc_clo(lam30000_fptr, 7);

//setting env list
clo37879[1] = car;
clo37879[2] = filter;
clo37879[3] = kont29686;
clo37879[4] = cons;
clo37879[5] = op;
clo37879[6] = lst;
clo37879[7] = cdr;
void* f2969329836 = encode_clo(clo37879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2969329836;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30002 = encode_clo(alloc_clo(lam30002_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30004 = arg_buffer[1];
//reading env and args
void* kont29686 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37881 = alloc_clo(lam30002_fptr, 8);

//setting env list
clo37881[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo37881[2] = filter;
clo37881[3] = cdr;
clo37881[4] = list;
clo37881[5] = kont29686;
clo37881[6] = cons;
clo37881[7] = op;
clo37881[8] = lst;
void* f2969429832 = encode_clo(clo37881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2969429832;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam30005_fptr() // lam30005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30006 = arg_buffer[1];
//reading env and args
void* a2959329855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env30006))[3];
//not do dummy comment
void* a2959129852 = (decode_clo(env30006))[2];
//not do dummy comment
void* kont29695 = (decode_clo(env30006))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont29695;
arg_buffer[3] = a2959129852;
arg_buffer[4] = a2959329855;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30005 = encode_clo(alloc_clo(lam30005_fptr, 0));

void* lam30008_fptr() // lam30008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30009 = arg_buffer[1];
//reading env and args
void* a2959129852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env30009))[4];
//not do dummy comment
void* kont29695 = (decode_clo(env30009))[3];
//not do dummy comment
void* n = (decode_clo(env30009))[2];
//not do dummy comment
void* _u45 = (decode_clo(env30009))[1];
mpz_t* mpzvar37882 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37882, "1", 10);
void* a2959229853 = encode_mpz(mpzvar37882);

//creating new closure instance
void** clo37884 = alloc_clo(lam30005_fptr, 3);

//setting env list
clo37884[1] = kont29695;
clo37884[2] = a2959129852;
clo37884[3] = drop;
void* f2969629854 = encode_clo(clo37884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2969629854;
arg_buffer[3] = n;
arg_buffer[4] = a2959229853;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30008 = encode_clo(alloc_clo(lam30008_fptr, 0));

void* lam30010_fptr() // lam30010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30011 = arg_buffer[1];
//reading env and args
void* a2959029850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30011))[6];
//not do dummy comment
void* kont29695 = (decode_clo(env30011))[5];
//not do dummy comment
void* n = (decode_clo(env30011))[4];
//not do dummy comment
void* _u45 = (decode_clo(env30011))[3];
//not do dummy comment
void* lst = (decode_clo(env30011))[2];
//not do dummy comment
void* drop = (decode_clo(env30011))[1];

//if-clause
bool if_guard37885 = is_true(a2959029850);
if(if_guard37885)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29695);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29695))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37887 = alloc_clo(lam30008_fptr, 4);

//setting env list
clo37887[1] = _u45;
clo37887[2] = n;
clo37887[3] = kont29695;
clo37887[4] = drop;
void* f2969729851 = encode_clo(clo37887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2969729851;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30010 = encode_clo(alloc_clo(lam30010_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30013 = arg_buffer[1];
//reading env and args
void* kont29695 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar37888 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37888, "0", 10);
void* a2958929848 = encode_mpz(mpzvar37888);

//creating new closure instance
void** clo37890 = alloc_clo(lam30010_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo37890[1] = drop;
clo37890[2] = lst;
clo37890[3] = _u45;
clo37890[4] = n;
clo37890[5] = kont29695;
clo37890[6] = cdr;
void* f2969829849 = encode_clo(clo37890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2969829849;
arg_buffer[3] = n;
arg_buffer[4] = a2958929848;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam30014_fptr() // lam30014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30015 = arg_buffer[1];
//reading env and args
void* a2959729863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env30015))[3];
//not do dummy comment
void* a2959529859 = (decode_clo(env30015))[2];
//not do dummy comment
void* kont29699 = (decode_clo(env30015))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont29699;
arg_buffer[3] = a2959529859;
arg_buffer[4] = a2959729863;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30014 = encode_clo(alloc_clo(lam30014_fptr, 0));

void* lam30016_fptr() // lam30016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30017 = arg_buffer[1];
//reading env and args
void* a2959629861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env30017))[5];
//not do dummy comment
void* proc = (decode_clo(env30017))[4];
//not do dummy comment
void* acc = (decode_clo(env30017))[3];
//not do dummy comment
void* a2959529859 = (decode_clo(env30017))[2];
//not do dummy comment
void* kont29699 = (decode_clo(env30017))[1];

//creating new closure instance
void** clo37892 = alloc_clo(lam30014_fptr, 3);

//setting env list
clo37892[1] = kont29699;
clo37892[2] = a2959529859;
clo37892[3] = proc;
void* f2970029862 = encode_clo(clo37892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2970029862;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2959629861;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30016 = encode_clo(alloc_clo(lam30016_fptr, 0));

void* lam30018_fptr() // lam30018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30019 = arg_buffer[1];
//reading env and args
void* a2959529859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30019))[6];
//not do dummy comment
void* kont29699 = (decode_clo(env30019))[5];
//not do dummy comment
void* foldr = (decode_clo(env30019))[4];
//not do dummy comment
void* lst = (decode_clo(env30019))[3];
//not do dummy comment
void* proc = (decode_clo(env30019))[2];
//not do dummy comment
void* acc = (decode_clo(env30019))[1];

//creating new closure instance
void** clo37894 = alloc_clo(lam30016_fptr, 5);

//setting env list
clo37894[1] = kont29699;
clo37894[2] = a2959529859;
clo37894[3] = acc;
clo37894[4] = proc;
clo37894[5] = foldr;
void* f2970129860 = encode_clo(clo37894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2970129860;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30018 = encode_clo(alloc_clo(lam30018_fptr, 0));

void* lam30020_fptr() // lam30020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30021 = arg_buffer[1];
//reading env and args
void* a2959429857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30021))[7];
//not do dummy comment
void* kont29699 = (decode_clo(env30021))[6];
//not do dummy comment
void* car = (decode_clo(env30021))[5];
//not do dummy comment
void* foldr = (decode_clo(env30021))[4];
//not do dummy comment
void* lst = (decode_clo(env30021))[3];
//not do dummy comment
void* proc = (decode_clo(env30021))[2];
//not do dummy comment
void* acc = (decode_clo(env30021))[1];

//if-clause
bool if_guard37895 = is_true(a2959429857);
if(if_guard37895)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29699);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29699))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37897 = alloc_clo(lam30018_fptr, 6);

//setting env list
clo37897[1] = acc;
clo37897[2] = proc;
clo37897[3] = lst;
clo37897[4] = foldr;
clo37897[5] = kont29699;
clo37897[6] = cdr;
void* f2970229858 = encode_clo(clo37897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2970229858;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30020 = encode_clo(alloc_clo(lam30020_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30022 = arg_buffer[1];
//reading env and args
void* kont29699 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo37899 = alloc_clo(lam30020_fptr, 7);

//setting env list
clo37899[1] = acc;
clo37899[2] = proc;
clo37899[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo37899[4] = foldr;
clo37899[5] = car;
clo37899[6] = kont29699;
clo37899[7] = cdr;
void* f2970329856 = encode_clo(clo37899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2970329856;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam30023_fptr() // lam30023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30024 = arg_buffer[1];
//reading env and args
void* a2960129871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29704 = (decode_clo(env30024))[3];
//not do dummy comment
void* a2959929867 = (decode_clo(env30024))[2];
//not do dummy comment
void* cons = (decode_clo(env30024))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29704;
arg_buffer[3] = a2959929867;
arg_buffer[4] = a2960129871;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30023 = encode_clo(alloc_clo(lam30023_fptr, 0));

void* lam30025_fptr() // lam30025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30026 = arg_buffer[1];
//reading env and args
void* a2960029869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29704 = (decode_clo(env30026))[5];
//not do dummy comment
void* a2959929867 = (decode_clo(env30026))[4];
//not do dummy comment
void* append = (decode_clo(env30026))[3];
//not do dummy comment
void* lst2 = (decode_clo(env30026))[2];
//not do dummy comment
void* cons = (decode_clo(env30026))[1];

//creating new closure instance
void** clo37901 = alloc_clo(lam30023_fptr, 3);

//setting env list
clo37901[1] = cons;
clo37901[2] = a2959929867;
clo37901[3] = kont29704;
void* f2970529870 = encode_clo(clo37901);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2970529870;
arg_buffer[3] = a2960029869;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30025 = encode_clo(alloc_clo(lam30025_fptr, 0));

void* lam30027_fptr() // lam30027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30028 = arg_buffer[1];
//reading env and args
void* a2959929867 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30028))[6];
//not do dummy comment
void* kont29704 = (decode_clo(env30028))[5];
//not do dummy comment
void* append = (decode_clo(env30028))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30028))[3];
//not do dummy comment
void* lst1 = (decode_clo(env30028))[2];
//not do dummy comment
void* cons = (decode_clo(env30028))[1];

//creating new closure instance
void** clo37903 = alloc_clo(lam30025_fptr, 5);

//setting env list
clo37903[1] = cons;
clo37903[2] = lst2;
clo37903[3] = append;
clo37903[4] = a2959929867;
clo37903[5] = kont29704;
void* f2970629868 = encode_clo(clo37903);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2970629868;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30027 = encode_clo(alloc_clo(lam30027_fptr, 0));

void* lam30029_fptr() // lam30029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30030 = arg_buffer[1];
//reading env and args
void* a2959829865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30030))[7];
//not do dummy comment
void* kont29704 = (decode_clo(env30030))[6];
//not do dummy comment
void* append = (decode_clo(env30030))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30030))[4];
//not do dummy comment
void* cons = (decode_clo(env30030))[3];
//not do dummy comment
void* lst1 = (decode_clo(env30030))[2];
//not do dummy comment
void* car = (decode_clo(env30030))[1];

//if-clause
bool if_guard37904 = is_true(a2959829865);
if(if_guard37904)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29704);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29704))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37906 = alloc_clo(lam30027_fptr, 6);

//setting env list
clo37906[1] = cons;
clo37906[2] = lst1;
clo37906[3] = lst2;
clo37906[4] = append;
clo37906[5] = kont29704;
clo37906[6] = cdr;
void* f2970729866 = encode_clo(clo37906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2970729866;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30029 = encode_clo(alloc_clo(lam30029_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30031 = arg_buffer[1];
//reading env and args
void* kont29704 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37908 = alloc_clo(lam30029_fptr, 7);

//setting env list
clo37908[1] = car;
clo37908[2] = lst1;
clo37908[3] = cons;
clo37908[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo37908[5] = append;
clo37908[6] = kont29704;
clo37908[7] = cdr;
void* f2970829864 = encode_clo(clo37908);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2970829864;
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
void* _30032 = arg_buffer[1];
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

void* kont2970929872 = prim_car(lst);
void* lst29873 = prim_cdr(lst);
void* x2960229874 = apply_prim_hash(lst29873);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2970929872);
arg_buffer[2] = x2960229874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2970929872))[0]);
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
void* _30033 = arg_buffer[1];
//reading env and args
void* kont29711 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2960329875 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29711);
arg_buffer[2] = x2960329875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29711))[0]);
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
void* _30034 = arg_buffer[1];
//reading env and args
void* kont29712 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2960429876 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29712);
arg_buffer[2] = x2960429876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29712))[0]);
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
void* _30035 = arg_buffer[1];
//reading env and args
void* kont29713 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2960529877 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29713);
arg_buffer[2] = x2960529877;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29713))[0]);
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
void* _30036 = arg_buffer[1];
//reading env and args
void* kont29714 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2960629878 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29714);
arg_buffer[2] = x2960629878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29714))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* call_u45foldl_fptr() // call-foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30038 = arg_buffer[1];
//reading env and args
void* kont29715 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar37909 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37909, "0", 10);
void* a2960729879 = encode_mpz(mpzvar37909);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont29715;
arg_buffer[3] = _u43;
arg_buffer[4] = a2960729879;
arg_buffer[5] = lst;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call_u45foldl = encode_clo(alloc_clo(call_u45foldl_fptr, 0));

void* lam30039_fptr() // lam30039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30040 = arg_buffer[1];
//reading env and args
void* a2961329886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* call_u45foldl = (decode_clo(env30040))[2];
//not do dummy comment
void* kont29716 = (decode_clo(env30040))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call_u45foldl);
arg_buffer[2] = kont29716;
arg_buffer[3] = a2961329886;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call_u45foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30039 = encode_clo(alloc_clo(lam30039_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30046 = arg_buffer[1];
//reading env and args
void* kont29716 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar37910 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37910, "1", 10);
void* a2960829880 = encode_mpz(mpzvar37910);
mpz_t* mpzvar37911 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37911, "2", 10);
void* a2960929881 = encode_mpz(mpzvar37911);
mpz_t* mpzvar37912 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37912, "3", 10);
void* a2961029882 = encode_mpz(mpzvar37912);
mpz_t* mpzvar37913 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37913, "4", 10);
void* a2961129883 = encode_mpz(mpzvar37913);
mpz_t* mpzvar37914 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37914, "10", 10);
void* a2961229884 = encode_mpz(mpzvar37914);

//creating new closure instance
void** clo37916 = alloc_clo(lam30039_fptr, 2);

//setting env list
clo37916[1] = kont29716;
clo37916[2] = call_u45foldl;
void* f2971729885 = encode_clo(clo37916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2971729885;
arg_buffer[3] = a2960829880;
arg_buffer[4] = a2960929881;
arg_buffer[5] = a2961029882;
arg_buffer[6] = a2961129883;
arg_buffer[7] = a2961229884;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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

