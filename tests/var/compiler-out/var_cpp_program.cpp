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
void* _44805 = arg_buffer[1];
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

void* kont4450944626 = prim_car(lst);
void* lst44627 = prim_cdr(lst);
void* x4440744628 = apply_prim__u43(lst44627);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4450944626);
arg_buffer[2] = x4440744628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4450944626))[0]);
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
void* _44806 = arg_buffer[1];
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

void* kont4451144629 = prim_car(lst);
void* lst44630 = prim_cdr(lst);
void* x4440844631 = apply_prim_max(lst44630);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4451144629);
arg_buffer[2] = x4440844631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4451144629))[0]);
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
void* _44807 = arg_buffer[1];
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

void* kont4451344632 = prim_car(lst);
void* lst44633 = prim_cdr(lst);
void* x4440944634 = apply_prim__u45(lst44633);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4451344632);
arg_buffer[2] = x4440944634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4451344632))[0]);
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
void* _44808 = arg_buffer[1];
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

void* kont4451544635 = prim_car(lst);
void* lst44636 = prim_cdr(lst);
void* x4441044637 = apply_prim__u42(lst44636);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4451544635);
arg_buffer[2] = x4441044637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4451544635))[0]);
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
void* _44809 = arg_buffer[1];
//reading env and args
void* kont44517 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4441144638 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44517);
arg_buffer[2] = x4441144638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44517))[0]);
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
void* _44810 = arg_buffer[1];
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

void* kont4451844639 = prim_car(lst);
void* lst44640 = prim_cdr(lst);
void* x4441244641 = apply_prim__u47(lst44640);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4451844639);
arg_buffer[2] = x4441244641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4451844639))[0]);
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
void* _44811 = arg_buffer[1];
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

void* kont4452044642 = prim_car(lst);
void* lst44643 = prim_cdr(lst);
void* x4441344644 = apply_prim__u61(lst44643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4452044642);
arg_buffer[2] = x4441344644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4452044642))[0]);
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
void* _44812 = arg_buffer[1];
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

void* kont4452244645 = prim_car(lst);
void* lst44646 = prim_cdr(lst);
void* x4441444647 = apply_prim__u62(lst44646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4452244645);
arg_buffer[2] = x4441444647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4452244645))[0]);
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
void* _44813 = arg_buffer[1];
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

void* kont4452444648 = prim_car(lst);
void* lst44649 = prim_cdr(lst);
void* x4441544650 = apply_prim__u60(lst44649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4452444648);
arg_buffer[2] = x4441544650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4452444648))[0]);
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
void* _44814 = arg_buffer[1];
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

void* kont4452644651 = prim_car(lst);
void* lst44652 = prim_cdr(lst);
void* x4441644653 = apply_prim__u60_u61(lst44652);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4452644651);
arg_buffer[2] = x4441644653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4452644651))[0]);
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
void* _44815 = arg_buffer[1];
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

void* kont4452844654 = prim_car(lst);
void* lst44655 = prim_cdr(lst);
void* x4441744656 = apply_prim__u62_u61(lst44655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4452844654);
arg_buffer[2] = x4441744656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4452844654))[0]);
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
void* _44816 = arg_buffer[1];
//reading env and args
void* kont44530 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4441844657 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44530);
arg_buffer[2] = x4441844657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44530))[0]);
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
void* _44817 = arg_buffer[1];
//reading env and args
void* kont44531 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4441944658 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44531);
arg_buffer[2] = x4441944658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44531))[0]);
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
void* _44818 = arg_buffer[1];
//reading env and args
void* kont44532 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4442044659 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44532);
arg_buffer[2] = x4442044659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44532))[0]);
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
void* _44819 = arg_buffer[1];
//reading env and args
void* kont44533 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4442144660 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44533);
arg_buffer[2] = x4442144660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44533))[0]);
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
void* _44820 = arg_buffer[1];
//reading env and args
void* kont44534 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4442244661 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44534);
arg_buffer[2] = x4442244661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44534))[0]);
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
void* _44821 = arg_buffer[1];
//reading env and args
void* kont44535 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4442344662 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44535);
arg_buffer[2] = x4442344662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44535))[0]);
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
void* _44822 = arg_buffer[1];
//reading env and args
void* kont44536 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4442444663 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44536);
arg_buffer[2] = x4442444663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44536))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam44823_fptr() // lam44823 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44824 = arg_buffer[1];
//reading env and args
void* a4442744667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4442544664 = (decode_clo(env44824))[3];
//not do dummy comment
void* kont44537 = (decode_clo(env44824))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env44824))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont44537;
arg_buffer[3] = a4442544664;
arg_buffer[4] = a4442744667;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44823 = encode_clo(alloc_clo(lam44823_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44827 = arg_buffer[1];
//reading env and args
void* kont44537 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar44975 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44975, "0", 10);
void* a4442544664 = encode_mpz(mpzvar44975);
mpz_t* mpzvar44976 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44976, "2", 10);
void* a4442644665 = encode_mpz(mpzvar44976);

//creating new closure instance
void** clo44978 = alloc_clo(lam44823_fptr, 3);

//setting env list
clo44978[1] = equal_u63;
clo44978[2] = kont44537;
clo44978[3] = a4442544664;
void* f4453844666 = encode_clo(clo44978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4453844666;
arg_buffer[3] = x;
arg_buffer[4] = a4442644665;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam44828_fptr() // lam44828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44829 = arg_buffer[1];
//reading env and args
void* a4443044671 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env44829))[3];
//not do dummy comment
void* kont44539 = (decode_clo(env44829))[2];
//not do dummy comment
void* a4442844668 = (decode_clo(env44829))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont44539;
arg_buffer[3] = a4442844668;
arg_buffer[4] = a4443044671;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44828 = encode_clo(alloc_clo(lam44828_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44832 = arg_buffer[1];
//reading env and args
void* kont44539 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar44979 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44979, "1", 10);
void* a4442844668 = encode_mpz(mpzvar44979);
mpz_t* mpzvar44980 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar44980, "2", 10);
void* a4442944669 = encode_mpz(mpzvar44980);

//creating new closure instance
void** clo44982 = alloc_clo(lam44828_fptr, 3);

//setting env list
clo44982[1] = a4442844668;
clo44982[2] = kont44539;
clo44982[3] = equal_u63;
void* f4454044670 = encode_clo(clo44982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4454044670;
arg_buffer[3] = x;
arg_buffer[4] = a4442944669;
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
void* _44833 = arg_buffer[1];
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

void* kont4454144672 = prim_car(x);
void* x44673 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4454144672);
arg_buffer[2] = x44673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4454144672))[0]);
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
void* _44834 = arg_buffer[1];
//reading env and args
void* kont44543 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4443144674 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44543);
arg_buffer[2] = x4443144674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44543))[0]);
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
void* _44835 = arg_buffer[1];
//reading env and args
void* kont44544 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4443244675 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44544);
arg_buffer[2] = x4443244675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44544))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam44838_fptr() // lam44838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44839 = arg_buffer[1];
//reading env and args
void* a4443844685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44545 = (decode_clo(env44839))[3];
//not do dummy comment
void* x = (decode_clo(env44839))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env44839))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont44545;
arg_buffer[3] = x;
arg_buffer[4] = a4443844685;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44838 = encode_clo(alloc_clo(lam44838_fptr, 0));

