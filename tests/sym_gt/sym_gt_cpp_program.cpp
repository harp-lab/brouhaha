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
void* _118967 = arg_buffer[1];
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

void* kont118705118805 = prim_car(lst);
void* lst118806 = prim_cdr(lst);
void* x118616118807 = apply_prim__u43(lst118806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118705118805);
arg_buffer[2] = x118616118807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118705118805))[0]);
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
void* _118968 = arg_buffer[1];
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

void* kont118707118808 = prim_car(lst);
void* lst118809 = prim_cdr(lst);
void* x118617118810 = apply_prim__u45(lst118809);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118707118808);
arg_buffer[2] = x118617118810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118707118808))[0]);
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
void* _118969 = arg_buffer[1];
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

void* kont118709118811 = prim_car(lst);
void* lst118812 = prim_cdr(lst);
void* x118618118813 = apply_prim__u42(lst118812);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118709118811);
arg_buffer[2] = x118618118813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118709118811))[0]);
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
void* _118970 = arg_buffer[1];
//reading env and args
void* kont118711 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x118619118814 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118711);
arg_buffer[2] = x118619118814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118711))[0]);
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
void* _118971 = arg_buffer[1];
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

void* kont118712118815 = prim_car(lst);
void* lst118816 = prim_cdr(lst);
void* x118620118817 = apply_prim__u47(lst118816);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118712118815);
arg_buffer[2] = x118620118817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118712118815))[0]);
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
void* _118972 = arg_buffer[1];
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

void* kont118714118818 = prim_car(lst);
void* lst118819 = prim_cdr(lst);
void* x118621118820 = apply_prim__u61(lst118819);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118714118818);
arg_buffer[2] = x118621118820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118714118818))[0]);
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
void* _118973 = arg_buffer[1];
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

void* kont118716118821 = prim_car(lst);
void* lst118822 = prim_cdr(lst);
void* x118622118823 = apply_prim__u62(lst118822);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118716118821);
arg_buffer[2] = x118622118823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118716118821))[0]);
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
void* _118974 = arg_buffer[1];
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

void* kont118718118824 = prim_car(lst);
void* lst118825 = prim_cdr(lst);
void* x118623118826 = apply_prim__u60(lst118825);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118718118824);
arg_buffer[2] = x118623118826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118718118824))[0]);
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
void* _118975 = arg_buffer[1];
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

void* kont118720118827 = prim_car(lst);
void* lst118828 = prim_cdr(lst);
void* x118624118829 = apply_prim__u60_u61(lst118828);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118720118827);
arg_buffer[2] = x118624118829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118720118827))[0]);
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
void* _118976 = arg_buffer[1];
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

void* kont118722118830 = prim_car(lst);
void* lst118831 = prim_cdr(lst);
void* x118625118832 = apply_prim__u62_u61(lst118831);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118722118830);
arg_buffer[2] = x118625118832;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118722118830))[0]);
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
void* _118977 = arg_buffer[1];
//reading env and args
void* kont118724 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x118626118833 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118724);
arg_buffer[2] = x118626118833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118724))[0]);
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
void* _118978 = arg_buffer[1];
//reading env and args
void* kont118725 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x118627118834 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118725);
arg_buffer[2] = x118627118834;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118725))[0]);
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
void* _118979 = arg_buffer[1];
//reading env and args
void* kont118726 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x118628118835 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118726);
arg_buffer[2] = x118628118835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118726))[0]);
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
void* _118980 = arg_buffer[1];
//reading env and args
void* kont118727 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x118629118836 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118727);
arg_buffer[2] = x118629118836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118727))[0]);
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
void* _118981 = arg_buffer[1];
//reading env and args
void* kont118728 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x118630118837 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118728);
arg_buffer[2] = x118630118837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118728))[0]);
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
void* _118982 = arg_buffer[1];
//reading env and args
void* kont118729 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x118631118838 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118729);
arg_buffer[2] = x118631118838;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118729))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam118983_fptr() // lam118983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env118984 = arg_buffer[1];
//reading env and args
void* a118634118842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118730 = (decode_clo(env118984))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env118984))[2];
//not do dummy comment
void* a118632118839 = (decode_clo(env118984))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont118730;
arg_buffer[3] = a118632118839;
arg_buffer[4] = a118634118842;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam118983 = encode_clo(alloc_clo(lam118983_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _118987 = arg_buffer[1];
//reading env and args
void* kont118730 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar119664 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119664, "0", 10);
void* a118632118839 = encode_mpz(mpzvar119664);
mpz_t* mpzvar119665 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119665, "2", 10);
void* a118633118840 = encode_mpz(mpzvar119665);

//creating new closure instance
void** clo119667 = alloc_clo(lam118983_fptr, 3);

//setting env list
clo119667[1] = a118632118839;
clo119667[2] = equal_u63;
clo119667[3] = kont118730;
void* f118731118841 = encode_clo(clo119667);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f118731118841;
arg_buffer[3] = x;
arg_buffer[4] = a118633118840;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam118988_fptr() // lam118988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env118989 = arg_buffer[1];
//reading env and args
void* a118637118846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a118635118843 = (decode_clo(env118989))[3];
//not do dummy comment
void* kont118732 = (decode_clo(env118989))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env118989))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont118732;
arg_buffer[3] = a118635118843;
arg_buffer[4] = a118637118846;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam118988 = encode_clo(alloc_clo(lam118988_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _118992 = arg_buffer[1];
//reading env and args
void* kont118732 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar119668 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119668, "1", 10);
void* a118635118843 = encode_mpz(mpzvar119668);
mpz_t* mpzvar119669 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119669, "2", 10);
void* a118636118844 = encode_mpz(mpzvar119669);

//creating new closure instance
void** clo119671 = alloc_clo(lam118988_fptr, 3);

//setting env list
clo119671[1] = equal_u63;
clo119671[2] = kont118732;
clo119671[3] = a118635118843;
void* f118733118845 = encode_clo(clo119671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f118733118845;
arg_buffer[3] = x;
arg_buffer[4] = a118636118844;
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
void* _118993 = arg_buffer[1];
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

void* kont118734118847 = prim_car(x);
void* x118848 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118734118847);
arg_buffer[2] = x118848;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118734118847))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam118996_fptr() // lam118996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env118997 = arg_buffer[1];
//reading env and args
void* a118643118858 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118736 = (decode_clo(env118997))[3];
//not do dummy comment
void* x = (decode_clo(env118997))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env118997))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont118736;
arg_buffer[3] = x;
arg_buffer[4] = a118643118858;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam118996 = encode_clo(alloc_clo(lam118996_fptr, 0));

