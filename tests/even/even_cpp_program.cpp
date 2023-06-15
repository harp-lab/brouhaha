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
void* _31934 = arg_buffer[1];
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

void* kont3167631776 = prim_car(lst);
void* lst31777 = prim_cdr(lst);
void* x3159131778 = apply_prim__u43(lst31777);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3167631776);
arg_buffer[2] = x3159131778;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3167631776))[0]);
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
void* _31935 = arg_buffer[1];
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

void* kont3167831779 = prim_car(lst);
void* lst31780 = prim_cdr(lst);
void* x3159231781 = apply_prim__u45(lst31780);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3167831779);
arg_buffer[2] = x3159231781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3167831779))[0]);
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
void* _31936 = arg_buffer[1];
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

void* kont3168031782 = prim_car(lst);
void* lst31783 = prim_cdr(lst);
void* x3159331784 = apply_prim__u42(lst31783);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3168031782);
arg_buffer[2] = x3159331784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3168031782))[0]);
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
void* _31937 = arg_buffer[1];
//reading env and args
void* kont31682 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3159431785 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31682);
arg_buffer[2] = x3159431785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31682))[0]);
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

void* kont3168331786 = prim_car(lst);
void* lst31787 = prim_cdr(lst);
void* x3159531788 = apply_prim__u47(lst31787);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3168331786);
arg_buffer[2] = x3159531788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3168331786))[0]);
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

void* kont3168531789 = prim_car(lst);
void* lst31790 = prim_cdr(lst);
void* x3159631791 = apply_prim__u61(lst31790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3168531789);
arg_buffer[2] = x3159631791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3168531789))[0]);
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
void* _31940 = arg_buffer[1];
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

void* kont3168731792 = prim_car(lst);
void* lst31793 = prim_cdr(lst);
void* x3159731794 = apply_prim__u62(lst31793);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3168731792);
arg_buffer[2] = x3159731794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3168731792))[0]);
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

void* kont3168931795 = prim_car(lst);
void* lst31796 = prim_cdr(lst);
void* x3159831797 = apply_prim__u60(lst31796);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3168931795);
arg_buffer[2] = x3159831797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3168931795))[0]);
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

void* kont3169131798 = prim_car(lst);
void* lst31799 = prim_cdr(lst);
void* x3159931800 = apply_prim__u60_u61(lst31799);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3169131798);
arg_buffer[2] = x3159931800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3169131798))[0]);
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

void* kont3169331801 = prim_car(lst);
void* lst31802 = prim_cdr(lst);
void* x3160031803 = apply_prim__u62_u61(lst31802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3169331801);
arg_buffer[2] = x3160031803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3169331801))[0]);
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
void* _31944 = arg_buffer[1];
//reading env and args
void* kont31695 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3160131804 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31695);
arg_buffer[2] = x3160131804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31695))[0]);
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
void* _31945 = arg_buffer[1];
//reading env and args
void* kont31696 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3160231805 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31696);
arg_buffer[2] = x3160231805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31696))[0]);
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
void* _31946 = arg_buffer[1];
//reading env and args
void* kont31697 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3160331806 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31697);
arg_buffer[2] = x3160331806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31697))[0]);
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
void* _31947 = arg_buffer[1];
//reading env and args
void* kont31698 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3160431807 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31698);
arg_buffer[2] = x3160431807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31698))[0]);
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
void* _31948 = arg_buffer[1];
//reading env and args
void* kont31699 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3160531808 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31699);
arg_buffer[2] = x3160531808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31699))[0]);
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
void* _31949 = arg_buffer[1];
//reading env and args
void* kont31700 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3160631809 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31700);
arg_buffer[2] = x3160631809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31700))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam31950_fptr() // lam31950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31951 = arg_buffer[1];
//reading env and args
void* a3160931813 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env31951))[3];
//not do dummy comment
void* a3160731810 = (decode_clo(env31951))[2];
//not do dummy comment
void* kont31701 = (decode_clo(env31951))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont31701;
arg_buffer[3] = a3160731810;
arg_buffer[4] = a3160931813;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31950 = encode_clo(alloc_clo(lam31950_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31954 = arg_buffer[1];
//reading env and args
void* kont31701 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar32687 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32687, "0", 10);
void* a3160731810 = encode_mpz(mpzvar32687);
mpz_t* mpzvar32688 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32688, "2", 10);
void* a3160831811 = encode_mpz(mpzvar32688);

//creating new closure instance
void** clo32690 = alloc_clo(lam31950_fptr, 3);

//setting env list
clo32690[1] = kont31701;
clo32690[2] = a3160731810;
clo32690[3] = equal_u63;
void* f3170231812 = encode_clo(clo32690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3170231812;
arg_buffer[3] = x;
arg_buffer[4] = a3160831811;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam31955_fptr() // lam31955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31956 = arg_buffer[1];
//reading env and args
void* a3161231817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3161031814 = (decode_clo(env31956))[3];
//not do dummy comment
void* kont31703 = (decode_clo(env31956))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env31956))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont31703;
arg_buffer[3] = a3161031814;
arg_buffer[4] = a3161231817;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31955 = encode_clo(alloc_clo(lam31955_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31959 = arg_buffer[1];
//reading env and args
void* kont31703 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar32691 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32691, "1", 10);
void* a3161031814 = encode_mpz(mpzvar32691);
mpz_t* mpzvar32692 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32692, "2", 10);
void* a3161131815 = encode_mpz(mpzvar32692);

//creating new closure instance
void** clo32694 = alloc_clo(lam31955_fptr, 3);

//setting env list
clo32694[1] = equal_u63;
clo32694[2] = kont31703;
clo32694[3] = a3161031814;
void* f3170431816 = encode_clo(clo32694);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3170431816;
arg_buffer[3] = x;
arg_buffer[4] = a3161131815;
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
void* _31960 = arg_buffer[1];
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

void* kont3170531818 = prim_car(x);
void* x31819 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3170531818);
arg_buffer[2] = x31819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3170531818))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam31963_fptr() // lam31963 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31964 = arg_buffer[1];
//reading env and args
void* a3161831829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31707 = (decode_clo(env31964))[3];
//not do dummy comment
void* x = (decode_clo(env31964))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31964))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont31707;
arg_buffer[3] = x;
arg_buffer[4] = a3161831829;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31963 = encode_clo(alloc_clo(lam31963_fptr, 0));

