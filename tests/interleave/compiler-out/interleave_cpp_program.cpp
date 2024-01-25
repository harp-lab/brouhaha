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
void* _19973 = arg_buffer[1];
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

void* kont1964319769 = prim_car(lst);
void* lst19770 = prim_cdr(lst);
void* x1952519771 = apply_prim__u43(lst19770);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1964319769);
arg_buffer[2] = x1952519771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1964319769))[0]);
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
void* _19974 = arg_buffer[1];
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

void* kont1964519772 = prim_car(lst);
void* lst19773 = prim_cdr(lst);
void* x1952619774 = apply_prim_max(lst19773);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1964519772);
arg_buffer[2] = x1952619774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1964519772))[0]);
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
void* _19975 = arg_buffer[1];
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

void* kont1964719775 = prim_car(lst);
void* lst19776 = prim_cdr(lst);
void* x1952719777 = apply_prim__u45(lst19776);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1964719775);
arg_buffer[2] = x1952719777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1964719775))[0]);
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
void* _19976 = arg_buffer[1];
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

void* kont1964919778 = prim_car(lst);
void* lst19779 = prim_cdr(lst);
void* x1952819780 = apply_prim__u42(lst19779);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1964919778);
arg_buffer[2] = x1952819780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1964919778))[0]);
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
void* _19977 = arg_buffer[1];
//reading env and args
void* kont19651 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1952919781 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19651);
arg_buffer[2] = x1952919781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19651))[0]);
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
void* _19978 = arg_buffer[1];
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

void* kont1965219782 = prim_car(lst);
void* lst19783 = prim_cdr(lst);
void* x1953019784 = apply_prim__u47(lst19783);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1965219782);
arg_buffer[2] = x1953019784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1965219782))[0]);
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
void* _19979 = arg_buffer[1];
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

void* kont1965419785 = prim_car(lst);
void* lst19786 = prim_cdr(lst);
void* x1953119787 = apply_prim__u61(lst19786);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1965419785);
arg_buffer[2] = x1953119787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1965419785))[0]);
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
void* _19980 = arg_buffer[1];
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

void* kont1965619788 = prim_car(lst);
void* lst19789 = prim_cdr(lst);
void* x1953219790 = apply_prim__u62(lst19789);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1965619788);
arg_buffer[2] = x1953219790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1965619788))[0]);
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
void* _19981 = arg_buffer[1];
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

void* kont1965819791 = prim_car(lst);
void* lst19792 = prim_cdr(lst);
void* x1953319793 = apply_prim__u60(lst19792);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1965819791);
arg_buffer[2] = x1953319793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1965819791))[0]);
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
void* _19982 = arg_buffer[1];
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

void* kont1966019794 = prim_car(lst);
void* lst19795 = prim_cdr(lst);
void* x1953419796 = apply_prim__u60_u61(lst19795);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1966019794);
arg_buffer[2] = x1953419796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1966019794))[0]);
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
void* _19983 = arg_buffer[1];
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

void* kont1966219797 = prim_car(lst);
void* lst19798 = prim_cdr(lst);
void* x1953519799 = apply_prim__u62_u61(lst19798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1966219797);
arg_buffer[2] = x1953519799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1966219797))[0]);
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
void* _19984 = arg_buffer[1];
//reading env and args
void* kont19664 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1953619800 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19664);
arg_buffer[2] = x1953619800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19664))[0]);
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
void* _19985 = arg_buffer[1];
//reading env and args
void* kont19665 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1953719801 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19665);
arg_buffer[2] = x1953719801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19665))[0]);
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
void* _19986 = arg_buffer[1];
//reading env and args
void* kont19666 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1953819802 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19666);
arg_buffer[2] = x1953819802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19666))[0]);
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
void* _19987 = arg_buffer[1];
//reading env and args
void* kont19667 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1953919803 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19667);
arg_buffer[2] = x1953919803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19667))[0]);
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
void* _19988 = arg_buffer[1];
//reading env and args
void* kont19668 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1954019804 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19668);
arg_buffer[2] = x1954019804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19668))[0]);
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
void* _19989 = arg_buffer[1];
//reading env and args
void* kont19669 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1954119805 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19669);
arg_buffer[2] = x1954119805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19669))[0]);
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
void* _19990 = arg_buffer[1];
//reading env and args
void* kont19670 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1954219806 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19670);
arg_buffer[2] = x1954219806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19670))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam19991_fptr() // lam19991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env19992 = arg_buffer[1];
//reading env and args
void* a1954519810 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1954319807 = (decode_clo(env19992))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env19992))[2];
//not do dummy comment
void* kont19671 = (decode_clo(env19992))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont19671;
arg_buffer[3] = a1954319807;
arg_buffer[4] = a1954519810;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam19991 = encode_clo(alloc_clo(lam19991_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _19995 = arg_buffer[1];
//reading env and args
void* kont19671 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar20168 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20168, "0", 10);
void* a1954319807 = encode_mpz(mpzvar20168);
mpz_t* mpzvar20169 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20169, "2", 10);
void* a1954419808 = encode_mpz(mpzvar20169);

//creating new closure instance
void** clo20171 = alloc_clo(lam19991_fptr, 3);

//setting env list
clo20171[1] = kont19671;
clo20171[2] = equal_u63;
clo20171[3] = a1954319807;
void* f1967219809 = encode_clo(clo20171);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1967219809;
arg_buffer[3] = x;
arg_buffer[4] = a1954419808;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam19996_fptr() // lam19996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env19997 = arg_buffer[1];
//reading env and args
void* a1954819814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19673 = (decode_clo(env19997))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env19997))[2];
//not do dummy comment
void* a1954619811 = (decode_clo(env19997))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont19673;
arg_buffer[3] = a1954619811;
arg_buffer[4] = a1954819814;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam19996 = encode_clo(alloc_clo(lam19996_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20000 = arg_buffer[1];
//reading env and args
void* kont19673 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar20172 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20172, "1", 10);
void* a1954619811 = encode_mpz(mpzvar20172);
mpz_t* mpzvar20173 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20173, "2", 10);
void* a1954719812 = encode_mpz(mpzvar20173);

//creating new closure instance
void** clo20175 = alloc_clo(lam19996_fptr, 3);

//setting env list
clo20175[1] = a1954619811;
clo20175[2] = equal_u63;
clo20175[3] = kont19673;
void* f1967419813 = encode_clo(clo20175);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1967419813;
arg_buffer[3] = x;
arg_buffer[4] = a1954719812;
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
void* _20001 = arg_buffer[1];
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

void* kont1967519815 = prim_car(x);
void* x19816 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1967519815);
arg_buffer[2] = x19816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1967519815))[0]);
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
void* _20002 = arg_buffer[1];
//reading env and args
void* kont19677 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1954919817 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19677);
arg_buffer[2] = x1954919817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19677))[0]);
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
void* _20003 = arg_buffer[1];
//reading env and args
void* kont19678 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1955019818 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19678);
arg_buffer[2] = x1955019818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19678))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam20006_fptr() // lam20006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20007 = arg_buffer[1];
//reading env and args
void* a1955619828 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19679 = (decode_clo(env20007))[3];
//not do dummy comment
void* x = (decode_clo(env20007))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env20007))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont19679;
arg_buffer[3] = x;
arg_buffer[4] = a1955619828;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20006 = encode_clo(alloc_clo(lam20006_fptr, 0));

void* lam20008_fptr() // lam20008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20009 = arg_buffer[1];
//reading env and args
void* a1955419825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20009))[5];
//not do dummy comment
void* lst = (decode_clo(env20009))[4];
//not do dummy comment
void* kont19679 = (decode_clo(env20009))[3];
//not do dummy comment
void* x = (decode_clo(env20009))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env20009))[1];

//if-clause
bool if_guard20176 = is_true(a1955419825);
if(if_guard20176)
{
void* x1955519826 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19679);
arg_buffer[2] = x1955519826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19679))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20178 = alloc_clo(lam20006_fptr, 3);

