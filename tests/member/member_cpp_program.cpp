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
void* _82943 = arg_buffer[1];
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

void* kont8267682777 = prim_car(lst);
void* lst82778 = prim_cdr(lst);
void* x8258482779 = apply_prim__u43(lst82778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8267682777);
arg_buffer[2] = x8258482779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8267682777))[0]);
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
void* _82944 = arg_buffer[1];
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

void* kont8267882780 = prim_car(lst);
void* lst82781 = prim_cdr(lst);
void* x8258582782 = apply_prim__u45(lst82781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8267882780);
arg_buffer[2] = x8258582782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8267882780))[0]);
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
void* _82945 = arg_buffer[1];
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

void* kont8268082783 = prim_car(lst);
void* lst82784 = prim_cdr(lst);
void* x8258682785 = apply_prim__u42(lst82784);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8268082783);
arg_buffer[2] = x8258682785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8268082783))[0]);
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
void* _82946 = arg_buffer[1];
//reading env and args
void* kont82682 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8258782786 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82682);
arg_buffer[2] = x8258782786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82682))[0]);
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
void* _82947 = arg_buffer[1];
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

void* kont8268382787 = prim_car(lst);
void* lst82788 = prim_cdr(lst);
void* x8258882789 = apply_prim__u47(lst82788);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8268382787);
arg_buffer[2] = x8258882789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8268382787))[0]);
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
void* _82948 = arg_buffer[1];
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

void* kont8268582790 = prim_car(lst);
void* lst82791 = prim_cdr(lst);
void* x8258982792 = apply_prim__u61(lst82791);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8268582790);
arg_buffer[2] = x8258982792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8268582790))[0]);
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
void* _82949 = arg_buffer[1];
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

void* kont8268782793 = prim_car(lst);
void* lst82794 = prim_cdr(lst);
void* x8259082795 = apply_prim__u62(lst82794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8268782793);
arg_buffer[2] = x8259082795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8268782793))[0]);
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
void* _82950 = arg_buffer[1];
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

void* kont8268982796 = prim_car(lst);
void* lst82797 = prim_cdr(lst);
void* x8259182798 = apply_prim__u60(lst82797);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8268982796);
arg_buffer[2] = x8259182798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8268982796))[0]);
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
void* _82951 = arg_buffer[1];
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

void* kont8269182799 = prim_car(lst);
void* lst82800 = prim_cdr(lst);
void* x8259282801 = apply_prim__u60_u61(lst82800);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8269182799);
arg_buffer[2] = x8259282801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8269182799))[0]);
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
void* _82952 = arg_buffer[1];
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

void* kont8269382802 = prim_car(lst);
void* lst82803 = prim_cdr(lst);
void* x8259382804 = apply_prim__u62_u61(lst82803);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8269382802);
arg_buffer[2] = x8259382804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8269382802))[0]);
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
void* _82953 = arg_buffer[1];
//reading env and args
void* kont82695 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8259482805 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82695);
arg_buffer[2] = x8259482805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82695))[0]);
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
void* _82954 = arg_buffer[1];
//reading env and args
void* kont82696 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8259582806 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82696);
arg_buffer[2] = x8259582806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82696))[0]);
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
void* _82955 = arg_buffer[1];
//reading env and args
void* kont82697 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8259682807 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82697);
arg_buffer[2] = x8259682807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82697))[0]);
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
void* _82956 = arg_buffer[1];
//reading env and args
void* kont82698 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8259782808 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82698);
arg_buffer[2] = x8259782808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82698))[0]);
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
void* _82957 = arg_buffer[1];
//reading env and args
void* kont82699 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8259882809 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82699);
arg_buffer[2] = x8259882809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82699))[0]);
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
void* _82958 = arg_buffer[1];
//reading env and args
void* kont82700 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8259982810 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82700);
arg_buffer[2] = x8259982810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82700))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam82959_fptr() // lam82959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82960 = arg_buffer[1];
//reading env and args
void* a8260282814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8260082811 = (decode_clo(env82960))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env82960))[2];
//not do dummy comment
void* kont82701 = (decode_clo(env82960))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont82701;
arg_buffer[3] = a8260082811;
arg_buffer[4] = a8260282814;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82959 = encode_clo(alloc_clo(lam82959_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82963 = arg_buffer[1];
//reading env and args
void* kont82701 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar84244 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84244, "0", 10);
void* a8260082811 = encode_mpz(mpzvar84244);
mpz_t* mpzvar84245 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84245, "2", 10);
void* a8260182812 = encode_mpz(mpzvar84245);

//creating new closure instance
void** clo84247 = alloc_clo(lam82959_fptr, 3);

//setting env list
clo84247[1] = kont82701;
clo84247[2] = equal_u63;
clo84247[3] = a8260082811;
void* f8270282813 = encode_clo(clo84247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8270282813;
arg_buffer[3] = x;
arg_buffer[4] = a8260182812;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam82964_fptr() // lam82964 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82965 = arg_buffer[1];
//reading env and args
void* a8260582818 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env82965))[3];
//not do dummy comment
void* a8260382815 = (decode_clo(env82965))[2];
//not do dummy comment
void* kont82703 = (decode_clo(env82965))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont82703;
arg_buffer[3] = a8260382815;
arg_buffer[4] = a8260582818;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82964 = encode_clo(alloc_clo(lam82964_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82968 = arg_buffer[1];
//reading env and args
void* kont82703 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar84248 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84248, "1", 10);
void* a8260382815 = encode_mpz(mpzvar84248);
mpz_t* mpzvar84249 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84249, "2", 10);
void* a8260482816 = encode_mpz(mpzvar84249);

//creating new closure instance
void** clo84251 = alloc_clo(lam82964_fptr, 3);

//setting env list
clo84251[1] = kont82703;
clo84251[2] = a8260382815;
clo84251[3] = equal_u63;
void* f8270482817 = encode_clo(clo84251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8270482817;
arg_buffer[3] = x;
arg_buffer[4] = a8260482816;
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
void* _82969 = arg_buffer[1];
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

void* kont8270582819 = prim_car(x);
void* x82820 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8270582819);
arg_buffer[2] = x82820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8270582819))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam82972_fptr() // lam82972 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82973 = arg_buffer[1];
//reading env and args
void* a8261182830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env82973))[3];
//not do dummy comment
void* kont82707 = (decode_clo(env82973))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env82973))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont82707;
arg_buffer[3] = x;
arg_buffer[4] = a8261182830;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82972 = encode_clo(alloc_clo(lam82972_fptr, 0));