void* lam31965_fptr() // lam31965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31966 = arg_buffer[1];
//reading env and args
void* a3161631826 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31966))[5];
//not do dummy comment
void* lst = (decode_clo(env31966))[4];
//not do dummy comment
void* kont31707 = (decode_clo(env31966))[3];
//not do dummy comment
void* x = (decode_clo(env31966))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31966))[1];

//if-clause
bool if_guard32695 = is_true(a3161631826);
if(if_guard32695)
{
void* x3161731827 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31707);
arg_buffer[2] = x3161731827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31707))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo32697 = alloc_clo(lam31963_fptr, 3);

//setting env list
clo32697[1] = member_u63;
clo32697[2] = x;
clo32697[3] = kont31707;
void* f3170831828 = encode_clo(clo32697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3170831828;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31965 = encode_clo(alloc_clo(lam31965_fptr, 0));

void* lam31967_fptr() // lam31967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31968 = arg_buffer[1];
//reading env and args
void* a3161531824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31968))[6];
//not do dummy comment
void* lst = (decode_clo(env31968))[5];
//not do dummy comment
void* kont31707 = (decode_clo(env31968))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env31968))[3];
//not do dummy comment
void* x = (decode_clo(env31968))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31968))[1];

//creating new closure instance
void** clo32699 = alloc_clo(lam31965_fptr, 5);

//setting env list
clo32699[1] = member_u63;
clo32699[2] = x;
clo32699[3] = kont31707;
clo32699[4] = lst;
clo32699[5] = cdr;
void* f3170931825 = encode_clo(clo32699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3170931825;
arg_buffer[3] = a3161531824;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31967 = encode_clo(alloc_clo(lam31967_fptr, 0));

void* lam31969_fptr() // lam31969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31970 = arg_buffer[1];
//reading env and args
void* a3161331821 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31970))[7];
//not do dummy comment
void* lst = (decode_clo(env31970))[6];
//not do dummy comment
void* kont31707 = (decode_clo(env31970))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env31970))[4];
//not do dummy comment
void* x = (decode_clo(env31970))[3];
//not do dummy comment
void* car = (decode_clo(env31970))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31970))[1];

//if-clause
bool if_guard32700 = is_true(a3161331821);
if(if_guard32700)
{
void* x3161431822 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31707);
arg_buffer[2] = x3161431822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31707))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo32702 = alloc_clo(lam31967_fptr, 6);

//setting env list
clo32702[1] = member_u63;
clo32702[2] = x;
clo32702[3] = equal_u63;
clo32702[4] = kont31707;
clo32702[5] = lst;
clo32702[6] = cdr;
void* f3171031823 = encode_clo(clo32702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3171031823;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31969 = encode_clo(alloc_clo(lam31969_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31971 = arg_buffer[1];
//reading env and args
void* kont31707 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo32704 = alloc_clo(lam31969_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo32704[1] = member_u63;
clo32704[2] = car;
clo32704[3] = x;
clo32704[4] = equal_u63;
clo32704[5] = kont31707;
clo32704[6] = lst;
clo32704[7] = cdr;
void* f3171131820 = encode_clo(clo32704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3171131820;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam31972_fptr() // lam31972 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31973 = arg_buffer[1];
//reading env and args
void* a3162231837 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3162131835 = (decode_clo(env31973))[4];
//not do dummy comment
void* foldl = (decode_clo(env31973))[3];
//not do dummy comment
void* kont31712 = (decode_clo(env31973))[2];
//not do dummy comment
void* fun = (decode_clo(env31973))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont31712;
arg_buffer[3] = fun;
arg_buffer[4] = a3162131835;
arg_buffer[5] = a3162231837;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31972 = encode_clo(alloc_clo(lam31972_fptr, 0));

void* lam31974_fptr() // lam31974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31975 = arg_buffer[1];
//reading env and args
void* a3162131835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31975))[5];
//not do dummy comment
void* lst = (decode_clo(env31975))[4];
//not do dummy comment
void* foldl = (decode_clo(env31975))[3];
//not do dummy comment
void* kont31712 = (decode_clo(env31975))[2];
//not do dummy comment
void* fun = (decode_clo(env31975))[1];

//creating new closure instance
void** clo32706 = alloc_clo(lam31972_fptr, 4);

//setting env list
clo32706[1] = fun;
clo32706[2] = kont31712;
clo32706[3] = foldl;
clo32706[4] = a3162131835;
void* f3171331836 = encode_clo(clo32706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3171331836;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31974 = encode_clo(alloc_clo(lam31974_fptr, 0));

void* lam31976_fptr() // lam31976 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31977 = arg_buffer[1];
//reading env and args
void* a3162031833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31977))[6];
//not do dummy comment
void* lst = (decode_clo(env31977))[5];
//not do dummy comment
void* acc = (decode_clo(env31977))[4];
//not do dummy comment
void* foldl = (decode_clo(env31977))[3];
//not do dummy comment
void* kont31712 = (decode_clo(env31977))[2];
//not do dummy comment
void* fun = (decode_clo(env31977))[1];

//creating new closure instance
void** clo32708 = alloc_clo(lam31974_fptr, 5);

//setting env list
clo32708[1] = fun;
clo32708[2] = kont31712;
clo32708[3] = foldl;
clo32708[4] = lst;
clo32708[5] = cdr;
void* f3171431834 = encode_clo(clo32708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3171431834;
arg_buffer[3] = a3162031833;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31976 = encode_clo(alloc_clo(lam31976_fptr, 0));

void* lam31978_fptr() // lam31978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31979 = arg_buffer[1];
//reading env and args
void* a3161931831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31979))[7];
//not do dummy comment
void* lst = (decode_clo(env31979))[6];
//not do dummy comment
void* acc = (decode_clo(env31979))[5];
//not do dummy comment
void* car = (decode_clo(env31979))[4];
//not do dummy comment
void* foldl = (decode_clo(env31979))[3];
//not do dummy comment
void* kont31712 = (decode_clo(env31979))[2];
//not do dummy comment
void* fun = (decode_clo(env31979))[1];

//if-clause
bool if_guard32709 = is_true(a3161931831);
if(if_guard32709)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31712);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31712))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo32711 = alloc_clo(lam31976_fptr, 6);

