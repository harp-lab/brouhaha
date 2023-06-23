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
void* _82899 = arg_buffer[1];
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

void* kont8264082740 = prim_car(lst);
void* lst82741 = prim_cdr(lst);
void* x8255482742 = apply_prim__u43(lst82741);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8264082740);
arg_buffer[2] = x8255482742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8264082740))[0]);
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
void* _82900 = arg_buffer[1];
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

void* kont8264282743 = prim_car(lst);
void* lst82744 = prim_cdr(lst);
void* x8255582745 = apply_prim__u45(lst82744);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8264282743);
arg_buffer[2] = x8255582745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8264282743))[0]);
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
void* _82901 = arg_buffer[1];
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

void* kont8264482746 = prim_car(lst);
void* lst82747 = prim_cdr(lst);
void* x8255682748 = apply_prim__u42(lst82747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8264482746);
arg_buffer[2] = x8255682748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8264482746))[0]);
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
void* _82902 = arg_buffer[1];
//reading env and args
void* kont82646 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8255782749 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82646);
arg_buffer[2] = x8255782749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82646))[0]);
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
void* _82903 = arg_buffer[1];
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

void* kont8264782750 = prim_car(lst);
void* lst82751 = prim_cdr(lst);
void* x8255882752 = apply_prim__u47(lst82751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8264782750);
arg_buffer[2] = x8255882752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8264782750))[0]);
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
void* _82904 = arg_buffer[1];
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

void* kont8264982753 = prim_car(lst);
void* lst82754 = prim_cdr(lst);
void* x8255982755 = apply_prim__u61(lst82754);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8264982753);
arg_buffer[2] = x8255982755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8264982753))[0]);
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
void* _82905 = arg_buffer[1];
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

void* kont8265182756 = prim_car(lst);
void* lst82757 = prim_cdr(lst);
void* x8256082758 = apply_prim__u62(lst82757);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8265182756);
arg_buffer[2] = x8256082758;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8265182756))[0]);
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
void* _82906 = arg_buffer[1];
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

void* kont8265382759 = prim_car(lst);
void* lst82760 = prim_cdr(lst);
void* x8256182761 = apply_prim__u60(lst82760);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8265382759);
arg_buffer[2] = x8256182761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8265382759))[0]);
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
void* _82907 = arg_buffer[1];
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

void* kont8265582762 = prim_car(lst);
void* lst82763 = prim_cdr(lst);
void* x8256282764 = apply_prim__u60_u61(lst82763);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8265582762);
arg_buffer[2] = x8256282764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8265582762))[0]);
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
void* _82908 = arg_buffer[1];
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

void* kont8265782765 = prim_car(lst);
void* lst82766 = prim_cdr(lst);
void* x8256382767 = apply_prim__u62_u61(lst82766);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8265782765);
arg_buffer[2] = x8256382767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8265782765))[0]);
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
void* _82909 = arg_buffer[1];
//reading env and args
void* kont82659 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8256482768 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82659);
arg_buffer[2] = x8256482768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82659))[0]);
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
void* _82910 = arg_buffer[1];
//reading env and args
void* kont82660 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8256582769 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82660);
arg_buffer[2] = x8256582769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82660))[0]);
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
void* _82911 = arg_buffer[1];
//reading env and args
void* kont82661 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8256682770 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82661);
arg_buffer[2] = x8256682770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82661))[0]);
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
void* _82912 = arg_buffer[1];
//reading env and args
void* kont82662 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8256782771 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82662);
arg_buffer[2] = x8256782771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82662))[0]);
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
void* _82913 = arg_buffer[1];
//reading env and args
void* kont82663 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8256882772 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82663);
arg_buffer[2] = x8256882772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82663))[0]);
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
void* _82914 = arg_buffer[1];
//reading env and args
void* kont82664 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8256982773 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82664);
arg_buffer[2] = x8256982773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82664))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam82915_fptr() // lam82915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82916 = arg_buffer[1];
//reading env and args
void* a8257282777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env82916))[3];
//not do dummy comment
void* a8257082774 = (decode_clo(env82916))[2];
//not do dummy comment
void* kont82665 = (decode_clo(env82916))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont82665;
arg_buffer[3] = a8257082774;
arg_buffer[4] = a8257282777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82915 = encode_clo(alloc_clo(lam82915_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82919 = arg_buffer[1];
//reading env and args
void* kont82665 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar83333 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83333, "0", 10);
void* a8257082774 = encode_mpz(mpzvar83333);
mpz_t* mpzvar83334 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83334, "2", 10);
void* a8257182775 = encode_mpz(mpzvar83334);

//creating new closure instance
void** clo83336 = alloc_clo(lam82915_fptr, 3);

//setting env list
clo83336[1] = kont82665;
clo83336[2] = a8257082774;
clo83336[3] = equal_u63;
void* f8266682776 = encode_clo(clo83336);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8266682776;
arg_buffer[3] = x;
arg_buffer[4] = a8257182775;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam82920_fptr() // lam82920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82921 = arg_buffer[1];
//reading env and args
void* a8257582781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env82921))[3];
//not do dummy comment
void* a8257382778 = (decode_clo(env82921))[2];
//not do dummy comment
void* kont82667 = (decode_clo(env82921))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont82667;
arg_buffer[3] = a8257382778;
arg_buffer[4] = a8257582781;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82920 = encode_clo(alloc_clo(lam82920_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82924 = arg_buffer[1];
//reading env and args
void* kont82667 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar83337 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83337, "1", 10);
void* a8257382778 = encode_mpz(mpzvar83337);
mpz_t* mpzvar83338 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83338, "2", 10);
void* a8257482779 = encode_mpz(mpzvar83338);

//creating new closure instance
void** clo83340 = alloc_clo(lam82920_fptr, 3);

//setting env list
clo83340[1] = kont82667;
clo83340[2] = a8257382778;
clo83340[3] = equal_u63;
void* f8266882780 = encode_clo(clo83340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8266882780;
arg_buffer[3] = x;
arg_buffer[4] = a8257482779;
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
void* _82925 = arg_buffer[1];
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

void* kont8266982782 = prim_car(x);
void* x82783 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8266982782);
arg_buffer[2] = x82783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8266982782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam82928_fptr() // lam82928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82929 = arg_buffer[1];
//reading env and args
void* a8258182793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82671 = (decode_clo(env82929))[3];
//not do dummy comment
void* x = (decode_clo(env82929))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env82929))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont82671;
arg_buffer[3] = x;
arg_buffer[4] = a8258182793;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82928 = encode_clo(alloc_clo(lam82928_fptr, 0));

