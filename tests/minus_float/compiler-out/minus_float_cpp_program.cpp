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
void* _24960 = arg_buffer[1];
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

void* kont2466324780 = prim_car(lst);
void* lst24781 = prim_cdr(lst);
void* x2456024782 = apply_prim__u43(lst24781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2466324780);
arg_buffer[2] = x2456024782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2466324780))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _24961 = arg_buffer[1];
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

void* kont2466524783 = prim_car(lst);
void* lst24784 = prim_cdr(lst);
void* x2456124785 = apply_prim_max(lst24784);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2466524783);
arg_buffer[2] = x2456124785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2466524783))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _24962 = arg_buffer[1];
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

void* kont2466724786 = prim_car(lst);
void* lst24787 = prim_cdr(lst);
void* x2456224788 = apply_prim__u45(lst24787);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2466724786);
arg_buffer[2] = x2456224788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2466724786))[0]);
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
void* _24963 = arg_buffer[1];
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

void* kont2466924789 = prim_car(lst);
void* lst24790 = prim_cdr(lst);
void* x2456324791 = apply_prim__u42(lst24790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2466924789);
arg_buffer[2] = x2456324791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2466924789))[0]);
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
void* _24964 = arg_buffer[1];
//reading env and args
void* kont24671 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2456424792 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24671);
arg_buffer[2] = x2456424792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24671))[0]);
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
void* _24965 = arg_buffer[1];
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

void* kont2467224793 = prim_car(lst);
void* lst24794 = prim_cdr(lst);
void* x2456524795 = apply_prim__u47(lst24794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2467224793);
arg_buffer[2] = x2456524795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2467224793))[0]);
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
void* _24966 = arg_buffer[1];
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

void* kont2467424796 = prim_car(lst);
void* lst24797 = prim_cdr(lst);
void* x2456624798 = apply_prim__u61(lst24797);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2467424796);
arg_buffer[2] = x2456624798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2467424796))[0]);
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
void* _24967 = arg_buffer[1];
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

void* kont2467624799 = prim_car(lst);
void* lst24800 = prim_cdr(lst);
void* x2456724801 = apply_prim__u62(lst24800);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2467624799);
arg_buffer[2] = x2456724801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2467624799))[0]);
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
void* _24968 = arg_buffer[1];
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

void* kont2467824802 = prim_car(lst);
void* lst24803 = prim_cdr(lst);
void* x2456824804 = apply_prim__u60(lst24803);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2467824802);
arg_buffer[2] = x2456824804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2467824802))[0]);
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
void* _24969 = arg_buffer[1];
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

void* kont2468024805 = prim_car(lst);
void* lst24806 = prim_cdr(lst);
void* x2456924807 = apply_prim__u60_u61(lst24806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2468024805);
arg_buffer[2] = x2456924807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2468024805))[0]);
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
void* _24970 = arg_buffer[1];
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

void* kont2468224808 = prim_car(lst);
void* lst24809 = prim_cdr(lst);
void* x2457024810 = apply_prim__u62_u61(lst24809);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2468224808);
arg_buffer[2] = x2457024810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2468224808))[0]);
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
void* _24971 = arg_buffer[1];
//reading env and args
void* kont24684 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2457124811 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24684);
arg_buffer[2] = x2457124811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24684))[0]);
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
void* _24972 = arg_buffer[1];
//reading env and args
void* kont24685 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2457224812 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24685);
arg_buffer[2] = x2457224812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24685))[0]);
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
void* _24973 = arg_buffer[1];
//reading env and args
void* kont24686 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2457324813 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24686);
arg_buffer[2] = x2457324813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24686))[0]);
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
void* _24974 = arg_buffer[1];
//reading env and args
void* kont24687 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2457424814 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24687);
arg_buffer[2] = x2457424814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24687))[0]);
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
void* _24975 = arg_buffer[1];
//reading env and args
void* kont24688 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2457524815 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24688);
arg_buffer[2] = x2457524815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24688))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _24976 = arg_buffer[1];
//reading env and args
void* kont24689 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2457624816 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24689);
arg_buffer[2] = x2457624816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24689))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs = encode_clo(alloc_clo(abs_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _24977 = arg_buffer[1];
//reading env and args
void* kont24690 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2457724817 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24690);
arg_buffer[2] = x2457724817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24690))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam24978_fptr() // lam24978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env24979 = arg_buffer[1];
//reading env and args
void* a2458024821 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24691 = (decode_clo(env24979))[3];
//not do dummy comment
void* a2457824818 = (decode_clo(env24979))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env24979))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont24691;
arg_buffer[3] = a2457824818;
arg_buffer[4] = a2458024821;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam24978 = encode_clo(alloc_clo(lam24978_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _24982 = arg_buffer[1];
//reading env and args
void* kont24691 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar25131 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25131, "0", 10);
void* a2457824818 = encode_mpz(mpzvar25131);
mpz_t* mpzvar25132 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25132, "2", 10);
void* a2457924819 = encode_mpz(mpzvar25132);

//creating new closure instance
void** clo25134 = alloc_clo(lam24978_fptr, 3);

//setting env list
clo25134[1] = equal_u63;
clo25134[2] = a2457824818;
clo25134[3] = kont24691;
void* f2469224820 = encode_clo(clo25134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2469224820;
arg_buffer[3] = x;
arg_buffer[4] = a2457924819;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam24983_fptr() // lam24983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env24984 = arg_buffer[1];
//reading env and args
void* a2458324825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env24984))[3];
//not do dummy comment
void* kont24693 = (decode_clo(env24984))[2];
//not do dummy comment
void* a2458124822 = (decode_clo(env24984))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont24693;
arg_buffer[3] = a2458124822;
arg_buffer[4] = a2458324825;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam24983 = encode_clo(alloc_clo(lam24983_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _24987 = arg_buffer[1];
//reading env and args
void* kont24693 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar25135 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25135, "1", 10);
void* a2458124822 = encode_mpz(mpzvar25135);
mpz_t* mpzvar25136 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25136, "2", 10);
void* a2458224823 = encode_mpz(mpzvar25136);

//creating new closure instance
void** clo25138 = alloc_clo(lam24983_fptr, 3);

//setting env list
clo25138[1] = a2458124822;
clo25138[2] = kont24693;
clo25138[3] = equal_u63;
void* f2469424824 = encode_clo(clo25138);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2469424824;
arg_buffer[3] = x;
arg_buffer[4] = a2458224823;
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
void* _24988 = arg_buffer[1];
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

void* kont2469524826 = prim_car(x);
void* x24827 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2469524826);
arg_buffer[2] = x24827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2469524826))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _24989 = arg_buffer[1];
//reading env and args
void* kont24697 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2458424828 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24697);
arg_buffer[2] = x2458424828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24697))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _24990 = arg_buffer[1];
//reading env and args
void* kont24698 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2458524829 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24698);
arg_buffer[2] = x2458524829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24698))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam24993_fptr() // lam24993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env24994 = arg_buffer[1];
//reading env and args
void* a2459124839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24699 = (decode_clo(env24994))[3];
//not do dummy comment
void* x = (decode_clo(env24994))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env24994))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont24699;
arg_buffer[3] = x;
arg_buffer[4] = a2459124839;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam24993 = encode_clo(alloc_clo(lam24993_fptr, 0));