//setting env list
clo32711[1] = fun;
clo32711[2] = kont31712;
clo32711[3] = foldl;
clo32711[4] = acc;
clo32711[5] = lst;
clo32711[6] = cdr;
void* f3171531832 = encode_clo(clo32711);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3171531832;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31978 = encode_clo(alloc_clo(lam31978_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31980 = arg_buffer[1];
//reading env and args
void* kont31712 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo32713 = alloc_clo(lam31978_fptr, 7);

//setting env list
clo32713[1] = fun;
clo32713[2] = kont31712;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo32713[3] = foldl;
clo32713[4] = car;
clo32713[5] = acc;
clo32713[6] = lst;
clo32713[7] = cdr;
void* f3171631830 = encode_clo(clo32713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3171631830;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam31981_fptr() // lam31981 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31982 = arg_buffer[1];
//reading env and args
void* a3162631845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31982))[3];
//not do dummy comment
void* a3162431841 = (decode_clo(env31982))[2];
//not do dummy comment
void* kont31717 = (decode_clo(env31982))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont31717;
arg_buffer[3] = a3162431841;
arg_buffer[4] = a3162631845;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31981 = encode_clo(alloc_clo(lam31981_fptr, 0));

void* lam31983_fptr() // lam31983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31984 = arg_buffer[1];
//reading env and args
void* a3162531843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31984))[5];
//not do dummy comment
void* a3162431841 = (decode_clo(env31984))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31984))[3];
//not do dummy comment
void* cons = (decode_clo(env31984))[2];
//not do dummy comment
void* kont31717 = (decode_clo(env31984))[1];

//creating new closure instance
void** clo32715 = alloc_clo(lam31981_fptr, 3);

//setting env list
clo32715[1] = kont31717;
clo32715[2] = a3162431841;
clo32715[3] = reverse_u45helper;
void* f3171831844 = encode_clo(clo32715);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3171831844;
arg_buffer[3] = a3162531843;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31983 = encode_clo(alloc_clo(lam31983_fptr, 0));

void* lam31985_fptr() // lam31985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31986 = arg_buffer[1];
//reading env and args
void* a3162431841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31986))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31986))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31986))[4];
//not do dummy comment
void* car = (decode_clo(env31986))[3];
//not do dummy comment
void* cons = (decode_clo(env31986))[2];
//not do dummy comment
void* kont31717 = (decode_clo(env31986))[1];

//creating new closure instance
void** clo32717 = alloc_clo(lam31983_fptr, 5);

//setting env list
clo32717[1] = kont31717;
clo32717[2] = cons;
clo32717[3] = lst2;
clo32717[4] = a3162431841;
clo32717[5] = reverse_u45helper;
void* f3171931842 = encode_clo(clo32717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3171931842;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31985 = encode_clo(alloc_clo(lam31985_fptr, 0));

void* lam31987_fptr() // lam31987 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31988 = arg_buffer[1];
//reading env and args
void* a3162331839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31988))[7];
//not do dummy comment
void* lst = (decode_clo(env31988))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31988))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31988))[4];
//not do dummy comment
void* car = (decode_clo(env31988))[3];
//not do dummy comment
void* cons = (decode_clo(env31988))[2];
//not do dummy comment
void* kont31717 = (decode_clo(env31988))[1];

//if-clause
bool if_guard32718 = is_true(a3162331839);
if(if_guard32718)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31717);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31717))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo32720 = alloc_clo(lam31985_fptr, 6);

//setting env list
clo32720[1] = kont31717;
clo32720[2] = cons;
clo32720[3] = car;
clo32720[4] = lst2;
clo32720[5] = reverse_u45helper;
clo32720[6] = lst;
void* f3172031840 = encode_clo(clo32720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3172031840;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31987 = encode_clo(alloc_clo(lam31987_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31989 = arg_buffer[1];
//reading env and args
void* kont31717 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo32722 = alloc_clo(lam31987_fptr, 7);

//setting env list
clo32722[1] = kont31717;
clo32722[2] = cons;
clo32722[3] = car;
clo32722[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo32722[5] = reverse_u45helper;
clo32722[6] = lst;
clo32722[7] = cdr;
void* f3172131838 = encode_clo(clo32722);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3172131838;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam31990_fptr() // lam31990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31991 = arg_buffer[1];
//reading env and args
void* a3162731847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31991))[3];
//not do dummy comment
void* lst = (decode_clo(env31991))[2];
//not do dummy comment
void* kont31722 = (decode_clo(env31991))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont31722;
arg_buffer[3] = lst;
arg_buffer[4] = a3162731847;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31990 = encode_clo(alloc_clo(lam31990_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31992 = arg_buffer[1];
//reading env and args
void* kont31722 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo32724 = alloc_clo(lam31990_fptr, 3);

//setting env list
clo32724[1] = kont31722;
clo32724[2] = lst;
clo32724[3] = reverse_u45helper;
void* f3172331846 = encode_clo(clo32724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3172331846;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam31993_fptr() // lam31993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31994 = arg_buffer[1];
//reading env and args
void* x3163031852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31724 = (decode_clo(env31994))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31724);
arg_buffer[2] = x3163031852;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31724))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31993 = encode_clo(alloc_clo(lam31993_fptr, 0));

void* lam31995_fptr() // lam31995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31996 = arg_buffer[1];
//reading env and args
void* a3163531861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31724 = (decode_clo(env31996))[4];
//not do dummy comment
void* a3163131854 = (decode_clo(env31996))[3];
//not do dummy comment
void* a3163331857 = (decode_clo(env31996))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env31996))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont31724;
arg_buffer[3] = a3163131854;
arg_buffer[4] = a3163331857;
arg_buffer[5] = a3163531861;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31995 = encode_clo(alloc_clo(lam31995_fptr, 0));

void* lam31997_fptr() // lam31997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31998 = arg_buffer[1];
//reading env and args
void* a3163431859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31724 = (decode_clo(env31998))[6];
//not do dummy comment
void* a3163131854 = (decode_clo(env31998))[5];
//not do dummy comment
void* a3163331857 = (decode_clo(env31998))[4];
//not do dummy comment
void* cons = (decode_clo(env31998))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env31998))[2];
//not do dummy comment
void* lst2 = (decode_clo(env31998))[1];

//creating new closure instance
void** clo32726 = alloc_clo(lam31995_fptr, 4);

//setting env list
clo32726[1] = take_u45helper;
clo32726[2] = a3163331857;
clo32726[3] = a3163131854;
clo32726[4] = kont31724;
void* f3172631860 = encode_clo(clo32726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3172631860;
arg_buffer[3] = a3163431859;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31997 = encode_clo(alloc_clo(lam31997_fptr, 0));

void* lam31999_fptr() // lam31999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32000 = arg_buffer[1];
//reading env and args
void* a3163331857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env32000))[7];
//not do dummy comment
void* kont31724 = (decode_clo(env32000))[6];
//not do dummy comment
void* a3163131854 = (decode_clo(env32000))[5];
//not do dummy comment
void* car = (decode_clo(env32000))[4];
//not do dummy comment
void* cons = (decode_clo(env32000))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env32000))[2];
//not do dummy comment
void* lst2 = (decode_clo(env32000))[1];