void* lam82974_fptr() // lam82974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82975 = arg_buffer[1];
//reading env and args
void* a8260982827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82975))[5];
//not do dummy comment
void* lst = (decode_clo(env82975))[4];
//not do dummy comment
void* x = (decode_clo(env82975))[3];
//not do dummy comment
void* kont82707 = (decode_clo(env82975))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env82975))[1];

//if-clause
bool if_guard84252 = is_true(a8260982827);
if(if_guard84252)
{
void* x8261082828 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82707);
arg_buffer[2] = x8261082828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82707))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo84254 = alloc_clo(lam82972_fptr, 3);

//setting env list
clo84254[1] = member_u63;
clo84254[2] = kont82707;
clo84254[3] = x;
void* f8270882829 = encode_clo(clo84254);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8270882829;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82974 = encode_clo(alloc_clo(lam82974_fptr, 0));

void* lam82976_fptr() // lam82976 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82977 = arg_buffer[1];
//reading env and args
void* a8260882825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82977))[6];
//not do dummy comment
void* lst = (decode_clo(env82977))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env82977))[4];
//not do dummy comment
void* x = (decode_clo(env82977))[3];
//not do dummy comment
void* kont82707 = (decode_clo(env82977))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env82977))[1];

//creating new closure instance
void** clo84256 = alloc_clo(lam82974_fptr, 5);

//setting env list
clo84256[1] = member_u63;
clo84256[2] = kont82707;
clo84256[3] = x;
clo84256[4] = lst;
clo84256[5] = cdr;
void* f8270982826 = encode_clo(clo84256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8270982826;
arg_buffer[3] = a8260882825;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82976 = encode_clo(alloc_clo(lam82976_fptr, 0));

void* lam82978_fptr() // lam82978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82979 = arg_buffer[1];
//reading env and args
void* a8260682822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82979))[7];
//not do dummy comment
void* lst = (decode_clo(env82979))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env82979))[5];
//not do dummy comment
void* x = (decode_clo(env82979))[4];
//not do dummy comment
void* car = (decode_clo(env82979))[3];
//not do dummy comment
void* kont82707 = (decode_clo(env82979))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env82979))[1];

//if-clause
bool if_guard84257 = is_true(a8260682822);
if(if_guard84257)
{
void* x8260782823 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82707);
arg_buffer[2] = x8260782823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82707))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo84259 = alloc_clo(lam82976_fptr, 6);

//setting env list
clo84259[1] = member_u63;
clo84259[2] = kont82707;
clo84259[3] = x;
clo84259[4] = equal_u63;
clo84259[5] = lst;
clo84259[6] = cdr;
void* f8271082824 = encode_clo(clo84259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8271082824;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82978 = encode_clo(alloc_clo(lam82978_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82980 = arg_buffer[1];
//reading env and args
void* kont82707 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo84261 = alloc_clo(lam82978_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo84261[1] = member_u63;
clo84261[2] = kont82707;
clo84261[3] = car;
clo84261[4] = x;
clo84261[5] = equal_u63;
clo84261[6] = lst;
clo84261[7] = cdr;
void* f8271182821 = encode_clo(clo84261);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8271182821;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam82981_fptr() // lam82981 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82982 = arg_buffer[1];
//reading env and args
void* a8261582838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82712 = (decode_clo(env82982))[4];
//not do dummy comment
void* fun = (decode_clo(env82982))[3];
//not do dummy comment
void* foldl = (decode_clo(env82982))[2];
//not do dummy comment
void* a8261482836 = (decode_clo(env82982))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont82712;
arg_buffer[3] = fun;
arg_buffer[4] = a8261482836;
arg_buffer[5] = a8261582838;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82981 = encode_clo(alloc_clo(lam82981_fptr, 0));

void* lam82983_fptr() // lam82983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82984 = arg_buffer[1];
//reading env and args
void* a8261482836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82984))[5];
//not do dummy comment
void* kont82712 = (decode_clo(env82984))[4];
//not do dummy comment
void* lst = (decode_clo(env82984))[3];
//not do dummy comment
void* fun = (decode_clo(env82984))[2];
//not do dummy comment
void* foldl = (decode_clo(env82984))[1];

//creating new closure instance
void** clo84263 = alloc_clo(lam82981_fptr, 4);

//setting env list
clo84263[1] = a8261482836;
clo84263[2] = foldl;
clo84263[3] = fun;
clo84263[4] = kont82712;
void* f8271382837 = encode_clo(clo84263);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8271382837;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82983 = encode_clo(alloc_clo(lam82983_fptr, 0));

void* lam82985_fptr() // lam82985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82986 = arg_buffer[1];
//reading env and args
void* a8261382834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82986))[6];
//not do dummy comment
void* kont82712 = (decode_clo(env82986))[5];
//not do dummy comment
void* lst = (decode_clo(env82986))[4];
//not do dummy comment
void* fun = (decode_clo(env82986))[3];
//not do dummy comment
void* acc = (decode_clo(env82986))[2];
//not do dummy comment
void* foldl = (decode_clo(env82986))[1];

//creating new closure instance
void** clo84265 = alloc_clo(lam82983_fptr, 5);

//setting env list
clo84265[1] = foldl;
clo84265[2] = fun;
clo84265[3] = lst;
clo84265[4] = kont82712;
clo84265[5] = cdr;
void* f8271482835 = encode_clo(clo84265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8271482835;
arg_buffer[3] = a8261382834;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8261282832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82988))[7];
//not do dummy comment
void* kont82712 = (decode_clo(env82988))[6];
//not do dummy comment
void* lst = (decode_clo(env82988))[5];
//not do dummy comment
void* fun = (decode_clo(env82988))[4];
//not do dummy comment
void* acc = (decode_clo(env82988))[3];
//not do dummy comment
void* car = (decode_clo(env82988))[2];
//not do dummy comment
void* foldl = (decode_clo(env82988))[1];

//if-clause
bool if_guard84266 = is_true(a8261282832);
if(if_guard84266)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82712);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82712))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo84268 = alloc_clo(lam82985_fptr, 6);

