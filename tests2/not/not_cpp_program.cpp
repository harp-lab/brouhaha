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
void* _48814 = arg_buffer[1];
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

void* kont4855448654 = prim_car(lst);
void* lst48655 = prim_cdr(lst);
void* x4846748656 = apply_prim__u43(lst48655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4855448654);
arg_buffer[2] = x4846748656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4855448654))[0]);
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
void* _48815 = arg_buffer[1];
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

void* kont4855648657 = prim_car(lst);
void* lst48658 = prim_cdr(lst);
void* x4846848659 = apply_prim__u45(lst48658);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4855648657);
arg_buffer[2] = x4846848659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4855648657))[0]);
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
void* _48816 = arg_buffer[1];
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

void* kont4855848660 = prim_car(lst);
void* lst48661 = prim_cdr(lst);
void* x4846948662 = apply_prim__u42(lst48661);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4855848660);
arg_buffer[2] = x4846948662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4855848660))[0]);
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
void* _48817 = arg_buffer[1];
//reading env and args
void* kont48560 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4847048663 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48560);
arg_buffer[2] = x4847048663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48560))[0]);
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
void* _48818 = arg_buffer[1];
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

void* kont4856148664 = prim_car(lst);
void* lst48665 = prim_cdr(lst);
void* x4847148666 = apply_prim__u47(lst48665);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4856148664);
arg_buffer[2] = x4847148666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4856148664))[0]);
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
void* _48819 = arg_buffer[1];
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

void* kont4856348667 = prim_car(lst);
void* lst48668 = prim_cdr(lst);
void* x4847248669 = apply_prim__u61(lst48668);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4856348667);
arg_buffer[2] = x4847248669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4856348667))[0]);
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
void* _48820 = arg_buffer[1];
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

void* kont4856548670 = prim_car(lst);
void* lst48671 = prim_cdr(lst);
void* x4847348672 = apply_prim__u62(lst48671);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4856548670);
arg_buffer[2] = x4847348672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4856548670))[0]);
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
void* _48821 = arg_buffer[1];
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

void* kont4856748673 = prim_car(lst);
void* lst48674 = prim_cdr(lst);
void* x4847448675 = apply_prim__u60(lst48674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4856748673);
arg_buffer[2] = x4847448675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4856748673))[0]);
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
void* _48822 = arg_buffer[1];
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

void* kont4856948676 = prim_car(lst);
void* lst48677 = prim_cdr(lst);
void* x4847548678 = apply_prim__u60_u61(lst48677);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4856948676);
arg_buffer[2] = x4847548678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4856948676))[0]);
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
void* _48823 = arg_buffer[1];
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

void* kont4857148679 = prim_car(lst);
void* lst48680 = prim_cdr(lst);
void* x4847648681 = apply_prim__u62_u61(lst48680);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4857148679);
arg_buffer[2] = x4847648681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4857148679))[0]);
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
void* _48824 = arg_buffer[1];
//reading env and args
void* kont48573 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4847748682 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48573);
arg_buffer[2] = x4847748682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48573))[0]);
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
void* _48825 = arg_buffer[1];
//reading env and args
void* kont48574 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4847848683 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48574);
arg_buffer[2] = x4847848683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48574))[0]);
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
void* _48826 = arg_buffer[1];
//reading env and args
void* kont48575 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4847948684 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48575);
arg_buffer[2] = x4847948684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48575))[0]);
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
void* _48827 = arg_buffer[1];
//reading env and args
void* kont48576 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4848048685 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48576);
arg_buffer[2] = x4848048685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48576))[0]);
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
void* _48828 = arg_buffer[1];
//reading env and args
void* kont48577 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4848148686 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48577);
arg_buffer[2] = x4848148686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48577))[0]);
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
void* _48829 = arg_buffer[1];
//reading env and args
void* kont48578 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4848248687 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48578);
arg_buffer[2] = x4848248687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48578))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam48830_fptr() // lam48830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48831 = arg_buffer[1];
//reading env and args
void* a4848548691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4848348688 = (decode_clo(env48831))[3];
//not do dummy comment
void* kont48579 = (decode_clo(env48831))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env48831))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont48579;
arg_buffer[3] = a4848348688;
arg_buffer[4] = a4848548691;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48830 = encode_clo(alloc_clo(lam48830_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48834 = arg_buffer[1];
//reading env and args
void* kont48579 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar48969 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48969, "0", 10);
void* a4848348688 = encode_mpz(mpzvar48969);
mpz_t* mpzvar48970 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48970, "2", 10);
void* a4848448689 = encode_mpz(mpzvar48970);

//creating new closure instance
void** clo48972 = alloc_clo(lam48830_fptr, 3);

//setting env list
clo48972[1] = equal_u63;
clo48972[2] = kont48579;
clo48972[3] = a4848348688;
void* f4858048690 = encode_clo(clo48972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4858048690;
arg_buffer[3] = x;
arg_buffer[4] = a4848448689;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam48835_fptr() // lam48835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48836 = arg_buffer[1];
//reading env and args
void* a4848848695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48581 = (decode_clo(env48836))[3];
//not do dummy comment
void* a4848648692 = (decode_clo(env48836))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env48836))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont48581;
arg_buffer[3] = a4848648692;
arg_buffer[4] = a4848848695;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48835 = encode_clo(alloc_clo(lam48835_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48839 = arg_buffer[1];
//reading env and args
void* kont48581 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar48973 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48973, "1", 10);
void* a4848648692 = encode_mpz(mpzvar48973);
mpz_t* mpzvar48974 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48974, "2", 10);
void* a4848748693 = encode_mpz(mpzvar48974);

//creating new closure instance
void** clo48976 = alloc_clo(lam48835_fptr, 3);

//setting env list
clo48976[1] = equal_u63;
clo48976[2] = a4848648692;
clo48976[3] = kont48581;
void* f4858248694 = encode_clo(clo48976);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4858248694;
arg_buffer[3] = x;
arg_buffer[4] = a4848748693;
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
void* _48840 = arg_buffer[1];
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

void* kont4858348696 = prim_car(x);
void* x48697 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4858348696);
arg_buffer[2] = x48697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4858348696))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam48843_fptr() // lam48843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48844 = arg_buffer[1];
//reading env and args
void* a4849448707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env48844))[3];
//not do dummy comment
void* kont48585 = (decode_clo(env48844))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48844))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont48585;
arg_buffer[3] = x;
arg_buffer[4] = a4849448707;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48843 = encode_clo(alloc_clo(lam48843_fptr, 0));