void* lam24995_fptr() // lam24995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env24996 = arg_buffer[1];
//reading env and args
void* a2458924836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env24996))[5];
//not do dummy comment
void* kont24699 = (decode_clo(env24996))[4];
//not do dummy comment
void* lst = (decode_clo(env24996))[3];
//not do dummy comment
void* x = (decode_clo(env24996))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env24996))[1];

//if-clause
bool if_guard25139 = is_true(a2458924836);
if(if_guard25139)
{
void* x2459024837 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24699);
arg_buffer[2] = x2459024837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24699))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo25141 = alloc_clo(lam24993_fptr, 3);

//setting env list
clo25141[1] = member_u63;
clo25141[2] = x;
clo25141[3] = kont24699;
void* f2470024838 = encode_clo(clo25141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2470024838;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam24995 = encode_clo(alloc_clo(lam24995_fptr, 0));

void* lam24997_fptr() // lam24997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env24998 = arg_buffer[1];
//reading env and args
void* a2458824834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env24998))[6];
//not do dummy comment
void* kont24699 = (decode_clo(env24998))[5];
//not do dummy comment
void* lst = (decode_clo(env24998))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env24998))[3];
//not do dummy comment
void* x = (decode_clo(env24998))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env24998))[1];

//creating new closure instance
void** clo25143 = alloc_clo(lam24995_fptr, 5);

//setting env list
clo25143[1] = member_u63;
clo25143[2] = x;
clo25143[3] = lst;
clo25143[4] = kont24699;
clo25143[5] = cdr;
void* f2470124835 = encode_clo(clo25143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2470124835;
arg_buffer[3] = a2458824834;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam24997 = encode_clo(alloc_clo(lam24997_fptr, 0));

void* lam24999_fptr() // lam24999 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25000 = arg_buffer[1];
//reading env and args
void* a2458624831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25000))[7];
//not do dummy comment
void* kont24699 = (decode_clo(env25000))[6];
//not do dummy comment
void* lst = (decode_clo(env25000))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env25000))[4];
//not do dummy comment
void* x = (decode_clo(env25000))[3];
//not do dummy comment
void* car = (decode_clo(env25000))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env25000))[1];

//if-clause
bool if_guard25144 = is_true(a2458624831);
if(if_guard25144)
{
void* x2458724832 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24699);
arg_buffer[2] = x2458724832;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24699))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo25146 = alloc_clo(lam24997_fptr, 6);

//setting env list
clo25146[1] = member_u63;
clo25146[2] = x;
clo25146[3] = equal_u63;
clo25146[4] = lst;
clo25146[5] = kont24699;
clo25146[6] = cdr;
void* f2470224833 = encode_clo(clo25146);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2470224833;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam24999 = encode_clo(alloc_clo(lam24999_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25001 = arg_buffer[1];
//reading env and args
void* kont24699 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo25148 = alloc_clo(lam24999_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo25148[1] = member_u63;
clo25148[2] = car;
clo25148[3] = x;
clo25148[4] = equal_u63;
clo25148[5] = lst;
clo25148[6] = kont24699;
clo25148[7] = cdr;
void* f2470324830 = encode_clo(clo25148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2470324830;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam25002_fptr() // lam25002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25003 = arg_buffer[1];
//reading env and args
void* a2459524847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2459424845 = (decode_clo(env25003))[4];
//not do dummy comment
void* kont24704 = (decode_clo(env25003))[3];
//not do dummy comment
void* fun = (decode_clo(env25003))[2];
//not do dummy comment
void* foldl = (decode_clo(env25003))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont24704;
arg_buffer[3] = fun;
arg_buffer[4] = a2459424845;
arg_buffer[5] = a2459524847;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25002 = encode_clo(alloc_clo(lam25002_fptr, 0));

void* lam25004_fptr() // lam25004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25005 = arg_buffer[1];
//reading env and args
void* a2459424845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25005))[5];
//not do dummy comment
void* lst = (decode_clo(env25005))[4];
//not do dummy comment
void* kont24704 = (decode_clo(env25005))[3];
//not do dummy comment
void* fun = (decode_clo(env25005))[2];
//not do dummy comment
void* foldl = (decode_clo(env25005))[1];

//creating new closure instance
void** clo25150 = alloc_clo(lam25002_fptr, 4);

//setting env list
clo25150[1] = foldl;
clo25150[2] = fun;
clo25150[3] = kont24704;
clo25150[4] = a2459424845;
void* f2470524846 = encode_clo(clo25150);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2470524846;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25004 = encode_clo(alloc_clo(lam25004_fptr, 0));

void* lam25006_fptr() // lam25006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25007 = arg_buffer[1];
//reading env and args
void* a2459324843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25007))[6];
//not do dummy comment
void* lst = (decode_clo(env25007))[5];
//not do dummy comment
void* kont24704 = (decode_clo(env25007))[4];
//not do dummy comment
void* fun = (decode_clo(env25007))[3];
//not do dummy comment
void* acc = (decode_clo(env25007))[2];
//not do dummy comment
void* foldl = (decode_clo(env25007))[1];

//creating new closure instance
void** clo25152 = alloc_clo(lam25004_fptr, 5);

//setting env list
clo25152[1] = foldl;
clo25152[2] = fun;
clo25152[3] = kont24704;
clo25152[4] = lst;
clo25152[5] = cdr;
void* f2470624844 = encode_clo(clo25152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2470624844;
arg_buffer[3] = a2459324843;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25006 = encode_clo(alloc_clo(lam25006_fptr, 0));

void* lam25008_fptr() // lam25008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25009 = arg_buffer[1];
//reading env and args
void* a2459224841 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25009))[7];
//not do dummy comment
void* lst = (decode_clo(env25009))[6];
//not do dummy comment
void* kont24704 = (decode_clo(env25009))[5];
//not do dummy comment
void* fun = (decode_clo(env25009))[4];
//not do dummy comment
void* acc = (decode_clo(env25009))[3];
//not do dummy comment
void* car = (decode_clo(env25009))[2];
//not do dummy comment
void* foldl = (decode_clo(env25009))[1];

//if-clause
bool if_guard25153 = is_true(a2459224841);
if(if_guard25153)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24704);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24704))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo25155 = alloc_clo(lam25006_fptr, 6);