//setting env list
clo20178[1] = member_u63;
clo20178[2] = x;
clo20178[3] = kont19679;
void* f1968019827 = encode_clo(clo20178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1968019827;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20008 = encode_clo(alloc_clo(lam20008_fptr, 0));

void* lam20010_fptr() // lam20010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20011 = arg_buffer[1];
//reading env and args
void* a1955319823 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20011))[6];
//not do dummy comment
void* lst = (decode_clo(env20011))[5];
//not do dummy comment
void* kont19679 = (decode_clo(env20011))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env20011))[3];
//not do dummy comment
void* x = (decode_clo(env20011))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env20011))[1];

//creating new closure instance
void** clo20180 = alloc_clo(lam20008_fptr, 5);

//setting env list
clo20180[1] = member_u63;
clo20180[2] = x;
clo20180[3] = kont19679;
clo20180[4] = lst;
clo20180[5] = cdr;
void* f1968119824 = encode_clo(clo20180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1968119824;
arg_buffer[3] = a1955319823;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20010 = encode_clo(alloc_clo(lam20010_fptr, 0));

void* lam20012_fptr() // lam20012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20013 = arg_buffer[1];
//reading env and args
void* a1955119820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20013))[7];
//not do dummy comment
void* lst = (decode_clo(env20013))[6];
//not do dummy comment
void* kont19679 = (decode_clo(env20013))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env20013))[4];
//not do dummy comment
void* x = (decode_clo(env20013))[3];
//not do dummy comment
void* car = (decode_clo(env20013))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env20013))[1];

//if-clause
bool if_guard20181 = is_true(a1955119820);
if(if_guard20181)
{
void* x1955219821 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19679);
arg_buffer[2] = x1955219821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19679))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20183 = alloc_clo(lam20010_fptr, 6);

//setting env list
clo20183[1] = member_u63;
clo20183[2] = x;
clo20183[3] = equal_u63;
clo20183[4] = kont19679;
clo20183[5] = lst;
clo20183[6] = cdr;
void* f1968219822 = encode_clo(clo20183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1968219822;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20012 = encode_clo(alloc_clo(lam20012_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20014 = arg_buffer[1];
//reading env and args
void* kont19679 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20185 = alloc_clo(lam20012_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo20185[1] = member_u63;
clo20185[2] = car;
clo20185[3] = x;
clo20185[4] = equal_u63;
clo20185[5] = kont19679;
clo20185[6] = lst;
clo20185[7] = cdr;
void* f1968319819 = encode_clo(clo20185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1968319819;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam20015_fptr() // lam20015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20016 = arg_buffer[1];
//reading env and args
void* a1956019836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1955919834 = (decode_clo(env20016))[4];
//not do dummy comment
void* fun = (decode_clo(env20016))[3];
//not do dummy comment
void* kont19684 = (decode_clo(env20016))[2];
//not do dummy comment
void* foldl = (decode_clo(env20016))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont19684;
arg_buffer[3] = fun;
arg_buffer[4] = a1955919834;
arg_buffer[5] = a1956019836;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20015 = encode_clo(alloc_clo(lam20015_fptr, 0));

void* lam20017_fptr() // lam20017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20018 = arg_buffer[1];
//reading env and args
void* a1955919834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20018))[5];
//not do dummy comment
void* lst = (decode_clo(env20018))[4];
//not do dummy comment
void* fun = (decode_clo(env20018))[3];
//not do dummy comment
void* kont19684 = (decode_clo(env20018))[2];
//not do dummy comment
void* foldl = (decode_clo(env20018))[1];

//creating new closure instance
void** clo20187 = alloc_clo(lam20015_fptr, 4);

//setting env list
clo20187[1] = foldl;
clo20187[2] = kont19684;
clo20187[3] = fun;
clo20187[4] = a1955919834;
void* f1968519835 = encode_clo(clo20187);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1968519835;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20017 = encode_clo(alloc_clo(lam20017_fptr, 0));

void* lam20019_fptr() // lam20019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20020 = arg_buffer[1];
//reading env and args
void* a1955819832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20020))[6];
//not do dummy comment
void* lst = (decode_clo(env20020))[5];
//not do dummy comment
void* fun = (decode_clo(env20020))[4];
//not do dummy comment
void* acc = (decode_clo(env20020))[3];
//not do dummy comment
void* kont19684 = (decode_clo(env20020))[2];
//not do dummy comment
void* foldl = (decode_clo(env20020))[1];

//creating new closure instance
void** clo20189 = alloc_clo(lam20017_fptr, 5);

//setting env list
clo20189[1] = foldl;
clo20189[2] = kont19684;
clo20189[3] = fun;
clo20189[4] = lst;
clo20189[5] = cdr;
void* f1968619833 = encode_clo(clo20189);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1968619833;
arg_buffer[3] = a1955819832;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20019 = encode_clo(alloc_clo(lam20019_fptr, 0));

void* lam20021_fptr() // lam20021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20022 = arg_buffer[1];
//reading env and args
void* a1955719830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20022))[7];
//not do dummy comment
void* lst = (decode_clo(env20022))[6];
//not do dummy comment
void* fun = (decode_clo(env20022))[5];
//not do dummy comment
void* acc = (decode_clo(env20022))[4];
//not do dummy comment
void* kont19684 = (decode_clo(env20022))[3];
//not do dummy comment
void* car = (decode_clo(env20022))[2];
//not do dummy comment
void* foldl = (decode_clo(env20022))[1];

//if-clause
bool if_guard20190 = is_true(a1955719830);
if(if_guard20190)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19684);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19684))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20192 = alloc_clo(lam20019_fptr, 6);

//setting env list
clo20192[1] = foldl;
clo20192[2] = kont19684;
clo20192[3] = acc;
clo20192[4] = fun;
clo20192[5] = lst;
clo20192[6] = cdr;
void* f1968719831 = encode_clo(clo20192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1968719831;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20021 = encode_clo(alloc_clo(lam20021_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20023 = arg_buffer[1];
//reading env and args
void* kont19684 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo20194 = alloc_clo(lam20021_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo20194[1] = foldl;
clo20194[2] = car;
clo20194[3] = kont19684;
clo20194[4] = acc;
clo20194[5] = fun;
clo20194[6] = lst;
clo20194[7] = cdr;
void* f1968819829 = encode_clo(clo20194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1968819829;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam20024_fptr() // lam20024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20025 = arg_buffer[1];
//reading env and args
void* a1956419844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19689 = (decode_clo(env20025))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20025))[2];
//not do dummy comment
void* a1956219840 = (decode_clo(env20025))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont19689;
arg_buffer[3] = a1956219840;
arg_buffer[4] = a1956419844;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20024 = encode_clo(alloc_clo(lam20024_fptr, 0));

void* lam20026_fptr() // lam20026 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20027 = arg_buffer[1];
//reading env and args
void* a1956319842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19689 = (decode_clo(env20027))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20027))[4];
//not do dummy comment
void* a1956219840 = (decode_clo(env20027))[3];
//not do dummy comment
void* lst2 = (decode_clo(env20027))[2];
//not do dummy comment
void* cons = (decode_clo(env20027))[1];

//creating new closure instance
void** clo20196 = alloc_clo(lam20024_fptr, 3);

//setting env list
clo20196[1] = a1956219840;
clo20196[2] = reverse_u45helper;
clo20196[3] = kont19689;
void* f1969019843 = encode_clo(clo20196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1969019843;
arg_buffer[3] = a1956319842;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20026 = encode_clo(alloc_clo(lam20026_fptr, 0));

void* lam20028_fptr() // lam20028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20029 = arg_buffer[1];
//reading env and args
void* a1956219840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19689 = (decode_clo(env20029))[6];
//not do dummy comment
void* lst = (decode_clo(env20029))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20029))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20029))[3];
//not do dummy comment
void* car = (decode_clo(env20029))[2];
//not do dummy comment
void* cons = (decode_clo(env20029))[1];

//creating new closure instance
void** clo20198 = alloc_clo(lam20026_fptr, 5);