void* lam118998_fptr() // lam118998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env118999 = arg_buffer[1];
//reading env and args
void* a118641118855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env118999))[5];
//not do dummy comment
void* lst = (decode_clo(env118999))[4];
//not do dummy comment
void* kont118736 = (decode_clo(env118999))[3];
//not do dummy comment
void* x = (decode_clo(env118999))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env118999))[1];

//if-clause
bool if_guard119672 = is_true(a118641118855);
if(if_guard119672)
{
void* x118642118856 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118736);
arg_buffer[2] = x118642118856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118736))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo119674 = alloc_clo(lam118996_fptr, 3);

//setting env list
clo119674[1] = member_u63;
clo119674[2] = x;
clo119674[3] = kont118736;
void* f118737118857 = encode_clo(clo119674);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118737118857;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam118998 = encode_clo(alloc_clo(lam118998_fptr, 0));

void* lam119000_fptr() // lam119000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119001 = arg_buffer[1];
//reading env and args
void* a118640118853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119001))[6];
//not do dummy comment
void* lst = (decode_clo(env119001))[5];
//not do dummy comment
void* kont118736 = (decode_clo(env119001))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env119001))[3];
//not do dummy comment
void* x = (decode_clo(env119001))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env119001))[1];

//creating new closure instance
void** clo119676 = alloc_clo(lam118998_fptr, 5);

//setting env list
clo119676[1] = member_u63;
clo119676[2] = x;
clo119676[3] = kont118736;
clo119676[4] = lst;
clo119676[5] = cdr;
void* f118738118854 = encode_clo(clo119676);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f118738118854;
arg_buffer[3] = a118640118853;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119000 = encode_clo(alloc_clo(lam119000_fptr, 0));

void* lam119002_fptr() // lam119002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119003 = arg_buffer[1];
//reading env and args
void* a118638118850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119003))[7];
//not do dummy comment
void* lst = (decode_clo(env119003))[6];
//not do dummy comment
void* kont118736 = (decode_clo(env119003))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env119003))[4];
//not do dummy comment
void* x = (decode_clo(env119003))[3];
//not do dummy comment
void* car = (decode_clo(env119003))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env119003))[1];

//if-clause
bool if_guard119677 = is_true(a118638118850);
if(if_guard119677)
{
void* x118639118851 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118736);
arg_buffer[2] = x118639118851;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118736))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo119679 = alloc_clo(lam119000_fptr, 6);

//setting env list
clo119679[1] = member_u63;
clo119679[2] = x;
clo119679[3] = equal_u63;
clo119679[4] = kont118736;
clo119679[5] = lst;
clo119679[6] = cdr;
void* f118739118852 = encode_clo(clo119679);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f118739118852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119002 = encode_clo(alloc_clo(lam119002_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119004 = arg_buffer[1];
//reading env and args
void* kont118736 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo119681 = alloc_clo(lam119002_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo119681[1] = member_u63;
clo119681[2] = car;
clo119681[3] = x;
clo119681[4] = equal_u63;
clo119681[5] = kont118736;
clo119681[6] = lst;
clo119681[7] = cdr;
void* f118740118849 = encode_clo(clo119681);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f118740118849;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam119005_fptr() // lam119005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119006 = arg_buffer[1];
//reading env and args
void* a118647118866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a118646118864 = (decode_clo(env119006))[4];
//not do dummy comment
void* fun = (decode_clo(env119006))[3];
//not do dummy comment
void* kont118741 = (decode_clo(env119006))[2];
//not do dummy comment
void* foldl = (decode_clo(env119006))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont118741;
arg_buffer[3] = fun;
arg_buffer[4] = a118646118864;
arg_buffer[5] = a118647118866;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119005 = encode_clo(alloc_clo(lam119005_fptr, 0));

void* lam119007_fptr() // lam119007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119008 = arg_buffer[1];
//reading env and args
void* a118646118864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119008))[5];
//not do dummy comment
void* lst = (decode_clo(env119008))[4];
//not do dummy comment
void* fun = (decode_clo(env119008))[3];
//not do dummy comment
void* kont118741 = (decode_clo(env119008))[2];
//not do dummy comment
void* foldl = (decode_clo(env119008))[1];

//creating new closure instance
void** clo119683 = alloc_clo(lam119005_fptr, 4);

//setting env list
clo119683[1] = foldl;
clo119683[2] = kont118741;
clo119683[3] = fun;
clo119683[4] = a118646118864;
void* f118742118865 = encode_clo(clo119683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118742118865;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119007 = encode_clo(alloc_clo(lam119007_fptr, 0));

void* lam119009_fptr() // lam119009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119010 = arg_buffer[1];
//reading env and args
void* a118645118862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119010))[6];
//not do dummy comment
void* lst = (decode_clo(env119010))[5];
//not do dummy comment
void* fun = (decode_clo(env119010))[4];
//not do dummy comment
void* acc = (decode_clo(env119010))[3];
//not do dummy comment
void* kont118741 = (decode_clo(env119010))[2];
//not do dummy comment
void* foldl = (decode_clo(env119010))[1];

//creating new closure instance
void** clo119685 = alloc_clo(lam119007_fptr, 5);

//setting env list
clo119685[1] = foldl;
clo119685[2] = kont118741;
clo119685[3] = fun;
clo119685[4] = lst;
clo119685[5] = cdr;
void* f118743118863 = encode_clo(clo119685);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f118743118863;
arg_buffer[3] = a118645118862;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119009 = encode_clo(alloc_clo(lam119009_fptr, 0));

void* lam119011_fptr() // lam119011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119012 = arg_buffer[1];
//reading env and args
void* a118644118860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119012))[7];
//not do dummy comment
void* lst = (decode_clo(env119012))[6];
//not do dummy comment
void* fun = (decode_clo(env119012))[5];
//not do dummy comment
void* acc = (decode_clo(env119012))[4];
//not do dummy comment
void* kont118741 = (decode_clo(env119012))[3];
//not do dummy comment
void* car = (decode_clo(env119012))[2];
//not do dummy comment
void* foldl = (decode_clo(env119012))[1];

//if-clause
bool if_guard119686 = is_true(a118644118860);
if(if_guard119686)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118741);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118741))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo119688 = alloc_clo(lam119009_fptr, 6);

