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
void* _85906 = arg_buffer[1];
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

void* kont8564585745 = prim_car(lst);
void* lst85746 = prim_cdr(lst);
void* x8555785747 = apply_prim__u43(lst85746);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8564585745);
arg_buffer[2] = x8555785747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8564585745))[0]);
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
void* _85907 = arg_buffer[1];
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

void* kont8564785748 = prim_car(lst);
void* lst85749 = prim_cdr(lst);
void* x8555885750 = apply_prim__u45(lst85749);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8564785748);
arg_buffer[2] = x8555885750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8564785748))[0]);
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
void* _85908 = arg_buffer[1];
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

void* kont8564985751 = prim_car(lst);
void* lst85752 = prim_cdr(lst);
void* x8555985753 = apply_prim__u42(lst85752);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8564985751);
arg_buffer[2] = x8555985753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8564985751))[0]);
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
void* _85909 = arg_buffer[1];
//reading env and args
void* kont85651 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8556085754 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85651);
arg_buffer[2] = x8556085754;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85651))[0]);
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
void* _85910 = arg_buffer[1];
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

void* kont8565285755 = prim_car(lst);
void* lst85756 = prim_cdr(lst);
void* x8556185757 = apply_prim__u47(lst85756);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8565285755);
arg_buffer[2] = x8556185757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8565285755))[0]);
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
void* _85911 = arg_buffer[1];
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

void* kont8565485758 = prim_car(lst);
void* lst85759 = prim_cdr(lst);
void* x8556285760 = apply_prim__u61(lst85759);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8565485758);
arg_buffer[2] = x8556285760;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8565485758))[0]);
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
void* _85912 = arg_buffer[1];
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

void* kont8565685761 = prim_car(lst);
void* lst85762 = prim_cdr(lst);
void* x8556385763 = apply_prim__u62(lst85762);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8565685761);
arg_buffer[2] = x8556385763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8565685761))[0]);
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
void* _85913 = arg_buffer[1];
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

void* kont8565885764 = prim_car(lst);
void* lst85765 = prim_cdr(lst);
void* x8556485766 = apply_prim__u60(lst85765);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8565885764);
arg_buffer[2] = x8556485766;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8565885764))[0]);
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
void* _85914 = arg_buffer[1];
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

void* kont8566085767 = prim_car(lst);
void* lst85768 = prim_cdr(lst);
void* x8556585769 = apply_prim__u60_u61(lst85768);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8566085767);
arg_buffer[2] = x8556585769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8566085767))[0]);
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
void* _85915 = arg_buffer[1];
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

void* kont8566285770 = prim_car(lst);
void* lst85771 = prim_cdr(lst);
void* x8556685772 = apply_prim__u62_u61(lst85771);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8566285770);
arg_buffer[2] = x8556685772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8566285770))[0]);
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
void* _85916 = arg_buffer[1];
//reading env and args
void* kont85664 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8556785773 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85664);
arg_buffer[2] = x8556785773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85664))[0]);
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
void* _85917 = arg_buffer[1];
//reading env and args
void* kont85665 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8556885774 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85665);
arg_buffer[2] = x8556885774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85665))[0]);
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
void* _85918 = arg_buffer[1];
//reading env and args
void* kont85666 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8556985775 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85666);
arg_buffer[2] = x8556985775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85666))[0]);
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
void* _85919 = arg_buffer[1];
//reading env and args
void* kont85667 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8557085776 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85667);
arg_buffer[2] = x8557085776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85667))[0]);
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
void* _85920 = arg_buffer[1];
//reading env and args
void* kont85668 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8557185777 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85668);
arg_buffer[2] = x8557185777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85668))[0]);
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
void* _85921 = arg_buffer[1];
//reading env and args
void* kont85669 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8557285778 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85669);
arg_buffer[2] = x8557285778;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85669))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam85922_fptr() // lam85922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85923 = arg_buffer[1];
//reading env and args
void* a8557585782 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85670 = (decode_clo(env85923))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env85923))[2];
//not do dummy comment
void* a8557385779 = (decode_clo(env85923))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont85670;
arg_buffer[3] = a8557385779;
arg_buffer[4] = a8557585782;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85922 = encode_clo(alloc_clo(lam85922_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85926 = arg_buffer[1];
//reading env and args
void* kont85670 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar86602 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86602, "0", 10);
void* a8557385779 = encode_mpz(mpzvar86602);
mpz_t* mpzvar86603 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86603, "2", 10);
void* a8557485780 = encode_mpz(mpzvar86603);

//creating new closure instance
void** clo86605 = alloc_clo(lam85922_fptr, 3);

//setting env list
clo86605[1] = a8557385779;
clo86605[2] = equal_u63;
clo86605[3] = kont85670;
void* f8567185781 = encode_clo(clo86605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8567185781;
arg_buffer[3] = x;
arg_buffer[4] = a8557485780;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam85927_fptr() // lam85927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85928 = arg_buffer[1];
//reading env and args
void* a8557885786 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8557685783 = (decode_clo(env85928))[3];
//not do dummy comment
void* kont85672 = (decode_clo(env85928))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env85928))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont85672;
arg_buffer[3] = a8557685783;
arg_buffer[4] = a8557885786;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85927 = encode_clo(alloc_clo(lam85927_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85931 = arg_buffer[1];
//reading env and args
void* kont85672 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar86606 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86606, "1", 10);
void* a8557685783 = encode_mpz(mpzvar86606);
mpz_t* mpzvar86607 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86607, "2", 10);
void* a8557785784 = encode_mpz(mpzvar86607);

//creating new closure instance
void** clo86609 = alloc_clo(lam85927_fptr, 3);

//setting env list
clo86609[1] = equal_u63;
clo86609[2] = kont85672;
clo86609[3] = a8557685783;
void* f8567385785 = encode_clo(clo86609);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8567385785;
arg_buffer[3] = x;
arg_buffer[4] = a8557785784;
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
void* _85932 = arg_buffer[1];
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

void* kont8567485787 = prim_car(x);
void* x85788 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8567485787);
arg_buffer[2] = x85788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8567485787))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam85935_fptr() // lam85935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85936 = arg_buffer[1];
//reading env and args
void* a8558485798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85676 = (decode_clo(env85936))[3];
//not do dummy comment
void* x = (decode_clo(env85936))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env85936))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont85676;
arg_buffer[3] = x;
arg_buffer[4] = a8558485798;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85935 = encode_clo(alloc_clo(lam85935_fptr, 0));