//setting env list
clo25155[1] = foldl;
clo25155[2] = acc;
clo25155[3] = fun;
clo25155[4] = kont24704;
clo25155[5] = lst;
clo25155[6] = cdr;
void* f2470724842 = encode_clo(clo25155);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2470724842;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25008 = encode_clo(alloc_clo(lam25008_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25010 = arg_buffer[1];
//reading env and args
void* kont24704 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo25157 = alloc_clo(lam25008_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo25157[1] = foldl;
clo25157[2] = car;
clo25157[3] = acc;
clo25157[4] = fun;
clo25157[5] = kont24704;
clo25157[6] = lst;
clo25157[7] = cdr;
void* f2470824840 = encode_clo(clo25157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2470824840;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam25011_fptr() // lam25011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25012 = arg_buffer[1];
//reading env and args
void* a2459924855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env25012))[3];
//not do dummy comment
void* a2459724851 = (decode_clo(env25012))[2];
//not do dummy comment
void* kont24709 = (decode_clo(env25012))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont24709;
arg_buffer[3] = a2459724851;
arg_buffer[4] = a2459924855;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25011 = encode_clo(alloc_clo(lam25011_fptr, 0));

void* lam25013_fptr() // lam25013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25014 = arg_buffer[1];
//reading env and args
void* a2459824853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env25014))[5];
//not do dummy comment
void* a2459724851 = (decode_clo(env25014))[4];
//not do dummy comment
void* kont24709 = (decode_clo(env25014))[3];
//not do dummy comment
void* lst2 = (decode_clo(env25014))[2];
//not do dummy comment
void* cons = (decode_clo(env25014))[1];

//creating new closure instance
void** clo25159 = alloc_clo(lam25011_fptr, 3);

//setting env list
clo25159[1] = kont24709;
clo25159[2] = a2459724851;
clo25159[3] = reverse_u45helper;
void* f2471024854 = encode_clo(clo25159);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2471024854;
arg_buffer[3] = a2459824853;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25013 = encode_clo(alloc_clo(lam25013_fptr, 0));

void* lam25015_fptr() // lam25015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25016 = arg_buffer[1];
//reading env and args
void* a2459724851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env25016))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env25016))[5];
//not do dummy comment
void* kont24709 = (decode_clo(env25016))[4];
//not do dummy comment
void* lst2 = (decode_clo(env25016))[3];
//not do dummy comment
void* car = (decode_clo(env25016))[2];
//not do dummy comment
void* cons = (decode_clo(env25016))[1];

//creating new closure instance
void** clo25161 = alloc_clo(lam25013_fptr, 5);

//setting env list
clo25161[1] = cons;
clo25161[2] = lst2;
clo25161[3] = kont24709;
clo25161[4] = a2459724851;
clo25161[5] = reverse_u45helper;
void* f2471124852 = encode_clo(clo25161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2471124852;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25015 = encode_clo(alloc_clo(lam25015_fptr, 0));

void* lam25017_fptr() // lam25017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25018 = arg_buffer[1];
//reading env and args
void* a2459624849 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25018))[7];
//not do dummy comment
void* lst = (decode_clo(env25018))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env25018))[5];
//not do dummy comment
void* kont24709 = (decode_clo(env25018))[4];
//not do dummy comment
void* lst2 = (decode_clo(env25018))[3];
//not do dummy comment
void* car = (decode_clo(env25018))[2];
//not do dummy comment
void* cons = (decode_clo(env25018))[1];

//if-clause
bool if_guard25162 = is_true(a2459624849);
if(if_guard25162)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24709);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24709))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo25164 = alloc_clo(lam25015_fptr, 6);

//setting env list
clo25164[1] = cons;
clo25164[2] = car;
clo25164[3] = lst2;
clo25164[4] = kont24709;
clo25164[5] = reverse_u45helper;
clo25164[6] = lst;
void* f2471224850 = encode_clo(clo25164);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2471224850;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25017 = encode_clo(alloc_clo(lam25017_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25019 = arg_buffer[1];
//reading env and args
void* kont24709 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo25166 = alloc_clo(lam25017_fptr, 7);

//setting env list
clo25166[1] = cons;
clo25166[2] = car;
clo25166[3] = lst2;
clo25166[4] = kont24709;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo25166[5] = reverse_u45helper;
clo25166[6] = lst;
clo25166[7] = cdr;
void* f2471324848 = encode_clo(clo25166);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2471324848;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam25020_fptr() // lam25020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25021 = arg_buffer[1];
//reading env and args
void* a2460024857 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24714 = (decode_clo(env25021))[3];
//not do dummy comment
void* lst = (decode_clo(env25021))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env25021))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont24714;
arg_buffer[3] = lst;
arg_buffer[4] = a2460024857;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25020 = encode_clo(alloc_clo(lam25020_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25022 = arg_buffer[1];
//reading env and args
void* kont24714 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo25168 = alloc_clo(lam25020_fptr, 3);

//setting env list
clo25168[1] = reverse_u45helper;
clo25168[2] = lst;
clo25168[3] = kont24714;
void* f2471524856 = encode_clo(clo25168);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2471524856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam25023_fptr() // lam25023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25024 = arg_buffer[1];
//reading env and args
void* x2460324862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24716 = (decode_clo(env25024))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24716);
arg_buffer[2] = x2460324862;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24716))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25023 = encode_clo(alloc_clo(lam25023_fptr, 0));

void* lam25025_fptr() // lam25025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25026 = arg_buffer[1];
//reading env and args
void* a2460824871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24716 = (decode_clo(env25026))[4];
//not do dummy comment
void* a2460424864 = (decode_clo(env25026))[3];
//not do dummy comment
void* a2460624867 = (decode_clo(env25026))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env25026))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont24716;
arg_buffer[3] = a2460424864;
arg_buffer[4] = a2460624867;
arg_buffer[5] = a2460824871;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25025 = encode_clo(alloc_clo(lam25025_fptr, 0));

void* lam25027_fptr() // lam25027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25028 = arg_buffer[1];
//reading env and args
void* a2460724869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24716 = (decode_clo(env25028))[6];
//not do dummy comment
void* a2460424864 = (decode_clo(env25028))[5];
//not do dummy comment
void* a2460624867 = (decode_clo(env25028))[4];
//not do dummy comment
void* cons = (decode_clo(env25028))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env25028))[2];
//not do dummy comment
void* lst2 = (decode_clo(env25028))[1];

//creating new closure instance
void** clo25170 = alloc_clo(lam25025_fptr, 4);

//setting env list
clo25170[1] = take_u45helper;
clo25170[2] = a2460624867;
clo25170[3] = a2460424864;
clo25170[4] = kont24716;
void* f2471824870 = encode_clo(clo25170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2471824870;
arg_buffer[3] = a2460724869;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25027 = encode_clo(alloc_clo(lam25027_fptr, 0));

void* lam25029_fptr() // lam25029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25030 = arg_buffer[1];
//reading env and args
void* a2460624867 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24716 = (decode_clo(env25030))[7];
//not do dummy comment
void* lst = (decode_clo(env25030))[6];
//not do dummy comment
void* a2460424864 = (decode_clo(env25030))[5];
//not do dummy comment
void* car = (decode_clo(env25030))[4];
//not do dummy comment
void* cons = (decode_clo(env25030))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env25030))[2];
//not do dummy comment
void* lst2 = (decode_clo(env25030))[1];