//creating new closure instance
void** clo32728 = alloc_clo(lam31997_fptr, 6);

//setting env list
clo32728[1] = lst2;
clo32728[2] = take_u45helper;
clo32728[3] = cons;
clo32728[4] = a3163331857;
clo32728[5] = a3163131854;
clo32728[6] = kont31724;
void* f3172731858 = encode_clo(clo32728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3172731858;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31999 = encode_clo(alloc_clo(lam31999_fptr, 0));

void* lam32002_fptr() // lam32002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32003 = arg_buffer[1];
//reading env and args
void* a3163131854 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env32003))[8];
//not do dummy comment
void* kont31724 = (decode_clo(env32003))[7];
//not do dummy comment
void* cons = (decode_clo(env32003))[6];
//not do dummy comment
void* _u45 = (decode_clo(env32003))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env32003))[4];
//not do dummy comment
void* lst2 = (decode_clo(env32003))[3];
//not do dummy comment
void* n = (decode_clo(env32003))[2];
//not do dummy comment
void* car = (decode_clo(env32003))[1];
mpz_t* mpzvar32729 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32729, "1", 10);
void* a3163231855 = encode_mpz(mpzvar32729);

//creating new closure instance
void** clo32731 = alloc_clo(lam31999_fptr, 7);

//setting env list
clo32731[1] = lst2;
clo32731[2] = take_u45helper;
clo32731[3] = cons;
clo32731[4] = car;
clo32731[5] = a3163131854;
clo32731[6] = kont31724;
clo32731[7] = lst;
void* f3172831856 = encode_clo(clo32731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3172831856;
arg_buffer[3] = n;
arg_buffer[4] = a3163231855;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32002 = encode_clo(alloc_clo(lam32002_fptr, 0));

void* lam32004_fptr() // lam32004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32005 = arg_buffer[1];
//reading env and args
void* a3162931850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32005))[10];
//not do dummy comment
void* lst = (decode_clo(env32005))[9];
//not do dummy comment
void* kont31724 = (decode_clo(env32005))[8];
//not do dummy comment
void* reverse = (decode_clo(env32005))[7];
//not do dummy comment
void* cons = (decode_clo(env32005))[6];
//not do dummy comment
void* _u45 = (decode_clo(env32005))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env32005))[4];
//not do dummy comment
void* lst2 = (decode_clo(env32005))[3];
//not do dummy comment
void* n = (decode_clo(env32005))[2];
//not do dummy comment
void* car = (decode_clo(env32005))[1];

//if-clause
bool if_guard32732 = is_true(a3162931850);
if(if_guard32732)
{

//creating new closure instance
void** clo32734 = alloc_clo(lam31993_fptr, 1);

//setting env list
clo32734[1] = kont31724;
void* f3172531851 = encode_clo(clo32734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3172531851;
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
void** clo32736 = alloc_clo(lam32002_fptr, 8);

//setting env list
clo32736[1] = car;
clo32736[2] = n;
clo32736[3] = lst2;
clo32736[4] = take_u45helper;
clo32736[5] = _u45;
clo32736[6] = cons;
clo32736[7] = kont31724;
clo32736[8] = lst;
void* f3172931853 = encode_clo(clo32736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3172931853;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32004 = encode_clo(alloc_clo(lam32004_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32007 = arg_buffer[1];
//reading env and args
void* kont31724 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar32737 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32737, "0", 10);
void* a3162831848 = encode_mpz(mpzvar32737);

//creating new closure instance
void** clo32739 = alloc_clo(lam32004_fptr, 10);

//setting env list
clo32739[1] = car;
clo32739[2] = n;
clo32739[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo32739[4] = take_u45helper;
clo32739[5] = _u45;
clo32739[6] = cons;
clo32739[7] = reverse;
clo32739[8] = kont31724;
clo32739[9] = lst;
clo32739[10] = cdr;
void* f3173031849 = encode_clo(clo32739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3173031849;
arg_buffer[3] = n;
arg_buffer[4] = a3162831848;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam32008_fptr() // lam32008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32009 = arg_buffer[1];
//reading env and args
void* a3163631863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env32009))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env32009))[3];
//not do dummy comment
void* kont31731 = (decode_clo(env32009))[2];
//not do dummy comment
void* n = (decode_clo(env32009))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont31731;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3163631863;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32008 = encode_clo(alloc_clo(lam32008_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32010 = arg_buffer[1];
//reading env and args
void* kont31731 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo32741 = alloc_clo(lam32008_fptr, 4);

//setting env list
clo32741[1] = n;
clo32741[2] = kont31731;
clo32741[3] = take_u45helper;
clo32741[4] = lst;
void* f3173231862 = encode_clo(clo32741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3173231862;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam32012_fptr() // lam32012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32013 = arg_buffer[1];
//reading env and args
void* a3164131871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3163931867 = (decode_clo(env32013))[3];
//not do dummy comment
void* _u43 = (decode_clo(env32013))[2];
//not do dummy comment
void* kont31733 = (decode_clo(env32013))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont31733;
arg_buffer[3] = a3163931867;
arg_buffer[4] = a3164131871;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32012 = encode_clo(alloc_clo(lam32012_fptr, 0));

void* lam32014_fptr() // lam32014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32015 = arg_buffer[1];
//reading env and args
void* a3164031869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env32015))[4];
//not do dummy comment
void* kont31733 = (decode_clo(env32015))[3];
//not do dummy comment
void* a3163931867 = (decode_clo(env32015))[2];
//not do dummy comment
void* length = (decode_clo(env32015))[1];

//creating new closure instance
void** clo32743 = alloc_clo(lam32012_fptr, 3);

//setting env list
clo32743[1] = kont31733;
clo32743[2] = _u43;
clo32743[3] = a3163931867;
void* f3173431870 = encode_clo(clo32743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3173431870;
arg_buffer[3] = a3164031869;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32014 = encode_clo(alloc_clo(lam32014_fptr, 0));

void* lam32017_fptr() // lam32017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32018 = arg_buffer[1];
//reading env and args
void* a3163731865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32018))[5];
//not do dummy comment
void* lst = (decode_clo(env32018))[4];
//not do dummy comment
void* length = (decode_clo(env32018))[3];
//not do dummy comment
void* _u43 = (decode_clo(env32018))[2];
//not do dummy comment
void* kont31733 = (decode_clo(env32018))[1];

//if-clause
bool if_guard32744 = is_true(a3163731865);
if(if_guard32744)
{
mpz_t* mpzvar32745 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32745, "0", 10);
void* x3163831866 = encode_mpz(mpzvar32745);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31733);
arg_buffer[2] = x3163831866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31733))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar32746 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32746, "1", 10);
void* a3163931867 = encode_mpz(mpzvar32746);

