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
void* _78912 = arg_buffer[1];
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

void* kont7864578746 = prim_car(lst);
void* lst78747 = prim_cdr(lst);
void* x7855378748 = apply_prim__u43(lst78747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7864578746);
arg_buffer[2] = x7855378748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7864578746))[0]);
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
void* _78913 = arg_buffer[1];
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

void* kont7864778749 = prim_car(lst);
void* lst78750 = prim_cdr(lst);
void* x7855478751 = apply_prim__u45(lst78750);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7864778749);
arg_buffer[2] = x7855478751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7864778749))[0]);
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
void* _78914 = arg_buffer[1];
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

void* kont7864978752 = prim_car(lst);
void* lst78753 = prim_cdr(lst);
void* x7855578754 = apply_prim__u42(lst78753);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7864978752);
arg_buffer[2] = x7855578754;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7864978752))[0]);
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
void* _78915 = arg_buffer[1];
//reading env and args
void* kont78651 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7855678755 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78651);
arg_buffer[2] = x7855678755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78651))[0]);
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
void* _78916 = arg_buffer[1];
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

void* kont7865278756 = prim_car(lst);
void* lst78757 = prim_cdr(lst);
void* x7855778758 = apply_prim__u47(lst78757);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7865278756);
arg_buffer[2] = x7855778758;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7865278756))[0]);
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
void* _78917 = arg_buffer[1];
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

void* kont7865478759 = prim_car(lst);
void* lst78760 = prim_cdr(lst);
void* x7855878761 = apply_prim__u61(lst78760);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7865478759);
arg_buffer[2] = x7855878761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7865478759))[0]);
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
void* _78918 = arg_buffer[1];
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

void* kont7865678762 = prim_car(lst);
void* lst78763 = prim_cdr(lst);
void* x7855978764 = apply_prim__u62(lst78763);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7865678762);
arg_buffer[2] = x7855978764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7865678762))[0]);
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
void* _78919 = arg_buffer[1];
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

void* kont7865878765 = prim_car(lst);
void* lst78766 = prim_cdr(lst);
void* x7856078767 = apply_prim__u60(lst78766);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7865878765);
arg_buffer[2] = x7856078767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7865878765))[0]);
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
void* _78920 = arg_buffer[1];
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

void* kont7866078768 = prim_car(lst);
void* lst78769 = prim_cdr(lst);
void* x7856178770 = apply_prim__u60_u61(lst78769);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7866078768);
arg_buffer[2] = x7856178770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7866078768))[0]);
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
void* _78921 = arg_buffer[1];
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

void* kont7866278771 = prim_car(lst);
void* lst78772 = prim_cdr(lst);
void* x7856278773 = apply_prim__u62_u61(lst78772);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7866278771);
arg_buffer[2] = x7856278773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7866278771))[0]);
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
void* _78922 = arg_buffer[1];
//reading env and args
void* kont78664 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x7856378774 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78664);
arg_buffer[2] = x7856378774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78664))[0]);
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
void* _78923 = arg_buffer[1];
//reading env and args
void* kont78665 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7856478775 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78665);
arg_buffer[2] = x7856478775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78665))[0]);
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
void* _78924 = arg_buffer[1];
//reading env and args
void* kont78666 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7856578776 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78666);
arg_buffer[2] = x7856578776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78666))[0]);
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
void* _78925 = arg_buffer[1];
//reading env and args
void* kont78667 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7856678777 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78667);
arg_buffer[2] = x7856678777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78667))[0]);
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
void* _78926 = arg_buffer[1];
//reading env and args
void* kont78668 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7856778778 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78668);
arg_buffer[2] = x7856778778;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78668))[0]);
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
void* _78927 = arg_buffer[1];
//reading env and args
void* kont78669 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7856878779 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78669);
arg_buffer[2] = x7856878779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78669))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam78928_fptr() // lam78928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78929 = arg_buffer[1];
//reading env and args
void* a7857178783 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7856978780 = (decode_clo(env78929))[3];
//not do dummy comment
void* kont78670 = (decode_clo(env78929))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env78929))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont78670;
arg_buffer[3] = a7856978780;
arg_buffer[4] = a7857178783;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78928 = encode_clo(alloc_clo(lam78928_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _78932 = arg_buffer[1];
//reading env and args
void* kont78670 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar80137 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80137, "0", 10);
void* a7856978780 = encode_mpz(mpzvar80137);
mpz_t* mpzvar80138 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80138, "2", 10);
void* a7857078781 = encode_mpz(mpzvar80138);

//creating new closure instance
void** clo80140 = alloc_clo(lam78928_fptr, 3);

//setting env list
clo80140[1] = equal_u63;
clo80140[2] = kont78670;
clo80140[3] = a7856978780;
void* f7867178782 = encode_clo(clo80140);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7867178782;
arg_buffer[3] = x;
arg_buffer[4] = a7857078781;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam78933_fptr() // lam78933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78934 = arg_buffer[1];
//reading env and args
void* a7857478787 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78672 = (decode_clo(env78934))[3];
//not do dummy comment
void* a7857278784 = (decode_clo(env78934))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env78934))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont78672;
arg_buffer[3] = a7857278784;
arg_buffer[4] = a7857478787;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78933 = encode_clo(alloc_clo(lam78933_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _78937 = arg_buffer[1];
//reading env and args
void* kont78672 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar80141 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80141, "1", 10);
void* a7857278784 = encode_mpz(mpzvar80141);
mpz_t* mpzvar80142 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80142, "2", 10);
void* a7857378785 = encode_mpz(mpzvar80142);

//creating new closure instance
void** clo80144 = alloc_clo(lam78933_fptr, 3);

//setting env list
clo80144[1] = equal_u63;
clo80144[2] = a7857278784;
clo80144[3] = kont78672;
void* f7867378786 = encode_clo(clo80144);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7867378786;
arg_buffer[3] = x;
arg_buffer[4] = a7857378785;
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
void* _78938 = arg_buffer[1];
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

void* kont7867478788 = prim_car(x);
void* x78789 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7867478788);
arg_buffer[2] = x78789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7867478788))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam78941_fptr() // lam78941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78942 = arg_buffer[1];
//reading env and args
void* a7858078799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env78942))[3];
//not do dummy comment
void* kont78676 = (decode_clo(env78942))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env78942))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont78676;
arg_buffer[3] = x;
arg_buffer[4] = a7858078799;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78941 = encode_clo(alloc_clo(lam78941_fptr, 0));

void* lam78943_fptr() // lam78943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78944 = arg_buffer[1];
//reading env and args
void* a7857878796 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env78944))[5];
//not do dummy comment
void* lst = (decode_clo(env78944))[4];
//not do dummy comment
void* x = (decode_clo(env78944))[3];
//not do dummy comment
void* kont78676 = (decode_clo(env78944))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env78944))[1];