//creating new closure instance
void** clo25172 = alloc_clo(lam25027_fptr, 6);

//setting env list
clo25172[1] = lst2;
clo25172[2] = take_u45helper;
clo25172[3] = cons;
clo25172[4] = a2460624867;
clo25172[5] = a2460424864;
clo25172[6] = kont24716;
void* f2471924868 = encode_clo(clo25172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2471924868;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25029 = encode_clo(alloc_clo(lam25029_fptr, 0));

void* lam25032_fptr() // lam25032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25033 = arg_buffer[1];
//reading env and args
void* a2460424864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24716 = (decode_clo(env25033))[8];
//not do dummy comment
void* lst = (decode_clo(env25033))[7];
//not do dummy comment
void* cons = (decode_clo(env25033))[6];
//not do dummy comment
void* _u45 = (decode_clo(env25033))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env25033))[4];
//not do dummy comment
void* lst2 = (decode_clo(env25033))[3];
//not do dummy comment
void* n = (decode_clo(env25033))[2];
//not do dummy comment
void* car = (decode_clo(env25033))[1];
mpz_t* mpzvar25173 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25173, "1", 10);
void* a2460524865 = encode_mpz(mpzvar25173);

//creating new closure instance
void** clo25175 = alloc_clo(lam25029_fptr, 7);

//setting env list
clo25175[1] = lst2;
clo25175[2] = take_u45helper;
clo25175[3] = cons;
clo25175[4] = car;
clo25175[5] = a2460424864;
clo25175[6] = lst;
clo25175[7] = kont24716;
void* f2472024866 = encode_clo(clo25175);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2472024866;
arg_buffer[3] = n;
arg_buffer[4] = a2460524865;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25032 = encode_clo(alloc_clo(lam25032_fptr, 0));

void* lam25034_fptr() // lam25034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25035 = arg_buffer[1];
//reading env and args
void* a2460224860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25035))[10];
//not do dummy comment
void* kont24716 = (decode_clo(env25035))[9];
//not do dummy comment
void* lst = (decode_clo(env25035))[8];
//not do dummy comment
void* reverse = (decode_clo(env25035))[7];
//not do dummy comment
void* cons = (decode_clo(env25035))[6];
//not do dummy comment
void* _u45 = (decode_clo(env25035))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env25035))[4];
//not do dummy comment
void* lst2 = (decode_clo(env25035))[3];
//not do dummy comment
void* n = (decode_clo(env25035))[2];
//not do dummy comment
void* car = (decode_clo(env25035))[1];

//if-clause
bool if_guard25176 = is_true(a2460224860);
if(if_guard25176)
{

//creating new closure instance
void** clo25178 = alloc_clo(lam25023_fptr, 1);

//setting env list
clo25178[1] = kont24716;
void* f2471724861 = encode_clo(clo25178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2471724861;
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
void** clo25180 = alloc_clo(lam25032_fptr, 8);

//setting env list
clo25180[1] = car;
clo25180[2] = n;
clo25180[3] = lst2;
clo25180[4] = take_u45helper;
clo25180[5] = _u45;
clo25180[6] = cons;
clo25180[7] = lst;
clo25180[8] = kont24716;
void* f2472124863 = encode_clo(clo25180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2472124863;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25034 = encode_clo(alloc_clo(lam25034_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25037 = arg_buffer[1];
//reading env and args
void* kont24716 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar25181 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25181, "0", 10);
void* a2460124858 = encode_mpz(mpzvar25181);

//creating new closure instance
void** clo25183 = alloc_clo(lam25034_fptr, 10);

//setting env list
clo25183[1] = car;
clo25183[2] = n;
clo25183[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo25183[4] = take_u45helper;
clo25183[5] = _u45;
clo25183[6] = cons;
clo25183[7] = reverse;
clo25183[8] = lst;
clo25183[9] = kont24716;
clo25183[10] = cdr;
void* f2472224859 = encode_clo(clo25183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2472224859;
arg_buffer[3] = n;
arg_buffer[4] = a2460124858;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam25038_fptr() // lam25038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25039 = arg_buffer[1];
//reading env and args
void* a2460924873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env25039))[4];
//not do dummy comment
void* kont24723 = (decode_clo(env25039))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env25039))[2];
//not do dummy comment
void* n = (decode_clo(env25039))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont24723;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2460924873;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25038 = encode_clo(alloc_clo(lam25038_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25040 = arg_buffer[1];
//reading env and args
void* kont24723 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo25185 = alloc_clo(lam25038_fptr, 4);

//setting env list
clo25185[1] = n;
clo25185[2] = take_u45helper;
clo25185[3] = kont24723;
clo25185[4] = lst;
void* f2472424872 = encode_clo(clo25185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2472424872;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam25042_fptr() // lam25042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25043 = arg_buffer[1];
//reading env and args
void* a2461424881 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2461224877 = (decode_clo(env25043))[3];
//not do dummy comment
void* _u43 = (decode_clo(env25043))[2];
//not do dummy comment
void* kont24725 = (decode_clo(env25043))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont24725;
arg_buffer[3] = a2461224877;
arg_buffer[4] = a2461424881;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25042 = encode_clo(alloc_clo(lam25042_fptr, 0));

void* lam25044_fptr() // lam25044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25045 = arg_buffer[1];
//reading env and args
void* a2461324879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2461224877 = (decode_clo(env25045))[4];
//not do dummy comment
void* length = (decode_clo(env25045))[3];
//not do dummy comment
void* _u43 = (decode_clo(env25045))[2];
//not do dummy comment
void* kont24725 = (decode_clo(env25045))[1];

//creating new closure instance
void** clo25187 = alloc_clo(lam25042_fptr, 3);

//setting env list
clo25187[1] = kont24725;
clo25187[2] = _u43;
clo25187[3] = a2461224877;
void* f2472624880 = encode_clo(clo25187);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2472624880;
arg_buffer[3] = a2461324879;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25044 = encode_clo(alloc_clo(lam25044_fptr, 0));

void* lam25047_fptr() // lam25047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25048 = arg_buffer[1];
//reading env and args
void* a2461024875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25048))[5];
//not do dummy comment
void* lst = (decode_clo(env25048))[4];
//not do dummy comment
void* length = (decode_clo(env25048))[3];
//not do dummy comment
void* _u43 = (decode_clo(env25048))[2];
//not do dummy comment
void* kont24725 = (decode_clo(env25048))[1];

//if-clause
bool if_guard25188 = is_true(a2461024875);
if(if_guard25188)
{
mpz_t* mpzvar25189 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25189, "0", 10);
void* x2461124876 = encode_mpz(mpzvar25189);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24725);
arg_buffer[2] = x2461124876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24725))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar25190 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25190, "1", 10);
void* a2461224877 = encode_mpz(mpzvar25190);