//creating new closure instance
void** clo32748 = alloc_clo(lam32014_fptr, 4);

//setting env list
clo32748[1] = length;
clo32748[2] = a3163931867;
clo32748[3] = kont31733;
clo32748[4] = _u43;
void* f3173531868 = encode_clo(clo32748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3173531868;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32017 = encode_clo(alloc_clo(lam32017_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32019 = arg_buffer[1];
//reading env and args
void* kont31733 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo32750 = alloc_clo(lam32017_fptr, 5);

//setting env list
clo32750[1] = kont31733;
clo32750[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo32750[3] = length;
clo32750[4] = lst;
clo32750[5] = cdr;
void* f3173631864 = encode_clo(clo32750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3173631864;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam32020_fptr() // lam32020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32021 = arg_buffer[1];
//reading env and args
void* x3164331875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31737 = (decode_clo(env32021))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31737);
arg_buffer[2] = x3164331875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31737))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32020 = encode_clo(alloc_clo(lam32020_fptr, 0));

void* lam32022_fptr() // lam32022 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32023 = arg_buffer[1];
//reading env and args
void* a3164731883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3164531879 = (decode_clo(env32023))[3];
//not do dummy comment
void* kont31737 = (decode_clo(env32023))[2];
//not do dummy comment
void* cons = (decode_clo(env32023))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31737;
arg_buffer[3] = a3164531879;
arg_buffer[4] = a3164731883;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32022 = encode_clo(alloc_clo(lam32022_fptr, 0));

void* lam32024_fptr() // lam32024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32025 = arg_buffer[1];
//reading env and args
void* a3164631881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3164531879 = (decode_clo(env32025))[5];
//not do dummy comment
void* kont31737 = (decode_clo(env32025))[4];
//not do dummy comment
void* map = (decode_clo(env32025))[3];
//not do dummy comment
void* proc = (decode_clo(env32025))[2];
//not do dummy comment
void* cons = (decode_clo(env32025))[1];

//creating new closure instance
void** clo32752 = alloc_clo(lam32022_fptr, 3);

//setting env list
clo32752[1] = cons;
clo32752[2] = kont31737;
clo32752[3] = a3164531879;
void* f3173931882 = encode_clo(clo32752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3173931882;
arg_buffer[3] = proc;
arg_buffer[4] = a3164631881;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32024 = encode_clo(alloc_clo(lam32024_fptr, 0));

void* lam32026_fptr() // lam32026 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32027 = arg_buffer[1];
//reading env and args
void* a3164531879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32027))[6];
//not do dummy comment
void* kont31737 = (decode_clo(env32027))[5];
//not do dummy comment
void* lst = (decode_clo(env32027))[4];
//not do dummy comment
void* map = (decode_clo(env32027))[3];
//not do dummy comment
void* proc = (decode_clo(env32027))[2];
//not do dummy comment
void* cons = (decode_clo(env32027))[1];

//creating new closure instance
void** clo32754 = alloc_clo(lam32024_fptr, 5);

//setting env list
clo32754[1] = cons;
clo32754[2] = proc;
clo32754[3] = map;
clo32754[4] = kont31737;
clo32754[5] = a3164531879;
void* f3174031880 = encode_clo(clo32754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3174031880;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32026 = encode_clo(alloc_clo(lam32026_fptr, 0));

void* lam32028_fptr() // lam32028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32029 = arg_buffer[1];
//reading env and args
void* a3164431877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32029))[6];
//not do dummy comment
void* kont31737 = (decode_clo(env32029))[5];
//not do dummy comment
void* lst = (decode_clo(env32029))[4];
//not do dummy comment
void* map = (decode_clo(env32029))[3];
//not do dummy comment
void* proc = (decode_clo(env32029))[2];
//not do dummy comment
void* cons = (decode_clo(env32029))[1];

//creating new closure instance
void** clo32756 = alloc_clo(lam32026_fptr, 6);

