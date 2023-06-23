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
void* _126926 = arg_buffer[1];
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

void* kont126667126767 = prim_car(lst);
void* lst126768 = prim_cdr(lst);
void* x126583126769 = apply_prim__u43(lst126768);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126667126767);
arg_buffer[2] = x126583126769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126667126767))[0]);
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
void* _126927 = arg_buffer[1];
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

void* kont126669126770 = prim_car(lst);
void* lst126771 = prim_cdr(lst);
void* x126584126772 = apply_prim__u45(lst126771);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126669126770);
arg_buffer[2] = x126584126772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126669126770))[0]);
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
void* _126928 = arg_buffer[1];
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

void* kont126671126773 = prim_car(lst);
void* lst126774 = prim_cdr(lst);
void* x126585126775 = apply_prim__u42(lst126774);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126671126773);
arg_buffer[2] = x126585126775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126671126773))[0]);
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
void* _126929 = arg_buffer[1];
//reading env and args
void* kont126673 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x126586126776 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126673);
arg_buffer[2] = x126586126776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126673))[0]);
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
void* _126930 = arg_buffer[1];
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

void* kont126674126777 = prim_car(lst);
void* lst126778 = prim_cdr(lst);
void* x126587126779 = apply_prim__u47(lst126778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126674126777);
arg_buffer[2] = x126587126779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126674126777))[0]);
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
void* _126931 = arg_buffer[1];
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

void* kont126676126780 = prim_car(lst);
void* lst126781 = prim_cdr(lst);
void* x126588126782 = apply_prim__u61(lst126781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126676126780);
arg_buffer[2] = x126588126782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126676126780))[0]);
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
void* _126932 = arg_buffer[1];
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

void* kont126678126783 = prim_car(lst);
void* lst126784 = prim_cdr(lst);
void* x126589126785 = apply_prim__u62(lst126784);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126678126783);
arg_buffer[2] = x126589126785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126678126783))[0]);
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
void* _126933 = arg_buffer[1];
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

void* kont126680126786 = prim_car(lst);
void* lst126787 = prim_cdr(lst);
void* x126590126788 = apply_prim__u60(lst126787);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126680126786);
arg_buffer[2] = x126590126788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126680126786))[0]);
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
void* _126934 = arg_buffer[1];
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

void* kont126682126789 = prim_car(lst);
void* lst126790 = prim_cdr(lst);
void* x126591126791 = apply_prim__u60_u61(lst126790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126682126789);
arg_buffer[2] = x126591126791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126682126789))[0]);
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
void* _126935 = arg_buffer[1];
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

void* kont126684126792 = prim_car(lst);
void* lst126793 = prim_cdr(lst);
void* x126592126794 = apply_prim__u62_u61(lst126793);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126684126792);
arg_buffer[2] = x126592126794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126684126792))[0]);
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
void* _126936 = arg_buffer[1];
//reading env and args
void* kont126686 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x126593126795 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126686);
arg_buffer[2] = x126593126795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126686))[0]);
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
void* _126937 = arg_buffer[1];
//reading env and args
void* kont126687 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x126594126796 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126687);
arg_buffer[2] = x126594126796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126687))[0]);
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
void* _126938 = arg_buffer[1];
//reading env and args
void* kont126688 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x126595126797 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126688);
arg_buffer[2] = x126595126797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126688))[0]);
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
void* _126939 = arg_buffer[1];
//reading env and args
void* kont126689 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x126596126798 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126689);
arg_buffer[2] = x126596126798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126689))[0]);
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
void* _126940 = arg_buffer[1];
//reading env and args
void* kont126690 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x126597126799 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126690);
arg_buffer[2] = x126597126799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126690))[0]);
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
void* _126941 = arg_buffer[1];
//reading env and args
void* kont126691 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x126598126800 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126691);
arg_buffer[2] = x126598126800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126691))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam126942_fptr() // lam126942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126943 = arg_buffer[1];
//reading env and args
void* a126601126804 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126599126801 = (decode_clo(env126943))[3];
//not do dummy comment
void* kont126692 = (decode_clo(env126943))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env126943))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont126692;
arg_buffer[3] = a126599126801;
arg_buffer[4] = a126601126804;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126942 = encode_clo(alloc_clo(lam126942_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _126946 = arg_buffer[1];
//reading env and args
void* kont126692 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar127080 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127080, "0", 10);
void* a126599126801 = encode_mpz(mpzvar127080);
mpz_t* mpzvar127081 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127081, "2", 10);
void* a126600126802 = encode_mpz(mpzvar127081);

//creating new closure instance
void** clo127083 = alloc_clo(lam126942_fptr, 3);

//setting env list
clo127083[1] = equal_u63;
clo127083[2] = kont126692;
clo127083[3] = a126599126801;
void* f126693126803 = encode_clo(clo127083);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f126693126803;
arg_buffer[3] = x;
arg_buffer[4] = a126600126802;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam126947_fptr() // lam126947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126948 = arg_buffer[1];
//reading env and args
void* a126604126808 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126602126805 = (decode_clo(env126948))[3];
//not do dummy comment
void* kont126694 = (decode_clo(env126948))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env126948))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont126694;
arg_buffer[3] = a126602126805;
arg_buffer[4] = a126604126808;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126947 = encode_clo(alloc_clo(lam126947_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _126951 = arg_buffer[1];
//reading env and args
void* kont126694 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar127084 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127084, "1", 10);
void* a126602126805 = encode_mpz(mpzvar127084);
mpz_t* mpzvar127085 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127085, "2", 10);
void* a126603126806 = encode_mpz(mpzvar127085);

//creating new closure instance
void** clo127087 = alloc_clo(lam126947_fptr, 3);

//setting env list
clo127087[1] = equal_u63;
clo127087[2] = kont126694;
clo127087[3] = a126602126805;
void* f126695126807 = encode_clo(clo127087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f126695126807;
arg_buffer[3] = x;
arg_buffer[4] = a126603126806;
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
void* _126952 = arg_buffer[1];
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

void* kont126696126809 = prim_car(x);
void* x126810 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126696126809);
arg_buffer[2] = x126810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126696126809))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam126955_fptr() // lam126955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126956 = arg_buffer[1];
//reading env and args
void* a126610126820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126698 = (decode_clo(env126956))[3];
//not do dummy comment
void* x = (decode_clo(env126956))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env126956))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont126698;
arg_buffer[3] = x;
arg_buffer[4] = a126610126820;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126955 = encode_clo(alloc_clo(lam126955_fptr, 0));