//if-clause
bool if_guard80145 = is_true(a7857878796);
if(if_guard80145)
{
void* x7857978797 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78676);
arg_buffer[2] = x7857978797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78676))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo80147 = alloc_clo(lam78941_fptr, 3);

//setting env list
clo80147[1] = member_u63;
clo80147[2] = kont78676;
clo80147[3] = x;
void* f7867778798 = encode_clo(clo80147);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7867778798;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam78943 = encode_clo(alloc_clo(lam78943_fptr, 0));

void* lam78945_fptr() // lam78945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78946 = arg_buffer[1];
//reading env and args
void* a7857778794 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env78946))[6];
//not do dummy comment
void* lst = (decode_clo(env78946))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env78946))[4];
//not do dummy comment
void* x = (decode_clo(env78946))[3];
//not do dummy comment
void* kont78676 = (decode_clo(env78946))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env78946))[1];

//creating new closure instance
void** clo80149 = alloc_clo(lam78943_fptr, 5);

//setting env list
clo80149[1] = member_u63;
clo80149[2] = kont78676;
clo80149[3] = x;
clo80149[4] = lst;
clo80149[5] = cdr;
void* f7867878795 = encode_clo(clo80149);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f7867878795;
arg_buffer[3] = a7857778794;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78945 = encode_clo(alloc_clo(lam78945_fptr, 0));

void* lam78947_fptr() // lam78947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78948 = arg_buffer[1];
//reading env and args
void* a7857578791 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env78948))[7];
//not do dummy comment
void* lst = (decode_clo(env78948))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env78948))[5];
//not do dummy comment
void* x = (decode_clo(env78948))[4];
//not do dummy comment
void* kont78676 = (decode_clo(env78948))[3];
//not do dummy comment
void* car = (decode_clo(env78948))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env78948))[1];

//if-clause
bool if_guard80150 = is_true(a7857578791);
if(if_guard80150)
{
void* x7857678792 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78676);
arg_buffer[2] = x7857678792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78676))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo80152 = alloc_clo(lam78945_fptr, 6);

//setting env list
clo80152[1] = member_u63;
clo80152[2] = kont78676;
clo80152[3] = x;
clo80152[4] = equal_u63;
clo80152[5] = lst;
clo80152[6] = cdr;
void* f7867978793 = encode_clo(clo80152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7867978793;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam78947 = encode_clo(alloc_clo(lam78947_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _78949 = arg_buffer[1];
//reading env and args
void* kont78676 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo80154 = alloc_clo(lam78947_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo80154[1] = member_u63;
clo80154[2] = car;
clo80154[3] = kont78676;
clo80154[4] = x;
clo80154[5] = equal_u63;
clo80154[6] = lst;
clo80154[7] = cdr;
void* f7868078790 = encode_clo(clo80154);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7868078790;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam78950_fptr() // lam78950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78951 = arg_buffer[1];
//reading env and args
void* a7858478807 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78681 = (decode_clo(env78951))[4];
//not do dummy comment
void* fun = (decode_clo(env78951))[3];
//not do dummy comment
void* a7858378805 = (decode_clo(env78951))[2];
//not do dummy comment
void* foldl = (decode_clo(env78951))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont78681;
arg_buffer[3] = fun;
arg_buffer[4] = a7858378805;
arg_buffer[5] = a7858478807;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78950 = encode_clo(alloc_clo(lam78950_fptr, 0));

void* lam78952_fptr() // lam78952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78953 = arg_buffer[1];
//reading env and args
void* a7858378805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env78953))[5];
//not do dummy comment
void* kont78681 = (decode_clo(env78953))[4];
//not do dummy comment
void* lst = (decode_clo(env78953))[3];
//not do dummy comment
void* fun = (decode_clo(env78953))[2];
//not do dummy comment
void* foldl = (decode_clo(env78953))[1];

//creating new closure instance
void** clo80156 = alloc_clo(lam78950_fptr, 4);

//setting env list
clo80156[1] = foldl;
clo80156[2] = a7858378805;
clo80156[3] = fun;
clo80156[4] = kont78681;
void* f7868278806 = encode_clo(clo80156);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7868278806;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78952 = encode_clo(alloc_clo(lam78952_fptr, 0));

void* lam78954_fptr() // lam78954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78955 = arg_buffer[1];
//reading env and args
void* a7858278803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env78955))[6];
//not do dummy comment
void* kont78681 = (decode_clo(env78955))[5];
//not do dummy comment
void* lst = (decode_clo(env78955))[4];
//not do dummy comment
void* fun = (decode_clo(env78955))[3];
//not do dummy comment
void* acc = (decode_clo(env78955))[2];
//not do dummy comment
void* foldl = (decode_clo(env78955))[1];

//creating new closure instance
void** clo80158 = alloc_clo(lam78952_fptr, 5);

//setting env list
clo80158[1] = foldl;
clo80158[2] = fun;
clo80158[3] = lst;
clo80158[4] = kont78681;
clo80158[5] = cdr;
void* f7868378804 = encode_clo(clo80158);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f7868378804;
arg_buffer[3] = a7858278803;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78954 = encode_clo(alloc_clo(lam78954_fptr, 0));

void* lam78956_fptr() // lam78956 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78957 = arg_buffer[1];
//reading env and args
void* a7858178801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env78957))[7];
//not do dummy comment
void* kont78681 = (decode_clo(env78957))[6];
//not do dummy comment
void* lst = (decode_clo(env78957))[5];
//not do dummy comment
void* fun = (decode_clo(env78957))[4];
//not do dummy comment
void* acc = (decode_clo(env78957))[3];
//not do dummy comment
void* car = (decode_clo(env78957))[2];
//not do dummy comment
void* foldl = (decode_clo(env78957))[1];

//if-clause
bool if_guard80159 = is_true(a7858178801);
if(if_guard80159)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78681);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78681))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo80161 = alloc_clo(lam78954_fptr, 6);