void* lam82930_fptr() // lam82930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82931 = arg_buffer[1];
//reading env and args
void* a8257982790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82931))[5];
//not do dummy comment
void* kont82671 = (decode_clo(env82931))[4];
//not do dummy comment
void* lst = (decode_clo(env82931))[3];
//not do dummy comment
void* x = (decode_clo(env82931))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env82931))[1];

//if-clause
bool if_guard83341 = is_true(a8257982790);
if(if_guard83341)
{
void* x8258082791 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82671);
arg_buffer[2] = x8258082791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82671))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo83343 = alloc_clo(lam82928_fptr, 3);

//setting env list
clo83343[1] = member_u63;
clo83343[2] = x;
clo83343[3] = kont82671;
void* f8267282792 = encode_clo(clo83343);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8267282792;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82930 = encode_clo(alloc_clo(lam82930_fptr, 0));

void* lam82932_fptr() // lam82932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82933 = arg_buffer[1];
//reading env and args
void* a8257882788 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82933))[6];
//not do dummy comment
void* kont82671 = (decode_clo(env82933))[5];
//not do dummy comment
void* lst = (decode_clo(env82933))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env82933))[3];
//not do dummy comment
void* x = (decode_clo(env82933))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env82933))[1];

//creating new closure instance
void** clo83345 = alloc_clo(lam82930_fptr, 5);

//setting env list
clo83345[1] = member_u63;
clo83345[2] = x;
clo83345[3] = lst;
clo83345[4] = kont82671;
clo83345[5] = cdr;
void* f8267382789 = encode_clo(clo83345);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8267382789;
arg_buffer[3] = a8257882788;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82932 = encode_clo(alloc_clo(lam82932_fptr, 0));

void* lam82934_fptr() // lam82934 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82935 = arg_buffer[1];
//reading env and args
void* a8257682785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82935))[7];
//not do dummy comment
void* kont82671 = (decode_clo(env82935))[6];
//not do dummy comment
void* lst = (decode_clo(env82935))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env82935))[4];
//not do dummy comment
void* x = (decode_clo(env82935))[3];
//not do dummy comment
void* car = (decode_clo(env82935))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env82935))[1];

//if-clause
bool if_guard83346 = is_true(a8257682785);
if(if_guard83346)
{
void* x8257782786 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82671);
arg_buffer[2] = x8257782786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82671))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo83348 = alloc_clo(lam82932_fptr, 6);

//setting env list
clo83348[1] = member_u63;
clo83348[2] = x;
clo83348[3] = equal_u63;
clo83348[4] = lst;
clo83348[5] = kont82671;
clo83348[6] = cdr;
void* f8267482787 = encode_clo(clo83348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8267482787;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82934 = encode_clo(alloc_clo(lam82934_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82936 = arg_buffer[1];
//reading env and args
void* kont82671 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo83350 = alloc_clo(lam82934_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo83350[1] = member_u63;
clo83350[2] = car;
clo83350[3] = x;
clo83350[4] = equal_u63;
clo83350[5] = lst;
clo83350[6] = kont82671;
clo83350[7] = cdr;
void* f8267582784 = encode_clo(clo83350);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8267582784;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam82937_fptr() // lam82937 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82938 = arg_buffer[1];
//reading env and args
void* a8258582801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8258482799 = (decode_clo(env82938))[4];
//not do dummy comment
void* kont82676 = (decode_clo(env82938))[3];
//not do dummy comment
void* fun = (decode_clo(env82938))[2];
//not do dummy comment
void* foldl = (decode_clo(env82938))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont82676;
arg_buffer[3] = fun;
arg_buffer[4] = a8258482799;
arg_buffer[5] = a8258582801;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82937 = encode_clo(alloc_clo(lam82937_fptr, 0));

void* lam82939_fptr() // lam82939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82940 = arg_buffer[1];
//reading env and args
void* a8258482799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82940))[5];
//not do dummy comment
void* lst = (decode_clo(env82940))[4];
//not do dummy comment
void* kont82676 = (decode_clo(env82940))[3];
//not do dummy comment
void* fun = (decode_clo(env82940))[2];
//not do dummy comment
void* foldl = (decode_clo(env82940))[1];

//creating new closure instance
void** clo83352 = alloc_clo(lam82937_fptr, 4);

//setting env list
clo83352[1] = foldl;
clo83352[2] = fun;
clo83352[3] = kont82676;
clo83352[4] = a8258482799;
void* f8267782800 = encode_clo(clo83352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8267782800;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82939 = encode_clo(alloc_clo(lam82939_fptr, 0));

void* lam82941_fptr() // lam82941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82942 = arg_buffer[1];
//reading env and args
void* a8258382797 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82942))[6];
//not do dummy comment
void* lst = (decode_clo(env82942))[5];
//not do dummy comment
void* kont82676 = (decode_clo(env82942))[4];
//not do dummy comment
void* fun = (decode_clo(env82942))[3];
//not do dummy comment
void* acc = (decode_clo(env82942))[2];
//not do dummy comment
void* foldl = (decode_clo(env82942))[1];

//creating new closure instance
void** clo83354 = alloc_clo(lam82939_fptr, 5);

//setting env list
clo83354[1] = foldl;
clo83354[2] = fun;
clo83354[3] = kont82676;
clo83354[4] = lst;
clo83354[5] = cdr;
void* f8267882798 = encode_clo(clo83354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8267882798;
arg_buffer[3] = a8258382797;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82941 = encode_clo(alloc_clo(lam82941_fptr, 0));

void* lam82943_fptr() // lam82943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82944 = arg_buffer[1];
//reading env and args
void* a8258282795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82944))[7];
//not do dummy comment
void* lst = (decode_clo(env82944))[6];
//not do dummy comment
void* kont82676 = (decode_clo(env82944))[5];
//not do dummy comment
void* fun = (decode_clo(env82944))[4];
//not do dummy comment
void* acc = (decode_clo(env82944))[3];
//not do dummy comment
void* car = (decode_clo(env82944))[2];
//not do dummy comment
void* foldl = (decode_clo(env82944))[1];

//if-clause
bool if_guard83355 = is_true(a8258282795);
if(if_guard83355)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82676);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82676))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo83357 = alloc_clo(lam82941_fptr, 6);