void* lam44840_fptr() // lam44840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44841 = arg_buffer[1];
//reading env and args
void* a4443644682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44841))[5];
//not do dummy comment
void* x = (decode_clo(env44841))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env44841))[3];
//not do dummy comment
void* kont44545 = (decode_clo(env44841))[2];
//not do dummy comment
void* cdr = (decode_clo(env44841))[1];

//if-clause
bool if_guard44983 = is_true(a4443644682);
if(if_guard44983)
{
void* x4443744683 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44545);
arg_buffer[2] = x4443744683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44545))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44985 = alloc_clo(lam44838_fptr, 3);

//setting env list
clo44985[1] = member_u63;
clo44985[2] = x;
clo44985[3] = kont44545;
void* f4454644684 = encode_clo(clo44985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4454644684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44840 = encode_clo(alloc_clo(lam44840_fptr, 0));

void* lam44842_fptr() // lam44842 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44843 = arg_buffer[1];
//reading env and args
void* a4443544680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44843))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env44843))[5];
//not do dummy comment
void* x = (decode_clo(env44843))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env44843))[3];
//not do dummy comment
void* kont44545 = (decode_clo(env44843))[2];
//not do dummy comment
void* cdr = (decode_clo(env44843))[1];

//creating new closure instance
void** clo44987 = alloc_clo(lam44840_fptr, 5);

//setting env list
clo44987[1] = cdr;
clo44987[2] = kont44545;
clo44987[3] = member_u63;
clo44987[4] = x;
clo44987[5] = lst;
void* f4454744681 = encode_clo(clo44987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4454744681;
arg_buffer[3] = a4443544680;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44842 = encode_clo(alloc_clo(lam44842_fptr, 0));

void* lam44844_fptr() // lam44844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44845 = arg_buffer[1];
//reading env and args
void* a4443344677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44845))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env44845))[6];
//not do dummy comment
void* x = (decode_clo(env44845))[5];
//not do dummy comment
void* car = (decode_clo(env44845))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env44845))[3];
//not do dummy comment
void* kont44545 = (decode_clo(env44845))[2];
//not do dummy comment
void* cdr = (decode_clo(env44845))[1];

//if-clause
bool if_guard44988 = is_true(a4443344677);
if(if_guard44988)
{
void* x4443444678 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44545);
arg_buffer[2] = x4443444678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44545))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44990 = alloc_clo(lam44842_fptr, 6);

//setting env list
clo44990[1] = cdr;
clo44990[2] = kont44545;
clo44990[3] = member_u63;
clo44990[4] = x;
clo44990[5] = equal_u63;
clo44990[6] = lst;
void* f4454844679 = encode_clo(clo44990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4454844679;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44844 = encode_clo(alloc_clo(lam44844_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44846 = arg_buffer[1];
//reading env and args
void* kont44545 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo44992 = alloc_clo(lam44844_fptr, 7);

//setting env list
clo44992[1] = cdr;
clo44992[2] = kont44545;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo44992[3] = member_u63;
clo44992[4] = car;
clo44992[5] = x;
clo44992[6] = equal_u63;
clo44992[7] = lst;
void* f4454944676 = encode_clo(clo44992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4454944676;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam44847_fptr() // lam44847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44848 = arg_buffer[1];
//reading env and args
void* a4444244693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4444144691 = (decode_clo(env44848))[4];
//not do dummy comment
void* kont44550 = (decode_clo(env44848))[3];
//not do dummy comment
void* fun = (decode_clo(env44848))[2];
//not do dummy comment
void* foldl = (decode_clo(env44848))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont44550;
arg_buffer[3] = fun;
arg_buffer[4] = a4444144691;
arg_buffer[5] = a4444244693;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44847 = encode_clo(alloc_clo(lam44847_fptr, 0));

void* lam44849_fptr() // lam44849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44850 = arg_buffer[1];
//reading env and args
void* a4444144691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44850))[5];
//not do dummy comment
void* lst = (decode_clo(env44850))[4];
//not do dummy comment
void* kont44550 = (decode_clo(env44850))[3];
//not do dummy comment
void* fun = (decode_clo(env44850))[2];
//not do dummy comment
void* foldl = (decode_clo(env44850))[1];

//creating new closure instance
void** clo44994 = alloc_clo(lam44847_fptr, 4);

//setting env list
clo44994[1] = foldl;
clo44994[2] = fun;
clo44994[3] = kont44550;
clo44994[4] = a4444144691;
void* f4455144692 = encode_clo(clo44994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4455144692;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44849 = encode_clo(alloc_clo(lam44849_fptr, 0));

void* lam44851_fptr() // lam44851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44852 = arg_buffer[1];
//reading env and args
void* a4444044689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44852))[6];
//not do dummy comment
void* lst = (decode_clo(env44852))[5];
//not do dummy comment
void* kont44550 = (decode_clo(env44852))[4];
//not do dummy comment
void* fun = (decode_clo(env44852))[3];
//not do dummy comment
void* acc = (decode_clo(env44852))[2];
//not do dummy comment
void* foldl = (decode_clo(env44852))[1];

//creating new closure instance
void** clo44996 = alloc_clo(lam44849_fptr, 5);

//setting env list
clo44996[1] = foldl;
clo44996[2] = fun;
clo44996[3] = kont44550;
clo44996[4] = lst;
clo44996[5] = cdr;
void* f4455244690 = encode_clo(clo44996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4455244690;
arg_buffer[3] = a4444044689;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44851 = encode_clo(alloc_clo(lam44851_fptr, 0));

void* lam44853_fptr() // lam44853 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44854 = arg_buffer[1];
//reading env and args
void* a4443944687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44854))[7];
//not do dummy comment
void* lst = (decode_clo(env44854))[6];
//not do dummy comment
void* kont44550 = (decode_clo(env44854))[5];
//not do dummy comment
void* fun = (decode_clo(env44854))[4];
//not do dummy comment
void* acc = (decode_clo(env44854))[3];
//not do dummy comment
void* car = (decode_clo(env44854))[2];
//not do dummy comment
void* foldl = (decode_clo(env44854))[1];

//if-clause
bool if_guard44997 = is_true(a4443944687);
if(if_guard44997)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44550);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44550))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo44999 = alloc_clo(lam44851_fptr, 6);

