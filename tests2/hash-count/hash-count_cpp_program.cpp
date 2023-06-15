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
void* _39890 = arg_buffer[1];
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

void* kont3962439725 = prim_car(lst);
void* lst39726 = prim_cdr(lst);
void* x3953339727 = apply_prim__u43(lst39726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3962439725);
arg_buffer[2] = x3953339727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3962439725))[0]);
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
void* _39891 = arg_buffer[1];
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

void* kont3962639728 = prim_car(lst);
void* lst39729 = prim_cdr(lst);
void* x3953439730 = apply_prim__u45(lst39729);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3962639728);
arg_buffer[2] = x3953439730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3962639728))[0]);
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
void* _39892 = arg_buffer[1];
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

void* kont3962839731 = prim_car(lst);
void* lst39732 = prim_cdr(lst);
void* x3953539733 = apply_prim__u42(lst39732);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3962839731);
arg_buffer[2] = x3953539733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3962839731))[0]);
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
void* _39893 = arg_buffer[1];
//reading env and args
void* kont39630 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3953639734 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39630);
arg_buffer[2] = x3953639734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39630))[0]);
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
void* _39894 = arg_buffer[1];
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

void* kont3963139735 = prim_car(lst);
void* lst39736 = prim_cdr(lst);
void* x3953739737 = apply_prim__u47(lst39736);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3963139735);
arg_buffer[2] = x3953739737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3963139735))[0]);
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
void* _39895 = arg_buffer[1];
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

void* kont3963339738 = prim_car(lst);
void* lst39739 = prim_cdr(lst);
void* x3953839740 = apply_prim__u61(lst39739);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3963339738);
arg_buffer[2] = x3953839740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3963339738))[0]);
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
void* _39896 = arg_buffer[1];
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

void* kont3963539741 = prim_car(lst);
void* lst39742 = prim_cdr(lst);
void* x3953939743 = apply_prim__u62(lst39742);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3963539741);
arg_buffer[2] = x3953939743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3963539741))[0]);
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
void* _39897 = arg_buffer[1];
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

void* kont3963739744 = prim_car(lst);
void* lst39745 = prim_cdr(lst);
void* x3954039746 = apply_prim__u60(lst39745);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3963739744);
arg_buffer[2] = x3954039746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3963739744))[0]);
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
void* _39898 = arg_buffer[1];
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

void* kont3963939747 = prim_car(lst);
void* lst39748 = prim_cdr(lst);
void* x3954139749 = apply_prim__u60_u61(lst39748);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3963939747);
arg_buffer[2] = x3954139749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3963939747))[0]);
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
void* _39899 = arg_buffer[1];
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

void* kont3964139750 = prim_car(lst);
void* lst39751 = prim_cdr(lst);
void* x3954239752 = apply_prim__u62_u61(lst39751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3964139750);
arg_buffer[2] = x3954239752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3964139750))[0]);
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
void* _39900 = arg_buffer[1];
//reading env and args
void* kont39643 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3954339753 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39643);
arg_buffer[2] = x3954339753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39643))[0]);
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
void* _39901 = arg_buffer[1];
//reading env and args
void* kont39644 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3954439754 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39644);
arg_buffer[2] = x3954439754;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39644))[0]);
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
void* _39902 = arg_buffer[1];
//reading env and args
void* kont39645 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3954539755 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39645);
arg_buffer[2] = x3954539755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39645))[0]);
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
void* _39903 = arg_buffer[1];
//reading env and args
void* kont39646 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3954639756 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39646);
arg_buffer[2] = x3954639756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39646))[0]);
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
void* _39904 = arg_buffer[1];
//reading env and args
void* kont39647 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3954739757 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39647);
arg_buffer[2] = x3954739757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39647))[0]);
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
void* _39905 = arg_buffer[1];
//reading env and args
void* kont39648 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3954839758 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39648);
arg_buffer[2] = x3954839758;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39648))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam39906_fptr() // lam39906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39907 = arg_buffer[1];
//reading env and args
void* a3955139762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env39907))[3];
//not do dummy comment
void* a3954939759 = (decode_clo(env39907))[2];
//not do dummy comment
void* kont39649 = (decode_clo(env39907))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont39649;
arg_buffer[3] = a3954939759;
arg_buffer[4] = a3955139762;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39906 = encode_clo(alloc_clo(lam39906_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39910 = arg_buffer[1];
//reading env and args
void* kont39649 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar40890 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40890, "0", 10);
void* a3954939759 = encode_mpz(mpzvar40890);
mpz_t* mpzvar40891 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40891, "2", 10);
void* a3955039760 = encode_mpz(mpzvar40891);

//creating new closure instance
void** clo40893 = alloc_clo(lam39906_fptr, 3);

//setting env list
clo40893[1] = kont39649;
clo40893[2] = a3954939759;
clo40893[3] = equal_u63;
void* f3965039761 = encode_clo(clo40893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3965039761;
arg_buffer[3] = x;
arg_buffer[4] = a3955039760;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam39911_fptr() // lam39911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39912 = arg_buffer[1];
//reading env and args
void* a3955439766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env39912))[3];
//not do dummy comment
void* kont39651 = (decode_clo(env39912))[2];
//not do dummy comment
void* a3955239763 = (decode_clo(env39912))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont39651;
arg_buffer[3] = a3955239763;
arg_buffer[4] = a3955439766;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39911 = encode_clo(alloc_clo(lam39911_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39915 = arg_buffer[1];
//reading env and args
void* kont39651 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar40894 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40894, "1", 10);
void* a3955239763 = encode_mpz(mpzvar40894);
mpz_t* mpzvar40895 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40895, "2", 10);
void* a3955339764 = encode_mpz(mpzvar40895);

//creating new closure instance
void** clo40897 = alloc_clo(lam39911_fptr, 3);

//setting env list
clo40897[1] = a3955239763;
clo40897[2] = kont39651;
clo40897[3] = equal_u63;
void* f3965239765 = encode_clo(clo40897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3965239765;
arg_buffer[3] = x;
arg_buffer[4] = a3955339764;
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
void* _39916 = arg_buffer[1];
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

void* kont3965339767 = prim_car(x);
void* x39768 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3965339767);
arg_buffer[2] = x39768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3965339767))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam39919_fptr() // lam39919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39920 = arg_buffer[1];
//reading env and args
void* a3956039778 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39655 = (decode_clo(env39920))[3];
//not do dummy comment
void* x = (decode_clo(env39920))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39920))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont39655;
arg_buffer[3] = x;
arg_buffer[4] = a3956039778;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39919 = encode_clo(alloc_clo(lam39919_fptr, 0));