//setting env list
clo83357[1] = foldl;
clo83357[2] = acc;
clo83357[3] = fun;
clo83357[4] = kont82676;
clo83357[5] = lst;
clo83357[6] = cdr;
void* f8267982796 = encode_clo(clo83357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8267982796;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82943 = encode_clo(alloc_clo(lam82943_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82945 = arg_buffer[1];
//reading env and args
void* kont82676 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo83359 = alloc_clo(lam82943_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo83359[1] = foldl;
clo83359[2] = car;
clo83359[3] = acc;
clo83359[4] = fun;
clo83359[5] = kont82676;
clo83359[6] = lst;
clo83359[7] = cdr;
void* f8268082794 = encode_clo(clo83359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8268082794;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam82946_fptr() // lam82946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82947 = arg_buffer[1];
//reading env and args
void* a8258982809 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env82947))[3];
//not do dummy comment
void* a8258782805 = (decode_clo(env82947))[2];
//not do dummy comment
void* kont82681 = (decode_clo(env82947))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont82681;
arg_buffer[3] = a8258782805;
arg_buffer[4] = a8258982809;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82946 = encode_clo(alloc_clo(lam82946_fptr, 0));

void* lam82948_fptr() // lam82948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82949 = arg_buffer[1];
//reading env and args
void* a8258882807 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env82949))[5];
//not do dummy comment
void* a8258782805 = (decode_clo(env82949))[4];
//not do dummy comment
void* lst2 = (decode_clo(env82949))[3];
//not do dummy comment
void* kont82681 = (decode_clo(env82949))[2];
//not do dummy comment
void* cons = (decode_clo(env82949))[1];

//creating new closure instance
void** clo83361 = alloc_clo(lam82946_fptr, 3);

//setting env list
clo83361[1] = kont82681;
clo83361[2] = a8258782805;
clo83361[3] = reverse_u45helper;
void* f8268282808 = encode_clo(clo83361);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8268282808;
arg_buffer[3] = a8258882807;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82948 = encode_clo(alloc_clo(lam82948_fptr, 0));

void* lam82950_fptr() // lam82950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82951 = arg_buffer[1];
//reading env and args
void* a8258782805 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env82951))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env82951))[5];
//not do dummy comment
void* lst2 = (decode_clo(env82951))[4];
//not do dummy comment
void* cons = (decode_clo(env82951))[3];
//not do dummy comment
void* kont82681 = (decode_clo(env82951))[2];
//not do dummy comment
void* car = (decode_clo(env82951))[1];

//creating new closure instance
void** clo83363 = alloc_clo(lam82948_fptr, 5);

//setting env list
clo83363[1] = cons;
clo83363[2] = kont82681;
clo83363[3] = lst2;
clo83363[4] = a8258782805;
clo83363[5] = reverse_u45helper;
void* f8268382806 = encode_clo(clo83363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8268382806;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82950 = encode_clo(alloc_clo(lam82950_fptr, 0));

void* lam82952_fptr() // lam82952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82953 = arg_buffer[1];
//reading env and args
void* a8258682803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82953))[7];
//not do dummy comment
void* lst = (decode_clo(env82953))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env82953))[5];
//not do dummy comment
void* lst2 = (decode_clo(env82953))[4];
//not do dummy comment
void* cons = (decode_clo(env82953))[3];
//not do dummy comment
void* kont82681 = (decode_clo(env82953))[2];
//not do dummy comment
void* car = (decode_clo(env82953))[1];

//if-clause
bool if_guard83364 = is_true(a8258682803);
if(if_guard83364)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82681);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82681))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo83366 = alloc_clo(lam82950_fptr, 6);

//setting env list
clo83366[1] = car;
clo83366[2] = kont82681;
clo83366[3] = cons;
clo83366[4] = lst2;
clo83366[5] = reverse_u45helper;
clo83366[6] = lst;
void* f8268482804 = encode_clo(clo83366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8268482804;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82952 = encode_clo(alloc_clo(lam82952_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82954 = arg_buffer[1];
//reading env and args
void* kont82681 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo83368 = alloc_clo(lam82952_fptr, 7);

//setting env list
clo83368[1] = car;
clo83368[2] = kont82681;
clo83368[3] = cons;
clo83368[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo83368[5] = reverse_u45helper;
clo83368[6] = lst;
clo83368[7] = cdr;
void* f8268582802 = encode_clo(clo83368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8268582802;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam82955_fptr() // lam82955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82956 = arg_buffer[1];
//reading env and args
void* a8259082811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82686 = (decode_clo(env82956))[3];
//not do dummy comment
void* lst = (decode_clo(env82956))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env82956))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont82686;
arg_buffer[3] = lst;
arg_buffer[4] = a8259082811;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82955 = encode_clo(alloc_clo(lam82955_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82957 = arg_buffer[1];
//reading env and args
void* kont82686 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo83370 = alloc_clo(lam82955_fptr, 3);

//setting env list
clo83370[1] = reverse_u45helper;
clo83370[2] = lst;
clo83370[3] = kont82686;
void* f8268782810 = encode_clo(clo83370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8268782810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam82958_fptr() // lam82958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82959 = arg_buffer[1];
//reading env and args
void* x8259382816 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82688 = (decode_clo(env82959))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82688);
arg_buffer[2] = x8259382816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82688))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82958 = encode_clo(alloc_clo(lam82958_fptr, 0));

void* lam82960_fptr() // lam82960 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82961 = arg_buffer[1];
//reading env and args
void* a8259882825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82688 = (decode_clo(env82961))[4];
//not do dummy comment
void* a8259482818 = (decode_clo(env82961))[3];
//not do dummy comment
void* a8259682821 = (decode_clo(env82961))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env82961))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont82688;
arg_buffer[3] = a8259482818;
arg_buffer[4] = a8259682821;
arg_buffer[5] = a8259882825;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82960 = encode_clo(alloc_clo(lam82960_fptr, 0));

void* lam82962_fptr() // lam82962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82963 = arg_buffer[1];
//reading env and args
void* a8259782823 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82688 = (decode_clo(env82963))[6];
//not do dummy comment
void* a8259482818 = (decode_clo(env82963))[5];
//not do dummy comment
void* a8259682821 = (decode_clo(env82963))[4];
//not do dummy comment
void* cons = (decode_clo(env82963))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env82963))[2];
//not do dummy comment
void* lst2 = (decode_clo(env82963))[1];

//creating new closure instance
void** clo83372 = alloc_clo(lam82960_fptr, 4);