//setting env list
clo20198[1] = cons;
clo20198[2] = lst2;
clo20198[3] = a1956219840;
clo20198[4] = reverse_u45helper;
clo20198[5] = kont19689;
void* f1969119841 = encode_clo(clo20198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1969119841;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20028 = encode_clo(alloc_clo(lam20028_fptr, 0));

void* lam20030_fptr() // lam20030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20031 = arg_buffer[1];
//reading env and args
void* a1956119838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20031))[7];
//not do dummy comment
void* kont19689 = (decode_clo(env20031))[6];
//not do dummy comment
void* lst = (decode_clo(env20031))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20031))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20031))[3];
//not do dummy comment
void* car = (decode_clo(env20031))[2];
//not do dummy comment
void* cons = (decode_clo(env20031))[1];

//if-clause
bool if_guard20199 = is_true(a1956119838);
if(if_guard20199)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19689);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19689))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20201 = alloc_clo(lam20028_fptr, 6);

//setting env list
clo20201[1] = cons;
clo20201[2] = car;
clo20201[3] = lst2;
clo20201[4] = reverse_u45helper;
clo20201[5] = lst;
clo20201[6] = kont19689;
void* f1969219839 = encode_clo(clo20201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1969219839;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20030 = encode_clo(alloc_clo(lam20030_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20032 = arg_buffer[1];
//reading env and args
void* kont19689 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20203 = alloc_clo(lam20030_fptr, 7);

//setting env list
clo20203[1] = cons;
clo20203[2] = car;
clo20203[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo20203[4] = reverse_u45helper;
clo20203[5] = lst;
clo20203[6] = kont19689;
clo20203[7] = cdr;
void* f1969319837 = encode_clo(clo20203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1969319837;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam20033_fptr() // lam20033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20034 = arg_buffer[1];
//reading env and args
void* a1956519846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20034))[3];
//not do dummy comment
void* kont19694 = (decode_clo(env20034))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20034))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont19694;
arg_buffer[3] = lst;
arg_buffer[4] = a1956519846;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20033 = encode_clo(alloc_clo(lam20033_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20035 = arg_buffer[1];
//reading env and args
void* kont19694 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo20205 = alloc_clo(lam20033_fptr, 3);

//setting env list
clo20205[1] = reverse_u45helper;
clo20205[2] = kont19694;
clo20205[3] = lst;
void* f1969519845 = encode_clo(clo20205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1969519845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam20036_fptr() // lam20036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20037 = arg_buffer[1];
//reading env and args
void* x1956819851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19696 = (decode_clo(env20037))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19696);
arg_buffer[2] = x1956819851;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19696))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20036 = encode_clo(alloc_clo(lam20036_fptr, 0));

void* lam20038_fptr() // lam20038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20039 = arg_buffer[1];
//reading env and args
void* a1957319860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1956919853 = (decode_clo(env20039))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env20039))[3];
//not do dummy comment
void* a1957119856 = (decode_clo(env20039))[2];
//not do dummy comment
void* kont19696 = (decode_clo(env20039))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont19696;
arg_buffer[3] = a1956919853;
arg_buffer[4] = a1957119856;
arg_buffer[5] = a1957319860;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20038 = encode_clo(alloc_clo(lam20038_fptr, 0));

void* lam20040_fptr() // lam20040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20041 = arg_buffer[1];
//reading env and args
void* a1957219858 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1956919853 = (decode_clo(env20041))[6];
//not do dummy comment
void* cons = (decode_clo(env20041))[5];
//not do dummy comment
void* a1957119856 = (decode_clo(env20041))[4];
//not do dummy comment
void* kont19696 = (decode_clo(env20041))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env20041))[2];
//not do dummy comment
void* lst2 = (decode_clo(env20041))[1];

//creating new closure instance
void** clo20207 = alloc_clo(lam20038_fptr, 4);

//setting env list
clo20207[1] = kont19696;
clo20207[2] = a1957119856;
clo20207[3] = take_u45helper;
clo20207[4] = a1956919853;
void* f1969819859 = encode_clo(clo20207);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1969819859;
arg_buffer[3] = a1957219858;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20040 = encode_clo(alloc_clo(lam20040_fptr, 0));

void* lam20042_fptr() // lam20042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20043 = arg_buffer[1];
//reading env and args
void* a1957119856 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20043))[7];
//not do dummy comment
void* a1956919853 = (decode_clo(env20043))[6];
//not do dummy comment
void* kont19696 = (decode_clo(env20043))[5];
//not do dummy comment
void* car = (decode_clo(env20043))[4];
//not do dummy comment
void* cons = (decode_clo(env20043))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env20043))[2];
//not do dummy comment
void* lst2 = (decode_clo(env20043))[1];

//creating new closure instance
void** clo20209 = alloc_clo(lam20040_fptr, 6);

//setting env list
clo20209[1] = lst2;
clo20209[2] = take_u45helper;
clo20209[3] = kont19696;
clo20209[4] = a1957119856;
clo20209[5] = cons;
clo20209[6] = a1956919853;
void* f1969919857 = encode_clo(clo20209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1969919857;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20042 = encode_clo(alloc_clo(lam20042_fptr, 0));

void* lam20045_fptr() // lam20045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20046 = arg_buffer[1];
//reading env and args
void* a1956919853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20046))[8];
//not do dummy comment
void* kont19696 = (decode_clo(env20046))[7];
//not do dummy comment
void* cons = (decode_clo(env20046))[6];
//not do dummy comment
void* _u45 = (decode_clo(env20046))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env20046))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20046))[3];
//not do dummy comment
void* n = (decode_clo(env20046))[2];
//not do dummy comment
void* car = (decode_clo(env20046))[1];
mpz_t* mpzvar20210 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20210, "1", 10);
void* a1957019854 = encode_mpz(mpzvar20210);

//creating new closure instance
void** clo20212 = alloc_clo(lam20042_fptr, 7);

//setting env list
clo20212[1] = lst2;
clo20212[2] = take_u45helper;
clo20212[3] = cons;
clo20212[4] = car;
clo20212[5] = kont19696;
clo20212[6] = a1956919853;
clo20212[7] = lst;
void* f1970019855 = encode_clo(clo20212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1970019855;
arg_buffer[3] = n;
arg_buffer[4] = a1957019854;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20045 = encode_clo(alloc_clo(lam20045_fptr, 0));

void* lam20047_fptr() // lam20047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20048 = arg_buffer[1];
//reading env and args
void* a1956719849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20048))[10];
//not do dummy comment
void* lst = (decode_clo(env20048))[9];
//not do dummy comment
void* reverse = (decode_clo(env20048))[8];
//not do dummy comment
void* kont19696 = (decode_clo(env20048))[7];
//not do dummy comment
void* cons = (decode_clo(env20048))[6];
//not do dummy comment
void* _u45 = (decode_clo(env20048))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env20048))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20048))[3];
//not do dummy comment
void* n = (decode_clo(env20048))[2];
//not do dummy comment
void* car = (decode_clo(env20048))[1];