void* lam48845_fptr() // lam48845 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48846 = arg_buffer[1];
//reading env and args
void* a4849248704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48846))[5];
//not do dummy comment
void* lst = (decode_clo(env48846))[4];
//not do dummy comment
void* x = (decode_clo(env48846))[3];
//not do dummy comment
void* kont48585 = (decode_clo(env48846))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48846))[1];

//if-clause
bool if_guard48977 = is_true(a4849248704);
if(if_guard48977)
{
void* x4849348705 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48585);
arg_buffer[2] = x4849348705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48585))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48979 = alloc_clo(lam48843_fptr, 3);

//setting env list
clo48979[1] = member_u63;
clo48979[2] = kont48585;
clo48979[3] = x;
void* f4858648706 = encode_clo(clo48979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4858648706;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48845 = encode_clo(alloc_clo(lam48845_fptr, 0));

void* lam48847_fptr() // lam48847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48848 = arg_buffer[1];
//reading env and args
void* a4849148702 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48848))[6];
//not do dummy comment
void* lst = (decode_clo(env48848))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env48848))[4];
//not do dummy comment
void* x = (decode_clo(env48848))[3];
//not do dummy comment
void* kont48585 = (decode_clo(env48848))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48848))[1];

//creating new closure instance
void** clo48981 = alloc_clo(lam48845_fptr, 5);

//setting env list
clo48981[1] = member_u63;
clo48981[2] = kont48585;
clo48981[3] = x;
clo48981[4] = lst;
clo48981[5] = cdr;
void* f4858748703 = encode_clo(clo48981);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4858748703;
arg_buffer[3] = a4849148702;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48847 = encode_clo(alloc_clo(lam48847_fptr, 0));

void* lam48849_fptr() // lam48849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48850 = arg_buffer[1];
//reading env and args
void* a4848948699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48850))[7];
//not do dummy comment
void* lst = (decode_clo(env48850))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env48850))[5];
//not do dummy comment
void* x = (decode_clo(env48850))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env48850))[3];
//not do dummy comment
void* car = (decode_clo(env48850))[2];
//not do dummy comment
void* kont48585 = (decode_clo(env48850))[1];

//if-clause
bool if_guard48982 = is_true(a4848948699);
if(if_guard48982)
{
void* x4849048700 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48585);
arg_buffer[2] = x4849048700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48585))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48984 = alloc_clo(lam48847_fptr, 6);

//setting env list
clo48984[1] = member_u63;
clo48984[2] = kont48585;
clo48984[3] = x;
clo48984[4] = equal_u63;
clo48984[5] = lst;
clo48984[6] = cdr;
void* f4858848701 = encode_clo(clo48984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4858848701;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48849 = encode_clo(alloc_clo(lam48849_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48851 = arg_buffer[1];
//reading env and args
void* kont48585 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48986 = alloc_clo(lam48849_fptr, 7);

//setting env list
clo48986[1] = kont48585;
clo48986[2] = car;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo48986[3] = member_u63;
clo48986[4] = x;
clo48986[5] = equal_u63;
clo48986[6] = lst;
clo48986[7] = cdr;
void* f4858948698 = encode_clo(clo48986);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4858948698;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam48852_fptr() // lam48852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48853 = arg_buffer[1];
//reading env and args
void* a4849848715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48590 = (decode_clo(env48853))[4];
//not do dummy comment
void* fun = (decode_clo(env48853))[3];
//not do dummy comment
void* a4849748713 = (decode_clo(env48853))[2];
//not do dummy comment
void* foldl = (decode_clo(env48853))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont48590;
arg_buffer[3] = fun;
arg_buffer[4] = a4849748713;
arg_buffer[5] = a4849848715;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48852 = encode_clo(alloc_clo(lam48852_fptr, 0));

void* lam48854_fptr() // lam48854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48855 = arg_buffer[1];
//reading env and args
void* a4849748713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48855))[5];
//not do dummy comment
void* kont48590 = (decode_clo(env48855))[4];
//not do dummy comment
void* lst = (decode_clo(env48855))[3];
//not do dummy comment
void* fun = (decode_clo(env48855))[2];
//not do dummy comment
void* foldl = (decode_clo(env48855))[1];

//creating new closure instance
void** clo48988 = alloc_clo(lam48852_fptr, 4);

//setting env list
clo48988[1] = foldl;
clo48988[2] = a4849748713;
clo48988[3] = fun;
clo48988[4] = kont48590;
void* f4859148714 = encode_clo(clo48988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4859148714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48854 = encode_clo(alloc_clo(lam48854_fptr, 0));

void* lam48856_fptr() // lam48856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48857 = arg_buffer[1];
//reading env and args
void* a4849648711 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48857))[6];
//not do dummy comment
void* kont48590 = (decode_clo(env48857))[5];
//not do dummy comment
void* lst = (decode_clo(env48857))[4];
//not do dummy comment
void* fun = (decode_clo(env48857))[3];
//not do dummy comment
void* acc = (decode_clo(env48857))[2];
//not do dummy comment
void* foldl = (decode_clo(env48857))[1];

//creating new closure instance
void** clo48990 = alloc_clo(lam48854_fptr, 5);

//setting env list
clo48990[1] = foldl;
clo48990[2] = fun;
clo48990[3] = lst;
clo48990[4] = kont48590;
clo48990[5] = cdr;
void* f4859248712 = encode_clo(clo48990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4859248712;
arg_buffer[3] = a4849648711;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48856 = encode_clo(alloc_clo(lam48856_fptr, 0));

void* lam48858_fptr() // lam48858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48859 = arg_buffer[1];
//reading env and args
void* a4849548709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48859))[7];
//not do dummy comment
void* kont48590 = (decode_clo(env48859))[6];
//not do dummy comment
void* lst = (decode_clo(env48859))[5];
//not do dummy comment
void* fun = (decode_clo(env48859))[4];
//not do dummy comment
void* acc = (decode_clo(env48859))[3];
//not do dummy comment
void* car = (decode_clo(env48859))[2];
//not do dummy comment
void* foldl = (decode_clo(env48859))[1];

//if-clause
bool if_guard48991 = is_true(a4849548709);
if(if_guard48991)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48590);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48590))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48993 = alloc_clo(lam48856_fptr, 6);

