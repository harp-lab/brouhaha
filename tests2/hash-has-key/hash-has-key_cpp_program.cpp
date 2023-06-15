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
void* _39793 = arg_buffer[1];
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

void* kont3951839623 = prim_car(lst);
void* lst39624 = prim_cdr(lst);
void* x3942639625 = apply_prim__u43(lst39624);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3951839623);
arg_buffer[2] = x3942639625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3951839623))[0]);
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
void* _39794 = arg_buffer[1];
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

void* kont3952039626 = prim_car(lst);
void* lst39627 = prim_cdr(lst);
void* x3942739628 = apply_prim__u45(lst39627);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3952039626);
arg_buffer[2] = x3942739628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3952039626))[0]);
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
void* _39795 = arg_buffer[1];
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

void* kont3952239629 = prim_car(lst);
void* lst39630 = prim_cdr(lst);
void* x3942839631 = apply_prim__u42(lst39630);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3952239629);
arg_buffer[2] = x3942839631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3952239629))[0]);
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
void* _39796 = arg_buffer[1];
//reading env and args
void* kont39524 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3942939632 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39524);
arg_buffer[2] = x3942939632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39524))[0]);
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
void* _39797 = arg_buffer[1];
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

void* kont3952539633 = prim_car(lst);
void* lst39634 = prim_cdr(lst);
void* x3943039635 = apply_prim__u47(lst39634);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3952539633);
arg_buffer[2] = x3943039635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3952539633))[0]);
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
void* _39798 = arg_buffer[1];
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

void* kont3952739636 = prim_car(lst);
void* lst39637 = prim_cdr(lst);
void* x3943139638 = apply_prim__u61(lst39637);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3952739636);
arg_buffer[2] = x3943139638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3952739636))[0]);
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
void* _39799 = arg_buffer[1];
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

void* kont3952939639 = prim_car(lst);
void* lst39640 = prim_cdr(lst);
void* x3943239641 = apply_prim__u62(lst39640);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3952939639);
arg_buffer[2] = x3943239641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3952939639))[0]);
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
void* _39800 = arg_buffer[1];
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

void* kont3953139642 = prim_car(lst);
void* lst39643 = prim_cdr(lst);
void* x3943339644 = apply_prim__u60(lst39643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3953139642);
arg_buffer[2] = x3943339644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3953139642))[0]);
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
void* _39801 = arg_buffer[1];
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

void* kont3953339645 = prim_car(lst);
void* lst39646 = prim_cdr(lst);
void* x3943439647 = apply_prim__u60_u61(lst39646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3953339645);
arg_buffer[2] = x3943439647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3953339645))[0]);
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
void* _39802 = arg_buffer[1];
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

void* kont3953539648 = prim_car(lst);
void* lst39649 = prim_cdr(lst);
void* x3943539650 = apply_prim__u62_u61(lst39649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3953539648);
arg_buffer[2] = x3943539650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3953539648))[0]);
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
void* _39803 = arg_buffer[1];
//reading env and args
void* kont39537 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3943639651 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39537);
arg_buffer[2] = x3943639651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39537))[0]);
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
void* _39804 = arg_buffer[1];
//reading env and args
void* kont39538 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3943739652 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39538);
arg_buffer[2] = x3943739652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39538))[0]);
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
void* _39805 = arg_buffer[1];
//reading env and args
void* kont39539 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3943839653 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39539);
arg_buffer[2] = x3943839653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39539))[0]);
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
void* _39806 = arg_buffer[1];
//reading env and args
void* kont39540 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3943939654 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39540);
arg_buffer[2] = x3943939654;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39540))[0]);
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
void* _39807 = arg_buffer[1];
//reading env and args
void* kont39541 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3944039655 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39541);
arg_buffer[2] = x3944039655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39541))[0]);
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
void* _39808 = arg_buffer[1];
//reading env and args
void* kont39542 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3944139656 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39542);
arg_buffer[2] = x3944139656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39542))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam39809_fptr() // lam39809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39810 = arg_buffer[1];
//reading env and args
void* a3944439660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39543 = (decode_clo(env39810))[3];
//not do dummy comment
void* a3944239657 = (decode_clo(env39810))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env39810))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont39543;
arg_buffer[3] = a3944239657;
arg_buffer[4] = a3944439660;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39809 = encode_clo(alloc_clo(lam39809_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39813 = arg_buffer[1];
//reading env and args
void* kont39543 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar40794 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40794, "0", 10);
void* a3944239657 = encode_mpz(mpzvar40794);
mpz_t* mpzvar40795 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40795, "2", 10);
void* a3944339658 = encode_mpz(mpzvar40795);

//creating new closure instance
void** clo40797 = alloc_clo(lam39809_fptr, 3);

//setting env list
clo40797[1] = equal_u63;
clo40797[2] = a3944239657;
clo40797[3] = kont39543;
void* f3954439659 = encode_clo(clo40797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3954439659;
arg_buffer[3] = x;
arg_buffer[4] = a3944339658;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam39814_fptr() // lam39814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39815 = arg_buffer[1];
//reading env and args
void* a3944739664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39545 = (decode_clo(env39815))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env39815))[2];
//not do dummy comment
void* a3944539661 = (decode_clo(env39815))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont39545;
arg_buffer[3] = a3944539661;
arg_buffer[4] = a3944739664;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39814 = encode_clo(alloc_clo(lam39814_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39818 = arg_buffer[1];
//reading env and args
void* kont39545 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar40798 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40798, "1", 10);
void* a3944539661 = encode_mpz(mpzvar40798);
mpz_t* mpzvar40799 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40799, "2", 10);
void* a3944639662 = encode_mpz(mpzvar40799);

//creating new closure instance
void** clo40801 = alloc_clo(lam39814_fptr, 3);

//setting env list
clo40801[1] = a3944539661;
clo40801[2] = equal_u63;
clo40801[3] = kont39545;
void* f3954639663 = encode_clo(clo40801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3954639663;
arg_buffer[3] = x;
arg_buffer[4] = a3944639662;
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
void* _39819 = arg_buffer[1];
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

void* kont3954739665 = prim_car(x);
void* x39666 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3954739665);
arg_buffer[2] = x39666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3954739665))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* and_fptr() // and 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39820 = arg_buffer[1];
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

void* kont3954939667 = prim_car(lst);
void* lst39668 = prim_cdr(lst);
void* x3944839669 = apply_prim_and(lst39668);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3954939667);
arg_buffer[2] = x3944839669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3954939667))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* and = encode_clo(alloc_clo(and_fptr, 0));

void* or_fptr() // or 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39821 = arg_buffer[1];
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