//setting env list
clo119688[1] = foldl;
clo119688[2] = kont118741;
clo119688[3] = acc;
clo119688[4] = fun;
clo119688[5] = lst;
clo119688[6] = cdr;
void* f118744118861 = encode_clo(clo119688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f118744118861;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119011 = encode_clo(alloc_clo(lam119011_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119013 = arg_buffer[1];
//reading env and args
void* kont118741 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo119690 = alloc_clo(lam119011_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo119690[1] = foldl;
clo119690[2] = car;
clo119690[3] = kont118741;
clo119690[4] = acc;
clo119690[5] = fun;
clo119690[6] = lst;
clo119690[7] = cdr;
void* f118745118859 = encode_clo(clo119690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f118745118859;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam119014_fptr() // lam119014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119015 = arg_buffer[1];
//reading env and args
void* a118651118874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118746 = (decode_clo(env119015))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env119015))[2];
//not do dummy comment
void* a118649118870 = (decode_clo(env119015))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont118746;
arg_buffer[3] = a118649118870;
arg_buffer[4] = a118651118874;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119014 = encode_clo(alloc_clo(lam119014_fptr, 0));

void* lam119016_fptr() // lam119016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119017 = arg_buffer[1];
//reading env and args
void* a118650118872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118746 = (decode_clo(env119017))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env119017))[4];
//not do dummy comment
void* lst2 = (decode_clo(env119017))[3];
//not do dummy comment
void* a118649118870 = (decode_clo(env119017))[2];
//not do dummy comment
void* cons = (decode_clo(env119017))[1];

//creating new closure instance
void** clo119692 = alloc_clo(lam119014_fptr, 3);

//setting env list
clo119692[1] = a118649118870;
clo119692[2] = reverse_u45helper;
clo119692[3] = kont118746;
void* f118747118873 = encode_clo(clo119692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f118747118873;
arg_buffer[3] = a118650118872;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119016 = encode_clo(alloc_clo(lam119016_fptr, 0));

void* lam119018_fptr() // lam119018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119019 = arg_buffer[1];
//reading env and args
void* a118649118870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118746 = (decode_clo(env119019))[6];
//not do dummy comment
void* lst = (decode_clo(env119019))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env119019))[4];
//not do dummy comment
void* lst2 = (decode_clo(env119019))[3];
//not do dummy comment
void* car = (decode_clo(env119019))[2];
//not do dummy comment
void* cons = (decode_clo(env119019))[1];

//creating new closure instance
void** clo119694 = alloc_clo(lam119016_fptr, 5);

//setting env list
clo119694[1] = cons;
clo119694[2] = a118649118870;
clo119694[3] = lst2;
clo119694[4] = reverse_u45helper;
clo119694[5] = kont118746;
void* f118748118871 = encode_clo(clo119694);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f118748118871;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119018 = encode_clo(alloc_clo(lam119018_fptr, 0));

void* lam119020_fptr() // lam119020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119021 = arg_buffer[1];
//reading env and args
void* a118648118868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119021))[7];
//not do dummy comment
void* kont118746 = (decode_clo(env119021))[6];
//not do dummy comment
void* lst = (decode_clo(env119021))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env119021))[4];
//not do dummy comment
void* lst2 = (decode_clo(env119021))[3];
//not do dummy comment
void* car = (decode_clo(env119021))[2];
//not do dummy comment
void* cons = (decode_clo(env119021))[1];

//if-clause
bool if_guard119695 = is_true(a118648118868);
if(if_guard119695)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118746);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118746))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo119697 = alloc_clo(lam119018_fptr, 6);

//setting env list
clo119697[1] = cons;
clo119697[2] = car;
clo119697[3] = lst2;
clo119697[4] = reverse_u45helper;
clo119697[5] = lst;
clo119697[6] = kont118746;
void* f118749118869 = encode_clo(clo119697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118749118869;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119020 = encode_clo(alloc_clo(lam119020_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119022 = arg_buffer[1];
//reading env and args
void* kont118746 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo119699 = alloc_clo(lam119020_fptr, 7);

//setting env list
clo119699[1] = cons;
clo119699[2] = car;
clo119699[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo119699[4] = reverse_u45helper;
clo119699[5] = lst;
clo119699[6] = kont118746;
clo119699[7] = cdr;
void* f118750118867 = encode_clo(clo119699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f118750118867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam119023_fptr() // lam119023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119024 = arg_buffer[1];
//reading env and args
void* a118652118876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env119024))[3];
//not do dummy comment
void* kont118751 = (decode_clo(env119024))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env119024))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont118751;
arg_buffer[3] = lst;
arg_buffer[4] = a118652118876;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119023 = encode_clo(alloc_clo(lam119023_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119025 = arg_buffer[1];
//reading env and args
void* kont118751 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo119701 = alloc_clo(lam119023_fptr, 3);

//setting env list
clo119701[1] = reverse_u45helper;
clo119701[2] = kont118751;
clo119701[3] = lst;
void* f118752118875 = encode_clo(clo119701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f118752118875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam119026_fptr() // lam119026 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119027 = arg_buffer[1];
//reading env and args
void* x118655118881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118753 = (decode_clo(env119027))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118753);
arg_buffer[2] = x118655118881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118753))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119026 = encode_clo(alloc_clo(lam119026_fptr, 0));

void* lam119028_fptr() // lam119028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119029 = arg_buffer[1];
//reading env and args
void* a118660118890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118753 = (decode_clo(env119029))[4];
//not do dummy comment
void* a118656118883 = (decode_clo(env119029))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env119029))[2];
//not do dummy comment
void* a118658118886 = (decode_clo(env119029))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont118753;
arg_buffer[3] = a118656118883;
arg_buffer[4] = a118658118886;
arg_buffer[5] = a118660118890;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119028 = encode_clo(alloc_clo(lam119028_fptr, 0));

void* lam119030_fptr() // lam119030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119031 = arg_buffer[1];
//reading env and args
void* a118659118888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118753 = (decode_clo(env119031))[6];
//not do dummy comment
void* a118656118883 = (decode_clo(env119031))[5];
//not do dummy comment
void* a118658118886 = (decode_clo(env119031))[4];
//not do dummy comment
void* cons = (decode_clo(env119031))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env119031))[2];
//not do dummy comment
void* lst2 = (decode_clo(env119031))[1];

//creating new closure instance
void** clo119703 = alloc_clo(lam119028_fptr, 4);

//setting env list
clo119703[1] = a118658118886;
clo119703[2] = take_u45helper;
clo119703[3] = a118656118883;
clo119703[4] = kont118753;
void* f118755118889 = encode_clo(clo119703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f118755118889;
arg_buffer[3] = a118659118888;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119030 = encode_clo(alloc_clo(lam119030_fptr, 0));

void* lam119032_fptr() // lam119032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119033 = arg_buffer[1];
//reading env and args
void* a118658118886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env119033))[7];
//not do dummy comment
void* kont118753 = (decode_clo(env119033))[6];
//not do dummy comment
void* a118656118883 = (decode_clo(env119033))[5];
//not do dummy comment
void* car = (decode_clo(env119033))[4];
//not do dummy comment
void* cons = (decode_clo(env119033))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env119033))[2];
//not do dummy comment
void* lst2 = (decode_clo(env119033))[1];