void* lam126957_fptr() // lam126957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126958 = arg_buffer[1];
//reading env and args
void* a126608126817 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env126958))[5];
//not do dummy comment
void* lst = (decode_clo(env126958))[4];
//not do dummy comment
void* kont126698 = (decode_clo(env126958))[3];
//not do dummy comment
void* x = (decode_clo(env126958))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env126958))[1];

//if-clause
bool if_guard127088 = is_true(a126608126817);
if(if_guard127088)
{
void* x126609126818 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126698);
arg_buffer[2] = x126609126818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126698))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo127090 = alloc_clo(lam126955_fptr, 3);

//setting env list
clo127090[1] = member_u63;
clo127090[2] = x;
clo127090[3] = kont126698;
void* f126699126819 = encode_clo(clo127090);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126699126819;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam126957 = encode_clo(alloc_clo(lam126957_fptr, 0));

void* lam126959_fptr() // lam126959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126960 = arg_buffer[1];
//reading env and args
void* a126607126815 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env126960))[6];
//not do dummy comment
void* lst = (decode_clo(env126960))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env126960))[4];
//not do dummy comment
void* kont126698 = (decode_clo(env126960))[3];
//not do dummy comment
void* x = (decode_clo(env126960))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env126960))[1];

//creating new closure instance
void** clo127092 = alloc_clo(lam126957_fptr, 5);

//setting env list
clo127092[1] = member_u63;
clo127092[2] = x;
clo127092[3] = kont126698;
clo127092[4] = lst;
clo127092[5] = cdr;
void* f126700126816 = encode_clo(clo127092);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f126700126816;
arg_buffer[3] = a126607126815;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126959 = encode_clo(alloc_clo(lam126959_fptr, 0));

void* lam126961_fptr() // lam126961 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126962 = arg_buffer[1];
//reading env and args
void* a126605126812 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env126962))[7];
//not do dummy comment
void* lst = (decode_clo(env126962))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env126962))[5];
//not do dummy comment
void* kont126698 = (decode_clo(env126962))[4];
//not do dummy comment
void* x = (decode_clo(env126962))[3];
//not do dummy comment
void* car = (decode_clo(env126962))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env126962))[1];

//if-clause
bool if_guard127093 = is_true(a126605126812);
if(if_guard127093)
{
void* x126606126813 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126698);
arg_buffer[2] = x126606126813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126698))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo127095 = alloc_clo(lam126959_fptr, 6);

//setting env list
clo127095[1] = member_u63;
clo127095[2] = x;
clo127095[3] = kont126698;
clo127095[4] = equal_u63;
clo127095[5] = lst;
clo127095[6] = cdr;
void* f126701126814 = encode_clo(clo127095);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f126701126814;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam126961 = encode_clo(alloc_clo(lam126961_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _126963 = arg_buffer[1];
//reading env and args
void* kont126698 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo127097 = alloc_clo(lam126961_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo127097[1] = member_u63;
clo127097[2] = car;
clo127097[3] = x;
clo127097[4] = kont126698;
clo127097[5] = equal_u63;
clo127097[6] = lst;
clo127097[7] = cdr;
void* f126702126811 = encode_clo(clo127097);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f126702126811;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam126964_fptr() // lam126964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126965 = arg_buffer[1];
//reading env and args
void* a126614126828 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldl = (decode_clo(env126965))[4];
//not do dummy comment
void* kont126703 = (decode_clo(env126965))[3];
//not do dummy comment
void* a126613126826 = (decode_clo(env126965))[2];
//not do dummy comment
void* fun = (decode_clo(env126965))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont126703;
arg_buffer[3] = fun;
arg_buffer[4] = a126613126826;
arg_buffer[5] = a126614126828;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126964 = encode_clo(alloc_clo(lam126964_fptr, 0));

void* lam126966_fptr() // lam126966 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126967 = arg_buffer[1];
//reading env and args
void* a126613126826 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env126967))[5];
//not do dummy comment
void* lst = (decode_clo(env126967))[4];
//not do dummy comment
void* fun = (decode_clo(env126967))[3];
//not do dummy comment
void* foldl = (decode_clo(env126967))[2];
//not do dummy comment
void* kont126703 = (decode_clo(env126967))[1];

//creating new closure instance
void** clo127099 = alloc_clo(lam126964_fptr, 4);

//setting env list
clo127099[1] = fun;
clo127099[2] = a126613126826;
clo127099[3] = kont126703;
clo127099[4] = foldl;
void* f126704126827 = encode_clo(clo127099);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126704126827;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126966 = encode_clo(alloc_clo(lam126966_fptr, 0));

void* lam126968_fptr() // lam126968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126969 = arg_buffer[1];
//reading env and args
void* a126612126824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env126969))[6];
//not do dummy comment
void* lst = (decode_clo(env126969))[5];
//not do dummy comment
void* fun = (decode_clo(env126969))[4];
//not do dummy comment
void* acc = (decode_clo(env126969))[3];
//not do dummy comment
void* foldl = (decode_clo(env126969))[2];
//not do dummy comment
void* kont126703 = (decode_clo(env126969))[1];

//creating new closure instance
void** clo127101 = alloc_clo(lam126966_fptr, 5);

//setting env list
clo127101[1] = kont126703;
clo127101[2] = foldl;
clo127101[3] = fun;
clo127101[4] = lst;
clo127101[5] = cdr;
void* f126705126825 = encode_clo(clo127101);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f126705126825;
arg_buffer[3] = a126612126824;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126968 = encode_clo(alloc_clo(lam126968_fptr, 0));

void* lam126970_fptr() // lam126970 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126971 = arg_buffer[1];
//reading env and args
void* a126611126822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env126971))[7];
//not do dummy comment
void* lst = (decode_clo(env126971))[6];
//not do dummy comment
void* fun = (decode_clo(env126971))[5];
//not do dummy comment
void* acc = (decode_clo(env126971))[4];
//not do dummy comment
void* car = (decode_clo(env126971))[3];
//not do dummy comment
void* foldl = (decode_clo(env126971))[2];
//not do dummy comment
void* kont126703 = (decode_clo(env126971))[1];

//if-clause
bool if_guard127102 = is_true(a126611126822);
if(if_guard127102)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126703);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126703))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo127104 = alloc_clo(lam126968_fptr, 6);