void* lam39921_fptr() // lam39921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39922 = arg_buffer[1];
//reading env and args
void* a3955839775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39922))[5];
//not do dummy comment
void* lst = (decode_clo(env39922))[4];
//not do dummy comment
void* kont39655 = (decode_clo(env39922))[3];
//not do dummy comment
void* x = (decode_clo(env39922))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39922))[1];

//if-clause
bool if_guard40898 = is_true(a3955839775);
if(if_guard40898)
{
void* x3955939776 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39655);
arg_buffer[2] = x3955939776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39655))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40900 = alloc_clo(lam39919_fptr, 3);

//setting env list
clo40900[1] = member_u63;
clo40900[2] = x;
clo40900[3] = kont39655;
void* f3965639777 = encode_clo(clo40900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3965639777;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39921 = encode_clo(alloc_clo(lam39921_fptr, 0));

void* lam39923_fptr() // lam39923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39924 = arg_buffer[1];
//reading env and args
void* a3955739773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39924))[6];
//not do dummy comment
void* lst = (decode_clo(env39924))[5];
//not do dummy comment
void* kont39655 = (decode_clo(env39924))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env39924))[3];
//not do dummy comment
void* x = (decode_clo(env39924))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39924))[1];

//creating new closure instance
void** clo40902 = alloc_clo(lam39921_fptr, 5);

//setting env list
clo40902[1] = member_u63;
clo40902[2] = x;
clo40902[3] = kont39655;
clo40902[4] = lst;
clo40902[5] = cdr;
void* f3965739774 = encode_clo(clo40902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3965739774;
arg_buffer[3] = a3955739773;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39923 = encode_clo(alloc_clo(lam39923_fptr, 0));

void* lam39925_fptr() // lam39925 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39926 = arg_buffer[1];
//reading env and args
void* a3955539770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39926))[7];
//not do dummy comment
void* lst = (decode_clo(env39926))[6];
//not do dummy comment
void* kont39655 = (decode_clo(env39926))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env39926))[4];
//not do dummy comment
void* x = (decode_clo(env39926))[3];
//not do dummy comment
void* car = (decode_clo(env39926))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39926))[1];

//if-clause
bool if_guard40903 = is_true(a3955539770);
if(if_guard40903)
{
void* x3955639771 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39655);
arg_buffer[2] = x3955639771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39655))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40905 = alloc_clo(lam39923_fptr, 6);

//setting env list
clo40905[1] = member_u63;
clo40905[2] = x;
clo40905[3] = equal_u63;
clo40905[4] = kont39655;
clo40905[5] = lst;
clo40905[6] = cdr;
void* f3965839772 = encode_clo(clo40905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3965839772;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39925 = encode_clo(alloc_clo(lam39925_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39927 = arg_buffer[1];
//reading env and args
void* kont39655 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40907 = alloc_clo(lam39925_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo40907[1] = member_u63;
clo40907[2] = car;
clo40907[3] = x;
clo40907[4] = equal_u63;
clo40907[5] = kont39655;
clo40907[6] = lst;
clo40907[7] = cdr;
void* f3965939769 = encode_clo(clo40907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3965939769;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam39928_fptr() // lam39928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39929 = arg_buffer[1];
//reading env and args
void* a3956439786 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3956339784 = (decode_clo(env39929))[4];
//not do dummy comment
void* foldl = (decode_clo(env39929))[3];
//not do dummy comment
void* kont39660 = (decode_clo(env39929))[2];
//not do dummy comment
void* fun = (decode_clo(env39929))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont39660;
arg_buffer[3] = fun;
arg_buffer[4] = a3956339784;
arg_buffer[5] = a3956439786;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39928 = encode_clo(alloc_clo(lam39928_fptr, 0));

void* lam39930_fptr() // lam39930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39931 = arg_buffer[1];
//reading env and args
void* a3956339784 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39931))[5];
//not do dummy comment
void* lst = (decode_clo(env39931))[4];
//not do dummy comment
void* foldl = (decode_clo(env39931))[3];
//not do dummy comment
void* kont39660 = (decode_clo(env39931))[2];
//not do dummy comment
void* fun = (decode_clo(env39931))[1];

//creating new closure instance
void** clo40909 = alloc_clo(lam39928_fptr, 4);

//setting env list
clo40909[1] = fun;
clo40909[2] = kont39660;
clo40909[3] = foldl;
clo40909[4] = a3956339784;
void* f3966139785 = encode_clo(clo40909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3966139785;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39930 = encode_clo(alloc_clo(lam39930_fptr, 0));

void* lam39932_fptr() // lam39932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39933 = arg_buffer[1];
//reading env and args
void* a3956239782 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39933))[6];
//not do dummy comment
void* lst = (decode_clo(env39933))[5];
//not do dummy comment
void* acc = (decode_clo(env39933))[4];
//not do dummy comment
void* foldl = (decode_clo(env39933))[3];
//not do dummy comment
void* kont39660 = (decode_clo(env39933))[2];
//not do dummy comment
void* fun = (decode_clo(env39933))[1];

//creating new closure instance
void** clo40911 = alloc_clo(lam39930_fptr, 5);

//setting env list
clo40911[1] = fun;
clo40911[2] = kont39660;
clo40911[3] = foldl;
clo40911[4] = lst;
clo40911[5] = cdr;
void* f3966239783 = encode_clo(clo40911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3966239783;
arg_buffer[3] = a3956239782;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39932 = encode_clo(alloc_clo(lam39932_fptr, 0));

void* lam39934_fptr() // lam39934 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39935 = arg_buffer[1];
//reading env and args
void* a3956139780 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39935))[7];
//not do dummy comment
void* lst = (decode_clo(env39935))[6];
//not do dummy comment
void* acc = (decode_clo(env39935))[5];
//not do dummy comment
void* car = (decode_clo(env39935))[4];
//not do dummy comment
void* foldl = (decode_clo(env39935))[3];
//not do dummy comment
void* kont39660 = (decode_clo(env39935))[2];
//not do dummy comment
void* fun = (decode_clo(env39935))[1];

//if-clause
bool if_guard40912 = is_true(a3956139780);
if(if_guard40912)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39660);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39660))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40914 = alloc_clo(lam39932_fptr, 6);