void* kont3955139670 = prim_car(lst);
void* lst39671 = prim_cdr(lst);
void* x3944939672 = apply_prim_or(lst39671);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3955139670);
arg_buffer[2] = x3944939672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3955139670))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam39824_fptr() // lam39824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39825 = arg_buffer[1];
//reading env and args
void* a3945539682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env39825))[3];
//not do dummy comment
void* kont39553 = (decode_clo(env39825))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39825))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont39553;
arg_buffer[3] = x;
arg_buffer[4] = a3945539682;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39824 = encode_clo(alloc_clo(lam39824_fptr, 0));

void* lam39826_fptr() // lam39826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39827 = arg_buffer[1];
//reading env and args
void* a3945339679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39827))[5];
//not do dummy comment
void* lst = (decode_clo(env39827))[4];
//not do dummy comment
void* x = (decode_clo(env39827))[3];
//not do dummy comment
void* kont39553 = (decode_clo(env39827))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39827))[1];

//if-clause
bool if_guard40802 = is_true(a3945339679);
if(if_guard40802)
{
void* x3945439680 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39553);
arg_buffer[2] = x3945439680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39553))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40804 = alloc_clo(lam39824_fptr, 3);

//setting env list
clo40804[1] = member_u63;
clo40804[2] = kont39553;
clo40804[3] = x;
void* f3955439681 = encode_clo(clo40804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3955439681;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39826 = encode_clo(alloc_clo(lam39826_fptr, 0));

void* lam39828_fptr() // lam39828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39829 = arg_buffer[1];
//reading env and args
void* a3945239677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39829))[6];
//not do dummy comment
void* lst = (decode_clo(env39829))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env39829))[4];
//not do dummy comment
void* x = (decode_clo(env39829))[3];
//not do dummy comment
void* kont39553 = (decode_clo(env39829))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39829))[1];

//creating new closure instance
void** clo40806 = alloc_clo(lam39826_fptr, 5);

//setting env list
clo40806[1] = member_u63;
clo40806[2] = kont39553;
clo40806[3] = x;
clo40806[4] = lst;
clo40806[5] = cdr;
void* f3955539678 = encode_clo(clo40806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3955539678;
arg_buffer[3] = a3945239677;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39828 = encode_clo(alloc_clo(lam39828_fptr, 0));

void* lam39830_fptr() // lam39830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39831 = arg_buffer[1];
//reading env and args
void* a3945039674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39831))[7];
//not do dummy comment
void* lst = (decode_clo(env39831))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env39831))[5];
//not do dummy comment
void* x = (decode_clo(env39831))[4];
//not do dummy comment
void* car = (decode_clo(env39831))[3];
//not do dummy comment
void* kont39553 = (decode_clo(env39831))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39831))[1];

//if-clause
bool if_guard40807 = is_true(a3945039674);
if(if_guard40807)
{
void* x3945139675 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39553);
arg_buffer[2] = x3945139675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39553))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40809 = alloc_clo(lam39828_fptr, 6);

//setting env list
clo40809[1] = member_u63;
clo40809[2] = kont39553;
clo40809[3] = x;
clo40809[4] = equal_u63;
clo40809[5] = lst;
clo40809[6] = cdr;
void* f3955639676 = encode_clo(clo40809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3955639676;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39830 = encode_clo(alloc_clo(lam39830_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39832 = arg_buffer[1];
//reading env and args
void* kont39553 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40811 = alloc_clo(lam39830_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo40811[1] = member_u63;
clo40811[2] = kont39553;
clo40811[3] = car;
clo40811[4] = x;
clo40811[5] = equal_u63;
clo40811[6] = lst;
clo40811[7] = cdr;
void* f3955739673 = encode_clo(clo40811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3955739673;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam39833_fptr() // lam39833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39834 = arg_buffer[1];
//reading env and args
void* a3945939690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39558 = (decode_clo(env39834))[4];
//not do dummy comment
void* a3945839688 = (decode_clo(env39834))[3];
//not do dummy comment
void* fun = (decode_clo(env39834))[2];
//not do dummy comment
void* foldl = (decode_clo(env39834))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont39558;
arg_buffer[3] = fun;
arg_buffer[4] = a3945839688;
arg_buffer[5] = a3945939690;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39833 = encode_clo(alloc_clo(lam39833_fptr, 0));

void* lam39835_fptr() // lam39835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39836 = arg_buffer[1];
//reading env and args
void* a3945839688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39836))[5];
//not do dummy comment
void* kont39558 = (decode_clo(env39836))[4];
//not do dummy comment
void* lst = (decode_clo(env39836))[3];
//not do dummy comment
void* fun = (decode_clo(env39836))[2];
//not do dummy comment
void* foldl = (decode_clo(env39836))[1];

//creating new closure instance
void** clo40813 = alloc_clo(lam39833_fptr, 4);

//setting env list
clo40813[1] = foldl;
clo40813[2] = fun;
clo40813[3] = a3945839688;
clo40813[4] = kont39558;
void* f3955939689 = encode_clo(clo40813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3955939689;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39835 = encode_clo(alloc_clo(lam39835_fptr, 0));

void* lam39837_fptr() // lam39837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39838 = arg_buffer[1];
//reading env and args
void* a3945739686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39838))[6];
//not do dummy comment
void* kont39558 = (decode_clo(env39838))[5];
//not do dummy comment
void* lst = (decode_clo(env39838))[4];
//not do dummy comment
void* fun = (decode_clo(env39838))[3];
//not do dummy comment
void* acc = (decode_clo(env39838))[2];
//not do dummy comment
void* foldl = (decode_clo(env39838))[1];

//creating new closure instance
void** clo40815 = alloc_clo(lam39835_fptr, 5);

//setting env list
clo40815[1] = foldl;
clo40815[2] = fun;
clo40815[3] = lst;
clo40815[4] = kont39558;
clo40815[5] = cdr;
void* f3956039687 = encode_clo(clo40815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3956039687;
arg_buffer[3] = a3945739686;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39837 = encode_clo(alloc_clo(lam39837_fptr, 0));

void* lam39839_fptr() // lam39839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39840 = arg_buffer[1];
//reading env and args
void* a3945639684 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39840))[7];
//not do dummy comment
void* kont39558 = (decode_clo(env39840))[6];
//not do dummy comment
void* lst = (decode_clo(env39840))[5];
//not do dummy comment
void* fun = (decode_clo(env39840))[4];
//not do dummy comment
void* acc = (decode_clo(env39840))[3];
//not do dummy comment
void* car = (decode_clo(env39840))[2];
//not do dummy comment
void* foldl = (decode_clo(env39840))[1];

//if-clause
bool if_guard40816 = is_true(a3945639684);
if(if_guard40816)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39558);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39558))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40818 = alloc_clo(lam39837_fptr, 6);