//setting env list
clo127104[1] = kont126703;
clo127104[2] = foldl;
clo127104[3] = acc;
clo127104[4] = fun;
clo127104[5] = lst;
clo127104[6] = cdr;
void* f126706126823 = encode_clo(clo127104);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f126706126823;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam126970 = encode_clo(alloc_clo(lam126970_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _126972 = arg_buffer[1];
//reading env and args
void* kont126703 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo127106 = alloc_clo(lam126970_fptr, 7);

//setting env list
clo127106[1] = kont126703;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo127106[2] = foldl;
clo127106[3] = car;
clo127106[4] = acc;
clo127106[5] = fun;
clo127106[6] = lst;
clo127106[7] = cdr;
void* f126707126821 = encode_clo(clo127106);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f126707126821;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam126973_fptr() // lam126973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126974 = arg_buffer[1];
//reading env and args
void* a126618126836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126616126832 = (decode_clo(env126974))[3];
//not do dummy comment
void* kont126708 = (decode_clo(env126974))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env126974))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont126708;
arg_buffer[3] = a126616126832;
arg_buffer[4] = a126618126836;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126973 = encode_clo(alloc_clo(lam126973_fptr, 0));

void* lam126975_fptr() // lam126975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126976 = arg_buffer[1];
//reading env and args
void* a126617126834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126616126832 = (decode_clo(env126976))[5];
//not do dummy comment
void* kont126708 = (decode_clo(env126976))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env126976))[3];
//not do dummy comment
void* lst2 = (decode_clo(env126976))[2];
//not do dummy comment
void* cons = (decode_clo(env126976))[1];

//creating new closure instance
void** clo127108 = alloc_clo(lam126973_fptr, 3);

//setting env list
clo127108[1] = reverse_u45helper;
clo127108[2] = kont126708;
clo127108[3] = a126616126832;
void* f126709126835 = encode_clo(clo127108);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f126709126835;
arg_buffer[3] = a126617126834;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126975 = encode_clo(alloc_clo(lam126975_fptr, 0));

void* lam126977_fptr() // lam126977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126978 = arg_buffer[1];
//reading env and args
void* a126616126832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env126978))[6];
//not do dummy comment
void* lst2 = (decode_clo(env126978))[5];
//not do dummy comment
void* car = (decode_clo(env126978))[4];
//not do dummy comment
void* cons = (decode_clo(env126978))[3];
//not do dummy comment
void* lst = (decode_clo(env126978))[2];
//not do dummy comment
void* kont126708 = (decode_clo(env126978))[1];

//creating new closure instance
void** clo127110 = alloc_clo(lam126975_fptr, 5);

//setting env list
clo127110[1] = cons;
clo127110[2] = lst2;
clo127110[3] = reverse_u45helper;
clo127110[4] = kont126708;
clo127110[5] = a126616126832;
void* f126710126833 = encode_clo(clo127110);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f126710126833;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126977 = encode_clo(alloc_clo(lam126977_fptr, 0));

void* lam126979_fptr() // lam126979 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126980 = arg_buffer[1];
//reading env and args
void* a126615126830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env126980))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env126980))[6];
//not do dummy comment
void* lst2 = (decode_clo(env126980))[5];
//not do dummy comment
void* car = (decode_clo(env126980))[4];
//not do dummy comment
void* cons = (decode_clo(env126980))[3];
//not do dummy comment
void* lst = (decode_clo(env126980))[2];
//not do dummy comment
void* kont126708 = (decode_clo(env126980))[1];

//if-clause
bool if_guard127111 = is_true(a126615126830);
if(if_guard127111)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126708);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126708))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo127113 = alloc_clo(lam126977_fptr, 6);

//setting env list
clo127113[1] = kont126708;
clo127113[2] = lst;
clo127113[3] = cons;
clo127113[4] = car;
clo127113[5] = lst2;
clo127113[6] = reverse_u45helper;
void* f126711126831 = encode_clo(clo127113);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126711126831;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam126979 = encode_clo(alloc_clo(lam126979_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _126981 = arg_buffer[1];
//reading env and args
void* kont126708 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo127115 = alloc_clo(lam126979_fptr, 7);

//setting env list
clo127115[1] = kont126708;
clo127115[2] = lst;
clo127115[3] = cons;
clo127115[4] = car;
clo127115[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo127115[6] = reverse_u45helper;
clo127115[7] = cdr;
void* f126712126829 = encode_clo(clo127115);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f126712126829;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam126982_fptr() // lam126982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126983 = arg_buffer[1];
//reading env and args
void* a126619126838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env126983))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env126983))[2];
//not do dummy comment
void* kont126713 = (decode_clo(env126983))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont126713;
arg_buffer[3] = lst;
arg_buffer[4] = a126619126838;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126982 = encode_clo(alloc_clo(lam126982_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _126984 = arg_buffer[1];
//reading env and args
void* kont126713 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo127117 = alloc_clo(lam126982_fptr, 3);

//setting env list
clo127117[1] = kont126713;
clo127117[2] = reverse_u45helper;
clo127117[3] = lst;
void* f126714126837 = encode_clo(clo127117);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f126714126837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam126985_fptr() // lam126985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126986 = arg_buffer[1];
//reading env and args
void* x126622126843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126715 = (decode_clo(env126986))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126715);
arg_buffer[2] = x126622126843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126715))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126985 = encode_clo(alloc_clo(lam126985_fptr, 0));

void* lam126987_fptr() // lam126987 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126988 = arg_buffer[1];
//reading env and args
void* a126627126852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126625126848 = (decode_clo(env126988))[4];
//not do dummy comment
void* kont126715 = (decode_clo(env126988))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env126988))[2];
//not do dummy comment
void* a126623126845 = (decode_clo(env126988))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont126715;
arg_buffer[3] = a126623126845;
arg_buffer[4] = a126625126848;
arg_buffer[5] = a126627126852;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126987 = encode_clo(alloc_clo(lam126987_fptr, 0));

void* lam126989_fptr() // lam126989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126990 = arg_buffer[1];
//reading env and args
void* a126626126850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126625126848 = (decode_clo(env126990))[6];
//not do dummy comment
void* kont126715 = (decode_clo(env126990))[5];
//not do dummy comment
void* a126623126845 = (decode_clo(env126990))[4];
//not do dummy comment
void* cons = (decode_clo(env126990))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env126990))[2];
//not do dummy comment
void* lst2 = (decode_clo(env126990))[1];

//creating new closure instance
void** clo127119 = alloc_clo(lam126987_fptr, 4);

//setting env list
clo127119[1] = a126623126845;
clo127119[2] = take_u45helper;
clo127119[3] = kont126715;
clo127119[4] = a126625126848;
void* f126717126851 = encode_clo(clo127119);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f126717126851;
arg_buffer[3] = a126626126850;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126989 = encode_clo(alloc_clo(lam126989_fptr, 0));