//setting env list
clo48993[1] = foldl;
clo48993[2] = acc;
clo48993[3] = fun;
clo48993[4] = lst;
clo48993[5] = kont48590;
clo48993[6] = cdr;
void* f4859348710 = encode_clo(clo48993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4859348710;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48858 = encode_clo(alloc_clo(lam48858_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48860 = arg_buffer[1];
//reading env and args
void* kont48590 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo48995 = alloc_clo(lam48858_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo48995[1] = foldl;
clo48995[2] = car;
clo48995[3] = acc;
clo48995[4] = fun;
clo48995[5] = lst;
clo48995[6] = kont48590;
clo48995[7] = cdr;
void* f4859448708 = encode_clo(clo48995);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4859448708;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam48861_fptr() // lam48861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48862 = arg_buffer[1];
//reading env and args
void* a4850248723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4850048719 = (decode_clo(env48862))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48862))[2];
//not do dummy comment
void* kont48595 = (decode_clo(env48862))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont48595;
arg_buffer[3] = a4850048719;
arg_buffer[4] = a4850248723;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48861 = encode_clo(alloc_clo(lam48861_fptr, 0));

void* lam48863_fptr() // lam48863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48864 = arg_buffer[1];
//reading env and args
void* a4850148721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4850048719 = (decode_clo(env48864))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48864))[4];
//not do dummy comment
void* cons = (decode_clo(env48864))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48864))[2];
//not do dummy comment
void* kont48595 = (decode_clo(env48864))[1];

//creating new closure instance
void** clo48997 = alloc_clo(lam48861_fptr, 3);

//setting env list
clo48997[1] = kont48595;
clo48997[2] = reverse_u45helper;
clo48997[3] = a4850048719;
void* f4859648722 = encode_clo(clo48997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4859648722;
arg_buffer[3] = a4850148721;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48863 = encode_clo(alloc_clo(lam48863_fptr, 0));

void* lam48865_fptr() // lam48865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48866 = arg_buffer[1];
//reading env and args
void* a4850048719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48866))[6];
//not do dummy comment
void* lst2 = (decode_clo(env48866))[5];
//not do dummy comment
void* car = (decode_clo(env48866))[4];
//not do dummy comment
void* cons = (decode_clo(env48866))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48866))[2];
//not do dummy comment
void* kont48595 = (decode_clo(env48866))[1];

//creating new closure instance
void** clo48999 = alloc_clo(lam48863_fptr, 5);

//setting env list
clo48999[1] = kont48595;
clo48999[2] = reverse_u45helper;
clo48999[3] = cons;
clo48999[4] = lst2;
clo48999[5] = a4850048719;
void* f4859748720 = encode_clo(clo48999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4859748720;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48865 = encode_clo(alloc_clo(lam48865_fptr, 0));

void* lam48867_fptr() // lam48867 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48868 = arg_buffer[1];
//reading env and args
void* a4849948717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48868))[7];
//not do dummy comment
void* lst = (decode_clo(env48868))[6];
//not do dummy comment
void* lst2 = (decode_clo(env48868))[5];
//not do dummy comment
void* car = (decode_clo(env48868))[4];
//not do dummy comment
void* cons = (decode_clo(env48868))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48868))[2];
//not do dummy comment
void* kont48595 = (decode_clo(env48868))[1];

//if-clause
bool if_guard49000 = is_true(a4849948717);
if(if_guard49000)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48595);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48595))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49002 = alloc_clo(lam48865_fptr, 6);

//setting env list
clo49002[1] = kont48595;
clo49002[2] = reverse_u45helper;
clo49002[3] = cons;
clo49002[4] = car;
clo49002[5] = lst2;
clo49002[6] = lst;
void* f4859848718 = encode_clo(clo49002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4859848718;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48867 = encode_clo(alloc_clo(lam48867_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48869 = arg_buffer[1];
//reading env and args
void* kont48595 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49004 = alloc_clo(lam48867_fptr, 7);

//setting env list
clo49004[1] = kont48595;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo49004[2] = reverse_u45helper;
clo49004[3] = cons;
clo49004[4] = car;
clo49004[5] = lst2;
clo49004[6] = lst;
clo49004[7] = cdr;
void* f4859948716 = encode_clo(clo49004);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4859948716;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam48870_fptr() // lam48870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48871 = arg_buffer[1];
//reading env and args
void* a4850348725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48871))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48871))[2];
//not do dummy comment
void* kont48600 = (decode_clo(env48871))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont48600;
arg_buffer[3] = lst;
arg_buffer[4] = a4850348725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48870 = encode_clo(alloc_clo(lam48870_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48872 = arg_buffer[1];
//reading env and args
void* kont48600 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49006 = alloc_clo(lam48870_fptr, 3);

//setting env list
clo49006[1] = kont48600;
clo49006[2] = reverse_u45helper;
clo49006[3] = lst;
void* f4860148724 = encode_clo(clo49006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4860148724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam48873_fptr() // lam48873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48874 = arg_buffer[1];
//reading env and args
void* x4850648730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48602 = (decode_clo(env48874))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48602);
arg_buffer[2] = x4850648730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48602))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48873 = encode_clo(alloc_clo(lam48873_fptr, 0));

void* lam48875_fptr() // lam48875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48876 = arg_buffer[1];
//reading env and args
void* a4851148739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4850748732 = (decode_clo(env48876))[4];
//not do dummy comment
void* a4850948735 = (decode_clo(env48876))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48876))[2];
//not do dummy comment
void* kont48602 = (decode_clo(env48876))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont48602;
arg_buffer[3] = a4850748732;
arg_buffer[4] = a4850948735;
arg_buffer[5] = a4851148739;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48875 = encode_clo(alloc_clo(lam48875_fptr, 0));

void* lam48877_fptr() // lam48877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48878 = arg_buffer[1];
//reading env and args
void* a4851048737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4850748732 = (decode_clo(env48878))[6];
//not do dummy comment
void* a4850948735 = (decode_clo(env48878))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48878))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48878))[3];
//not do dummy comment
void* cons = (decode_clo(env48878))[2];
//not do dummy comment
void* kont48602 = (decode_clo(env48878))[1];

//creating new closure instance
void** clo49008 = alloc_clo(lam48875_fptr, 4);

//setting env list
clo49008[1] = kont48602;
clo49008[2] = take_u45helper;
clo49008[3] = a4850948735;
clo49008[4] = a4850748732;
void* f4860448738 = encode_clo(clo49008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4860448738;
arg_buffer[3] = a4851048737;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48877 = encode_clo(alloc_clo(lam48877_fptr, 0));

void* lam48879_fptr() // lam48879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48880 = arg_buffer[1];
//reading env and args
void* a4850948735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4850748732 = (decode_clo(env48880))[7];
//not do dummy comment
void* lst = (decode_clo(env48880))[6];
//not do dummy comment
void* car = (decode_clo(env48880))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48880))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48880))[3];
//not do dummy comment
void* cons = (decode_clo(env48880))[2];
//not do dummy comment
void* kont48602 = (decode_clo(env48880))[1];