//setting env list
clo40818[1] = foldl;
clo40818[2] = acc;
clo40818[3] = fun;
clo40818[4] = lst;
clo40818[5] = kont39558;
clo40818[6] = cdr;
void* f3956139685 = encode_clo(clo40818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3956139685;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39839 = encode_clo(alloc_clo(lam39839_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39841 = arg_buffer[1];
//reading env and args
void* kont39558 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo40820 = alloc_clo(lam39839_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo40820[1] = foldl;
clo40820[2] = car;
clo40820[3] = acc;
clo40820[4] = fun;
clo40820[5] = lst;
clo40820[6] = kont39558;
clo40820[7] = cdr;
void* f3956239683 = encode_clo(clo40820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3956239683;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam39842_fptr() // lam39842 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39843 = arg_buffer[1];
//reading env and args
void* a3946339698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39843))[3];
//not do dummy comment
void* kont39563 = (decode_clo(env39843))[2];
//not do dummy comment
void* a3946139694 = (decode_clo(env39843))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont39563;
arg_buffer[3] = a3946139694;
arg_buffer[4] = a3946339698;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39842 = encode_clo(alloc_clo(lam39842_fptr, 0));

void* lam39844_fptr() // lam39844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39845 = arg_buffer[1];
//reading env and args
void* a3946239696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39845))[5];
//not do dummy comment
void* kont39563 = (decode_clo(env39845))[4];
//not do dummy comment
void* a3946139694 = (decode_clo(env39845))[3];
//not do dummy comment
void* lst2 = (decode_clo(env39845))[2];
//not do dummy comment
void* cons = (decode_clo(env39845))[1];

//creating new closure instance
void** clo40822 = alloc_clo(lam39842_fptr, 3);

//setting env list
clo40822[1] = a3946139694;
clo40822[2] = kont39563;
clo40822[3] = reverse_u45helper;
void* f3956439697 = encode_clo(clo40822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3956439697;
arg_buffer[3] = a3946239696;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39844 = encode_clo(alloc_clo(lam39844_fptr, 0));

void* lam39846_fptr() // lam39846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39847 = arg_buffer[1];
//reading env and args
void* a3946139694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39847))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39847))[5];
//not do dummy comment
void* kont39563 = (decode_clo(env39847))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39847))[3];
//not do dummy comment
void* car = (decode_clo(env39847))[2];
//not do dummy comment
void* cons = (decode_clo(env39847))[1];

//creating new closure instance
void** clo40824 = alloc_clo(lam39844_fptr, 5);

//setting env list
clo40824[1] = cons;
clo40824[2] = lst2;
clo40824[3] = a3946139694;
clo40824[4] = kont39563;
clo40824[5] = reverse_u45helper;
void* f3956539695 = encode_clo(clo40824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3956539695;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39846 = encode_clo(alloc_clo(lam39846_fptr, 0));

void* lam39848_fptr() // lam39848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39849 = arg_buffer[1];
//reading env and args
void* a3946039692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39849))[7];
//not do dummy comment
void* lst = (decode_clo(env39849))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39849))[5];
//not do dummy comment
void* kont39563 = (decode_clo(env39849))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39849))[3];
//not do dummy comment
void* car = (decode_clo(env39849))[2];
//not do dummy comment
void* cons = (decode_clo(env39849))[1];

//if-clause
bool if_guard40825 = is_true(a3946039692);
if(if_guard40825)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39563);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39563))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40827 = alloc_clo(lam39846_fptr, 6);

//setting env list
clo40827[1] = cons;
clo40827[2] = car;
clo40827[3] = lst2;
clo40827[4] = kont39563;
clo40827[5] = reverse_u45helper;
clo40827[6] = lst;
void* f3956639693 = encode_clo(clo40827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3956639693;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39848 = encode_clo(alloc_clo(lam39848_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39850 = arg_buffer[1];
//reading env and args
void* kont39563 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40829 = alloc_clo(lam39848_fptr, 7);

//setting env list
clo40829[1] = cons;
clo40829[2] = car;
clo40829[3] = lst2;
clo40829[4] = kont39563;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo40829[5] = reverse_u45helper;
clo40829[6] = lst;
clo40829[7] = cdr;
void* f3956739691 = encode_clo(clo40829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3956739691;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam39851_fptr() // lam39851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39852 = arg_buffer[1];
//reading env and args
void* a3946439700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39852))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39852))[2];
//not do dummy comment
void* kont39568 = (decode_clo(env39852))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont39568;
arg_buffer[3] = lst;
arg_buffer[4] = a3946439700;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39851 = encode_clo(alloc_clo(lam39851_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39853 = arg_buffer[1];
//reading env and args
void* kont39568 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo40831 = alloc_clo(lam39851_fptr, 3);

//setting env list
clo40831[1] = kont39568;
clo40831[2] = reverse_u45helper;
clo40831[3] = lst;
void* f3956939699 = encode_clo(clo40831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3956939699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam39854_fptr() // lam39854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39855 = arg_buffer[1];
//reading env and args
void* x3946739705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39570 = (decode_clo(env39855))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39570);
arg_buffer[2] = x3946739705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39570))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39854 = encode_clo(alloc_clo(lam39854_fptr, 0));

void* lam39856_fptr() // lam39856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39857 = arg_buffer[1];
//reading env and args
void* a3947239714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3946839707 = (decode_clo(env39857))[4];
//not do dummy comment
void* a3947039710 = (decode_clo(env39857))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env39857))[2];
//not do dummy comment
void* kont39570 = (decode_clo(env39857))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont39570;
arg_buffer[3] = a3946839707;
arg_buffer[4] = a3947039710;
arg_buffer[5] = a3947239714;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39856 = encode_clo(alloc_clo(lam39856_fptr, 0));

void* lam39858_fptr() // lam39858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39859 = arg_buffer[1];
//reading env and args
void* a3947139712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3946839707 = (decode_clo(env39859))[6];
//not do dummy comment
void* a3947039710 = (decode_clo(env39859))[5];
//not do dummy comment
void* cons = (decode_clo(env39859))[4];
//not do dummy comment
void* kont39570 = (decode_clo(env39859))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env39859))[2];
//not do dummy comment
void* lst2 = (decode_clo(env39859))[1];

//creating new closure instance
void** clo40833 = alloc_clo(lam39856_fptr, 4);

//setting env list
clo40833[1] = kont39570;
clo40833[2] = take_u45helper;
clo40833[3] = a3947039710;
clo40833[4] = a3946839707;
void* f3957239713 = encode_clo(clo40833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3957239713;
arg_buffer[3] = a3947139712;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39858 = encode_clo(alloc_clo(lam39858_fptr, 0));

void* lam39860_fptr() // lam39860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39861 = arg_buffer[1];
//reading env and args
void* a3947039710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39861))[7];
//not do dummy comment
void* a3946839707 = (decode_clo(env39861))[6];
//not do dummy comment
void* car = (decode_clo(env39861))[5];
//not do dummy comment
void* cons = (decode_clo(env39861))[4];
//not do dummy comment
void* kont39570 = (decode_clo(env39861))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env39861))[2];
//not do dummy comment
void* lst2 = (decode_clo(env39861))[1];

