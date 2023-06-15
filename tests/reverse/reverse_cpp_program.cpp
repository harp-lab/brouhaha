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
void* _110942 = arg_buffer[1];
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

void* kont110678110779 = prim_car(lst);
void* lst110780 = prim_cdr(lst);
void* x110589110781 = apply_prim__u43(lst110780);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110678110779);
arg_buffer[2] = x110589110781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110678110779))[0]);
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
void* _110943 = arg_buffer[1];
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

void* kont110680110782 = prim_car(lst);
void* lst110783 = prim_cdr(lst);
void* x110590110784 = apply_prim__u45(lst110783);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110680110782);
arg_buffer[2] = x110590110784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110680110782))[0]);
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
void* _110944 = arg_buffer[1];
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

void* kont110682110785 = prim_car(lst);
void* lst110786 = prim_cdr(lst);
void* x110591110787 = apply_prim__u42(lst110786);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110682110785);
arg_buffer[2] = x110591110787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110682110785))[0]);
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
void* _110945 = arg_buffer[1];
//reading env and args
void* kont110684 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x110592110788 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110684);
arg_buffer[2] = x110592110788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110684))[0]);
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
void* _110946 = arg_buffer[1];
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

void* kont110685110789 = prim_car(lst);
void* lst110790 = prim_cdr(lst);
void* x110593110791 = apply_prim__u47(lst110790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110685110789);
arg_buffer[2] = x110593110791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110685110789))[0]);
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
void* _110947 = arg_buffer[1];
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

void* kont110687110792 = prim_car(lst);
void* lst110793 = prim_cdr(lst);
void* x110594110794 = apply_prim__u61(lst110793);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110687110792);
arg_buffer[2] = x110594110794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110687110792))[0]);
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
void* _110948 = arg_buffer[1];
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

void* kont110689110795 = prim_car(lst);
void* lst110796 = prim_cdr(lst);
void* x110595110797 = apply_prim__u62(lst110796);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110689110795);
arg_buffer[2] = x110595110797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110689110795))[0]);
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
void* _110949 = arg_buffer[1];
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

void* kont110691110798 = prim_car(lst);
void* lst110799 = prim_cdr(lst);
void* x110596110800 = apply_prim__u60(lst110799);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110691110798);
arg_buffer[2] = x110596110800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110691110798))[0]);
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
void* _110950 = arg_buffer[1];
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

void* kont110693110801 = prim_car(lst);
void* lst110802 = prim_cdr(lst);
void* x110597110803 = apply_prim__u60_u61(lst110802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110693110801);
arg_buffer[2] = x110597110803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110693110801))[0]);
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
void* _110951 = arg_buffer[1];
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

void* kont110695110804 = prim_car(lst);
void* lst110805 = prim_cdr(lst);
void* x110598110806 = apply_prim__u62_u61(lst110805);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110695110804);
arg_buffer[2] = x110598110806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110695110804))[0]);
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
void* _110952 = arg_buffer[1];
//reading env and args
void* kont110697 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x110599110807 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110697);
arg_buffer[2] = x110599110807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110697))[0]);
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
void* _110953 = arg_buffer[1];
//reading env and args
void* kont110698 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x110600110808 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110698);
arg_buffer[2] = x110600110808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110698))[0]);
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
void* _110954 = arg_buffer[1];
//reading env and args
void* kont110699 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x110601110809 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110699);
arg_buffer[2] = x110601110809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110699))[0]);
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
void* _110955 = arg_buffer[1];
//reading env and args
void* kont110700 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x110602110810 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110700);
arg_buffer[2] = x110602110810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110700))[0]);
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
void* _110956 = arg_buffer[1];
//reading env and args
void* kont110701 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x110603110811 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110701);
arg_buffer[2] = x110603110811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110701))[0]);
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
void* _110957 = arg_buffer[1];
//reading env and args
void* kont110702 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x110604110812 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110702);
arg_buffer[2] = x110604110812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110702))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam110958_fptr() // lam110958 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110959 = arg_buffer[1];
//reading env and args
void* a110607110816 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env110959))[3];
//not do dummy comment
void* a110605110813 = (decode_clo(env110959))[2];
//not do dummy comment
void* kont110703 = (decode_clo(env110959))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont110703;
arg_buffer[3] = a110605110813;
arg_buffer[4] = a110607110816;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110958 = encode_clo(alloc_clo(lam110958_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _110962 = arg_buffer[1];
//reading env and args
void* kont110703 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar116680 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116680, "0", 10);
void* a110605110813 = encode_mpz(mpzvar116680);
mpz_t* mpzvar116681 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116681, "2", 10);
void* a110606110814 = encode_mpz(mpzvar116681);

//creating new closure instance
void** clo116683 = alloc_clo(lam110958_fptr, 3);

//setting env list
clo116683[1] = kont110703;
clo116683[2] = a110605110813;
clo116683[3] = equal_u63;
void* f110704110815 = encode_clo(clo116683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f110704110815;
arg_buffer[3] = x;
arg_buffer[4] = a110606110814;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam110963_fptr() // lam110963 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110964 = arg_buffer[1];
//reading env and args
void* a110610110820 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env110964))[3];
//not do dummy comment
void* kont110705 = (decode_clo(env110964))[2];
//not do dummy comment
void* a110608110817 = (decode_clo(env110964))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont110705;
arg_buffer[3] = a110608110817;
arg_buffer[4] = a110610110820;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110963 = encode_clo(alloc_clo(lam110963_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _110967 = arg_buffer[1];
//reading env and args
void* kont110705 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar116684 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116684, "1", 10);
void* a110608110817 = encode_mpz(mpzvar116684);
mpz_t* mpzvar116685 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116685, "2", 10);
void* a110609110818 = encode_mpz(mpzvar116685);

//creating new closure instance
void** clo116687 = alloc_clo(lam110963_fptr, 3);

//setting env list
clo116687[1] = a110608110817;
clo116687[2] = kont110705;
clo116687[3] = equal_u63;
void* f110706110819 = encode_clo(clo116687);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f110706110819;
arg_buffer[3] = x;
arg_buffer[4] = a110609110818;
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
void* _110968 = arg_buffer[1];
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

void* kont110707110821 = prim_car(x);
void* x110822 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110707110821);
arg_buffer[2] = x110822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110707110821))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam110971_fptr() // lam110971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110972 = arg_buffer[1];
//reading env and args
void* a110616110832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110709 = (decode_clo(env110972))[3];
//not do dummy comment
void* x = (decode_clo(env110972))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env110972))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont110709;
arg_buffer[3] = x;
arg_buffer[4] = a110616110832;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110971 = encode_clo(alloc_clo(lam110971_fptr, 0));