//setting env list
clo44999[1] = foldl;
clo44999[2] = acc;
clo44999[3] = fun;
clo44999[4] = kont44550;
clo44999[5] = lst;
clo44999[6] = cdr;
void* f4455344688 = encode_clo(clo44999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4455344688;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44853 = encode_clo(alloc_clo(lam44853_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44855 = arg_buffer[1];
//reading env and args
void* kont44550 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45001 = alloc_clo(lam44853_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo45001[1] = foldl;
clo45001[2] = car;
clo45001[3] = acc;
clo45001[4] = fun;
clo45001[5] = kont44550;
clo45001[6] = lst;
clo45001[7] = cdr;
void* f4455444686 = encode_clo(clo45001);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4455444686;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam44856_fptr() // lam44856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44857 = arg_buffer[1];
//reading env and args
void* a4444644701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44857))[3];
//not do dummy comment
void* a4444444697 = (decode_clo(env44857))[2];
//not do dummy comment
void* kont44555 = (decode_clo(env44857))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont44555;
arg_buffer[3] = a4444444697;
arg_buffer[4] = a4444644701;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44856 = encode_clo(alloc_clo(lam44856_fptr, 0));

void* lam44858_fptr() // lam44858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44859 = arg_buffer[1];
//reading env and args
void* a4444544699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44859))[5];
//not do dummy comment
void* a4444444697 = (decode_clo(env44859))[4];
//not do dummy comment
void* kont44555 = (decode_clo(env44859))[3];
//not do dummy comment
void* lst2 = (decode_clo(env44859))[2];
//not do dummy comment
void* cons = (decode_clo(env44859))[1];

//creating new closure instance
void** clo45003 = alloc_clo(lam44856_fptr, 3);

//setting env list
clo45003[1] = kont44555;
clo45003[2] = a4444444697;
clo45003[3] = reverse_u45helper;
void* f4455644700 = encode_clo(clo45003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4455644700;
arg_buffer[3] = a4444544699;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44858 = encode_clo(alloc_clo(lam44858_fptr, 0));

void* lam44860_fptr() // lam44860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44861 = arg_buffer[1];
//reading env and args
void* a4444444697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44861))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44861))[5];
//not do dummy comment
void* kont44555 = (decode_clo(env44861))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44861))[3];
//not do dummy comment
void* car = (decode_clo(env44861))[2];
//not do dummy comment
void* cons = (decode_clo(env44861))[1];

//creating new closure instance
void** clo45005 = alloc_clo(lam44858_fptr, 5);

//setting env list
clo45005[1] = cons;
clo45005[2] = lst2;
clo45005[3] = kont44555;
clo45005[4] = a4444444697;
clo45005[5] = reverse_u45helper;
void* f4455744698 = encode_clo(clo45005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4455744698;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44860 = encode_clo(alloc_clo(lam44860_fptr, 0));

void* lam44862_fptr() // lam44862 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44863 = arg_buffer[1];
//reading env and args
void* a4444344695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44863))[7];
//not do dummy comment
void* lst = (decode_clo(env44863))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44863))[5];
//not do dummy comment
void* kont44555 = (decode_clo(env44863))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44863))[3];
//not do dummy comment
void* car = (decode_clo(env44863))[2];
//not do dummy comment
void* cons = (decode_clo(env44863))[1];

//if-clause
bool if_guard45006 = is_true(a4444344695);
if(if_guard45006)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44555);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44555))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45008 = alloc_clo(lam44860_fptr, 6);

//setting env list
clo45008[1] = cons;
clo45008[2] = car;
clo45008[3] = lst2;
clo45008[4] = kont44555;
clo45008[5] = reverse_u45helper;
clo45008[6] = lst;
void* f4455844696 = encode_clo(clo45008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4455844696;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44862 = encode_clo(alloc_clo(lam44862_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44864 = arg_buffer[1];
//reading env and args
void* kont44555 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45010 = alloc_clo(lam44862_fptr, 7);

//setting env list
clo45010[1] = cons;
clo45010[2] = car;
clo45010[3] = lst2;
clo45010[4] = kont44555;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo45010[5] = reverse_u45helper;
clo45010[6] = lst;
clo45010[7] = cdr;
void* f4455944694 = encode_clo(clo45010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4455944694;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam44865_fptr() // lam44865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44866 = arg_buffer[1];
//reading env and args
void* a4444744703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44866))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env44866))[2];
//not do dummy comment
void* kont44560 = (decode_clo(env44866))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont44560;
arg_buffer[3] = lst;
arg_buffer[4] = a4444744703;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44865 = encode_clo(alloc_clo(lam44865_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44867 = arg_buffer[1];
//reading env and args
void* kont44560 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45012 = alloc_clo(lam44865_fptr, 3);

//setting env list
clo45012[1] = kont44560;
clo45012[2] = reverse_u45helper;
clo45012[3] = lst;
void* f4456144702 = encode_clo(clo45012);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4456144702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam44868_fptr() // lam44868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44869 = arg_buffer[1];
//reading env and args
void* x4445044708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44562 = (decode_clo(env44869))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44562);
arg_buffer[2] = x4445044708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44562))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44868 = encode_clo(alloc_clo(lam44868_fptr, 0));

void* lam44870_fptr() // lam44870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44871 = arg_buffer[1];
//reading env and args
void* a4445544717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44562 = (decode_clo(env44871))[4];
//not do dummy comment
void* a4445144710 = (decode_clo(env44871))[3];
//not do dummy comment
void* a4445344713 = (decode_clo(env44871))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env44871))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont44562;
arg_buffer[3] = a4445144710;
arg_buffer[4] = a4445344713;
arg_buffer[5] = a4445544717;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44870 = encode_clo(alloc_clo(lam44870_fptr, 0));

void* lam44872_fptr() // lam44872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44873 = arg_buffer[1];
//reading env and args
void* a4445444715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44562 = (decode_clo(env44873))[6];
//not do dummy comment
void* a4445144710 = (decode_clo(env44873))[5];
//not do dummy comment
void* a4445344713 = (decode_clo(env44873))[4];
//not do dummy comment
void* cons = (decode_clo(env44873))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env44873))[2];
//not do dummy comment
void* lst2 = (decode_clo(env44873))[1];

//creating new closure instance
void** clo45014 = alloc_clo(lam44870_fptr, 4);

//setting env list
clo45014[1] = take_u45helper;
clo45014[2] = a4445344713;
clo45014[3] = a4445144710;
clo45014[4] = kont44562;
void* f4456444716 = encode_clo(clo45014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4456444716;
arg_buffer[3] = a4445444715;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44872 = encode_clo(alloc_clo(lam44872_fptr, 0));

void* lam44874_fptr() // lam44874 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44875 = arg_buffer[1];
//reading env and args
void* a4445344713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44562 = (decode_clo(env44875))[7];
//not do dummy comment
void* lst = (decode_clo(env44875))[6];
//not do dummy comment
void* a4445144710 = (decode_clo(env44875))[5];
//not do dummy comment
void* car = (decode_clo(env44875))[4];
//not do dummy comment
void* cons = (decode_clo(env44875))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env44875))[2];
//not do dummy comment
void* lst2 = (decode_clo(env44875))[1];