//creating new closure instance
void** clo49010 = alloc_clo(lam48877_fptr, 6);

//setting env list
clo49010[1] = kont48602;
clo49010[2] = cons;
clo49010[3] = lst2;
clo49010[4] = take_u45helper;
clo49010[5] = a4850948735;
clo49010[6] = a4850748732;
void* f4860548736 = encode_clo(clo49010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4860548736;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48879 = encode_clo(alloc_clo(lam48879_fptr, 0));

void* lam48882_fptr() // lam48882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48883 = arg_buffer[1];
//reading env and args
void* a4850748732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48883))[8];
//not do dummy comment
void* _u45 = (decode_clo(env48883))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env48883))[6];
//not do dummy comment
void* lst2 = (decode_clo(env48883))[5];
//not do dummy comment
void* n = (decode_clo(env48883))[4];
//not do dummy comment
void* car = (decode_clo(env48883))[3];
//not do dummy comment
void* cons = (decode_clo(env48883))[2];
//not do dummy comment
void* kont48602 = (decode_clo(env48883))[1];
mpz_t* mpzvar49011 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49011, "1", 10);
void* a4850848733 = encode_mpz(mpzvar49011);

//creating new closure instance
void** clo49013 = alloc_clo(lam48879_fptr, 7);

//setting env list
clo49013[1] = kont48602;
clo49013[2] = cons;
clo49013[3] = lst2;
clo49013[4] = take_u45helper;
clo49013[5] = car;
clo49013[6] = lst;
clo49013[7] = a4850748732;
void* f4860648734 = encode_clo(clo49013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4860648734;
arg_buffer[3] = n;
arg_buffer[4] = a4850848733;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48882 = encode_clo(alloc_clo(lam48882_fptr, 0));

void* lam48884_fptr() // lam48884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48885 = arg_buffer[1];
//reading env and args
void* a4850548728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48885))[10];
//not do dummy comment
void* lst = (decode_clo(env48885))[9];
//not do dummy comment
void* reverse = (decode_clo(env48885))[8];
//not do dummy comment
void* _u45 = (decode_clo(env48885))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env48885))[6];
//not do dummy comment
void* lst2 = (decode_clo(env48885))[5];
//not do dummy comment
void* n = (decode_clo(env48885))[4];
//not do dummy comment
void* car = (decode_clo(env48885))[3];
//not do dummy comment
void* cons = (decode_clo(env48885))[2];
//not do dummy comment
void* kont48602 = (decode_clo(env48885))[1];

//if-clause
bool if_guard49014 = is_true(a4850548728);
if(if_guard49014)
{

//creating new closure instance
void** clo49016 = alloc_clo(lam48873_fptr, 1);

//setting env list
clo49016[1] = kont48602;
void* f4860348729 = encode_clo(clo49016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4860348729;
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
void** clo49018 = alloc_clo(lam48882_fptr, 8);

//setting env list
clo49018[1] = kont48602;
clo49018[2] = cons;
clo49018[3] = car;
clo49018[4] = n;
clo49018[5] = lst2;
clo49018[6] = take_u45helper;
clo49018[7] = _u45;
clo49018[8] = lst;
void* f4860748731 = encode_clo(clo49018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4860748731;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48884 = encode_clo(alloc_clo(lam48884_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48887 = arg_buffer[1];
//reading env and args
void* kont48602 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar49019 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49019, "0", 10);
void* a4850448726 = encode_mpz(mpzvar49019);

//creating new closure instance
void** clo49021 = alloc_clo(lam48884_fptr, 10);

//setting env list
clo49021[1] = kont48602;
clo49021[2] = cons;
clo49021[3] = car;
clo49021[4] = n;
clo49021[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo49021[6] = take_u45helper;
clo49021[7] = _u45;
clo49021[8] = reverse;
clo49021[9] = lst;
clo49021[10] = cdr;
void* f4860848727 = encode_clo(clo49021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4860848727;
arg_buffer[3] = n;
arg_buffer[4] = a4850448726;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam48888_fptr() // lam48888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48889 = arg_buffer[1];
//reading env and args
void* a4851248741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48889))[4];
//not do dummy comment
void* kont48609 = (decode_clo(env48889))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48889))[2];
//not do dummy comment
void* n = (decode_clo(env48889))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont48609;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4851248741;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48888 = encode_clo(alloc_clo(lam48888_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48890 = arg_buffer[1];
//reading env and args
void* kont48609 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49023 = alloc_clo(lam48888_fptr, 4);

//setting env list
clo49023[1] = n;
clo49023[2] = take_u45helper;
clo49023[3] = kont48609;
clo49023[4] = lst;
void* f4861048740 = encode_clo(clo49023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4861048740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam48892_fptr() // lam48892 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48893 = arg_buffer[1];
//reading env and args
void* a4851748749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48611 = (decode_clo(env48893))[3];
//not do dummy comment
void* _u43 = (decode_clo(env48893))[2];
//not do dummy comment
void* a4851548745 = (decode_clo(env48893))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont48611;
arg_buffer[3] = a4851548745;
arg_buffer[4] = a4851748749;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48892 = encode_clo(alloc_clo(lam48892_fptr, 0));

void* lam48894_fptr() // lam48894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48895 = arg_buffer[1];
//reading env and args
void* a4851648747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env48895))[4];
//not do dummy comment
void* kont48611 = (decode_clo(env48895))[3];
//not do dummy comment
void* _u43 = (decode_clo(env48895))[2];
//not do dummy comment
void* a4851548745 = (decode_clo(env48895))[1];

//creating new closure instance
void** clo49025 = alloc_clo(lam48892_fptr, 3);

//setting env list
clo49025[1] = a4851548745;
clo49025[2] = _u43;
clo49025[3] = kont48611;
void* f4861248748 = encode_clo(clo49025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4861248748;
arg_buffer[3] = a4851648747;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48894 = encode_clo(alloc_clo(lam48894_fptr, 0));

void* lam48897_fptr() // lam48897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48898 = arg_buffer[1];
//reading env and args
void* a4851348743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48898))[5];
//not do dummy comment
void* lst = (decode_clo(env48898))[4];
//not do dummy comment
void* length = (decode_clo(env48898))[3];
//not do dummy comment
void* kont48611 = (decode_clo(env48898))[2];
//not do dummy comment
void* _u43 = (decode_clo(env48898))[1];

//if-clause
bool if_guard49026 = is_true(a4851348743);
if(if_guard49026)
{
mpz_t* mpzvar49027 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49027, "0", 10);
void* x4851448744 = encode_mpz(mpzvar49027);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48611);
arg_buffer[2] = x4851448744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48611))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar49028 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49028, "1", 10);
void* a4851548745 = encode_mpz(mpzvar49028);