void* lam110973_fptr() // lam110973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110974 = arg_buffer[1];
//reading env and args
void* a110614110829 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env110974))[5];
//not do dummy comment
void* x = (decode_clo(env110974))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env110974))[3];
//not do dummy comment
void* lst = (decode_clo(env110974))[2];
//not do dummy comment
void* kont110709 = (decode_clo(env110974))[1];

//if-clause
bool if_guard116688 = is_true(a110614110829);
if(if_guard116688)
{
void* x110615110830 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110709);
arg_buffer[2] = x110615110830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110709))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116690 = alloc_clo(lam110971_fptr, 3);

//setting env list
clo116690[1] = member_u63;
clo116690[2] = x;
clo116690[3] = kont110709;
void* f110710110831 = encode_clo(clo116690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110710110831;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam110973 = encode_clo(alloc_clo(lam110973_fptr, 0));

void* lam110975_fptr() // lam110975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110976 = arg_buffer[1];
//reading env and args
void* a110613110827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env110976))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env110976))[5];
//not do dummy comment
void* x = (decode_clo(env110976))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env110976))[3];
//not do dummy comment
void* lst = (decode_clo(env110976))[2];
//not do dummy comment
void* kont110709 = (decode_clo(env110976))[1];

//creating new closure instance
void** clo116692 = alloc_clo(lam110973_fptr, 5);

//setting env list
clo116692[1] = kont110709;
clo116692[2] = lst;
clo116692[3] = member_u63;
clo116692[4] = x;
clo116692[5] = cdr;
void* f110711110828 = encode_clo(clo116692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f110711110828;
arg_buffer[3] = a110613110827;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110975 = encode_clo(alloc_clo(lam110975_fptr, 0));

void* lam110977_fptr() // lam110977 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110978 = arg_buffer[1];
//reading env and args
void* a110611110824 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env110978))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env110978))[6];
//not do dummy comment
void* x = (decode_clo(env110978))[5];
//not do dummy comment
void* car = (decode_clo(env110978))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env110978))[3];
//not do dummy comment
void* lst = (decode_clo(env110978))[2];
//not do dummy comment
void* kont110709 = (decode_clo(env110978))[1];

//if-clause
bool if_guard116693 = is_true(a110611110824);
if(if_guard116693)
{
void* x110612110825 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110709);
arg_buffer[2] = x110612110825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110709))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116695 = alloc_clo(lam110975_fptr, 6);

//setting env list
clo116695[1] = kont110709;
clo116695[2] = lst;
clo116695[3] = member_u63;
clo116695[4] = x;
clo116695[5] = equal_u63;
clo116695[6] = cdr;
void* f110712110826 = encode_clo(clo116695);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f110712110826;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam110977 = encode_clo(alloc_clo(lam110977_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _110979 = arg_buffer[1];
//reading env and args
void* kont110709 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116697 = alloc_clo(lam110977_fptr, 7);

//setting env list
clo116697[1] = kont110709;
clo116697[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo116697[3] = member_u63;
clo116697[4] = car;
clo116697[5] = x;
clo116697[6] = equal_u63;
clo116697[7] = cdr;
void* f110713110823 = encode_clo(clo116697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f110713110823;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam110980_fptr() // lam110980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110981 = arg_buffer[1];
//reading env and args
void* a110620110840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a110619110838 = (decode_clo(env110981))[4];
//not do dummy comment
void* kont110714 = (decode_clo(env110981))[3];
//not do dummy comment
void* fun = (decode_clo(env110981))[2];
//not do dummy comment
void* foldl = (decode_clo(env110981))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont110714;
arg_buffer[3] = fun;
arg_buffer[4] = a110619110838;
arg_buffer[5] = a110620110840;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110980 = encode_clo(alloc_clo(lam110980_fptr, 0));

void* lam110982_fptr() // lam110982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110983 = arg_buffer[1];
//reading env and args
void* a110619110838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env110983))[5];
//not do dummy comment
void* lst = (decode_clo(env110983))[4];
//not do dummy comment
void* kont110714 = (decode_clo(env110983))[3];
//not do dummy comment
void* fun = (decode_clo(env110983))[2];
//not do dummy comment
void* foldl = (decode_clo(env110983))[1];

//creating new closure instance
void** clo116699 = alloc_clo(lam110980_fptr, 4);

//setting env list
clo116699[1] = foldl;
clo116699[2] = fun;
clo116699[3] = kont110714;
clo116699[4] = a110619110838;
void* f110715110839 = encode_clo(clo116699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110715110839;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110982 = encode_clo(alloc_clo(lam110982_fptr, 0));

void* lam110984_fptr() // lam110984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110985 = arg_buffer[1];
//reading env and args
void* a110618110836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env110985))[6];
//not do dummy comment
void* lst = (decode_clo(env110985))[5];
//not do dummy comment
void* kont110714 = (decode_clo(env110985))[4];
//not do dummy comment
void* fun = (decode_clo(env110985))[3];
//not do dummy comment
void* acc = (decode_clo(env110985))[2];
//not do dummy comment
void* foldl = (decode_clo(env110985))[1];

//creating new closure instance
void** clo116701 = alloc_clo(lam110982_fptr, 5);

//setting env list
clo116701[1] = foldl;
clo116701[2] = fun;
clo116701[3] = kont110714;
clo116701[4] = lst;
clo116701[5] = cdr;
void* f110716110837 = encode_clo(clo116701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f110716110837;
arg_buffer[3] = a110618110836;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110984 = encode_clo(alloc_clo(lam110984_fptr, 0));

void* lam110986_fptr() // lam110986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110987 = arg_buffer[1];
//reading env and args
void* a110617110834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env110987))[7];
//not do dummy comment
void* lst = (decode_clo(env110987))[6];
//not do dummy comment
void* kont110714 = (decode_clo(env110987))[5];
//not do dummy comment
void* fun = (decode_clo(env110987))[4];
//not do dummy comment
void* acc = (decode_clo(env110987))[3];
//not do dummy comment
void* car = (decode_clo(env110987))[2];
//not do dummy comment
void* foldl = (decode_clo(env110987))[1];

//if-clause
bool if_guard116702 = is_true(a110617110834);
if(if_guard116702)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110714);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110714))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116704 = alloc_clo(lam110984_fptr, 6);