//setting env list
clo84268[1] = foldl;
clo84268[2] = acc;
clo84268[3] = fun;
clo84268[4] = lst;
clo84268[5] = kont82712;
clo84268[6] = cdr;
void* f8271582833 = encode_clo(clo84268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8271582833;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82987 = encode_clo(alloc_clo(lam82987_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82989 = arg_buffer[1];
//reading env and args
void* kont82712 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo84270 = alloc_clo(lam82987_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo84270[1] = foldl;
clo84270[2] = car;
clo84270[3] = acc;
clo84270[4] = fun;
clo84270[5] = lst;
clo84270[6] = kont82712;
clo84270[7] = cdr;
void* f8271682831 = encode_clo(clo84270);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8271682831;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam82990_fptr() // lam82990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82991 = arg_buffer[1];
//reading env and args
void* a8261982846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8261782842 = (decode_clo(env82991))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env82991))[2];
//not do dummy comment
void* kont82717 = (decode_clo(env82991))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont82717;
arg_buffer[3] = a8261782842;
arg_buffer[4] = a8261982846;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82990 = encode_clo(alloc_clo(lam82990_fptr, 0));

void* lam82992_fptr() // lam82992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82993 = arg_buffer[1];
//reading env and args
void* a8261882844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8261782842 = (decode_clo(env82993))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env82993))[4];
//not do dummy comment
void* kont82717 = (decode_clo(env82993))[3];
//not do dummy comment
void* lst2 = (decode_clo(env82993))[2];
//not do dummy comment
void* cons = (decode_clo(env82993))[1];

//creating new closure instance
void** clo84272 = alloc_clo(lam82990_fptr, 3);

//setting env list
clo84272[1] = kont82717;
clo84272[2] = reverse_u45helper;
clo84272[3] = a8261782842;
void* f8271882845 = encode_clo(clo84272);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8271882845;
arg_buffer[3] = a8261882844;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82992 = encode_clo(alloc_clo(lam82992_fptr, 0));

void* lam82994_fptr() // lam82994 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82995 = arg_buffer[1];
//reading env and args
void* a8261782842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env82995))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env82995))[5];
//not do dummy comment
void* kont82717 = (decode_clo(env82995))[4];
//not do dummy comment
void* lst2 = (decode_clo(env82995))[3];
//not do dummy comment
void* car = (decode_clo(env82995))[2];
//not do dummy comment
void* cons = (decode_clo(env82995))[1];

//creating new closure instance
void** clo84274 = alloc_clo(lam82992_fptr, 5);

//setting env list
clo84274[1] = cons;
clo84274[2] = lst2;
clo84274[3] = kont82717;
clo84274[4] = reverse_u45helper;
clo84274[5] = a8261782842;
void* f8271982843 = encode_clo(clo84274);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8271982843;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82994 = encode_clo(alloc_clo(lam82994_fptr, 0));

void* lam82996_fptr() // lam82996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env82997 = arg_buffer[1];
//reading env and args
void* a8261682840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env82997))[7];
//not do dummy comment
void* lst = (decode_clo(env82997))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env82997))[5];
//not do dummy comment
void* kont82717 = (decode_clo(env82997))[4];
//not do dummy comment
void* lst2 = (decode_clo(env82997))[3];
//not do dummy comment
void* car = (decode_clo(env82997))[2];
//not do dummy comment
void* cons = (decode_clo(env82997))[1];

//if-clause
bool if_guard84275 = is_true(a8261682840);
if(if_guard84275)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82717);
arg_buffer[2] = lst2;
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
void** clo84277 = alloc_clo(lam82994_fptr, 6);

//setting env list
clo84277[1] = cons;
clo84277[2] = car;
clo84277[3] = lst2;
clo84277[4] = kont82717;
clo84277[5] = reverse_u45helper;
clo84277[6] = lst;
void* f8272082841 = encode_clo(clo84277);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8272082841;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam82996 = encode_clo(alloc_clo(lam82996_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _82998 = arg_buffer[1];
//reading env and args
void* kont82717 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo84279 = alloc_clo(lam82996_fptr, 7);

//setting env list
clo84279[1] = cons;
clo84279[2] = car;
clo84279[3] = lst2;
clo84279[4] = kont82717;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo84279[5] = reverse_u45helper;
clo84279[6] = lst;
clo84279[7] = cdr;
void* f8272182839 = encode_clo(clo84279);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8272182839;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam82999_fptr() // lam82999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83000 = arg_buffer[1];
//reading env and args
void* a8262082848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83000))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env83000))[2];
//not do dummy comment
void* kont82722 = (decode_clo(env83000))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont82722;
arg_buffer[3] = lst;
arg_buffer[4] = a8262082848;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam82999 = encode_clo(alloc_clo(lam82999_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83001 = arg_buffer[1];
//reading env and args
void* kont82722 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo84281 = alloc_clo(lam82999_fptr, 3);

//setting env list
clo84281[1] = kont82722;
clo84281[2] = reverse_u45helper;
clo84281[3] = lst;
void* f8272382847 = encode_clo(clo84281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8272382847;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam83002_fptr() // lam83002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83003 = arg_buffer[1];
//reading env and args
void* x8262382853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82724 = (decode_clo(env83003))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82724);
arg_buffer[2] = x8262382853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82724))[0]);
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
void* a8262882862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8262482855 = (decode_clo(env83005))[4];
//not do dummy comment
void* a8262682858 = (decode_clo(env83005))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env83005))[2];
//not do dummy comment
void* kont82724 = (decode_clo(env83005))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont82724;
arg_buffer[3] = a8262482855;
arg_buffer[4] = a8262682858;
arg_buffer[5] = a8262882862;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a8262782860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8262482855 = (decode_clo(env83007))[6];
//not do dummy comment
void* a8262682858 = (decode_clo(env83007))[5];
//not do dummy comment
void* cons = (decode_clo(env83007))[4];
//not do dummy comment
void* kont82724 = (decode_clo(env83007))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env83007))[2];
//not do dummy comment
void* lst2 = (decode_clo(env83007))[1];

//creating new closure instance
void** clo84283 = alloc_clo(lam83004_fptr, 4);

//setting env list
clo84283[1] = kont82724;
clo84283[2] = take_u45helper;
clo84283[3] = a8262682858;
clo84283[4] = a8262482855;
void* f8272682861 = encode_clo(clo84283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8272682861;
arg_buffer[3] = a8262782860;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8262682858 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8262482855 = (decode_clo(env83009))[7];
//not do dummy comment
void* lst = (decode_clo(env83009))[6];
//not do dummy comment
void* car = (decode_clo(env83009))[5];
//not do dummy comment
void* cons = (decode_clo(env83009))[4];
//not do dummy comment
void* kont82724 = (decode_clo(env83009))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env83009))[2];
//not do dummy comment
void* lst2 = (decode_clo(env83009))[1];

//creating new closure instance
void** clo84285 = alloc_clo(lam83006_fptr, 6);