void* lam85937_fptr() // lam85937 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85938 = arg_buffer[1];
//reading env and args
void* a8558285795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85938))[5];
//not do dummy comment
void* lst = (decode_clo(env85938))[4];
//not do dummy comment
void* kont85676 = (decode_clo(env85938))[3];
//not do dummy comment
void* x = (decode_clo(env85938))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env85938))[1];

//if-clause
bool if_guard86610 = is_true(a8558285795);
if(if_guard86610)
{
void* x8558385796 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85676);
arg_buffer[2] = x8558385796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85676))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86612 = alloc_clo(lam85935_fptr, 3);

//setting env list
clo86612[1] = member_u63;
clo86612[2] = x;
clo86612[3] = kont85676;
void* f8567785797 = encode_clo(clo86612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8567785797;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85937 = encode_clo(alloc_clo(lam85937_fptr, 0));

void* lam85939_fptr() // lam85939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85940 = arg_buffer[1];
//reading env and args
void* a8558185793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85940))[6];
//not do dummy comment
void* lst = (decode_clo(env85940))[5];
//not do dummy comment
void* kont85676 = (decode_clo(env85940))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env85940))[3];
//not do dummy comment
void* x = (decode_clo(env85940))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env85940))[1];

//creating new closure instance
void** clo86614 = alloc_clo(lam85937_fptr, 5);

//setting env list
clo86614[1] = member_u63;
clo86614[2] = x;
clo86614[3] = kont85676;
clo86614[4] = lst;
clo86614[5] = cdr;
void* f8567885794 = encode_clo(clo86614);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8567885794;
arg_buffer[3] = a8558185793;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85939 = encode_clo(alloc_clo(lam85939_fptr, 0));

void* lam85941_fptr() // lam85941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85942 = arg_buffer[1];
//reading env and args
void* a8557985790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85942))[7];
//not do dummy comment
void* lst = (decode_clo(env85942))[6];
//not do dummy comment
void* kont85676 = (decode_clo(env85942))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env85942))[4];
//not do dummy comment
void* x = (decode_clo(env85942))[3];
//not do dummy comment
void* car = (decode_clo(env85942))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env85942))[1];

//if-clause
bool if_guard86615 = is_true(a8557985790);
if(if_guard86615)
{
void* x8558085791 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85676);
arg_buffer[2] = x8558085791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85676))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86617 = alloc_clo(lam85939_fptr, 6);

//setting env list
clo86617[1] = member_u63;
clo86617[2] = x;
clo86617[3] = equal_u63;
clo86617[4] = kont85676;
clo86617[5] = lst;
clo86617[6] = cdr;
void* f8567985792 = encode_clo(clo86617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8567985792;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85941 = encode_clo(alloc_clo(lam85941_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85943 = arg_buffer[1];
//reading env and args
void* kont85676 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86619 = alloc_clo(lam85941_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo86619[1] = member_u63;
clo86619[2] = car;
clo86619[3] = x;
clo86619[4] = equal_u63;
clo86619[5] = kont85676;
clo86619[6] = lst;
clo86619[7] = cdr;
void* f8568085789 = encode_clo(clo86619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8568085789;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam85944_fptr() // lam85944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85945 = arg_buffer[1];
//reading env and args
void* a8558885806 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8558785804 = (decode_clo(env85945))[4];
//not do dummy comment
void* fun = (decode_clo(env85945))[3];
//not do dummy comment
void* kont85681 = (decode_clo(env85945))[2];
//not do dummy comment
void* foldl = (decode_clo(env85945))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont85681;
arg_buffer[3] = fun;
arg_buffer[4] = a8558785804;
arg_buffer[5] = a8558885806;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85944 = encode_clo(alloc_clo(lam85944_fptr, 0));

void* lam85946_fptr() // lam85946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85947 = arg_buffer[1];
//reading env and args
void* a8558785804 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85947))[5];
//not do dummy comment
void* lst = (decode_clo(env85947))[4];
//not do dummy comment
void* fun = (decode_clo(env85947))[3];
//not do dummy comment
void* kont85681 = (decode_clo(env85947))[2];
//not do dummy comment
void* foldl = (decode_clo(env85947))[1];

//creating new closure instance
void** clo86621 = alloc_clo(lam85944_fptr, 4);

//setting env list
clo86621[1] = foldl;
clo86621[2] = kont85681;
clo86621[3] = fun;
clo86621[4] = a8558785804;
void* f8568285805 = encode_clo(clo86621);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8568285805;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85946 = encode_clo(alloc_clo(lam85946_fptr, 0));

void* lam85948_fptr() // lam85948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85949 = arg_buffer[1];
//reading env and args
void* a8558685802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85949))[6];
//not do dummy comment
void* lst = (decode_clo(env85949))[5];
//not do dummy comment
void* fun = (decode_clo(env85949))[4];
//not do dummy comment
void* acc = (decode_clo(env85949))[3];
//not do dummy comment
void* kont85681 = (decode_clo(env85949))[2];
//not do dummy comment
void* foldl = (decode_clo(env85949))[1];

//creating new closure instance
void** clo86623 = alloc_clo(lam85946_fptr, 5);

//setting env list
clo86623[1] = foldl;
clo86623[2] = kont85681;
clo86623[3] = fun;
clo86623[4] = lst;
clo86623[5] = cdr;
void* f8568385803 = encode_clo(clo86623);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8568385803;
arg_buffer[3] = a8558685802;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85948 = encode_clo(alloc_clo(lam85948_fptr, 0));

void* lam85950_fptr() // lam85950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85951 = arg_buffer[1];
//reading env and args
void* a8558585800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85951))[7];
//not do dummy comment
void* lst = (decode_clo(env85951))[6];
//not do dummy comment
void* fun = (decode_clo(env85951))[5];
//not do dummy comment
void* acc = (decode_clo(env85951))[4];
//not do dummy comment
void* kont85681 = (decode_clo(env85951))[3];
//not do dummy comment
void* car = (decode_clo(env85951))[2];
//not do dummy comment
void* foldl = (decode_clo(env85951))[1];

//if-clause
bool if_guard86624 = is_true(a8558585800);
if(if_guard86624)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85681);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85681))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86626 = alloc_clo(lam85948_fptr, 6);