//setting env list
clo116704[1] = foldl;
clo116704[2] = acc;
clo116704[3] = fun;
clo116704[4] = kont110714;
clo116704[5] = lst;
clo116704[6] = cdr;
void* f110717110835 = encode_clo(clo116704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f110717110835;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam110986 = encode_clo(alloc_clo(lam110986_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _110988 = arg_buffer[1];
//reading env and args
void* kont110714 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo116706 = alloc_clo(lam110986_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo116706[1] = foldl;
clo116706[2] = car;
clo116706[3] = acc;
clo116706[4] = fun;
clo116706[5] = kont110714;
clo116706[6] = lst;
clo116706[7] = cdr;
void* f110718110833 = encode_clo(clo116706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f110718110833;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam110989_fptr() // lam110989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110990 = arg_buffer[1];
//reading env and args
void* a110624110848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env110990))[3];
//not do dummy comment
void* a110622110844 = (decode_clo(env110990))[2];
//not do dummy comment
void* kont110719 = (decode_clo(env110990))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont110719;
arg_buffer[3] = a110622110844;
arg_buffer[4] = a110624110848;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110989 = encode_clo(alloc_clo(lam110989_fptr, 0));

void* lam110991_fptr() // lam110991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110992 = arg_buffer[1];
//reading env and args
void* a110623110846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env110992))[5];
//not do dummy comment
void* a110622110844 = (decode_clo(env110992))[4];
//not do dummy comment
void* lst2 = (decode_clo(env110992))[3];
//not do dummy comment
void* cons = (decode_clo(env110992))[2];
//not do dummy comment
void* kont110719 = (decode_clo(env110992))[1];

//creating new closure instance
void** clo116708 = alloc_clo(lam110989_fptr, 3);

//setting env list
clo116708[1] = kont110719;
clo116708[2] = a110622110844;
clo116708[3] = reverse_u45helper;
void* f110720110847 = encode_clo(clo116708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f110720110847;
arg_buffer[3] = a110623110846;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110991 = encode_clo(alloc_clo(lam110991_fptr, 0));

void* lam110993_fptr() // lam110993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110994 = arg_buffer[1];
//reading env and args
void* a110622110844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env110994))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env110994))[5];
//not do dummy comment
void* lst2 = (decode_clo(env110994))[4];
//not do dummy comment
void* car = (decode_clo(env110994))[3];
//not do dummy comment
void* cons = (decode_clo(env110994))[2];
//not do dummy comment
void* kont110719 = (decode_clo(env110994))[1];

//creating new closure instance
void** clo116710 = alloc_clo(lam110991_fptr, 5);

//setting env list
clo116710[1] = kont110719;
clo116710[2] = cons;
clo116710[3] = lst2;
clo116710[4] = a110622110844;
clo116710[5] = reverse_u45helper;
void* f110721110845 = encode_clo(clo116710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f110721110845;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110993 = encode_clo(alloc_clo(lam110993_fptr, 0));

void* lam110995_fptr() // lam110995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110996 = arg_buffer[1];
//reading env and args
void* a110621110842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env110996))[7];
//not do dummy comment
void* lst = (decode_clo(env110996))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env110996))[5];
//not do dummy comment
void* lst2 = (decode_clo(env110996))[4];
//not do dummy comment
void* car = (decode_clo(env110996))[3];
//not do dummy comment
void* cons = (decode_clo(env110996))[2];
//not do dummy comment
void* kont110719 = (decode_clo(env110996))[1];

//if-clause
bool if_guard116711 = is_true(a110621110842);
if(if_guard116711)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110719);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110719))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116713 = alloc_clo(lam110993_fptr, 6);

//setting env list
clo116713[1] = kont110719;
clo116713[2] = cons;
clo116713[3] = car;
clo116713[4] = lst2;
clo116713[5] = reverse_u45helper;
clo116713[6] = lst;
void* f110722110843 = encode_clo(clo116713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110722110843;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam110995 = encode_clo(alloc_clo(lam110995_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _110997 = arg_buffer[1];
//reading env and args
void* kont110719 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116715 = alloc_clo(lam110995_fptr, 7);

//setting env list
clo116715[1] = kont110719;
clo116715[2] = cons;
clo116715[3] = car;
clo116715[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo116715[5] = reverse_u45helper;
clo116715[6] = lst;
clo116715[7] = cdr;
void* f110723110841 = encode_clo(clo116715);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f110723110841;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam110998_fptr() // lam110998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env110999 = arg_buffer[1];
//reading env and args
void* a110625110850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110724 = (decode_clo(env110999))[3];
//not do dummy comment
void* lst = (decode_clo(env110999))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env110999))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont110724;
arg_buffer[3] = lst;
arg_buffer[4] = a110625110850;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam110998 = encode_clo(alloc_clo(lam110998_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111000 = arg_buffer[1];
//reading env and args
void* kont110724 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo116717 = alloc_clo(lam110998_fptr, 3);

//setting env list
clo116717[1] = reverse_u45helper;
clo116717[2] = lst;
clo116717[3] = kont110724;
void* f110725110849 = encode_clo(clo116717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f110725110849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam111001_fptr() // lam111001 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111002 = arg_buffer[1];
//reading env and args
void* x110628110855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110726 = (decode_clo(env111002))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110726);
arg_buffer[2] = x110628110855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110726))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111001 = encode_clo(alloc_clo(lam111001_fptr, 0));

void* lam111003_fptr() // lam111003 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111004 = arg_buffer[1];
//reading env and args
void* a110633110864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110726 = (decode_clo(env111004))[4];
//not do dummy comment
void* a110629110857 = (decode_clo(env111004))[3];
//not do dummy comment
void* a110631110860 = (decode_clo(env111004))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env111004))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont110726;
arg_buffer[3] = a110629110857;
arg_buffer[4] = a110631110860;
arg_buffer[5] = a110633110864;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111003 = encode_clo(alloc_clo(lam111003_fptr, 0));

void* lam111005_fptr() // lam111005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111006 = arg_buffer[1];
//reading env and args
void* a110632110862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110726 = (decode_clo(env111006))[6];
//not do dummy comment
void* a110629110857 = (decode_clo(env111006))[5];
//not do dummy comment
void* a110631110860 = (decode_clo(env111006))[4];
//not do dummy comment
void* cons = (decode_clo(env111006))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env111006))[2];
//not do dummy comment
void* lst2 = (decode_clo(env111006))[1];

//creating new closure instance
void** clo116719 = alloc_clo(lam111003_fptr, 4);

//setting env list
clo116719[1] = take_u45helper;
clo116719[2] = a110631110860;
clo116719[3] = a110629110857;
clo116719[4] = kont110726;
void* f110728110863 = encode_clo(clo116719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f110728110863;
arg_buffer[3] = a110632110862;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111005 = encode_clo(alloc_clo(lam111005_fptr, 0));

void* lam111007_fptr() // lam111007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111008 = arg_buffer[1];
//reading env and args
void* a110631110860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env111008))[7];
//not do dummy comment
void* kont110726 = (decode_clo(env111008))[6];
//not do dummy comment
void* a110629110857 = (decode_clo(env111008))[5];
//not do dummy comment
void* car = (decode_clo(env111008))[4];
//not do dummy comment
void* cons = (decode_clo(env111008))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env111008))[2];
//not do dummy comment
void* lst2 = (decode_clo(env111008))[1];