//setting env list
clo80161[1] = foldl;
clo80161[2] = acc;
clo80161[3] = fun;
clo80161[4] = lst;
clo80161[5] = kont78681;
clo80161[6] = cdr;
void* f7868478802 = encode_clo(clo80161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7868478802;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam78956 = encode_clo(alloc_clo(lam78956_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _78958 = arg_buffer[1];
//reading env and args
void* kont78681 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo80163 = alloc_clo(lam78956_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo80163[1] = foldl;
clo80163[2] = car;
clo80163[3] = acc;
clo80163[4] = fun;
clo80163[5] = lst;
clo80163[6] = kont78681;
clo80163[7] = cdr;
void* f7868578800 = encode_clo(clo80163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7868578800;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam78959_fptr() // lam78959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78960 = arg_buffer[1];
//reading env and args
void* a7858878815 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7858678811 = (decode_clo(env78960))[3];
//not do dummy comment
void* kont78686 = (decode_clo(env78960))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env78960))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont78686;
arg_buffer[3] = a7858678811;
arg_buffer[4] = a7858878815;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78959 = encode_clo(alloc_clo(lam78959_fptr, 0));

void* lam78961_fptr() // lam78961 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78962 = arg_buffer[1];
//reading env and args
void* a7858778813 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7858678811 = (decode_clo(env78962))[5];
//not do dummy comment
void* kont78686 = (decode_clo(env78962))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env78962))[3];
//not do dummy comment
void* lst2 = (decode_clo(env78962))[2];
//not do dummy comment
void* cons = (decode_clo(env78962))[1];

//creating new closure instance
void** clo80165 = alloc_clo(lam78959_fptr, 3);

//setting env list
clo80165[1] = reverse_u45helper;
clo80165[2] = kont78686;
clo80165[3] = a7858678811;
void* f7868778814 = encode_clo(clo80165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7868778814;
arg_buffer[3] = a7858778813;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78961 = encode_clo(alloc_clo(lam78961_fptr, 0));

void* lam78963_fptr() // lam78963 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78964 = arg_buffer[1];
//reading env and args
void* a7858678811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env78964))[6];
//not do dummy comment
void* kont78686 = (decode_clo(env78964))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env78964))[4];
//not do dummy comment
void* lst2 = (decode_clo(env78964))[3];
//not do dummy comment
void* car = (decode_clo(env78964))[2];
//not do dummy comment
void* cons = (decode_clo(env78964))[1];

//creating new closure instance
void** clo80167 = alloc_clo(lam78961_fptr, 5);

//setting env list
clo80167[1] = cons;
clo80167[2] = lst2;
clo80167[3] = reverse_u45helper;
clo80167[4] = kont78686;
clo80167[5] = a7858678811;
void* f7868878812 = encode_clo(clo80167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7868878812;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78963 = encode_clo(alloc_clo(lam78963_fptr, 0));

void* lam78965_fptr() // lam78965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78966 = arg_buffer[1];
//reading env and args
void* a7858578809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env78966))[7];
//not do dummy comment
void* lst = (decode_clo(env78966))[6];
//not do dummy comment
void* kont78686 = (decode_clo(env78966))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env78966))[4];
//not do dummy comment
void* lst2 = (decode_clo(env78966))[3];
//not do dummy comment
void* car = (decode_clo(env78966))[2];
//not do dummy comment
void* cons = (decode_clo(env78966))[1];

//if-clause
bool if_guard80168 = is_true(a7858578809);
if(if_guard80168)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78686);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78686))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo80170 = alloc_clo(lam78963_fptr, 6);

//setting env list
clo80170[1] = cons;
clo80170[2] = car;
clo80170[3] = lst2;
clo80170[4] = reverse_u45helper;
clo80170[5] = kont78686;
clo80170[6] = lst;
void* f7868978810 = encode_clo(clo80170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7868978810;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam78965 = encode_clo(alloc_clo(lam78965_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _78967 = arg_buffer[1];
//reading env and args
void* kont78686 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo80172 = alloc_clo(lam78965_fptr, 7);

//setting env list
clo80172[1] = cons;
clo80172[2] = car;
clo80172[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo80172[4] = reverse_u45helper;
clo80172[5] = kont78686;
clo80172[6] = lst;
clo80172[7] = cdr;
void* f7869078808 = encode_clo(clo80172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7869078808;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam78968_fptr() // lam78968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78969 = arg_buffer[1];
//reading env and args
void* a7858978817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env78969))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env78969))[2];
//not do dummy comment
void* kont78691 = (decode_clo(env78969))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont78691;
arg_buffer[3] = lst;
arg_buffer[4] = a7858978817;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78968 = encode_clo(alloc_clo(lam78968_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _78970 = arg_buffer[1];
//reading env and args
void* kont78691 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo80174 = alloc_clo(lam78968_fptr, 3);

//setting env list
clo80174[1] = kont78691;
clo80174[2] = reverse_u45helper;
clo80174[3] = lst;
void* f7869278816 = encode_clo(clo80174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7869278816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam78971_fptr() // lam78971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78972 = arg_buffer[1];
//reading env and args
void* x7859278822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78693 = (decode_clo(env78972))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78693);
arg_buffer[2] = x7859278822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78693))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78971 = encode_clo(alloc_clo(lam78971_fptr, 0));

void* lam78973_fptr() // lam78973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78974 = arg_buffer[1];
//reading env and args
void* a7859778831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7859378824 = (decode_clo(env78974))[4];
//not do dummy comment
void* a7859578827 = (decode_clo(env78974))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env78974))[2];
//not do dummy comment
void* kont78693 = (decode_clo(env78974))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont78693;
arg_buffer[3] = a7859378824;
arg_buffer[4] = a7859578827;
arg_buffer[5] = a7859778831;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78973 = encode_clo(alloc_clo(lam78973_fptr, 0));

void* lam78975_fptr() // lam78975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78976 = arg_buffer[1];
//reading env and args
void* a7859678829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7859378824 = (decode_clo(env78976))[6];
//not do dummy comment
void* a7859578827 = (decode_clo(env78976))[5];
//not do dummy comment
void* kont78693 = (decode_clo(env78976))[4];
//not do dummy comment
void* cons = (decode_clo(env78976))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env78976))[2];
//not do dummy comment
void* lst2 = (decode_clo(env78976))[1];

//creating new closure instance
void** clo80176 = alloc_clo(lam78973_fptr, 4);

//setting env list
clo80176[1] = kont78693;
clo80176[2] = take_u45helper;
clo80176[3] = a7859578827;
clo80176[4] = a7859378824;
void* f7869578830 = encode_clo(clo80176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7869578830;
arg_buffer[3] = a7859678829;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78975 = encode_clo(alloc_clo(lam78975_fptr, 0));

void* lam78977_fptr() // lam78977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78978 = arg_buffer[1];
//reading env and args
void* a7859578827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7859378824 = (decode_clo(env78978))[7];
//not do dummy comment
void* lst = (decode_clo(env78978))[6];
//not do dummy comment
void* cons = (decode_clo(env78978))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env78978))[4];
//not do dummy comment
void* lst2 = (decode_clo(env78978))[3];
//not do dummy comment
void* kont78693 = (decode_clo(env78978))[2];
//not do dummy comment
void* car = (decode_clo(env78978))[1];

//creating new closure instance
void** clo80178 = alloc_clo(lam78975_fptr, 6);