//setting env list
clo40914[1] = fun;
clo40914[2] = kont39660;
clo40914[3] = foldl;
clo40914[4] = acc;
clo40914[5] = lst;
clo40914[6] = cdr;
void* f3966339781 = encode_clo(clo40914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3966339781;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39934 = encode_clo(alloc_clo(lam39934_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39936 = arg_buffer[1];
//reading env and args
void* kont39660 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo40916 = alloc_clo(lam39934_fptr, 7);

//setting env list
clo40916[1] = fun;
clo40916[2] = kont39660;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo40916[3] = foldl;
clo40916[4] = car;
clo40916[5] = acc;
clo40916[6] = lst;
clo40916[7] = cdr;
void* f3966439779 = encode_clo(clo40916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3966439779;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam39937_fptr() // lam39937 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39938 = arg_buffer[1];
//reading env and args
void* a3956839794 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39938))[3];
//not do dummy comment
void* a3956639790 = (decode_clo(env39938))[2];
//not do dummy comment
void* kont39665 = (decode_clo(env39938))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont39665;
arg_buffer[3] = a3956639790;
arg_buffer[4] = a3956839794;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39937 = encode_clo(alloc_clo(lam39937_fptr, 0));

void* lam39939_fptr() // lam39939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39940 = arg_buffer[1];
//reading env and args
void* a3956739792 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39940))[5];
//not do dummy comment
void* cons = (decode_clo(env39940))[4];
//not do dummy comment
void* kont39665 = (decode_clo(env39940))[3];
//not do dummy comment
void* a3956639790 = (decode_clo(env39940))[2];
//not do dummy comment
void* lst2 = (decode_clo(env39940))[1];

//creating new closure instance
void** clo40918 = alloc_clo(lam39937_fptr, 3);

//setting env list
clo40918[1] = kont39665;
clo40918[2] = a3956639790;
clo40918[3] = reverse_u45helper;
void* f3966639793 = encode_clo(clo40918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3966639793;
arg_buffer[3] = a3956739792;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39939 = encode_clo(alloc_clo(lam39939_fptr, 0));

void* lam39941_fptr() // lam39941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39942 = arg_buffer[1];
//reading env and args
void* a3956639790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39942))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39942))[5];
//not do dummy comment
void* lst2 = (decode_clo(env39942))[4];
//not do dummy comment
void* car = (decode_clo(env39942))[3];
//not do dummy comment
void* cons = (decode_clo(env39942))[2];
//not do dummy comment
void* kont39665 = (decode_clo(env39942))[1];

//creating new closure instance
void** clo40920 = alloc_clo(lam39939_fptr, 5);

//setting env list
clo40920[1] = lst2;
clo40920[2] = a3956639790;
clo40920[3] = kont39665;
clo40920[4] = cons;
clo40920[5] = reverse_u45helper;
void* f3966739791 = encode_clo(clo40920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3966739791;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39941 = encode_clo(alloc_clo(lam39941_fptr, 0));

void* lam39943_fptr() // lam39943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39944 = arg_buffer[1];
//reading env and args
void* a3956539788 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39944))[7];
//not do dummy comment
void* lst = (decode_clo(env39944))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39944))[5];
//not do dummy comment
void* lst2 = (decode_clo(env39944))[4];
//not do dummy comment
void* car = (decode_clo(env39944))[3];
//not do dummy comment
void* cons = (decode_clo(env39944))[2];
//not do dummy comment
void* kont39665 = (decode_clo(env39944))[1];

//if-clause
bool if_guard40921 = is_true(a3956539788);
if(if_guard40921)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39665);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39665))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40923 = alloc_clo(lam39941_fptr, 6);

//setting env list
clo40923[1] = kont39665;
clo40923[2] = cons;
clo40923[3] = car;
clo40923[4] = lst2;
clo40923[5] = reverse_u45helper;
clo40923[6] = lst;
void* f3966839789 = encode_clo(clo40923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3966839789;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39943 = encode_clo(alloc_clo(lam39943_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39945 = arg_buffer[1];
//reading env and args
void* kont39665 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40925 = alloc_clo(lam39943_fptr, 7);

//setting env list
clo40925[1] = kont39665;
clo40925[2] = cons;
clo40925[3] = car;
clo40925[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo40925[5] = reverse_u45helper;
clo40925[6] = lst;
clo40925[7] = cdr;
void* f3966939787 = encode_clo(clo40925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3966939787;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam39946_fptr() // lam39946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39947 = arg_buffer[1];
//reading env and args
void* a3956939796 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39947))[3];
//not do dummy comment
void* lst = (decode_clo(env39947))[2];
//not do dummy comment
void* kont39670 = (decode_clo(env39947))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont39670;
arg_buffer[3] = lst;
arg_buffer[4] = a3956939796;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39946 = encode_clo(alloc_clo(lam39946_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39948 = arg_buffer[1];
//reading env and args
void* kont39670 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo40927 = alloc_clo(lam39946_fptr, 3);

//setting env list
clo40927[1] = kont39670;
clo40927[2] = lst;
clo40927[3] = reverse_u45helper;
void* f3967139795 = encode_clo(clo40927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3967139795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam39949_fptr() // lam39949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39950 = arg_buffer[1];
//reading env and args
void* x3957239801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39672 = (decode_clo(env39950))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39672);
arg_buffer[2] = x3957239801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39672))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39949 = encode_clo(alloc_clo(lam39949_fptr, 0));

void* lam39951_fptr() // lam39951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39952 = arg_buffer[1];
//reading env and args
void* a3957739810 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39672 = (decode_clo(env39952))[4];
//not do dummy comment
void* a3957339803 = (decode_clo(env39952))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env39952))[2];
//not do dummy comment
void* a3957539806 = (decode_clo(env39952))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont39672;
arg_buffer[3] = a3957339803;
arg_buffer[4] = a3957539806;
arg_buffer[5] = a3957739810;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39951 = encode_clo(alloc_clo(lam39951_fptr, 0));

void* lam39953_fptr() // lam39953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39954 = arg_buffer[1];
//reading env and args
void* a3957639808 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39672 = (decode_clo(env39954))[6];
//not do dummy comment
void* a3957339803 = (decode_clo(env39954))[5];
//not do dummy comment
void* cons = (decode_clo(env39954))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env39954))[3];
//not do dummy comment
void* a3957539806 = (decode_clo(env39954))[2];
//not do dummy comment
void* lst2 = (decode_clo(env39954))[1];

//creating new closure instance
void** clo40929 = alloc_clo(lam39951_fptr, 4);

//setting env list
clo40929[1] = a3957539806;
clo40929[2] = take_u45helper;
clo40929[3] = a3957339803;
clo40929[4] = kont39672;
void* f3967439809 = encode_clo(clo40929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3967439809;
arg_buffer[3] = a3957639808;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39953 = encode_clo(alloc_clo(lam39953_fptr, 0));

void* lam39955_fptr() // lam39955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39956 = arg_buffer[1];
//reading env and args
void* a3957539806 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39956))[7];
//not do dummy comment
void* kont39672 = (decode_clo(env39956))[6];
//not do dummy comment
void* a3957339803 = (decode_clo(env39956))[5];
//not do dummy comment
void* car = (decode_clo(env39956))[4];
//not do dummy comment
void* cons = (decode_clo(env39956))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env39956))[2];
//not do dummy comment
void* lst2 = (decode_clo(env39956))[1];