//setting env list
clo83372[1] = take_u45helper;
clo83372[2] = a8259682821;
clo83372[3] = a8259482818;
clo83372[4] = kont82688;
void* f8269082824 = encode_clo(clo83372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8269082824;
arg_buffer[3] = a8259782823;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82962 = encode_clo(alloc_clo(lam82962_fptr, 0));

void* lam82964_fptr() // lam82964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82965 = arg_buffer[1];
//reading env and args
void* a8259682821 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8259482818 = (decode_clo(env82965))[7];
//not do dummy comment
void* car = (decode_clo(env82965))[6];
//not do dummy comment
void* cons = (decode_clo(env82965))[5];
//not do dummy comment
void* lst = (decode_clo(env82965))[4];
//not do dummy comment
void* kont82688 = (decode_clo(env82965))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env82965))[2];
//not do dummy comment
void* lst2 = (decode_clo(env82965))[1];

//creating new closure instance
void** clo83374 = alloc_clo(lam82962_fptr, 6);

//setting env list
clo83374[1] = lst2;
clo83374[2] = take_u45helper;
clo83374[3] = cons;
clo83374[4] = a8259682821;
clo83374[5] = a8259482818;
clo83374[6] = kont82688;
void* f8269182822 = encode_clo(clo83374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8269182822;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82964 = encode_clo(alloc_clo(lam82964_fptr, 0));

void* lam82967_fptr() // lam82967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82968 = arg_buffer[1];
//reading env and args
void* a8259482818 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env82968))[8];
//not do dummy comment
void* _u45 = (decode_clo(env82968))[7];
//not do dummy comment
void* lst = (decode_clo(env82968))[6];
//not do dummy comment
void* kont82688 = (decode_clo(env82968))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env82968))[4];
//not do dummy comment
void* lst2 = (decode_clo(env82968))[3];
//not do dummy comment
void* n = (decode_clo(env82968))[2];
//not do dummy comment
void* car = (decode_clo(env82968))[1];
mpz_t* mpzvar83375 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83375, "1", 10);
void* a8259582819 = encode_mpz(mpzvar83375);

//creating new closure instance
void** clo83377 = alloc_clo(lam82964_fptr, 7);

//setting env list
clo83377[1] = lst2;
clo83377[2] = take_u45helper;
clo83377[3] = kont82688;
clo83377[4] = lst;
clo83377[5] = cons;
clo83377[6] = car;
clo83377[7] = a8259482818;
void* f8269282820 = encode_clo(clo83377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8269282820;
arg_buffer[3] = n;
arg_buffer[4] = a8259582819;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82967 = encode_clo(alloc_clo(lam82967_fptr, 0));

void* lam82969_fptr() // lam82969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82970 = arg_buffer[1];
//reading env and args
void* a8259282814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82970))[10];
//not do dummy comment
void* reverse = (decode_clo(env82970))[9];
//not do dummy comment
void* cons = (decode_clo(env82970))[8];
//not do dummy comment
void* _u45 = (decode_clo(env82970))[7];
//not do dummy comment
void* lst = (decode_clo(env82970))[6];
//not do dummy comment
void* kont82688 = (decode_clo(env82970))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env82970))[4];
//not do dummy comment
void* lst2 = (decode_clo(env82970))[3];
//not do dummy comment
void* n = (decode_clo(env82970))[2];
//not do dummy comment
void* car = (decode_clo(env82970))[1];

//if-clause
bool if_guard83378 = is_true(a8259282814);
if(if_guard83378)
{

//creating new closure instance
void** clo83380 = alloc_clo(lam82958_fptr, 1);

//setting env list
clo83380[1] = kont82688;
void* f8268982815 = encode_clo(clo83380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8268982815;
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
void** clo83382 = alloc_clo(lam82967_fptr, 8);

//setting env list
clo83382[1] = car;
clo83382[2] = n;
clo83382[3] = lst2;
clo83382[4] = take_u45helper;
clo83382[5] = kont82688;
clo83382[6] = lst;
clo83382[7] = _u45;
clo83382[8] = cons;
void* f8269382817 = encode_clo(clo83382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8269382817;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82969 = encode_clo(alloc_clo(lam82969_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82972 = arg_buffer[1];
//reading env and args
void* kont82688 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar83383 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83383, "0", 10);
void* a8259182812 = encode_mpz(mpzvar83383);

//creating new closure instance
void** clo83385 = alloc_clo(lam82969_fptr, 10);

//setting env list
clo83385[1] = car;
clo83385[2] = n;
clo83385[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo83385[4] = take_u45helper;
clo83385[5] = kont82688;
clo83385[6] = lst;
clo83385[7] = _u45;
clo83385[8] = cons;
clo83385[9] = reverse;
clo83385[10] = cdr;
void* f8269482813 = encode_clo(clo83385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8269482813;
arg_buffer[3] = n;
arg_buffer[4] = a8259182812;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam82973_fptr() // lam82973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82974 = arg_buffer[1];
//reading env and args
void* a8259982827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env82974))[4];
//not do dummy comment
void* kont82695 = (decode_clo(env82974))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env82974))[2];
//not do dummy comment
void* n = (decode_clo(env82974))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont82695;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8259982827;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82973 = encode_clo(alloc_clo(lam82973_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82975 = arg_buffer[1];
//reading env and args
void* kont82695 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo83387 = alloc_clo(lam82973_fptr, 4);

//setting env list
clo83387[1] = n;
clo83387[2] = take_u45helper;
clo83387[3] = kont82695;
clo83387[4] = lst;
void* f8269682826 = encode_clo(clo83387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8269682826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam82977_fptr() // lam82977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82978 = arg_buffer[1];
//reading env and args
void* a8260482835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8260282831 = (decode_clo(env82978))[3];
//not do dummy comment
void* _u43 = (decode_clo(env82978))[2];
//not do dummy comment
void* kont82697 = (decode_clo(env82978))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont82697;
arg_buffer[3] = a8260282831;
arg_buffer[4] = a8260482835;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82977 = encode_clo(alloc_clo(lam82977_fptr, 0));

void* lam82979_fptr() // lam82979 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82980 = arg_buffer[1];
//reading env and args
void* a8260382833 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8260282831 = (decode_clo(env82980))[4];
//not do dummy comment
void* length = (decode_clo(env82980))[3];
//not do dummy comment
void* _u43 = (decode_clo(env82980))[2];
//not do dummy comment
void* kont82697 = (decode_clo(env82980))[1];

//creating new closure instance
void** clo83389 = alloc_clo(lam82977_fptr, 3);

//setting env list
clo83389[1] = kont82697;
clo83389[2] = _u43;
clo83389[3] = a8260282831;
void* f8269882834 = encode_clo(clo83389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8269882834;
arg_buffer[3] = a8260382833;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82979 = encode_clo(alloc_clo(lam82979_fptr, 0));

void* lam82982_fptr() // lam82982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82983 = arg_buffer[1];
//reading env and args
void* a8260082829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82983))[5];
//not do dummy comment
void* lst = (decode_clo(env82983))[4];
//not do dummy comment
void* length = (decode_clo(env82983))[3];
//not do dummy comment
void* _u43 = (decode_clo(env82983))[2];
//not do dummy comment
void* kont82697 = (decode_clo(env82983))[1];

//if-clause
bool if_guard83390 = is_true(a8260082829);
if(if_guard83390)
{
mpz_t* mpzvar83391 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83391, "0", 10);
void* x8260182830 = encode_mpz(mpzvar83391);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82697);
arg_buffer[2] = x8260182830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82697))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar83392 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83392, "1", 10);
void* a8260282831 = encode_mpz(mpzvar83392);