//setting env list
clo84285[1] = lst2;
clo84285[2] = take_u45helper;
clo84285[3] = kont82724;
clo84285[4] = cons;
clo84285[5] = a8262682858;
clo84285[6] = a8262482855;
void* f8272782859 = encode_clo(clo84285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8272782859;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83008 = encode_clo(alloc_clo(lam83008_fptr, 0));

void* lam83011_fptr() // lam83011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83012 = arg_buffer[1];
//reading env and args
void* a8262482855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83012))[8];
//not do dummy comment
void* cons = (decode_clo(env83012))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env83012))[6];
//not do dummy comment
void* lst2 = (decode_clo(env83012))[5];
//not do dummy comment
void* n = (decode_clo(env83012))[4];
//not do dummy comment
void* car = (decode_clo(env83012))[3];
//not do dummy comment
void* kont82724 = (decode_clo(env83012))[2];
//not do dummy comment
void* _u45 = (decode_clo(env83012))[1];
mpz_t* mpzvar84286 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84286, "1", 10);
void* a8262582856 = encode_mpz(mpzvar84286);

//creating new closure instance
void** clo84288 = alloc_clo(lam83008_fptr, 7);

//setting env list
clo84288[1] = lst2;
clo84288[2] = take_u45helper;
clo84288[3] = kont82724;
clo84288[4] = cons;
clo84288[5] = car;
clo84288[6] = lst;
clo84288[7] = a8262482855;
void* f8272882857 = encode_clo(clo84288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8272882857;
arg_buffer[3] = n;
arg_buffer[4] = a8262582856;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83011 = encode_clo(alloc_clo(lam83011_fptr, 0));

void* lam83013_fptr() // lam83013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83014 = arg_buffer[1];
//reading env and args
void* a8262282851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83014))[10];
//not do dummy comment
void* lst = (decode_clo(env83014))[9];
//not do dummy comment
void* reverse = (decode_clo(env83014))[8];
//not do dummy comment
void* cons = (decode_clo(env83014))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env83014))[6];
//not do dummy comment
void* lst2 = (decode_clo(env83014))[5];
//not do dummy comment
void* n = (decode_clo(env83014))[4];
//not do dummy comment
void* car = (decode_clo(env83014))[3];
//not do dummy comment
void* kont82724 = (decode_clo(env83014))[2];
//not do dummy comment
void* _u45 = (decode_clo(env83014))[1];

//if-clause
bool if_guard84289 = is_true(a8262282851);
if(if_guard84289)
{

//creating new closure instance
void** clo84291 = alloc_clo(lam83002_fptr, 1);

//setting env list
clo84291[1] = kont82724;
void* f8272582852 = encode_clo(clo84291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8272582852;
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
void** clo84293 = alloc_clo(lam83011_fptr, 8);

//setting env list
clo84293[1] = _u45;
clo84293[2] = kont82724;
clo84293[3] = car;
clo84293[4] = n;
clo84293[5] = lst2;
clo84293[6] = take_u45helper;
clo84293[7] = cons;
clo84293[8] = lst;
void* f8272982854 = encode_clo(clo84293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8272982854;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83013 = encode_clo(alloc_clo(lam83013_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83016 = arg_buffer[1];
//reading env and args
void* kont82724 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar84294 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84294, "0", 10);
void* a8262182849 = encode_mpz(mpzvar84294);

//creating new closure instance
void** clo84296 = alloc_clo(lam83013_fptr, 10);

//setting env list
clo84296[1] = _u45;
clo84296[2] = kont82724;
clo84296[3] = car;
clo84296[4] = n;
clo84296[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo84296[6] = take_u45helper;
clo84296[7] = cons;
clo84296[8] = reverse;
clo84296[9] = lst;
clo84296[10] = cdr;
void* f8273082850 = encode_clo(clo84296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8273082850;
arg_buffer[3] = n;
arg_buffer[4] = a8262182849;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam83017_fptr() // lam83017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83018 = arg_buffer[1];
//reading env and args
void* a8262982864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83018))[4];
//not do dummy comment
void* kont82731 = (decode_clo(env83018))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env83018))[2];
//not do dummy comment
void* n = (decode_clo(env83018))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont82731;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8262982864;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83017 = encode_clo(alloc_clo(lam83017_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83019 = arg_buffer[1];
//reading env and args
void* kont82731 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo84298 = alloc_clo(lam83017_fptr, 4);

//setting env list
clo84298[1] = n;
clo84298[2] = take_u45helper;
clo84298[3] = kont82731;
clo84298[4] = lst;
void* f8273282863 = encode_clo(clo84298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8273282863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam83021_fptr() // lam83021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83022 = arg_buffer[1];
//reading env and args
void* a8263482872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82733 = (decode_clo(env83022))[3];
//not do dummy comment
void* _u43 = (decode_clo(env83022))[2];
//not do dummy comment
void* a8263282868 = (decode_clo(env83022))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont82733;
arg_buffer[3] = a8263282868;
arg_buffer[4] = a8263482872;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83021 = encode_clo(alloc_clo(lam83021_fptr, 0));

void* lam83023_fptr() // lam83023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83024 = arg_buffer[1];
//reading env and args
void* a8263382870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env83024))[4];
//not do dummy comment
void* kont82733 = (decode_clo(env83024))[3];
//not do dummy comment
void* _u43 = (decode_clo(env83024))[2];
//not do dummy comment
void* a8263282868 = (decode_clo(env83024))[1];

//creating new closure instance
void** clo84300 = alloc_clo(lam83021_fptr, 3);

//setting env list
clo84300[1] = a8263282868;
clo84300[2] = _u43;
clo84300[3] = kont82733;
void* f8273482871 = encode_clo(clo84300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8273482871;
arg_buffer[3] = a8263382870;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83023 = encode_clo(alloc_clo(lam83023_fptr, 0));

void* lam83026_fptr() // lam83026 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83027 = arg_buffer[1];
//reading env and args
void* a8263082866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83027))[5];
//not do dummy comment
void* lst = (decode_clo(env83027))[4];
//not do dummy comment
void* length = (decode_clo(env83027))[3];
//not do dummy comment
void* kont82733 = (decode_clo(env83027))[2];
//not do dummy comment
void* _u43 = (decode_clo(env83027))[1];

//if-clause
bool if_guard84301 = is_true(a8263082866);
if(if_guard84301)
{
mpz_t* mpzvar84302 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84302, "0", 10);
void* x8263182867 = encode_mpz(mpzvar84302);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82733);
arg_buffer[2] = x8263182867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82733))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar84303 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84303, "1", 10);
void* a8263282868 = encode_mpz(mpzvar84303);

//creating new closure instance
void** clo84305 = alloc_clo(lam83023_fptr, 4);