//setting env list
clo80178[1] = lst2;
clo80178[2] = take_u45helper;
clo80178[3] = cons;
clo80178[4] = kont78693;
clo80178[5] = a7859578827;
clo80178[6] = a7859378824;
void* f7869678828 = encode_clo(clo80178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7869678828;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78977 = encode_clo(alloc_clo(lam78977_fptr, 0));

void* lam78980_fptr() // lam78980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78981 = arg_buffer[1];
//reading env and args
void* a7859378824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env78981))[8];
//not do dummy comment
void* cons = (decode_clo(env78981))[7];
//not do dummy comment
void* _u45 = (decode_clo(env78981))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env78981))[5];
//not do dummy comment
void* lst2 = (decode_clo(env78981))[4];
//not do dummy comment
void* kont78693 = (decode_clo(env78981))[3];
//not do dummy comment
void* n = (decode_clo(env78981))[2];
//not do dummy comment
void* car = (decode_clo(env78981))[1];
mpz_t* mpzvar80179 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80179, "1", 10);
void* a7859478825 = encode_mpz(mpzvar80179);

//creating new closure instance
void** clo80181 = alloc_clo(lam78977_fptr, 7);

//setting env list
clo80181[1] = car;
clo80181[2] = kont78693;
clo80181[3] = lst2;
clo80181[4] = take_u45helper;
clo80181[5] = cons;
clo80181[6] = lst;
clo80181[7] = a7859378824;
void* f7869778826 = encode_clo(clo80181);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7869778826;
arg_buffer[3] = n;
arg_buffer[4] = a7859478825;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78980 = encode_clo(alloc_clo(lam78980_fptr, 0));

void* lam78982_fptr() // lam78982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78983 = arg_buffer[1];
//reading env and args
void* a7859178820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env78983))[10];
//not do dummy comment
void* lst = (decode_clo(env78983))[9];
//not do dummy comment
void* reverse = (decode_clo(env78983))[8];
//not do dummy comment
void* cons = (decode_clo(env78983))[7];
//not do dummy comment
void* _u45 = (decode_clo(env78983))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env78983))[5];
//not do dummy comment
void* lst2 = (decode_clo(env78983))[4];
//not do dummy comment
void* kont78693 = (decode_clo(env78983))[3];
//not do dummy comment
void* n = (decode_clo(env78983))[2];
//not do dummy comment
void* car = (decode_clo(env78983))[1];

//if-clause
bool if_guard80182 = is_true(a7859178820);
if(if_guard80182)
{

//creating new closure instance
void** clo80184 = alloc_clo(lam78971_fptr, 1);

//setting env list
clo80184[1] = kont78693;
void* f7869478821 = encode_clo(clo80184);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f7869478821;
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
void** clo80186 = alloc_clo(lam78980_fptr, 8);

//setting env list
clo80186[1] = car;
clo80186[2] = n;
clo80186[3] = kont78693;
clo80186[4] = lst2;
clo80186[5] = take_u45helper;
clo80186[6] = _u45;
clo80186[7] = cons;
clo80186[8] = lst;
void* f7869878823 = encode_clo(clo80186);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7869878823;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam78982 = encode_clo(alloc_clo(lam78982_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _78985 = arg_buffer[1];
//reading env and args
void* kont78693 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar80187 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80187, "0", 10);
void* a7859078818 = encode_mpz(mpzvar80187);

//creating new closure instance
void** clo80189 = alloc_clo(lam78982_fptr, 10);

//setting env list
clo80189[1] = car;
clo80189[2] = n;
clo80189[3] = kont78693;
clo80189[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo80189[5] = take_u45helper;
clo80189[6] = _u45;
clo80189[7] = cons;
clo80189[8] = reverse;
clo80189[9] = lst;
clo80189[10] = cdr;
void* f7869978819 = encode_clo(clo80189);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7869978819;
arg_buffer[3] = n;
arg_buffer[4] = a7859078818;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam78986_fptr() // lam78986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78987 = arg_buffer[1];
//reading env and args
void* a7859878833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env78987))[4];
//not do dummy comment
void* n = (decode_clo(env78987))[3];
//not do dummy comment
void* lst = (decode_clo(env78987))[2];
//not do dummy comment
void* kont78700 = (decode_clo(env78987))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont78700;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a7859878833;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78986 = encode_clo(alloc_clo(lam78986_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _78988 = arg_buffer[1];
//reading env and args
void* kont78700 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo80191 = alloc_clo(lam78986_fptr, 4);

//setting env list
clo80191[1] = kont78700;
clo80191[2] = lst;
clo80191[3] = n;
clo80191[4] = take_u45helper;
void* f7870178832 = encode_clo(clo80191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7870178832;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam78990_fptr() // lam78990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78991 = arg_buffer[1];
//reading env and args
void* a7860378841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78702 = (decode_clo(env78991))[3];
//not do dummy comment
void* _u43 = (decode_clo(env78991))[2];
//not do dummy comment
void* a7860178837 = (decode_clo(env78991))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont78702;
arg_buffer[3] = a7860178837;
arg_buffer[4] = a7860378841;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78990 = encode_clo(alloc_clo(lam78990_fptr, 0));

void* lam78992_fptr() // lam78992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78993 = arg_buffer[1];
//reading env and args
void* a7860278839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env78993))[4];
//not do dummy comment
void* kont78702 = (decode_clo(env78993))[3];
//not do dummy comment
void* _u43 = (decode_clo(env78993))[2];
//not do dummy comment
void* a7860178837 = (decode_clo(env78993))[1];

//creating new closure instance
void** clo80193 = alloc_clo(lam78990_fptr, 3);

//setting env list
clo80193[1] = a7860178837;
clo80193[2] = _u43;
clo80193[3] = kont78702;
void* f7870378840 = encode_clo(clo80193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f7870378840;
arg_buffer[3] = a7860278839;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78992 = encode_clo(alloc_clo(lam78992_fptr, 0));

void* lam78995_fptr() // lam78995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78996 = arg_buffer[1];
//reading env and args
void* a7859978835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env78996))[5];
//not do dummy comment
void* lst = (decode_clo(env78996))[4];
//not do dummy comment
void* length = (decode_clo(env78996))[3];
//not do dummy comment
void* kont78702 = (decode_clo(env78996))[2];
//not do dummy comment
void* _u43 = (decode_clo(env78996))[1];

//if-clause
bool if_guard80194 = is_true(a7859978835);
if(if_guard80194)
{
mpz_t* mpzvar80195 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80195, "0", 10);
void* x7860078836 = encode_mpz(mpzvar80195);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78702);
arg_buffer[2] = x7860078836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78702))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar80196 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80196, "1", 10);
void* a7860178837 = encode_mpz(mpzvar80196);

//creating new closure instance
void** clo80198 = alloc_clo(lam78992_fptr, 4);