//creating new closure instance
void** clo40835 = alloc_clo(lam39858_fptr, 6);

//setting env list
clo40835[1] = lst2;
clo40835[2] = take_u45helper;
clo40835[3] = kont39570;
clo40835[4] = cons;
clo40835[5] = a3947039710;
clo40835[6] = a3946839707;
void* f3957339711 = encode_clo(clo40835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3957339711;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39860 = encode_clo(alloc_clo(lam39860_fptr, 0));

void* lam39863_fptr() // lam39863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39864 = arg_buffer[1];
//reading env and args
void* a3946839707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39864))[8];
//not do dummy comment
void* cons = (decode_clo(env39864))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env39864))[6];
//not do dummy comment
void* lst2 = (decode_clo(env39864))[5];
//not do dummy comment
void* n = (decode_clo(env39864))[4];
//not do dummy comment
void* car = (decode_clo(env39864))[3];
//not do dummy comment
void* kont39570 = (decode_clo(env39864))[2];
//not do dummy comment
void* _u45 = (decode_clo(env39864))[1];
mpz_t* mpzvar40836 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40836, "1", 10);
void* a3946939708 = encode_mpz(mpzvar40836);

//creating new closure instance
void** clo40838 = alloc_clo(lam39860_fptr, 7);

//setting env list
clo40838[1] = lst2;
clo40838[2] = take_u45helper;
clo40838[3] = kont39570;
clo40838[4] = cons;
clo40838[5] = car;
clo40838[6] = a3946839707;
clo40838[7] = lst;
void* f3957439709 = encode_clo(clo40838);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3957439709;
arg_buffer[3] = n;
arg_buffer[4] = a3946939708;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39863 = encode_clo(alloc_clo(lam39863_fptr, 0));

void* lam39865_fptr() // lam39865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39866 = arg_buffer[1];
//reading env and args
void* a3946639703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39866))[10];
//not do dummy comment
void* lst = (decode_clo(env39866))[9];
//not do dummy comment
void* reverse = (decode_clo(env39866))[8];
//not do dummy comment
void* cons = (decode_clo(env39866))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env39866))[6];
//not do dummy comment
void* lst2 = (decode_clo(env39866))[5];
//not do dummy comment
void* n = (decode_clo(env39866))[4];
//not do dummy comment
void* car = (decode_clo(env39866))[3];
//not do dummy comment
void* kont39570 = (decode_clo(env39866))[2];
//not do dummy comment
void* _u45 = (decode_clo(env39866))[1];

//if-clause
bool if_guard40839 = is_true(a3946639703);
if(if_guard40839)
{

//creating new closure instance
void** clo40841 = alloc_clo(lam39854_fptr, 1);

//setting env list
clo40841[1] = kont39570;
void* f3957139704 = encode_clo(clo40841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3957139704;
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
void** clo40843 = alloc_clo(lam39863_fptr, 8);

//setting env list
clo40843[1] = _u45;
clo40843[2] = kont39570;
clo40843[3] = car;
clo40843[4] = n;
clo40843[5] = lst2;
clo40843[6] = take_u45helper;
clo40843[7] = cons;
clo40843[8] = lst;
void* f3957539706 = encode_clo(clo40843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3957539706;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39865 = encode_clo(alloc_clo(lam39865_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39868 = arg_buffer[1];
//reading env and args
void* kont39570 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar40844 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40844, "0", 10);
void* a3946539701 = encode_mpz(mpzvar40844);

//creating new closure instance
void** clo40846 = alloc_clo(lam39865_fptr, 10);

//setting env list
clo40846[1] = _u45;
clo40846[2] = kont39570;
clo40846[3] = car;
clo40846[4] = n;
clo40846[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo40846[6] = take_u45helper;
clo40846[7] = cons;
clo40846[8] = reverse;
clo40846[9] = lst;
clo40846[10] = cdr;
void* f3957639702 = encode_clo(clo40846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3957639702;
arg_buffer[3] = n;
arg_buffer[4] = a3946539701;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam39869_fptr() // lam39869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39870 = arg_buffer[1];
//reading env and args
void* a3947339716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39870))[4];
//not do dummy comment
void* kont39577 = (decode_clo(env39870))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env39870))[2];
//not do dummy comment
void* n = (decode_clo(env39870))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont39577;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3947339716;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39869 = encode_clo(alloc_clo(lam39869_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39871 = arg_buffer[1];
//reading env and args
void* kont39577 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40848 = alloc_clo(lam39869_fptr, 4);

//setting env list
clo40848[1] = n;
clo40848[2] = take_u45helper;
clo40848[3] = kont39577;
clo40848[4] = lst;
void* f3957839715 = encode_clo(clo40848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3957839715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam39873_fptr() // lam39873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39874 = arg_buffer[1];
//reading env and args
void* a3947839724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3947639720 = (decode_clo(env39874))[3];
//not do dummy comment
void* kont39579 = (decode_clo(env39874))[2];
//not do dummy comment
void* _u43 = (decode_clo(env39874))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont39579;
arg_buffer[3] = a3947639720;
arg_buffer[4] = a3947839724;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39873 = encode_clo(alloc_clo(lam39873_fptr, 0));

void* lam39875_fptr() // lam39875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39876 = arg_buffer[1];
//reading env and args
void* a3947739722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39579 = (decode_clo(env39876))[4];
//not do dummy comment
void* _u43 = (decode_clo(env39876))[3];
//not do dummy comment
void* a3947639720 = (decode_clo(env39876))[2];
//not do dummy comment
void* length = (decode_clo(env39876))[1];

//creating new closure instance
void** clo40850 = alloc_clo(lam39873_fptr, 3);

//setting env list
clo40850[1] = _u43;
clo40850[2] = kont39579;
clo40850[3] = a3947639720;
void* f3958039723 = encode_clo(clo40850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3958039723;
arg_buffer[3] = a3947739722;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39875 = encode_clo(alloc_clo(lam39875_fptr, 0));

void* lam39878_fptr() // lam39878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39879 = arg_buffer[1];
//reading env and args
void* a3947439718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39879))[5];
//not do dummy comment
void* lst = (decode_clo(env39879))[4];
//not do dummy comment
void* length = (decode_clo(env39879))[3];
//not do dummy comment
void* kont39579 = (decode_clo(env39879))[2];
//not do dummy comment
void* _u43 = (decode_clo(env39879))[1];

//if-clause
bool if_guard40851 = is_true(a3947439718);
if(if_guard40851)
{
mpz_t* mpzvar40852 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40852, "0", 10);
void* x3947539719 = encode_mpz(mpzvar40852);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39579);
arg_buffer[2] = x3947539719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39579))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar40853 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40853, "1", 10);
void* a3947639720 = encode_mpz(mpzvar40853);