//creating new closure instance
void** clo83394 = alloc_clo(lam82979_fptr, 4);

//setting env list
clo83394[1] = kont82697;
clo83394[2] = _u43;
clo83394[3] = length;
clo83394[4] = a8260282831;
void* f8269982832 = encode_clo(clo83394);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8269982832;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82982 = encode_clo(alloc_clo(lam82982_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82984 = arg_buffer[1];
//reading env and args
void* kont82697 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo83396 = alloc_clo(lam82982_fptr, 5);

//setting env list
clo83396[1] = kont82697;
clo83396[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo83396[3] = length;
clo83396[4] = lst;
clo83396[5] = cdr;
void* f8270082828 = encode_clo(clo83396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8270082828;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam82985_fptr() // lam82985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82986 = arg_buffer[1];
//reading env and args
void* x8260682839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82701 = (decode_clo(env82986))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82701);
arg_buffer[2] = x8260682839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82701))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82985 = encode_clo(alloc_clo(lam82985_fptr, 0));

void* lam82987_fptr() // lam82987 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82988 = arg_buffer[1];
//reading env and args
void* a8261082847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82701 = (decode_clo(env82988))[3];
//not do dummy comment
void* cons = (decode_clo(env82988))[2];
//not do dummy comment
void* a8260882843 = (decode_clo(env82988))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont82701;
arg_buffer[3] = a8260882843;
arg_buffer[4] = a8261082847;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82987 = encode_clo(alloc_clo(lam82987_fptr, 0));

void* lam82989_fptr() // lam82989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82990 = arg_buffer[1];
//reading env and args
void* a8260982845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82701 = (decode_clo(env82990))[5];
//not do dummy comment
void* map = (decode_clo(env82990))[4];
//not do dummy comment
void* proc = (decode_clo(env82990))[3];
//not do dummy comment
void* cons = (decode_clo(env82990))[2];
//not do dummy comment
void* a8260882843 = (decode_clo(env82990))[1];

//creating new closure instance
void** clo83398 = alloc_clo(lam82987_fptr, 3);

//setting env list
clo83398[1] = a8260882843;
clo83398[2] = cons;
clo83398[3] = kont82701;
void* f8270382846 = encode_clo(clo83398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8270382846;
arg_buffer[3] = proc;
arg_buffer[4] = a8260982845;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82989 = encode_clo(alloc_clo(lam82989_fptr, 0));

void* lam82991_fptr() // lam82991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82992 = arg_buffer[1];
//reading env and args
void* a8260882843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82992))[6];
//not do dummy comment
void* kont82701 = (decode_clo(env82992))[5];
//not do dummy comment
void* lst = (decode_clo(env82992))[4];
//not do dummy comment
void* map = (decode_clo(env82992))[3];
//not do dummy comment
void* proc = (decode_clo(env82992))[2];
//not do dummy comment
void* cons = (decode_clo(env82992))[1];

//creating new closure instance
void** clo83400 = alloc_clo(lam82989_fptr, 5);

//setting env list
clo83400[1] = a8260882843;
clo83400[2] = cons;
clo83400[3] = proc;
clo83400[4] = map;
clo83400[5] = kont82701;
void* f8270482844 = encode_clo(clo83400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8270482844;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82991 = encode_clo(alloc_clo(lam82991_fptr, 0));

void* lam82993_fptr() // lam82993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82994 = arg_buffer[1];
//reading env and args
void* a8260782841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82994))[6];
//not do dummy comment
void* kont82701 = (decode_clo(env82994))[5];
//not do dummy comment
void* lst = (decode_clo(env82994))[4];
//not do dummy comment
void* map = (decode_clo(env82994))[3];
//not do dummy comment
void* proc = (decode_clo(env82994))[2];
//not do dummy comment
void* cons = (decode_clo(env82994))[1];

//creating new closure instance
void** clo83402 = alloc_clo(lam82991_fptr, 6);