void* lam126991_fptr() // lam126991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126992 = arg_buffer[1];
//reading env and args
void* a126625126848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env126992))[7];
//not do dummy comment
void* kont126715 = (decode_clo(env126992))[6];
//not do dummy comment
void* cons = (decode_clo(env126992))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env126992))[4];
//not do dummy comment
void* lst2 = (decode_clo(env126992))[3];
//not do dummy comment
void* a126623126845 = (decode_clo(env126992))[2];
//not do dummy comment
void* car = (decode_clo(env126992))[1];

//creating new closure instance
void** clo127121 = alloc_clo(lam126989_fptr, 6);

//setting env list
clo127121[1] = lst2;
clo127121[2] = take_u45helper;
clo127121[3] = cons;
clo127121[4] = a126623126845;
clo127121[5] = kont126715;
clo127121[6] = a126625126848;
void* f126718126849 = encode_clo(clo127121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f126718126849;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126991 = encode_clo(alloc_clo(lam126991_fptr, 0));

void* lam126994_fptr() // lam126994 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126995 = arg_buffer[1];
//reading env and args
void* a126623126845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env126995))[8];
//not do dummy comment
void* kont126715 = (decode_clo(env126995))[7];
//not do dummy comment
void* cons = (decode_clo(env126995))[6];
//not do dummy comment
void* _u45 = (decode_clo(env126995))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env126995))[4];
//not do dummy comment
void* lst2 = (decode_clo(env126995))[3];
//not do dummy comment
void* n = (decode_clo(env126995))[2];
//not do dummy comment
void* car = (decode_clo(env126995))[1];
mpz_t* mpzvar127122 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127122, "1", 10);
void* a126624126846 = encode_mpz(mpzvar127122);

//creating new closure instance
void** clo127124 = alloc_clo(lam126991_fptr, 7);

//setting env list
clo127124[1] = car;
clo127124[2] = a126623126845;
clo127124[3] = lst2;
clo127124[4] = take_u45helper;
clo127124[5] = cons;
clo127124[6] = kont126715;
clo127124[7] = lst;
void* f126719126847 = encode_clo(clo127124);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f126719126847;
arg_buffer[3] = n;
arg_buffer[4] = a126624126846;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam126994 = encode_clo(alloc_clo(lam126994_fptr, 0));

void* lam126996_fptr() // lam126996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env126997 = arg_buffer[1];
//reading env and args
void* a126621126841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env126997))[10];
//not do dummy comment
void* lst = (decode_clo(env126997))[9];
//not do dummy comment
void* reverse = (decode_clo(env126997))[8];
//not do dummy comment
void* kont126715 = (decode_clo(env126997))[7];
//not do dummy comment
void* cons = (decode_clo(env126997))[6];
//not do dummy comment
void* _u45 = (decode_clo(env126997))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env126997))[4];
//not do dummy comment
void* lst2 = (decode_clo(env126997))[3];
//not do dummy comment
void* n = (decode_clo(env126997))[2];
//not do dummy comment
void* car = (decode_clo(env126997))[1];

//if-clause
bool if_guard127125 = is_true(a126621126841);
if(if_guard127125)
{

//creating new closure instance
void** clo127127 = alloc_clo(lam126985_fptr, 1);

//setting env list
clo127127[1] = kont126715;
void* f126716126842 = encode_clo(clo127127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f126716126842;
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
void** clo127129 = alloc_clo(lam126994_fptr, 8);

//setting env list
clo127129[1] = car;
clo127129[2] = n;
clo127129[3] = lst2;
clo127129[4] = take_u45helper;
clo127129[5] = _u45;
clo127129[6] = cons;
clo127129[7] = kont126715;
clo127129[8] = lst;
void* f126720126844 = encode_clo(clo127129);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126720126844;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam126996 = encode_clo(alloc_clo(lam126996_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _126999 = arg_buffer[1];
//reading env and args
void* kont126715 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar127130 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127130, "0", 10);
void* a126620126839 = encode_mpz(mpzvar127130);

//creating new closure instance
void** clo127132 = alloc_clo(lam126996_fptr, 10);

//setting env list
clo127132[1] = car;
clo127132[2] = n;
clo127132[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo127132[4] = take_u45helper;
clo127132[5] = _u45;
clo127132[6] = cons;
clo127132[7] = kont126715;
clo127132[8] = reverse;
clo127132[9] = lst;
clo127132[10] = cdr;
void* f126721126840 = encode_clo(clo127132);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f126721126840;
arg_buffer[3] = n;
arg_buffer[4] = a126620126839;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam127000_fptr() // lam127000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127001 = arg_buffer[1];
//reading env and args
void* a126628126854 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126722 = (decode_clo(env127001))[4];
//not do dummy comment
void* lst = (decode_clo(env127001))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env127001))[2];
//not do dummy comment
void* n = (decode_clo(env127001))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont126722;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a126628126854;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127000 = encode_clo(alloc_clo(lam127000_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _127002 = arg_buffer[1];
//reading env and args
void* kont126722 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo127134 = alloc_clo(lam127000_fptr, 4);

//setting env list
clo127134[1] = n;
clo127134[2] = take_u45helper;
clo127134[3] = lst;
clo127134[4] = kont126722;
void* f126723126853 = encode_clo(clo127134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f126723126853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam127004_fptr() // lam127004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127005 = arg_buffer[1];
//reading env and args
void* a126633126862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126724 = (decode_clo(env127005))[3];
//not do dummy comment
void* _u43 = (decode_clo(env127005))[2];
//not do dummy comment
void* a126631126858 = (decode_clo(env127005))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont126724;
arg_buffer[3] = a126631126858;
arg_buffer[4] = a126633126862;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127004 = encode_clo(alloc_clo(lam127004_fptr, 0));

void* lam127006_fptr() // lam127006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127007 = arg_buffer[1];
//reading env and args
void* a126632126860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126724 = (decode_clo(env127007))[4];
//not do dummy comment
void* length = (decode_clo(env127007))[3];
//not do dummy comment
void* _u43 = (decode_clo(env127007))[2];
//not do dummy comment
void* a126631126858 = (decode_clo(env127007))[1];

//creating new closure instance
void** clo127136 = alloc_clo(lam127004_fptr, 3);

//setting env list
clo127136[1] = a126631126858;
clo127136[2] = _u43;
clo127136[3] = kont126724;
void* f126725126861 = encode_clo(clo127136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f126725126861;
arg_buffer[3] = a126632126860;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127006 = encode_clo(alloc_clo(lam127006_fptr, 0));

void* lam127009_fptr() // lam127009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127010 = arg_buffer[1];
//reading env and args
void* a126629126856 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127010))[5];
//not do dummy comment
void* length = (decode_clo(env127010))[4];
//not do dummy comment
void* _u43 = (decode_clo(env127010))[3];
//not do dummy comment
void* lst = (decode_clo(env127010))[2];
//not do dummy comment
void* kont126724 = (decode_clo(env127010))[1];

//if-clause
bool if_guard127137 = is_true(a126629126856);
if(if_guard127137)
{
mpz_t* mpzvar127138 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127138, "0", 10);
void* x126630126857 = encode_mpz(mpzvar127138);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126724);
arg_buffer[2] = x126630126857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126724))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar127139 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127139, "1", 10);
void* a126631126858 = encode_mpz(mpzvar127139);