//creating new closure instance
void** clo49030 = alloc_clo(lam48894_fptr, 4);

//setting env list
clo49030[1] = a4851548745;
clo49030[2] = _u43;
clo49030[3] = kont48611;
clo49030[4] = length;
void* f4861348746 = encode_clo(clo49030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4861348746;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48897 = encode_clo(alloc_clo(lam48897_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48899 = arg_buffer[1];
//reading env and args
void* kont48611 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49032 = alloc_clo(lam48897_fptr, 5);

//setting env list
clo49032[1] = _u43;
clo49032[2] = kont48611;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo49032[3] = length;
clo49032[4] = lst;
clo49032[5] = cdr;
void* f4861448742 = encode_clo(clo49032);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4861448742;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam48900_fptr() // lam48900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48901 = arg_buffer[1];
//reading env and args
void* x4851948753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48615 = (decode_clo(env48901))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48615);
arg_buffer[2] = x4851948753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48615))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48900 = encode_clo(alloc_clo(lam48900_fptr, 0));

void* lam48902_fptr() // lam48902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48903 = arg_buffer[1];
//reading env and args
void* a4852348761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4852148757 = (decode_clo(env48903))[3];
//not do dummy comment
void* kont48615 = (decode_clo(env48903))[2];
//not do dummy comment
void* cons = (decode_clo(env48903))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48615;
arg_buffer[3] = a4852148757;
arg_buffer[4] = a4852348761;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48902 = encode_clo(alloc_clo(lam48902_fptr, 0));

void* lam48904_fptr() // lam48904 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48905 = arg_buffer[1];
//reading env and args
void* a4852248759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env48905))[5];
//not do dummy comment
void* a4852148757 = (decode_clo(env48905))[4];
//not do dummy comment
void* cons = (decode_clo(env48905))[3];
//not do dummy comment
void* proc = (decode_clo(env48905))[2];
//not do dummy comment
void* kont48615 = (decode_clo(env48905))[1];

//creating new closure instance
void** clo49034 = alloc_clo(lam48902_fptr, 3);

//setting env list
clo49034[1] = cons;
clo49034[2] = kont48615;
clo49034[3] = a4852148757;
void* f4861748760 = encode_clo(clo49034);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4861748760;
arg_buffer[3] = proc;
arg_buffer[4] = a4852248759;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48904 = encode_clo(alloc_clo(lam48904_fptr, 0));

void* lam48906_fptr() // lam48906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48907 = arg_buffer[1];
//reading env and args
void* a4852148757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48907))[6];
//not do dummy comment
void* lst = (decode_clo(env48907))[5];
//not do dummy comment
void* map = (decode_clo(env48907))[4];
//not do dummy comment
void* cons = (decode_clo(env48907))[3];
//not do dummy comment
void* proc = (decode_clo(env48907))[2];
//not do dummy comment
void* kont48615 = (decode_clo(env48907))[1];

//creating new closure instance
void** clo49036 = alloc_clo(lam48904_fptr, 5);

//setting env list
clo49036[1] = kont48615;
clo49036[2] = proc;
clo49036[3] = cons;
clo49036[4] = a4852148757;
clo49036[5] = map;
void* f4861848758 = encode_clo(clo49036);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4861848758;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48906 = encode_clo(alloc_clo(lam48906_fptr, 0));

void* lam48908_fptr() // lam48908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48909 = arg_buffer[1];
//reading env and args
void* a4852048755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48909))[6];
//not do dummy comment
void* lst = (decode_clo(env48909))[5];
//not do dummy comment
void* map = (decode_clo(env48909))[4];
//not do dummy comment
void* cons = (decode_clo(env48909))[3];
//not do dummy comment
void* proc = (decode_clo(env48909))[2];
//not do dummy comment
void* kont48615 = (decode_clo(env48909))[1];

//creating new closure instance
void** clo49038 = alloc_clo(lam48906_fptr, 6);

//setting env list
clo49038[1] = kont48615;
clo49038[2] = proc;
clo49038[3] = cons;
clo49038[4] = map;
clo49038[5] = lst;
clo49038[6] = cdr;
void* f4861948756 = encode_clo(clo49038);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4861948756;
arg_buffer[3] = a4852048755;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48908 = encode_clo(alloc_clo(lam48908_fptr, 0));

void* lam48910_fptr() // lam48910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48911 = arg_buffer[1];
//reading env and args
void* a4851848751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48911))[8];
//not do dummy comment
void* map = (decode_clo(env48911))[7];
//not do dummy comment
void* car = (decode_clo(env48911))[6];
//not do dummy comment
void* cons = (decode_clo(env48911))[5];
//not do dummy comment
void* list = (decode_clo(env48911))[4];
//not do dummy comment
void* cdr = (decode_clo(env48911))[3];
//not do dummy comment
void* proc = (decode_clo(env48911))[2];
//not do dummy comment
void* kont48615 = (decode_clo(env48911))[1];