//if-clause
bool if_guard20213 = is_true(a1956719849);
if(if_guard20213)
{

//creating new closure instance
void** clo20215 = alloc_clo(lam20036_fptr, 1);

//setting env list
clo20215[1] = kont19696;
void* f1969719850 = encode_clo(clo20215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1969719850;
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
void** clo20217 = alloc_clo(lam20045_fptr, 8);

//setting env list
clo20217[1] = car;
clo20217[2] = n;
clo20217[3] = lst2;
clo20217[4] = take_u45helper;
clo20217[5] = _u45;
clo20217[6] = cons;
clo20217[7] = kont19696;
clo20217[8] = lst;
void* f1970119852 = encode_clo(clo20217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1970119852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20047 = encode_clo(alloc_clo(lam20047_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20050 = arg_buffer[1];
//reading env and args
void* kont19696 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar20218 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20218, "0", 10);
void* a1956619847 = encode_mpz(mpzvar20218);

//creating new closure instance
void** clo20220 = alloc_clo(lam20047_fptr, 10);

//setting env list
clo20220[1] = car;
clo20220[2] = n;
clo20220[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo20220[4] = take_u45helper;
clo20220[5] = _u45;
clo20220[6] = cons;
clo20220[7] = kont19696;
clo20220[8] = reverse;
clo20220[9] = lst;
clo20220[10] = cdr;
void* f1970219848 = encode_clo(clo20220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1970219848;
arg_buffer[3] = n;
arg_buffer[4] = a1956619847;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam20051_fptr() // lam20051 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20052 = arg_buffer[1];
//reading env and args
void* a1957419862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20052))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env20052))[3];
//not do dummy comment
void* n = (decode_clo(env20052))[2];
//not do dummy comment
void* kont19703 = (decode_clo(env20052))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont19703;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1957419862;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20051 = encode_clo(alloc_clo(lam20051_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20053 = arg_buffer[1];
//reading env and args
void* kont19703 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20222 = alloc_clo(lam20051_fptr, 4);

//setting env list
clo20222[1] = kont19703;
clo20222[2] = n;
clo20222[3] = take_u45helper;
clo20222[4] = lst;
void* f1970419861 = encode_clo(clo20222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1970419861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam20055_fptr() // lam20055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20056 = arg_buffer[1];
//reading env and args
void* a1957919870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19705 = (decode_clo(env20056))[3];
//not do dummy comment
void* a1957719866 = (decode_clo(env20056))[2];
//not do dummy comment
void* _u43 = (decode_clo(env20056))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont19705;
arg_buffer[3] = a1957719866;
arg_buffer[4] = a1957919870;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20055 = encode_clo(alloc_clo(lam20055_fptr, 0));

void* lam20057_fptr() // lam20057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20058 = arg_buffer[1];
//reading env and args
void* a1957819868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19705 = (decode_clo(env20058))[4];
//not do dummy comment
void* a1957719866 = (decode_clo(env20058))[3];
//not do dummy comment
void* length = (decode_clo(env20058))[2];
//not do dummy comment
void* _u43 = (decode_clo(env20058))[1];

//creating new closure instance
void** clo20224 = alloc_clo(lam20055_fptr, 3);

//setting env list
clo20224[1] = _u43;
clo20224[2] = a1957719866;
clo20224[3] = kont19705;
void* f1970619869 = encode_clo(clo20224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1970619869;
arg_buffer[3] = a1957819868;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20057 = encode_clo(alloc_clo(lam20057_fptr, 0));

void* lam20060_fptr() // lam20060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20061 = arg_buffer[1];
//reading env and args
void* a1957519864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20061))[5];
//not do dummy comment
void* kont19705 = (decode_clo(env20061))[4];
//not do dummy comment
void* lst = (decode_clo(env20061))[3];
//not do dummy comment
void* length = (decode_clo(env20061))[2];
//not do dummy comment
void* _u43 = (decode_clo(env20061))[1];

//if-clause
bool if_guard20225 = is_true(a1957519864);
if(if_guard20225)
{
mpz_t* mpzvar20226 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20226, "0", 10);
void* x1957619865 = encode_mpz(mpzvar20226);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19705);
arg_buffer[2] = x1957619865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19705))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar20227 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20227, "1", 10);
void* a1957719866 = encode_mpz(mpzvar20227);

//creating new closure instance
void** clo20229 = alloc_clo(lam20057_fptr, 4);

//setting env list
clo20229[1] = _u43;
clo20229[2] = length;
clo20229[3] = a1957719866;
clo20229[4] = kont19705;
void* f1970719867 = encode_clo(clo20229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1970719867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20060 = encode_clo(alloc_clo(lam20060_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20062 = arg_buffer[1];
//reading env and args
void* kont19705 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo20231 = alloc_clo(lam20060_fptr, 5);

//setting env list
clo20231[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo20231[2] = length;
clo20231[3] = lst;
clo20231[4] = kont19705;
clo20231[5] = cdr;
void* f1970819863 = encode_clo(clo20231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1970819863;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam20063_fptr() // lam20063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20064 = arg_buffer[1];
//reading env and args
void* x1958119874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19709 = (decode_clo(env20064))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19709);
arg_buffer[2] = x1958119874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19709))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20063 = encode_clo(alloc_clo(lam20063_fptr, 0));

void* lam20065_fptr() // lam20065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20066 = arg_buffer[1];
//reading env and args
void* a1958519882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19709 = (decode_clo(env20066))[3];
//not do dummy comment
void* cons = (decode_clo(env20066))[2];
//not do dummy comment
void* a1958319878 = (decode_clo(env20066))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont19709;
arg_buffer[3] = a1958319878;
arg_buffer[4] = a1958519882;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20065 = encode_clo(alloc_clo(lam20065_fptr, 0));

void* lam20067_fptr() // lam20067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20068 = arg_buffer[1];
//reading env and args
void* a1958419880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env20068))[5];
//not do dummy comment
void* map = (decode_clo(env20068))[4];
//not do dummy comment
void* kont19709 = (decode_clo(env20068))[3];
//not do dummy comment
void* cons = (decode_clo(env20068))[2];
//not do dummy comment
void* a1958319878 = (decode_clo(env20068))[1];

//creating new closure instance
void** clo20233 = alloc_clo(lam20065_fptr, 3);

//setting env list
clo20233[1] = a1958319878;
clo20233[2] = cons;
clo20233[3] = kont19709;
void* f1971119881 = encode_clo(clo20233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1971119881;
arg_buffer[3] = proc;
arg_buffer[4] = a1958419880;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20067 = encode_clo(alloc_clo(lam20067_fptr, 0));

void* lam20069_fptr() // lam20069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20070 = arg_buffer[1];
//reading env and args
void* a1958319878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20070))[6];
//not do dummy comment
void* lst = (decode_clo(env20070))[5];
//not do dummy comment
void* proc = (decode_clo(env20070))[4];
//not do dummy comment
void* cons = (decode_clo(env20070))[3];
//not do dummy comment
void* map = (decode_clo(env20070))[2];
//not do dummy comment
void* kont19709 = (decode_clo(env20070))[1];

//creating new closure instance
void** clo20235 = alloc_clo(lam20067_fptr, 5);

//setting env list
clo20235[1] = a1958319878;
clo20235[2] = cons;
clo20235[3] = kont19709;
clo20235[4] = map;
clo20235[5] = proc;
void* f1971219879 = encode_clo(clo20235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1971219879;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20069 = encode_clo(alloc_clo(lam20069_fptr, 0));

void* lam20071_fptr() // lam20071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20072 = arg_buffer[1];
//reading env and args
void* a1958219876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20072))[6];
//not do dummy comment
void* lst = (decode_clo(env20072))[5];
//not do dummy comment
void* proc = (decode_clo(env20072))[4];
//not do dummy comment
void* cons = (decode_clo(env20072))[3];
//not do dummy comment
void* map = (decode_clo(env20072))[2];
//not do dummy comment
void* kont19709 = (decode_clo(env20072))[1];

//creating new closure instance
void** clo20237 = alloc_clo(lam20069_fptr, 6);

//setting env list
clo20237[1] = kont19709;
clo20237[2] = map;
clo20237[3] = cons;
clo20237[4] = proc;
clo20237[5] = lst;
clo20237[6] = cdr;
void* f1971319877 = encode_clo(clo20237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1971319877;
arg_buffer[3] = a1958219876;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20071 = encode_clo(alloc_clo(lam20071_fptr, 0));

void* lam20073_fptr() // lam20073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20074 = arg_buffer[1];
//reading env and args
void* a1958019872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20074))[8];
//not do dummy comment
void* proc = (decode_clo(env20074))[7];
//not do dummy comment
void* car = (decode_clo(env20074))[6];
//not do dummy comment
void* cons = (decode_clo(env20074))[5];
//not do dummy comment
void* list = (decode_clo(env20074))[4];
//not do dummy comment
void* cdr = (decode_clo(env20074))[3];
//not do dummy comment
void* map = (decode_clo(env20074))[2];
//not do dummy comment
void* kont19709 = (decode_clo(env20074))[1];