//creating new closure instance
void** clo116721 = alloc_clo(lam111005_fptr, 6);

//setting env list
clo116721[1] = lst2;
clo116721[2] = take_u45helper;
clo116721[3] = cons;
clo116721[4] = a110631110860;
clo116721[5] = a110629110857;
clo116721[6] = kont110726;
void* f110729110861 = encode_clo(clo116721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f110729110861;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111007 = encode_clo(alloc_clo(lam111007_fptr, 0));

void* lam111010_fptr() // lam111010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111011 = arg_buffer[1];
//reading env and args
void* a110629110857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env111011))[8];
//not do dummy comment
void* kont110726 = (decode_clo(env111011))[7];
//not do dummy comment
void* cons = (decode_clo(env111011))[6];
//not do dummy comment
void* _u45 = (decode_clo(env111011))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env111011))[4];
//not do dummy comment
void* lst2 = (decode_clo(env111011))[3];
//not do dummy comment
void* n = (decode_clo(env111011))[2];
//not do dummy comment
void* car = (decode_clo(env111011))[1];
mpz_t* mpzvar116722 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116722, "1", 10);
void* a110630110858 = encode_mpz(mpzvar116722);

//creating new closure instance
void** clo116724 = alloc_clo(lam111007_fptr, 7);

//setting env list
clo116724[1] = lst2;
clo116724[2] = take_u45helper;
clo116724[3] = cons;
clo116724[4] = car;
clo116724[5] = a110629110857;
clo116724[6] = kont110726;
clo116724[7] = lst;
void* f110730110859 = encode_clo(clo116724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f110730110859;
arg_buffer[3] = n;
arg_buffer[4] = a110630110858;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111010 = encode_clo(alloc_clo(lam111010_fptr, 0));

void* lam111012_fptr() // lam111012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111013 = arg_buffer[1];
//reading env and args
void* a110627110853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111013))[10];
//not do dummy comment
void* lst = (decode_clo(env111013))[9];
//not do dummy comment
void* kont110726 = (decode_clo(env111013))[8];
//not do dummy comment
void* reverse = (decode_clo(env111013))[7];
//not do dummy comment
void* cons = (decode_clo(env111013))[6];
//not do dummy comment
void* _u45 = (decode_clo(env111013))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env111013))[4];
//not do dummy comment
void* lst2 = (decode_clo(env111013))[3];
//not do dummy comment
void* n = (decode_clo(env111013))[2];
//not do dummy comment
void* car = (decode_clo(env111013))[1];

//if-clause
bool if_guard116725 = is_true(a110627110853);
if(if_guard116725)
{

//creating new closure instance
void** clo116727 = alloc_clo(lam111001_fptr, 1);

//setting env list
clo116727[1] = kont110726;
void* f110727110854 = encode_clo(clo116727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f110727110854;
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
void** clo116729 = alloc_clo(lam111010_fptr, 8);

//setting env list
clo116729[1] = car;
clo116729[2] = n;
clo116729[3] = lst2;
clo116729[4] = take_u45helper;
clo116729[5] = _u45;
clo116729[6] = cons;
clo116729[7] = kont110726;
clo116729[8] = lst;
void* f110731110856 = encode_clo(clo116729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110731110856;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111012 = encode_clo(alloc_clo(lam111012_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111015 = arg_buffer[1];
//reading env and args
void* kont110726 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar116730 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116730, "0", 10);
void* a110626110851 = encode_mpz(mpzvar116730);

//creating new closure instance
void** clo116732 = alloc_clo(lam111012_fptr, 10);

//setting env list
clo116732[1] = car;
clo116732[2] = n;
clo116732[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo116732[4] = take_u45helper;
clo116732[5] = _u45;
clo116732[6] = cons;
clo116732[7] = reverse;
clo116732[8] = kont110726;
clo116732[9] = lst;
clo116732[10] = cdr;
void* f110732110852 = encode_clo(clo116732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f110732110852;
arg_buffer[3] = n;
arg_buffer[4] = a110626110851;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam111016_fptr() // lam111016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111017 = arg_buffer[1];
//reading env and args
void* a110634110866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env111017))[4];
//not do dummy comment
void* n = (decode_clo(env111017))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env111017))[2];
//not do dummy comment
void* kont110733 = (decode_clo(env111017))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont110733;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a110634110866;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111016 = encode_clo(alloc_clo(lam111016_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111018 = arg_buffer[1];
//reading env and args
void* kont110733 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116734 = alloc_clo(lam111016_fptr, 4);

//setting env list
clo116734[1] = kont110733;
clo116734[2] = take_u45helper;
clo116734[3] = n;
clo116734[4] = lst;
void* f110734110865 = encode_clo(clo116734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f110734110865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam111020_fptr() // lam111020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111021 = arg_buffer[1];
//reading env and args
void* a110639110874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a110637110870 = (decode_clo(env111021))[3];
//not do dummy comment
void* _u43 = (decode_clo(env111021))[2];
//not do dummy comment
void* kont110735 = (decode_clo(env111021))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont110735;
arg_buffer[3] = a110637110870;
arg_buffer[4] = a110639110874;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111020 = encode_clo(alloc_clo(lam111020_fptr, 0));

void* lam111022_fptr() // lam111022 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111023 = arg_buffer[1];
//reading env and args
void* a110638110872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env111023))[4];
//not do dummy comment
void* kont110735 = (decode_clo(env111023))[3];
//not do dummy comment
void* a110637110870 = (decode_clo(env111023))[2];
//not do dummy comment
void* length = (decode_clo(env111023))[1];

//creating new closure instance
void** clo116736 = alloc_clo(lam111020_fptr, 3);

//setting env list
clo116736[1] = kont110735;
clo116736[2] = _u43;
clo116736[3] = a110637110870;
void* f110736110873 = encode_clo(clo116736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f110736110873;
arg_buffer[3] = a110638110872;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111022 = encode_clo(alloc_clo(lam111022_fptr, 0));

void* lam111025_fptr() // lam111025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111026 = arg_buffer[1];
//reading env and args
void* a110635110868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111026))[5];
//not do dummy comment
void* lst = (decode_clo(env111026))[4];
//not do dummy comment
void* length = (decode_clo(env111026))[3];
//not do dummy comment
void* _u43 = (decode_clo(env111026))[2];
//not do dummy comment
void* kont110735 = (decode_clo(env111026))[1];

//if-clause
bool if_guard116737 = is_true(a110635110868);
if(if_guard116737)
{
mpz_t* mpzvar116738 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116738, "0", 10);
void* x110636110869 = encode_mpz(mpzvar116738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110735);
arg_buffer[2] = x110636110869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110735))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar116739 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116739, "1", 10);
void* a110637110870 = encode_mpz(mpzvar116739);