//setting env list
clo80198[1] = a7860178837;
clo80198[2] = _u43;
clo80198[3] = kont78702;
clo80198[4] = length;
void* f7870478838 = encode_clo(clo80198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7870478838;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam78995 = encode_clo(alloc_clo(lam78995_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _78997 = arg_buffer[1];
//reading env and args
void* kont78702 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo80200 = alloc_clo(lam78995_fptr, 5);

//setting env list
clo80200[1] = _u43;
clo80200[2] = kont78702;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo80200[3] = length;
clo80200[4] = lst;
clo80200[5] = cdr;
void* f7870578834 = encode_clo(clo80200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7870578834;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam78998_fptr() // lam78998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env78999 = arg_buffer[1];
//reading env and args
void* x7860578845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78706 = (decode_clo(env78999))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78706);
arg_buffer[2] = x7860578845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78706))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam78998 = encode_clo(alloc_clo(lam78998_fptr, 0));

void* lam79000_fptr() // lam79000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79001 = arg_buffer[1];
//reading env and args
void* a7860978853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7860778849 = (decode_clo(env79001))[3];
//not do dummy comment
void* kont78706 = (decode_clo(env79001))[2];
//not do dummy comment
void* cons = (decode_clo(env79001))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont78706;
arg_buffer[3] = a7860778849;
arg_buffer[4] = a7860978853;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79000 = encode_clo(alloc_clo(lam79000_fptr, 0));

void* lam79002_fptr() // lam79002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79003 = arg_buffer[1];
//reading env and args
void* a7860878851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env79003))[5];
//not do dummy comment
void* a7860778849 = (decode_clo(env79003))[4];
//not do dummy comment
void* kont78706 = (decode_clo(env79003))[3];
//not do dummy comment
void* proc = (decode_clo(env79003))[2];
//not do dummy comment
void* cons = (decode_clo(env79003))[1];

//creating new closure instance
void** clo80202 = alloc_clo(lam79000_fptr, 3);

//setting env list
clo80202[1] = cons;
clo80202[2] = kont78706;
clo80202[3] = a7860778849;
void* f7870878852 = encode_clo(clo80202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f7870878852;
arg_buffer[3] = proc;
arg_buffer[4] = a7860878851;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79002 = encode_clo(alloc_clo(lam79002_fptr, 0));

void* lam79004_fptr() // lam79004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79005 = arg_buffer[1];
//reading env and args
void* a7860778849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79005))[6];
//not do dummy comment
void* lst = (decode_clo(env79005))[5];
//not do dummy comment
void* map = (decode_clo(env79005))[4];
//not do dummy comment
void* kont78706 = (decode_clo(env79005))[3];
//not do dummy comment
void* proc = (decode_clo(env79005))[2];
//not do dummy comment
void* cons = (decode_clo(env79005))[1];

//creating new closure instance
void** clo80204 = alloc_clo(lam79002_fptr, 5);

//setting env list
clo80204[1] = cons;
clo80204[2] = proc;
clo80204[3] = kont78706;
clo80204[4] = a7860778849;
clo80204[5] = map;
void* f7870978850 = encode_clo(clo80204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7870978850;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79004 = encode_clo(alloc_clo(lam79004_fptr, 0));

void* lam79006_fptr() // lam79006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79007 = arg_buffer[1];
//reading env and args
void* a7860678847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79007))[6];
//not do dummy comment
void* lst = (decode_clo(env79007))[5];
//not do dummy comment
void* map = (decode_clo(env79007))[4];
//not do dummy comment
void* kont78706 = (decode_clo(env79007))[3];
//not do dummy comment
void* proc = (decode_clo(env79007))[2];
//not do dummy comment
void* cons = (decode_clo(env79007))[1];

//creating new closure instance
void** clo80206 = alloc_clo(lam79004_fptr, 6);

//setting env list
clo80206[1] = cons;
clo80206[2] = proc;
clo80206[3] = kont78706;
clo80206[4] = map;
clo80206[5] = lst;
clo80206[6] = cdr;
void* f7871078848 = encode_clo(clo80206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f7871078848;
arg_buffer[3] = a7860678847;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79006 = encode_clo(alloc_clo(lam79006_fptr, 0));

void* lam79008_fptr() // lam79008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79009 = arg_buffer[1];
//reading env and args
void* a7860478843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env79009))[8];
//not do dummy comment
void* map = (decode_clo(env79009))[7];
//not do dummy comment
void* kont78706 = (decode_clo(env79009))[6];
//not do dummy comment
void* proc = (decode_clo(env79009))[5];
//not do dummy comment
void* car = (decode_clo(env79009))[4];
//not do dummy comment
void* cons = (decode_clo(env79009))[3];
//not do dummy comment
void* list = (decode_clo(env79009))[2];
//not do dummy comment
void* cdr = (decode_clo(env79009))[1];