//if-clause
bool if_guard20238 = is_true(a1958019872);
if(if_guard20238)
{

//creating new closure instance
void** clo20240 = alloc_clo(lam20063_fptr, 1);

//setting env list
clo20240[1] = kont19709;
void* f1971019873 = encode_clo(clo20240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1971019873;
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
void** clo20242 = alloc_clo(lam20071_fptr, 6);

//setting env list
clo20242[1] = kont19709;
clo20242[2] = map;
clo20242[3] = cons;
clo20242[4] = proc;
clo20242[5] = lst;
clo20242[6] = cdr;
void* f1971419875 = encode_clo(clo20242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1971419875;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20073 = encode_clo(alloc_clo(lam20073_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20075 = arg_buffer[1];
//reading env and args
void* kont19709 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20244 = alloc_clo(lam20073_fptr, 8);

//setting env list
clo20244[1] = kont19709;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo20244[2] = map;
clo20244[3] = cdr;
clo20244[4] = list;
clo20244[5] = cons;
clo20244[6] = car;
clo20244[7] = proc;
clo20244[8] = lst;
void* f1971519871 = encode_clo(clo20244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1971519871;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam20076_fptr() // lam20076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20077 = arg_buffer[1];
//reading env and args
void* x1958719886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19716 = (decode_clo(env20077))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19716);
arg_buffer[2] = x1958719886;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19716))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20076 = encode_clo(alloc_clo(lam20076_fptr, 0));

void* lam20078_fptr() // lam20078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20079 = arg_buffer[1];
//reading env and args
void* a1959219896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env20079))[3];
//not do dummy comment
void* a1959019892 = (decode_clo(env20079))[2];
//not do dummy comment
void* kont19716 = (decode_clo(env20079))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont19716;
arg_buffer[3] = a1959019892;
arg_buffer[4] = a1959219896;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20078 = encode_clo(alloc_clo(lam20078_fptr, 0));

void* lam20080_fptr() // lam20080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20081 = arg_buffer[1];
//reading env and args
void* a1959119894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env20081))[5];
//not do dummy comment
void* filter = (decode_clo(env20081))[4];
//not do dummy comment
void* cons = (decode_clo(env20081))[3];
//not do dummy comment
void* a1959019892 = (decode_clo(env20081))[2];
//not do dummy comment
void* kont19716 = (decode_clo(env20081))[1];

//creating new closure instance
void** clo20246 = alloc_clo(lam20078_fptr, 3);

//setting env list
clo20246[1] = kont19716;
clo20246[2] = a1959019892;
clo20246[3] = cons;
void* f1971819895 = encode_clo(clo20246);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1971819895;
arg_buffer[3] = op;
arg_buffer[4] = a1959119894;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20080 = encode_clo(alloc_clo(lam20080_fptr, 0));

void* lam20082_fptr() // lam20082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20083 = arg_buffer[1];
//reading env and args
void* a1959019892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20083))[6];
//not do dummy comment
void* lst = (decode_clo(env20083))[5];
//not do dummy comment
void* op = (decode_clo(env20083))[4];
//not do dummy comment
void* kont19716 = (decode_clo(env20083))[3];
//not do dummy comment
void* filter = (decode_clo(env20083))[2];
//not do dummy comment
void* cons = (decode_clo(env20083))[1];

//creating new closure instance
void** clo20248 = alloc_clo(lam20080_fptr, 5);

//setting env list
clo20248[1] = kont19716;
clo20248[2] = a1959019892;
clo20248[3] = cons;
clo20248[4] = filter;
clo20248[5] = op;
void* f1971919893 = encode_clo(clo20248);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1971919893;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20082 = encode_clo(alloc_clo(lam20082_fptr, 0));

void* lam20084_fptr() // lam20084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20085 = arg_buffer[1];
//reading env and args
void* a1959319898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env20085))[3];
//not do dummy comment
void* kont19716 = (decode_clo(env20085))[2];
//not do dummy comment
void* filter = (decode_clo(env20085))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont19716;
arg_buffer[3] = op;
arg_buffer[4] = a1959319898;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20084 = encode_clo(alloc_clo(lam20084_fptr, 0));

void* lam20086_fptr() // lam20086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20087 = arg_buffer[1];
//reading env and args
void* a1958919890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20087))[7];
//not do dummy comment
void* lst = (decode_clo(env20087))[6];
//not do dummy comment
void* op = (decode_clo(env20087))[5];
//not do dummy comment
void* kont19716 = (decode_clo(env20087))[4];
//not do dummy comment
void* cons = (decode_clo(env20087))[3];
//not do dummy comment
void* filter = (decode_clo(env20087))[2];
//not do dummy comment
void* car = (decode_clo(env20087))[1];

//if-clause
bool if_guard20249 = is_true(a1958919890);
if(if_guard20249)
{

//creating new closure instance
void** clo20251 = alloc_clo(lam20082_fptr, 6);

//setting env list
clo20251[1] = cons;
clo20251[2] = filter;
clo20251[3] = kont19716;
clo20251[4] = op;
clo20251[5] = lst;
clo20251[6] = cdr;
void* f1972019891 = encode_clo(clo20251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1972019891;
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
void** clo20253 = alloc_clo(lam20084_fptr, 3);

//setting env list
clo20253[1] = filter;
clo20253[2] = kont19716;
clo20253[3] = op;
void* f1972119897 = encode_clo(clo20253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1972119897;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20086 = encode_clo(alloc_clo(lam20086_fptr, 0));

void* lam20088_fptr() // lam20088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20089 = arg_buffer[1];
//reading env and args
void* a1958819888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20089))[7];
//not do dummy comment
void* lst = (decode_clo(env20089))[6];
//not do dummy comment
void* op = (decode_clo(env20089))[5];
//not do dummy comment
void* kont19716 = (decode_clo(env20089))[4];
//not do dummy comment
void* cons = (decode_clo(env20089))[3];
//not do dummy comment
void* filter = (decode_clo(env20089))[2];
//not do dummy comment
void* car = (decode_clo(env20089))[1];

//creating new closure instance
void** clo20255 = alloc_clo(lam20086_fptr, 7);

//setting env list
clo20255[1] = car;
clo20255[2] = filter;
clo20255[3] = cons;
clo20255[4] = kont19716;
clo20255[5] = op;
clo20255[6] = lst;
clo20255[7] = cdr;
void* f1972219889 = encode_clo(clo20255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1972219889;
arg_buffer[3] = a1958819888;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20088 = encode_clo(alloc_clo(lam20088_fptr, 0));

void* lam20090_fptr() // lam20090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20091 = arg_buffer[1];
//reading env and args
void* a1958619884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20091))[8];
//not do dummy comment
void* op = (decode_clo(env20091))[7];
//not do dummy comment
void* kont19716 = (decode_clo(env20091))[6];
//not do dummy comment
void* cons = (decode_clo(env20091))[5];
//not do dummy comment
void* list = (decode_clo(env20091))[4];
//not do dummy comment
void* cdr = (decode_clo(env20091))[3];
//not do dummy comment
void* filter = (decode_clo(env20091))[2];
//not do dummy comment
void* car = (decode_clo(env20091))[1];