//creating new closure instance
void** clo40931 = alloc_clo(lam39953_fptr, 6);

//setting env list
clo40931[1] = lst2;
clo40931[2] = a3957539806;
clo40931[3] = take_u45helper;
clo40931[4] = cons;
clo40931[5] = a3957339803;
clo40931[6] = kont39672;
void* f3967539807 = encode_clo(clo40931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3967539807;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39955 = encode_clo(alloc_clo(lam39955_fptr, 0));

void* lam39958_fptr() // lam39958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39959 = arg_buffer[1];
//reading env and args
void* a3957339803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39959))[8];
//not do dummy comment
void* kont39672 = (decode_clo(env39959))[7];
//not do dummy comment
void* cons = (decode_clo(env39959))[6];
//not do dummy comment
void* _u45 = (decode_clo(env39959))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env39959))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39959))[3];
//not do dummy comment
void* n = (decode_clo(env39959))[2];
//not do dummy comment
void* car = (decode_clo(env39959))[1];
mpz_t* mpzvar40932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40932, "1", 10);
void* a3957439804 = encode_mpz(mpzvar40932);

//creating new closure instance
void** clo40934 = alloc_clo(lam39955_fptr, 7);

//setting env list
clo40934[1] = lst2;
clo40934[2] = take_u45helper;
clo40934[3] = cons;
clo40934[4] = car;
clo40934[5] = a3957339803;
clo40934[6] = kont39672;
clo40934[7] = lst;
void* f3967639805 = encode_clo(clo40934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3967639805;
arg_buffer[3] = n;
arg_buffer[4] = a3957439804;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39958 = encode_clo(alloc_clo(lam39958_fptr, 0));

void* lam39960_fptr() // lam39960 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39961 = arg_buffer[1];
//reading env and args
void* a3957139799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39961))[10];
//not do dummy comment
void* lst = (decode_clo(env39961))[9];
//not do dummy comment
void* kont39672 = (decode_clo(env39961))[8];
//not do dummy comment
void* reverse = (decode_clo(env39961))[7];
//not do dummy comment
void* cons = (decode_clo(env39961))[6];
//not do dummy comment
void* _u45 = (decode_clo(env39961))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env39961))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39961))[3];
//not do dummy comment
void* n = (decode_clo(env39961))[2];
//not do dummy comment
void* car = (decode_clo(env39961))[1];

//if-clause
bool if_guard40935 = is_true(a3957139799);
if(if_guard40935)
{

//creating new closure instance
void** clo40937 = alloc_clo(lam39949_fptr, 1);

//setting env list
clo40937[1] = kont39672;
void* f3967339800 = encode_clo(clo40937);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3967339800;
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
void** clo40939 = alloc_clo(lam39958_fptr, 8);

//setting env list
clo40939[1] = car;
clo40939[2] = n;
clo40939[3] = lst2;
clo40939[4] = take_u45helper;
clo40939[5] = _u45;
clo40939[6] = cons;
clo40939[7] = kont39672;
clo40939[8] = lst;
void* f3967739802 = encode_clo(clo40939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3967739802;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39960 = encode_clo(alloc_clo(lam39960_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39963 = arg_buffer[1];
//reading env and args
void* kont39672 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar40940 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40940, "0", 10);
void* a3957039797 = encode_mpz(mpzvar40940);

//creating new closure instance
void** clo40942 = alloc_clo(lam39960_fptr, 10);

//setting env list
clo40942[1] = car;
clo40942[2] = n;
clo40942[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo40942[4] = take_u45helper;
clo40942[5] = _u45;
clo40942[6] = cons;
clo40942[7] = reverse;
clo40942[8] = kont39672;
clo40942[9] = lst;
clo40942[10] = cdr;
void* f3967839798 = encode_clo(clo40942);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3967839798;
arg_buffer[3] = n;
arg_buffer[4] = a3957039797;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam39964_fptr() // lam39964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39965 = arg_buffer[1];
//reading env and args
void* a3957839812 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39965))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env39965))[3];
//not do dummy comment
void* kont39679 = (decode_clo(env39965))[2];
//not do dummy comment
void* n = (decode_clo(env39965))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont39679;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3957839812;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39964 = encode_clo(alloc_clo(lam39964_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39966 = arg_buffer[1];
//reading env and args
void* kont39679 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40944 = alloc_clo(lam39964_fptr, 4);

//setting env list
clo40944[1] = n;
clo40944[2] = kont39679;
clo40944[3] = take_u45helper;
clo40944[4] = lst;
void* f3968039811 = encode_clo(clo40944);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3968039811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam39968_fptr() // lam39968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39969 = arg_buffer[1];
//reading env and args
void* a3958339820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3958139816 = (decode_clo(env39969))[3];
//not do dummy comment
void* _u43 = (decode_clo(env39969))[2];
//not do dummy comment
void* kont39681 = (decode_clo(env39969))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont39681;
arg_buffer[3] = a3958139816;
arg_buffer[4] = a3958339820;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39968 = encode_clo(alloc_clo(lam39968_fptr, 0));

void* lam39970_fptr() // lam39970 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39971 = arg_buffer[1];
//reading env and args
void* a3958239818 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env39971))[4];
//not do dummy comment
void* a3958139816 = (decode_clo(env39971))[3];
//not do dummy comment
void* _u43 = (decode_clo(env39971))[2];
//not do dummy comment
void* kont39681 = (decode_clo(env39971))[1];

//creating new closure instance
void** clo40946 = alloc_clo(lam39968_fptr, 3);

//setting env list
clo40946[1] = kont39681;
clo40946[2] = _u43;
clo40946[3] = a3958139816;
void* f3968239819 = encode_clo(clo40946);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3968239819;
arg_buffer[3] = a3958239818;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39970 = encode_clo(alloc_clo(lam39970_fptr, 0));

void* lam39973_fptr() // lam39973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39974 = arg_buffer[1];
//reading env and args
void* a3957939814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39974))[5];
//not do dummy comment
void* lst = (decode_clo(env39974))[4];
//not do dummy comment
void* length = (decode_clo(env39974))[3];
//not do dummy comment
void* _u43 = (decode_clo(env39974))[2];
//not do dummy comment
void* kont39681 = (decode_clo(env39974))[1];

//if-clause
bool if_guard40947 = is_true(a3957939814);
if(if_guard40947)
{
mpz_t* mpzvar40948 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40948, "0", 10);
void* x3958039815 = encode_mpz(mpzvar40948);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39681);
arg_buffer[2] = x3958039815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39681))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar40949 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40949, "1", 10);
void* a3958139816 = encode_mpz(mpzvar40949);