//setting env list
clo86626[1] = foldl;
clo86626[2] = kont85681;
clo86626[3] = acc;
clo86626[4] = fun;
clo86626[5] = lst;
clo86626[6] = cdr;
void* f8568485801 = encode_clo(clo86626);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8568485801;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85950 = encode_clo(alloc_clo(lam85950_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85952 = arg_buffer[1];
//reading env and args
void* kont85681 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo86628 = alloc_clo(lam85950_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo86628[1] = foldl;
clo86628[2] = car;
clo86628[3] = kont85681;
clo86628[4] = acc;
clo86628[5] = fun;
clo86628[6] = lst;
clo86628[7] = cdr;
void* f8568585799 = encode_clo(clo86628);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8568585799;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam85953_fptr() // lam85953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85954 = arg_buffer[1];
//reading env and args
void* a8559285814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85686 = (decode_clo(env85954))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85954))[2];
//not do dummy comment
void* a8559085810 = (decode_clo(env85954))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont85686;
arg_buffer[3] = a8559085810;
arg_buffer[4] = a8559285814;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85953 = encode_clo(alloc_clo(lam85953_fptr, 0));

void* lam85955_fptr() // lam85955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85956 = arg_buffer[1];
//reading env and args
void* a8559185812 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85686 = (decode_clo(env85956))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85956))[4];
//not do dummy comment
void* lst2 = (decode_clo(env85956))[3];
//not do dummy comment
void* a8559085810 = (decode_clo(env85956))[2];
//not do dummy comment
void* cons = (decode_clo(env85956))[1];

//creating new closure instance
void** clo86630 = alloc_clo(lam85953_fptr, 3);

//setting env list
clo86630[1] = a8559085810;
clo86630[2] = reverse_u45helper;
clo86630[3] = kont85686;
void* f8568785813 = encode_clo(clo86630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8568785813;
arg_buffer[3] = a8559185812;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85955 = encode_clo(alloc_clo(lam85955_fptr, 0));

void* lam85957_fptr() // lam85957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85958 = arg_buffer[1];
//reading env and args
void* a8559085810 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85686 = (decode_clo(env85958))[6];
//not do dummy comment
void* lst = (decode_clo(env85958))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85958))[4];
//not do dummy comment
void* lst2 = (decode_clo(env85958))[3];
//not do dummy comment
void* car = (decode_clo(env85958))[2];
//not do dummy comment
void* cons = (decode_clo(env85958))[1];

//creating new closure instance
void** clo86632 = alloc_clo(lam85955_fptr, 5);

//setting env list
clo86632[1] = cons;
clo86632[2] = a8559085810;
clo86632[3] = lst2;
clo86632[4] = reverse_u45helper;
clo86632[5] = kont85686;
void* f8568885811 = encode_clo(clo86632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8568885811;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85957 = encode_clo(alloc_clo(lam85957_fptr, 0));

void* lam85959_fptr() // lam85959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85960 = arg_buffer[1];
//reading env and args
void* a8558985808 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85960))[7];
//not do dummy comment
void* kont85686 = (decode_clo(env85960))[6];
//not do dummy comment
void* lst = (decode_clo(env85960))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85960))[4];
//not do dummy comment
void* lst2 = (decode_clo(env85960))[3];
//not do dummy comment
void* car = (decode_clo(env85960))[2];
//not do dummy comment
void* cons = (decode_clo(env85960))[1];

//if-clause
bool if_guard86633 = is_true(a8558985808);
if(if_guard86633)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85686);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85686))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86635 = alloc_clo(lam85957_fptr, 6);

//setting env list
clo86635[1] = cons;
clo86635[2] = car;
clo86635[3] = lst2;
clo86635[4] = reverse_u45helper;
clo86635[5] = lst;
clo86635[6] = kont85686;
void* f8568985809 = encode_clo(clo86635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8568985809;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85959 = encode_clo(alloc_clo(lam85959_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85961 = arg_buffer[1];
//reading env and args
void* kont85686 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86637 = alloc_clo(lam85959_fptr, 7);

//setting env list
clo86637[1] = cons;
clo86637[2] = car;
clo86637[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo86637[4] = reverse_u45helper;
clo86637[5] = lst;
clo86637[6] = kont85686;
clo86637[7] = cdr;
void* f8569085807 = encode_clo(clo86637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8569085807;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam85962_fptr() // lam85962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85963 = arg_buffer[1];
//reading env and args
void* a8559385816 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env85963))[3];
//not do dummy comment
void* kont85691 = (decode_clo(env85963))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85963))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont85691;
arg_buffer[3] = lst;
arg_buffer[4] = a8559385816;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85962 = encode_clo(alloc_clo(lam85962_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85964 = arg_buffer[1];
//reading env and args
void* kont85691 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo86639 = alloc_clo(lam85962_fptr, 3);

//setting env list
clo86639[1] = reverse_u45helper;
clo86639[2] = kont85691;
clo86639[3] = lst;
void* f8569285815 = encode_clo(clo86639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8569285815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam85965_fptr() // lam85965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85966 = arg_buffer[1];
//reading env and args
void* x8559685821 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85693 = (decode_clo(env85966))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85693);
arg_buffer[2] = x8559685821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85693))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85965 = encode_clo(alloc_clo(lam85965_fptr, 0));

void* lam85967_fptr() // lam85967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85968 = arg_buffer[1];
//reading env and args
void* a8560185830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85693 = (decode_clo(env85968))[4];
//not do dummy comment
void* a8559785823 = (decode_clo(env85968))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env85968))[2];
//not do dummy comment
void* a8559985826 = (decode_clo(env85968))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont85693;
arg_buffer[3] = a8559785823;
arg_buffer[4] = a8559985826;
arg_buffer[5] = a8560185830;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85967 = encode_clo(alloc_clo(lam85967_fptr, 0));

void* lam85969_fptr() // lam85969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85970 = arg_buffer[1];
//reading env and args
void* a8560085828 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85693 = (decode_clo(env85970))[6];
//not do dummy comment
void* a8559785823 = (decode_clo(env85970))[5];
//not do dummy comment
void* a8559985826 = (decode_clo(env85970))[4];
//not do dummy comment
void* cons = (decode_clo(env85970))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env85970))[2];
//not do dummy comment
void* lst2 = (decode_clo(env85970))[1];

//creating new closure instance
void** clo86641 = alloc_clo(lam85967_fptr, 4);

//setting env list
clo86641[1] = a8559985826;
clo86641[2] = take_u45helper;
clo86641[3] = a8559785823;
clo86641[4] = kont85693;
void* f8569585829 = encode_clo(clo86641);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8569585829;
arg_buffer[3] = a8560085828;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85969 = encode_clo(alloc_clo(lam85969_fptr, 0));

void* lam85971_fptr() // lam85971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85972 = arg_buffer[1];
//reading env and args
void* a8559985826 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env85972))[7];
//not do dummy comment
void* kont85693 = (decode_clo(env85972))[6];
//not do dummy comment
void* a8559785823 = (decode_clo(env85972))[5];
//not do dummy comment
void* car = (decode_clo(env85972))[4];
//not do dummy comment
void* cons = (decode_clo(env85972))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env85972))[2];
//not do dummy comment
void* lst2 = (decode_clo(env85972))[1];