//setting env list
clo32756[1] = cons;
clo32756[2] = proc;
clo32756[3] = map;
clo32756[4] = lst;
clo32756[5] = kont31737;
clo32756[6] = cdr;
void* f3174131878 = encode_clo(clo32756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3174131878;
arg_buffer[3] = a3164431877;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32028 = encode_clo(alloc_clo(lam32028_fptr, 0));

void* lam32030_fptr() // lam32030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32031 = arg_buffer[1];
//reading env and args
void* a3164231873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31737 = (decode_clo(env32031))[8];
//not do dummy comment
void* lst = (decode_clo(env32031))[7];
//not do dummy comment
void* map = (decode_clo(env32031))[6];
//not do dummy comment
void* proc = (decode_clo(env32031))[5];
//not do dummy comment
void* car = (decode_clo(env32031))[4];
//not do dummy comment
void* cons = (decode_clo(env32031))[3];
//not do dummy comment
void* list = (decode_clo(env32031))[2];
//not do dummy comment
void* cdr = (decode_clo(env32031))[1];

//if-clause
bool if_guard32757 = is_true(a3164231873);
if(if_guard32757)
{

//creating new closure instance
void** clo32759 = alloc_clo(lam32020_fptr, 1);

//setting env list
clo32759[1] = kont31737;
void* f3173831874 = encode_clo(clo32759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3173831874;
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
void** clo32761 = alloc_clo(lam32028_fptr, 6);

//setting env list
clo32761[1] = cons;
clo32761[2] = proc;
clo32761[3] = map;
clo32761[4] = lst;
clo32761[5] = kont31737;
clo32761[6] = cdr;
void* f3174231876 = encode_clo(clo32761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3174231876;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32030 = encode_clo(alloc_clo(lam32030_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32032 = arg_buffer[1];
//reading env and args
void* kont31737 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo32763 = alloc_clo(lam32030_fptr, 8);

//setting env list
clo32763[1] = cdr;
clo32763[2] = list;
clo32763[3] = cons;
clo32763[4] = car;
clo32763[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo32763[6] = map;
clo32763[7] = lst;
clo32763[8] = kont31737;
void* f3174331872 = encode_clo(clo32763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3174331872;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam32033_fptr() // lam32033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32034 = arg_buffer[1];
//reading env and args
void* x3164931887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31744 = (decode_clo(env32034))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31744);
arg_buffer[2] = x3164931887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31744))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32033 = encode_clo(alloc_clo(lam32033_fptr, 0));

void* lam32035_fptr() // lam32035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32036 = arg_buffer[1];
//reading env and args
void* a3165431897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31744 = (decode_clo(env32036))[3];
//not do dummy comment
void* cons = (decode_clo(env32036))[2];
//not do dummy comment
void* a3165231893 = (decode_clo(env32036))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31744;
arg_buffer[3] = a3165231893;
arg_buffer[4] = a3165431897;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32035 = encode_clo(alloc_clo(lam32035_fptr, 0));

void* lam32037_fptr() // lam32037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32038 = arg_buffer[1];
//reading env and args
void* a3165331895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env32038))[5];
//not do dummy comment
void* kont31744 = (decode_clo(env32038))[4];
//not do dummy comment
void* filter = (decode_clo(env32038))[3];
//not do dummy comment
void* cons = (decode_clo(env32038))[2];
//not do dummy comment
void* a3165231893 = (decode_clo(env32038))[1];

//creating new closure instance
void** clo32765 = alloc_clo(lam32035_fptr, 3);

//setting env list
clo32765[1] = a3165231893;
clo32765[2] = cons;
clo32765[3] = kont31744;
void* f3174631896 = encode_clo(clo32765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3174631896;
arg_buffer[3] = op;
arg_buffer[4] = a3165331895;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32037 = encode_clo(alloc_clo(lam32037_fptr, 0));

void* lam32039_fptr() // lam32039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32040 = arg_buffer[1];
//reading env and args
void* a3165231893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32040))[6];
//not do dummy comment
void* lst = (decode_clo(env32040))[5];
//not do dummy comment
void* op = (decode_clo(env32040))[4];
//not do dummy comment
void* kont31744 = (decode_clo(env32040))[3];
//not do dummy comment
void* filter = (decode_clo(env32040))[2];
//not do dummy comment
void* cons = (decode_clo(env32040))[1];

//creating new closure instance
void** clo32767 = alloc_clo(lam32037_fptr, 5);

//setting env list
clo32767[1] = a3165231893;
clo32767[2] = cons;
clo32767[3] = filter;
clo32767[4] = kont31744;
clo32767[5] = op;
void* f3174731894 = encode_clo(clo32767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3174731894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32039 = encode_clo(alloc_clo(lam32039_fptr, 0));

void* lam32041_fptr() // lam32041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32042 = arg_buffer[1];
//reading env and args
void* a3165531899 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env32042))[3];
//not do dummy comment
void* kont31744 = (decode_clo(env32042))[2];
//not do dummy comment
void* filter = (decode_clo(env32042))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont31744;
arg_buffer[3] = op;
arg_buffer[4] = a3165531899;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32041 = encode_clo(alloc_clo(lam32041_fptr, 0));

void* lam32043_fptr() // lam32043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32044 = arg_buffer[1];
//reading env and args
void* a3165131891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32044))[7];
//not do dummy comment
void* lst = (decode_clo(env32044))[6];
//not do dummy comment
void* op = (decode_clo(env32044))[5];
//not do dummy comment
void* kont31744 = (decode_clo(env32044))[4];
//not do dummy comment
void* cons = (decode_clo(env32044))[3];
//not do dummy comment
void* filter = (decode_clo(env32044))[2];
//not do dummy comment
void* car = (decode_clo(env32044))[1];

//if-clause
bool if_guard32768 = is_true(a3165131891);
if(if_guard32768)
{

//creating new closure instance
void** clo32770 = alloc_clo(lam32039_fptr, 6);

//setting env list
clo32770[1] = cons;
clo32770[2] = filter;
clo32770[3] = kont31744;
clo32770[4] = op;
clo32770[5] = lst;
clo32770[6] = cdr;
void* f3174831892 = encode_clo(clo32770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3174831892;
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
void** clo32772 = alloc_clo(lam32041_fptr, 3);

//setting env list
clo32772[1] = filter;
clo32772[2] = kont31744;
clo32772[3] = op;
void* f3174931898 = encode_clo(clo32772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3174931898;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32043 = encode_clo(alloc_clo(lam32043_fptr, 0));

void* lam32045_fptr() // lam32045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32046 = arg_buffer[1];
//reading env and args
void* a3165031889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32046))[7];
//not do dummy comment
void* lst = (decode_clo(env32046))[6];
//not do dummy comment
void* op = (decode_clo(env32046))[5];
//not do dummy comment
void* kont31744 = (decode_clo(env32046))[4];
//not do dummy comment
void* cons = (decode_clo(env32046))[3];
//not do dummy comment
void* filter = (decode_clo(env32046))[2];
//not do dummy comment
void* car = (decode_clo(env32046))[1];

//creating new closure instance
void** clo32774 = alloc_clo(lam32043_fptr, 7);

//setting env list
clo32774[1] = car;
clo32774[2] = filter;
clo32774[3] = cons;
clo32774[4] = kont31744;
clo32774[5] = op;
clo32774[6] = lst;
clo32774[7] = cdr;
void* f3175031890 = encode_clo(clo32774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3175031890;
arg_buffer[3] = a3165031889;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32045 = encode_clo(alloc_clo(lam32045_fptr, 0));

void* lam32047_fptr() // lam32047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32048 = arg_buffer[1];
//reading env and args
void* a3164831885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env32048))[8];
//not do dummy comment
void* op = (decode_clo(env32048))[7];
//not do dummy comment
void* kont31744 = (decode_clo(env32048))[6];
//not do dummy comment
void* cons = (decode_clo(env32048))[5];
//not do dummy comment
void* list = (decode_clo(env32048))[4];
//not do dummy comment
void* cdr = (decode_clo(env32048))[3];
//not do dummy comment
void* filter = (decode_clo(env32048))[2];
//not do dummy comment
void* car = (decode_clo(env32048))[1];