//creating new closure instance
void** clo25192 = alloc_clo(lam25044_fptr, 4);

//setting env list
clo25192[1] = kont24725;
clo25192[2] = _u43;
clo25192[3] = length;
clo25192[4] = a2461224877;
void* f2472724878 = encode_clo(clo25192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2472724878;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25047 = encode_clo(alloc_clo(lam25047_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25049 = arg_buffer[1];
//reading env and args
void* kont24725 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo25194 = alloc_clo(lam25047_fptr, 5);

//setting env list
clo25194[1] = kont24725;
clo25194[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo25194[3] = length;
clo25194[4] = lst;
clo25194[5] = cdr;
void* f2472824874 = encode_clo(clo25194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2472824874;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam25050_fptr() // lam25050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25051 = arg_buffer[1];
//reading env and args
void* x2461624885 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24729 = (decode_clo(env25051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24729);
arg_buffer[2] = x2461624885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24729))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25050 = encode_clo(alloc_clo(lam25050_fptr, 0));

void* lam25052_fptr() // lam25052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25053 = arg_buffer[1];
//reading env and args
void* a2462024893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env25053))[3];
//not do dummy comment
void* a2461824889 = (decode_clo(env25053))[2];
//not do dummy comment
void* kont24729 = (decode_clo(env25053))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont24729;
arg_buffer[3] = a2461824889;
arg_buffer[4] = a2462024893;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25052 = encode_clo(alloc_clo(lam25052_fptr, 0));

void* lam25054_fptr() // lam25054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25055 = arg_buffer[1];
//reading env and args
void* a2461924891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env25055))[5];
//not do dummy comment
void* proc = (decode_clo(env25055))[4];
//not do dummy comment
void* cons = (decode_clo(env25055))[3];
//not do dummy comment
void* a2461824889 = (decode_clo(env25055))[2];
//not do dummy comment
void* kont24729 = (decode_clo(env25055))[1];

//creating new closure instance
void** clo25196 = alloc_clo(lam25052_fptr, 3);

//setting env list
clo25196[1] = kont24729;
clo25196[2] = a2461824889;
clo25196[3] = cons;
void* f2473124892 = encode_clo(clo25196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2473124892;
arg_buffer[3] = proc;
arg_buffer[4] = a2461924891;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25054 = encode_clo(alloc_clo(lam25054_fptr, 0));

void* lam25056_fptr() // lam25056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25057 = arg_buffer[1];
//reading env and args
void* a2461824889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25057))[6];
//not do dummy comment
void* lst = (decode_clo(env25057))[5];
//not do dummy comment
void* map = (decode_clo(env25057))[4];
//not do dummy comment
void* proc = (decode_clo(env25057))[3];
//not do dummy comment
void* cons = (decode_clo(env25057))[2];
//not do dummy comment
void* kont24729 = (decode_clo(env25057))[1];

//creating new closure instance
void** clo25198 = alloc_clo(lam25054_fptr, 5);

//setting env list
clo25198[1] = kont24729;
clo25198[2] = a2461824889;
clo25198[3] = cons;
clo25198[4] = proc;
clo25198[5] = map;
void* f2473224890 = encode_clo(clo25198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2473224890;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25056 = encode_clo(alloc_clo(lam25056_fptr, 0));

void* lam25058_fptr() // lam25058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25059 = arg_buffer[1];
//reading env and args
void* a2461724887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25059))[6];
//not do dummy comment
void* lst = (decode_clo(env25059))[5];
//not do dummy comment
void* map = (decode_clo(env25059))[4];
//not do dummy comment
void* proc = (decode_clo(env25059))[3];
//not do dummy comment
void* cons = (decode_clo(env25059))[2];
//not do dummy comment
void* kont24729 = (decode_clo(env25059))[1];

//creating new closure instance
void** clo25200 = alloc_clo(lam25056_fptr, 6);

//setting env list
clo25200[1] = kont24729;
clo25200[2] = cons;
clo25200[3] = proc;
clo25200[4] = map;
clo25200[5] = lst;
clo25200[6] = cdr;
void* f2473324888 = encode_clo(clo25200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2473324888;
arg_buffer[3] = a2461724887;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25058 = encode_clo(alloc_clo(lam25058_fptr, 0));

void* lam25060_fptr() // lam25060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25061 = arg_buffer[1];
//reading env and args
void* a2461524883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env25061))[8];
//not do dummy comment
void* map = (decode_clo(env25061))[7];
//not do dummy comment
void* proc = (decode_clo(env25061))[6];
//not do dummy comment
void* car = (decode_clo(env25061))[5];
//not do dummy comment
void* cons = (decode_clo(env25061))[4];
//not do dummy comment
void* kont24729 = (decode_clo(env25061))[3];
//not do dummy comment
void* list = (decode_clo(env25061))[2];
//not do dummy comment
void* cdr = (decode_clo(env25061))[1];