//if-clause
bool if_guard49039 = is_true(a4851848751);
if(if_guard49039)
{

//creating new closure instance
void** clo49041 = alloc_clo(lam48900_fptr, 1);

//setting env list
clo49041[1] = kont48615;
void* f4861648752 = encode_clo(clo49041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4861648752;
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
void** clo49043 = alloc_clo(lam48908_fptr, 6);

//setting env list
clo49043[1] = kont48615;
clo49043[2] = proc;
clo49043[3] = cons;
clo49043[4] = map;
clo49043[5] = lst;
clo49043[6] = cdr;
void* f4862048754 = encode_clo(clo49043);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4862048754;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48910 = encode_clo(alloc_clo(lam48910_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48912 = arg_buffer[1];
//reading env and args
void* kont48615 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49045 = alloc_clo(lam48910_fptr, 8);

//setting env list
clo49045[1] = kont48615;
clo49045[2] = proc;
clo49045[3] = cdr;
clo49045[4] = list;
clo49045[5] = cons;
clo49045[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo49045[7] = map;
clo49045[8] = lst;
void* f4862148750 = encode_clo(clo49045);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4862148750;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam48913_fptr() // lam48913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48914 = arg_buffer[1];
//reading env and args
void* x4852548765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48622 = (decode_clo(env48914))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48622);
arg_buffer[2] = x4852548765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48622))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48913 = encode_clo(alloc_clo(lam48913_fptr, 0));

void* lam48915_fptr() // lam48915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48916 = arg_buffer[1];
//reading env and args
void* a4853048775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48622 = (decode_clo(env48916))[3];
//not do dummy comment
void* a4852848771 = (decode_clo(env48916))[2];
//not do dummy comment
void* cons = (decode_clo(env48916))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48622;
arg_buffer[3] = a4852848771;
arg_buffer[4] = a4853048775;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48915 = encode_clo(alloc_clo(lam48915_fptr, 0));

void* lam48917_fptr() // lam48917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48918 = arg_buffer[1];
//reading env and args
void* a4852948773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48622 = (decode_clo(env48918))[5];
//not do dummy comment
void* filter = (decode_clo(env48918))[4];
//not do dummy comment
void* cons = (decode_clo(env48918))[3];
//not do dummy comment
void* a4852848771 = (decode_clo(env48918))[2];
//not do dummy comment
void* op = (decode_clo(env48918))[1];

//creating new closure instance
void** clo49047 = alloc_clo(lam48915_fptr, 3);

//setting env list
clo49047[1] = cons;
clo49047[2] = a4852848771;
clo49047[3] = kont48622;
void* f4862448774 = encode_clo(clo49047);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4862448774;
arg_buffer[3] = op;
arg_buffer[4] = a4852948773;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48917 = encode_clo(alloc_clo(lam48917_fptr, 0));

void* lam48919_fptr() // lam48919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48920 = arg_buffer[1];
//reading env and args
void* a4852848771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48920))[6];
//not do dummy comment
void* kont48622 = (decode_clo(env48920))[5];
//not do dummy comment
void* lst = (decode_clo(env48920))[4];
//not do dummy comment
void* op = (decode_clo(env48920))[3];
//not do dummy comment
void* filter = (decode_clo(env48920))[2];
//not do dummy comment
void* cons = (decode_clo(env48920))[1];

//creating new closure instance
void** clo49049 = alloc_clo(lam48917_fptr, 5);

//setting env list
clo49049[1] = op;
clo49049[2] = a4852848771;
clo49049[3] = cons;
clo49049[4] = filter;
clo49049[5] = kont48622;
void* f4862548772 = encode_clo(clo49049);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4862548772;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48919 = encode_clo(alloc_clo(lam48919_fptr, 0));

void* lam48921_fptr() // lam48921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48922 = arg_buffer[1];
//reading env and args
void* a4853148777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48622 = (decode_clo(env48922))[3];
//not do dummy comment
void* op = (decode_clo(env48922))[2];
//not do dummy comment
void* filter = (decode_clo(env48922))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont48622;
arg_buffer[3] = op;
arg_buffer[4] = a4853148777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48921 = encode_clo(alloc_clo(lam48921_fptr, 0));

void* lam48923_fptr() // lam48923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48924 = arg_buffer[1];
//reading env and args
void* a4852748769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48924))[7];
//not do dummy comment
void* kont48622 = (decode_clo(env48924))[6];
//not do dummy comment
void* lst = (decode_clo(env48924))[5];
//not do dummy comment
void* op = (decode_clo(env48924))[4];
//not do dummy comment
void* cons = (decode_clo(env48924))[3];
//not do dummy comment
void* filter = (decode_clo(env48924))[2];
//not do dummy comment
void* car = (decode_clo(env48924))[1];

//if-clause
bool if_guard49050 = is_true(a4852748769);
if(if_guard49050)
{

//creating new closure instance
void** clo49052 = alloc_clo(lam48919_fptr, 6);

//setting env list
clo49052[1] = cons;
clo49052[2] = filter;
clo49052[3] = op;
clo49052[4] = lst;
clo49052[5] = kont48622;
clo49052[6] = cdr;
void* f4862648770 = encode_clo(clo49052);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4862648770;
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
void** clo49054 = alloc_clo(lam48921_fptr, 3);

//setting env list
clo49054[1] = filter;
clo49054[2] = op;
clo49054[3] = kont48622;
void* f4862748776 = encode_clo(clo49054);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4862748776;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48923 = encode_clo(alloc_clo(lam48923_fptr, 0));

void* lam48925_fptr() // lam48925 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48926 = arg_buffer[1];
//reading env and args
void* a4852648767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48926))[7];
//not do dummy comment
void* kont48622 = (decode_clo(env48926))[6];
//not do dummy comment
void* lst = (decode_clo(env48926))[5];
//not do dummy comment
void* op = (decode_clo(env48926))[4];
//not do dummy comment
void* cons = (decode_clo(env48926))[3];
//not do dummy comment
void* filter = (decode_clo(env48926))[2];
//not do dummy comment
void* car = (decode_clo(env48926))[1];

//creating new closure instance
void** clo49056 = alloc_clo(lam48923_fptr, 7);

//setting env list
clo49056[1] = car;
clo49056[2] = filter;
clo49056[3] = cons;
clo49056[4] = op;
clo49056[5] = lst;
clo49056[6] = kont48622;
clo49056[7] = cdr;
void* f4862848768 = encode_clo(clo49056);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4862848768;
arg_buffer[3] = a4852648767;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48925 = encode_clo(alloc_clo(lam48925_fptr, 0));

void* lam48927_fptr() // lam48927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48928 = arg_buffer[1];
//reading env and args
void* a4852448763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48622 = (decode_clo(env48928))[8];
//not do dummy comment
void* lst = (decode_clo(env48928))[7];
//not do dummy comment
void* op = (decode_clo(env48928))[6];
//not do dummy comment
void* cons = (decode_clo(env48928))[5];
//not do dummy comment
void* list = (decode_clo(env48928))[4];
//not do dummy comment
void* cdr = (decode_clo(env48928))[3];
//not do dummy comment
void* filter = (decode_clo(env48928))[2];
//not do dummy comment
void* car = (decode_clo(env48928))[1];