//creating new closure instance
void** clo45016 = alloc_clo(lam44872_fptr, 6);

//setting env list
clo45016[1] = lst2;
clo45016[2] = take_u45helper;
clo45016[3] = cons;
clo45016[4] = a4445344713;
clo45016[5] = a4445144710;
clo45016[6] = kont44562;
void* f4456544714 = encode_clo(clo45016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4456544714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44874 = encode_clo(alloc_clo(lam44874_fptr, 0));

void* lam44877_fptr() // lam44877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44878 = arg_buffer[1];
//reading env and args
void* a4445144710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44562 = (decode_clo(env44878))[8];
//not do dummy comment
void* lst = (decode_clo(env44878))[7];
//not do dummy comment
void* cons = (decode_clo(env44878))[6];
//not do dummy comment
void* _u45 = (decode_clo(env44878))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44878))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44878))[3];
//not do dummy comment
void* n = (decode_clo(env44878))[2];
//not do dummy comment
void* car = (decode_clo(env44878))[1];
mpz_t* mpzvar45017 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45017, "1", 10);
void* a4445244711 = encode_mpz(mpzvar45017);

//creating new closure instance
void** clo45019 = alloc_clo(lam44874_fptr, 7);

//setting env list
clo45019[1] = lst2;
clo45019[2] = take_u45helper;
clo45019[3] = cons;
clo45019[4] = car;
clo45019[5] = a4445144710;
clo45019[6] = lst;
clo45019[7] = kont44562;
void* f4456644712 = encode_clo(clo45019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4456644712;
arg_buffer[3] = n;
arg_buffer[4] = a4445244711;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44877 = encode_clo(alloc_clo(lam44877_fptr, 0));

void* lam44879_fptr() // lam44879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44880 = arg_buffer[1];
//reading env and args
void* a4444944706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44880))[10];
//not do dummy comment
void* kont44562 = (decode_clo(env44880))[9];
//not do dummy comment
void* lst = (decode_clo(env44880))[8];
//not do dummy comment
void* reverse = (decode_clo(env44880))[7];
//not do dummy comment
void* cons = (decode_clo(env44880))[6];
//not do dummy comment
void* _u45 = (decode_clo(env44880))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env44880))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44880))[3];
//not do dummy comment
void* n = (decode_clo(env44880))[2];
//not do dummy comment
void* car = (decode_clo(env44880))[1];

//if-clause
bool if_guard45020 = is_true(a4444944706);
if(if_guard45020)
{

//creating new closure instance
void** clo45022 = alloc_clo(lam44868_fptr, 1);

//setting env list
clo45022[1] = kont44562;
void* f4456344707 = encode_clo(clo45022);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4456344707;
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
void** clo45024 = alloc_clo(lam44877_fptr, 8);

//setting env list
clo45024[1] = car;
clo45024[2] = n;
clo45024[3] = lst2;
clo45024[4] = take_u45helper;
clo45024[5] = _u45;
clo45024[6] = cons;
clo45024[7] = lst;
clo45024[8] = kont44562;
void* f4456744709 = encode_clo(clo45024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4456744709;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44879 = encode_clo(alloc_clo(lam44879_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44882 = arg_buffer[1];
//reading env and args
void* kont44562 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar45025 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45025, "0", 10);
void* a4444844704 = encode_mpz(mpzvar45025);

//creating new closure instance
void** clo45027 = alloc_clo(lam44879_fptr, 10);

//setting env list
clo45027[1] = car;
clo45027[2] = n;
clo45027[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo45027[4] = take_u45helper;
clo45027[5] = _u45;
clo45027[6] = cons;
clo45027[7] = reverse;
clo45027[8] = lst;
clo45027[9] = kont44562;
clo45027[10] = cdr;
void* f4456844705 = encode_clo(clo45027);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4456844705;
arg_buffer[3] = n;
arg_buffer[4] = a4444844704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam44883_fptr() // lam44883 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44884 = arg_buffer[1];
//reading env and args
void* a4445644719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44884))[4];
//not do dummy comment
void* kont44569 = (decode_clo(env44884))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env44884))[2];
//not do dummy comment
void* n = (decode_clo(env44884))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont44569;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4445644719;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44883 = encode_clo(alloc_clo(lam44883_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44885 = arg_buffer[1];
//reading env and args
void* kont44569 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45029 = alloc_clo(lam44883_fptr, 4);

//setting env list
clo45029[1] = n;
clo45029[2] = take_u45helper;
clo45029[3] = kont44569;
clo45029[4] = lst;
void* f4457044718 = encode_clo(clo45029);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4457044718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam44887_fptr() // lam44887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44888 = arg_buffer[1];
//reading env and args
void* a4446144727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4445944723 = (decode_clo(env44888))[3];
//not do dummy comment
void* _u43 = (decode_clo(env44888))[2];
//not do dummy comment
void* kont44571 = (decode_clo(env44888))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont44571;
arg_buffer[3] = a4445944723;
arg_buffer[4] = a4446144727;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44887 = encode_clo(alloc_clo(lam44887_fptr, 0));

void* lam44889_fptr() // lam44889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44890 = arg_buffer[1];
//reading env and args
void* a4446044725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4445944723 = (decode_clo(env44890))[4];
//not do dummy comment
void* length = (decode_clo(env44890))[3];
//not do dummy comment
void* _u43 = (decode_clo(env44890))[2];
//not do dummy comment
void* kont44571 = (decode_clo(env44890))[1];

//creating new closure instance
void** clo45031 = alloc_clo(lam44887_fptr, 3);

//setting env list
clo45031[1] = kont44571;
clo45031[2] = _u43;
clo45031[3] = a4445944723;
void* f4457244726 = encode_clo(clo45031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4457244726;
arg_buffer[3] = a4446044725;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44889 = encode_clo(alloc_clo(lam44889_fptr, 0));

void* lam44892_fptr() // lam44892 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44893 = arg_buffer[1];
//reading env and args
void* a4445744721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44893))[5];
//not do dummy comment
void* lst = (decode_clo(env44893))[4];
//not do dummy comment
void* length = (decode_clo(env44893))[3];
//not do dummy comment
void* _u43 = (decode_clo(env44893))[2];
//not do dummy comment
void* kont44571 = (decode_clo(env44893))[1];

//if-clause
bool if_guard45032 = is_true(a4445744721);
if(if_guard45032)
{
mpz_t* mpzvar45033 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45033, "0", 10);
void* x4445844722 = encode_mpz(mpzvar45033);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44571);
arg_buffer[2] = x4445844722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44571))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar45034 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45034, "1", 10);
void* a4445944723 = encode_mpz(mpzvar45034);

//creating new closure instance
void** clo45036 = alloc_clo(lam44889_fptr, 4);