//setting env list
clo83402[1] = cons;
clo83402[2] = proc;
clo83402[3] = map;
clo83402[4] = lst;
clo83402[5] = kont82701;
clo83402[6] = cdr;
void* f8270582842 = encode_clo(clo83402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8270582842;
arg_buffer[3] = a8260782841;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82993 = encode_clo(alloc_clo(lam82993_fptr, 0));

void* lam82995_fptr() // lam82995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82996 = arg_buffer[1];
//reading env and args
void* a8260582837 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82701 = (decode_clo(env82996))[8];
//not do dummy comment
void* lst = (decode_clo(env82996))[7];
//not do dummy comment
void* map = (decode_clo(env82996))[6];
//not do dummy comment
void* proc = (decode_clo(env82996))[5];
//not do dummy comment
void* car = (decode_clo(env82996))[4];
//not do dummy comment
void* cons = (decode_clo(env82996))[3];
//not do dummy comment
void* list = (decode_clo(env82996))[2];
//not do dummy comment
void* cdr = (decode_clo(env82996))[1];

//if-clause
bool if_guard83403 = is_true(a8260582837);
if(if_guard83403)
{

//creating new closure instance
void** clo83405 = alloc_clo(lam82985_fptr, 1);

//setting env list
clo83405[1] = kont82701;
void* f8270282838 = encode_clo(clo83405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8270282838;
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
void** clo83407 = alloc_clo(lam82993_fptr, 6);

//setting env list
clo83407[1] = cons;
clo83407[2] = proc;
clo83407[3] = map;
clo83407[4] = lst;
clo83407[5] = kont82701;
clo83407[6] = cdr;
void* f8270682840 = encode_clo(clo83407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8270682840;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82995 = encode_clo(alloc_clo(lam82995_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82997 = arg_buffer[1];
//reading env and args
void* kont82701 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo83409 = alloc_clo(lam82995_fptr, 8);

//setting env list
clo83409[1] = cdr;
clo83409[2] = list;
clo83409[3] = cons;
clo83409[4] = car;
clo83409[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo83409[6] = map;
clo83409[7] = lst;
clo83409[8] = kont82701;
void* f8270782836 = encode_clo(clo83409);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8270782836;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam82998_fptr() // lam82998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82999 = arg_buffer[1];
//reading env and args
void* x8261282851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82708 = (decode_clo(env82999))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82708);
arg_buffer[2] = x8261282851;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82708))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82998 = encode_clo(alloc_clo(lam82998_fptr, 0));

void* lam83000_fptr() // lam83000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83001 = arg_buffer[1];
//reading env and args
void* a8261782861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82708 = (decode_clo(env83001))[3];
//not do dummy comment
void* a8261582857 = (decode_clo(env83001))[2];
//not do dummy comment
void* cons = (decode_clo(env83001))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont82708;
arg_buffer[3] = a8261582857;
arg_buffer[4] = a8261782861;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83000 = encode_clo(alloc_clo(lam83000_fptr, 0));

void* lam83002_fptr() // lam83002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83003 = arg_buffer[1];
//reading env and args
void* a8261682859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env83003))[5];
//not do dummy comment
void* kont82708 = (decode_clo(env83003))[4];
//not do dummy comment
void* cons = (decode_clo(env83003))[3];
//not do dummy comment
void* a8261582857 = (decode_clo(env83003))[2];
//not do dummy comment
void* filter = (decode_clo(env83003))[1];

//creating new closure instance
void** clo83411 = alloc_clo(lam83000_fptr, 3);

//setting env list
clo83411[1] = cons;
clo83411[2] = a8261582857;
clo83411[3] = kont82708;
void* f8271082860 = encode_clo(clo83411);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8271082860;
arg_buffer[3] = op;
arg_buffer[4] = a8261682859;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83002 = encode_clo(alloc_clo(lam83002_fptr, 0));

void* lam83004_fptr() // lam83004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83005 = arg_buffer[1];
//reading env and args
void* a8261582857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83005))[6];
//not do dummy comment
void* lst = (decode_clo(env83005))[5];
//not do dummy comment
void* op = (decode_clo(env83005))[4];
//not do dummy comment
void* kont82708 = (decode_clo(env83005))[3];
//not do dummy comment
void* filter = (decode_clo(env83005))[2];
//not do dummy comment
void* cons = (decode_clo(env83005))[1];

//creating new closure instance
void** clo83413 = alloc_clo(lam83002_fptr, 5);

//setting env list
clo83413[1] = filter;
clo83413[2] = a8261582857;
clo83413[3] = cons;
clo83413[4] = kont82708;
clo83413[5] = op;
void* f8271182858 = encode_clo(clo83413);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8271182858;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83004 = encode_clo(alloc_clo(lam83004_fptr, 0));

void* lam83006_fptr() // lam83006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83007 = arg_buffer[1];
//reading env and args
void* a8261882863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env83007))[3];
//not do dummy comment
void* kont82708 = (decode_clo(env83007))[2];
//not do dummy comment
void* filter = (decode_clo(env83007))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont82708;
arg_buffer[3] = op;
arg_buffer[4] = a8261882863;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83006 = encode_clo(alloc_clo(lam83006_fptr, 0));

void* lam83008_fptr() // lam83008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83009 = arg_buffer[1];
//reading env and args
void* a8261482855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83009))[7];
//not do dummy comment
void* lst = (decode_clo(env83009))[6];
//not do dummy comment
void* op = (decode_clo(env83009))[5];
//not do dummy comment
void* kont82708 = (decode_clo(env83009))[4];
//not do dummy comment
void* cons = (decode_clo(env83009))[3];
//not do dummy comment
void* filter = (decode_clo(env83009))[2];
//not do dummy comment
void* car = (decode_clo(env83009))[1];

//if-clause
bool if_guard83414 = is_true(a8261482855);
if(if_guard83414)
{

//creating new closure instance
void** clo83416 = alloc_clo(lam83004_fptr, 6);

//setting env list
clo83416[1] = cons;
clo83416[2] = filter;
clo83416[3] = kont82708;
clo83416[4] = op;
clo83416[5] = lst;
clo83416[6] = cdr;
void* f8271282856 = encode_clo(clo83416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8271282856;
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
void** clo83418 = alloc_clo(lam83006_fptr, 3);

//setting env list
clo83418[1] = filter;
clo83418[2] = kont82708;
clo83418[3] = op;
void* f8271382862 = encode_clo(clo83418);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8271382862;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83008 = encode_clo(alloc_clo(lam83008_fptr, 0));

void* lam83010_fptr() // lam83010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83011 = arg_buffer[1];
//reading env and args
void* a8261382853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83011))[7];
//not do dummy comment
void* lst = (decode_clo(env83011))[6];
//not do dummy comment
void* op = (decode_clo(env83011))[5];
//not do dummy comment
void* kont82708 = (decode_clo(env83011))[4];
//not do dummy comment
void* cons = (decode_clo(env83011))[3];
//not do dummy comment
void* filter = (decode_clo(env83011))[2];
//not do dummy comment
void* car = (decode_clo(env83011))[1];

//creating new closure instance
void** clo83420 = alloc_clo(lam83008_fptr, 7);

//setting env list
clo83420[1] = car;
clo83420[2] = filter;
clo83420[3] = cons;
clo83420[4] = kont82708;
clo83420[5] = op;
clo83420[6] = lst;
clo83420[7] = cdr;
void* f8271482854 = encode_clo(clo83420);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8271482854;
arg_buffer[3] = a8261382853;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83010 = encode_clo(alloc_clo(lam83010_fptr, 0));

void* lam83012_fptr() // lam83012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83013 = arg_buffer[1];
//reading env and args
void* a8261182849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83013))[8];
//not do dummy comment
void* op = (decode_clo(env83013))[7];
//not do dummy comment
void* kont82708 = (decode_clo(env83013))[6];
//not do dummy comment
void* cons = (decode_clo(env83013))[5];
//not do dummy comment
void* list = (decode_clo(env83013))[4];
//not do dummy comment
void* cdr = (decode_clo(env83013))[3];
//not do dummy comment
void* filter = (decode_clo(env83013))[2];
//not do dummy comment
void* car = (decode_clo(env83013))[1];