//creating new closure instance
void** clo86643 = alloc_clo(lam85969_fptr, 6);

//setting env list
clo86643[1] = lst2;
clo86643[2] = take_u45helper;
clo86643[3] = cons;
clo86643[4] = a8559985826;
clo86643[5] = a8559785823;
clo86643[6] = kont85693;
void* f8569685827 = encode_clo(clo86643);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8569685827;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85971 = encode_clo(alloc_clo(lam85971_fptr, 0));

void* lam85974_fptr() // lam85974 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85975 = arg_buffer[1];
//reading env and args
void* a8559785823 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env85975))[8];
//not do dummy comment
void* kont85693 = (decode_clo(env85975))[7];
//not do dummy comment
void* cons = (decode_clo(env85975))[6];
//not do dummy comment
void* _u45 = (decode_clo(env85975))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env85975))[4];
//not do dummy comment
void* lst2 = (decode_clo(env85975))[3];
//not do dummy comment
void* n = (decode_clo(env85975))[2];
//not do dummy comment
void* car = (decode_clo(env85975))[1];
mpz_t* mpzvar86644 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86644, "1", 10);
void* a8559885824 = encode_mpz(mpzvar86644);

//creating new closure instance
void** clo86646 = alloc_clo(lam85971_fptr, 7);

//setting env list
clo86646[1] = lst2;
clo86646[2] = take_u45helper;
clo86646[3] = cons;
clo86646[4] = car;
clo86646[5] = a8559785823;
clo86646[6] = kont85693;
clo86646[7] = lst;
void* f8569785825 = encode_clo(clo86646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8569785825;
arg_buffer[3] = n;
arg_buffer[4] = a8559885824;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85974 = encode_clo(alloc_clo(lam85974_fptr, 0));

void* lam85976_fptr() // lam85976 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85977 = arg_buffer[1];
//reading env and args
void* a8559585819 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85977))[10];
//not do dummy comment
void* lst = (decode_clo(env85977))[9];
//not do dummy comment
void* reverse = (decode_clo(env85977))[8];
//not do dummy comment
void* kont85693 = (decode_clo(env85977))[7];
//not do dummy comment
void* cons = (decode_clo(env85977))[6];
//not do dummy comment
void* _u45 = (decode_clo(env85977))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env85977))[4];
//not do dummy comment
void* lst2 = (decode_clo(env85977))[3];
//not do dummy comment
void* n = (decode_clo(env85977))[2];
//not do dummy comment
void* car = (decode_clo(env85977))[1];

//if-clause
bool if_guard86647 = is_true(a8559585819);
if(if_guard86647)
{

//creating new closure instance
void** clo86649 = alloc_clo(lam85965_fptr, 1);

//setting env list
clo86649[1] = kont85693;
void* f8569485820 = encode_clo(clo86649);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8569485820;
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
void** clo86651 = alloc_clo(lam85974_fptr, 8);

//setting env list
clo86651[1] = car;
clo86651[2] = n;
clo86651[3] = lst2;
clo86651[4] = take_u45helper;
clo86651[5] = _u45;
clo86651[6] = cons;
clo86651[7] = kont85693;
clo86651[8] = lst;
void* f8569885822 = encode_clo(clo86651);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8569885822;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85976 = encode_clo(alloc_clo(lam85976_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85979 = arg_buffer[1];
//reading env and args
void* kont85693 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar86652 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86652, "0", 10);
void* a8559485817 = encode_mpz(mpzvar86652);

//creating new closure instance
void** clo86654 = alloc_clo(lam85976_fptr, 10);

//setting env list
clo86654[1] = car;
clo86654[2] = n;
clo86654[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo86654[4] = take_u45helper;
clo86654[5] = _u45;
clo86654[6] = cons;
clo86654[7] = kont85693;
clo86654[8] = reverse;
clo86654[9] = lst;
clo86654[10] = cdr;
void* f8569985818 = encode_clo(clo86654);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8569985818;
arg_buffer[3] = n;
arg_buffer[4] = a8559485817;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam85980_fptr() // lam85980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85981 = arg_buffer[1];
//reading env and args
void* a8560285832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env85981))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env85981))[3];
//not do dummy comment
void* n = (decode_clo(env85981))[2];
//not do dummy comment
void* kont85700 = (decode_clo(env85981))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont85700;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8560285832;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85980 = encode_clo(alloc_clo(lam85980_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85982 = arg_buffer[1];
//reading env and args
void* kont85700 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86656 = alloc_clo(lam85980_fptr, 4);

//setting env list
clo86656[1] = kont85700;
clo86656[2] = n;
clo86656[3] = take_u45helper;
clo86656[4] = lst;
void* f8570185831 = encode_clo(clo86656);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8570185831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam85984_fptr() // lam85984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85985 = arg_buffer[1];
//reading env and args
void* a8560785840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85702 = (decode_clo(env85985))[3];
//not do dummy comment
void* a8560585836 = (decode_clo(env85985))[2];
//not do dummy comment
void* _u43 = (decode_clo(env85985))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont85702;
arg_buffer[3] = a8560585836;
arg_buffer[4] = a8560785840;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85984 = encode_clo(alloc_clo(lam85984_fptr, 0));

void* lam85986_fptr() // lam85986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85987 = arg_buffer[1];
//reading env and args
void* a8560685838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85702 = (decode_clo(env85987))[4];
//not do dummy comment
void* length = (decode_clo(env85987))[3];
//not do dummy comment
void* a8560585836 = (decode_clo(env85987))[2];
//not do dummy comment
void* _u43 = (decode_clo(env85987))[1];

//creating new closure instance
void** clo86658 = alloc_clo(lam85984_fptr, 3);

//setting env list
clo86658[1] = _u43;
clo86658[2] = a8560585836;
clo86658[3] = kont85702;
void* f8570385839 = encode_clo(clo86658);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8570385839;
arg_buffer[3] = a8560685838;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85986 = encode_clo(alloc_clo(lam85986_fptr, 0));

void* lam85989_fptr() // lam85989 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85990 = arg_buffer[1];
//reading env and args
void* a8560385834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85990))[5];
//not do dummy comment
void* kont85702 = (decode_clo(env85990))[4];
//not do dummy comment
void* lst = (decode_clo(env85990))[3];
//not do dummy comment
void* length = (decode_clo(env85990))[2];
//not do dummy comment
void* _u43 = (decode_clo(env85990))[1];