//creating new closure instance
void** clo119705 = alloc_clo(lam119030_fptr, 6);

//setting env list
clo119705[1] = lst2;
clo119705[2] = take_u45helper;
clo119705[3] = cons;
clo119705[4] = a118658118886;
clo119705[5] = a118656118883;
clo119705[6] = kont118753;
void* f118756118887 = encode_clo(clo119705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f118756118887;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119032 = encode_clo(alloc_clo(lam119032_fptr, 0));

void* lam119035_fptr() // lam119035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119036 = arg_buffer[1];
//reading env and args
void* a118656118883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env119036))[8];
//not do dummy comment
void* kont118753 = (decode_clo(env119036))[7];
//not do dummy comment
void* cons = (decode_clo(env119036))[6];
//not do dummy comment
void* _u45 = (decode_clo(env119036))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env119036))[4];
//not do dummy comment
void* lst2 = (decode_clo(env119036))[3];
//not do dummy comment
void* n = (decode_clo(env119036))[2];
//not do dummy comment
void* car = (decode_clo(env119036))[1];
mpz_t* mpzvar119706 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119706, "1", 10);
void* a118657118884 = encode_mpz(mpzvar119706);

//creating new closure instance
void** clo119708 = alloc_clo(lam119032_fptr, 7);

//setting env list
clo119708[1] = lst2;
clo119708[2] = take_u45helper;
clo119708[3] = cons;
clo119708[4] = car;
clo119708[5] = a118656118883;
clo119708[6] = kont118753;
clo119708[7] = lst;
void* f118757118885 = encode_clo(clo119708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f118757118885;
arg_buffer[3] = n;
arg_buffer[4] = a118657118884;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119035 = encode_clo(alloc_clo(lam119035_fptr, 0));

void* lam119037_fptr() // lam119037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119038 = arg_buffer[1];
//reading env and args
void* a118654118879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119038))[10];
//not do dummy comment
void* lst = (decode_clo(env119038))[9];
//not do dummy comment
void* reverse = (decode_clo(env119038))[8];
//not do dummy comment
void* kont118753 = (decode_clo(env119038))[7];
//not do dummy comment
void* cons = (decode_clo(env119038))[6];
//not do dummy comment
void* _u45 = (decode_clo(env119038))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env119038))[4];
//not do dummy comment
void* lst2 = (decode_clo(env119038))[3];
//not do dummy comment
void* n = (decode_clo(env119038))[2];
//not do dummy comment
void* car = (decode_clo(env119038))[1];

//if-clause
bool if_guard119709 = is_true(a118654118879);
if(if_guard119709)
{

//creating new closure instance
void** clo119711 = alloc_clo(lam119026_fptr, 1);

//setting env list
clo119711[1] = kont118753;
void* f118754118880 = encode_clo(clo119711);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f118754118880;
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
void** clo119713 = alloc_clo(lam119035_fptr, 8);

//setting env list
clo119713[1] = car;
clo119713[2] = n;
clo119713[3] = lst2;
clo119713[4] = take_u45helper;
clo119713[5] = _u45;
clo119713[6] = cons;
clo119713[7] = kont118753;
clo119713[8] = lst;
void* f118758118882 = encode_clo(clo119713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118758118882;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119037 = encode_clo(alloc_clo(lam119037_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119040 = arg_buffer[1];
//reading env and args
void* kont118753 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar119714 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119714, "0", 10);
void* a118653118877 = encode_mpz(mpzvar119714);

//creating new closure instance
void** clo119716 = alloc_clo(lam119037_fptr, 10);

//setting env list
clo119716[1] = car;
clo119716[2] = n;
clo119716[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo119716[4] = take_u45helper;
clo119716[5] = _u45;
clo119716[6] = cons;
clo119716[7] = kont118753;
clo119716[8] = reverse;
clo119716[9] = lst;
clo119716[10] = cdr;
void* f118759118878 = encode_clo(clo119716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f118759118878;
arg_buffer[3] = n;
arg_buffer[4] = a118653118877;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam119041_fptr() // lam119041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119042 = arg_buffer[1];
//reading env and args
void* a118661118892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env119042))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env119042))[3];
//not do dummy comment
void* n = (decode_clo(env119042))[2];
//not do dummy comment
void* kont118760 = (decode_clo(env119042))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont118760;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a118661118892;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119041 = encode_clo(alloc_clo(lam119041_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119043 = arg_buffer[1];
//reading env and args
void* kont118760 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo119718 = alloc_clo(lam119041_fptr, 4);

//setting env list
clo119718[1] = kont118760;
clo119718[2] = n;
clo119718[3] = take_u45helper;
clo119718[4] = lst;
void* f118761118891 = encode_clo(clo119718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f118761118891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam119045_fptr() // lam119045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119046 = arg_buffer[1];
//reading env and args
void* a118666118900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118762 = (decode_clo(env119046))[3];
//not do dummy comment
void* a118664118896 = (decode_clo(env119046))[2];
//not do dummy comment
void* _u43 = (decode_clo(env119046))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont118762;
arg_buffer[3] = a118664118896;
arg_buffer[4] = a118666118900;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119045 = encode_clo(alloc_clo(lam119045_fptr, 0));

void* lam119047_fptr() // lam119047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119048 = arg_buffer[1];
//reading env and args
void* a118665118898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118762 = (decode_clo(env119048))[4];
//not do dummy comment
void* length = (decode_clo(env119048))[3];
//not do dummy comment
void* a118664118896 = (decode_clo(env119048))[2];
//not do dummy comment
void* _u43 = (decode_clo(env119048))[1];

//creating new closure instance
void** clo119720 = alloc_clo(lam119045_fptr, 3);

//setting env list
clo119720[1] = _u43;
clo119720[2] = a118664118896;
clo119720[3] = kont118762;
void* f118763118899 = encode_clo(clo119720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f118763118899;
arg_buffer[3] = a118665118898;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119047 = encode_clo(alloc_clo(lam119047_fptr, 0));

void* lam119050_fptr() // lam119050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119051 = arg_buffer[1];
//reading env and args
void* a118662118894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119051))[5];
//not do dummy comment
void* kont118762 = (decode_clo(env119051))[4];
//not do dummy comment
void* lst = (decode_clo(env119051))[3];
//not do dummy comment
void* length = (decode_clo(env119051))[2];
//not do dummy comment
void* _u43 = (decode_clo(env119051))[1];

//if-clause
bool if_guard119721 = is_true(a118662118894);
if(if_guard119721)
{
mpz_t* mpzvar119722 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119722, "0", 10);
void* x118663118895 = encode_mpz(mpzvar119722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118762);
arg_buffer[2] = x118663118895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118762))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar119723 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119723, "1", 10);
void* a118664118896 = encode_mpz(mpzvar119723);