//creating new closure instance
void** clo40951 = alloc_clo(lam39970_fptr, 4);

//setting env list
clo40951[1] = kont39681;
clo40951[2] = _u43;
clo40951[3] = a3958139816;
clo40951[4] = length;
void* f3968339817 = encode_clo(clo40951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3968339817;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39973 = encode_clo(alloc_clo(lam39973_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39975 = arg_buffer[1];
//reading env and args
void* kont39681 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo40953 = alloc_clo(lam39973_fptr, 5);

//setting env list
clo40953[1] = kont39681;
clo40953[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo40953[3] = length;
clo40953[4] = lst;
clo40953[5] = cdr;
void* f3968439813 = encode_clo(clo40953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3968439813;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam39976_fptr() // lam39976 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39977 = arg_buffer[1];
//reading env and args
void* x3958539824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39685 = (decode_clo(env39977))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39685);
arg_buffer[2] = x3958539824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39685))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39976 = encode_clo(alloc_clo(lam39976_fptr, 0));

void* lam39978_fptr() // lam39978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39979 = arg_buffer[1];
//reading env and args
void* a3958939832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3958739828 = (decode_clo(env39979))[3];
//not do dummy comment
void* kont39685 = (decode_clo(env39979))[2];
//not do dummy comment
void* cons = (decode_clo(env39979))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39685;
arg_buffer[3] = a3958739828;
arg_buffer[4] = a3958939832;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39978 = encode_clo(alloc_clo(lam39978_fptr, 0));

void* lam39980_fptr() // lam39980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39981 = arg_buffer[1];
//reading env and args
void* a3958839830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3958739828 = (decode_clo(env39981))[5];
//not do dummy comment
void* kont39685 = (decode_clo(env39981))[4];
//not do dummy comment
void* map = (decode_clo(env39981))[3];
//not do dummy comment
void* proc = (decode_clo(env39981))[2];
//not do dummy comment
void* cons = (decode_clo(env39981))[1];

//creating new closure instance
void** clo40955 = alloc_clo(lam39978_fptr, 3);

//setting env list
clo40955[1] = cons;
clo40955[2] = kont39685;
clo40955[3] = a3958739828;
void* f3968739831 = encode_clo(clo40955);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3968739831;
arg_buffer[3] = proc;
arg_buffer[4] = a3958839830;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39980 = encode_clo(alloc_clo(lam39980_fptr, 0));

void* lam39982_fptr() // lam39982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39983 = arg_buffer[1];
//reading env and args
void* a3958739828 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39983))[6];
//not do dummy comment
void* kont39685 = (decode_clo(env39983))[5];
//not do dummy comment
void* lst = (decode_clo(env39983))[4];
//not do dummy comment
void* map = (decode_clo(env39983))[3];
//not do dummy comment
void* proc = (decode_clo(env39983))[2];
//not do dummy comment
void* cons = (decode_clo(env39983))[1];

//creating new closure instance
void** clo40957 = alloc_clo(lam39980_fptr, 5);

//setting env list
clo40957[1] = cons;
clo40957[2] = proc;
clo40957[3] = map;
clo40957[4] = kont39685;
clo40957[5] = a3958739828;
void* f3968839829 = encode_clo(clo40957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3968839829;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39982 = encode_clo(alloc_clo(lam39982_fptr, 0));

void* lam39984_fptr() // lam39984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39985 = arg_buffer[1];
//reading env and args
void* a3958639826 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39985))[6];
//not do dummy comment
void* kont39685 = (decode_clo(env39985))[5];
//not do dummy comment
void* lst = (decode_clo(env39985))[4];
//not do dummy comment
void* map = (decode_clo(env39985))[3];
//not do dummy comment
void* proc = (decode_clo(env39985))[2];
//not do dummy comment
void* cons = (decode_clo(env39985))[1];

//creating new closure instance
void** clo40959 = alloc_clo(lam39982_fptr, 6);