//if-clause
bool if_guard83421 = is_true(a8261182849);
if(if_guard83421)
{

//creating new closure instance
void** clo83423 = alloc_clo(lam82998_fptr, 1);

//setting env list
clo83423[1] = kont82708;
void* f8270982850 = encode_clo(clo83423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8270982850;
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
void** clo83425 = alloc_clo(lam83010_fptr, 7);

//setting env list
clo83425[1] = car;
clo83425[2] = filter;
clo83425[3] = cons;
clo83425[4] = kont82708;
clo83425[5] = op;
clo83425[6] = lst;
clo83425[7] = cdr;
void* f8271582852 = encode_clo(clo83425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8271582852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83012 = encode_clo(alloc_clo(lam83012_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83014 = arg_buffer[1];
//reading env and args
void* kont82708 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo83427 = alloc_clo(lam83012_fptr, 8);

//setting env list
clo83427[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo83427[2] = filter;
clo83427[3] = cdr;
clo83427[4] = list;
clo83427[5] = cons;
clo83427[6] = kont82708;
clo83427[7] = op;
clo83427[8] = lst;
void* f8271682848 = encode_clo(clo83427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8271682848;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam83015_fptr() // lam83015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83016 = arg_buffer[1];
//reading env and args
void* a8262382871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82717 = (decode_clo(env83016))[3];
//not do dummy comment
void* drop = (decode_clo(env83016))[2];
//not do dummy comment
void* a8262182868 = (decode_clo(env83016))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont82717;
arg_buffer[3] = a8262182868;
arg_buffer[4] = a8262382871;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83015 = encode_clo(alloc_clo(lam83015_fptr, 0));

void* lam83018_fptr() // lam83018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83019 = arg_buffer[1];
//reading env and args
void* a8262182868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82717 = (decode_clo(env83019))[4];
//not do dummy comment
void* drop = (decode_clo(env83019))[3];
//not do dummy comment
void* n = (decode_clo(env83019))[2];
//not do dummy comment
void* _u45 = (decode_clo(env83019))[1];
mpz_t* mpzvar83428 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83428, "1", 10);
void* a8262282869 = encode_mpz(mpzvar83428);

//creating new closure instance
void** clo83430 = alloc_clo(lam83015_fptr, 3);

//setting env list
clo83430[1] = a8262182868;
clo83430[2] = drop;
clo83430[3] = kont82717;
void* f8271882870 = encode_clo(clo83430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8271882870;
arg_buffer[3] = n;
arg_buffer[4] = a8262282869;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83018 = encode_clo(alloc_clo(lam83018_fptr, 0));

void* lam83020_fptr() // lam83020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83021 = arg_buffer[1];
//reading env and args
void* a8262082866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83021))[6];
//not do dummy comment
void* kont82717 = (decode_clo(env83021))[5];
//not do dummy comment
void* n = (decode_clo(env83021))[4];
//not do dummy comment
void* _u45 = (decode_clo(env83021))[3];
//not do dummy comment
void* lst = (decode_clo(env83021))[2];
//not do dummy comment
void* drop = (decode_clo(env83021))[1];

//if-clause
bool if_guard83431 = is_true(a8262082866);
if(if_guard83431)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82717);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82717))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo83433 = alloc_clo(lam83018_fptr, 4);

//setting env list
clo83433[1] = _u45;
clo83433[2] = n;
clo83433[3] = drop;
clo83433[4] = kont82717;
void* f8271982867 = encode_clo(clo83433);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8271982867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83020 = encode_clo(alloc_clo(lam83020_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83023 = arg_buffer[1];
//reading env and args
void* kont82717 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar83434 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83434, "0", 10);
void* a8261982864 = encode_mpz(mpzvar83434);

//creating new closure instance
void** clo83436 = alloc_clo(lam83020_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo83436[1] = drop;
clo83436[2] = lst;
clo83436[3] = _u45;
clo83436[4] = n;
clo83436[5] = kont82717;
clo83436[6] = cdr;
void* f8272082865 = encode_clo(clo83436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8272082865;
arg_buffer[3] = n;
arg_buffer[4] = a8261982864;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam83024_fptr() // lam83024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83025 = arg_buffer[1];
//reading env and args
void* a8262782879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82721 = (decode_clo(env83025))[3];
//not do dummy comment
void* proc = (decode_clo(env83025))[2];
//not do dummy comment
void* a8262582875 = (decode_clo(env83025))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont82721;
arg_buffer[3] = a8262582875;
arg_buffer[4] = a8262782879;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83024 = encode_clo(alloc_clo(lam83024_fptr, 0));

void* lam83026_fptr() // lam83026 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83027 = arg_buffer[1];
//reading env and args
void* a8262682877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env83027))[5];
//not do dummy comment
void* kont82721 = (decode_clo(env83027))[4];
//not do dummy comment
void* a8262582875 = (decode_clo(env83027))[3];
//not do dummy comment
void* proc = (decode_clo(env83027))[2];
//not do dummy comment
void* acc = (decode_clo(env83027))[1];

//creating new closure instance
void** clo83438 = alloc_clo(lam83024_fptr, 3);

//setting env list
clo83438[1] = a8262582875;
clo83438[2] = proc;
clo83438[3] = kont82721;
void* f8272282878 = encode_clo(clo83438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8272282878;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8262682877;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83026 = encode_clo(alloc_clo(lam83026_fptr, 0));

void* lam83028_fptr() // lam83028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83029 = arg_buffer[1];
//reading env and args
void* a8262582875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83029))[6];
//not do dummy comment
void* kont82721 = (decode_clo(env83029))[5];
//not do dummy comment
void* foldr = (decode_clo(env83029))[4];
//not do dummy comment
void* lst = (decode_clo(env83029))[3];
//not do dummy comment
void* proc = (decode_clo(env83029))[2];
//not do dummy comment
void* acc = (decode_clo(env83029))[1];

//creating new closure instance
void** clo83440 = alloc_clo(lam83026_fptr, 5);

//setting env list
clo83440[1] = acc;
clo83440[2] = proc;
clo83440[3] = a8262582875;
clo83440[4] = kont82721;
clo83440[5] = foldr;
void* f8272382876 = encode_clo(clo83440);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8272382876;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83028 = encode_clo(alloc_clo(lam83028_fptr, 0));

void* lam83030_fptr() // lam83030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83031 = arg_buffer[1];
//reading env and args
void* a8262482873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83031))[7];
//not do dummy comment
void* kont82721 = (decode_clo(env83031))[6];
//not do dummy comment
void* car = (decode_clo(env83031))[5];
//not do dummy comment
void* foldr = (decode_clo(env83031))[4];
//not do dummy comment
void* lst = (decode_clo(env83031))[3];
//not do dummy comment
void* proc = (decode_clo(env83031))[2];
//not do dummy comment
void* acc = (decode_clo(env83031))[1];