//if-clause
bool if_guard49057 = is_true(a4852448763);
if(if_guard49057)
{

//creating new closure instance
void** clo49059 = alloc_clo(lam48913_fptr, 1);

//setting env list
clo49059[1] = kont48622;
void* f4862348764 = encode_clo(clo49059);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4862348764;
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
void** clo49061 = alloc_clo(lam48925_fptr, 7);

//setting env list
clo49061[1] = car;
clo49061[2] = filter;
clo49061[3] = cons;
clo49061[4] = op;
clo49061[5] = lst;
clo49061[6] = kont48622;
clo49061[7] = cdr;
void* f4862948766 = encode_clo(clo49061);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4862948766;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48927 = encode_clo(alloc_clo(lam48927_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48929 = arg_buffer[1];
//reading env and args
void* kont48622 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49063 = alloc_clo(lam48927_fptr, 8);

//setting env list
clo49063[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo49063[2] = filter;
clo49063[3] = cdr;
clo49063[4] = list;
clo49063[5] = cons;
clo49063[6] = op;
clo49063[7] = lst;
clo49063[8] = kont48622;
void* f4863048762 = encode_clo(clo49063);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4863048762;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam48930_fptr() // lam48930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48931 = arg_buffer[1];
//reading env and args
void* a4853648785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4853448782 = (decode_clo(env48931))[3];
//not do dummy comment
void* drop = (decode_clo(env48931))[2];
//not do dummy comment
void* kont48631 = (decode_clo(env48931))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont48631;
arg_buffer[3] = a4853448782;
arg_buffer[4] = a4853648785;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48930 = encode_clo(alloc_clo(lam48930_fptr, 0));

void* lam48933_fptr() // lam48933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48934 = arg_buffer[1];
//reading env and args
void* a4853448782 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env48934))[4];
//not do dummy comment
void* kont48631 = (decode_clo(env48934))[3];
//not do dummy comment
void* n = (decode_clo(env48934))[2];
//not do dummy comment
void* _u45 = (decode_clo(env48934))[1];
mpz_t* mpzvar49064 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49064, "1", 10);
void* a4853548783 = encode_mpz(mpzvar49064);

//creating new closure instance
void** clo49066 = alloc_clo(lam48930_fptr, 3);

//setting env list
clo49066[1] = kont48631;
clo49066[2] = drop;
clo49066[3] = a4853448782;
void* f4863248784 = encode_clo(clo49066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4863248784;
arg_buffer[3] = n;
arg_buffer[4] = a4853548783;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48933 = encode_clo(alloc_clo(lam48933_fptr, 0));

void* lam48935_fptr() // lam48935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48936 = arg_buffer[1];
//reading env and args
void* a4853348780 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48936))[6];
//not do dummy comment
void* kont48631 = (decode_clo(env48936))[5];
//not do dummy comment
void* n = (decode_clo(env48936))[4];
//not do dummy comment
void* _u45 = (decode_clo(env48936))[3];
//not do dummy comment
void* lst = (decode_clo(env48936))[2];
//not do dummy comment
void* drop = (decode_clo(env48936))[1];

//if-clause
bool if_guard49067 = is_true(a4853348780);
if(if_guard49067)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48631);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48631))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49069 = alloc_clo(lam48933_fptr, 4);

//setting env list
clo49069[1] = _u45;
clo49069[2] = n;
clo49069[3] = kont48631;
clo49069[4] = drop;
void* f4863348781 = encode_clo(clo49069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4863348781;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48935 = encode_clo(alloc_clo(lam48935_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48938 = arg_buffer[1];
//reading env and args
void* kont48631 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar49070 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49070, "0", 10);
void* a4853248778 = encode_mpz(mpzvar49070);

//creating new closure instance
void** clo49072 = alloc_clo(lam48935_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo49072[1] = drop;
clo49072[2] = lst;
clo49072[3] = _u45;
clo49072[4] = n;
clo49072[5] = kont48631;
clo49072[6] = cdr;
void* f4863448779 = encode_clo(clo49072);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4863448779;
arg_buffer[3] = n;
arg_buffer[4] = a4853248778;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam48939_fptr() // lam48939 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48940 = arg_buffer[1];
//reading env and args
void* a4854048793 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4853848789 = (decode_clo(env48940))[3];
//not do dummy comment
void* proc = (decode_clo(env48940))[2];
//not do dummy comment
void* kont48635 = (decode_clo(env48940))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont48635;
arg_buffer[3] = a4853848789;
arg_buffer[4] = a4854048793;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48939 = encode_clo(alloc_clo(lam48939_fptr, 0));

void* lam48941_fptr() // lam48941 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48942 = arg_buffer[1];
//reading env and args
void* a4853948791 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env48942))[5];
//not do dummy comment
void* a4853848789 = (decode_clo(env48942))[4];
//not do dummy comment
void* kont48635 = (decode_clo(env48942))[3];
//not do dummy comment
void* proc = (decode_clo(env48942))[2];
//not do dummy comment
void* acc = (decode_clo(env48942))[1];

//creating new closure instance
void** clo49074 = alloc_clo(lam48939_fptr, 3);

//setting env list
clo49074[1] = kont48635;
clo49074[2] = proc;
clo49074[3] = a4853848789;
void* f4863648792 = encode_clo(clo49074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4863648792;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4853948791;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48941 = encode_clo(alloc_clo(lam48941_fptr, 0));

void* lam48943_fptr() // lam48943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48944 = arg_buffer[1];
//reading env and args
void* a4853848789 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48944))[6];
//not do dummy comment
void* kont48635 = (decode_clo(env48944))[5];
//not do dummy comment
void* foldr = (decode_clo(env48944))[4];
//not do dummy comment
void* lst = (decode_clo(env48944))[3];
//not do dummy comment
void* proc = (decode_clo(env48944))[2];
//not do dummy comment
void* acc = (decode_clo(env48944))[1];

//creating new closure instance
void** clo49076 = alloc_clo(lam48941_fptr, 5);

//setting env list
clo49076[1] = acc;
clo49076[2] = proc;
clo49076[3] = kont48635;
clo49076[4] = a4853848789;
clo49076[5] = foldr;
void* f4863748790 = encode_clo(clo49076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4863748790;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48943 = encode_clo(alloc_clo(lam48943_fptr, 0));

void* lam48945_fptr() // lam48945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48946 = arg_buffer[1];
//reading env and args
void* a4853748787 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48946))[7];
//not do dummy comment
void* car = (decode_clo(env48946))[6];
//not do dummy comment
void* kont48635 = (decode_clo(env48946))[5];
//not do dummy comment
void* foldr = (decode_clo(env48946))[4];
//not do dummy comment
void* lst = (decode_clo(env48946))[3];
//not do dummy comment
void* proc = (decode_clo(env48946))[2];
//not do dummy comment
void* acc = (decode_clo(env48946))[1];