//if-clause
bool if_guard25201 = is_true(a2461524883);
if(if_guard25201)
{

//creating new closure instance
void** clo25203 = alloc_clo(lam25050_fptr, 1);

//setting env list
clo25203[1] = kont24729;
void* f2473024884 = encode_clo(clo25203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2473024884;
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
void** clo25205 = alloc_clo(lam25058_fptr, 6);

//setting env list
clo25205[1] = kont24729;
clo25205[2] = cons;
clo25205[3] = proc;
clo25205[4] = map;
clo25205[5] = lst;
clo25205[6] = cdr;
void* f2473424886 = encode_clo(clo25205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2473424886;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25060 = encode_clo(alloc_clo(lam25060_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25062 = arg_buffer[1];
//reading env and args
void* kont24729 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo25207 = alloc_clo(lam25060_fptr, 8);

//setting env list
clo25207[1] = cdr;
clo25207[2] = list;
clo25207[3] = kont24729;
clo25207[4] = cons;
clo25207[5] = car;
clo25207[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo25207[7] = map;
clo25207[8] = lst;
void* f2473524882 = encode_clo(clo25207);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2473524882;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam25063_fptr() // lam25063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25064 = arg_buffer[1];
//reading env and args
void* x2462224897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24736 = (decode_clo(env25064))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24736);
arg_buffer[2] = x2462224897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24736))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25063 = encode_clo(alloc_clo(lam25063_fptr, 0));

void* lam25065_fptr() // lam25065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25066 = arg_buffer[1];
//reading env and args
void* a2462724907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24736 = (decode_clo(env25066))[3];
//not do dummy comment
void* a2462524903 = (decode_clo(env25066))[2];
//not do dummy comment
void* cons = (decode_clo(env25066))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont24736;
arg_buffer[3] = a2462524903;
arg_buffer[4] = a2462724907;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25065 = encode_clo(alloc_clo(lam25065_fptr, 0));

void* lam25067_fptr() // lam25067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25068 = arg_buffer[1];
//reading env and args
void* a2462624905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24736 = (decode_clo(env25068))[5];
//not do dummy comment
void* op = (decode_clo(env25068))[4];
//not do dummy comment
void* cons = (decode_clo(env25068))[3];
//not do dummy comment
void* filter = (decode_clo(env25068))[2];
//not do dummy comment
void* a2462524903 = (decode_clo(env25068))[1];

//creating new closure instance
void** clo25209 = alloc_clo(lam25065_fptr, 3);

//setting env list
clo25209[1] = cons;
clo25209[2] = a2462524903;
clo25209[3] = kont24736;
void* f2473824906 = encode_clo(clo25209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2473824906;
arg_buffer[3] = op;
arg_buffer[4] = a2462624905;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25067 = encode_clo(alloc_clo(lam25067_fptr, 0));

void* lam25069_fptr() // lam25069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25070 = arg_buffer[1];
//reading env and args
void* a2462524903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25070))[6];
//not do dummy comment
void* lst = (decode_clo(env25070))[5];
//not do dummy comment
void* kont24736 = (decode_clo(env25070))[4];
//not do dummy comment
void* op = (decode_clo(env25070))[3];
//not do dummy comment
void* filter = (decode_clo(env25070))[2];
//not do dummy comment
void* cons = (decode_clo(env25070))[1];

//creating new closure instance
void** clo25211 = alloc_clo(lam25067_fptr, 5);

//setting env list
clo25211[1] = a2462524903;
clo25211[2] = filter;
clo25211[3] = cons;
clo25211[4] = op;
clo25211[5] = kont24736;
void* f2473924904 = encode_clo(clo25211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2473924904;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25069 = encode_clo(alloc_clo(lam25069_fptr, 0));

void* lam25071_fptr() // lam25071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25072 = arg_buffer[1];
//reading env and args
void* a2462824909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24736 = (decode_clo(env25072))[3];
//not do dummy comment
void* op = (decode_clo(env25072))[2];
//not do dummy comment
void* filter = (decode_clo(env25072))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont24736;
arg_buffer[3] = op;
arg_buffer[4] = a2462824909;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25071 = encode_clo(alloc_clo(lam25071_fptr, 0));

void* lam25073_fptr() // lam25073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25074 = arg_buffer[1];
//reading env and args
void* a2462424901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25074))[7];
//not do dummy comment
void* lst = (decode_clo(env25074))[6];
//not do dummy comment
void* kont24736 = (decode_clo(env25074))[5];
//not do dummy comment
void* op = (decode_clo(env25074))[4];
//not do dummy comment
void* cons = (decode_clo(env25074))[3];
//not do dummy comment
void* filter = (decode_clo(env25074))[2];
//not do dummy comment
void* car = (decode_clo(env25074))[1];

//if-clause
bool if_guard25212 = is_true(a2462424901);
if(if_guard25212)
{

//creating new closure instance
void** clo25214 = alloc_clo(lam25069_fptr, 6);

//setting env list
clo25214[1] = cons;
clo25214[2] = filter;
clo25214[3] = op;
clo25214[4] = kont24736;
clo25214[5] = lst;
clo25214[6] = cdr;
void* f2474024902 = encode_clo(clo25214);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2474024902;
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
void** clo25216 = alloc_clo(lam25071_fptr, 3);

//setting env list
clo25216[1] = filter;
clo25216[2] = op;
clo25216[3] = kont24736;
void* f2474124908 = encode_clo(clo25216);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2474124908;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25073 = encode_clo(alloc_clo(lam25073_fptr, 0));

void* lam25075_fptr() // lam25075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25076 = arg_buffer[1];
//reading env and args
void* a2462324899 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25076))[7];
//not do dummy comment
void* lst = (decode_clo(env25076))[6];
//not do dummy comment
void* kont24736 = (decode_clo(env25076))[5];
//not do dummy comment
void* op = (decode_clo(env25076))[4];
//not do dummy comment
void* cons = (decode_clo(env25076))[3];
//not do dummy comment
void* filter = (decode_clo(env25076))[2];
//not do dummy comment
void* car = (decode_clo(env25076))[1];

//creating new closure instance
void** clo25218 = alloc_clo(lam25073_fptr, 7);

//setting env list
clo25218[1] = car;
clo25218[2] = filter;
clo25218[3] = cons;
clo25218[4] = op;
clo25218[5] = kont24736;
clo25218[6] = lst;
clo25218[7] = cdr;
void* f2474224900 = encode_clo(clo25218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2474224900;
arg_buffer[3] = a2462324899;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25075 = encode_clo(alloc_clo(lam25075_fptr, 0));

void* lam25077_fptr() // lam25077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25078 = arg_buffer[1];
//reading env and args
void* a2462124895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env25078))[8];
//not do dummy comment
void* kont24736 = (decode_clo(env25078))[7];
//not do dummy comment
void* op = (decode_clo(env25078))[6];
//not do dummy comment
void* cons = (decode_clo(env25078))[5];
//not do dummy comment
void* list = (decode_clo(env25078))[4];
//not do dummy comment
void* cdr = (decode_clo(env25078))[3];
//not do dummy comment
void* filter = (decode_clo(env25078))[2];
//not do dummy comment
void* car = (decode_clo(env25078))[1];

//if-clause
bool if_guard25219 = is_true(a2462124895);
if(if_guard25219)
{

//creating new closure instance
void** clo25221 = alloc_clo(lam25063_fptr, 1);

//setting env list
clo25221[1] = kont24736;
void* f2473724896 = encode_clo(clo25221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2473724896;
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
void** clo25223 = alloc_clo(lam25075_fptr, 7);

//setting env list
clo25223[1] = car;
clo25223[2] = filter;
clo25223[3] = cons;
clo25223[4] = op;
clo25223[5] = kont24736;
clo25223[6] = lst;
clo25223[7] = cdr;
void* f2474324898 = encode_clo(clo25223);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2474324898;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25077 = encode_clo(alloc_clo(lam25077_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25079 = arg_buffer[1];
//reading env and args
void* kont24736 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo25225 = alloc_clo(lam25077_fptr, 8);

//setting env list
clo25225[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo25225[2] = filter;
clo25225[3] = cdr;
clo25225[4] = list;
clo25225[5] = cons;
clo25225[6] = op;
clo25225[7] = kont24736;
clo25225[8] = lst;
void* f2474424894 = encode_clo(clo25225);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2474424894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam25080_fptr() // lam25080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25081 = arg_buffer[1];
//reading env and args
void* a2463324917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env25081))[3];
//not do dummy comment
void* a2463124914 = (decode_clo(env25081))[2];
//not do dummy comment
void* kont24745 = (decode_clo(env25081))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont24745;
arg_buffer[3] = a2463124914;
arg_buffer[4] = a2463324917;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25080 = encode_clo(alloc_clo(lam25080_fptr, 0));

void* lam25083_fptr() // lam25083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25084 = arg_buffer[1];
//reading env and args
void* a2463124914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env25084))[4];
//not do dummy comment
void* n = (decode_clo(env25084))[3];
//not do dummy comment
void* _u45 = (decode_clo(env25084))[2];
//not do dummy comment
void* kont24745 = (decode_clo(env25084))[1];
mpz_t* mpzvar25226 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25226, "1", 10);
void* a2463224915 = encode_mpz(mpzvar25226);