//setting env list
clo84305[1] = a8263282868;
clo84305[2] = _u43;
clo84305[3] = kont82733;
clo84305[4] = length;
void* f8273582869 = encode_clo(clo84305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8273582869;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83026 = encode_clo(alloc_clo(lam83026_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83028 = arg_buffer[1];
//reading env and args
void* kont82733 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo84307 = alloc_clo(lam83026_fptr, 5);

//setting env list
clo84307[1] = _u43;
clo84307[2] = kont82733;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo84307[3] = length;
clo84307[4] = lst;
clo84307[5] = cdr;
void* f8273682865 = encode_clo(clo84307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8273682865;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam83029_fptr() // lam83029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83030 = arg_buffer[1];
//reading env and args
void* x8263682876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82737 = (decode_clo(env83030))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82737);
arg_buffer[2] = x8263682876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82737))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83029 = encode_clo(alloc_clo(lam83029_fptr, 0));

void* lam83031_fptr() // lam83031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83032 = arg_buffer[1];
//reading env and args
void* a8264082884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8263882880 = (decode_clo(env83032))[3];
//not do dummy comment
void* kont82737 = (decode_clo(env83032))[2];
//not do dummy comment
void* cons = (decode_clo(env83032))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont82737;
arg_buffer[3] = a8263882880;
arg_buffer[4] = a8264082884;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83031 = encode_clo(alloc_clo(lam83031_fptr, 0));

void* lam83033_fptr() // lam83033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83034 = arg_buffer[1];
//reading env and args
void* a8263982882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env83034))[5];
//not do dummy comment
void* kont82737 = (decode_clo(env83034))[4];
//not do dummy comment
void* cons = (decode_clo(env83034))[3];
//not do dummy comment
void* proc = (decode_clo(env83034))[2];
//not do dummy comment
void* a8263882880 = (decode_clo(env83034))[1];

//creating new closure instance
void** clo84309 = alloc_clo(lam83031_fptr, 3);

//setting env list
clo84309[1] = cons;
clo84309[2] = kont82737;
clo84309[3] = a8263882880;
void* f8273982883 = encode_clo(clo84309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8273982883;
arg_buffer[3] = proc;
arg_buffer[4] = a8263982882;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8263882880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83036))[6];
//not do dummy comment
void* lst = (decode_clo(env83036))[5];
//not do dummy comment
void* map = (decode_clo(env83036))[4];
//not do dummy comment
void* proc = (decode_clo(env83036))[3];
//not do dummy comment
void* kont82737 = (decode_clo(env83036))[2];
//not do dummy comment
void* cons = (decode_clo(env83036))[1];

//creating new closure instance
void** clo84311 = alloc_clo(lam83033_fptr, 5);

//setting env list
clo84311[1] = a8263882880;
clo84311[2] = proc;
clo84311[3] = cons;
clo84311[4] = kont82737;
clo84311[5] = map;
void* f8274082881 = encode_clo(clo84311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8274082881;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8263782878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83038))[6];
//not do dummy comment
void* lst = (decode_clo(env83038))[5];
//not do dummy comment
void* map = (decode_clo(env83038))[4];
//not do dummy comment
void* proc = (decode_clo(env83038))[3];
//not do dummy comment
void* kont82737 = (decode_clo(env83038))[2];
//not do dummy comment
void* cons = (decode_clo(env83038))[1];

//creating new closure instance
void** clo84313 = alloc_clo(lam83035_fptr, 6);

//setting env list
clo84313[1] = cons;
clo84313[2] = kont82737;
clo84313[3] = proc;
clo84313[4] = map;
clo84313[5] = lst;
clo84313[6] = cdr;
void* f8274182879 = encode_clo(clo84313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8274182879;
arg_buffer[3] = a8263782878;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8263582874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83040))[8];
//not do dummy comment
void* map = (decode_clo(env83040))[7];
//not do dummy comment
void* proc = (decode_clo(env83040))[6];
//not do dummy comment
void* kont82737 = (decode_clo(env83040))[5];
//not do dummy comment
void* car = (decode_clo(env83040))[4];
//not do dummy comment
void* cons = (decode_clo(env83040))[3];
//not do dummy comment
void* list = (decode_clo(env83040))[2];
//not do dummy comment
void* cdr = (decode_clo(env83040))[1];