//creating new closure instance
void** clo40855 = alloc_clo(lam39875_fptr, 4);

//setting env list
clo40855[1] = length;
clo40855[2] = a3947639720;
clo40855[3] = _u43;
clo40855[4] = kont39579;
void* f3958139721 = encode_clo(clo40855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3958139721;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39878 = encode_clo(alloc_clo(lam39878_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39880 = arg_buffer[1];
//reading env and args
void* kont39579 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo40857 = alloc_clo(lam39878_fptr, 5);

//setting env list
clo40857[1] = _u43;
clo40857[2] = kont39579;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo40857[3] = length;
clo40857[4] = lst;
clo40857[5] = cdr;
void* f3958239717 = encode_clo(clo40857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3958239717;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam39881_fptr() // lam39881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39882 = arg_buffer[1];
//reading env and args
void* x3948039728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39583 = (decode_clo(env39882))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39583);
arg_buffer[2] = x3948039728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39583))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39881 = encode_clo(alloc_clo(lam39881_fptr, 0));

void* lam39883_fptr() // lam39883 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39884 = arg_buffer[1];
//reading env and args
void* a3948439736 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3948239732 = (decode_clo(env39884))[3];
//not do dummy comment
void* kont39583 = (decode_clo(env39884))[2];
//not do dummy comment
void* cons = (decode_clo(env39884))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39583;
arg_buffer[3] = a3948239732;
arg_buffer[4] = a3948439736;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39883 = encode_clo(alloc_clo(lam39883_fptr, 0));

void* lam39885_fptr() // lam39885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39886 = arg_buffer[1];
//reading env and args
void* a3948339734 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3948239732 = (decode_clo(env39886))[5];
//not do dummy comment
void* map = (decode_clo(env39886))[4];
//not do dummy comment
void* proc = (decode_clo(env39886))[3];
//not do dummy comment
void* kont39583 = (decode_clo(env39886))[2];
//not do dummy comment
void* cons = (decode_clo(env39886))[1];

//creating new closure instance
void** clo40859 = alloc_clo(lam39883_fptr, 3);

//setting env list
clo40859[1] = cons;
clo40859[2] = kont39583;
clo40859[3] = a3948239732;
void* f3958539735 = encode_clo(clo40859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3958539735;
arg_buffer[3] = proc;
arg_buffer[4] = a3948339734;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39885 = encode_clo(alloc_clo(lam39885_fptr, 0));

void* lam39887_fptr() // lam39887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39888 = arg_buffer[1];
//reading env and args
void* a3948239732 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39888))[6];
//not do dummy comment
void* lst = (decode_clo(env39888))[5];
//not do dummy comment
void* map = (decode_clo(env39888))[4];
//not do dummy comment
void* proc = (decode_clo(env39888))[3];
//not do dummy comment
void* kont39583 = (decode_clo(env39888))[2];
//not do dummy comment
void* cons = (decode_clo(env39888))[1];

//creating new closure instance
void** clo40861 = alloc_clo(lam39885_fptr, 5);

//setting env list
clo40861[1] = cons;
clo40861[2] = kont39583;
clo40861[3] = proc;
clo40861[4] = map;
clo40861[5] = a3948239732;
void* f3958639733 = encode_clo(clo40861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3958639733;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39887 = encode_clo(alloc_clo(lam39887_fptr, 0));

void* lam39889_fptr() // lam39889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39890 = arg_buffer[1];
//reading env and args
void* a3948139730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39890))[6];
//not do dummy comment
void* lst = (decode_clo(env39890))[5];
//not do dummy comment
void* map = (decode_clo(env39890))[4];
//not do dummy comment
void* proc = (decode_clo(env39890))[3];
//not do dummy comment
void* kont39583 = (decode_clo(env39890))[2];
//not do dummy comment
void* cons = (decode_clo(env39890))[1];

//creating new closure instance
void** clo40863 = alloc_clo(lam39887_fptr, 6);

//setting env list
clo40863[1] = cons;
clo40863[2] = kont39583;
clo40863[3] = proc;
clo40863[4] = map;
clo40863[5] = lst;
clo40863[6] = cdr;
void* f3958739731 = encode_clo(clo40863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3958739731;
arg_buffer[3] = a3948139730;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39889 = encode_clo(alloc_clo(lam39889_fptr, 0));

void* lam39891_fptr() // lam39891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39892 = arg_buffer[1];
//reading env and args
void* a3947939726 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39892))[8];
//not do dummy comment
void* map = (decode_clo(env39892))[7];
//not do dummy comment
void* proc = (decode_clo(env39892))[6];
//not do dummy comment
void* kont39583 = (decode_clo(env39892))[5];
//not do dummy comment
void* car = (decode_clo(env39892))[4];
//not do dummy comment
void* cons = (decode_clo(env39892))[3];
//not do dummy comment
void* list = (decode_clo(env39892))[2];
//not do dummy comment
void* cdr = (decode_clo(env39892))[1];