//if-clause
bool if_guard83441 = is_true(a8262482873);
if(if_guard83441)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82721);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82721))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo83443 = alloc_clo(lam83028_fptr, 6);

//setting env list
clo83443[1] = acc;
clo83443[2] = proc;
clo83443[3] = lst;
clo83443[4] = foldr;
clo83443[5] = kont82721;
clo83443[6] = cdr;
void* f8272482874 = encode_clo(clo83443);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8272482874;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83030 = encode_clo(alloc_clo(lam83030_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83032 = arg_buffer[1];
//reading env and args
void* kont82721 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo83445 = alloc_clo(lam83030_fptr, 7);

//setting env list
clo83445[1] = acc;
clo83445[2] = proc;
clo83445[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo83445[4] = foldr;
clo83445[5] = car;
clo83445[6] = kont82721;
clo83445[7] = cdr;
void* f8272582872 = encode_clo(clo83445);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8272582872;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam83033_fptr() // lam83033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83034 = arg_buffer[1];
//reading env and args
void* a8263182887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8262982883 = (decode_clo(env83034))[3];
//not do dummy comment
void* kont82726 = (decode_clo(env83034))[2];
//not do dummy comment
void* cons = (decode_clo(env83034))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont82726;
arg_buffer[3] = a8262982883;
arg_buffer[4] = a8263182887;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83033 = encode_clo(alloc_clo(lam83033_fptr, 0));

void* lam83035_fptr() // lam83035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83036 = arg_buffer[1];
//reading env and args
void* a8263082885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8262982883 = (decode_clo(env83036))[5];
//not do dummy comment
void* append = (decode_clo(env83036))[4];
//not do dummy comment
void* kont82726 = (decode_clo(env83036))[3];
//not do dummy comment
void* lst2 = (decode_clo(env83036))[2];
//not do dummy comment
void* cons = (decode_clo(env83036))[1];

//creating new closure instance
void** clo83447 = alloc_clo(lam83033_fptr, 3);

//setting env list
clo83447[1] = cons;
clo83447[2] = kont82726;
clo83447[3] = a8262982883;
void* f8272782886 = encode_clo(clo83447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8272782886;
arg_buffer[3] = a8263082885;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83035 = encode_clo(alloc_clo(lam83035_fptr, 0));

void* lam83037_fptr() // lam83037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83038 = arg_buffer[1];
//reading env and args
void* a8262982883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83038))[6];
//not do dummy comment
void* append = (decode_clo(env83038))[5];
//not do dummy comment
void* kont82726 = (decode_clo(env83038))[4];
//not do dummy comment
void* lst2 = (decode_clo(env83038))[3];
//not do dummy comment
void* lst1 = (decode_clo(env83038))[2];
//not do dummy comment
void* cons = (decode_clo(env83038))[1];

//creating new closure instance
void** clo83449 = alloc_clo(lam83035_fptr, 5);

//setting env list
clo83449[1] = cons;
clo83449[2] = lst2;
clo83449[3] = kont82726;
clo83449[4] = append;
clo83449[5] = a8262982883;
void* f8272882884 = encode_clo(clo83449);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8272882884;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83037 = encode_clo(alloc_clo(lam83037_fptr, 0));

void* lam83039_fptr() // lam83039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83040 = arg_buffer[1];
//reading env and args
void* a8262882881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83040))[7];
//not do dummy comment
void* append = (decode_clo(env83040))[6];
//not do dummy comment
void* kont82726 = (decode_clo(env83040))[5];
//not do dummy comment
void* lst2 = (decode_clo(env83040))[4];
//not do dummy comment
void* cons = (decode_clo(env83040))[3];
//not do dummy comment
void* lst1 = (decode_clo(env83040))[2];
//not do dummy comment
void* car = (decode_clo(env83040))[1];

//if-clause
bool if_guard83450 = is_true(a8262882881);
if(if_guard83450)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82726);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82726))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo83452 = alloc_clo(lam83037_fptr, 6);

//setting env list
clo83452[1] = cons;
clo83452[2] = lst1;
clo83452[3] = lst2;
clo83452[4] = kont82726;
clo83452[5] = append;
clo83452[6] = cdr;
void* f8272982882 = encode_clo(clo83452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8272982882;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83039 = encode_clo(alloc_clo(lam83039_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83041 = arg_buffer[1];
//reading env and args
void* kont82726 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo83454 = alloc_clo(lam83039_fptr, 7);

//setting env list
clo83454[1] = car;
clo83454[2] = lst1;
clo83454[3] = cons;
clo83454[4] = lst2;
clo83454[5] = kont82726;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo83454[6] = append;
clo83454[7] = cdr;
void* f8273082880 = encode_clo(clo83454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8273082880;
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
void* _83042 = arg_buffer[1];
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

void* kont8273182888 = prim_car(lst);
void* lst82889 = prim_cdr(lst);
void* x8263282890 = apply_prim_hash(lst82889);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8273182888);
arg_buffer[2] = x8263282890;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8273182888))[0]);
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
void* _83043 = arg_buffer[1];
//reading env and args
void* kont82733 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8263382891 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82733);
arg_buffer[2] = x8263382891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82733))[0]);
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
void* _83044 = arg_buffer[1];
//reading env and args
void* kont82734 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8263482892 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82734);
arg_buffer[2] = x8263482892;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82734))[0]);
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
void* _83045 = arg_buffer[1];
//reading env and args
void* kont82735 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8263582893 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82735);
arg_buffer[2] = x8263582893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82735))[0]);
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
void* _83046 = arg_buffer[1];
//reading env and args
void* kont82736 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8263682894 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82736);
arg_buffer[2] = x8263682894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82736))[0]);
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
void* _83049 = arg_buffer[1];
//reading env and args
void* kont82737 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar83455 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83455, "28", 10);
void* a8263782895 = encode_mpz(mpzvar83455);
mpz_t* mpzvar83456 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar83456, "8", 10);
void* a8263882896 = encode_mpz(mpzvar83456);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = kont82737;
arg_buffer[3] = a8263782895;
arg_buffer[4] = a8263882896;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam83050_fptr() // lam83050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83051 = arg_buffer[1];
//reading env and args
void* x8263982898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82738 = (decode_clo(env83051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82738);
arg_buffer[2] = x8263982898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82738))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83050 = encode_clo(alloc_clo(lam83050_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83052 = arg_buffer[1];
//reading env and args
void* kont82738 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo83458 = alloc_clo(lam83050_fptr, 1);

//setting env list
clo83458[1] = kont82738;
void* f8273982897 = encode_clo(clo83458);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8273982897;
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