//creating new closure instance
void** clo119725 = alloc_clo(lam119047_fptr, 4);

//setting env list
clo119725[1] = _u43;
clo119725[2] = a118664118896;
clo119725[3] = length;
clo119725[4] = kont118762;
void* f118764118897 = encode_clo(clo119725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118764118897;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119050 = encode_clo(alloc_clo(lam119050_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119052 = arg_buffer[1];
//reading env and args
void* kont118762 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo119727 = alloc_clo(lam119050_fptr, 5);

//setting env list
clo119727[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo119727[2] = length;
clo119727[3] = lst;
clo119727[4] = kont118762;
clo119727[5] = cdr;
void* f118765118893 = encode_clo(clo119727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f118765118893;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam119053_fptr() // lam119053 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119054 = arg_buffer[1];
//reading env and args
void* x118668118904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118766 = (decode_clo(env119054))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118766);
arg_buffer[2] = x118668118904;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118766))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119053 = encode_clo(alloc_clo(lam119053_fptr, 0));

void* lam119055_fptr() // lam119055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119056 = arg_buffer[1];
//reading env and args
void* a118672118912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a118670118908 = (decode_clo(env119056))[3];
//not do dummy comment
void* kont118766 = (decode_clo(env119056))[2];
//not do dummy comment
void* cons = (decode_clo(env119056))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont118766;
arg_buffer[3] = a118670118908;
arg_buffer[4] = a118672118912;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119055 = encode_clo(alloc_clo(lam119055_fptr, 0));

void* lam119057_fptr() // lam119057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119058 = arg_buffer[1];
//reading env and args
void* a118671118910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a118670118908 = (decode_clo(env119058))[5];
//not do dummy comment
void* proc = (decode_clo(env119058))[4];
//not do dummy comment
void* cons = (decode_clo(env119058))[3];
//not do dummy comment
void* map = (decode_clo(env119058))[2];
//not do dummy comment
void* kont118766 = (decode_clo(env119058))[1];

//creating new closure instance
void** clo119729 = alloc_clo(lam119055_fptr, 3);

//setting env list
clo119729[1] = cons;
clo119729[2] = kont118766;
clo119729[3] = a118670118908;
void* f118768118911 = encode_clo(clo119729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f118768118911;
arg_buffer[3] = proc;
arg_buffer[4] = a118671118910;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119057 = encode_clo(alloc_clo(lam119057_fptr, 0));

void* lam119059_fptr() // lam119059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119060 = arg_buffer[1];
//reading env and args
void* a118670118908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119060))[6];
//not do dummy comment
void* lst = (decode_clo(env119060))[5];
//not do dummy comment
void* proc = (decode_clo(env119060))[4];
//not do dummy comment
void* cons = (decode_clo(env119060))[3];
//not do dummy comment
void* map = (decode_clo(env119060))[2];
//not do dummy comment
void* kont118766 = (decode_clo(env119060))[1];

//creating new closure instance
void** clo119731 = alloc_clo(lam119057_fptr, 5);

//setting env list
clo119731[1] = kont118766;
clo119731[2] = map;
clo119731[3] = cons;
clo119731[4] = proc;
clo119731[5] = a118670118908;
void* f118769118909 = encode_clo(clo119731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118769118909;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119059 = encode_clo(alloc_clo(lam119059_fptr, 0));

void* lam119061_fptr() // lam119061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119062 = arg_buffer[1];
//reading env and args
void* a118669118906 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119062))[6];
//not do dummy comment
void* lst = (decode_clo(env119062))[5];
//not do dummy comment
void* proc = (decode_clo(env119062))[4];
//not do dummy comment
void* cons = (decode_clo(env119062))[3];
//not do dummy comment
void* map = (decode_clo(env119062))[2];
//not do dummy comment
void* kont118766 = (decode_clo(env119062))[1];

//creating new closure instance
void** clo119733 = alloc_clo(lam119059_fptr, 6);

//setting env list
clo119733[1] = kont118766;
clo119733[2] = map;
clo119733[3] = cons;
clo119733[4] = proc;
clo119733[5] = lst;
clo119733[6] = cdr;
void* f118770118907 = encode_clo(clo119733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f118770118907;
arg_buffer[3] = a118669118906;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119061 = encode_clo(alloc_clo(lam119061_fptr, 0));

void* lam119063_fptr() // lam119063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119064 = arg_buffer[1];
//reading env and args
void* a118667118902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env119064))[8];
//not do dummy comment
void* proc = (decode_clo(env119064))[7];
//not do dummy comment
void* car = (decode_clo(env119064))[6];
//not do dummy comment
void* cons = (decode_clo(env119064))[5];
//not do dummy comment
void* list = (decode_clo(env119064))[4];
//not do dummy comment
void* cdr = (decode_clo(env119064))[3];
//not do dummy comment
void* map = (decode_clo(env119064))[2];
//not do dummy comment
void* kont118766 = (decode_clo(env119064))[1];