//creating new closure instance
void** clo116741 = alloc_clo(lam111022_fptr, 4);

//setting env list
clo116741[1] = length;
clo116741[2] = a110637110870;
clo116741[3] = kont110735;
clo116741[4] = _u43;
void* f110737110871 = encode_clo(clo116741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110737110871;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111025 = encode_clo(alloc_clo(lam111025_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111027 = arg_buffer[1];
//reading env and args
void* kont110735 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo116743 = alloc_clo(lam111025_fptr, 5);

//setting env list
clo116743[1] = kont110735;
clo116743[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo116743[3] = length;
clo116743[4] = lst;
clo116743[5] = cdr;
void* f110738110867 = encode_clo(clo116743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f110738110867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam111028_fptr() // lam111028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111029 = arg_buffer[1];
//reading env and args
void* x110641110878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110739 = (decode_clo(env111029))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110739);
arg_buffer[2] = x110641110878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110739))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111028 = encode_clo(alloc_clo(lam111028_fptr, 0));

void* lam111030_fptr() // lam111030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111031 = arg_buffer[1];
//reading env and args
void* a110645110886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a110643110882 = (decode_clo(env111031))[3];
//not do dummy comment
void* kont110739 = (decode_clo(env111031))[2];
//not do dummy comment
void* cons = (decode_clo(env111031))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont110739;
arg_buffer[3] = a110643110882;
arg_buffer[4] = a110645110886;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111030 = encode_clo(alloc_clo(lam111030_fptr, 0));

void* lam111032_fptr() // lam111032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111033 = arg_buffer[1];
//reading env and args
void* a110644110884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a110643110882 = (decode_clo(env111033))[5];
//not do dummy comment
void* kont110739 = (decode_clo(env111033))[4];
//not do dummy comment
void* map = (decode_clo(env111033))[3];
//not do dummy comment
void* proc = (decode_clo(env111033))[2];
//not do dummy comment
void* cons = (decode_clo(env111033))[1];

//creating new closure instance
void** clo116745 = alloc_clo(lam111030_fptr, 3);

//setting env list
clo116745[1] = cons;
clo116745[2] = kont110739;
clo116745[3] = a110643110882;
void* f110741110885 = encode_clo(clo116745);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f110741110885;
arg_buffer[3] = proc;
arg_buffer[4] = a110644110884;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111032 = encode_clo(alloc_clo(lam111032_fptr, 0));

void* lam111034_fptr() // lam111034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111035 = arg_buffer[1];
//reading env and args
void* a110643110882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111035))[6];
//not do dummy comment
void* kont110739 = (decode_clo(env111035))[5];
//not do dummy comment
void* lst = (decode_clo(env111035))[4];
//not do dummy comment
void* map = (decode_clo(env111035))[3];
//not do dummy comment
void* proc = (decode_clo(env111035))[2];
//not do dummy comment
void* cons = (decode_clo(env111035))[1];

//creating new closure instance
void** clo116747 = alloc_clo(lam111032_fptr, 5);

//setting env list
clo116747[1] = cons;
clo116747[2] = proc;
clo116747[3] = map;
clo116747[4] = kont110739;
clo116747[5] = a110643110882;
void* f110742110883 = encode_clo(clo116747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110742110883;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111034 = encode_clo(alloc_clo(lam111034_fptr, 0));

void* lam111036_fptr() // lam111036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111037 = arg_buffer[1];
//reading env and args
void* a110642110880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111037))[6];
//not do dummy comment
void* kont110739 = (decode_clo(env111037))[5];
//not do dummy comment
void* lst = (decode_clo(env111037))[4];
//not do dummy comment
void* map = (decode_clo(env111037))[3];
//not do dummy comment
void* proc = (decode_clo(env111037))[2];
//not do dummy comment
void* cons = (decode_clo(env111037))[1];

//creating new closure instance
void** clo116749 = alloc_clo(lam111034_fptr, 6);