//setting env list
clo45036[1] = kont44571;
clo45036[2] = _u43;
clo45036[3] = length;
clo45036[4] = a4445944723;
void* f4457344724 = encode_clo(clo45036);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4457344724;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44892 = encode_clo(alloc_clo(lam44892_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44894 = arg_buffer[1];
//reading env and args
void* kont44571 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45038 = alloc_clo(lam44892_fptr, 5);

//setting env list
clo45038[1] = kont44571;
clo45038[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo45038[3] = length;
clo45038[4] = lst;
clo45038[5] = cdr;
void* f4457444720 = encode_clo(clo45038);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4457444720;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam44895_fptr() // lam44895 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44896 = arg_buffer[1];
//reading env and args
void* x4446344731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44575 = (decode_clo(env44896))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44575);
arg_buffer[2] = x4446344731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44575))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44895 = encode_clo(alloc_clo(lam44895_fptr, 0));

void* lam44897_fptr() // lam44897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44898 = arg_buffer[1];
//reading env and args
void* a4446744739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env44898))[3];
//not do dummy comment
void* a4446544735 = (decode_clo(env44898))[2];
//not do dummy comment
void* kont44575 = (decode_clo(env44898))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44575;
arg_buffer[3] = a4446544735;
arg_buffer[4] = a4446744739;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44897 = encode_clo(alloc_clo(lam44897_fptr, 0));

void* lam44899_fptr() // lam44899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44900 = arg_buffer[1];
//reading env and args
void* a4446644737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env44900))[5];
//not do dummy comment
void* proc = (decode_clo(env44900))[4];
//not do dummy comment
void* cons = (decode_clo(env44900))[3];
//not do dummy comment
void* a4446544735 = (decode_clo(env44900))[2];
//not do dummy comment
void* kont44575 = (decode_clo(env44900))[1];

//creating new closure instance
void** clo45040 = alloc_clo(lam44897_fptr, 3);

//setting env list
clo45040[1] = kont44575;
clo45040[2] = a4446544735;
clo45040[3] = cons;
void* f4457744738 = encode_clo(clo45040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4457744738;
arg_buffer[3] = proc;
arg_buffer[4] = a4446644737;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44899 = encode_clo(alloc_clo(lam44899_fptr, 0));

void* lam44901_fptr() // lam44901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44902 = arg_buffer[1];
//reading env and args
void* a4446544735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44902))[6];
//not do dummy comment
void* lst = (decode_clo(env44902))[5];
//not do dummy comment
void* map = (decode_clo(env44902))[4];
//not do dummy comment
void* proc = (decode_clo(env44902))[3];
//not do dummy comment
void* cons = (decode_clo(env44902))[2];
//not do dummy comment
void* kont44575 = (decode_clo(env44902))[1];

//creating new closure instance
void** clo45042 = alloc_clo(lam44899_fptr, 5);

//setting env list
clo45042[1] = kont44575;
clo45042[2] = a4446544735;
clo45042[3] = cons;
clo45042[4] = proc;
clo45042[5] = map;
void* f4457844736 = encode_clo(clo45042);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4457844736;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44901 = encode_clo(alloc_clo(lam44901_fptr, 0));

void* lam44903_fptr() // lam44903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44904 = arg_buffer[1];
//reading env and args
void* a4446444733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44904))[6];
//not do dummy comment
void* lst = (decode_clo(env44904))[5];
//not do dummy comment
void* map = (decode_clo(env44904))[4];
//not do dummy comment
void* proc = (decode_clo(env44904))[3];
//not do dummy comment
void* cons = (decode_clo(env44904))[2];
//not do dummy comment
void* kont44575 = (decode_clo(env44904))[1];

//creating new closure instance
void** clo45044 = alloc_clo(lam44901_fptr, 6);

//setting env list
clo45044[1] = kont44575;
clo45044[2] = cons;
clo45044[3] = proc;
clo45044[4] = map;
clo45044[5] = lst;
clo45044[6] = cdr;
void* f4457944734 = encode_clo(clo45044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4457944734;
arg_buffer[3] = a4446444733;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44903 = encode_clo(alloc_clo(lam44903_fptr, 0));

void* lam44905_fptr() // lam44905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44906 = arg_buffer[1];
//reading env and args
void* a4446244729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44906))[8];
//not do dummy comment
void* map = (decode_clo(env44906))[7];
//not do dummy comment
void* proc = (decode_clo(env44906))[6];
//not do dummy comment
void* car = (decode_clo(env44906))[5];
//not do dummy comment
void* list = (decode_clo(env44906))[4];
//not do dummy comment
void* cdr = (decode_clo(env44906))[3];
//not do dummy comment
void* cons = (decode_clo(env44906))[2];
//not do dummy comment
void* kont44575 = (decode_clo(env44906))[1];