//if-clause
bool if_guard119734 = is_true(a118667118902);
if(if_guard119734)
{

//creating new closure instance
void** clo119736 = alloc_clo(lam119053_fptr, 1);

//setting env list
clo119736[1] = kont118766;
void* f118767118903 = encode_clo(clo119736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f118767118903;
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
void** clo119738 = alloc_clo(lam119061_fptr, 6);

//setting env list
clo119738[1] = kont118766;
clo119738[2] = map;
clo119738[3] = cons;
clo119738[4] = proc;
clo119738[5] = lst;
clo119738[6] = cdr;
void* f118771118905 = encode_clo(clo119738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f118771118905;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119063 = encode_clo(alloc_clo(lam119063_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119065 = arg_buffer[1];
//reading env and args
void* kont118766 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo119740 = alloc_clo(lam119063_fptr, 8);

//setting env list
clo119740[1] = kont118766;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo119740[2] = map;
clo119740[3] = cdr;
clo119740[4] = list;
clo119740[5] = cons;
clo119740[6] = car;
clo119740[7] = proc;
clo119740[8] = lst;
void* f118772118901 = encode_clo(clo119740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f118772118901;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam119066_fptr() // lam119066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119067 = arg_buffer[1];
//reading env and args
void* x118674118916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118773 = (decode_clo(env119067))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118773);
arg_buffer[2] = x118674118916;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118773))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119066 = encode_clo(alloc_clo(lam119066_fptr, 0));

void* lam119068_fptr() // lam119068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119069 = arg_buffer[1];
//reading env and args
void* a118679118926 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a118677118922 = (decode_clo(env119069))[3];
//not do dummy comment
void* kont118773 = (decode_clo(env119069))[2];
//not do dummy comment
void* cons = (decode_clo(env119069))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont118773;
arg_buffer[3] = a118677118922;
arg_buffer[4] = a118679118926;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119068 = encode_clo(alloc_clo(lam119068_fptr, 0));

void* lam119070_fptr() // lam119070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119071 = arg_buffer[1];
//reading env and args
void* a118678118924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a118677118922 = (decode_clo(env119071))[5];
//not do dummy comment
void* op = (decode_clo(env119071))[4];
//not do dummy comment
void* kont118773 = (decode_clo(env119071))[3];
//not do dummy comment
void* filter = (decode_clo(env119071))[2];
//not do dummy comment
void* cons = (decode_clo(env119071))[1];

//creating new closure instance
void** clo119742 = alloc_clo(lam119068_fptr, 3);

//setting env list
clo119742[1] = cons;
clo119742[2] = kont118773;
clo119742[3] = a118677118922;
void* f118775118925 = encode_clo(clo119742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f118775118925;
arg_buffer[3] = op;
arg_buffer[4] = a118678118924;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119070 = encode_clo(alloc_clo(lam119070_fptr, 0));

void* lam119072_fptr() // lam119072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119073 = arg_buffer[1];
//reading env and args
void* a118677118922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119073))[6];
//not do dummy comment
void* lst = (decode_clo(env119073))[5];
//not do dummy comment
void* op = (decode_clo(env119073))[4];
//not do dummy comment
void* kont118773 = (decode_clo(env119073))[3];
//not do dummy comment
void* filter = (decode_clo(env119073))[2];
//not do dummy comment
void* cons = (decode_clo(env119073))[1];

//creating new closure instance
void** clo119744 = alloc_clo(lam119070_fptr, 5);

//setting env list
clo119744[1] = cons;
clo119744[2] = filter;
clo119744[3] = kont118773;
clo119744[4] = op;
clo119744[5] = a118677118922;
void* f118776118923 = encode_clo(clo119744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118776118923;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119072 = encode_clo(alloc_clo(lam119072_fptr, 0));

void* lam119074_fptr() // lam119074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119075 = arg_buffer[1];
//reading env and args
void* a118680118928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env119075))[3];
//not do dummy comment
void* kont118773 = (decode_clo(env119075))[2];
//not do dummy comment
void* filter = (decode_clo(env119075))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont118773;
arg_buffer[3] = op;
arg_buffer[4] = a118680118928;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119074 = encode_clo(alloc_clo(lam119074_fptr, 0));

void* lam119076_fptr() // lam119076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119077 = arg_buffer[1];
//reading env and args
void* a118676118920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119077))[7];
//not do dummy comment
void* lst = (decode_clo(env119077))[6];
//not do dummy comment
void* op = (decode_clo(env119077))[5];
//not do dummy comment
void* kont118773 = (decode_clo(env119077))[4];
//not do dummy comment
void* cons = (decode_clo(env119077))[3];
//not do dummy comment
void* filter = (decode_clo(env119077))[2];
//not do dummy comment
void* car = (decode_clo(env119077))[1];

//if-clause
bool if_guard119745 = is_true(a118676118920);
if(if_guard119745)
{

//creating new closure instance
void** clo119747 = alloc_clo(lam119072_fptr, 6);

//setting env list
clo119747[1] = cons;
clo119747[2] = filter;
clo119747[3] = kont118773;
clo119747[4] = op;
clo119747[5] = lst;
clo119747[6] = cdr;
void* f118777118921 = encode_clo(clo119747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f118777118921;
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
void** clo119749 = alloc_clo(lam119074_fptr, 3);

//setting env list
clo119749[1] = filter;
clo119749[2] = kont118773;
clo119749[3] = op;
void* f118778118927 = encode_clo(clo119749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118778118927;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119076 = encode_clo(alloc_clo(lam119076_fptr, 0));

void* lam119078_fptr() // lam119078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119079 = arg_buffer[1];
//reading env and args
void* a118675118918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119079))[7];
//not do dummy comment
void* lst = (decode_clo(env119079))[6];
//not do dummy comment
void* op = (decode_clo(env119079))[5];
//not do dummy comment
void* kont118773 = (decode_clo(env119079))[4];
//not do dummy comment
void* cons = (decode_clo(env119079))[3];
//not do dummy comment
void* filter = (decode_clo(env119079))[2];
//not do dummy comment
void* car = (decode_clo(env119079))[1];

//creating new closure instance
void** clo119751 = alloc_clo(lam119076_fptr, 7);

//setting env list
clo119751[1] = car;
clo119751[2] = filter;
clo119751[3] = cons;
clo119751[4] = kont118773;
clo119751[5] = op;
clo119751[6] = lst;
clo119751[7] = cdr;
void* f118779118919 = encode_clo(clo119751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f118779118919;
arg_buffer[3] = a118675118918;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119078 = encode_clo(alloc_clo(lam119078_fptr, 0));

void* lam119080_fptr() // lam119080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119081 = arg_buffer[1];
//reading env and args
void* a118673118914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env119081))[8];
//not do dummy comment
void* op = (decode_clo(env119081))[7];
//not do dummy comment
void* kont118773 = (decode_clo(env119081))[6];
//not do dummy comment
void* cons = (decode_clo(env119081))[5];
//not do dummy comment
void* list = (decode_clo(env119081))[4];
//not do dummy comment
void* cdr = (decode_clo(env119081))[3];
//not do dummy comment
void* filter = (decode_clo(env119081))[2];
//not do dummy comment
void* car = (decode_clo(env119081))[1];