//creating new closure instance
void** clo127141 = alloc_clo(lam127006_fptr, 4);

//setting env list
clo127141[1] = a126631126858;
clo127141[2] = _u43;
clo127141[3] = length;
clo127141[4] = kont126724;
void* f126726126859 = encode_clo(clo127141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126726126859;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam127009 = encode_clo(alloc_clo(lam127009_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _127011 = arg_buffer[1];
//reading env and args
void* kont126724 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo127143 = alloc_clo(lam127009_fptr, 5);

//setting env list
clo127143[1] = kont126724;
clo127143[2] = lst;
clo127143[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo127143[4] = length;
clo127143[5] = cdr;
void* f126727126855 = encode_clo(clo127143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f126727126855;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam127012_fptr() // lam127012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127013 = arg_buffer[1];
//reading env and args
void* x126635126866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126728 = (decode_clo(env127013))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126728);
arg_buffer[2] = x126635126866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126728))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127012 = encode_clo(alloc_clo(lam127012_fptr, 0));

void* lam127014_fptr() // lam127014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127015 = arg_buffer[1];
//reading env and args
void* a126639126874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126637126870 = (decode_clo(env127015))[3];
//not do dummy comment
void* kont126728 = (decode_clo(env127015))[2];
//not do dummy comment
void* cons = (decode_clo(env127015))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont126728;
arg_buffer[3] = a126637126870;
arg_buffer[4] = a126639126874;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127014 = encode_clo(alloc_clo(lam127014_fptr, 0));

void* lam127016_fptr() // lam127016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127017 = arg_buffer[1];
//reading env and args
void* a126638126872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env127017))[5];
//not do dummy comment
void* a126637126870 = (decode_clo(env127017))[4];
//not do dummy comment
void* kont126728 = (decode_clo(env127017))[3];
//not do dummy comment
void* proc = (decode_clo(env127017))[2];
//not do dummy comment
void* cons = (decode_clo(env127017))[1];

//creating new closure instance
void** clo127145 = alloc_clo(lam127014_fptr, 3);

//setting env list
clo127145[1] = cons;
clo127145[2] = kont126728;
clo127145[3] = a126637126870;
void* f126730126873 = encode_clo(clo127145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f126730126873;
arg_buffer[3] = proc;
arg_buffer[4] = a126638126872;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127016 = encode_clo(alloc_clo(lam127016_fptr, 0));

void* lam127018_fptr() // lam127018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127019 = arg_buffer[1];
//reading env and args
void* a126637126870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127019))[6];
//not do dummy comment
void* lst = (decode_clo(env127019))[5];
//not do dummy comment
void* map = (decode_clo(env127019))[4];
//not do dummy comment
void* kont126728 = (decode_clo(env127019))[3];
//not do dummy comment
void* proc = (decode_clo(env127019))[2];
//not do dummy comment
void* cons = (decode_clo(env127019))[1];

//creating new closure instance
void** clo127147 = alloc_clo(lam127016_fptr, 5);

//setting env list
clo127147[1] = cons;
clo127147[2] = proc;
clo127147[3] = kont126728;
clo127147[4] = a126637126870;
clo127147[5] = map;
void* f126731126871 = encode_clo(clo127147);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126731126871;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127018 = encode_clo(alloc_clo(lam127018_fptr, 0));

void* lam127020_fptr() // lam127020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127021 = arg_buffer[1];
//reading env and args
void* a126636126868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127021))[6];
//not do dummy comment
void* lst = (decode_clo(env127021))[5];
//not do dummy comment
void* map = (decode_clo(env127021))[4];
//not do dummy comment
void* kont126728 = (decode_clo(env127021))[3];
//not do dummy comment
void* proc = (decode_clo(env127021))[2];
//not do dummy comment
void* cons = (decode_clo(env127021))[1];

//creating new closure instance
void** clo127149 = alloc_clo(lam127018_fptr, 6);

//setting env list
clo127149[1] = cons;
clo127149[2] = proc;
clo127149[3] = kont126728;
clo127149[4] = map;
clo127149[5] = lst;
clo127149[6] = cdr;
void* f126732126869 = encode_clo(clo127149);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f126732126869;
arg_buffer[3] = a126636126868;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127020 = encode_clo(alloc_clo(lam127020_fptr, 0));

void* lam127022_fptr() // lam127022 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127023 = arg_buffer[1];
//reading env and args
void* a126634126864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env127023))[8];
//not do dummy comment
void* map = (decode_clo(env127023))[7];
//not do dummy comment
void* kont126728 = (decode_clo(env127023))[6];
//not do dummy comment
void* proc = (decode_clo(env127023))[5];
//not do dummy comment
void* car = (decode_clo(env127023))[4];
//not do dummy comment
void* cons = (decode_clo(env127023))[3];
//not do dummy comment
void* list = (decode_clo(env127023))[2];
//not do dummy comment
void* cdr = (decode_clo(env127023))[1];