//setting env list
clo40959[1] = cons;
clo40959[2] = proc;
clo40959[3] = map;
clo40959[4] = lst;
clo40959[5] = kont39685;
clo40959[6] = cdr;
void* f3968939827 = encode_clo(clo40959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3968939827;
arg_buffer[3] = a3958639826;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39984 = encode_clo(alloc_clo(lam39984_fptr, 0));

void* lam39986_fptr() // lam39986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39987 = arg_buffer[1];
//reading env and args
void* a3958439822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39685 = (decode_clo(env39987))[8];
//not do dummy comment
void* lst = (decode_clo(env39987))[7];
//not do dummy comment
void* map = (decode_clo(env39987))[6];
//not do dummy comment
void* proc = (decode_clo(env39987))[5];
//not do dummy comment
void* car = (decode_clo(env39987))[4];
//not do dummy comment
void* cons = (decode_clo(env39987))[3];
//not do dummy comment
void* list = (decode_clo(env39987))[2];
//not do dummy comment
void* cdr = (decode_clo(env39987))[1];

//if-clause
bool if_guard40960 = is_true(a3958439822);
if(if_guard40960)
{

//creating new closure instance
void** clo40962 = alloc_clo(lam39976_fptr, 1);

//setting env list
clo40962[1] = kont39685;
void* f3968639823 = encode_clo(clo40962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3968639823;
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
void** clo40964 = alloc_clo(lam39984_fptr, 6);

//setting env list
clo40964[1] = cons;
clo40964[2] = proc;
clo40964[3] = map;
clo40964[4] = lst;
clo40964[5] = kont39685;
clo40964[6] = cdr;
void* f3969039825 = encode_clo(clo40964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3969039825;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39986 = encode_clo(alloc_clo(lam39986_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39988 = arg_buffer[1];
//reading env and args
void* kont39685 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40966 = alloc_clo(lam39986_fptr, 8);

//setting env list
clo40966[1] = cdr;
clo40966[2] = list;
clo40966[3] = cons;
clo40966[4] = car;
clo40966[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo40966[6] = map;
clo40966[7] = lst;
clo40966[8] = kont39685;
void* f3969139821 = encode_clo(clo40966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3969139821;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam39989_fptr() // lam39989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39990 = arg_buffer[1];
//reading env and args
void* x3959139836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39692 = (decode_clo(env39990))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39692);
arg_buffer[2] = x3959139836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39692))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39989 = encode_clo(alloc_clo(lam39989_fptr, 0));

void* lam39991_fptr() // lam39991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39992 = arg_buffer[1];
//reading env and args
void* a3959639846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3959439842 = (decode_clo(env39992))[3];
//not do dummy comment
void* kont39692 = (decode_clo(env39992))[2];
//not do dummy comment
void* cons = (decode_clo(env39992))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39692;
arg_buffer[3] = a3959439842;
arg_buffer[4] = a3959639846;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39991 = encode_clo(alloc_clo(lam39991_fptr, 0));

void* lam39993_fptr() // lam39993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39994 = arg_buffer[1];
//reading env and args
void* a3959539844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3959439842 = (decode_clo(env39994))[5];
//not do dummy comment
void* op = (decode_clo(env39994))[4];
//not do dummy comment
void* kont39692 = (decode_clo(env39994))[3];
//not do dummy comment
void* filter = (decode_clo(env39994))[2];
//not do dummy comment
void* cons = (decode_clo(env39994))[1];

//creating new closure instance
void** clo40968 = alloc_clo(lam39991_fptr, 3);

//setting env list
clo40968[1] = cons;
clo40968[2] = kont39692;
clo40968[3] = a3959439842;
void* f3969439845 = encode_clo(clo40968);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3969439845;
arg_buffer[3] = op;
arg_buffer[4] = a3959539844;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39993 = encode_clo(alloc_clo(lam39993_fptr, 0));

void* lam39995_fptr() // lam39995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39996 = arg_buffer[1];
//reading env and args
void* a3959439842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39996))[6];
//not do dummy comment
void* lst = (decode_clo(env39996))[5];
//not do dummy comment
void* op = (decode_clo(env39996))[4];
//not do dummy comment
void* kont39692 = (decode_clo(env39996))[3];
//not do dummy comment
void* filter = (decode_clo(env39996))[2];
//not do dummy comment
void* cons = (decode_clo(env39996))[1];

//creating new closure instance
void** clo40970 = alloc_clo(lam39993_fptr, 5);

//setting env list
clo40970[1] = cons;
clo40970[2] = filter;
clo40970[3] = kont39692;
clo40970[4] = op;
clo40970[5] = a3959439842;
void* f3969539843 = encode_clo(clo40970);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3969539843;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39995 = encode_clo(alloc_clo(lam39995_fptr, 0));

void* lam39997_fptr() // lam39997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39998 = arg_buffer[1];
//reading env and args
void* a3959739848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env39998))[3];
//not do dummy comment
void* kont39692 = (decode_clo(env39998))[2];
//not do dummy comment
void* filter = (decode_clo(env39998))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont39692;
arg_buffer[3] = op;
arg_buffer[4] = a3959739848;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39997 = encode_clo(alloc_clo(lam39997_fptr, 0));

void* lam39999_fptr() // lam39999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40000 = arg_buffer[1];
//reading env and args
void* a3959339840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40000))[7];
//not do dummy comment
void* lst = (decode_clo(env40000))[6];
//not do dummy comment
void* op = (decode_clo(env40000))[5];
//not do dummy comment
void* kont39692 = (decode_clo(env40000))[4];
//not do dummy comment
void* cons = (decode_clo(env40000))[3];
//not do dummy comment
void* filter = (decode_clo(env40000))[2];
//not do dummy comment
void* car = (decode_clo(env40000))[1];

//if-clause
bool if_guard40971 = is_true(a3959339840);
if(if_guard40971)
{

//creating new closure instance
void** clo40973 = alloc_clo(lam39995_fptr, 6);

//setting env list
clo40973[1] = cons;
clo40973[2] = filter;
clo40973[3] = kont39692;
clo40973[4] = op;
clo40973[5] = lst;
clo40973[6] = cdr;
void* f3969639841 = encode_clo(clo40973);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3969639841;
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
void** clo40975 = alloc_clo(lam39997_fptr, 3);

//setting env list
clo40975[1] = filter;
clo40975[2] = kont39692;
clo40975[3] = op;
void* f3969739847 = encode_clo(clo40975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3969739847;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39999 = encode_clo(alloc_clo(lam39999_fptr, 0));

void* lam40001_fptr() // lam40001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40002 = arg_buffer[1];
//reading env and args
void* a3959239838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40002))[7];
//not do dummy comment
void* lst = (decode_clo(env40002))[6];
//not do dummy comment
void* op = (decode_clo(env40002))[5];
//not do dummy comment
void* kont39692 = (decode_clo(env40002))[4];
//not do dummy comment
void* cons = (decode_clo(env40002))[3];
//not do dummy comment
void* filter = (decode_clo(env40002))[2];
//not do dummy comment
void* car = (decode_clo(env40002))[1];

//creating new closure instance
void** clo40977 = alloc_clo(lam39999_fptr, 7);

//setting env list
clo40977[1] = car;
clo40977[2] = filter;
clo40977[3] = cons;
clo40977[4] = kont39692;
clo40977[5] = op;
clo40977[6] = lst;
clo40977[7] = cdr;
void* f3969839839 = encode_clo(clo40977);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3969839839;
arg_buffer[3] = a3959239838;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40001 = encode_clo(alloc_clo(lam40001_fptr, 0));

void* lam40003_fptr() // lam40003 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40004 = arg_buffer[1];
//reading env and args
void* a3959039834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40004))[8];
//not do dummy comment
void* op = (decode_clo(env40004))[7];
//not do dummy comment
void* kont39692 = (decode_clo(env40004))[6];
//not do dummy comment
void* cons = (decode_clo(env40004))[5];
//not do dummy comment
void* list = (decode_clo(env40004))[4];
//not do dummy comment
void* cdr = (decode_clo(env40004))[3];
//not do dummy comment
void* filter = (decode_clo(env40004))[2];
//not do dummy comment
void* car = (decode_clo(env40004))[1];