//if-clause
bool if_guard86659 = is_true(a8560385834);
if(if_guard86659)
{
mpz_t* mpzvar86660 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86660, "0", 10);
void* x8560485835 = encode_mpz(mpzvar86660);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85702);
arg_buffer[2] = x8560485835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85702))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar86661 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86661, "1", 10);
void* a8560585836 = encode_mpz(mpzvar86661);

//creating new closure instance
void** clo86663 = alloc_clo(lam85986_fptr, 4);

//setting env list
clo86663[1] = _u43;
clo86663[2] = a8560585836;
clo86663[3] = length;
clo86663[4] = kont85702;
void* f8570485837 = encode_clo(clo86663);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8570485837;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85989 = encode_clo(alloc_clo(lam85989_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85991 = arg_buffer[1];
//reading env and args
void* kont85702 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo86665 = alloc_clo(lam85989_fptr, 5);

//setting env list
clo86665[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo86665[2] = length;
clo86665[3] = lst;
clo86665[4] = kont85702;
clo86665[5] = cdr;
void* f8570585833 = encode_clo(clo86665);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8570585833;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam85992_fptr() // lam85992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85993 = arg_buffer[1];
//reading env and args
void* x8560985844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85706 = (decode_clo(env85993))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85706);
arg_buffer[2] = x8560985844;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85706))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85992 = encode_clo(alloc_clo(lam85992_fptr, 0));

void* lam85994_fptr() // lam85994 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85995 = arg_buffer[1];
//reading env and args
void* a8561385852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8561185848 = (decode_clo(env85995))[3];
//not do dummy comment
void* kont85706 = (decode_clo(env85995))[2];
//not do dummy comment
void* cons = (decode_clo(env85995))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont85706;
arg_buffer[3] = a8561185848;
arg_buffer[4] = a8561385852;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85994 = encode_clo(alloc_clo(lam85994_fptr, 0));

void* lam85996_fptr() // lam85996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85997 = arg_buffer[1];
//reading env and args
void* a8561285850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8561185848 = (decode_clo(env85997))[5];
//not do dummy comment
void* proc = (decode_clo(env85997))[4];
//not do dummy comment
void* cons = (decode_clo(env85997))[3];
//not do dummy comment
void* kont85706 = (decode_clo(env85997))[2];
//not do dummy comment
void* map = (decode_clo(env85997))[1];

//creating new closure instance
void** clo86667 = alloc_clo(lam85994_fptr, 3);

//setting env list
clo86667[1] = cons;
clo86667[2] = kont85706;
clo86667[3] = a8561185848;
void* f8570885851 = encode_clo(clo86667);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8570885851;
arg_buffer[3] = proc;
arg_buffer[4] = a8561285850;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85996 = encode_clo(alloc_clo(lam85996_fptr, 0));

void* lam85998_fptr() // lam85998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85999 = arg_buffer[1];
//reading env and args
void* a8561185848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85999))[6];
//not do dummy comment
void* lst = (decode_clo(env85999))[5];
//not do dummy comment
void* proc = (decode_clo(env85999))[4];
//not do dummy comment
void* cons = (decode_clo(env85999))[3];
//not do dummy comment
void* kont85706 = (decode_clo(env85999))[2];
//not do dummy comment
void* map = (decode_clo(env85999))[1];

//creating new closure instance
void** clo86669 = alloc_clo(lam85996_fptr, 5);

//setting env list
clo86669[1] = map;
clo86669[2] = kont85706;
clo86669[3] = cons;
clo86669[4] = proc;
clo86669[5] = a8561185848;
void* f8570985849 = encode_clo(clo86669);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8570985849;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85998 = encode_clo(alloc_clo(lam85998_fptr, 0));

void* lam86000_fptr() // lam86000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86001 = arg_buffer[1];
//reading env and args
void* a8561085846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86001))[6];
//not do dummy comment
void* lst = (decode_clo(env86001))[5];
//not do dummy comment
void* proc = (decode_clo(env86001))[4];
//not do dummy comment
void* cons = (decode_clo(env86001))[3];
//not do dummy comment
void* kont85706 = (decode_clo(env86001))[2];
//not do dummy comment
void* map = (decode_clo(env86001))[1];

//creating new closure instance
void** clo86671 = alloc_clo(lam85998_fptr, 6);

//setting env list
clo86671[1] = map;
clo86671[2] = kont85706;
clo86671[3] = cons;
clo86671[4] = proc;
clo86671[5] = lst;
clo86671[6] = cdr;
void* f8571085847 = encode_clo(clo86671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8571085847;
arg_buffer[3] = a8561085846;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86000 = encode_clo(alloc_clo(lam86000_fptr, 0));

void* lam86002_fptr() // lam86002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86003 = arg_buffer[1];
//reading env and args
void* a8560885842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env86003))[8];
//not do dummy comment
void* proc = (decode_clo(env86003))[7];
//not do dummy comment
void* car = (decode_clo(env86003))[6];
//not do dummy comment
void* cons = (decode_clo(env86003))[5];
//not do dummy comment
void* list = (decode_clo(env86003))[4];
//not do dummy comment
void* cdr = (decode_clo(env86003))[3];
//not do dummy comment
void* kont85706 = (decode_clo(env86003))[2];
//not do dummy comment
void* map = (decode_clo(env86003))[1];

//if-clause
bool if_guard86672 = is_true(a8560885842);
if(if_guard86672)
{

//creating new closure instance
void** clo86674 = alloc_clo(lam85992_fptr, 1);

//setting env list
clo86674[1] = kont85706;
void* f8570785843 = encode_clo(clo86674);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8570785843;
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
void** clo86676 = alloc_clo(lam86000_fptr, 6);

//setting env list
clo86676[1] = map;
clo86676[2] = kont85706;
clo86676[3] = cons;
clo86676[4] = proc;
clo86676[5] = lst;
clo86676[6] = cdr;
void* f8571185845 = encode_clo(clo86676);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8571185845;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86002 = encode_clo(alloc_clo(lam86002_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86004 = arg_buffer[1];
//reading env and args
void* kont85706 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86678 = alloc_clo(lam86002_fptr, 8);

//setting env list
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo86678[1] = map;
clo86678[2] = kont85706;
clo86678[3] = cdr;
clo86678[4] = list;
clo86678[5] = cons;
clo86678[6] = car;
clo86678[7] = proc;
clo86678[8] = lst;
void* f8571285841 = encode_clo(clo86678);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8571285841;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam86005_fptr() // lam86005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86006 = arg_buffer[1];
//reading env and args
void* x8561585856 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85713 = (decode_clo(env86006))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85713);
arg_buffer[2] = x8561585856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85713))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86005 = encode_clo(alloc_clo(lam86005_fptr, 0));