//setting env list
clo116749[1] = cons;
clo116749[2] = proc;
clo116749[3] = map;
clo116749[4] = lst;
clo116749[5] = kont110739;
clo116749[6] = cdr;
void* f110743110881 = encode_clo(clo116749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f110743110881;
arg_buffer[3] = a110642110880;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111036 = encode_clo(alloc_clo(lam111036_fptr, 0));

void* lam111038_fptr() // lam111038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111039 = arg_buffer[1];
//reading env and args
void* a110640110876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110739 = (decode_clo(env111039))[8];
//not do dummy comment
void* lst = (decode_clo(env111039))[7];
//not do dummy comment
void* map = (decode_clo(env111039))[6];
//not do dummy comment
void* proc = (decode_clo(env111039))[5];
//not do dummy comment
void* car = (decode_clo(env111039))[4];
//not do dummy comment
void* cons = (decode_clo(env111039))[3];
//not do dummy comment
void* list = (decode_clo(env111039))[2];
//not do dummy comment
void* cdr = (decode_clo(env111039))[1];

//if-clause
bool if_guard116750 = is_true(a110640110876);
if(if_guard116750)
{

//creating new closure instance
void** clo116752 = alloc_clo(lam111028_fptr, 1);

//setting env list
clo116752[1] = kont110739;
void* f110740110877 = encode_clo(clo116752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f110740110877;
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
void** clo116754 = alloc_clo(lam111036_fptr, 6);

//setting env list
clo116754[1] = cons;
clo116754[2] = proc;
clo116754[3] = map;
clo116754[4] = lst;
clo116754[5] = kont110739;
clo116754[6] = cdr;
void* f110744110879 = encode_clo(clo116754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f110744110879;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111038 = encode_clo(alloc_clo(lam111038_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111040 = arg_buffer[1];
//reading env and args
void* kont110739 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116756 = alloc_clo(lam111038_fptr, 8);

//setting env list
clo116756[1] = cdr;
clo116756[2] = list;
clo116756[3] = cons;
clo116756[4] = car;
clo116756[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo116756[6] = map;
clo116756[7] = lst;
clo116756[8] = kont110739;
void* f110745110875 = encode_clo(clo116756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f110745110875;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam111041_fptr() // lam111041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111042 = arg_buffer[1];
//reading env and args
void* x110647110890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110746 = (decode_clo(env111042))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110746);
arg_buffer[2] = x110647110890;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110746))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111041 = encode_clo(alloc_clo(lam111041_fptr, 0));

void* lam111043_fptr() // lam111043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111044 = arg_buffer[1];
//reading env and args
void* a110652110900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110746 = (decode_clo(env111044))[3];
//not do dummy comment
void* cons = (decode_clo(env111044))[2];
//not do dummy comment
void* a110650110896 = (decode_clo(env111044))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont110746;
arg_buffer[3] = a110650110896;
arg_buffer[4] = a110652110900;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111043 = encode_clo(alloc_clo(lam111043_fptr, 0));

void* lam111045_fptr() // lam111045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111046 = arg_buffer[1];
//reading env and args
void* a110651110898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env111046))[5];
//not do dummy comment
void* kont110746 = (decode_clo(env111046))[4];
//not do dummy comment
void* filter = (decode_clo(env111046))[3];
//not do dummy comment
void* cons = (decode_clo(env111046))[2];
//not do dummy comment
void* a110650110896 = (decode_clo(env111046))[1];

//creating new closure instance
void** clo116758 = alloc_clo(lam111043_fptr, 3);

//setting env list
clo116758[1] = a110650110896;
clo116758[2] = cons;
clo116758[3] = kont110746;
void* f110748110899 = encode_clo(clo116758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f110748110899;
arg_buffer[3] = op;
arg_buffer[4] = a110651110898;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111045 = encode_clo(alloc_clo(lam111045_fptr, 0));

void* lam111047_fptr() // lam111047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111048 = arg_buffer[1];
//reading env and args
void* a110650110896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111048))[6];
//not do dummy comment
void* lst = (decode_clo(env111048))[5];
//not do dummy comment
void* op = (decode_clo(env111048))[4];
//not do dummy comment
void* kont110746 = (decode_clo(env111048))[3];
//not do dummy comment
void* filter = (decode_clo(env111048))[2];
//not do dummy comment
void* cons = (decode_clo(env111048))[1];

//creating new closure instance
void** clo116760 = alloc_clo(lam111045_fptr, 5);

//setting env list
clo116760[1] = a110650110896;
clo116760[2] = cons;
clo116760[3] = filter;
clo116760[4] = kont110746;
clo116760[5] = op;
void* f110749110897 = encode_clo(clo116760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110749110897;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111047 = encode_clo(alloc_clo(lam111047_fptr, 0));

void* lam111049_fptr() // lam111049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111050 = arg_buffer[1];
//reading env and args
void* a110653110902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env111050))[3];
//not do dummy comment
void* kont110746 = (decode_clo(env111050))[2];
//not do dummy comment
void* filter = (decode_clo(env111050))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont110746;
arg_buffer[3] = op;
arg_buffer[4] = a110653110902;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111049 = encode_clo(alloc_clo(lam111049_fptr, 0));

void* lam111051_fptr() // lam111051 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111052 = arg_buffer[1];
//reading env and args
void* a110649110894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111052))[7];
//not do dummy comment
void* lst = (decode_clo(env111052))[6];
//not do dummy comment
void* op = (decode_clo(env111052))[5];
//not do dummy comment
void* kont110746 = (decode_clo(env111052))[4];
//not do dummy comment
void* cons = (decode_clo(env111052))[3];
//not do dummy comment
void* filter = (decode_clo(env111052))[2];
//not do dummy comment
void* car = (decode_clo(env111052))[1];

//if-clause
bool if_guard116761 = is_true(a110649110894);
if(if_guard116761)
{

//creating new closure instance
void** clo116763 = alloc_clo(lam111047_fptr, 6);

//setting env list
clo116763[1] = cons;
clo116763[2] = filter;
clo116763[3] = kont110746;
clo116763[4] = op;
clo116763[5] = lst;
clo116763[6] = cdr;
void* f110750110895 = encode_clo(clo116763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f110750110895;
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
void** clo116765 = alloc_clo(lam111049_fptr, 3);

//setting env list
clo116765[1] = filter;
clo116765[2] = kont110746;
clo116765[3] = op;
void* f110751110901 = encode_clo(clo116765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110751110901;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111051 = encode_clo(alloc_clo(lam111051_fptr, 0));

void* lam111053_fptr() // lam111053 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111054 = arg_buffer[1];
//reading env and args
void* a110648110892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111054))[7];
//not do dummy comment
void* lst = (decode_clo(env111054))[6];
//not do dummy comment
void* op = (decode_clo(env111054))[5];
//not do dummy comment
void* kont110746 = (decode_clo(env111054))[4];
//not do dummy comment
void* cons = (decode_clo(env111054))[3];
//not do dummy comment
void* filter = (decode_clo(env111054))[2];
//not do dummy comment
void* car = (decode_clo(env111054))[1];

//creating new closure instance
void** clo116767 = alloc_clo(lam111051_fptr, 7);

//setting env list
clo116767[1] = car;
clo116767[2] = filter;
clo116767[3] = cons;
clo116767[4] = kont110746;
clo116767[5] = op;
clo116767[6] = lst;
clo116767[7] = cdr;
void* f110752110893 = encode_clo(clo116767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f110752110893;
arg_buffer[3] = a110648110892;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111053 = encode_clo(alloc_clo(lam111053_fptr, 0));

void* lam111055_fptr() // lam111055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111056 = arg_buffer[1];
//reading env and args
void* a110646110888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env111056))[8];
//not do dummy comment
void* op = (decode_clo(env111056))[7];
//not do dummy comment
void* kont110746 = (decode_clo(env111056))[6];
//not do dummy comment
void* cons = (decode_clo(env111056))[5];
//not do dummy comment
void* list = (decode_clo(env111056))[4];
//not do dummy comment
void* cdr = (decode_clo(env111056))[3];
//not do dummy comment
void* filter = (decode_clo(env111056))[2];
//not do dummy comment
void* car = (decode_clo(env111056))[1];