//if-clause
bool if_guard40978 = is_true(a3959039834);
if(if_guard40978)
{

//creating new closure instance
void** clo40980 = alloc_clo(lam39989_fptr, 1);

//setting env list
clo40980[1] = kont39692;
void* f3969339835 = encode_clo(clo40980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3969339835;
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
void** clo40982 = alloc_clo(lam40001_fptr, 7);

//setting env list
clo40982[1] = car;
clo40982[2] = filter;
clo40982[3] = cons;
clo40982[4] = kont39692;
clo40982[5] = op;
clo40982[6] = lst;
clo40982[7] = cdr;
void* f3969939837 = encode_clo(clo40982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3969939837;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40003 = encode_clo(alloc_clo(lam40003_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40005 = arg_buffer[1];
//reading env and args
void* kont39692 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40984 = alloc_clo(lam40003_fptr, 8);

//setting env list
clo40984[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo40984[2] = filter;
clo40984[3] = cdr;
clo40984[4] = list;
clo40984[5] = cons;
clo40984[6] = kont39692;
clo40984[7] = op;
clo40984[8] = lst;
void* f3970039833 = encode_clo(clo40984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3970039833;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam40006_fptr() // lam40006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40007 = arg_buffer[1];
//reading env and args
void* a3960239856 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39701 = (decode_clo(env40007))[3];
//not do dummy comment
void* drop = (decode_clo(env40007))[2];
//not do dummy comment
void* a3960039853 = (decode_clo(env40007))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont39701;
arg_buffer[3] = a3960039853;
arg_buffer[4] = a3960239856;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40006 = encode_clo(alloc_clo(lam40006_fptr, 0));

void* lam40009_fptr() // lam40009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40010 = arg_buffer[1];
//reading env and args
void* a3960039853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39701 = (decode_clo(env40010))[4];
//not do dummy comment
void* drop = (decode_clo(env40010))[3];
//not do dummy comment
void* n = (decode_clo(env40010))[2];
//not do dummy comment
void* _u45 = (decode_clo(env40010))[1];
mpz_t* mpzvar40985 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40985, "1", 10);
void* a3960139854 = encode_mpz(mpzvar40985);

//creating new closure instance
void** clo40987 = alloc_clo(lam40006_fptr, 3);

//setting env list
clo40987[1] = a3960039853;
clo40987[2] = drop;
clo40987[3] = kont39701;
void* f3970239855 = encode_clo(clo40987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3970239855;
arg_buffer[3] = n;
arg_buffer[4] = a3960139854;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40009 = encode_clo(alloc_clo(lam40009_fptr, 0));

void* lam40011_fptr() // lam40011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40012 = arg_buffer[1];
//reading env and args
void* a3959939851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40012))[6];
//not do dummy comment
void* kont39701 = (decode_clo(env40012))[5];
//not do dummy comment
void* n = (decode_clo(env40012))[4];
//not do dummy comment
void* _u45 = (decode_clo(env40012))[3];
//not do dummy comment
void* lst = (decode_clo(env40012))[2];
//not do dummy comment
void* drop = (decode_clo(env40012))[1];

//if-clause
bool if_guard40988 = is_true(a3959939851);
if(if_guard40988)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39701);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39701))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40990 = alloc_clo(lam40009_fptr, 4);

//setting env list
clo40990[1] = _u45;
clo40990[2] = n;
clo40990[3] = drop;
clo40990[4] = kont39701;
void* f3970339852 = encode_clo(clo40990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3970339852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40011 = encode_clo(alloc_clo(lam40011_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40014 = arg_buffer[1];
//reading env and args
void* kont39701 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar40991 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40991, "0", 10);
void* a3959839849 = encode_mpz(mpzvar40991);

//creating new closure instance
void** clo40993 = alloc_clo(lam40011_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo40993[1] = drop;
clo40993[2] = lst;
clo40993[3] = _u45;
clo40993[4] = n;
clo40993[5] = kont39701;
clo40993[6] = cdr;
void* f3970439850 = encode_clo(clo40993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3970439850;
arg_buffer[3] = n;
arg_buffer[4] = a3959839849;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam40015_fptr() // lam40015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40016 = arg_buffer[1];
//reading env and args
void* a3960639864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3960439860 = (decode_clo(env40016))[3];
//not do dummy comment
void* kont39705 = (decode_clo(env40016))[2];
//not do dummy comment
void* proc = (decode_clo(env40016))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont39705;
arg_buffer[3] = a3960439860;
arg_buffer[4] = a3960639864;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40015 = encode_clo(alloc_clo(lam40015_fptr, 0));

void* lam40017_fptr() // lam40017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40018 = arg_buffer[1];
//reading env and args
void* a3960539862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3960439860 = (decode_clo(env40018))[5];
//not do dummy comment
void* foldr = (decode_clo(env40018))[4];
//not do dummy comment
void* kont39705 = (decode_clo(env40018))[3];
//not do dummy comment
void* proc = (decode_clo(env40018))[2];
//not do dummy comment
void* acc = (decode_clo(env40018))[1];

//creating new closure instance
void** clo40995 = alloc_clo(lam40015_fptr, 3);

//setting env list
clo40995[1] = proc;
clo40995[2] = kont39705;
clo40995[3] = a3960439860;
void* f3970639863 = encode_clo(clo40995);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3970639863;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3960539862;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40017 = encode_clo(alloc_clo(lam40017_fptr, 0));

void* lam40019_fptr() // lam40019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40020 = arg_buffer[1];
//reading env and args
void* a3960439860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40020))[6];
//not do dummy comment
void* kont39705 = (decode_clo(env40020))[5];
//not do dummy comment
void* foldr = (decode_clo(env40020))[4];
//not do dummy comment
void* lst = (decode_clo(env40020))[3];
//not do dummy comment
void* proc = (decode_clo(env40020))[2];
//not do dummy comment
void* acc = (decode_clo(env40020))[1];

//creating new closure instance
void** clo40997 = alloc_clo(lam40017_fptr, 5);

//setting env list
clo40997[1] = acc;
clo40997[2] = proc;
clo40997[3] = kont39705;
clo40997[4] = foldr;
clo40997[5] = a3960439860;
void* f3970739861 = encode_clo(clo40997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3970739861;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40019 = encode_clo(alloc_clo(lam40019_fptr, 0));

void* lam40021_fptr() // lam40021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40022 = arg_buffer[1];
//reading env and args
void* a3960339858 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40022))[7];
//not do dummy comment
void* kont39705 = (decode_clo(env40022))[6];
//not do dummy comment
void* car = (decode_clo(env40022))[5];
//not do dummy comment
void* foldr = (decode_clo(env40022))[4];
//not do dummy comment
void* lst = (decode_clo(env40022))[3];
//not do dummy comment
void* proc = (decode_clo(env40022))[2];
//not do dummy comment
void* acc = (decode_clo(env40022))[1];

//if-clause
bool if_guard40998 = is_true(a3960339858);
if(if_guard40998)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39705);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39705))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41000 = alloc_clo(lam40019_fptr, 6);