//if-clause
bool if_guard40864 = is_true(a3947939726);
if(if_guard40864)
{

//creating new closure instance
void** clo40866 = alloc_clo(lam39881_fptr, 1);

//setting env list
clo40866[1] = kont39583;
void* f3958439727 = encode_clo(clo40866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3958439727;
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
void** clo40868 = alloc_clo(lam39889_fptr, 6);

//setting env list
clo40868[1] = cons;
clo40868[2] = kont39583;
clo40868[3] = proc;
clo40868[4] = map;
clo40868[5] = lst;
clo40868[6] = cdr;
void* f3958839729 = encode_clo(clo40868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3958839729;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39891 = encode_clo(alloc_clo(lam39891_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39893 = arg_buffer[1];
//reading env and args
void* kont39583 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40870 = alloc_clo(lam39891_fptr, 8);

//setting env list
clo40870[1] = cdr;
clo40870[2] = list;
clo40870[3] = cons;
clo40870[4] = car;
clo40870[5] = kont39583;
clo40870[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo40870[7] = map;
clo40870[8] = lst;
void* f3958939725 = encode_clo(clo40870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3958939725;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam39894_fptr() // lam39894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39895 = arg_buffer[1];
//reading env and args
void* x3948639740 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39590 = (decode_clo(env39895))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39590);
arg_buffer[2] = x3948639740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39590))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39894 = encode_clo(alloc_clo(lam39894_fptr, 0));

void* lam39896_fptr() // lam39896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39897 = arg_buffer[1];
//reading env and args
void* a3949139750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39590 = (decode_clo(env39897))[3];
//not do dummy comment
void* cons = (decode_clo(env39897))[2];
//not do dummy comment
void* a3948939746 = (decode_clo(env39897))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39590;
arg_buffer[3] = a3948939746;
arg_buffer[4] = a3949139750;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39896 = encode_clo(alloc_clo(lam39896_fptr, 0));

void* lam39898_fptr() // lam39898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39899 = arg_buffer[1];
//reading env and args
void* a3949039748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39590 = (decode_clo(env39899))[5];
//not do dummy comment
void* op = (decode_clo(env39899))[4];
//not do dummy comment
void* filter = (decode_clo(env39899))[3];
//not do dummy comment
void* cons = (decode_clo(env39899))[2];
//not do dummy comment
void* a3948939746 = (decode_clo(env39899))[1];

//creating new closure instance
void** clo40872 = alloc_clo(lam39896_fptr, 3);

//setting env list
clo40872[1] = a3948939746;
clo40872[2] = cons;
clo40872[3] = kont39590;
void* f3959239749 = encode_clo(clo40872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3959239749;
arg_buffer[3] = op;
arg_buffer[4] = a3949039748;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39898 = encode_clo(alloc_clo(lam39898_fptr, 0));

void* lam39900_fptr() // lam39900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39901 = arg_buffer[1];
//reading env and args
void* a3948939746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39901))[6];
//not do dummy comment
void* kont39590 = (decode_clo(env39901))[5];
//not do dummy comment
void* lst = (decode_clo(env39901))[4];
//not do dummy comment
void* op = (decode_clo(env39901))[3];
//not do dummy comment
void* filter = (decode_clo(env39901))[2];
//not do dummy comment
void* cons = (decode_clo(env39901))[1];

//creating new closure instance
void** clo40874 = alloc_clo(lam39898_fptr, 5);

//setting env list
clo40874[1] = a3948939746;
clo40874[2] = cons;
clo40874[3] = filter;
clo40874[4] = op;
clo40874[5] = kont39590;
void* f3959339747 = encode_clo(clo40874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3959339747;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39900 = encode_clo(alloc_clo(lam39900_fptr, 0));

void* lam39902_fptr() // lam39902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39903 = arg_buffer[1];
//reading env and args
void* a3949239752 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39590 = (decode_clo(env39903))[3];
//not do dummy comment
void* op = (decode_clo(env39903))[2];
//not do dummy comment
void* filter = (decode_clo(env39903))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont39590;
arg_buffer[3] = op;
arg_buffer[4] = a3949239752;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39902 = encode_clo(alloc_clo(lam39902_fptr, 0));

void* lam39904_fptr() // lam39904 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39905 = arg_buffer[1];
//reading env and args
void* a3948839744 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39905))[7];
//not do dummy comment
void* kont39590 = (decode_clo(env39905))[6];
//not do dummy comment
void* lst = (decode_clo(env39905))[5];
//not do dummy comment
void* op = (decode_clo(env39905))[4];
//not do dummy comment
void* cons = (decode_clo(env39905))[3];
//not do dummy comment
void* filter = (decode_clo(env39905))[2];
//not do dummy comment
void* car = (decode_clo(env39905))[1];

//if-clause
bool if_guard40875 = is_true(a3948839744);
if(if_guard40875)
{

//creating new closure instance
void** clo40877 = alloc_clo(lam39900_fptr, 6);

//setting env list
clo40877[1] = cons;
clo40877[2] = filter;
clo40877[3] = op;
clo40877[4] = lst;
clo40877[5] = kont39590;
clo40877[6] = cdr;
void* f3959439745 = encode_clo(clo40877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3959439745;
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
void** clo40879 = alloc_clo(lam39902_fptr, 3);

//setting env list
clo40879[1] = filter;
clo40879[2] = op;
clo40879[3] = kont39590;
void* f3959539751 = encode_clo(clo40879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3959539751;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39904 = encode_clo(alloc_clo(lam39904_fptr, 0));

void* lam39906_fptr() // lam39906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39907 = arg_buffer[1];
//reading env and args
void* a3948739742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39907))[7];
//not do dummy comment
void* kont39590 = (decode_clo(env39907))[6];
//not do dummy comment
void* lst = (decode_clo(env39907))[5];
//not do dummy comment
void* op = (decode_clo(env39907))[4];
//not do dummy comment
void* cons = (decode_clo(env39907))[3];
//not do dummy comment
void* filter = (decode_clo(env39907))[2];
//not do dummy comment
void* car = (decode_clo(env39907))[1];

//creating new closure instance
void** clo40881 = alloc_clo(lam39904_fptr, 7);

//setting env list
clo40881[1] = car;
clo40881[2] = filter;
clo40881[3] = cons;
clo40881[4] = op;
clo40881[5] = lst;
clo40881[6] = kont39590;
clo40881[7] = cdr;
void* f3959639743 = encode_clo(clo40881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3959639743;
arg_buffer[3] = a3948739742;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39906 = encode_clo(alloc_clo(lam39906_fptr, 0));

void* lam39908_fptr() // lam39908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39909 = arg_buffer[1];
//reading env and args
void* a3948539738 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39590 = (decode_clo(env39909))[8];
//not do dummy comment
void* lst = (decode_clo(env39909))[7];
//not do dummy comment
void* op = (decode_clo(env39909))[6];
//not do dummy comment
void* cons = (decode_clo(env39909))[5];
//not do dummy comment
void* list = (decode_clo(env39909))[4];
//not do dummy comment
void* cdr = (decode_clo(env39909))[3];
//not do dummy comment
void* filter = (decode_clo(env39909))[2];
//not do dummy comment
void* car = (decode_clo(env39909))[1];

//if-clause
bool if_guard40882 = is_true(a3948539738);
if(if_guard40882)
{

//creating new closure instance
void** clo40884 = alloc_clo(lam39894_fptr, 1);

//setting env list
clo40884[1] = kont39590;
void* f3959139739 = encode_clo(clo40884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3959139739;
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
void** clo40886 = alloc_clo(lam39906_fptr, 7);

//setting env list
clo40886[1] = car;
clo40886[2] = filter;
clo40886[3] = cons;
clo40886[4] = op;
clo40886[5] = lst;
clo40886[6] = kont39590;
clo40886[7] = cdr;
void* f3959739741 = encode_clo(clo40886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3959739741;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39908 = encode_clo(alloc_clo(lam39908_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39910 = arg_buffer[1];
//reading env and args
void* kont39590 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40888 = alloc_clo(lam39908_fptr, 8);

//setting env list
clo40888[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo40888[2] = filter;
clo40888[3] = cdr;
clo40888[4] = list;
clo40888[5] = cons;
clo40888[6] = op;
clo40888[7] = lst;
clo40888[8] = kont39590;
void* f3959839737 = encode_clo(clo40888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3959839737;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam39911_fptr() // lam39911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39912 = arg_buffer[1];
//reading env and args
void* a3949739760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env39912))[3];
//not do dummy comment
void* a3949539757 = (decode_clo(env39912))[2];
//not do dummy comment
void* kont39599 = (decode_clo(env39912))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont39599;
arg_buffer[3] = a3949539757;
arg_buffer[4] = a3949739760;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39911 = encode_clo(alloc_clo(lam39911_fptr, 0));

void* lam39914_fptr() // lam39914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39915 = arg_buffer[1];
//reading env and args
void* a3949539757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env39915))[4];
//not do dummy comment
void* kont39599 = (decode_clo(env39915))[3];
//not do dummy comment
void* n = (decode_clo(env39915))[2];
//not do dummy comment
void* _u45 = (decode_clo(env39915))[1];
mpz_t* mpzvar40889 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40889, "1", 10);
void* a3949639758 = encode_mpz(mpzvar40889);

//creating new closure instance
void** clo40891 = alloc_clo(lam39911_fptr, 3);

//setting env list
clo40891[1] = kont39599;
clo40891[2] = a3949539757;
clo40891[3] = drop;
void* f3960039759 = encode_clo(clo40891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3960039759;
arg_buffer[3] = n;
arg_buffer[4] = a3949639758;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39914 = encode_clo(alloc_clo(lam39914_fptr, 0));

void* lam39916_fptr() // lam39916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39917 = arg_buffer[1];
//reading env and args
void* a3949439755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39917))[6];
//not do dummy comment
void* kont39599 = (decode_clo(env39917))[5];
//not do dummy comment
void* n = (decode_clo(env39917))[4];
//not do dummy comment
void* _u45 = (decode_clo(env39917))[3];
//not do dummy comment
void* lst = (decode_clo(env39917))[2];
//not do dummy comment
void* drop = (decode_clo(env39917))[1];

//if-clause
bool if_guard40892 = is_true(a3949439755);
if(if_guard40892)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39599);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39599))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40894 = alloc_clo(lam39914_fptr, 4);

//setting env list
clo40894[1] = _u45;
clo40894[2] = n;
clo40894[3] = kont39599;
clo40894[4] = drop;
void* f3960139756 = encode_clo(clo40894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3960139756;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39916 = encode_clo(alloc_clo(lam39916_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39919 = arg_buffer[1];
//reading env and args
void* kont39599 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar40895 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40895, "0", 10);
void* a3949339753 = encode_mpz(mpzvar40895);

//creating new closure instance
void** clo40897 = alloc_clo(lam39916_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo40897[1] = drop;
clo40897[2] = lst;
clo40897[3] = _u45;
clo40897[4] = n;
clo40897[5] = kont39599;
clo40897[6] = cdr;
void* f3960239754 = encode_clo(clo40897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3960239754;
arg_buffer[3] = n;
arg_buffer[4] = a3949339753;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam39920_fptr() // lam39920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39921 = arg_buffer[1];
//reading env and args
void* a3950139768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39603 = (decode_clo(env39921))[3];
//not do dummy comment
void* a3949939764 = (decode_clo(env39921))[2];
//not do dummy comment
void* proc = (decode_clo(env39921))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont39603;
arg_buffer[3] = a3949939764;
arg_buffer[4] = a3950139768;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39920 = encode_clo(alloc_clo(lam39920_fptr, 0));

void* lam39922_fptr() // lam39922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39923 = arg_buffer[1];
//reading env and args
void* a3950039766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39603 = (decode_clo(env39923))[5];
//not do dummy comment
void* a3949939764 = (decode_clo(env39923))[4];
//not do dummy comment
void* foldr = (decode_clo(env39923))[3];
//not do dummy comment
void* proc = (decode_clo(env39923))[2];
//not do dummy comment
void* acc = (decode_clo(env39923))[1];

//creating new closure instance
void** clo40899 = alloc_clo(lam39920_fptr, 3);

//setting env list
clo40899[1] = proc;
clo40899[2] = a3949939764;
clo40899[3] = kont39603;
void* f3960439767 = encode_clo(clo40899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3960439767;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3950039766;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39922 = encode_clo(alloc_clo(lam39922_fptr, 0));

void* lam39924_fptr() // lam39924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39925 = arg_buffer[1];
//reading env and args
void* a3949939764 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39603 = (decode_clo(env39925))[6];
//not do dummy comment
void* cdr = (decode_clo(env39925))[5];
//not do dummy comment
void* foldr = (decode_clo(env39925))[4];
//not do dummy comment
void* lst = (decode_clo(env39925))[3];
//not do dummy comment
void* proc = (decode_clo(env39925))[2];
//not do dummy comment
void* acc = (decode_clo(env39925))[1];

//creating new closure instance
void** clo40901 = alloc_clo(lam39922_fptr, 5);

//setting env list
clo40901[1] = acc;
clo40901[2] = proc;
clo40901[3] = foldr;
clo40901[4] = a3949939764;
clo40901[5] = kont39603;
void* f3960539765 = encode_clo(clo40901);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3960539765;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39924 = encode_clo(alloc_clo(lam39924_fptr, 0));

void* lam39926_fptr() // lam39926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39927 = arg_buffer[1];
//reading env and args
void* a3949839762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env39927))[7];
//not do dummy comment
void* kont39603 = (decode_clo(env39927))[6];
//not do dummy comment
void* cdr = (decode_clo(env39927))[5];
//not do dummy comment
void* foldr = (decode_clo(env39927))[4];
//not do dummy comment
void* lst = (decode_clo(env39927))[3];
//not do dummy comment
void* proc = (decode_clo(env39927))[2];
//not do dummy comment
void* acc = (decode_clo(env39927))[1];

//if-clause
bool if_guard40902 = is_true(a3949839762);
if(if_guard40902)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39603);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39603))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40904 = alloc_clo(lam39924_fptr, 6);

//setting env list
clo40904[1] = acc;
clo40904[2] = proc;
clo40904[3] = lst;
clo40904[4] = foldr;
clo40904[5] = cdr;
clo40904[6] = kont39603;
void* f3960639763 = encode_clo(clo40904);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3960639763;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39926 = encode_clo(alloc_clo(lam39926_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39928 = arg_buffer[1];
//reading env and args
void* kont39603 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo40906 = alloc_clo(lam39926_fptr, 7);

//setting env list
clo40906[1] = acc;
clo40906[2] = proc;
clo40906[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo40906[4] = foldr;
clo40906[5] = cdr;
clo40906[6] = kont39603;
clo40906[7] = car;
void* f3960739761 = encode_clo(clo40906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3960739761;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam39929_fptr() // lam39929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39930 = arg_buffer[1];
//reading env and args
void* a3950539776 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39608 = (decode_clo(env39930))[3];
//not do dummy comment
void* a3950339772 = (decode_clo(env39930))[2];
//not do dummy comment
void* cons = (decode_clo(env39930))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39608;
arg_buffer[3] = a3950339772;
arg_buffer[4] = a3950539776;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39929 = encode_clo(alloc_clo(lam39929_fptr, 0));

void* lam39931_fptr() // lam39931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39932 = arg_buffer[1];
//reading env and args
void* a3950439774 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39608 = (decode_clo(env39932))[5];
//not do dummy comment
void* append = (decode_clo(env39932))[4];
//not do dummy comment
void* a3950339772 = (decode_clo(env39932))[3];
//not do dummy comment
void* lst2 = (decode_clo(env39932))[2];
//not do dummy comment
void* cons = (decode_clo(env39932))[1];

//creating new closure instance
void** clo40908 = alloc_clo(lam39929_fptr, 3);

//setting env list
clo40908[1] = cons;
clo40908[2] = a3950339772;
clo40908[3] = kont39608;
void* f3960939775 = encode_clo(clo40908);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3960939775;
arg_buffer[3] = a3950439774;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39931 = encode_clo(alloc_clo(lam39931_fptr, 0));

void* lam39933_fptr() // lam39933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39934 = arg_buffer[1];
//reading env and args
void* a3950339772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39934))[6];
//not do dummy comment
void* kont39608 = (decode_clo(env39934))[5];
//not do dummy comment
void* append = (decode_clo(env39934))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39934))[3];
//not do dummy comment
void* lst1 = (decode_clo(env39934))[2];
//not do dummy comment
void* cons = (decode_clo(env39934))[1];

//creating new closure instance
void** clo40910 = alloc_clo(lam39931_fptr, 5);

//setting env list
clo40910[1] = cons;
clo40910[2] = lst2;
clo40910[3] = a3950339772;
clo40910[4] = append;
clo40910[5] = kont39608;
void* f3961039773 = encode_clo(clo40910);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3961039773;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39933 = encode_clo(alloc_clo(lam39933_fptr, 0));

void* lam39935_fptr() // lam39935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39936 = arg_buffer[1];
//reading env and args
void* a3950239770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39936))[7];
//not do dummy comment
void* kont39608 = (decode_clo(env39936))[6];
//not do dummy comment
void* append = (decode_clo(env39936))[5];
//not do dummy comment
void* lst2 = (decode_clo(env39936))[4];
//not do dummy comment
void* cons = (decode_clo(env39936))[3];
//not do dummy comment
void* lst1 = (decode_clo(env39936))[2];
//not do dummy comment
void* car = (decode_clo(env39936))[1];