//if-clause
bool if_guard32775 = is_true(a3164831885);
if(if_guard32775)
{

//creating new closure instance
void** clo32777 = alloc_clo(lam32033_fptr, 1);

//setting env list
clo32777[1] = kont31744;
void* f3174531886 = encode_clo(clo32777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3174531886;
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
void** clo32779 = alloc_clo(lam32045_fptr, 7);

//setting env list
clo32779[1] = car;
clo32779[2] = filter;
clo32779[3] = cons;
clo32779[4] = kont31744;
clo32779[5] = op;
clo32779[6] = lst;
clo32779[7] = cdr;
void* f3175131888 = encode_clo(clo32779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3175131888;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32047 = encode_clo(alloc_clo(lam32047_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32049 = arg_buffer[1];
//reading env and args
void* kont31744 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo32781 = alloc_clo(lam32047_fptr, 8);

//setting env list
clo32781[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo32781[2] = filter;
clo32781[3] = cdr;
clo32781[4] = list;
clo32781[5] = cons;
clo32781[6] = kont31744;
clo32781[7] = op;
clo32781[8] = lst;
void* f3175231884 = encode_clo(clo32781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3175231884;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam32050_fptr() // lam32050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32051 = arg_buffer[1];
//reading env and args
void* a3166031907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31753 = (decode_clo(env32051))[3];
//not do dummy comment
void* drop = (decode_clo(env32051))[2];
//not do dummy comment
void* a3165831904 = (decode_clo(env32051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont31753;
arg_buffer[3] = a3165831904;
arg_buffer[4] = a3166031907;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32050 = encode_clo(alloc_clo(lam32050_fptr, 0));

void* lam32053_fptr() // lam32053 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32054 = arg_buffer[1];
//reading env and args
void* a3165831904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31753 = (decode_clo(env32054))[4];
//not do dummy comment
void* drop = (decode_clo(env32054))[3];
//not do dummy comment
void* n = (decode_clo(env32054))[2];
//not do dummy comment
void* _u45 = (decode_clo(env32054))[1];
mpz_t* mpzvar32782 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32782, "1", 10);
void* a3165931905 = encode_mpz(mpzvar32782);

//creating new closure instance
void** clo32784 = alloc_clo(lam32050_fptr, 3);

//setting env list
clo32784[1] = a3165831904;
clo32784[2] = drop;
clo32784[3] = kont31753;
void* f3175431906 = encode_clo(clo32784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3175431906;
arg_buffer[3] = n;
arg_buffer[4] = a3165931905;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32053 = encode_clo(alloc_clo(lam32053_fptr, 0));

void* lam32055_fptr() // lam32055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32056 = arg_buffer[1];
//reading env and args
void* a3165731902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32056))[6];
//not do dummy comment
void* kont31753 = (decode_clo(env32056))[5];
//not do dummy comment
void* n = (decode_clo(env32056))[4];
//not do dummy comment
void* _u45 = (decode_clo(env32056))[3];
//not do dummy comment
void* lst = (decode_clo(env32056))[2];
//not do dummy comment
void* drop = (decode_clo(env32056))[1];

//if-clause
bool if_guard32785 = is_true(a3165731902);
if(if_guard32785)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31753);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31753))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo32787 = alloc_clo(lam32053_fptr, 4);

//setting env list
clo32787[1] = _u45;
clo32787[2] = n;
clo32787[3] = drop;
clo32787[4] = kont31753;
void* f3175531903 = encode_clo(clo32787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3175531903;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32055 = encode_clo(alloc_clo(lam32055_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32058 = arg_buffer[1];
//reading env and args
void* kont31753 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar32788 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32788, "0", 10);
void* a3165631900 = encode_mpz(mpzvar32788);

//creating new closure instance
void** clo32790 = alloc_clo(lam32055_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo32790[1] = drop;
clo32790[2] = lst;
clo32790[3] = _u45;
clo32790[4] = n;
clo32790[5] = kont31753;
clo32790[6] = cdr;
void* f3175631901 = encode_clo(clo32790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3175631901;
arg_buffer[3] = n;
arg_buffer[4] = a3165631900;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam32059_fptr() // lam32059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32060 = arg_buffer[1];
//reading env and args
void* a3166431915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3166231911 = (decode_clo(env32060))[3];
//not do dummy comment
void* kont31757 = (decode_clo(env32060))[2];
//not do dummy comment
void* proc = (decode_clo(env32060))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont31757;
arg_buffer[3] = a3166231911;
arg_buffer[4] = a3166431915;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32059 = encode_clo(alloc_clo(lam32059_fptr, 0));

void* lam32061_fptr() // lam32061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32062 = arg_buffer[1];
//reading env and args
void* a3166331913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3166231911 = (decode_clo(env32062))[5];
//not do dummy comment
void* foldr = (decode_clo(env32062))[4];
//not do dummy comment
void* kont31757 = (decode_clo(env32062))[3];
//not do dummy comment
void* proc = (decode_clo(env32062))[2];
//not do dummy comment
void* acc = (decode_clo(env32062))[1];

//creating new closure instance
void** clo32792 = alloc_clo(lam32059_fptr, 3);

//setting env list
clo32792[1] = proc;
clo32792[2] = kont31757;
clo32792[3] = a3166231911;
void* f3175831914 = encode_clo(clo32792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3175831914;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3166331913;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32061 = encode_clo(alloc_clo(lam32061_fptr, 0));

void* lam32063_fptr() // lam32063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32064 = arg_buffer[1];
//reading env and args
void* a3166231911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32064))[6];
//not do dummy comment
void* kont31757 = (decode_clo(env32064))[5];
//not do dummy comment
void* foldr = (decode_clo(env32064))[4];
//not do dummy comment
void* lst = (decode_clo(env32064))[3];
//not do dummy comment
void* proc = (decode_clo(env32064))[2];
//not do dummy comment
void* acc = (decode_clo(env32064))[1];

//creating new closure instance
void** clo32794 = alloc_clo(lam32061_fptr, 5);

//setting env list
clo32794[1] = acc;
clo32794[2] = proc;
clo32794[3] = kont31757;
clo32794[4] = foldr;
clo32794[5] = a3166231911;
void* f3175931912 = encode_clo(clo32794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3175931912;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32063 = encode_clo(alloc_clo(lam32063_fptr, 0));

void* lam32065_fptr() // lam32065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32066 = arg_buffer[1];
//reading env and args
void* a3166131909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32066))[7];
//not do dummy comment
void* kont31757 = (decode_clo(env32066))[6];
//not do dummy comment
void* car = (decode_clo(env32066))[5];
//not do dummy comment
void* foldr = (decode_clo(env32066))[4];
//not do dummy comment
void* lst = (decode_clo(env32066))[3];
//not do dummy comment
void* proc = (decode_clo(env32066))[2];
//not do dummy comment
void* acc = (decode_clo(env32066))[1];

//if-clause
bool if_guard32795 = is_true(a3166131909);
if(if_guard32795)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31757);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31757))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo32797 = alloc_clo(lam32063_fptr, 6);

//setting env list
clo32797[1] = acc;
clo32797[2] = proc;
clo32797[3] = lst;
clo32797[4] = foldr;
clo32797[5] = kont31757;
clo32797[6] = cdr;
void* f3176031910 = encode_clo(clo32797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3176031910;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32065 = encode_clo(alloc_clo(lam32065_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32067 = arg_buffer[1];
//reading env and args
void* kont31757 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo32799 = alloc_clo(lam32065_fptr, 7);

//setting env list
clo32799[1] = acc;
clo32799[2] = proc;
clo32799[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo32799[4] = foldr;
clo32799[5] = car;
clo32799[6] = kont31757;
clo32799[7] = cdr;
void* f3176131908 = encode_clo(clo32799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3176131908;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam32068_fptr() // lam32068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32069 = arg_buffer[1];
//reading env and args
void* a3166831923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3166631919 = (decode_clo(env32069))[3];
//not do dummy comment
void* kont31762 = (decode_clo(env32069))[2];
//not do dummy comment
void* cons = (decode_clo(env32069))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31762;
arg_buffer[3] = a3166631919;
arg_buffer[4] = a3166831923;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32068 = encode_clo(alloc_clo(lam32068_fptr, 0));

void* lam32070_fptr() // lam32070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32071 = arg_buffer[1];
//reading env and args
void* a3166731921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env32071))[5];
//not do dummy comment
void* a3166631919 = (decode_clo(env32071))[4];
//not do dummy comment
void* cons = (decode_clo(env32071))[3];
//not do dummy comment
void* kont31762 = (decode_clo(env32071))[2];
//not do dummy comment
void* lst2 = (decode_clo(env32071))[1];

//creating new closure instance
void** clo32801 = alloc_clo(lam32068_fptr, 3);

//setting env list
clo32801[1] = cons;
clo32801[2] = kont31762;
clo32801[3] = a3166631919;
void* f3176331922 = encode_clo(clo32801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3176331922;
arg_buffer[3] = a3166731921;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32070 = encode_clo(alloc_clo(lam32070_fptr, 0));

void* lam32072_fptr() // lam32072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32073 = arg_buffer[1];
//reading env and args
void* a3166631919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32073))[6];
//not do dummy comment
void* append = (decode_clo(env32073))[5];
//not do dummy comment
void* lst1 = (decode_clo(env32073))[4];
//not do dummy comment
void* cons = (decode_clo(env32073))[3];
//not do dummy comment
void* kont31762 = (decode_clo(env32073))[2];
//not do dummy comment
void* lst2 = (decode_clo(env32073))[1];

//creating new closure instance
void** clo32803 = alloc_clo(lam32070_fptr, 5);

//setting env list
clo32803[1] = lst2;
clo32803[2] = kont31762;
clo32803[3] = cons;
clo32803[4] = a3166631919;
clo32803[5] = append;
void* f3176431920 = encode_clo(clo32803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3176431920;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32072 = encode_clo(alloc_clo(lam32072_fptr, 0));

void* lam32074_fptr() // lam32074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32075 = arg_buffer[1];
//reading env and args
void* a3166531917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env32075))[7];
//not do dummy comment
void* append = (decode_clo(env32075))[6];
//not do dummy comment
void* cons = (decode_clo(env32075))[5];
//not do dummy comment
void* kont31762 = (decode_clo(env32075))[4];
//not do dummy comment
void* lst2 = (decode_clo(env32075))[3];
//not do dummy comment
void* lst1 = (decode_clo(env32075))[2];
//not do dummy comment
void* car = (decode_clo(env32075))[1];

//if-clause
bool if_guard32804 = is_true(a3166531917);
if(if_guard32804)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31762);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31762))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo32806 = alloc_clo(lam32072_fptr, 6);

//setting env list
clo32806[1] = lst2;
clo32806[2] = kont31762;
clo32806[3] = cons;
clo32806[4] = lst1;
clo32806[5] = append;
clo32806[6] = cdr;
void* f3176531918 = encode_clo(clo32806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3176531918;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam32074 = encode_clo(alloc_clo(lam32074_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32076 = arg_buffer[1];
//reading env and args
void* kont31762 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo32808 = alloc_clo(lam32074_fptr, 7);

//setting env list
clo32808[1] = car;
clo32808[2] = lst1;
clo32808[3] = lst2;
clo32808[4] = kont31762;
clo32808[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo32808[6] = append;
clo32808[7] = cdr;
void* f3176631916 = encode_clo(clo32808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3176631916;
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
void* _32077 = arg_buffer[1];
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

void* kont3176731924 = prim_car(lst);
void* lst31925 = prim_cdr(lst);
void* x3166931926 = apply_prim_hash(lst31925);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3176731924);
arg_buffer[2] = x3166931926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3176731924))[0]);
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
void* _32078 = arg_buffer[1];
//reading env and args
void* kont31769 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3167031927 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31769);
arg_buffer[2] = x3167031927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31769))[0]);
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
void* _32079 = arg_buffer[1];
//reading env and args
void* kont31770 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3167131928 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31770);
arg_buffer[2] = x3167131928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31770))[0]);
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
void* _32080 = arg_buffer[1];
//reading env and args
void* kont31771 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3167231929 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31771);
arg_buffer[2] = x3167231929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31771))[0]);
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
void* _32081 = arg_buffer[1];
//reading env and args
void* kont31772 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3167331930 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31772);
arg_buffer[2] = x3167331930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31772))[0]);
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
void* _32083 = arg_buffer[1];
//reading env and args
void* kont31773 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar32809 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar32809, "5", 10);
void* a3167431931 = encode_mpz(mpzvar32809);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont31773;
arg_buffer[3] = a3167431931;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam32084_fptr() // lam32084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env32085 = arg_buffer[1];
//reading env and args
void* x3167531933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31774 = (decode_clo(env32085))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31774);
arg_buffer[2] = x3167531933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31774))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam32084 = encode_clo(alloc_clo(lam32084_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _32086 = arg_buffer[1];
//reading env and args
void* kont31774 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo32811 = alloc_clo(lam32084_fptr, 1);

//setting env list
clo32811[1] = kont31774;
void* f3177531932 = encode_clo(clo32811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f3177531932;
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