void* lam86007_fptr() // lam86007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86008 = arg_buffer[1];
//reading env and args
void* a8562085866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8561885862 = (decode_clo(env86008))[3];
//not do dummy comment
void* kont85713 = (decode_clo(env86008))[2];
//not do dummy comment
void* cons = (decode_clo(env86008))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont85713;
arg_buffer[3] = a8561885862;
arg_buffer[4] = a8562085866;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86007 = encode_clo(alloc_clo(lam86007_fptr, 0));

void* lam86009_fptr() // lam86009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86010 = arg_buffer[1];
//reading env and args
void* a8561985864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8561885862 = (decode_clo(env86010))[5];
//not do dummy comment
void* op = (decode_clo(env86010))[4];
//not do dummy comment
void* kont85713 = (decode_clo(env86010))[3];
//not do dummy comment
void* filter = (decode_clo(env86010))[2];
//not do dummy comment
void* cons = (decode_clo(env86010))[1];

//creating new closure instance
void** clo86680 = alloc_clo(lam86007_fptr, 3);

//setting env list
clo86680[1] = cons;
clo86680[2] = kont85713;
clo86680[3] = a8561885862;
void* f8571585865 = encode_clo(clo86680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8571585865;
arg_buffer[3] = op;
arg_buffer[4] = a8561985864;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86009 = encode_clo(alloc_clo(lam86009_fptr, 0));

void* lam86011_fptr() // lam86011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86012 = arg_buffer[1];
//reading env and args
void* a8561885862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86012))[6];
//not do dummy comment
void* lst = (decode_clo(env86012))[5];
//not do dummy comment
void* op = (decode_clo(env86012))[4];
//not do dummy comment
void* kont85713 = (decode_clo(env86012))[3];
//not do dummy comment
void* filter = (decode_clo(env86012))[2];
//not do dummy comment
void* cons = (decode_clo(env86012))[1];

//creating new closure instance
void** clo86682 = alloc_clo(lam86009_fptr, 5);

//setting env list
clo86682[1] = cons;
clo86682[2] = filter;
clo86682[3] = kont85713;
clo86682[4] = op;
clo86682[5] = a8561885862;
void* f8571685863 = encode_clo(clo86682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8571685863;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86011 = encode_clo(alloc_clo(lam86011_fptr, 0));

void* lam86013_fptr() // lam86013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86014 = arg_buffer[1];
//reading env and args
void* a8562185868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env86014))[3];
//not do dummy comment
void* kont85713 = (decode_clo(env86014))[2];
//not do dummy comment
void* filter = (decode_clo(env86014))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont85713;
arg_buffer[3] = op;
arg_buffer[4] = a8562185868;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86013 = encode_clo(alloc_clo(lam86013_fptr, 0));

void* lam86015_fptr() // lam86015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86016 = arg_buffer[1];
//reading env and args
void* a8561785860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86016))[7];
//not do dummy comment
void* lst = (decode_clo(env86016))[6];
//not do dummy comment
void* op = (decode_clo(env86016))[5];
//not do dummy comment
void* kont85713 = (decode_clo(env86016))[4];
//not do dummy comment
void* cons = (decode_clo(env86016))[3];
//not do dummy comment
void* filter = (decode_clo(env86016))[2];
//not do dummy comment
void* car = (decode_clo(env86016))[1];

//if-clause
bool if_guard86683 = is_true(a8561785860);
if(if_guard86683)
{

//creating new closure instance
void** clo86685 = alloc_clo(lam86011_fptr, 6);

//setting env list
clo86685[1] = cons;
clo86685[2] = filter;
clo86685[3] = kont85713;
clo86685[4] = op;
clo86685[5] = lst;
clo86685[6] = cdr;
void* f8571785861 = encode_clo(clo86685);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8571785861;
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
void** clo86687 = alloc_clo(lam86013_fptr, 3);

//setting env list
clo86687[1] = filter;
clo86687[2] = kont85713;
clo86687[3] = op;
void* f8571885867 = encode_clo(clo86687);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8571885867;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86015 = encode_clo(alloc_clo(lam86015_fptr, 0));

void* lam86017_fptr() // lam86017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86018 = arg_buffer[1];
//reading env and args
void* a8561685858 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86018))[7];
//not do dummy comment
void* lst = (decode_clo(env86018))[6];
//not do dummy comment
void* op = (decode_clo(env86018))[5];
//not do dummy comment
void* kont85713 = (decode_clo(env86018))[4];
//not do dummy comment
void* cons = (decode_clo(env86018))[3];
//not do dummy comment
void* filter = (decode_clo(env86018))[2];
//not do dummy comment
void* car = (decode_clo(env86018))[1];

//creating new closure instance
void** clo86689 = alloc_clo(lam86015_fptr, 7);

//setting env list
clo86689[1] = car;
clo86689[2] = filter;
clo86689[3] = cons;
clo86689[4] = kont85713;
clo86689[5] = op;
clo86689[6] = lst;
clo86689[7] = cdr;
void* f8571985859 = encode_clo(clo86689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8571985859;
arg_buffer[3] = a8561685858;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86017 = encode_clo(alloc_clo(lam86017_fptr, 0));

void* lam86019_fptr() // lam86019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86020 = arg_buffer[1];
//reading env and args
void* a8561485854 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env86020))[8];
//not do dummy comment
void* op = (decode_clo(env86020))[7];
//not do dummy comment
void* kont85713 = (decode_clo(env86020))[6];
//not do dummy comment
void* cons = (decode_clo(env86020))[5];
//not do dummy comment
void* list = (decode_clo(env86020))[4];
//not do dummy comment
void* cdr = (decode_clo(env86020))[3];
//not do dummy comment
void* filter = (decode_clo(env86020))[2];
//not do dummy comment
void* car = (decode_clo(env86020))[1];