//if-clause
bool if_guard40911 = is_true(a3950239770);
if(if_guard40911)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39608);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39608))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40913 = alloc_clo(lam39933_fptr, 6);

//setting env list
clo40913[1] = cons;
clo40913[2] = lst1;
clo40913[3] = lst2;
clo40913[4] = append;
clo40913[5] = kont39608;
clo40913[6] = cdr;
void* f3961139771 = encode_clo(clo40913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3961139771;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39935 = encode_clo(alloc_clo(lam39935_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39937 = arg_buffer[1];
//reading env and args
void* kont39608 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40915 = alloc_clo(lam39935_fptr, 7);

//setting env list
clo40915[1] = car;
clo40915[2] = lst1;
clo40915[3] = cons;
clo40915[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo40915[5] = append;
clo40915[6] = kont39608;
clo40915[7] = cdr;
void* f3961239769 = encode_clo(clo40915);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3961239769;
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
void* _39938 = arg_buffer[1];
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

void* kont3961339777 = prim_car(lst);
void* lst39778 = prim_cdr(lst);
void* x3950639779 = apply_prim_hash(lst39778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3961339777);
arg_buffer[2] = x3950639779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3961339777))[0]);
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
void* _39939 = arg_buffer[1];
//reading env and args
void* kont39615 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3950739780 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39615);
arg_buffer[2] = x3950739780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39615))[0]);
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
void* _39940 = arg_buffer[1];
//reading env and args
void* kont39616 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3950839781 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39616);
arg_buffer[2] = x3950839781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39616))[0]);
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
void* _39941 = arg_buffer[1];
//reading env and args
void* kont39617 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3950939782 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39617);
arg_buffer[2] = x3950939782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39617))[0]);
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
void* _39942 = arg_buffer[1];
//reading env and args
void* kont39618 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3951039783 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39618);
arg_buffer[2] = x3951039783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39618))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam39944_fptr() // lam39944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39945 = arg_buffer[1];
//reading env and args
void* a3951539789 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39619 = (decode_clo(env39945))[2];
//not do dummy comment
void* hash_u45has_u45key_u63 = (decode_clo(env39945))[1];
mpz_t* mpzvar40916 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40916, "5", 10);
void* a3951639790 = encode_mpz(mpzvar40916);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45has_u45key_u63);
arg_buffer[2] = kont39619;
arg_buffer[3] = a3951539789;
arg_buffer[4] = a3951639790;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39944 = encode_clo(alloc_clo(lam39944_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39950 = arg_buffer[1];
//reading env and args
void* kont39619 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar40917 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40917, "100", 10);
void* a3951139784 = encode_mpz(mpzvar40917);
mpz_t* mpzvar40918 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40918, "80", 10);
void* a3951239785 = encode_mpz(mpzvar40918);
mpz_t* mpzvar40919 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40919, "10", 10);
void* a3951339786 = encode_mpz(mpzvar40919);
mpz_t* mpzvar40920 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40920, "2", 10);
void* a3951439787 = encode_mpz(mpzvar40920);

//creating new closure instance
void** clo40922 = alloc_clo(lam39944_fptr, 2);

//setting env list
clo40922[1] = hash_u45has_u45key_u63;
clo40922[2] = kont39619;
void* f3962039788 = encode_clo(clo40922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f3962039788;
arg_buffer[3] = a3951139784;
arg_buffer[4] = a3951239785;
arg_buffer[5] = a3951339786;
arg_buffer[6] = a3951439787;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam39951_fptr() // lam39951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39952 = arg_buffer[1];
//reading env and args
void* x3951739792 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39621 = (decode_clo(env39952))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39621);
arg_buffer[2] = x3951739792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39621))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39951 = encode_clo(alloc_clo(lam39951_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39953 = arg_buffer[1];
//reading env and args
void* kont39621 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo40924 = alloc_clo(lam39951_fptr, 1);

//setting env list
clo40924[1] = kont39621;
void* f3962239791 = encode_clo(clo40924);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f3962239791;
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