//setting env list
clo41000[1] = acc;
clo41000[2] = proc;
clo41000[3] = lst;
clo41000[4] = foldr;
clo41000[5] = kont39705;
clo41000[6] = cdr;
void* f3970839859 = encode_clo(clo41000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3970839859;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40021 = encode_clo(alloc_clo(lam40021_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40023 = arg_buffer[1];
//reading env and args
void* kont39705 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo41002 = alloc_clo(lam40021_fptr, 7);

//setting env list
clo41002[1] = acc;
clo41002[2] = proc;
clo41002[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo41002[4] = foldr;
clo41002[5] = car;
clo41002[6] = kont39705;
clo41002[7] = cdr;
void* f3970939857 = encode_clo(clo41002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3970939857;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam40024_fptr() // lam40024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40025 = arg_buffer[1];
//reading env and args
void* a3961039872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3960839868 = (decode_clo(env40025))[3];
//not do dummy comment
void* kont39710 = (decode_clo(env40025))[2];
//not do dummy comment
void* cons = (decode_clo(env40025))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39710;
arg_buffer[3] = a3960839868;
arg_buffer[4] = a3961039872;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40024 = encode_clo(alloc_clo(lam40024_fptr, 0));

void* lam40026_fptr() // lam40026 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40027 = arg_buffer[1];
//reading env and args
void* a3960939870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env40027))[5];
//not do dummy comment
void* a3960839868 = (decode_clo(env40027))[4];
//not do dummy comment
void* cons = (decode_clo(env40027))[3];
//not do dummy comment
void* kont39710 = (decode_clo(env40027))[2];
//not do dummy comment
void* lst2 = (decode_clo(env40027))[1];

//creating new closure instance
void** clo41004 = alloc_clo(lam40024_fptr, 3);

//setting env list
clo41004[1] = cons;
clo41004[2] = kont39710;
clo41004[3] = a3960839868;
void* f3971139871 = encode_clo(clo41004);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3971139871;
arg_buffer[3] = a3960939870;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40026 = encode_clo(alloc_clo(lam40026_fptr, 0));

void* lam40028_fptr() // lam40028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40029 = arg_buffer[1];
//reading env and args
void* a3960839868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40029))[6];
//not do dummy comment
void* append = (decode_clo(env40029))[5];
//not do dummy comment
void* lst1 = (decode_clo(env40029))[4];
//not do dummy comment
void* cons = (decode_clo(env40029))[3];
//not do dummy comment
void* kont39710 = (decode_clo(env40029))[2];
//not do dummy comment
void* lst2 = (decode_clo(env40029))[1];

//creating new closure instance
void** clo41006 = alloc_clo(lam40026_fptr, 5);

//setting env list
clo41006[1] = lst2;
clo41006[2] = kont39710;
clo41006[3] = cons;
clo41006[4] = a3960839868;
clo41006[5] = append;
void* f3971239869 = encode_clo(clo41006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3971239869;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40028 = encode_clo(alloc_clo(lam40028_fptr, 0));

void* lam40030_fptr() // lam40030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40031 = arg_buffer[1];
//reading env and args
void* a3960739866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40031))[7];
//not do dummy comment
void* append = (decode_clo(env40031))[6];
//not do dummy comment
void* cons = (decode_clo(env40031))[5];
//not do dummy comment
void* kont39710 = (decode_clo(env40031))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40031))[3];
//not do dummy comment
void* lst1 = (decode_clo(env40031))[2];
//not do dummy comment
void* car = (decode_clo(env40031))[1];

//if-clause
bool if_guard41007 = is_true(a3960739866);
if(if_guard41007)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39710);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39710))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41009 = alloc_clo(lam40028_fptr, 6);

//setting env list
clo41009[1] = lst2;
clo41009[2] = kont39710;
clo41009[3] = cons;
clo41009[4] = lst1;
clo41009[5] = append;
clo41009[6] = cdr;
void* f3971339867 = encode_clo(clo41009);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3971339867;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40030 = encode_clo(alloc_clo(lam40030_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40032 = arg_buffer[1];
//reading env and args
void* kont39710 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41011 = alloc_clo(lam40030_fptr, 7);

//setting env list
clo41011[1] = car;
clo41011[2] = lst1;
clo41011[3] = lst2;
clo41011[4] = kont39710;
clo41011[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo41011[6] = append;
clo41011[7] = cdr;
void* f3971439865 = encode_clo(clo41011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3971439865;
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
void* _40033 = arg_buffer[1];
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

void* kont3971539873 = prim_car(lst);
void* lst39874 = prim_cdr(lst);
void* x3961139875 = apply_prim_hash(lst39874);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3971539873);
arg_buffer[2] = x3961139875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3971539873))[0]);
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
void* _40034 = arg_buffer[1];
//reading env and args
void* kont39717 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3961239876 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39717);
arg_buffer[2] = x3961239876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39717))[0]);
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
void* _40035 = arg_buffer[1];
//reading env and args
void* kont39718 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3961339877 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39718);
arg_buffer[2] = x3961339877;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39718))[0]);
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
void* _40036 = arg_buffer[1];
//reading env and args
void* kont39719 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3961439878 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39719);
arg_buffer[2] = x3961439878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39719))[0]);
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
void* _40037 = arg_buffer[1];
//reading env and args
void* kont39720 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3961539879 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39720);
arg_buffer[2] = x3961539879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39720))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam40038_fptr() // lam40038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40039 = arg_buffer[1];
//reading env and args
void* a3962239887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39721 = (decode_clo(env40039))[2];
//not do dummy comment
void* hash_u45count = (decode_clo(env40039))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45count);
arg_buffer[2] = kont39721;
arg_buffer[3] = a3962239887;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40038 = encode_clo(alloc_clo(lam40038_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40046 = arg_buffer[1];
//reading env and args
void* kont39721 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar41012 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41012, "100", 10);
void* a3961639880 = encode_mpz(mpzvar41012);
mpz_t* mpzvar41013 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41013, "80", 10);
void* a3961739881 = encode_mpz(mpzvar41013);
mpz_t* mpzvar41014 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41014, "10", 10);
void* a3961839882 = encode_mpz(mpzvar41014);
mpz_t* mpzvar41015 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41015, "2", 10);
void* a3961939883 = encode_mpz(mpzvar41015);
mpz_t* mpzvar41016 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41016, "25", 10);
void* a3962039884 = encode_mpz(mpzvar41016);
mpz_t* mpzvar41017 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41017, "30", 10);
void* a3962139885 = encode_mpz(mpzvar41017);

//creating new closure instance
void** clo41019 = alloc_clo(lam40038_fptr, 2);

//setting env list
clo41019[1] = hash_u45count;
clo41019[2] = kont39721;
void* f3972239886 = encode_clo(clo41019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f3972239886;
arg_buffer[3] = a3961639880;
arg_buffer[4] = a3961739881;
arg_buffer[5] = a3961839882;
arg_buffer[6] = a3961939883;
arg_buffer[7] = a3962039884;
arg_buffer[8] = a3962139885;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam40047_fptr() // lam40047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40048 = arg_buffer[1];
//reading env and args
void* x3962339889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39723 = (decode_clo(env40048))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39723);
arg_buffer[2] = x3962339889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39723))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40047 = encode_clo(alloc_clo(lam40047_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40049 = arg_buffer[1];
//reading env and args
void* kont39723 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo41021 = alloc_clo(lam40047_fptr, 1);

//setting env list
clo41021[1] = kont39723;
void* f3972439888 = encode_clo(clo41021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f3972439888;
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