//if-clause
bool if_guard116768 = is_true(a110646110888);
if(if_guard116768)
{

//creating new closure instance
void** clo116770 = alloc_clo(lam111041_fptr, 1);

//setting env list
clo116770[1] = kont110746;
void* f110747110889 = encode_clo(clo116770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f110747110889;
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
void** clo116772 = alloc_clo(lam111053_fptr, 7);

//setting env list
clo116772[1] = car;
clo116772[2] = filter;
clo116772[3] = cons;
clo116772[4] = kont110746;
clo116772[5] = op;
clo116772[6] = lst;
clo116772[7] = cdr;
void* f110753110891 = encode_clo(clo116772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f110753110891;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111055 = encode_clo(alloc_clo(lam111055_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111057 = arg_buffer[1];
//reading env and args
void* kont110746 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116774 = alloc_clo(lam111055_fptr, 8);

//setting env list
clo116774[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo116774[2] = filter;
clo116774[3] = cdr;
clo116774[4] = list;
clo116774[5] = cons;
clo116774[6] = kont110746;
clo116774[7] = op;
clo116774[8] = lst;
void* f110754110887 = encode_clo(clo116774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f110754110887;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam111058_fptr() // lam111058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111059 = arg_buffer[1];
//reading env and args
void* a110658110910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110755 = (decode_clo(env111059))[3];
//not do dummy comment
void* drop = (decode_clo(env111059))[2];
//not do dummy comment
void* a110656110907 = (decode_clo(env111059))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont110755;
arg_buffer[3] = a110656110907;
arg_buffer[4] = a110658110910;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111058 = encode_clo(alloc_clo(lam111058_fptr, 0));

void* lam111061_fptr() // lam111061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111062 = arg_buffer[1];
//reading env and args
void* a110656110907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110755 = (decode_clo(env111062))[4];
//not do dummy comment
void* drop = (decode_clo(env111062))[3];
//not do dummy comment
void* n = (decode_clo(env111062))[2];
//not do dummy comment
void* _u45 = (decode_clo(env111062))[1];
mpz_t* mpzvar116775 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116775, "1", 10);
void* a110657110908 = encode_mpz(mpzvar116775);

//creating new closure instance
void** clo116777 = alloc_clo(lam111058_fptr, 3);

//setting env list
clo116777[1] = a110656110907;
clo116777[2] = drop;
clo116777[3] = kont110755;
void* f110756110909 = encode_clo(clo116777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f110756110909;
arg_buffer[3] = n;
arg_buffer[4] = a110657110908;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111061 = encode_clo(alloc_clo(lam111061_fptr, 0));

void* lam111063_fptr() // lam111063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111064 = arg_buffer[1];
//reading env and args
void* a110655110905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111064))[6];
//not do dummy comment
void* kont110755 = (decode_clo(env111064))[5];
//not do dummy comment
void* n = (decode_clo(env111064))[4];
//not do dummy comment
void* _u45 = (decode_clo(env111064))[3];
//not do dummy comment
void* lst = (decode_clo(env111064))[2];
//not do dummy comment
void* drop = (decode_clo(env111064))[1];

//if-clause
bool if_guard116778 = is_true(a110655110905);
if(if_guard116778)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110755);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110755))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116780 = alloc_clo(lam111061_fptr, 4);

//setting env list
clo116780[1] = _u45;
clo116780[2] = n;
clo116780[3] = drop;
clo116780[4] = kont110755;
void* f110757110906 = encode_clo(clo116780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110757110906;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111063 = encode_clo(alloc_clo(lam111063_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111066 = arg_buffer[1];
//reading env and args
void* kont110755 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar116781 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116781, "0", 10);
void* a110654110903 = encode_mpz(mpzvar116781);

//creating new closure instance
void** clo116783 = alloc_clo(lam111063_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo116783[1] = drop;
clo116783[2] = lst;
clo116783[3] = _u45;
clo116783[4] = n;
clo116783[5] = kont110755;
clo116783[6] = cdr;
void* f110758110904 = encode_clo(clo116783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f110758110904;
arg_buffer[3] = n;
arg_buffer[4] = a110654110903;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam111067_fptr() // lam111067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111068 = arg_buffer[1];
//reading env and args
void* a110662110918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a110660110914 = (decode_clo(env111068))[3];
//not do dummy comment
void* kont110759 = (decode_clo(env111068))[2];
//not do dummy comment
void* proc = (decode_clo(env111068))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont110759;
arg_buffer[3] = a110660110914;
arg_buffer[4] = a110662110918;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111067 = encode_clo(alloc_clo(lam111067_fptr, 0));

void* lam111069_fptr() // lam111069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111070 = arg_buffer[1];
//reading env and args
void* a110661110916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a110660110914 = (decode_clo(env111070))[5];
//not do dummy comment
void* foldr = (decode_clo(env111070))[4];
//not do dummy comment
void* kont110759 = (decode_clo(env111070))[3];
//not do dummy comment
void* proc = (decode_clo(env111070))[2];
//not do dummy comment
void* acc = (decode_clo(env111070))[1];

//creating new closure instance
void** clo116785 = alloc_clo(lam111067_fptr, 3);

//setting env list
clo116785[1] = proc;
clo116785[2] = kont110759;
clo116785[3] = a110660110914;
void* f110760110917 = encode_clo(clo116785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f110760110917;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a110661110916;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111069 = encode_clo(alloc_clo(lam111069_fptr, 0));

void* lam111071_fptr() // lam111071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111072 = arg_buffer[1];
//reading env and args
void* a110660110914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111072))[6];
//not do dummy comment
void* kont110759 = (decode_clo(env111072))[5];
//not do dummy comment
void* foldr = (decode_clo(env111072))[4];
//not do dummy comment
void* lst = (decode_clo(env111072))[3];
//not do dummy comment
void* proc = (decode_clo(env111072))[2];
//not do dummy comment
void* acc = (decode_clo(env111072))[1];

//creating new closure instance
void** clo116787 = alloc_clo(lam111069_fptr, 5);

//setting env list
clo116787[1] = acc;
clo116787[2] = proc;
clo116787[3] = kont110759;
clo116787[4] = foldr;
clo116787[5] = a110660110914;
void* f110761110915 = encode_clo(clo116787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110761110915;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111071 = encode_clo(alloc_clo(lam111071_fptr, 0));

void* lam111073_fptr() // lam111073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111074 = arg_buffer[1];
//reading env and args
void* a110659110912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111074))[7];
//not do dummy comment
void* kont110759 = (decode_clo(env111074))[6];
//not do dummy comment
void* car = (decode_clo(env111074))[5];
//not do dummy comment
void* foldr = (decode_clo(env111074))[4];
//not do dummy comment
void* lst = (decode_clo(env111074))[3];
//not do dummy comment
void* proc = (decode_clo(env111074))[2];
//not do dummy comment
void* acc = (decode_clo(env111074))[1];

//if-clause
bool if_guard116788 = is_true(a110659110912);
if(if_guard116788)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110759);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110759))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116790 = alloc_clo(lam111071_fptr, 6);

//setting env list
clo116790[1] = acc;
clo116790[2] = proc;
clo116790[3] = lst;
clo116790[4] = foldr;
clo116790[5] = kont110759;
clo116790[6] = cdr;
void* f110762110913 = encode_clo(clo116790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f110762110913;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111073 = encode_clo(alloc_clo(lam111073_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111075 = arg_buffer[1];
//reading env and args
void* kont110759 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo116792 = alloc_clo(lam111073_fptr, 7);

//setting env list
clo116792[1] = acc;
clo116792[2] = proc;
clo116792[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo116792[4] = foldr;
clo116792[5] = car;
clo116792[6] = kont110759;
clo116792[7] = cdr;
void* f110763110911 = encode_clo(clo116792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f110763110911;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam111076_fptr() // lam111076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111077 = arg_buffer[1];
//reading env and args
void* a110666110926 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a110664110922 = (decode_clo(env111077))[3];
//not do dummy comment
void* kont110764 = (decode_clo(env111077))[2];
//not do dummy comment
void* cons = (decode_clo(env111077))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont110764;
arg_buffer[3] = a110664110922;
arg_buffer[4] = a110666110926;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111076 = encode_clo(alloc_clo(lam111076_fptr, 0));

void* lam111078_fptr() // lam111078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111079 = arg_buffer[1];
//reading env and args
void* a110665110924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env111079))[5];
//not do dummy comment
void* a110664110922 = (decode_clo(env111079))[4];
//not do dummy comment
void* kont110764 = (decode_clo(env111079))[3];
//not do dummy comment
void* lst2 = (decode_clo(env111079))[2];
//not do dummy comment
void* cons = (decode_clo(env111079))[1];

//creating new closure instance
void** clo116794 = alloc_clo(lam111076_fptr, 3);

//setting env list
clo116794[1] = cons;
clo116794[2] = kont110764;
clo116794[3] = a110664110922;
void* f110765110925 = encode_clo(clo116794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f110765110925;
arg_buffer[3] = a110665110924;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111078 = encode_clo(alloc_clo(lam111078_fptr, 0));

void* lam111080_fptr() // lam111080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111081 = arg_buffer[1];
//reading env and args
void* a110664110922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111081))[6];
//not do dummy comment
void* append = (decode_clo(env111081))[5];
//not do dummy comment
void* kont110764 = (decode_clo(env111081))[4];
//not do dummy comment
void* lst2 = (decode_clo(env111081))[3];
//not do dummy comment
void* lst1 = (decode_clo(env111081))[2];
//not do dummy comment
void* cons = (decode_clo(env111081))[1];

//creating new closure instance
void** clo116796 = alloc_clo(lam111078_fptr, 5);

//setting env list
clo116796[1] = cons;
clo116796[2] = lst2;
clo116796[3] = kont110764;
clo116796[4] = a110664110922;
clo116796[5] = append;
void* f110766110923 = encode_clo(clo116796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f110766110923;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111080 = encode_clo(alloc_clo(lam111080_fptr, 0));

void* lam111082_fptr() // lam111082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111083 = arg_buffer[1];
//reading env and args
void* a110663110920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111083))[7];
//not do dummy comment
void* append = (decode_clo(env111083))[6];
//not do dummy comment
void* kont110764 = (decode_clo(env111083))[5];
//not do dummy comment
void* lst2 = (decode_clo(env111083))[4];
//not do dummy comment
void* cons = (decode_clo(env111083))[3];
//not do dummy comment
void* lst1 = (decode_clo(env111083))[2];
//not do dummy comment
void* car = (decode_clo(env111083))[1];

//if-clause
bool if_guard116797 = is_true(a110663110920);
if(if_guard116797)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110764);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110764))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116799 = alloc_clo(lam111080_fptr, 6);