//if-clause
bool if_guard45045 = is_true(a4446244729);
if(if_guard45045)
{

//creating new closure instance
void** clo45047 = alloc_clo(lam44895_fptr, 1);

//setting env list
clo45047[1] = kont44575;
void* f4457644730 = encode_clo(clo45047);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4457644730;
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
void** clo45049 = alloc_clo(lam44903_fptr, 6);

//setting env list
clo45049[1] = kont44575;
clo45049[2] = cons;
clo45049[3] = proc;
clo45049[4] = map;
clo45049[5] = lst;
clo45049[6] = cdr;
void* f4458044732 = encode_clo(clo45049);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4458044732;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44905 = encode_clo(alloc_clo(lam44905_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44907 = arg_buffer[1];
//reading env and args
void* kont44575 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45051 = alloc_clo(lam44905_fptr, 8);

//setting env list
clo45051[1] = kont44575;
clo45051[2] = cons;
clo45051[3] = cdr;
clo45051[4] = list;
clo45051[5] = car;
clo45051[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo45051[7] = map;
clo45051[8] = lst;
void* f4458144728 = encode_clo(clo45051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4458144728;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam44908_fptr() // lam44908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44909 = arg_buffer[1];
//reading env and args
void* x4446944743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44582 = (decode_clo(env44909))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44582);
arg_buffer[2] = x4446944743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44582))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44908 = encode_clo(alloc_clo(lam44908_fptr, 0));

void* lam44910_fptr() // lam44910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44911 = arg_buffer[1];
//reading env and args
void* a4447444753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44582 = (decode_clo(env44911))[3];
//not do dummy comment
void* a4447244749 = (decode_clo(env44911))[2];
//not do dummy comment
void* cons = (decode_clo(env44911))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44582;
arg_buffer[3] = a4447244749;
arg_buffer[4] = a4447444753;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44910 = encode_clo(alloc_clo(lam44910_fptr, 0));

void* lam44912_fptr() // lam44912 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44913 = arg_buffer[1];
//reading env and args
void* a4447344751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44582 = (decode_clo(env44913))[5];
//not do dummy comment
void* op = (decode_clo(env44913))[4];
//not do dummy comment
void* a4447244749 = (decode_clo(env44913))[3];
//not do dummy comment
void* filter = (decode_clo(env44913))[2];
//not do dummy comment
void* cons = (decode_clo(env44913))[1];

//creating new closure instance
void** clo45053 = alloc_clo(lam44910_fptr, 3);

//setting env list
clo45053[1] = cons;
clo45053[2] = a4447244749;
clo45053[3] = kont44582;
void* f4458444752 = encode_clo(clo45053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4458444752;
arg_buffer[3] = op;
arg_buffer[4] = a4447344751;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44912 = encode_clo(alloc_clo(lam44912_fptr, 0));

void* lam44914_fptr() // lam44914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44915 = arg_buffer[1];
//reading env and args
void* a4447244749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44915))[6];
//not do dummy comment
void* lst = (decode_clo(env44915))[5];
//not do dummy comment
void* kont44582 = (decode_clo(env44915))[4];
//not do dummy comment
void* op = (decode_clo(env44915))[3];
//not do dummy comment
void* filter = (decode_clo(env44915))[2];
//not do dummy comment
void* cons = (decode_clo(env44915))[1];

//creating new closure instance
void** clo45055 = alloc_clo(lam44912_fptr, 5);

//setting env list
clo45055[1] = cons;
clo45055[2] = filter;
clo45055[3] = a4447244749;
clo45055[4] = op;
clo45055[5] = kont44582;
void* f4458544750 = encode_clo(clo45055);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4458544750;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44914 = encode_clo(alloc_clo(lam44914_fptr, 0));

void* lam44916_fptr() // lam44916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44917 = arg_buffer[1];
//reading env and args
void* a4447544755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44582 = (decode_clo(env44917))[3];
//not do dummy comment
void* op = (decode_clo(env44917))[2];
//not do dummy comment
void* filter = (decode_clo(env44917))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont44582;
arg_buffer[3] = op;
arg_buffer[4] = a4447544755;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44916 = encode_clo(alloc_clo(lam44916_fptr, 0));

void* lam44918_fptr() // lam44918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44919 = arg_buffer[1];
//reading env and args
void* a4447144747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44919))[7];
//not do dummy comment
void* lst = (decode_clo(env44919))[6];
//not do dummy comment
void* kont44582 = (decode_clo(env44919))[5];
//not do dummy comment
void* op = (decode_clo(env44919))[4];
//not do dummy comment
void* cons = (decode_clo(env44919))[3];
//not do dummy comment
void* filter = (decode_clo(env44919))[2];
//not do dummy comment
void* car = (decode_clo(env44919))[1];

//if-clause
bool if_guard45056 = is_true(a4447144747);
if(if_guard45056)
{

//creating new closure instance
void** clo45058 = alloc_clo(lam44914_fptr, 6);

//setting env list
clo45058[1] = cons;
clo45058[2] = filter;
clo45058[3] = op;
clo45058[4] = kont44582;
clo45058[5] = lst;
clo45058[6] = cdr;
void* f4458644748 = encode_clo(clo45058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4458644748;
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
void** clo45060 = alloc_clo(lam44916_fptr, 3);

//setting env list
clo45060[1] = filter;
clo45060[2] = op;
clo45060[3] = kont44582;
void* f4458744754 = encode_clo(clo45060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4458744754;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44918 = encode_clo(alloc_clo(lam44918_fptr, 0));

void* lam44920_fptr() // lam44920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44921 = arg_buffer[1];
//reading env and args
void* a4447044745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44921))[7];
//not do dummy comment
void* lst = (decode_clo(env44921))[6];
//not do dummy comment
void* kont44582 = (decode_clo(env44921))[5];
//not do dummy comment
void* op = (decode_clo(env44921))[4];
//not do dummy comment
void* cons = (decode_clo(env44921))[3];
//not do dummy comment
void* filter = (decode_clo(env44921))[2];
//not do dummy comment
void* car = (decode_clo(env44921))[1];

//creating new closure instance
void** clo45062 = alloc_clo(lam44918_fptr, 7);

//setting env list
clo45062[1] = car;
clo45062[2] = filter;
clo45062[3] = cons;
clo45062[4] = op;
clo45062[5] = kont44582;
clo45062[6] = lst;
clo45062[7] = cdr;
void* f4458844746 = encode_clo(clo45062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4458844746;
arg_buffer[3] = a4447044745;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44920 = encode_clo(alloc_clo(lam44920_fptr, 0));

void* lam44922_fptr() // lam44922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44923 = arg_buffer[1];
//reading env and args
void* a4446844741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env44923))[8];
//not do dummy comment
void* kont44582 = (decode_clo(env44923))[7];
//not do dummy comment
void* op = (decode_clo(env44923))[6];
//not do dummy comment
void* cons = (decode_clo(env44923))[5];
//not do dummy comment
void* list = (decode_clo(env44923))[4];
//not do dummy comment
void* cdr = (decode_clo(env44923))[3];
//not do dummy comment
void* filter = (decode_clo(env44923))[2];
//not do dummy comment
void* car = (decode_clo(env44923))[1];

//if-clause
bool if_guard45063 = is_true(a4446844741);
if(if_guard45063)
{

//creating new closure instance
void** clo45065 = alloc_clo(lam44908_fptr, 1);

//setting env list
clo45065[1] = kont44582;
void* f4458344742 = encode_clo(clo45065);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4458344742;
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
void** clo45067 = alloc_clo(lam44920_fptr, 7);

//setting env list
clo45067[1] = car;
clo45067[2] = filter;
clo45067[3] = cons;
clo45067[4] = op;
clo45067[5] = kont44582;
clo45067[6] = lst;
clo45067[7] = cdr;
void* f4458944744 = encode_clo(clo45067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4458944744;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44922 = encode_clo(alloc_clo(lam44922_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44924 = arg_buffer[1];
//reading env and args
void* kont44582 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45069 = alloc_clo(lam44922_fptr, 8);

//setting env list
clo45069[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo45069[2] = filter;
clo45069[3] = cdr;
clo45069[4] = list;
clo45069[5] = cons;
clo45069[6] = op;
clo45069[7] = kont44582;
clo45069[8] = lst;
void* f4459044740 = encode_clo(clo45069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4459044740;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam44925_fptr() // lam44925 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44926 = arg_buffer[1];
//reading env and args
void* a4448044763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env44926))[3];
//not do dummy comment
void* a4447844760 = (decode_clo(env44926))[2];
//not do dummy comment
void* kont44591 = (decode_clo(env44926))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont44591;
arg_buffer[3] = a4447844760;
arg_buffer[4] = a4448044763;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44925 = encode_clo(alloc_clo(lam44925_fptr, 0));

void* lam44928_fptr() // lam44928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44929 = arg_buffer[1];
//reading env and args
void* a4447844760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env44929))[4];
//not do dummy comment
void* n = (decode_clo(env44929))[3];
//not do dummy comment
void* kont44591 = (decode_clo(env44929))[2];
//not do dummy comment
void* _u45 = (decode_clo(env44929))[1];
mpz_t* mpzvar45070 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45070, "1", 10);
void* a4447944761 = encode_mpz(mpzvar45070);

//creating new closure instance
void** clo45072 = alloc_clo(lam44925_fptr, 3);

//setting env list
clo45072[1] = kont44591;
clo45072[2] = a4447844760;
clo45072[3] = drop;
void* f4459244762 = encode_clo(clo45072);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4459244762;
arg_buffer[3] = n;
arg_buffer[4] = a4447944761;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44928 = encode_clo(alloc_clo(lam44928_fptr, 0));

void* lam44930_fptr() // lam44930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44931 = arg_buffer[1];
//reading env and args
void* a4447744758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44931))[6];
//not do dummy comment
void* n = (decode_clo(env44931))[5];
//not do dummy comment
void* kont44591 = (decode_clo(env44931))[4];
//not do dummy comment
void* _u45 = (decode_clo(env44931))[3];
//not do dummy comment
void* lst = (decode_clo(env44931))[2];
//not do dummy comment
void* drop = (decode_clo(env44931))[1];