//if-clause
bool if_guard80207 = is_true(a7860478843);
if(if_guard80207)
{

//creating new closure instance
void** clo80209 = alloc_clo(lam78998_fptr, 1);

//setting env list
clo80209[1] = kont78706;
void* f7870778844 = encode_clo(clo80209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7870778844;
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
void** clo80211 = alloc_clo(lam79006_fptr, 6);

//setting env list
clo80211[1] = cons;
clo80211[2] = proc;
clo80211[3] = kont78706;
clo80211[4] = map;
clo80211[5] = lst;
clo80211[6] = cdr;
void* f7871178846 = encode_clo(clo80211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7871178846;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam79008 = encode_clo(alloc_clo(lam79008_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _79010 = arg_buffer[1];
//reading env and args
void* kont78706 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo80213 = alloc_clo(lam79008_fptr, 8);

//setting env list
clo80213[1] = cdr;
clo80213[2] = list;
clo80213[3] = cons;
clo80213[4] = car;
clo80213[5] = proc;
clo80213[6] = kont78706;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo80213[7] = map;
clo80213[8] = lst;
void* f7871278842 = encode_clo(clo80213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7871278842;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam79011_fptr() // lam79011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79012 = arg_buffer[1];
//reading env and args
void* x7861178857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78713 = (decode_clo(env79012))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78713);
arg_buffer[2] = x7861178857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78713))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79011 = encode_clo(alloc_clo(lam79011_fptr, 0));

void* lam79013_fptr() // lam79013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79014 = arg_buffer[1];
//reading env and args
void* a7861678867 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78713 = (decode_clo(env79014))[3];
//not do dummy comment
void* a7861478863 = (decode_clo(env79014))[2];
//not do dummy comment
void* cons = (decode_clo(env79014))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont78713;
arg_buffer[3] = a7861478863;
arg_buffer[4] = a7861678867;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79013 = encode_clo(alloc_clo(lam79013_fptr, 0));

void* lam79015_fptr() // lam79015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79016 = arg_buffer[1];
//reading env and args
void* a7861578865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78713 = (decode_clo(env79016))[5];
//not do dummy comment
void* filter = (decode_clo(env79016))[4];
//not do dummy comment
void* cons = (decode_clo(env79016))[3];
//not do dummy comment
void* op = (decode_clo(env79016))[2];
//not do dummy comment
void* a7861478863 = (decode_clo(env79016))[1];

//creating new closure instance
void** clo80215 = alloc_clo(lam79013_fptr, 3);

//setting env list
clo80215[1] = cons;
clo80215[2] = a7861478863;
clo80215[3] = kont78713;
void* f7871578866 = encode_clo(clo80215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f7871578866;
arg_buffer[3] = op;
arg_buffer[4] = a7861578865;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79015 = encode_clo(alloc_clo(lam79015_fptr, 0));

void* lam79017_fptr() // lam79017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79018 = arg_buffer[1];
//reading env and args
void* a7861478863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79018))[6];
//not do dummy comment
void* kont78713 = (decode_clo(env79018))[5];
//not do dummy comment
void* lst = (decode_clo(env79018))[4];
//not do dummy comment
void* op = (decode_clo(env79018))[3];
//not do dummy comment
void* filter = (decode_clo(env79018))[2];
//not do dummy comment
void* cons = (decode_clo(env79018))[1];

//creating new closure instance
void** clo80217 = alloc_clo(lam79015_fptr, 5);

//setting env list
clo80217[1] = a7861478863;
clo80217[2] = op;
clo80217[3] = cons;
clo80217[4] = filter;
clo80217[5] = kont78713;
void* f7871678864 = encode_clo(clo80217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7871678864;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79017 = encode_clo(alloc_clo(lam79017_fptr, 0));

void* lam79019_fptr() // lam79019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79020 = arg_buffer[1];
//reading env and args
void* a7861778869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78713 = (decode_clo(env79020))[3];
//not do dummy comment
void* op = (decode_clo(env79020))[2];
//not do dummy comment
void* filter = (decode_clo(env79020))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont78713;
arg_buffer[3] = op;
arg_buffer[4] = a7861778869;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79019 = encode_clo(alloc_clo(lam79019_fptr, 0));

void* lam79021_fptr() // lam79021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79022 = arg_buffer[1];
//reading env and args
void* a7861378861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79022))[7];
//not do dummy comment
void* kont78713 = (decode_clo(env79022))[6];
//not do dummy comment
void* lst = (decode_clo(env79022))[5];
//not do dummy comment
void* op = (decode_clo(env79022))[4];
//not do dummy comment
void* cons = (decode_clo(env79022))[3];
//not do dummy comment
void* filter = (decode_clo(env79022))[2];
//not do dummy comment
void* car = (decode_clo(env79022))[1];

//if-clause
bool if_guard80218 = is_true(a7861378861);
if(if_guard80218)
{

//creating new closure instance
void** clo80220 = alloc_clo(lam79017_fptr, 6);

//setting env list
clo80220[1] = cons;
clo80220[2] = filter;
clo80220[3] = op;
clo80220[4] = lst;
clo80220[5] = kont78713;
clo80220[6] = cdr;
void* f7871778862 = encode_clo(clo80220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7871778862;
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
void** clo80222 = alloc_clo(lam79019_fptr, 3);

//setting env list
clo80222[1] = filter;
clo80222[2] = op;
clo80222[3] = kont78713;
void* f7871878868 = encode_clo(clo80222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7871878868;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam79021 = encode_clo(alloc_clo(lam79021_fptr, 0));

void* lam79023_fptr() // lam79023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79024 = arg_buffer[1];
//reading env and args
void* a7861278859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79024))[7];
//not do dummy comment
void* kont78713 = (decode_clo(env79024))[6];
//not do dummy comment
void* lst = (decode_clo(env79024))[5];
//not do dummy comment
void* op = (decode_clo(env79024))[4];
//not do dummy comment
void* cons = (decode_clo(env79024))[3];
//not do dummy comment
void* filter = (decode_clo(env79024))[2];
//not do dummy comment
void* car = (decode_clo(env79024))[1];

//creating new closure instance
void** clo80224 = alloc_clo(lam79021_fptr, 7);

//setting env list
clo80224[1] = car;
clo80224[2] = filter;
clo80224[3] = cons;
clo80224[4] = op;
clo80224[5] = lst;
clo80224[6] = kont78713;
clo80224[7] = cdr;
void* f7871978860 = encode_clo(clo80224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f7871978860;
arg_buffer[3] = a7861278859;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79023 = encode_clo(alloc_clo(lam79023_fptr, 0));

void* lam79025_fptr() // lam79025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79026 = arg_buffer[1];
//reading env and args
void* a7861078855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78713 = (decode_clo(env79026))[8];
//not do dummy comment
void* lst = (decode_clo(env79026))[7];
//not do dummy comment
void* op = (decode_clo(env79026))[6];
//not do dummy comment
void* cons = (decode_clo(env79026))[5];
//not do dummy comment
void* list = (decode_clo(env79026))[4];
//not do dummy comment
void* cdr = (decode_clo(env79026))[3];
//not do dummy comment
void* filter = (decode_clo(env79026))[2];
//not do dummy comment
void* car = (decode_clo(env79026))[1];

//if-clause
bool if_guard80225 = is_true(a7861078855);
if(if_guard80225)
{

//creating new closure instance
void** clo80227 = alloc_clo(lam79011_fptr, 1);

//setting env list
clo80227[1] = kont78713;
void* f7871478856 = encode_clo(clo80227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7871478856;
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
void** clo80229 = alloc_clo(lam79023_fptr, 7);

//setting env list
clo80229[1] = car;
clo80229[2] = filter;
clo80229[3] = cons;
clo80229[4] = op;
clo80229[5] = lst;
clo80229[6] = kont78713;
clo80229[7] = cdr;
void* f7872078858 = encode_clo(clo80229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7872078858;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam79025 = encode_clo(alloc_clo(lam79025_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _79027 = arg_buffer[1];
//reading env and args
void* kont78713 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo80231 = alloc_clo(lam79025_fptr, 8);

//setting env list
clo80231[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo80231[2] = filter;
clo80231[3] = cdr;
clo80231[4] = list;
clo80231[5] = cons;
clo80231[6] = op;
clo80231[7] = lst;
clo80231[8] = kont78713;
void* f7872178854 = encode_clo(clo80231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7872178854;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam79028_fptr() // lam79028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79029 = arg_buffer[1];
//reading env and args
void* a7862278877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7862078874 = (decode_clo(env79029))[3];
//not do dummy comment
void* drop = (decode_clo(env79029))[2];
//not do dummy comment
void* kont78722 = (decode_clo(env79029))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont78722;
arg_buffer[3] = a7862078874;
arg_buffer[4] = a7862278877;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79028 = encode_clo(alloc_clo(lam79028_fptr, 0));

void* lam79031_fptr() // lam79031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79032 = arg_buffer[1];
//reading env and args
void* a7862078874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env79032))[4];
//not do dummy comment
void* kont78722 = (decode_clo(env79032))[3];
//not do dummy comment
void* n = (decode_clo(env79032))[2];
//not do dummy comment
void* _u45 = (decode_clo(env79032))[1];
mpz_t* mpzvar80232 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80232, "1", 10);
void* a7862178875 = encode_mpz(mpzvar80232);

//creating new closure instance
void** clo80234 = alloc_clo(lam79028_fptr, 3);

//setting env list
clo80234[1] = kont78722;
clo80234[2] = drop;
clo80234[3] = a7862078874;
void* f7872378876 = encode_clo(clo80234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7872378876;
arg_buffer[3] = n;
arg_buffer[4] = a7862178875;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79031 = encode_clo(alloc_clo(lam79031_fptr, 0));

void* lam79033_fptr() // lam79033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79034 = arg_buffer[1];
//reading env and args
void* a7861978872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79034))[6];
//not do dummy comment
void* kont78722 = (decode_clo(env79034))[5];
//not do dummy comment
void* n = (decode_clo(env79034))[4];
//not do dummy comment
void* _u45 = (decode_clo(env79034))[3];
//not do dummy comment
void* lst = (decode_clo(env79034))[2];
//not do dummy comment
void* drop = (decode_clo(env79034))[1];

//if-clause
bool if_guard80235 = is_true(a7861978872);
if(if_guard80235)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78722);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78722))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo80237 = alloc_clo(lam79031_fptr, 4);

//setting env list
clo80237[1] = _u45;
clo80237[2] = n;
clo80237[3] = kont78722;
clo80237[4] = drop;
void* f7872478873 = encode_clo(clo80237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7872478873;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam79033 = encode_clo(alloc_clo(lam79033_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _79036 = arg_buffer[1];
//reading env and args
void* kont78722 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar80238 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80238, "0", 10);
void* a7861878870 = encode_mpz(mpzvar80238);

//creating new closure instance
void** clo80240 = alloc_clo(lam79033_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo80240[1] = drop;
clo80240[2] = lst;
clo80240[3] = _u45;
clo80240[4] = n;
clo80240[5] = kont78722;
clo80240[6] = cdr;
void* f7872578871 = encode_clo(clo80240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7872578871;
arg_buffer[3] = n;
arg_buffer[4] = a7861878870;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam79037_fptr() // lam79037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79038 = arg_buffer[1];
//reading env and args
void* a7862678885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7862478881 = (decode_clo(env79038))[3];
//not do dummy comment
void* proc = (decode_clo(env79038))[2];
//not do dummy comment
void* kont78726 = (decode_clo(env79038))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont78726;
arg_buffer[3] = a7862478881;
arg_buffer[4] = a7862678885;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79037 = encode_clo(alloc_clo(lam79037_fptr, 0));

void* lam79039_fptr() // lam79039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79040 = arg_buffer[1];
//reading env and args
void* a7862578883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env79040))[5];
//not do dummy comment
void* a7862478881 = (decode_clo(env79040))[4];
//not do dummy comment
void* kont78726 = (decode_clo(env79040))[3];
//not do dummy comment
void* proc = (decode_clo(env79040))[2];
//not do dummy comment
void* acc = (decode_clo(env79040))[1];

//creating new closure instance
void** clo80242 = alloc_clo(lam79037_fptr, 3);

//setting env list
clo80242[1] = kont78726;
clo80242[2] = proc;
clo80242[3] = a7862478881;
void* f7872778884 = encode_clo(clo80242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f7872778884;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a7862578883;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79039 = encode_clo(alloc_clo(lam79039_fptr, 0));

void* lam79041_fptr() // lam79041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79042 = arg_buffer[1];
//reading env and args
void* a7862478881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79042))[6];
//not do dummy comment
void* kont78726 = (decode_clo(env79042))[5];
//not do dummy comment
void* foldr = (decode_clo(env79042))[4];
//not do dummy comment
void* lst = (decode_clo(env79042))[3];
//not do dummy comment
void* proc = (decode_clo(env79042))[2];
//not do dummy comment
void* acc = (decode_clo(env79042))[1];

//creating new closure instance
void** clo80244 = alloc_clo(lam79039_fptr, 5);

//setting env list
clo80244[1] = acc;
clo80244[2] = proc;
clo80244[3] = kont78726;
clo80244[4] = a7862478881;
clo80244[5] = foldr;
void* f7872878882 = encode_clo(clo80244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7872878882;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79041 = encode_clo(alloc_clo(lam79041_fptr, 0));

void* lam79043_fptr() // lam79043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79044 = arg_buffer[1];
//reading env and args
void* a7862378879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79044))[7];
//not do dummy comment
void* car = (decode_clo(env79044))[6];
//not do dummy comment
void* kont78726 = (decode_clo(env79044))[5];
//not do dummy comment
void* foldr = (decode_clo(env79044))[4];
//not do dummy comment
void* lst = (decode_clo(env79044))[3];
//not do dummy comment
void* proc = (decode_clo(env79044))[2];
//not do dummy comment
void* acc = (decode_clo(env79044))[1];

//if-clause
bool if_guard80245 = is_true(a7862378879);
if(if_guard80245)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78726);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78726))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo80247 = alloc_clo(lam79041_fptr, 6);