//if-clause
bool if_guard49077 = is_true(a4853748787);
if(if_guard49077)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48635);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48635))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49079 = alloc_clo(lam48943_fptr, 6);

//setting env list
clo49079[1] = acc;
clo49079[2] = proc;
clo49079[3] = lst;
clo49079[4] = foldr;
clo49079[5] = kont48635;
clo49079[6] = cdr;
void* f4863848788 = encode_clo(clo49079);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4863848788;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48945 = encode_clo(alloc_clo(lam48945_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48947 = arg_buffer[1];
//reading env and args
void* kont48635 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49081 = alloc_clo(lam48945_fptr, 7);

//setting env list
clo49081[1] = acc;
clo49081[2] = proc;
clo49081[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo49081[4] = foldr;
clo49081[5] = kont48635;
clo49081[6] = car;
clo49081[7] = cdr;
void* f4863948786 = encode_clo(clo49081);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4863948786;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam48948_fptr() // lam48948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48949 = arg_buffer[1];
//reading env and args
void* a4854448801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4854248797 = (decode_clo(env48949))[3];
//not do dummy comment
void* kont48640 = (decode_clo(env48949))[2];
//not do dummy comment
void* cons = (decode_clo(env48949))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48640;
arg_buffer[3] = a4854248797;
arg_buffer[4] = a4854448801;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48948 = encode_clo(alloc_clo(lam48948_fptr, 0));

void* lam48950_fptr() // lam48950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48951 = arg_buffer[1];
//reading env and args
void* a4854348799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4854248797 = (decode_clo(env48951))[5];
//not do dummy comment
void* kont48640 = (decode_clo(env48951))[4];
//not do dummy comment
void* append = (decode_clo(env48951))[3];
//not do dummy comment
void* lst2 = (decode_clo(env48951))[2];
//not do dummy comment
void* cons = (decode_clo(env48951))[1];

//creating new closure instance
void** clo49083 = alloc_clo(lam48948_fptr, 3);

//setting env list
clo49083[1] = cons;
clo49083[2] = kont48640;
clo49083[3] = a4854248797;
void* f4864148800 = encode_clo(clo49083);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4864148800;
arg_buffer[3] = a4854348799;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48950 = encode_clo(alloc_clo(lam48950_fptr, 0));

void* lam48952_fptr() // lam48952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48953 = arg_buffer[1];
//reading env and args
void* a4854248797 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48953))[6];
//not do dummy comment
void* kont48640 = (decode_clo(env48953))[5];
//not do dummy comment
void* append = (decode_clo(env48953))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48953))[3];
//not do dummy comment
void* lst1 = (decode_clo(env48953))[2];
//not do dummy comment
void* cons = (decode_clo(env48953))[1];

//creating new closure instance
void** clo49085 = alloc_clo(lam48950_fptr, 5);

//setting env list
clo49085[1] = cons;
clo49085[2] = lst2;
clo49085[3] = append;
clo49085[4] = kont48640;
clo49085[5] = a4854248797;
void* f4864248798 = encode_clo(clo49085);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4864248798;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48952 = encode_clo(alloc_clo(lam48952_fptr, 0));

void* lam48954_fptr() // lam48954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48955 = arg_buffer[1];
//reading env and args
void* a4854148795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48955))[7];
//not do dummy comment
void* kont48640 = (decode_clo(env48955))[6];
//not do dummy comment
void* append = (decode_clo(env48955))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48955))[4];
//not do dummy comment
void* cons = (decode_clo(env48955))[3];
//not do dummy comment
void* lst1 = (decode_clo(env48955))[2];
//not do dummy comment
void* car = (decode_clo(env48955))[1];

//if-clause
bool if_guard49086 = is_true(a4854148795);
if(if_guard49086)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48640);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48640))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49088 = alloc_clo(lam48952_fptr, 6);

//setting env list
clo49088[1] = cons;
clo49088[2] = lst1;
clo49088[3] = lst2;
clo49088[4] = append;
clo49088[5] = kont48640;
clo49088[6] = cdr;
void* f4864348796 = encode_clo(clo49088);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4864348796;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48954 = encode_clo(alloc_clo(lam48954_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48956 = arg_buffer[1];
//reading env and args
void* kont48640 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49090 = alloc_clo(lam48954_fptr, 7);

//setting env list
clo49090[1] = car;
clo49090[2] = lst1;
clo49090[3] = cons;
clo49090[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo49090[5] = append;
clo49090[6] = kont48640;
clo49090[7] = cdr;
void* f4864448794 = encode_clo(clo49090);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4864448794;
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
void* _48957 = arg_buffer[1];
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

void* kont4864548802 = prim_car(lst);
void* lst48803 = prim_cdr(lst);
void* x4854548804 = apply_prim_hash(lst48803);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4864548802);
arg_buffer[2] = x4854548804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4864548802))[0]);
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
void* _48958 = arg_buffer[1];
//reading env and args
void* kont48647 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4854648805 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48647);
arg_buffer[2] = x4854648805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48647))[0]);
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
void* _48959 = arg_buffer[1];
//reading env and args
void* kont48648 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4854748806 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48648);
arg_buffer[2] = x4854748806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48648))[0]);
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
void* _48960 = arg_buffer[1];
//reading env and args
void* kont48649 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4854848807 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48649);
arg_buffer[2] = x4854848807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48649))[0]);
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
void* _48961 = arg_buffer[1];
//reading env and args
void* kont48650 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4854948808 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48650);
arg_buffer[2] = x4854948808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48650))[0]);
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
void* _48965 = arg_buffer[1];
//reading env and args
void* kont48651 = arg_buffer[2];
//Dummy comment
void* a4855048809 = encode_bool(false);

//if-clause
bool if_guard49091 = is_true(a4855048809);
if(if_guard49091)
{
void* x4855148810 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48651);
arg_buffer[2] = x4855148810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48651))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x4855248811 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48651);
arg_buffer[2] = x4855248811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48651))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam48966_fptr() // lam48966 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48967 = arg_buffer[1];
//reading env and args
void* x4855348813 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48652 = (decode_clo(env48967))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48652);
arg_buffer[2] = x4855348813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48652))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48966 = encode_clo(alloc_clo(lam48966_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48968 = arg_buffer[1];
//reading env and args
void* kont48652 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo49093 = alloc_clo(lam48966_fptr, 1);

//setting env list
clo49093[1] = kont48652;
void* f4865348812 = encode_clo(clo49093);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4865348812;
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