//if-clause
bool if_guard45073 = is_true(a4447744758);
if(if_guard45073)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44591);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44591))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45075 = alloc_clo(lam44928_fptr, 4);

//setting env list
clo45075[1] = _u45;
clo45075[2] = kont44591;
clo45075[3] = n;
clo45075[4] = drop;
void* f4459344759 = encode_clo(clo45075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4459344759;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44930 = encode_clo(alloc_clo(lam44930_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44933 = arg_buffer[1];
//reading env and args
void* kont44591 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar45076 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45076, "0", 10);
void* a4447644756 = encode_mpz(mpzvar45076);

//creating new closure instance
void** clo45078 = alloc_clo(lam44930_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo45078[1] = drop;
clo45078[2] = lst;
clo45078[3] = _u45;
clo45078[4] = kont44591;
clo45078[5] = n;
clo45078[6] = cdr;
void* f4459444757 = encode_clo(clo45078);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4459444757;
arg_buffer[3] = n;
arg_buffer[4] = a4447644756;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam44934_fptr() // lam44934 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44935 = arg_buffer[1];
//reading env and args
void* a4448444771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44595 = (decode_clo(env44935))[3];
//not do dummy comment
void* proc = (decode_clo(env44935))[2];
//not do dummy comment
void* a4448244767 = (decode_clo(env44935))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont44595;
arg_buffer[3] = a4448244767;
arg_buffer[4] = a4448444771;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44934 = encode_clo(alloc_clo(lam44934_fptr, 0));

void* lam44936_fptr() // lam44936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44937 = arg_buffer[1];
//reading env and args
void* a4448344769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44595 = (decode_clo(env44937))[5];
//not do dummy comment
void* foldr = (decode_clo(env44937))[4];
//not do dummy comment
void* a4448244767 = (decode_clo(env44937))[3];
//not do dummy comment
void* proc = (decode_clo(env44937))[2];
//not do dummy comment
void* acc = (decode_clo(env44937))[1];

//creating new closure instance
void** clo45080 = alloc_clo(lam44934_fptr, 3);

//setting env list
clo45080[1] = a4448244767;
clo45080[2] = proc;
clo45080[3] = kont44595;
void* f4459644770 = encode_clo(clo45080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4459644770;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4448344769;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44936 = encode_clo(alloc_clo(lam44936_fptr, 0));

void* lam44938_fptr() // lam44938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44939 = arg_buffer[1];
//reading env and args
void* a4448244767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44939))[6];
//not do dummy comment
void* kont44595 = (decode_clo(env44939))[5];
//not do dummy comment
void* foldr = (decode_clo(env44939))[4];
//not do dummy comment
void* lst = (decode_clo(env44939))[3];
//not do dummy comment
void* proc = (decode_clo(env44939))[2];
//not do dummy comment
void* acc = (decode_clo(env44939))[1];

//creating new closure instance
void** clo45082 = alloc_clo(lam44936_fptr, 5);

//setting env list
clo45082[1] = acc;
clo45082[2] = proc;
clo45082[3] = a4448244767;
clo45082[4] = foldr;
clo45082[5] = kont44595;
void* f4459744768 = encode_clo(clo45082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4459744768;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44938 = encode_clo(alloc_clo(lam44938_fptr, 0));

void* lam44940_fptr() // lam44940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44941 = arg_buffer[1];
//reading env and args
void* a4448144765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44941))[7];
//not do dummy comment
void* kont44595 = (decode_clo(env44941))[6];
//not do dummy comment
void* car = (decode_clo(env44941))[5];
//not do dummy comment
void* foldr = (decode_clo(env44941))[4];
//not do dummy comment
void* lst = (decode_clo(env44941))[3];
//not do dummy comment
void* proc = (decode_clo(env44941))[2];
//not do dummy comment
void* acc = (decode_clo(env44941))[1];

//if-clause
bool if_guard45083 = is_true(a4448144765);
if(if_guard45083)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44595);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44595))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45085 = alloc_clo(lam44938_fptr, 6);