//creating new closure instance
void** clo25228 = alloc_clo(lam25080_fptr, 3);

//setting env list
clo25228[1] = kont24745;
clo25228[2] = a2463124914;
clo25228[3] = drop;
void* f2474624916 = encode_clo(clo25228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2474624916;
arg_buffer[3] = n;
arg_buffer[4] = a2463224915;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25083 = encode_clo(alloc_clo(lam25083_fptr, 0));

void* lam25085_fptr() // lam25085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25086 = arg_buffer[1];
//reading env and args
void* a2463024912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25086))[6];
//not do dummy comment
void* n = (decode_clo(env25086))[5];
//not do dummy comment
void* lst = (decode_clo(env25086))[4];
//not do dummy comment
void* drop = (decode_clo(env25086))[3];
//not do dummy comment
void* _u45 = (decode_clo(env25086))[2];
//not do dummy comment
void* kont24745 = (decode_clo(env25086))[1];

//if-clause
bool if_guard25229 = is_true(a2463024912);
if(if_guard25229)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24745);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24745))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo25231 = alloc_clo(lam25083_fptr, 4);

//setting env list
clo25231[1] = kont24745;
clo25231[2] = _u45;
clo25231[3] = n;
clo25231[4] = drop;
void* f2474724913 = encode_clo(clo25231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2474724913;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25085 = encode_clo(alloc_clo(lam25085_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25088 = arg_buffer[1];
//reading env and args
void* kont24745 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar25232 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25232, "0", 10);
void* a2462924910 = encode_mpz(mpzvar25232);

//creating new closure instance
void** clo25234 = alloc_clo(lam25085_fptr, 6);

//setting env list
clo25234[1] = kont24745;
clo25234[2] = _u45;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo25234[3] = drop;
clo25234[4] = lst;
clo25234[5] = n;
clo25234[6] = cdr;
void* f2474824911 = encode_clo(clo25234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2474824911;
arg_buffer[3] = n;
arg_buffer[4] = a2462924910;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam25089_fptr() // lam25089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25090 = arg_buffer[1];
//reading env and args
void* a2463724925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24749 = (decode_clo(env25090))[3];
//not do dummy comment
void* proc = (decode_clo(env25090))[2];
//not do dummy comment
void* a2463524921 = (decode_clo(env25090))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont24749;
arg_buffer[3] = a2463524921;
arg_buffer[4] = a2463724925;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25089 = encode_clo(alloc_clo(lam25089_fptr, 0));

void* lam25091_fptr() // lam25091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25092 = arg_buffer[1];
//reading env and args
void* a2463624923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24749 = (decode_clo(env25092))[5];
//not do dummy comment
void* foldr = (decode_clo(env25092))[4];
//not do dummy comment
void* a2463524921 = (decode_clo(env25092))[3];
//not do dummy comment
void* proc = (decode_clo(env25092))[2];
//not do dummy comment
void* acc = (decode_clo(env25092))[1];

//creating new closure instance
void** clo25236 = alloc_clo(lam25089_fptr, 3);

//setting env list
clo25236[1] = a2463524921;
clo25236[2] = proc;
clo25236[3] = kont24749;
void* f2475024924 = encode_clo(clo25236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2475024924;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2463624923;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25091 = encode_clo(alloc_clo(lam25091_fptr, 0));

void* lam25093_fptr() // lam25093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25094 = arg_buffer[1];
//reading env and args
void* a2463524921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25094))[6];
//not do dummy comment
void* kont24749 = (decode_clo(env25094))[5];
//not do dummy comment
void* foldr = (decode_clo(env25094))[4];
//not do dummy comment
void* lst = (decode_clo(env25094))[3];
//not do dummy comment
void* proc = (decode_clo(env25094))[2];
//not do dummy comment
void* acc = (decode_clo(env25094))[1];

//creating new closure instance
void** clo25238 = alloc_clo(lam25091_fptr, 5);

//setting env list
clo25238[1] = acc;
clo25238[2] = proc;
clo25238[3] = a2463524921;
clo25238[4] = foldr;
clo25238[5] = kont24749;
void* f2475124922 = encode_clo(clo25238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2475124922;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25093 = encode_clo(alloc_clo(lam25093_fptr, 0));

void* lam25095_fptr() // lam25095 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25096 = arg_buffer[1];
//reading env and args
void* a2463424919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25096))[7];
//not do dummy comment
void* kont24749 = (decode_clo(env25096))[6];
//not do dummy comment
void* car = (decode_clo(env25096))[5];
//not do dummy comment
void* foldr = (decode_clo(env25096))[4];
//not do dummy comment
void* lst = (decode_clo(env25096))[3];
//not do dummy comment
void* proc = (decode_clo(env25096))[2];
//not do dummy comment
void* acc = (decode_clo(env25096))[1];

//if-clause
bool if_guard25239 = is_true(a2463424919);
if(if_guard25239)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24749);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24749))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo25241 = alloc_clo(lam25093_fptr, 6);