//if-clause
bool if_guard20256 = is_true(a1958619884);
if(if_guard20256)
{

//creating new closure instance
void** clo20258 = alloc_clo(lam20076_fptr, 1);

//setting env list
clo20258[1] = kont19716;
void* f1971719885 = encode_clo(clo20258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1971719885;
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
void** clo20260 = alloc_clo(lam20088_fptr, 7);

//setting env list
clo20260[1] = car;
clo20260[2] = filter;
clo20260[3] = cons;
clo20260[4] = kont19716;
clo20260[5] = op;
clo20260[6] = lst;
clo20260[7] = cdr;
void* f1972319887 = encode_clo(clo20260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1972319887;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20090 = encode_clo(alloc_clo(lam20090_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20092 = arg_buffer[1];
//reading env and args
void* kont19716 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20262 = alloc_clo(lam20090_fptr, 8);

//setting env list
clo20262[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo20262[2] = filter;
clo20262[3] = cdr;
clo20262[4] = list;
clo20262[5] = cons;
clo20262[6] = kont19716;
clo20262[7] = op;
clo20262[8] = lst;
void* f1972419883 = encode_clo(clo20262);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1972419883;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam20093_fptr() // lam20093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20094 = arg_buffer[1];
//reading env and args
void* a1959819906 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env20094))[3];
//not do dummy comment
void* kont19725 = (decode_clo(env20094))[2];
//not do dummy comment
void* a1959619903 = (decode_clo(env20094))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont19725;
arg_buffer[3] = a1959619903;
arg_buffer[4] = a1959819906;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20093 = encode_clo(alloc_clo(lam20093_fptr, 0));

void* lam20096_fptr() // lam20096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20097 = arg_buffer[1];
//reading env and args
void* a1959619903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env20097))[4];
//not do dummy comment
void* kont19725 = (decode_clo(env20097))[3];
//not do dummy comment
void* n = (decode_clo(env20097))[2];
//not do dummy comment
void* _u45 = (decode_clo(env20097))[1];
mpz_t* mpzvar20263 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20263, "1", 10);
void* a1959719904 = encode_mpz(mpzvar20263);

//creating new closure instance
void** clo20265 = alloc_clo(lam20093_fptr, 3);

//setting env list
clo20265[1] = a1959619903;
clo20265[2] = kont19725;
clo20265[3] = drop;
void* f1972619905 = encode_clo(clo20265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1972619905;
arg_buffer[3] = n;
arg_buffer[4] = a1959719904;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20096 = encode_clo(alloc_clo(lam20096_fptr, 0));

void* lam20098_fptr() // lam20098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20099 = arg_buffer[1];
//reading env and args
void* a1959519901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20099))[6];
//not do dummy comment
void* kont19725 = (decode_clo(env20099))[5];
//not do dummy comment
void* n = (decode_clo(env20099))[4];
//not do dummy comment
void* _u45 = (decode_clo(env20099))[3];
//not do dummy comment
void* lst = (decode_clo(env20099))[2];
//not do dummy comment
void* drop = (decode_clo(env20099))[1];

//if-clause
bool if_guard20266 = is_true(a1959519901);
if(if_guard20266)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19725);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19725))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20268 = alloc_clo(lam20096_fptr, 4);

//setting env list
clo20268[1] = _u45;
clo20268[2] = n;
clo20268[3] = kont19725;
clo20268[4] = drop;
void* f1972719902 = encode_clo(clo20268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1972719902;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20098 = encode_clo(alloc_clo(lam20098_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20101 = arg_buffer[1];
//reading env and args
void* kont19725 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar20269 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20269, "0", 10);
void* a1959419899 = encode_mpz(mpzvar20269);

//creating new closure instance
void** clo20271 = alloc_clo(lam20098_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo20271[1] = drop;
clo20271[2] = lst;
clo20271[3] = _u45;
clo20271[4] = n;
clo20271[5] = kont19725;
clo20271[6] = cdr;
void* f1972819900 = encode_clo(clo20271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1972819900;
arg_buffer[3] = n;
arg_buffer[4] = a1959419899;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam20102_fptr() // lam20102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20103 = arg_buffer[1];
//reading env and args
void* a1960219914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont19729 = (decode_clo(env20103))[3];
//not do dummy comment
void* proc = (decode_clo(env20103))[2];
//not do dummy comment
void* a1960019910 = (decode_clo(env20103))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont19729;
arg_buffer[3] = a1960019910;
arg_buffer[4] = a1960219914;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20102 = encode_clo(alloc_clo(lam20102_fptr, 0));

void* lam20104_fptr() // lam20104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20105 = arg_buffer[1];
//reading env and args
void* a1960119912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env20105))[5];
//not do dummy comment
void* kont19729 = (decode_clo(env20105))[4];
//not do dummy comment
void* a1960019910 = (decode_clo(env20105))[3];
//not do dummy comment
void* proc = (decode_clo(env20105))[2];
//not do dummy comment
void* acc = (decode_clo(env20105))[1];

//creating new closure instance
void** clo20273 = alloc_clo(lam20102_fptr, 3);

//setting env list
clo20273[1] = a1960019910;
clo20273[2] = proc;
clo20273[3] = kont19729;
void* f1973019913 = encode_clo(clo20273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1973019913;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1960119912;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20104 = encode_clo(alloc_clo(lam20104_fptr, 0));

void* lam20106_fptr() // lam20106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20107 = arg_buffer[1];
//reading env and args
void* a1960019910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20107))[6];
//not do dummy comment
void* kont19729 = (decode_clo(env20107))[5];
//not do dummy comment
void* foldr = (decode_clo(env20107))[4];
//not do dummy comment
void* lst = (decode_clo(env20107))[3];
//not do dummy comment
void* proc = (decode_clo(env20107))[2];
//not do dummy comment
void* acc = (decode_clo(env20107))[1];

//creating new closure instance
void** clo20275 = alloc_clo(lam20104_fptr, 5);

//setting env list
clo20275[1] = acc;
clo20275[2] = proc;
clo20275[3] = a1960019910;
clo20275[4] = kont19729;
clo20275[5] = foldr;
void* f1973119911 = encode_clo(clo20275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1973119911;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20106 = encode_clo(alloc_clo(lam20106_fptr, 0));

void* lam20108_fptr() // lam20108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20109 = arg_buffer[1];
//reading env and args
void* a1959919908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20109))[7];
//not do dummy comment
void* kont19729 = (decode_clo(env20109))[6];
//not do dummy comment
void* car = (decode_clo(env20109))[5];
//not do dummy comment
void* foldr = (decode_clo(env20109))[4];
//not do dummy comment
void* lst = (decode_clo(env20109))[3];
//not do dummy comment
void* proc = (decode_clo(env20109))[2];
//not do dummy comment
void* acc = (decode_clo(env20109))[1];

//if-clause
bool if_guard20276 = is_true(a1959919908);
if(if_guard20276)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19729);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19729))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20278 = alloc_clo(lam20106_fptr, 6);

//setting env list
clo20278[1] = acc;
clo20278[2] = proc;
clo20278[3] = lst;
clo20278[4] = foldr;
clo20278[5] = kont19729;
clo20278[6] = cdr;
void* f1973219909 = encode_clo(clo20278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1973219909;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20108 = encode_clo(alloc_clo(lam20108_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20110 = arg_buffer[1];
//reading env and args
void* kont19729 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo20280 = alloc_clo(lam20108_fptr, 7);

//setting env list
clo20280[1] = acc;
clo20280[2] = proc;
clo20280[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo20280[4] = foldr;
clo20280[5] = car;
clo20280[6] = kont19729;
clo20280[7] = cdr;
void* f1973319907 = encode_clo(clo20280);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1973319907;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam20111_fptr() // lam20111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20112 = arg_buffer[1];
//reading env and args
void* a1960619922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1960419918 = (decode_clo(env20112))[3];
//not do dummy comment
void* cons = (decode_clo(env20112))[2];
//not do dummy comment
void* kont19734 = (decode_clo(env20112))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont19734;
arg_buffer[3] = a1960419918;
arg_buffer[4] = a1960619922;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20111 = encode_clo(alloc_clo(lam20111_fptr, 0));

void* lam20113_fptr() // lam20113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20114 = arg_buffer[1];
//reading env and args
void* a1960519920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1960419918 = (decode_clo(env20114))[5];
//not do dummy comment
void* append = (decode_clo(env20114))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20114))[3];
//not do dummy comment
void* cons = (decode_clo(env20114))[2];
//not do dummy comment
void* kont19734 = (decode_clo(env20114))[1];

//creating new closure instance
void** clo20282 = alloc_clo(lam20111_fptr, 3);

//setting env list
clo20282[1] = kont19734;
clo20282[2] = cons;
clo20282[3] = a1960419918;
void* f1973519921 = encode_clo(clo20282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1973519921;
arg_buffer[3] = a1960519920;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20113 = encode_clo(alloc_clo(lam20113_fptr, 0));

void* lam20115_fptr() // lam20115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20116 = arg_buffer[1];
//reading env and args
void* a1960419918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20116))[6];
//not do dummy comment
void* append = (decode_clo(env20116))[5];
//not do dummy comment
void* lst2 = (decode_clo(env20116))[4];
//not do dummy comment
void* lst1 = (decode_clo(env20116))[3];
//not do dummy comment
void* cons = (decode_clo(env20116))[2];
//not do dummy comment
void* kont19734 = (decode_clo(env20116))[1];

//creating new closure instance
void** clo20284 = alloc_clo(lam20113_fptr, 5);

//setting env list
clo20284[1] = kont19734;
clo20284[2] = cons;
clo20284[3] = lst2;
clo20284[4] = append;
clo20284[5] = a1960419918;
void* f1973619919 = encode_clo(clo20284);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1973619919;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20115 = encode_clo(alloc_clo(lam20115_fptr, 0));

void* lam20117_fptr() // lam20117 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20118 = arg_buffer[1];
//reading env and args
void* a1960319916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20118))[7];
//not do dummy comment
void* append = (decode_clo(env20118))[6];
//not do dummy comment
void* lst2 = (decode_clo(env20118))[5];
//not do dummy comment
void* lst1 = (decode_clo(env20118))[4];
//not do dummy comment
void* car = (decode_clo(env20118))[3];
//not do dummy comment
void* cons = (decode_clo(env20118))[2];
//not do dummy comment
void* kont19734 = (decode_clo(env20118))[1];