//setting env list
clo45085[1] = acc;
clo45085[2] = proc;
clo45085[3] = lst;
clo45085[4] = foldr;
clo45085[5] = kont44595;
clo45085[6] = cdr;
void* f4459844766 = encode_clo(clo45085);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4459844766;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44940 = encode_clo(alloc_clo(lam44940_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44942 = arg_buffer[1];
//reading env and args
void* kont44595 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45087 = alloc_clo(lam44940_fptr, 7);

//setting env list
clo45087[1] = acc;
clo45087[2] = proc;
clo45087[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo45087[4] = foldr;
clo45087[5] = car;
clo45087[6] = kont44595;
clo45087[7] = cdr;
void* f4459944764 = encode_clo(clo45087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4459944764;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam44943_fptr() // lam44943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44944 = arg_buffer[1];
//reading env and args
void* a4448844779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4448644775 = (decode_clo(env44944))[3];
//not do dummy comment
void* kont44600 = (decode_clo(env44944))[2];
//not do dummy comment
void* cons = (decode_clo(env44944))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont44600;
arg_buffer[3] = a4448644775;
arg_buffer[4] = a4448844779;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44943 = encode_clo(alloc_clo(lam44943_fptr, 0));

void* lam44945_fptr() // lam44945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44946 = arg_buffer[1];
//reading env and args
void* a4448744777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4448644775 = (decode_clo(env44946))[5];
//not do dummy comment
void* kont44600 = (decode_clo(env44946))[4];
//not do dummy comment
void* append = (decode_clo(env44946))[3];
//not do dummy comment
void* lst2 = (decode_clo(env44946))[2];
//not do dummy comment
void* cons = (decode_clo(env44946))[1];

//creating new closure instance
void** clo45089 = alloc_clo(lam44943_fptr, 3);

//setting env list
clo45089[1] = cons;
clo45089[2] = kont44600;
clo45089[3] = a4448644775;
void* f4460144778 = encode_clo(clo45089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4460144778;
arg_buffer[3] = a4448744777;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44945 = encode_clo(alloc_clo(lam44945_fptr, 0));

void* lam44947_fptr() // lam44947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44948 = arg_buffer[1];
//reading env and args
void* a4448644775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44948))[6];
//not do dummy comment
void* kont44600 = (decode_clo(env44948))[5];
//not do dummy comment
void* append = (decode_clo(env44948))[4];
//not do dummy comment
void* lst2 = (decode_clo(env44948))[3];
//not do dummy comment
void* lst1 = (decode_clo(env44948))[2];
//not do dummy comment
void* cons = (decode_clo(env44948))[1];

//creating new closure instance
void** clo45091 = alloc_clo(lam44945_fptr, 5);

//setting env list
clo45091[1] = cons;
clo45091[2] = lst2;
clo45091[3] = append;
clo45091[4] = kont44600;
clo45091[5] = a4448644775;
void* f4460244776 = encode_clo(clo45091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4460244776;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44947 = encode_clo(alloc_clo(lam44947_fptr, 0));

void* lam44949_fptr() // lam44949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44950 = arg_buffer[1];
//reading env and args
void* a4448544773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env44950))[7];
//not do dummy comment
void* kont44600 = (decode_clo(env44950))[6];
//not do dummy comment
void* append = (decode_clo(env44950))[5];
//not do dummy comment
void* lst2 = (decode_clo(env44950))[4];
//not do dummy comment
void* cons = (decode_clo(env44950))[3];
//not do dummy comment
void* lst1 = (decode_clo(env44950))[2];
//not do dummy comment
void* car = (decode_clo(env44950))[1];

//if-clause
bool if_guard45092 = is_true(a4448544773);
if(if_guard45092)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44600);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44600))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45094 = alloc_clo(lam44947_fptr, 6);

//setting env list
clo45094[1] = cons;
clo45094[2] = lst1;
clo45094[3] = lst2;
clo45094[4] = append;
clo45094[5] = kont44600;
clo45094[6] = cdr;
void* f4460344774 = encode_clo(clo45094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4460344774;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam44949 = encode_clo(alloc_clo(lam44949_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44951 = arg_buffer[1];
//reading env and args
void* kont44600 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45096 = alloc_clo(lam44949_fptr, 7);

//setting env list
clo45096[1] = car;
clo45096[2] = lst1;
clo45096[3] = cons;
clo45096[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo45096[5] = append;
clo45096[6] = kont44600;
clo45096[7] = cdr;
void* f4460444772 = encode_clo(clo45096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4460444772;
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
void* _44952 = arg_buffer[1];
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

void* kont4460544780 = prim_car(lst);
void* lst44781 = prim_cdr(lst);
void* x4448944782 = apply_prim_hash(lst44781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4460544780);
arg_buffer[2] = x4448944782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4460544780))[0]);
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
void* _44953 = arg_buffer[1];
//reading env and args
void* kont44607 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4449044783 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44607);
arg_buffer[2] = x4449044783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44607))[0]);
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
void* _44954 = arg_buffer[1];
//reading env and args
void* kont44608 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4449144784 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44608);
arg_buffer[2] = x4449144784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44608))[0]);
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
void* _44955 = arg_buffer[1];
//reading env and args
void* kont44609 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4449244785 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44609);
arg_buffer[2] = x4449244785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44609))[0]);
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
void* _44956 = arg_buffer[1];
//reading env and args
void* kont44610 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4449344786 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44610);
arg_buffer[2] = x4449344786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44610))[0]);
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
void* _44957 = arg_buffer[1];
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

void* kont4461144787 = prim_car(lst);
void* lst44788 = prim_cdr(lst);
void* x4449444789 = apply_prim_set(lst44788);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4461144787);
arg_buffer[2] = x4449444789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4461144787))[0]);
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
void* _44958 = arg_buffer[1];
//reading env and args
void* kont44613 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4449544790 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44613);
arg_buffer[2] = x4449544790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44613))[0]);
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
void* _44959 = arg_buffer[1];
//reading env and args
void* kont44614 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4449644791 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44614);
arg_buffer[2] = x4449644791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44614))[0]);
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
void* _44960 = arg_buffer[1];
//reading env and args
void* kont44615 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4449744792 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44615);
arg_buffer[2] = x4449744792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44615))[0]);
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
void* _44961 = arg_buffer[1];
//reading env and args
void* kont44616 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4449844793 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44616);
arg_buffer[2] = x4449844793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44616))[0]);
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
void* _44962 = arg_buffer[1];
//reading env and args
void* kont44617 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4449944794 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44617);
arg_buffer[2] = x4449944794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44617))[0]);
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
void* _44963 = arg_buffer[1];
//reading env and args
void* kont44618 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4450044795 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44618);
arg_buffer[2] = x4450044795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44618))[0]);
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
void* _44964 = arg_buffer[1];
//reading env and args
void* kont44619 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x4450144796 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44619);
arg_buffer[2] = x4450144796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44619))[0]);
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
void* _44965 = arg_buffer[1];
//reading env and args
void* kont44620 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x4450244797 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44620);
arg_buffer[2] = x4450244797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44620))[0]);
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
void* _44966 = arg_buffer[1];
//reading env and args
void* kont44621 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x4450344798 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44621);
arg_buffer[2] = x4450344798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44621))[0]);
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
void* _44967 = arg_buffer[1];
//reading env and args
void* kont44622 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4450444799 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44622);
arg_buffer[2] = x4450444799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44622))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam44968_fptr() // lam44968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env44969 = arg_buffer[1];
//reading env and args
void* x4450544801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont44623 = (decode_clo(env44969))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont44623);
arg_buffer[2] = x4450544801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont44623))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam44968 = encode_clo(alloc_clo(lam44968_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44970 = arg_buffer[1];
//reading env and args
void* kont44623 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
void* z = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45098 = alloc_clo(lam44968_fptr, 1);

//setting env list
clo45098[1] = kont44623;
void* f4462444800 = encode_clo(clo45098);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f4462444800;
arg_buffer[3] = x;
arg_buffer[4] = y;
arg_buffer[5] = z;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _44974 = arg_buffer[1];
//reading env and args
void* kont44625 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar45099 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45099, "1", 10);
void* a4450644802 = encode_mpz(mpzvar45099);
mpz_t* mpzvar45100 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45100, "2", 10);
void* a4450744803 = encode_mpz(mpzvar45100);
mpz_t* mpzvar45101 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45101, "3", 10);
void* a4450844804 = encode_mpz(mpzvar45101);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont44625;
arg_buffer[3] = a4450644802;
arg_buffer[4] = a4450744803;
arg_buffer[5] = a4450844804;
arg_buffer[0] = reinterpret_cast<void*>(5);
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