//if-clause
bool if_guard84314 = is_true(a8263582874);
if(if_guard84314)
{

//creating new closure instance
void** clo84316 = alloc_clo(lam83029_fptr, 1);

//setting env list
clo84316[1] = kont82737;
void* f8273882875 = encode_clo(clo84316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8273882875;
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
void** clo84318 = alloc_clo(lam83037_fptr, 6);

//setting env list
clo84318[1] = cons;
clo84318[2] = kont82737;
clo84318[3] = proc;
clo84318[4] = map;
clo84318[5] = lst;
clo84318[6] = cdr;
void* f8274282877 = encode_clo(clo84318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8274282877;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83039 = encode_clo(alloc_clo(lam83039_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83041 = arg_buffer[1];
//reading env and args
void* kont82737 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo84320 = alloc_clo(lam83039_fptr, 8);

//setting env list
clo84320[1] = cdr;
clo84320[2] = list;
clo84320[3] = cons;
clo84320[4] = car;
clo84320[5] = kont82737;
clo84320[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo84320[7] = map;
clo84320[8] = lst;
void* f8274382873 = encode_clo(clo84320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8274382873;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam83042_fptr() // lam83042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83043 = arg_buffer[1];
//reading env and args
void* x8264282888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82744 = (decode_clo(env83043))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82744);
arg_buffer[2] = x8264282888;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82744))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83042 = encode_clo(alloc_clo(lam83042_fptr, 0));

void* lam83044_fptr() // lam83044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83045 = arg_buffer[1];
//reading env and args
void* a8264782898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82744 = (decode_clo(env83045))[3];
//not do dummy comment
void* a8264582894 = (decode_clo(env83045))[2];
//not do dummy comment
void* cons = (decode_clo(env83045))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont82744;
arg_buffer[3] = a8264582894;
arg_buffer[4] = a8264782898;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83044 = encode_clo(alloc_clo(lam83044_fptr, 0));

void* lam83046_fptr() // lam83046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83047 = arg_buffer[1];
//reading env and args
void* a8264682896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82744 = (decode_clo(env83047))[5];
//not do dummy comment
void* op = (decode_clo(env83047))[4];
//not do dummy comment
void* a8264582894 = (decode_clo(env83047))[3];
//not do dummy comment
void* filter = (decode_clo(env83047))[2];
//not do dummy comment
void* cons = (decode_clo(env83047))[1];

//creating new closure instance
void** clo84322 = alloc_clo(lam83044_fptr, 3);

//setting env list
clo84322[1] = cons;
clo84322[2] = a8264582894;
clo84322[3] = kont82744;
void* f8274682897 = encode_clo(clo84322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8274682897;
arg_buffer[3] = op;
arg_buffer[4] = a8264682896;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83046 = encode_clo(alloc_clo(lam83046_fptr, 0));

void* lam83048_fptr() // lam83048 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83049 = arg_buffer[1];
//reading env and args
void* a8264582894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83049))[6];
//not do dummy comment
void* kont82744 = (decode_clo(env83049))[5];
//not do dummy comment
void* lst = (decode_clo(env83049))[4];
//not do dummy comment
void* op = (decode_clo(env83049))[3];
//not do dummy comment
void* filter = (decode_clo(env83049))[2];
//not do dummy comment
void* cons = (decode_clo(env83049))[1];

//creating new closure instance
void** clo84324 = alloc_clo(lam83046_fptr, 5);

//setting env list
clo84324[1] = cons;
clo84324[2] = filter;
clo84324[3] = a8264582894;
clo84324[4] = op;
clo84324[5] = kont82744;
void* f8274782895 = encode_clo(clo84324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8274782895;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83048 = encode_clo(alloc_clo(lam83048_fptr, 0));

void* lam83050_fptr() // lam83050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83051 = arg_buffer[1];
//reading env and args
void* a8264882900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82744 = (decode_clo(env83051))[3];
//not do dummy comment
void* op = (decode_clo(env83051))[2];
//not do dummy comment
void* filter = (decode_clo(env83051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont82744;
arg_buffer[3] = op;
arg_buffer[4] = a8264882900;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83050 = encode_clo(alloc_clo(lam83050_fptr, 0));

void* lam83052_fptr() // lam83052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83053 = arg_buffer[1];
//reading env and args
void* a8264482892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83053))[7];
//not do dummy comment
void* kont82744 = (decode_clo(env83053))[6];
//not do dummy comment
void* lst = (decode_clo(env83053))[5];
//not do dummy comment
void* op = (decode_clo(env83053))[4];
//not do dummy comment
void* cons = (decode_clo(env83053))[3];
//not do dummy comment
void* filter = (decode_clo(env83053))[2];
//not do dummy comment
void* car = (decode_clo(env83053))[1];

//if-clause
bool if_guard84325 = is_true(a8264482892);
if(if_guard84325)
{

//creating new closure instance
void** clo84327 = alloc_clo(lam83048_fptr, 6);

//setting env list
clo84327[1] = cons;
clo84327[2] = filter;
clo84327[3] = op;
clo84327[4] = lst;
clo84327[5] = kont82744;
clo84327[6] = cdr;
void* f8274882893 = encode_clo(clo84327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8274882893;
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
void** clo84329 = alloc_clo(lam83050_fptr, 3);

//setting env list
clo84329[1] = filter;
clo84329[2] = op;
clo84329[3] = kont82744;
void* f8274982899 = encode_clo(clo84329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8274982899;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83052 = encode_clo(alloc_clo(lam83052_fptr, 0));

void* lam83054_fptr() // lam83054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83055 = arg_buffer[1];
//reading env and args
void* a8264382890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83055))[7];
//not do dummy comment
void* kont82744 = (decode_clo(env83055))[6];
//not do dummy comment
void* lst = (decode_clo(env83055))[5];
//not do dummy comment
void* op = (decode_clo(env83055))[4];
//not do dummy comment
void* cons = (decode_clo(env83055))[3];
//not do dummy comment
void* filter = (decode_clo(env83055))[2];
//not do dummy comment
void* car = (decode_clo(env83055))[1];

//creating new closure instance
void** clo84331 = alloc_clo(lam83052_fptr, 7);

//setting env list
clo84331[1] = car;
clo84331[2] = filter;
clo84331[3] = cons;
clo84331[4] = op;
clo84331[5] = lst;
clo84331[6] = kont82744;
clo84331[7] = cdr;
void* f8275082891 = encode_clo(clo84331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8275082891;
arg_buffer[3] = a8264382890;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83054 = encode_clo(alloc_clo(lam83054_fptr, 0));

void* lam83056_fptr() // lam83056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83057 = arg_buffer[1];
//reading env and args
void* a8264182886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82744 = (decode_clo(env83057))[8];
//not do dummy comment
void* lst = (decode_clo(env83057))[7];
//not do dummy comment
void* op = (decode_clo(env83057))[6];
//not do dummy comment
void* cons = (decode_clo(env83057))[5];
//not do dummy comment
void* list = (decode_clo(env83057))[4];
//not do dummy comment
void* cdr = (decode_clo(env83057))[3];
//not do dummy comment
void* filter = (decode_clo(env83057))[2];
//not do dummy comment
void* car = (decode_clo(env83057))[1];

//if-clause
bool if_guard84332 = is_true(a8264182886);
if(if_guard84332)
{

//creating new closure instance
void** clo84334 = alloc_clo(lam83042_fptr, 1);

//setting env list
clo84334[1] = kont82744;
void* f8274582887 = encode_clo(clo84334);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8274582887;
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
void** clo84336 = alloc_clo(lam83054_fptr, 7);

//setting env list
clo84336[1] = car;
clo84336[2] = filter;
clo84336[3] = cons;
clo84336[4] = op;
clo84336[5] = lst;
clo84336[6] = kont82744;
clo84336[7] = cdr;
void* f8275182889 = encode_clo(clo84336);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8275182889;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83056 = encode_clo(alloc_clo(lam83056_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83058 = arg_buffer[1];
//reading env and args
void* kont82744 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo84338 = alloc_clo(lam83056_fptr, 8);

//setting env list
clo84338[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo84338[2] = filter;
clo84338[3] = cdr;
clo84338[4] = list;
clo84338[5] = cons;
clo84338[6] = op;
clo84338[7] = lst;
clo84338[8] = kont82744;
void* f8275282885 = encode_clo(clo84338);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8275282885;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam83059_fptr() // lam83059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83060 = arg_buffer[1];
//reading env and args
void* a8265382908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82753 = (decode_clo(env83060))[3];
//not do dummy comment
void* a8265182905 = (decode_clo(env83060))[2];
//not do dummy comment
void* drop = (decode_clo(env83060))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont82753;
arg_buffer[3] = a8265182905;
arg_buffer[4] = a8265382908;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83059 = encode_clo(alloc_clo(lam83059_fptr, 0));

void* lam83062_fptr() // lam83062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83063 = arg_buffer[1];
//reading env and args
void* a8265182905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env83063))[4];
//not do dummy comment
void* kont82753 = (decode_clo(env83063))[3];
//not do dummy comment
void* n = (decode_clo(env83063))[2];
//not do dummy comment
void* _u45 = (decode_clo(env83063))[1];
mpz_t* mpzvar84339 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84339, "1", 10);
void* a8265282906 = encode_mpz(mpzvar84339);

//creating new closure instance
void** clo84341 = alloc_clo(lam83059_fptr, 3);

//setting env list
clo84341[1] = drop;
clo84341[2] = a8265182905;
clo84341[3] = kont82753;
void* f8275482907 = encode_clo(clo84341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8275482907;
arg_buffer[3] = n;
arg_buffer[4] = a8265282906;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83062 = encode_clo(alloc_clo(lam83062_fptr, 0));

void* lam83064_fptr() // lam83064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83065 = arg_buffer[1];
//reading env and args
void* a8265082903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83065))[6];
//not do dummy comment
void* kont82753 = (decode_clo(env83065))[5];
//not do dummy comment
void* n = (decode_clo(env83065))[4];
//not do dummy comment
void* _u45 = (decode_clo(env83065))[3];
//not do dummy comment
void* lst = (decode_clo(env83065))[2];
//not do dummy comment
void* drop = (decode_clo(env83065))[1];

//if-clause
bool if_guard84342 = is_true(a8265082903);
if(if_guard84342)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82753);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82753))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo84344 = alloc_clo(lam83062_fptr, 4);

//setting env list
clo84344[1] = _u45;
clo84344[2] = n;
clo84344[3] = kont82753;
clo84344[4] = drop;
void* f8275582904 = encode_clo(clo84344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8275582904;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83064 = encode_clo(alloc_clo(lam83064_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83067 = arg_buffer[1];
//reading env and args
void* kont82753 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar84345 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84345, "0", 10);
void* a8264982901 = encode_mpz(mpzvar84345);

//creating new closure instance
void** clo84347 = alloc_clo(lam83064_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo84347[1] = drop;
clo84347[2] = lst;
clo84347[3] = _u45;
clo84347[4] = n;
clo84347[5] = kont82753;
clo84347[6] = cdr;
void* f8275682902 = encode_clo(clo84347);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8275682902;
arg_buffer[3] = n;
arg_buffer[4] = a8264982901;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam83068_fptr() // lam83068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83069 = arg_buffer[1];
//reading env and args
void* a8265782916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82757 = (decode_clo(env83069))[3];
//not do dummy comment
void* proc = (decode_clo(env83069))[2];
//not do dummy comment
void* a8265582912 = (decode_clo(env83069))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont82757;
arg_buffer[3] = a8265582912;
arg_buffer[4] = a8265782916;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83068 = encode_clo(alloc_clo(lam83068_fptr, 0));

void* lam83070_fptr() // lam83070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83071 = arg_buffer[1];
//reading env and args
void* a8265682914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82757 = (decode_clo(env83071))[5];
//not do dummy comment
void* foldr = (decode_clo(env83071))[4];
//not do dummy comment
void* proc = (decode_clo(env83071))[3];
//not do dummy comment
void* acc = (decode_clo(env83071))[2];
//not do dummy comment
void* a8265582912 = (decode_clo(env83071))[1];

//creating new closure instance
void** clo84349 = alloc_clo(lam83068_fptr, 3);

//setting env list
clo84349[1] = a8265582912;
clo84349[2] = proc;
clo84349[3] = kont82757;
void* f8275882915 = encode_clo(clo84349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8275882915;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8265682914;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83070 = encode_clo(alloc_clo(lam83070_fptr, 0));

void* lam83072_fptr() // lam83072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83073 = arg_buffer[1];
//reading env and args
void* a8265582912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82757 = (decode_clo(env83073))[6];
//not do dummy comment
void* cdr = (decode_clo(env83073))[5];
//not do dummy comment
void* foldr = (decode_clo(env83073))[4];
//not do dummy comment
void* lst = (decode_clo(env83073))[3];
//not do dummy comment
void* proc = (decode_clo(env83073))[2];
//not do dummy comment
void* acc = (decode_clo(env83073))[1];

//creating new closure instance
void** clo84351 = alloc_clo(lam83070_fptr, 5);

//setting env list
clo84351[1] = a8265582912;
clo84351[2] = acc;
clo84351[3] = proc;
clo84351[4] = foldr;
clo84351[5] = kont82757;
void* f8275982913 = encode_clo(clo84351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8275982913;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83072 = encode_clo(alloc_clo(lam83072_fptr, 0));

void* lam83074_fptr() // lam83074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83075 = arg_buffer[1];
//reading env and args
void* a8265482910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env83075))[7];
//not do dummy comment
void* kont82757 = (decode_clo(env83075))[6];
//not do dummy comment
void* cdr = (decode_clo(env83075))[5];
//not do dummy comment
void* foldr = (decode_clo(env83075))[4];
//not do dummy comment
void* lst = (decode_clo(env83075))[3];
//not do dummy comment
void* proc = (decode_clo(env83075))[2];
//not do dummy comment
void* acc = (decode_clo(env83075))[1];

//if-clause
bool if_guard84352 = is_true(a8265482910);
if(if_guard84352)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82757);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82757))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo84354 = alloc_clo(lam83072_fptr, 6);

//setting env list
clo84354[1] = acc;
clo84354[2] = proc;
clo84354[3] = lst;
clo84354[4] = foldr;
clo84354[5] = cdr;
clo84354[6] = kont82757;
void* f8276082911 = encode_clo(clo84354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8276082911;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83074 = encode_clo(alloc_clo(lam83074_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83076 = arg_buffer[1];
//reading env and args
void* kont82757 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo84356 = alloc_clo(lam83074_fptr, 7);

//setting env list
clo84356[1] = acc;
clo84356[2] = proc;
clo84356[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo84356[4] = foldr;
clo84356[5] = cdr;
clo84356[6] = kont82757;
clo84356[7] = car;
void* f8276182909 = encode_clo(clo84356);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8276182909;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam83077_fptr() // lam83077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83078 = arg_buffer[1];
//reading env and args
void* a8266182924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8265982920 = (decode_clo(env83078))[3];
//not do dummy comment
void* kont82762 = (decode_clo(env83078))[2];
//not do dummy comment
void* cons = (decode_clo(env83078))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont82762;
arg_buffer[3] = a8265982920;
arg_buffer[4] = a8266182924;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83077 = encode_clo(alloc_clo(lam83077_fptr, 0));

void* lam83079_fptr() // lam83079 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83080 = arg_buffer[1];
//reading env and args
void* a8266082922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8265982920 = (decode_clo(env83080))[5];
//not do dummy comment
void* kont82762 = (decode_clo(env83080))[4];
//not do dummy comment
void* append = (decode_clo(env83080))[3];
//not do dummy comment
void* lst2 = (decode_clo(env83080))[2];
//not do dummy comment
void* cons = (decode_clo(env83080))[1];

//creating new closure instance
void** clo84358 = alloc_clo(lam83077_fptr, 3);

//setting env list
clo84358[1] = cons;
clo84358[2] = kont82762;
clo84358[3] = a8265982920;
void* f8276382923 = encode_clo(clo84358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8276382923;
arg_buffer[3] = a8266082922;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83079 = encode_clo(alloc_clo(lam83079_fptr, 0));

void* lam83081_fptr() // lam83081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83082 = arg_buffer[1];
//reading env and args
void* a8265982920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83082))[6];
//not do dummy comment
void* kont82762 = (decode_clo(env83082))[5];
//not do dummy comment
void* append = (decode_clo(env83082))[4];
//not do dummy comment
void* lst2 = (decode_clo(env83082))[3];
//not do dummy comment
void* lst1 = (decode_clo(env83082))[2];
//not do dummy comment
void* cons = (decode_clo(env83082))[1];

//creating new closure instance
void** clo84360 = alloc_clo(lam83079_fptr, 5);

//setting env list
clo84360[1] = cons;
clo84360[2] = lst2;
clo84360[3] = append;
clo84360[4] = kont82762;
clo84360[5] = a8265982920;
void* f8276482921 = encode_clo(clo84360);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8276482921;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83081 = encode_clo(alloc_clo(lam83081_fptr, 0));

void* lam83083_fptr() // lam83083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83084 = arg_buffer[1];
//reading env and args
void* a8265882918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83084))[7];
//not do dummy comment
void* kont82762 = (decode_clo(env83084))[6];
//not do dummy comment
void* append = (decode_clo(env83084))[5];
//not do dummy comment
void* lst2 = (decode_clo(env83084))[4];
//not do dummy comment
void* cons = (decode_clo(env83084))[3];
//not do dummy comment
void* lst1 = (decode_clo(env83084))[2];
//not do dummy comment
void* car = (decode_clo(env83084))[1];

//if-clause
bool if_guard84361 = is_true(a8265882918);
if(if_guard84361)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82762);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82762))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo84363 = alloc_clo(lam83081_fptr, 6);

//setting env list
clo84363[1] = cons;
clo84363[2] = lst1;
clo84363[3] = lst2;
clo84363[4] = append;
clo84363[5] = kont82762;
clo84363[6] = cdr;
void* f8276582919 = encode_clo(clo84363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8276582919;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83083 = encode_clo(alloc_clo(lam83083_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83085 = arg_buffer[1];
//reading env and args
void* kont82762 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo84365 = alloc_clo(lam83083_fptr, 7);

//setting env list
clo84365[1] = car;
clo84365[2] = lst1;
clo84365[3] = cons;
clo84365[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo84365[5] = append;
clo84365[6] = kont82762;
clo84365[7] = cdr;
void* f8276682917 = encode_clo(clo84365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8276682917;
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
void* _83086 = arg_buffer[1];
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

void* kont8276782925 = prim_car(lst);
void* lst82926 = prim_cdr(lst);
void* x8266282927 = apply_prim_hash(lst82926);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8276782925);
arg_buffer[2] = x8266282927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8276782925))[0]);
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
void* _83087 = arg_buffer[1];
//reading env and args
void* kont82769 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8266382928 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82769);
arg_buffer[2] = x8266382928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82769))[0]);
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
void* _83088 = arg_buffer[1];
//reading env and args
void* kont82770 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8266482929 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82770);
arg_buffer[2] = x8266482929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82770))[0]);
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
void* _83089 = arg_buffer[1];
//reading env and args
void* kont82771 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8266582930 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82771);
arg_buffer[2] = x8266582930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82771))[0]);
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
void* _83090 = arg_buffer[1];
//reading env and args
void* kont82772 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8266682931 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82772);
arg_buffer[2] = x8266682931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82772))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam83093_fptr() // lam83093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83094 = arg_buffer[1];
//reading env and args
void* a8266782933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82773 = (decode_clo(env83094))[1];