//if-clause
bool if_guard20285 = is_true(a1960319916);
if(if_guard20285)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19734);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19734))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20287 = alloc_clo(lam20115_fptr, 6);

//setting env list
clo20287[1] = kont19734;
clo20287[2] = cons;
clo20287[3] = lst1;
clo20287[4] = lst2;
clo20287[5] = append;
clo20287[6] = cdr;
void* f1973719917 = encode_clo(clo20287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1973719917;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20117 = encode_clo(alloc_clo(lam20117_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20119 = arg_buffer[1];
//reading env and args
void* kont19734 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20289 = alloc_clo(lam20117_fptr, 7);

//setting env list
clo20289[1] = kont19734;
clo20289[2] = cons;
clo20289[3] = car;
clo20289[4] = lst1;
clo20289[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo20289[6] = append;
clo20289[7] = cdr;
void* f1973819915 = encode_clo(clo20289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1973819915;
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
void* _20120 = arg_buffer[1];
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

void* kont1973919923 = prim_car(lst);
void* lst19924 = prim_cdr(lst);
void* x1960719925 = apply_prim_hash(lst19924);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1973919923);
arg_buffer[2] = x1960719925;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1973919923))[0]);
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
void* _20121 = arg_buffer[1];
//reading env and args
void* kont19741 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1960819926 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19741);
arg_buffer[2] = x1960819926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19741))[0]);
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
void* _20122 = arg_buffer[1];
//reading env and args
void* kont19742 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1960919927 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19742);
arg_buffer[2] = x1960919927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19742))[0]);
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
void* _20123 = arg_buffer[1];
//reading env and args
void* kont19743 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1961019928 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19743);
arg_buffer[2] = x1961019928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19743))[0]);
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
void* _20124 = arg_buffer[1];
//reading env and args
void* kont19744 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1961119929 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19744);
arg_buffer[2] = x1961119929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19744))[0]);
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
void* _20125 = arg_buffer[1];
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

void* kont1974519930 = prim_car(lst);
void* lst19931 = prim_cdr(lst);
void* x1961219932 = apply_prim_set(lst19931);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1974519930);
arg_buffer[2] = x1961219932;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1974519930))[0]);
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
void* _20126 = arg_buffer[1];
//reading env and args
void* kont19747 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1961319933 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19747);
arg_buffer[2] = x1961319933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19747))[0]);
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
void* _20127 = arg_buffer[1];
//reading env and args
void* kont19748 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1961419934 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19748);
arg_buffer[2] = x1961419934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19748))[0]);
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
void* _20128 = arg_buffer[1];
//reading env and args
void* kont19749 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1961519935 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19749);
arg_buffer[2] = x1961519935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19749))[0]);
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
void* _20129 = arg_buffer[1];
//reading env and args
void* kont19750 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1961619936 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19750);
arg_buffer[2] = x1961619936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19750))[0]);
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
void* _20130 = arg_buffer[1];
//reading env and args
void* kont19751 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1961719937 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19751);
arg_buffer[2] = x1961719937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19751))[0]);
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
void* _20131 = arg_buffer[1];
//reading env and args
void* kont19752 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1961819938 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19752);
arg_buffer[2] = x1961819938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19752))[0]);
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
void* _20132 = arg_buffer[1];
//reading env and args
void* kont19753 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x1961919939 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19753);
arg_buffer[2] = x1961919939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19753))[0]);
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
void* _20133 = arg_buffer[1];
//reading env and args
void* kont19754 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x1962019940 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19754);
arg_buffer[2] = x1962019940;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19754))[0]);
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
void* _20134 = arg_buffer[1];
//reading env and args
void* kont19755 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x1962119941 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19755);
arg_buffer[2] = x1962119941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19755))[0]);
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
void* _20135 = arg_buffer[1];
//reading env and args
void* kont19756 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1962219942 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19756);
arg_buffer[2] = x1962219942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19756))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam20136_fptr() // lam20136 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20137 = arg_buffer[1];
//reading env and args
void* a1963019958 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1962519948 = (decode_clo(env20137))[3];
//not do dummy comment
void* kont19757 = (decode_clo(env20137))[2];
//not do dummy comment
void* cons = (decode_clo(env20137))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont19757;
arg_buffer[3] = a1962519948;
arg_buffer[4] = a1963019958;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20136 = encode_clo(alloc_clo(lam20136_fptr, 0));

void* lam20138_fptr() // lam20138 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20139 = arg_buffer[1];
//reading env and args
void* a1962919956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1962519948 = (decode_clo(env20139))[4];
//not do dummy comment
void* kont19757 = (decode_clo(env20139))[3];
//not do dummy comment
void* a1962619950 = (decode_clo(env20139))[2];
//not do dummy comment
void* cons = (decode_clo(env20139))[1];

//creating new closure instance
void** clo20291 = alloc_clo(lam20136_fptr, 3);

//setting env list
clo20291[1] = cons;
clo20291[2] = kont19757;
clo20291[3] = a1962519948;
void* f1975819957 = encode_clo(clo20291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1975819957;
arg_buffer[3] = a1962619950;
arg_buffer[4] = a1962919956;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20138 = encode_clo(alloc_clo(lam20138_fptr, 0));

void* lam20140_fptr() // lam20140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20141 = arg_buffer[1];
//reading env and args
void* a1962819954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1962519948 = (decode_clo(env20141))[6];
//not do dummy comment
void* kont19757 = (decode_clo(env20141))[5];
//not do dummy comment
void* a1962619950 = (decode_clo(env20141))[4];
//not do dummy comment
void* a1962719952 = (decode_clo(env20141))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env20141))[2];
//not do dummy comment
void* cons = (decode_clo(env20141))[1];

//creating new closure instance
void** clo20293 = alloc_clo(lam20138_fptr, 4);

//setting env list
clo20293[1] = cons;
clo20293[2] = a1962619950;
clo20293[3] = kont19757;
clo20293[4] = a1962519948;
void* f1975919955 = encode_clo(clo20293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(interleave_u45direct);
arg_buffer[2] = f1975919955;
arg_buffer[3] = a1962719952;
arg_buffer[4] = a1962819954;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(interleave_u45direct))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20140 = encode_clo(alloc_clo(lam20140_fptr, 0));

void* lam20142_fptr() // lam20142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20143 = arg_buffer[1];
//reading env and args
void* a1962719952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20143))[7];
//not do dummy comment
void* a1962519948 = (decode_clo(env20143))[6];
//not do dummy comment
void* kont19757 = (decode_clo(env20143))[5];
//not do dummy comment
void* a1962619950 = (decode_clo(env20143))[4];
//not do dummy comment
void* cons = (decode_clo(env20143))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env20143))[2];
//not do dummy comment
void* lst2 = (decode_clo(env20143))[1];

//creating new closure instance
void** clo20295 = alloc_clo(lam20140_fptr, 6);