//if-clause
bool if_guard127150 = is_true(a126634126864);
if(if_guard127150)
{

//creating new closure instance
void** clo127152 = alloc_clo(lam127012_fptr, 1);

//setting env list
clo127152[1] = kont126728;
void* f126729126865 = encode_clo(clo127152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f126729126865;
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
void** clo127154 = alloc_clo(lam127020_fptr, 6);

//setting env list
clo127154[1] = cons;
clo127154[2] = proc;
clo127154[3] = kont126728;
clo127154[4] = map;
clo127154[5] = lst;
clo127154[6] = cdr;
void* f126733126867 = encode_clo(clo127154);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f126733126867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam127022 = encode_clo(alloc_clo(lam127022_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _127024 = arg_buffer[1];
//reading env and args
void* kont126728 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo127156 = alloc_clo(lam127022_fptr, 8);

//setting env list
clo127156[1] = cdr;
clo127156[2] = list;
clo127156[3] = cons;
clo127156[4] = car;
clo127156[5] = proc;
clo127156[6] = kont126728;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo127156[7] = map;
clo127156[8] = lst;
void* f126734126863 = encode_clo(clo127156);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f126734126863;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam127025_fptr() // lam127025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127026 = arg_buffer[1];
//reading env and args
void* x126641126878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126735 = (decode_clo(env127026))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126735);
arg_buffer[2] = x126641126878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126735))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127025 = encode_clo(alloc_clo(lam127025_fptr, 0));

void* lam127027_fptr() // lam127027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127028 = arg_buffer[1];
//reading env and args
void* a126646126888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126644126884 = (decode_clo(env127028))[3];
//not do dummy comment
void* cons = (decode_clo(env127028))[2];
//not do dummy comment
void* kont126735 = (decode_clo(env127028))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont126735;
arg_buffer[3] = a126644126884;
arg_buffer[4] = a126646126888;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127027 = encode_clo(alloc_clo(lam127027_fptr, 0));

void* lam127029_fptr() // lam127029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127030 = arg_buffer[1];
//reading env and args
void* a126645126886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126644126884 = (decode_clo(env127030))[5];
//not do dummy comment
void* op = (decode_clo(env127030))[4];
//not do dummy comment
void* filter = (decode_clo(env127030))[3];
//not do dummy comment
void* cons = (decode_clo(env127030))[2];
//not do dummy comment
void* kont126735 = (decode_clo(env127030))[1];

//creating new closure instance
void** clo127158 = alloc_clo(lam127027_fptr, 3);

//setting env list
clo127158[1] = kont126735;
clo127158[2] = cons;
clo127158[3] = a126644126884;
void* f126737126887 = encode_clo(clo127158);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f126737126887;
arg_buffer[3] = op;
arg_buffer[4] = a126645126886;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127029 = encode_clo(alloc_clo(lam127029_fptr, 0));

void* lam127031_fptr() // lam127031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127032 = arg_buffer[1];
//reading env and args
void* a126644126884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127032))[6];
//not do dummy comment
void* lst = (decode_clo(env127032))[5];
//not do dummy comment
void* op = (decode_clo(env127032))[4];
//not do dummy comment
void* filter = (decode_clo(env127032))[3];
//not do dummy comment
void* cons = (decode_clo(env127032))[2];
//not do dummy comment
void* kont126735 = (decode_clo(env127032))[1];

//creating new closure instance
void** clo127160 = alloc_clo(lam127029_fptr, 5);

//setting env list
clo127160[1] = kont126735;
clo127160[2] = cons;
clo127160[3] = filter;
clo127160[4] = op;
clo127160[5] = a126644126884;
void* f126738126885 = encode_clo(clo127160);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126738126885;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127031 = encode_clo(alloc_clo(lam127031_fptr, 0));

void* lam127033_fptr() // lam127033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127034 = arg_buffer[1];
//reading env and args
void* a126647126890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env127034))[3];
//not do dummy comment
void* filter = (decode_clo(env127034))[2];
//not do dummy comment
void* kont126735 = (decode_clo(env127034))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont126735;
arg_buffer[3] = op;
arg_buffer[4] = a126647126890;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127033 = encode_clo(alloc_clo(lam127033_fptr, 0));

void* lam127035_fptr() // lam127035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127036 = arg_buffer[1];
//reading env and args
void* a126643126882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127036))[7];
//not do dummy comment
void* lst = (decode_clo(env127036))[6];
//not do dummy comment
void* op = (decode_clo(env127036))[5];
//not do dummy comment
void* cons = (decode_clo(env127036))[4];
//not do dummy comment
void* kont126735 = (decode_clo(env127036))[3];
//not do dummy comment
void* filter = (decode_clo(env127036))[2];
//not do dummy comment
void* car = (decode_clo(env127036))[1];

//if-clause
bool if_guard127161 = is_true(a126643126882);
if(if_guard127161)
{

//creating new closure instance
void** clo127163 = alloc_clo(lam127031_fptr, 6);

//setting env list
clo127163[1] = kont126735;
clo127163[2] = cons;
clo127163[3] = filter;
clo127163[4] = op;
clo127163[5] = lst;
clo127163[6] = cdr;
void* f126739126883 = encode_clo(clo127163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f126739126883;
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
void** clo127165 = alloc_clo(lam127033_fptr, 3);

//setting env list
clo127165[1] = kont126735;
clo127165[2] = filter;
clo127165[3] = op;
void* f126740126889 = encode_clo(clo127165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126740126889;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam127035 = encode_clo(alloc_clo(lam127035_fptr, 0));

void* lam127037_fptr() // lam127037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127038 = arg_buffer[1];
//reading env and args
void* a126642126880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127038))[7];
//not do dummy comment
void* lst = (decode_clo(env127038))[6];
//not do dummy comment
void* op = (decode_clo(env127038))[5];
//not do dummy comment
void* cons = (decode_clo(env127038))[4];
//not do dummy comment
void* kont126735 = (decode_clo(env127038))[3];
//not do dummy comment
void* filter = (decode_clo(env127038))[2];
//not do dummy comment
void* car = (decode_clo(env127038))[1];

//creating new closure instance
void** clo127167 = alloc_clo(lam127035_fptr, 7);

//setting env list
clo127167[1] = car;
clo127167[2] = filter;
clo127167[3] = kont126735;
clo127167[4] = cons;
clo127167[5] = op;
clo127167[6] = lst;
clo127167[7] = cdr;
void* f126741126881 = encode_clo(clo127167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f126741126881;
arg_buffer[3] = a126642126880;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127037 = encode_clo(alloc_clo(lam127037_fptr, 0));

void* lam127039_fptr() // lam127039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127040 = arg_buffer[1];
//reading env and args
void* a126640126876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env127040))[8];
//not do dummy comment
void* op = (decode_clo(env127040))[7];
//not do dummy comment
void* cons = (decode_clo(env127040))[6];
//not do dummy comment
void* kont126735 = (decode_clo(env127040))[5];
//not do dummy comment
void* list = (decode_clo(env127040))[4];
//not do dummy comment
void* cdr = (decode_clo(env127040))[3];
//not do dummy comment
void* filter = (decode_clo(env127040))[2];
//not do dummy comment
void* car = (decode_clo(env127040))[1];