//setting env list
clo116799[1] = cons;
clo116799[2] = lst1;
clo116799[3] = lst2;
clo116799[4] = kont110764;
clo116799[5] = append;
clo116799[6] = cdr;
void* f110767110921 = encode_clo(clo116799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f110767110921;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111082 = encode_clo(alloc_clo(lam111082_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111084 = arg_buffer[1];
//reading env and args
void* kont110764 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116801 = alloc_clo(lam111082_fptr, 7);

//setting env list
clo116801[1] = car;
clo116801[2] = lst1;
clo116801[3] = cons;
clo116801[4] = lst2;
clo116801[5] = kont110764;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo116801[6] = append;
clo116801[7] = cdr;
void* f110768110919 = encode_clo(clo116801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f110768110919;
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
void* _111085 = arg_buffer[1];
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

void* kont110769110927 = prim_car(lst);
void* lst110928 = prim_cdr(lst);
void* x110667110929 = apply_prim_hash(lst110928);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110769110927);
arg_buffer[2] = x110667110929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110769110927))[0]);
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
void* _111086 = arg_buffer[1];
//reading env and args
void* kont110771 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x110668110930 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110771);
arg_buffer[2] = x110668110930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110771))[0]);
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
void* _111087 = arg_buffer[1];
//reading env and args
void* kont110772 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x110669110931 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110772);
arg_buffer[2] = x110669110931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110772))[0]);
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
void* _111088 = arg_buffer[1];
//reading env and args
void* kont110773 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x110670110932 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110773);
arg_buffer[2] = x110670110932;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110773))[0]);
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
void* _111089 = arg_buffer[1];
//reading env and args
void* kont110774 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x110671110933 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110774);
arg_buffer[2] = x110671110933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110774))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam111090_fptr() // lam111090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111091 = arg_buffer[1];
//reading env and args
void* x110672110935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110775 = (decode_clo(env111091))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont110775);
arg_buffer[2] = x110672110935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont110775))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111090 = encode_clo(alloc_clo(lam111090_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111092 = arg_buffer[1];
//reading env and args
void* kont110775 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo116803 = alloc_clo(lam111090_fptr, 1);

//setting env list
clo116803[1] = kont110775;
void* f110776110934 = encode_clo(clo116803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f110776110934;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam111093_fptr() // lam111093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111094 = arg_buffer[1];
//reading env and args
void* a110677110941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont110777 = (decode_clo(env111094))[2];
//not do dummy comment
void* call = (decode_clo(env111094))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont110777;
arg_buffer[3] = a110677110941;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111093 = encode_clo(alloc_clo(lam111093_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111099 = arg_buffer[1];
//reading env and args
void* kont110777 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar116804 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116804, "1", 10);
void* a110673110936 = encode_mpz(mpzvar116804);
mpz_t* mpzvar116805 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116805, "2", 10);
void* a110674110937 = encode_mpz(mpzvar116805);
mpz_t* mpzvar116806 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116806, "3", 10);
void* a110675110938 = encode_mpz(mpzvar116806);
mpz_t* mpzvar116807 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116807, "4", 10);
void* a110676110939 = encode_mpz(mpzvar116807);

//creating new closure instance
void** clo116809 = alloc_clo(lam111093_fptr, 2);

//setting env list
clo116809[1] = call;
clo116809[2] = kont110777;
void* f110778110940 = encode_clo(clo116809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f110778110940;
arg_buffer[3] = a110673110936;
arg_buffer[4] = a110674110937;
arg_buffer[5] = a110675110938;
arg_buffer[6] = a110676110939;
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