//if-clause
bool if_guard119752 = is_true(a118673118914);
if(if_guard119752)
{

//creating new closure instance
void** clo119754 = alloc_clo(lam119066_fptr, 1);

//setting env list
clo119754[1] = kont118773;
void* f118774118915 = encode_clo(clo119754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f118774118915;
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
void** clo119756 = alloc_clo(lam119078_fptr, 7);

//setting env list
clo119756[1] = car;
clo119756[2] = filter;
clo119756[3] = cons;
clo119756[4] = kont118773;
clo119756[5] = op;
clo119756[6] = lst;
clo119756[7] = cdr;
void* f118780118917 = encode_clo(clo119756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f118780118917;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119080 = encode_clo(alloc_clo(lam119080_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119082 = arg_buffer[1];
//reading env and args
void* kont118773 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo119758 = alloc_clo(lam119080_fptr, 8);

//setting env list
clo119758[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo119758[2] = filter;
clo119758[3] = cdr;
clo119758[4] = list;
clo119758[5] = cons;
clo119758[6] = kont118773;
clo119758[7] = op;
clo119758[8] = lst;
void* f118781118913 = encode_clo(clo119758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f118781118913;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam119083_fptr() // lam119083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119084 = arg_buffer[1];
//reading env and args
void* a118685118936 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env119084))[3];
//not do dummy comment
void* kont118782 = (decode_clo(env119084))[2];
//not do dummy comment
void* a118683118933 = (decode_clo(env119084))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont118782;
arg_buffer[3] = a118683118933;
arg_buffer[4] = a118685118936;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119083 = encode_clo(alloc_clo(lam119083_fptr, 0));

void* lam119086_fptr() // lam119086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119087 = arg_buffer[1];
//reading env and args
void* a118683118933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env119087))[4];
//not do dummy comment
void* kont118782 = (decode_clo(env119087))[3];
//not do dummy comment
void* n = (decode_clo(env119087))[2];
//not do dummy comment
void* _u45 = (decode_clo(env119087))[1];
mpz_t* mpzvar119759 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119759, "1", 10);
void* a118684118934 = encode_mpz(mpzvar119759);

//creating new closure instance
void** clo119761 = alloc_clo(lam119083_fptr, 3);

//setting env list
clo119761[1] = a118683118933;
clo119761[2] = kont118782;
clo119761[3] = drop;
void* f118783118935 = encode_clo(clo119761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f118783118935;
arg_buffer[3] = n;
arg_buffer[4] = a118684118934;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119086 = encode_clo(alloc_clo(lam119086_fptr, 0));

void* lam119088_fptr() // lam119088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119089 = arg_buffer[1];
//reading env and args
void* a118682118931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119089))[6];
//not do dummy comment
void* kont118782 = (decode_clo(env119089))[5];
//not do dummy comment
void* n = (decode_clo(env119089))[4];
//not do dummy comment
void* _u45 = (decode_clo(env119089))[3];
//not do dummy comment
void* lst = (decode_clo(env119089))[2];
//not do dummy comment
void* drop = (decode_clo(env119089))[1];

//if-clause
bool if_guard119762 = is_true(a118682118931);
if(if_guard119762)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118782);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo119764 = alloc_clo(lam119086_fptr, 4);

//setting env list
clo119764[1] = _u45;
clo119764[2] = n;
clo119764[3] = kont118782;
clo119764[4] = drop;
void* f118784118932 = encode_clo(clo119764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118784118932;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119088 = encode_clo(alloc_clo(lam119088_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119091 = arg_buffer[1];
//reading env and args
void* kont118782 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar119765 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119765, "0", 10);
void* a118681118929 = encode_mpz(mpzvar119765);

//creating new closure instance
void** clo119767 = alloc_clo(lam119088_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo119767[1] = drop;
clo119767[2] = lst;
clo119767[3] = _u45;
clo119767[4] = n;
clo119767[5] = kont118782;
clo119767[6] = cdr;
void* f118785118930 = encode_clo(clo119767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f118785118930;
arg_buffer[3] = n;
arg_buffer[4] = a118681118929;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam119092_fptr() // lam119092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119093 = arg_buffer[1];
//reading env and args
void* a118689118944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a118687118940 = (decode_clo(env119093))[3];
//not do dummy comment
void* kont118786 = (decode_clo(env119093))[2];
//not do dummy comment
void* proc = (decode_clo(env119093))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont118786;
arg_buffer[3] = a118687118940;
arg_buffer[4] = a118689118944;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119092 = encode_clo(alloc_clo(lam119092_fptr, 0));

void* lam119094_fptr() // lam119094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119095 = arg_buffer[1];
//reading env and args
void* a118688118942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a118687118940 = (decode_clo(env119095))[5];
//not do dummy comment
void* foldr = (decode_clo(env119095))[4];
//not do dummy comment
void* kont118786 = (decode_clo(env119095))[3];
//not do dummy comment
void* proc = (decode_clo(env119095))[2];
//not do dummy comment
void* acc = (decode_clo(env119095))[1];

//creating new closure instance
void** clo119769 = alloc_clo(lam119092_fptr, 3);

//setting env list
clo119769[1] = proc;
clo119769[2] = kont118786;
clo119769[3] = a118687118940;
void* f118787118943 = encode_clo(clo119769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f118787118943;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a118688118942;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119094 = encode_clo(alloc_clo(lam119094_fptr, 0));

void* lam119096_fptr() // lam119096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119097 = arg_buffer[1];
//reading env and args
void* a118687118940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119097))[6];
//not do dummy comment
void* kont118786 = (decode_clo(env119097))[5];
//not do dummy comment
void* foldr = (decode_clo(env119097))[4];
//not do dummy comment
void* lst = (decode_clo(env119097))[3];
//not do dummy comment
void* proc = (decode_clo(env119097))[2];
//not do dummy comment
void* acc = (decode_clo(env119097))[1];

//creating new closure instance
void** clo119771 = alloc_clo(lam119094_fptr, 5);

//setting env list
clo119771[1] = acc;
clo119771[2] = proc;
clo119771[3] = kont118786;
clo119771[4] = foldr;
clo119771[5] = a118687118940;
void* f118788118941 = encode_clo(clo119771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118788118941;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119096 = encode_clo(alloc_clo(lam119096_fptr, 0));

void* lam119098_fptr() // lam119098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119099 = arg_buffer[1];
//reading env and args
void* a118686118938 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119099))[7];
//not do dummy comment
void* kont118786 = (decode_clo(env119099))[6];
//not do dummy comment
void* car = (decode_clo(env119099))[5];
//not do dummy comment
void* foldr = (decode_clo(env119099))[4];
//not do dummy comment
void* lst = (decode_clo(env119099))[3];
//not do dummy comment
void* proc = (decode_clo(env119099))[2];
//not do dummy comment
void* acc = (decode_clo(env119099))[1];

//if-clause
bool if_guard119772 = is_true(a118686118938);
if(if_guard119772)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118786);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118786))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo119774 = alloc_clo(lam119096_fptr, 6);