//if-clause
bool if_guard84366 = is_true(a8266782933);
if(if_guard84366)
{
mpz_t* mpzvar84367 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84367, "1", 10);
void* x8266882934 = encode_mpz(mpzvar84367);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82773);
arg_buffer[2] = x8266882934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82773))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar84368 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84368, "2", 10);
void* x8266982935 = encode_mpz(mpzvar84368);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont82773);
arg_buffer[2] = x8266982935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont82773))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83093 = encode_clo(alloc_clo(lam83093_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83095 = arg_buffer[1];
//reading env and args
void* kont82773 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo84370 = alloc_clo(lam83093_fptr, 1);

//setting env list
clo84370[1] = kont82773;
void* f8277482932 = encode_clo(clo84370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = f8277482932;
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

void* lam83096_fptr() // lam83096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83097 = arg_buffer[1];
//reading env and args
void* a8267582942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont82775 = (decode_clo(env83097))[3];
//not do dummy comment
void* a8267082936 = (decode_clo(env83097))[2];
//not do dummy comment
void* call = (decode_clo(env83097))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont82775;
arg_buffer[3] = a8267082936;
arg_buffer[4] = a8267582942;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83096 = encode_clo(alloc_clo(lam83096_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83103 = arg_buffer[1];
//reading env and args
void* kont82775 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar84371 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84371, "1", 10);
void* a8267082936 = encode_mpz(mpzvar84371);
mpz_t* mpzvar84372 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84372, "1", 10);
void* a8267182937 = encode_mpz(mpzvar84372);
mpz_t* mpzvar84373 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84373, "2", 10);
void* a8267282938 = encode_mpz(mpzvar84373);
mpz_t* mpzvar84374 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84374, "3", 10);
void* a8267382939 = encode_mpz(mpzvar84374);
mpz_t* mpzvar84375 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84375, "4", 10);
void* a8267482940 = encode_mpz(mpzvar84375);

//creating new closure instance
void** clo84377 = alloc_clo(lam83096_fptr, 3);

//setting env list
clo84377[1] = call;
clo84377[2] = a8267082936;
clo84377[3] = kont82775;
void* f8277682941 = encode_clo(clo84377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8277682941;
arg_buffer[3] = a8267182937;
arg_buffer[4] = a8267282938;
arg_buffer[5] = a8267382939;
arg_buffer[6] = a8267482940;
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