//if-clause
bool if_guard127168 = is_true(a126640126876);
if(if_guard127168)
{

//creating new closure instance
void** clo127170 = alloc_clo(lam127025_fptr, 1);

//setting env list
clo127170[1] = kont126735;
void* f126736126877 = encode_clo(clo127170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f126736126877;
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
void** clo127172 = alloc_clo(lam127037_fptr, 7);

//setting env list
clo127172[1] = car;
clo127172[2] = filter;
clo127172[3] = kont126735;
clo127172[4] = cons;
clo127172[5] = op;
clo127172[6] = lst;
clo127172[7] = cdr;
void* f126742126879 = encode_clo(clo127172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f126742126879;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam127039 = encode_clo(alloc_clo(lam127039_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _127041 = arg_buffer[1];
//reading env and args
void* kont126735 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo127174 = alloc_clo(lam127039_fptr, 8);

//setting env list
clo127174[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo127174[2] = filter;
clo127174[3] = cdr;
clo127174[4] = list;
clo127174[5] = kont126735;
clo127174[6] = cons;
clo127174[7] = op;
clo127174[8] = lst;
void* f126743126875 = encode_clo(clo127174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f126743126875;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam127042_fptr() // lam127042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127043 = arg_buffer[1];
//reading env and args
void* a126652126898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env127043))[3];
//not do dummy comment
void* kont126744 = (decode_clo(env127043))[2];
//not do dummy comment
void* a126650126895 = (decode_clo(env127043))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont126744;
arg_buffer[3] = a126650126895;
arg_buffer[4] = a126652126898;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127042 = encode_clo(alloc_clo(lam127042_fptr, 0));

void* lam127045_fptr() // lam127045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127046 = arg_buffer[1];
//reading env and args
void* a126650126895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env127046))[4];
//not do dummy comment
void* kont126744 = (decode_clo(env127046))[3];
//not do dummy comment
void* n = (decode_clo(env127046))[2];
//not do dummy comment
void* _u45 = (decode_clo(env127046))[1];
mpz_t* mpzvar127175 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127175, "1", 10);
void* a126651126896 = encode_mpz(mpzvar127175);

//creating new closure instance
void** clo127177 = alloc_clo(lam127042_fptr, 3);

//setting env list
clo127177[1] = a126650126895;
clo127177[2] = kont126744;
clo127177[3] = drop;
void* f126745126897 = encode_clo(clo127177);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f126745126897;
arg_buffer[3] = n;
arg_buffer[4] = a126651126896;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127045 = encode_clo(alloc_clo(lam127045_fptr, 0));

void* lam127047_fptr() // lam127047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127048 = arg_buffer[1];
//reading env and args
void* a126649126893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127048))[6];
//not do dummy comment
void* kont126744 = (decode_clo(env127048))[5];
//not do dummy comment
void* n = (decode_clo(env127048))[4];
//not do dummy comment
void* _u45 = (decode_clo(env127048))[3];
//not do dummy comment
void* lst = (decode_clo(env127048))[2];
//not do dummy comment
void* drop = (decode_clo(env127048))[1];

//if-clause
bool if_guard127178 = is_true(a126649126893);
if(if_guard127178)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126744);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126744))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo127180 = alloc_clo(lam127045_fptr, 4);

//setting env list
clo127180[1] = _u45;
clo127180[2] = n;
clo127180[3] = kont126744;
clo127180[4] = drop;
void* f126746126894 = encode_clo(clo127180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126746126894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam127047 = encode_clo(alloc_clo(lam127047_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _127050 = arg_buffer[1];
//reading env and args
void* kont126744 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar127181 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127181, "0", 10);
void* a126648126891 = encode_mpz(mpzvar127181);

//creating new closure instance
void** clo127183 = alloc_clo(lam127047_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo127183[1] = drop;
clo127183[2] = lst;
clo127183[3] = _u45;
clo127183[4] = n;
clo127183[5] = kont126744;
clo127183[6] = cdr;
void* f126747126892 = encode_clo(clo127183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f126747126892;
arg_buffer[3] = n;
arg_buffer[4] = a126648126891;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam127051_fptr() // lam127051 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127052 = arg_buffer[1];
//reading env and args
void* a126656126906 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a126654126902 = (decode_clo(env127052))[3];
//not do dummy comment
void* proc = (decode_clo(env127052))[2];
//not do dummy comment
void* kont126748 = (decode_clo(env127052))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont126748;
arg_buffer[3] = a126654126902;
arg_buffer[4] = a126656126906;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127051 = encode_clo(alloc_clo(lam127051_fptr, 0));

void* lam127053_fptr() // lam127053 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127054 = arg_buffer[1];
//reading env and args
void* a126655126904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env127054))[5];
//not do dummy comment
void* a126654126902 = (decode_clo(env127054))[4];
//not do dummy comment
void* kont126748 = (decode_clo(env127054))[3];
//not do dummy comment
void* proc = (decode_clo(env127054))[2];
//not do dummy comment
void* acc = (decode_clo(env127054))[1];

//creating new closure instance
void** clo127185 = alloc_clo(lam127051_fptr, 3);

//setting env list
clo127185[1] = kont126748;
clo127185[2] = proc;
clo127185[3] = a126654126902;
void* f126749126905 = encode_clo(clo127185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f126749126905;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a126655126904;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127053 = encode_clo(alloc_clo(lam127053_fptr, 0));

void* lam127055_fptr() // lam127055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127056 = arg_buffer[1];
//reading env and args
void* a126654126902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127056))[6];
//not do dummy comment
void* kont126748 = (decode_clo(env127056))[5];
//not do dummy comment
void* foldr = (decode_clo(env127056))[4];
//not do dummy comment
void* lst = (decode_clo(env127056))[3];
//not do dummy comment
void* proc = (decode_clo(env127056))[2];
//not do dummy comment
void* acc = (decode_clo(env127056))[1];

//creating new closure instance
void** clo127187 = alloc_clo(lam127053_fptr, 5);

//setting env list
clo127187[1] = acc;
clo127187[2] = proc;
clo127187[3] = kont126748;
clo127187[4] = a126654126902;
clo127187[5] = foldr;
void* f126750126903 = encode_clo(clo127187);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126750126903;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127055 = encode_clo(alloc_clo(lam127055_fptr, 0));

void* lam127057_fptr() // lam127057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127058 = arg_buffer[1];
//reading env and args
void* a126653126900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127058))[7];
//not do dummy comment
void* kont126748 = (decode_clo(env127058))[6];
//not do dummy comment
void* car = (decode_clo(env127058))[5];
//not do dummy comment
void* foldr = (decode_clo(env127058))[4];
//not do dummy comment
void* lst = (decode_clo(env127058))[3];
//not do dummy comment
void* proc = (decode_clo(env127058))[2];
//not do dummy comment
void* acc = (decode_clo(env127058))[1];

//if-clause
bool if_guard127188 = is_true(a126653126900);
if(if_guard127188)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126748);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126748))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo127190 = alloc_clo(lam127055_fptr, 6);