//setting env list
clo25241[1] = acc;
clo25241[2] = proc;
clo25241[3] = lst;
clo25241[4] = foldr;
clo25241[5] = kont24749;
clo25241[6] = cdr;
void* f2475224920 = encode_clo(clo25241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2475224920;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25095 = encode_clo(alloc_clo(lam25095_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25097 = arg_buffer[1];
//reading env and args
void* kont24749 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo25243 = alloc_clo(lam25095_fptr, 7);

//setting env list
clo25243[1] = acc;
clo25243[2] = proc;
clo25243[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo25243[4] = foldr;
clo25243[5] = car;
clo25243[6] = kont24749;
clo25243[7] = cdr;
void* f2475324918 = encode_clo(clo25243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2475324918;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam25098_fptr() // lam25098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25099 = arg_buffer[1];
//reading env and args
void* a2464124933 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2463924929 = (decode_clo(env25099))[3];
//not do dummy comment
void* kont24754 = (decode_clo(env25099))[2];
//not do dummy comment
void* cons = (decode_clo(env25099))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont24754;
arg_buffer[3] = a2463924929;
arg_buffer[4] = a2464124933;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25098 = encode_clo(alloc_clo(lam25098_fptr, 0));

void* lam25100_fptr() // lam25100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25101 = arg_buffer[1];
//reading env and args
void* a2464024931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2463924929 = (decode_clo(env25101))[5];
//not do dummy comment
void* lst2 = (decode_clo(env25101))[4];
//not do dummy comment
void* cons = (decode_clo(env25101))[3];
//not do dummy comment
void* append = (decode_clo(env25101))[2];
//not do dummy comment
void* kont24754 = (decode_clo(env25101))[1];

//creating new closure instance
void** clo25245 = alloc_clo(lam25098_fptr, 3);

//setting env list
clo25245[1] = cons;
clo25245[2] = kont24754;
clo25245[3] = a2463924929;
void* f2475524932 = encode_clo(clo25245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2475524932;
arg_buffer[3] = a2464024931;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25100 = encode_clo(alloc_clo(lam25100_fptr, 0));

void* lam25102_fptr() // lam25102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25103 = arg_buffer[1];
//reading env and args
void* a2463924929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25103))[6];
//not do dummy comment
void* lst2 = (decode_clo(env25103))[5];
//not do dummy comment
void* lst1 = (decode_clo(env25103))[4];
//not do dummy comment
void* cons = (decode_clo(env25103))[3];
//not do dummy comment
void* append = (decode_clo(env25103))[2];
//not do dummy comment
void* kont24754 = (decode_clo(env25103))[1];

//creating new closure instance
void** clo25247 = alloc_clo(lam25100_fptr, 5);

//setting env list
clo25247[1] = kont24754;
clo25247[2] = append;
clo25247[3] = cons;
clo25247[4] = lst2;
clo25247[5] = a2463924929;
void* f2475624930 = encode_clo(clo25247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2475624930;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25102 = encode_clo(alloc_clo(lam25102_fptr, 0));

void* lam25104_fptr() // lam25104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25105 = arg_buffer[1];
//reading env and args
void* a2463824927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env25105))[7];
//not do dummy comment
void* lst2 = (decode_clo(env25105))[6];
//not do dummy comment
void* cons = (decode_clo(env25105))[5];
//not do dummy comment
void* append = (decode_clo(env25105))[4];
//not do dummy comment
void* kont24754 = (decode_clo(env25105))[3];
//not do dummy comment
void* lst1 = (decode_clo(env25105))[2];
//not do dummy comment
void* car = (decode_clo(env25105))[1];

//if-clause
bool if_guard25248 = is_true(a2463824927);
if(if_guard25248)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24754);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24754))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo25250 = alloc_clo(lam25102_fptr, 6);

//setting env list
clo25250[1] = kont24754;
clo25250[2] = append;
clo25250[3] = cons;
clo25250[4] = lst1;
clo25250[5] = lst2;
clo25250[6] = cdr;
void* f2475724928 = encode_clo(clo25250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2475724928;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam25104 = encode_clo(alloc_clo(lam25104_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25106 = arg_buffer[1];
//reading env and args
void* kont24754 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo25252 = alloc_clo(lam25104_fptr, 7);

//setting env list
clo25252[1] = car;
clo25252[2] = lst1;
clo25252[3] = kont24754;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo25252[4] = append;
clo25252[5] = cons;
clo25252[6] = lst2;
clo25252[7] = cdr;
void* f2475824926 = encode_clo(clo25252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2475824926;
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
void* _25107 = arg_buffer[1];
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

void* kont2475924934 = prim_car(lst);
void* lst24935 = prim_cdr(lst);
void* x2464224936 = apply_prim_hash(lst24935);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2475924934);
arg_buffer[2] = x2464224936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2475924934))[0]);
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
void* _25108 = arg_buffer[1];
//reading env and args
void* kont24761 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2464324937 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24761);
arg_buffer[2] = x2464324937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24761))[0]);
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
void* _25109 = arg_buffer[1];
//reading env and args
void* kont24762 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2464424938 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24762);
arg_buffer[2] = x2464424938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24762))[0]);
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
void* _25110 = arg_buffer[1];
//reading env and args
void* kont24763 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2464524939 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24763);
arg_buffer[2] = x2464524939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24763))[0]);
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
void* _25111 = arg_buffer[1];
//reading env and args
void* kont24764 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2464624940 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24764);
arg_buffer[2] = x2464624940;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24764))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25112 = arg_buffer[1];
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

void* kont2476524941 = prim_car(lst);
void* lst24942 = prim_cdr(lst);
void* x2464724943 = apply_prim_set(lst24942);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2476524941);
arg_buffer[2] = x2464724943;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2476524941))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25113 = arg_buffer[1];
//reading env and args
void* kont24767 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2464824944 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24767);
arg_buffer[2] = x2464824944;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24767))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25114 = arg_buffer[1];
//reading env and args
void* kont24768 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2464924945 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24768);
arg_buffer[2] = x2464924945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24768))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25115 = arg_buffer[1];
//reading env and args
void* kont24769 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2465024946 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24769);
arg_buffer[2] = x2465024946;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24769))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25116 = arg_buffer[1];
//reading env and args
void* kont24770 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2465124947 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24770);
arg_buffer[2] = x2465124947;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24770))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25117 = arg_buffer[1];
//reading env and args
void* kont24771 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2465224948 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24771);
arg_buffer[2] = x2465224948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24771))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25118 = arg_buffer[1];
//reading env and args
void* kont24772 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2465324949 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24772);
arg_buffer[2] = x2465324949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24772))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25119 = arg_buffer[1];
//reading env and args
void* kont24773 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x2465424950 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24773);
arg_buffer[2] = x2465424950;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24773))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25120 = arg_buffer[1];
//reading env and args
void* kont24774 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x2465524951 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24774);
arg_buffer[2] = x2465524951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24774))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25121 = arg_buffer[1];
//reading env and args
void* kont24775 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x2465624952 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24775);
arg_buffer[2] = x2465624952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24775))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25122 = arg_buffer[1];
//reading env and args
void* kont24776 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2465724953 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24776);
arg_buffer[2] = x2465724953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24776))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25127 = arg_buffer[1];
//reading env and args
void* kont24777 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar25253 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar25253, "100.8", 10);
void* a2465824954 = encode_mpf(mpfvar25253);
mpz_t* mpzvar25254 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25254, "80", 10);
void* a2465924955 = encode_mpz(mpzvar25254);
mpz_t* mpzvar25255 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar25255, "10", 10);
void* a2466024956 = encode_mpz(mpzvar25255);
mpf_t* mpfvar25256 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar25256, "2.4", 10);
void* a2466124957 = encode_mpf(mpfvar25256);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = kont24777;
arg_buffer[3] = a2465824954;
arg_buffer[4] = a2465924955;
arg_buffer[5] = a2466024956;
arg_buffer[6] = a2466124957;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam25128_fptr() // lam25128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env25129 = arg_buffer[1];
//reading env and args
void* x2466224959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont24778 = (decode_clo(env25129))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont24778);
arg_buffer[2] = x2466224959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont24778))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam25128 = encode_clo(alloc_clo(lam25128_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _25130 = arg_buffer[1];
//reading env and args
void* kont24778 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo25258 = alloc_clo(lam25128_fptr, 1);

//setting env list
clo25258[1] = kont24778;
void* f2477924958 = encode_clo(clo25258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2477924958;
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