//if-clause
bool if_guard86690 = is_true(a8561485854);
if(if_guard86690)
{

//creating new closure instance
void** clo86692 = alloc_clo(lam86005_fptr, 1);

//setting env list
clo86692[1] = kont85713;
void* f8571485855 = encode_clo(clo86692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8571485855;
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
void** clo86694 = alloc_clo(lam86017_fptr, 7);

//setting env list
clo86694[1] = car;
clo86694[2] = filter;
clo86694[3] = cons;
clo86694[4] = kont85713;
clo86694[5] = op;
clo86694[6] = lst;
clo86694[7] = cdr;
void* f8572085857 = encode_clo(clo86694);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8572085857;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86019 = encode_clo(alloc_clo(lam86019_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86021 = arg_buffer[1];
//reading env and args
void* kont85713 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86696 = alloc_clo(lam86019_fptr, 8);

//setting env list
clo86696[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo86696[2] = filter;
clo86696[3] = cdr;
clo86696[4] = list;
clo86696[5] = cons;
clo86696[6] = kont85713;
clo86696[7] = op;
clo86696[8] = lst;
void* f8572185853 = encode_clo(clo86696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8572185853;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam86022_fptr() // lam86022 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86023 = arg_buffer[1];
//reading env and args
void* a8562685876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env86023))[3];
//not do dummy comment
void* kont85722 = (decode_clo(env86023))[2];
//not do dummy comment
void* a8562485873 = (decode_clo(env86023))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont85722;
arg_buffer[3] = a8562485873;
arg_buffer[4] = a8562685876;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86022 = encode_clo(alloc_clo(lam86022_fptr, 0));

void* lam86025_fptr() // lam86025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86026 = arg_buffer[1];
//reading env and args
void* a8562485873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env86026))[4];
//not do dummy comment
void* kont85722 = (decode_clo(env86026))[3];
//not do dummy comment
void* n = (decode_clo(env86026))[2];
//not do dummy comment
void* _u45 = (decode_clo(env86026))[1];
mpz_t* mpzvar86697 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86697, "1", 10);
void* a8562585874 = encode_mpz(mpzvar86697);

//creating new closure instance
void** clo86699 = alloc_clo(lam86022_fptr, 3);

//setting env list
clo86699[1] = a8562485873;
clo86699[2] = kont85722;
clo86699[3] = drop;
void* f8572385875 = encode_clo(clo86699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8572385875;
arg_buffer[3] = n;
arg_buffer[4] = a8562585874;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86025 = encode_clo(alloc_clo(lam86025_fptr, 0));

void* lam86027_fptr() // lam86027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86028 = arg_buffer[1];
//reading env and args
void* a8562385871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86028))[6];
//not do dummy comment
void* kont85722 = (decode_clo(env86028))[5];
//not do dummy comment
void* n = (decode_clo(env86028))[4];
//not do dummy comment
void* _u45 = (decode_clo(env86028))[3];
//not do dummy comment
void* lst = (decode_clo(env86028))[2];
//not do dummy comment
void* drop = (decode_clo(env86028))[1];

//if-clause
bool if_guard86700 = is_true(a8562385871);
if(if_guard86700)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85722);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85722))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86702 = alloc_clo(lam86025_fptr, 4);

//setting env list
clo86702[1] = _u45;
clo86702[2] = n;
clo86702[3] = kont85722;
clo86702[4] = drop;
void* f8572485872 = encode_clo(clo86702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8572485872;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86027 = encode_clo(alloc_clo(lam86027_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86030 = arg_buffer[1];
//reading env and args
void* kont85722 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar86703 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86703, "0", 10);
void* a8562285869 = encode_mpz(mpzvar86703);

//creating new closure instance
void** clo86705 = alloc_clo(lam86027_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo86705[1] = drop;
clo86705[2] = lst;
clo86705[3] = _u45;
clo86705[4] = n;
clo86705[5] = kont85722;
clo86705[6] = cdr;
void* f8572585870 = encode_clo(clo86705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8572585870;
arg_buffer[3] = n;
arg_buffer[4] = a8562285869;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam86031_fptr() // lam86031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86032 = arg_buffer[1];
//reading env and args
void* a8563085884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8562885880 = (decode_clo(env86032))[3];
//not do dummy comment
void* kont85726 = (decode_clo(env86032))[2];
//not do dummy comment
void* proc = (decode_clo(env86032))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont85726;
arg_buffer[3] = a8562885880;
arg_buffer[4] = a8563085884;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86031 = encode_clo(alloc_clo(lam86031_fptr, 0));

void* lam86033_fptr() // lam86033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86034 = arg_buffer[1];
//reading env and args
void* a8562985882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8562885880 = (decode_clo(env86034))[5];
//not do dummy comment
void* foldr = (decode_clo(env86034))[4];
//not do dummy comment
void* kont85726 = (decode_clo(env86034))[3];
//not do dummy comment
void* proc = (decode_clo(env86034))[2];
//not do dummy comment
void* acc = (decode_clo(env86034))[1];

//creating new closure instance
void** clo86707 = alloc_clo(lam86031_fptr, 3);

//setting env list
clo86707[1] = proc;
clo86707[2] = kont85726;
clo86707[3] = a8562885880;
void* f8572785883 = encode_clo(clo86707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8572785883;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8562985882;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86033 = encode_clo(alloc_clo(lam86033_fptr, 0));

void* lam86035_fptr() // lam86035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86036 = arg_buffer[1];
//reading env and args
void* a8562885880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86036))[6];
//not do dummy comment
void* kont85726 = (decode_clo(env86036))[5];
//not do dummy comment
void* foldr = (decode_clo(env86036))[4];
//not do dummy comment
void* lst = (decode_clo(env86036))[3];
//not do dummy comment
void* proc = (decode_clo(env86036))[2];
//not do dummy comment
void* acc = (decode_clo(env86036))[1];

//creating new closure instance
void** clo86709 = alloc_clo(lam86033_fptr, 5);

//setting env list
clo86709[1] = acc;
clo86709[2] = proc;
clo86709[3] = kont85726;
clo86709[4] = foldr;
clo86709[5] = a8562885880;
void* f8572885881 = encode_clo(clo86709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8572885881;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86035 = encode_clo(alloc_clo(lam86035_fptr, 0));

void* lam86037_fptr() // lam86037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86038 = arg_buffer[1];
//reading env and args
void* a8562785878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86038))[7];
//not do dummy comment
void* kont85726 = (decode_clo(env86038))[6];
//not do dummy comment
void* car = (decode_clo(env86038))[5];
//not do dummy comment
void* foldr = (decode_clo(env86038))[4];
//not do dummy comment
void* lst = (decode_clo(env86038))[3];
//not do dummy comment
void* proc = (decode_clo(env86038))[2];
//not do dummy comment
void* acc = (decode_clo(env86038))[1];

//if-clause
bool if_guard86710 = is_true(a8562785878);
if(if_guard86710)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85726);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85726))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86712 = alloc_clo(lam86035_fptr, 6);