//setting env list
clo127190[1] = acc;
clo127190[2] = proc;
clo127190[3] = lst;
clo127190[4] = foldr;
clo127190[5] = kont126748;
clo127190[6] = cdr;
void* f126751126901 = encode_clo(clo127190);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f126751126901;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam127057 = encode_clo(alloc_clo(lam127057_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _127059 = arg_buffer[1];
//reading env and args
void* kont126748 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo127192 = alloc_clo(lam127057_fptr, 7);

//setting env list
clo127192[1] = acc;
clo127192[2] = proc;
clo127192[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo127192[4] = foldr;
clo127192[5] = car;
clo127192[6] = kont126748;
clo127192[7] = cdr;
void* f126752126899 = encode_clo(clo127192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f126752126899;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam127060_fptr() // lam127060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127061 = arg_buffer[1];
//reading env and args
void* a126660126914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126753 = (decode_clo(env127061))[3];
//not do dummy comment
void* cons = (decode_clo(env127061))[2];
//not do dummy comment
void* a126658126910 = (decode_clo(env127061))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont126753;
arg_buffer[3] = a126658126910;
arg_buffer[4] = a126660126914;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127060 = encode_clo(alloc_clo(lam127060_fptr, 0));

void* lam127062_fptr() // lam127062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127063 = arg_buffer[1];
//reading env and args
void* a126659126912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126753 = (decode_clo(env127063))[5];
//not do dummy comment
void* append = (decode_clo(env127063))[4];
//not do dummy comment
void* lst2 = (decode_clo(env127063))[3];
//not do dummy comment
void* cons = (decode_clo(env127063))[2];
//not do dummy comment
void* a126658126910 = (decode_clo(env127063))[1];

//creating new closure instance
void** clo127194 = alloc_clo(lam127060_fptr, 3);

//setting env list
clo127194[1] = a126658126910;
clo127194[2] = cons;
clo127194[3] = kont126753;
void* f126754126913 = encode_clo(clo127194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f126754126913;
arg_buffer[3] = a126659126912;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127062 = encode_clo(alloc_clo(lam127062_fptr, 0));

void* lam127064_fptr() // lam127064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127065 = arg_buffer[1];
//reading env and args
void* a126658126910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127065))[6];
//not do dummy comment
void* kont126753 = (decode_clo(env127065))[5];
//not do dummy comment
void* append = (decode_clo(env127065))[4];
//not do dummy comment
void* lst2 = (decode_clo(env127065))[3];
//not do dummy comment
void* lst1 = (decode_clo(env127065))[2];
//not do dummy comment
void* cons = (decode_clo(env127065))[1];

//creating new closure instance
void** clo127196 = alloc_clo(lam127062_fptr, 5);

//setting env list
clo127196[1] = a126658126910;
clo127196[2] = cons;
clo127196[3] = lst2;
clo127196[4] = append;
clo127196[5] = kont126753;
void* f126755126911 = encode_clo(clo127196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f126755126911;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127064 = encode_clo(alloc_clo(lam127064_fptr, 0));

void* lam127066_fptr() // lam127066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127067 = arg_buffer[1];
//reading env and args
void* a126657126908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env127067))[7];
//not do dummy comment
void* kont126753 = (decode_clo(env127067))[6];
//not do dummy comment
void* append = (decode_clo(env127067))[5];
//not do dummy comment
void* lst2 = (decode_clo(env127067))[4];
//not do dummy comment
void* cons = (decode_clo(env127067))[3];
//not do dummy comment
void* lst1 = (decode_clo(env127067))[2];
//not do dummy comment
void* car = (decode_clo(env127067))[1];

//if-clause
bool if_guard127197 = is_true(a126657126908);
if(if_guard127197)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126753);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126753))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo127199 = alloc_clo(lam127064_fptr, 6);

//setting env list
clo127199[1] = cons;
clo127199[2] = lst1;
clo127199[3] = lst2;
clo127199[4] = append;
clo127199[5] = kont126753;
clo127199[6] = cdr;
void* f126756126909 = encode_clo(clo127199);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f126756126909;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam127066 = encode_clo(alloc_clo(lam127066_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _127068 = arg_buffer[1];
//reading env and args
void* kont126753 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo127201 = alloc_clo(lam127066_fptr, 7);

//setting env list
clo127201[1] = car;
clo127201[2] = lst1;
clo127201[3] = cons;
clo127201[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo127201[5] = append;
clo127201[6] = kont126753;
clo127201[7] = cdr;
void* f126757126907 = encode_clo(clo127201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f126757126907;
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
void* _127069 = arg_buffer[1];
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

void* kont126758126915 = prim_car(lst);
void* lst126916 = prim_cdr(lst);
void* x126661126917 = apply_prim_hash(lst126916);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126758126915);
arg_buffer[2] = x126661126917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126758126915))[0]);
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
void* _127070 = arg_buffer[1];
//reading env and args
void* kont126760 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x126662126918 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126760);
arg_buffer[2] = x126662126918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126760))[0]);
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
void* _127071 = arg_buffer[1];
//reading env and args
void* kont126761 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x126663126919 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126761);
arg_buffer[2] = x126663126919;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126761))[0]);
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
void* _127072 = arg_buffer[1];
//reading env and args
void* kont126762 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x126664126920 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126762);
arg_buffer[2] = x126664126920;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126762))[0]);
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
void* _127073 = arg_buffer[1];
//reading env and args
void* kont126763 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x126665126921 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126763);
arg_buffer[2] = x126665126921;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126763))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* yes_fptr() // yes 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _127076 = arg_buffer[1];
//reading env and args
void* kont126764 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar127202 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127202, "5", 10);
void* x126581126922 = encode_mpz(mpzvar127202);
mpz_t* mpzvar127203 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar127203, "6", 10);
void* y126582126923 = encode_mpz(mpzvar127203);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126764);
arg_buffer[2] = x126581126922;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126764))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* yes = encode_clo(alloc_clo(yes_fptr, 0));

void* lam127077_fptr() // lam127077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env127078 = arg_buffer[1];
//reading env and args
void* x126666126925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont126765 = (decode_clo(env127078))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont126765);
arg_buffer[2] = x126666126925;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont126765))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam127077 = encode_clo(alloc_clo(lam127077_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _127079 = arg_buffer[1];
//reading env and args
void* kont126765 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo127205 = alloc_clo(lam127077_fptr, 1);

//setting env list
clo127205[1] = kont126765;
void* f126766126924 = encode_clo(clo127205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(yes);
arg_buffer[2] = f126766126924;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(yes))[0]);
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