//setting env list
clo119774[1] = acc;
clo119774[2] = proc;
clo119774[3] = lst;
clo119774[4] = foldr;
clo119774[5] = kont118786;
clo119774[6] = cdr;
void* f118789118939 = encode_clo(clo119774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f118789118939;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119098 = encode_clo(alloc_clo(lam119098_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119100 = arg_buffer[1];
//reading env and args
void* kont118786 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo119776 = alloc_clo(lam119098_fptr, 7);

//setting env list
clo119776[1] = acc;
clo119776[2] = proc;
clo119776[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo119776[4] = foldr;
clo119776[5] = car;
clo119776[6] = kont118786;
clo119776[7] = cdr;
void* f118790118937 = encode_clo(clo119776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f118790118937;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam119101_fptr() // lam119101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119102 = arg_buffer[1];
//reading env and args
void* a118693118952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a118691118948 = (decode_clo(env119102))[3];
//not do dummy comment
void* cons = (decode_clo(env119102))[2];
//not do dummy comment
void* kont118791 = (decode_clo(env119102))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont118791;
arg_buffer[3] = a118691118948;
arg_buffer[4] = a118693118952;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119101 = encode_clo(alloc_clo(lam119101_fptr, 0));

void* lam119103_fptr() // lam119103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119104 = arg_buffer[1];
//reading env and args
void* a118692118950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env119104))[5];
//not do dummy comment
void* a118691118948 = (decode_clo(env119104))[4];
//not do dummy comment
void* lst2 = (decode_clo(env119104))[3];
//not do dummy comment
void* cons = (decode_clo(env119104))[2];
//not do dummy comment
void* kont118791 = (decode_clo(env119104))[1];

//creating new closure instance
void** clo119778 = alloc_clo(lam119101_fptr, 3);

//setting env list
clo119778[1] = kont118791;
clo119778[2] = cons;
clo119778[3] = a118691118948;
void* f118792118951 = encode_clo(clo119778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f118792118951;
arg_buffer[3] = a118692118950;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119103 = encode_clo(alloc_clo(lam119103_fptr, 0));

void* lam119105_fptr() // lam119105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119106 = arg_buffer[1];
//reading env and args
void* a118691118948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119106))[6];
//not do dummy comment
void* append = (decode_clo(env119106))[5];
//not do dummy comment
void* lst2 = (decode_clo(env119106))[4];
//not do dummy comment
void* lst1 = (decode_clo(env119106))[3];
//not do dummy comment
void* cons = (decode_clo(env119106))[2];
//not do dummy comment
void* kont118791 = (decode_clo(env119106))[1];

//creating new closure instance
void** clo119780 = alloc_clo(lam119103_fptr, 5);

//setting env list
clo119780[1] = kont118791;
clo119780[2] = cons;
clo119780[3] = lst2;
clo119780[4] = a118691118948;
clo119780[5] = append;
void* f118793118949 = encode_clo(clo119780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f118793118949;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119105 = encode_clo(alloc_clo(lam119105_fptr, 0));

void* lam119107_fptr() // lam119107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119108 = arg_buffer[1];
//reading env and args
void* a118690118946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env119108))[7];
//not do dummy comment
void* append = (decode_clo(env119108))[6];
//not do dummy comment
void* lst2 = (decode_clo(env119108))[5];
//not do dummy comment
void* lst1 = (decode_clo(env119108))[4];
//not do dummy comment
void* car = (decode_clo(env119108))[3];
//not do dummy comment
void* cons = (decode_clo(env119108))[2];
//not do dummy comment
void* kont118791 = (decode_clo(env119108))[1];

//if-clause
bool if_guard119781 = is_true(a118690118946);
if(if_guard119781)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118791);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118791))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo119783 = alloc_clo(lam119105_fptr, 6);

//setting env list
clo119783[1] = kont118791;
clo119783[2] = cons;
clo119783[3] = lst1;
clo119783[4] = lst2;
clo119783[5] = append;
clo119783[6] = cdr;
void* f118794118947 = encode_clo(clo119783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f118794118947;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam119107 = encode_clo(alloc_clo(lam119107_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119109 = arg_buffer[1];
//reading env and args
void* kont118791 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo119785 = alloc_clo(lam119107_fptr, 7);

//setting env list
clo119785[1] = kont118791;
clo119785[2] = cons;
clo119785[3] = car;
clo119785[4] = lst1;
clo119785[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo119785[6] = append;
clo119785[7] = cdr;
void* f118795118945 = encode_clo(clo119785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f118795118945;
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
void* _119110 = arg_buffer[1];
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

void* kont118796118953 = prim_car(lst);
void* lst118954 = prim_cdr(lst);
void* x118694118955 = apply_prim_hash(lst118954);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118796118953);
arg_buffer[2] = x118694118955;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118796118953))[0]);
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
void* _119111 = arg_buffer[1];
//reading env and args
void* kont118798 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x118695118956 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118798);
arg_buffer[2] = x118695118956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118798))[0]);
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
void* _119112 = arg_buffer[1];
//reading env and args
void* kont118799 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x118696118957 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118799);
arg_buffer[2] = x118696118957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118799))[0]);
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
void* _119113 = arg_buffer[1];
//reading env and args
void* kont118800 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x118697118958 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118800);
arg_buffer[2] = x118697118958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118800))[0]);
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
void* _119114 = arg_buffer[1];
//reading env and args
void* kont118801 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x118698118959 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118801);
arg_buffer[2] = x118698118959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118801))[0]);
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
void* _119120 = arg_buffer[1];
//reading env and args
void* kont118802 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar119786 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119786, "100", 10);
void* a118699118960 = encode_mpz(mpzvar119786);
mpz_t* mpzvar119787 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119787, "20", 10);
void* a118700118961 = encode_mpz(mpzvar119787);
mpz_t* mpzvar119788 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119788, "10", 10);
void* a118701118962 = encode_mpz(mpzvar119788);
mpz_t* mpzvar119789 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119789, "5", 10);
void* a118702118963 = encode_mpz(mpzvar119789);
mpz_t* mpzvar119790 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar119790, "1", 10);
void* a118703118964 = encode_mpz(mpzvar119790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = kont118802;
arg_buffer[3] = a118699118960;
arg_buffer[4] = a118700118961;
arg_buffer[5] = a118701118962;
arg_buffer[6] = a118702118963;
arg_buffer[7] = a118703118964;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam119121_fptr() // lam119121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env119122 = arg_buffer[1];
//reading env and args
void* x118704118966 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont118803 = (decode_clo(env119122))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont118803);
arg_buffer[2] = x118704118966;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont118803))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam119121 = encode_clo(alloc_clo(lam119121_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _119123 = arg_buffer[1];
//reading env and args
void* kont118803 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo119792 = alloc_clo(lam119121_fptr, 1);

//setting env list
clo119792[1] = kont118803;
void* f118804118965 = encode_clo(clo119792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f118804118965;
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