//setting env list
clo80247[1] = acc;
clo80247[2] = proc;
clo80247[3] = lst;
clo80247[4] = foldr;
clo80247[5] = kont78726;
clo80247[6] = cdr;
void* f7872978880 = encode_clo(clo80247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7872978880;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam79043 = encode_clo(alloc_clo(lam79043_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _79045 = arg_buffer[1];
//reading env and args
void* kont78726 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo80249 = alloc_clo(lam79043_fptr, 7);

//setting env list
clo80249[1] = acc;
clo80249[2] = proc;
clo80249[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo80249[4] = foldr;
clo80249[5] = kont78726;
clo80249[6] = car;
clo80249[7] = cdr;
void* f7873078878 = encode_clo(clo80249);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7873078878;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam79046_fptr() // lam79046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79047 = arg_buffer[1];
//reading env and args
void* a7863078893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7862878889 = (decode_clo(env79047))[3];
//not do dummy comment
void* kont78731 = (decode_clo(env79047))[2];
//not do dummy comment
void* cons = (decode_clo(env79047))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont78731;
arg_buffer[3] = a7862878889;
arg_buffer[4] = a7863078893;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79046 = encode_clo(alloc_clo(lam79046_fptr, 0));

void* lam79048_fptr() // lam79048 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79049 = arg_buffer[1];
//reading env and args
void* a7862978891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7862878889 = (decode_clo(env79049))[5];
//not do dummy comment
void* kont78731 = (decode_clo(env79049))[4];
//not do dummy comment
void* append = (decode_clo(env79049))[3];
//not do dummy comment
void* lst2 = (decode_clo(env79049))[2];
//not do dummy comment
void* cons = (decode_clo(env79049))[1];

//creating new closure instance
void** clo80251 = alloc_clo(lam79046_fptr, 3);

//setting env list
clo80251[1] = cons;
clo80251[2] = kont78731;
clo80251[3] = a7862878889;
void* f7873278892 = encode_clo(clo80251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f7873278892;
arg_buffer[3] = a7862978891;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79048 = encode_clo(alloc_clo(lam79048_fptr, 0));

void* lam79050_fptr() // lam79050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79051 = arg_buffer[1];
//reading env and args
void* a7862878889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79051))[6];
//not do dummy comment
void* kont78731 = (decode_clo(env79051))[5];
//not do dummy comment
void* append = (decode_clo(env79051))[4];
//not do dummy comment
void* lst2 = (decode_clo(env79051))[3];
//not do dummy comment
void* lst1 = (decode_clo(env79051))[2];
//not do dummy comment
void* cons = (decode_clo(env79051))[1];

//creating new closure instance
void** clo80253 = alloc_clo(lam79048_fptr, 5);

//setting env list
clo80253[1] = cons;
clo80253[2] = lst2;
clo80253[3] = append;
clo80253[4] = kont78731;
clo80253[5] = a7862878889;
void* f7873378890 = encode_clo(clo80253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7873378890;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79050 = encode_clo(alloc_clo(lam79050_fptr, 0));

void* lam79052_fptr() // lam79052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79053 = arg_buffer[1];
//reading env and args
void* a7862778887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env79053))[7];
//not do dummy comment
void* kont78731 = (decode_clo(env79053))[6];
//not do dummy comment
void* append = (decode_clo(env79053))[5];
//not do dummy comment
void* lst2 = (decode_clo(env79053))[4];
//not do dummy comment
void* cons = (decode_clo(env79053))[3];
//not do dummy comment
void* lst1 = (decode_clo(env79053))[2];
//not do dummy comment
void* car = (decode_clo(env79053))[1];

//if-clause
bool if_guard80254 = is_true(a7862778887);
if(if_guard80254)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78731);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78731))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo80256 = alloc_clo(lam79050_fptr, 6);