//setting env list
clo86712[1] = acc;
clo86712[2] = proc;
clo86712[3] = lst;
clo86712[4] = foldr;
clo86712[5] = kont85726;
clo86712[6] = cdr;
void* f8572985879 = encode_clo(clo86712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8572985879;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86037 = encode_clo(alloc_clo(lam86037_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86039 = arg_buffer[1];
//reading env and args
void* kont85726 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo86714 = alloc_clo(lam86037_fptr, 7);

//setting env list
clo86714[1] = acc;
clo86714[2] = proc;
clo86714[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo86714[4] = foldr;
clo86714[5] = car;
clo86714[6] = kont85726;
clo86714[7] = cdr;
void* f8573085877 = encode_clo(clo86714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8573085877;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam86040_fptr() // lam86040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86041 = arg_buffer[1];
//reading env and args
void* a8563485892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8563285888 = (decode_clo(env86041))[3];
//not do dummy comment
void* kont85731 = (decode_clo(env86041))[2];
//not do dummy comment
void* cons = (decode_clo(env86041))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont85731;
arg_buffer[3] = a8563285888;
arg_buffer[4] = a8563485892;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86040 = encode_clo(alloc_clo(lam86040_fptr, 0));

void* lam86042_fptr() // lam86042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86043 = arg_buffer[1];
//reading env and args
void* a8563385890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env86043))[5];
//not do dummy comment
void* a8563285888 = (decode_clo(env86043))[4];
//not do dummy comment
void* lst2 = (decode_clo(env86043))[3];
//not do dummy comment
void* kont85731 = (decode_clo(env86043))[2];
//not do dummy comment
void* cons = (decode_clo(env86043))[1];

//creating new closure instance
void** clo86716 = alloc_clo(lam86040_fptr, 3);

//setting env list
clo86716[1] = cons;
clo86716[2] = kont85731;
clo86716[3] = a8563285888;
void* f8573285891 = encode_clo(clo86716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8573285891;
arg_buffer[3] = a8563385890;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86042 = encode_clo(alloc_clo(lam86042_fptr, 0));

void* lam86044_fptr() // lam86044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86045 = arg_buffer[1];
//reading env and args
void* a8563285888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86045))[6];
//not do dummy comment
void* append = (decode_clo(env86045))[5];
//not do dummy comment
void* lst2 = (decode_clo(env86045))[4];
//not do dummy comment
void* lst1 = (decode_clo(env86045))[3];
//not do dummy comment
void* kont85731 = (decode_clo(env86045))[2];
//not do dummy comment
void* cons = (decode_clo(env86045))[1];

//creating new closure instance
void** clo86718 = alloc_clo(lam86042_fptr, 5);

//setting env list
clo86718[1] = cons;
clo86718[2] = kont85731;
clo86718[3] = lst2;
clo86718[4] = a8563285888;
clo86718[5] = append;
void* f8573385889 = encode_clo(clo86718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8573385889;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86044 = encode_clo(alloc_clo(lam86044_fptr, 0));

void* lam86046_fptr() // lam86046 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86047 = arg_buffer[1];
//reading env and args
void* a8563185886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86047))[7];
//not do dummy comment
void* append = (decode_clo(env86047))[6];
//not do dummy comment
void* lst2 = (decode_clo(env86047))[5];
//not do dummy comment
void* lst1 = (decode_clo(env86047))[4];
//not do dummy comment
void* car = (decode_clo(env86047))[3];
//not do dummy comment
void* kont85731 = (decode_clo(env86047))[2];
//not do dummy comment
void* cons = (decode_clo(env86047))[1];

//if-clause
bool if_guard86719 = is_true(a8563185886);
if(if_guard86719)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85731);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85731))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86721 = alloc_clo(lam86044_fptr, 6);

//setting env list
clo86721[1] = cons;
clo86721[2] = kont85731;
clo86721[3] = lst1;
clo86721[4] = lst2;
clo86721[5] = append;
clo86721[6] = cdr;
void* f8573485887 = encode_clo(clo86721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8573485887;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86046 = encode_clo(alloc_clo(lam86046_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86048 = arg_buffer[1];
//reading env and args
void* kont85731 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86723 = alloc_clo(lam86046_fptr, 7);

//setting env list
clo86723[1] = cons;
clo86723[2] = kont85731;
clo86723[3] = car;
clo86723[4] = lst1;
clo86723[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo86723[6] = append;
clo86723[7] = cdr;
void* f8573585885 = encode_clo(clo86723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8573585885;
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
void* _86049 = arg_buffer[1];
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

void* kont8573685893 = prim_car(lst);
void* lst85894 = prim_cdr(lst);
void* x8563585895 = apply_prim_hash(lst85894);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8573685893);
arg_buffer[2] = x8563585895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8573685893))[0]);
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
void* _86050 = arg_buffer[1];
//reading env and args
void* kont85738 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8563685896 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85738);
arg_buffer[2] = x8563685896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85738))[0]);
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
void* _86051 = arg_buffer[1];
//reading env and args
void* kont85739 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8563785897 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85739);
arg_buffer[2] = x8563785897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85739))[0]);
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
void* _86052 = arg_buffer[1];
//reading env and args
void* kont85740 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8563885898 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85740);
arg_buffer[2] = x8563885898;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85740))[0]);
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
void* _86053 = arg_buffer[1];
//reading env and args
void* kont85741 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8563985899 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85741);
arg_buffer[2] = x8563985899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85741))[0]);
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
void* _86058 = arg_buffer[1];
//reading env and args
void* kont85742 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar86724 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86724, "100", 10);
void* a8564085900 = encode_mpz(mpzvar86724);
mpz_t* mpzvar86725 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86725, "80", 10);
void* a8564185901 = encode_mpz(mpzvar86725);
mpz_t* mpzvar86726 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86726, "10", 10);
void* a8564285902 = encode_mpz(mpzvar86726);
mpz_t* mpzvar86727 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86727, "2", 10);
void* a8564385903 = encode_mpz(mpzvar86727);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = kont85742;
arg_buffer[3] = a8564085900;
arg_buffer[4] = a8564185901;
arg_buffer[5] = a8564285902;
arg_buffer[6] = a8564385903;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam86059_fptr() // lam86059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86060 = arg_buffer[1];
//reading env and args
void* x8564485905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85743 = (decode_clo(env86060))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85743);
arg_buffer[2] = x8564485905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85743))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86059 = encode_clo(alloc_clo(lam86059_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86061 = arg_buffer[1];
//reading env and args
void* kont85743 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo86729 = alloc_clo(lam86059_fptr, 1);

//setting env list
clo86729[1] = kont85743;
void* f8574485904 = encode_clo(clo86729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8574485904;
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