//setting env list
clo20295[1] = cons;
clo20295[2] = interleave_u45direct;
clo20295[3] = a1962719952;
clo20295[4] = a1962619950;
clo20295[5] = kont19757;
clo20295[6] = a1962519948;
void* f1976019953 = encode_clo(clo20295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1976019953;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20142 = encode_clo(alloc_clo(lam20142_fptr, 0));

void* lam20144_fptr() // lam20144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20145 = arg_buffer[1];
//reading env and args
void* a1962619950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20145))[7];
//not do dummy comment
void* a1962519948 = (decode_clo(env20145))[6];
//not do dummy comment
void* kont19757 = (decode_clo(env20145))[5];
//not do dummy comment
void* lst1 = (decode_clo(env20145))[4];
//not do dummy comment
void* cons = (decode_clo(env20145))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env20145))[2];
//not do dummy comment
void* lst2 = (decode_clo(env20145))[1];

//creating new closure instance
void** clo20297 = alloc_clo(lam20142_fptr, 7);

//setting env list
clo20297[1] = lst2;
clo20297[2] = interleave_u45direct;
clo20297[3] = cons;
clo20297[4] = a1962619950;
clo20297[5] = kont19757;
clo20297[6] = a1962519948;
clo20297[7] = cdr;
void* f1976119951 = encode_clo(clo20297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1976119951;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20144 = encode_clo(alloc_clo(lam20144_fptr, 0));

void* lam20146_fptr() // lam20146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20147 = arg_buffer[1];
//reading env and args
void* a1962519948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20147))[7];
//not do dummy comment
void* kont19757 = (decode_clo(env20147))[6];
//not do dummy comment
void* cons = (decode_clo(env20147))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env20147))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20147))[3];
//not do dummy comment
void* lst1 = (decode_clo(env20147))[2];
//not do dummy comment
void* car = (decode_clo(env20147))[1];

//creating new closure instance
void** clo20299 = alloc_clo(lam20144_fptr, 7);

//setting env list
clo20299[1] = lst2;
clo20299[2] = interleave_u45direct;
clo20299[3] = cons;
clo20299[4] = lst1;
clo20299[5] = kont19757;
clo20299[6] = a1962519948;
clo20299[7] = cdr;
void* f1976219949 = encode_clo(clo20299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1976219949;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20146 = encode_clo(alloc_clo(lam20146_fptr, 0));

void* lam20148_fptr() // lam20148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20149 = arg_buffer[1];
//reading env and args
void* a1962419946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20149))[7];
//not do dummy comment
void* kont19757 = (decode_clo(env20149))[6];
//not do dummy comment
void* cons = (decode_clo(env20149))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env20149))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20149))[3];
//not do dummy comment
void* lst1 = (decode_clo(env20149))[2];
//not do dummy comment
void* car = (decode_clo(env20149))[1];

//if-clause
bool if_guard20300 = is_true(a1962419946);
if(if_guard20300)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19757);
arg_buffer[2] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19757))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20302 = alloc_clo(lam20146_fptr, 7);

//setting env list
clo20302[1] = car;
clo20302[2] = lst1;
clo20302[3] = lst2;
clo20302[4] = interleave_u45direct;
clo20302[5] = cons;
clo20302[6] = kont19757;
clo20302[7] = cdr;
void* f1976319947 = encode_clo(clo20302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1976319947;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20148 = encode_clo(alloc_clo(lam20148_fptr, 0));

void* lam20150_fptr() // lam20150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20151 = arg_buffer[1];
//reading env and args
void* a1962319944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20151))[8];
//not do dummy comment
void* cons = (decode_clo(env20151))[7];
//not do dummy comment
void* kont19757 = (decode_clo(env20151))[6];
//not do dummy comment
void* null_u63 = (decode_clo(env20151))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env20151))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20151))[3];
//not do dummy comment
void* lst1 = (decode_clo(env20151))[2];
//not do dummy comment
void* car = (decode_clo(env20151))[1];

//if-clause
bool if_guard20303 = is_true(a1962319944);
if(if_guard20303)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont19757);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont19757))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20305 = alloc_clo(lam20148_fptr, 7);

//setting env list
clo20305[1] = car;
clo20305[2] = lst1;
clo20305[3] = lst2;
clo20305[4] = interleave_u45direct;
clo20305[5] = cons;
clo20305[6] = kont19757;
clo20305[7] = cdr;
void* f1976419945 = encode_clo(clo20305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1976419945;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20150 = encode_clo(alloc_clo(lam20150_fptr, 0));

void* interleave_u45direct_fptr() // interleave-direct 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20152 = arg_buffer[1];
//reading env and args
void* kont19757 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20307 = alloc_clo(lam20150_fptr, 8);

//setting env list
clo20307[1] = car;
clo20307[2] = lst1;
clo20307[3] = lst2;
void* interleave_u45direct = encode_clo(alloc_clo(interleave_u45direct_fptr, 0));

clo20307[4] = interleave_u45direct;
clo20307[5] = null_u63;
clo20307[6] = kont19757;
clo20307[7] = cons;
clo20307[8] = cdr;
void* f1976519943 = encode_clo(clo20307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1976519943;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* interleave_u45direct = encode_clo(alloc_clo(interleave_u45direct_fptr, 0));

void* lam20153_fptr() // lam20153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20154 = arg_buffer[1];
//reading env and args
void* a1964219972 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1963719966 = (decode_clo(env20154))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env20154))[2];
//not do dummy comment
void* kont19766 = (decode_clo(env20154))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(interleave_u45direct);
arg_buffer[2] = kont19766;
arg_buffer[3] = a1963719966;
arg_buffer[4] = a1964219972;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(interleave_u45direct))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20153 = encode_clo(alloc_clo(lam20153_fptr, 0));

void* lam20159_fptr() // lam20159 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20160 = arg_buffer[1];
//reading env and args
void* a1963719966 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env20160))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env20160))[2];
//not do dummy comment
void* kont19766 = (decode_clo(env20160))[1];
mpz_t* mpzvar20308 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20308, "7", 10);
void* a1963819967 = encode_mpz(mpzvar20308);
mpz_t* mpzvar20309 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20309, "8", 10);
void* a1963919968 = encode_mpz(mpzvar20309);
mpz_t* mpzvar20310 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20310, "9", 10);
void* a1964019969 = encode_mpz(mpzvar20310);
mpz_t* mpzvar20311 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20311, "10", 10);
void* a1964119970 = encode_mpz(mpzvar20311);

//creating new closure instance
void** clo20313 = alloc_clo(lam20153_fptr, 3);

//setting env list
clo20313[1] = kont19766;
clo20313[2] = interleave_u45direct;
clo20313[3] = a1963719966;
void* f1976719971 = encode_clo(clo20313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1976719971;
arg_buffer[3] = a1963819967;
arg_buffer[4] = a1963919968;
arg_buffer[5] = a1964019969;
arg_buffer[6] = a1964119970;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20159 = encode_clo(alloc_clo(lam20159_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20167 = arg_buffer[1];
//reading env and args
void* kont19766 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar20314 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20314, "1", 10);
void* a1963119959 = encode_mpz(mpzvar20314);
mpz_t* mpzvar20315 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20315, "2", 10);
void* a1963219960 = encode_mpz(mpzvar20315);
mpz_t* mpzvar20316 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20316, "3", 10);
void* a1963319961 = encode_mpz(mpzvar20316);
mpz_t* mpzvar20317 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20317, "4", 10);
void* a1963419962 = encode_mpz(mpzvar20317);
mpz_t* mpzvar20318 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20318, "5", 10);
void* a1963519963 = encode_mpz(mpzvar20318);
mpz_t* mpzvar20319 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20319, "6", 10);
void* a1963619964 = encode_mpz(mpzvar20319);

//creating new closure instance
void** clo20321 = alloc_clo(lam20159_fptr, 3);

//setting env list
clo20321[1] = kont19766;
clo20321[2] = interleave_u45direct;
clo20321[3] = list;
void* f1976819965 = encode_clo(clo20321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1976819965;
arg_buffer[3] = a1963119959;
arg_buffer[4] = a1963219960;
arg_buffer[5] = a1963319961;
arg_buffer[6] = a1963419962;
arg_buffer[7] = a1963519963;
arg_buffer[8] = a1963619964;
arg_buffer[0] = reinterpret_cast<void*>(8);
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