//setting env list
clo80256[1] = cons;
clo80256[2] = lst1;
clo80256[3] = lst2;
clo80256[4] = append;
clo80256[5] = kont78731;
clo80256[6] = cdr;
void* f7873478888 = encode_clo(clo80256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7873478888;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam79052 = encode_clo(alloc_clo(lam79052_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _79054 = arg_buffer[1];
//reading env and args
void* kont78731 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo80258 = alloc_clo(lam79052_fptr, 7);

//setting env list
clo80258[1] = car;
clo80258[2] = lst1;
clo80258[3] = cons;
clo80258[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo80258[5] = append;
clo80258[6] = kont78731;
clo80258[7] = cdr;
void* f7873578886 = encode_clo(clo80258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7873578886;
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
void* _79055 = arg_buffer[1];
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

void* kont7873678894 = prim_car(lst);
void* lst78895 = prim_cdr(lst);
void* x7863178896 = apply_prim_hash(lst78895);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7873678894);
arg_buffer[2] = x7863178896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7873678894))[0]);
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
void* _79056 = arg_buffer[1];
//reading env and args
void* kont78738 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7863278897 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78738);
arg_buffer[2] = x7863278897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78738))[0]);
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
void* _79057 = arg_buffer[1];
//reading env and args
void* kont78739 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x7863378898 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78739);
arg_buffer[2] = x7863378898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78739))[0]);
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
void* _79058 = arg_buffer[1];
//reading env and args
void* kont78740 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7863478899 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78740);
arg_buffer[2] = x7863478899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78740))[0]);
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
void* _79059 = arg_buffer[1];
//reading env and args
void* kont78741 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x7863578900 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78741);
arg_buffer[2] = x7863578900;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78741))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam79062_fptr() // lam79062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79063 = arg_buffer[1];
//reading env and args
void* a7863678902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78742 = (decode_clo(env79063))[1];

//if-clause
bool if_guard80259 = is_true(a7863678902);
if(if_guard80259)
{
mpz_t* mpzvar80260 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80260, "1", 10);
void* x7863778903 = encode_mpz(mpzvar80260);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78742);
arg_buffer[2] = x7863778903;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78742))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar80261 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80261, "2", 10);
void* x7863878904 = encode_mpz(mpzvar80261);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78742);
arg_buffer[2] = x7863878904;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78742))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam79062 = encode_clo(alloc_clo(lam79062_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _79064 = arg_buffer[1];
//reading env and args
void* kont78742 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo80263 = alloc_clo(lam79062_fptr, 1);

//setting env list
clo80263[1] = kont78742;
void* f7874378901 = encode_clo(clo80263);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = f7874378901;
arg_buffer[3] = op;
arg_buffer[4] = lst;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam79065_fptr() // lam79065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env79066 = arg_buffer[1];
//reading env and args
void* a7864478911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont78744 = (decode_clo(env79066))[3];
//not do dummy comment
void* a7863978905 = (decode_clo(env79066))[2];
//not do dummy comment
void* call = (decode_clo(env79066))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont78744;
arg_buffer[3] = a7863978905;
arg_buffer[4] = a7864478911;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam79065 = encode_clo(alloc_clo(lam79065_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _79072 = arg_buffer[1];
//reading env and args
void* kont78744 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar80264 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80264, "1", 10);
void* a7863978905 = encode_mpz(mpzvar80264);
mpz_t* mpzvar80265 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80265, "1", 10);
void* a7864078906 = encode_mpz(mpzvar80265);
mpz_t* mpzvar80266 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80266, "2", 10);
void* a7864178907 = encode_mpz(mpzvar80266);
mpz_t* mpzvar80267 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80267, "3", 10);
void* a7864278908 = encode_mpz(mpzvar80267);
mpz_t* mpzvar80268 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar80268, "4", 10);
void* a7864378909 = encode_mpz(mpzvar80268);

//creating new closure instance
void** clo80270 = alloc_clo(lam79065_fptr, 3);

//setting env list
clo80270[1] = call;
clo80270[2] = a7863978905;
clo80270[3] = kont78744;
void* f7874578910 = encode_clo(clo80270);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7874578910;
arg_buffer[3] = a7864078906;
arg_buffer[4] = a7864178907;
arg_buffer[5] = a7864278908;
arg_buffer[6] = a7864378909;
arg_buffer[0] = reinterpret_cast<void*>(6);
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

