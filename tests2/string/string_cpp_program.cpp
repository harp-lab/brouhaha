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
void* _50778 = arg_buffer[1];
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

void* kont5052050620 = prim_car(lst);
void* lst50621 = prim_cdr(lst);
void* x5043550622 = apply_prim__u43(lst50621);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5052050620);
arg_buffer[2] = x5043550622;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5052050620))[0]);
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
void* _50779 = arg_buffer[1];
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

void* kont5052250623 = prim_car(lst);
void* lst50624 = prim_cdr(lst);
void* x5043650625 = apply_prim__u45(lst50624);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5052250623);
arg_buffer[2] = x5043650625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5052250623))[0]);
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
void* _50780 = arg_buffer[1];
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

void* kont5052450626 = prim_car(lst);
void* lst50627 = prim_cdr(lst);
void* x5043750628 = apply_prim__u42(lst50627);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5052450626);
arg_buffer[2] = x5043750628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5052450626))[0]);
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
void* _50781 = arg_buffer[1];
//reading env and args
void* kont50526 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5043850629 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50526);
arg_buffer[2] = x5043850629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50526))[0]);
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
void* _50782 = arg_buffer[1];
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

void* kont5052750630 = prim_car(lst);
void* lst50631 = prim_cdr(lst);
void* x5043950632 = apply_prim__u47(lst50631);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5052750630);
arg_buffer[2] = x5043950632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5052750630))[0]);
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
void* _50783 = arg_buffer[1];
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

void* kont5052950633 = prim_car(lst);
void* lst50634 = prim_cdr(lst);
void* x5044050635 = apply_prim__u61(lst50634);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5052950633);
arg_buffer[2] = x5044050635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5052950633))[0]);
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
void* _50784 = arg_buffer[1];
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

void* kont5053150636 = prim_car(lst);
void* lst50637 = prim_cdr(lst);
void* x5044150638 = apply_prim__u62(lst50637);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5053150636);
arg_buffer[2] = x5044150638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5053150636))[0]);
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
void* _50785 = arg_buffer[1];
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

void* kont5053350639 = prim_car(lst);
void* lst50640 = prim_cdr(lst);
void* x5044250641 = apply_prim__u60(lst50640);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5053350639);
arg_buffer[2] = x5044250641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5053350639))[0]);
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
void* _50786 = arg_buffer[1];
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

void* kont5053550642 = prim_car(lst);
void* lst50643 = prim_cdr(lst);
void* x5044350644 = apply_prim__u60_u61(lst50643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5053550642);
arg_buffer[2] = x5044350644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5053550642))[0]);
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
void* _50787 = arg_buffer[1];
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

void* kont5053750645 = prim_car(lst);
void* lst50646 = prim_cdr(lst);
void* x5044450647 = apply_prim__u62_u61(lst50646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5053750645);
arg_buffer[2] = x5044450647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5053750645))[0]);
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
void* _50788 = arg_buffer[1];
//reading env and args
void* kont50539 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5044550648 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50539);
arg_buffer[2] = x5044550648;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50539))[0]);
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
void* _50789 = arg_buffer[1];
//reading env and args
void* kont50540 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5044650649 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50540);
arg_buffer[2] = x5044650649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50540))[0]);
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
void* _50790 = arg_buffer[1];
//reading env and args
void* kont50541 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5044750650 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50541);
arg_buffer[2] = x5044750650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50541))[0]);
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
void* _50791 = arg_buffer[1];
//reading env and args
void* kont50542 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5044850651 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50542);
arg_buffer[2] = x5044850651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50542))[0]);
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
void* _50792 = arg_buffer[1];
//reading env and args
void* kont50543 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5044950652 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50543);
arg_buffer[2] = x5044950652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50543))[0]);
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
void* _50793 = arg_buffer[1];
//reading env and args
void* kont50544 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5045050653 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50544);
arg_buffer[2] = x5045050653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50544))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam50794_fptr() // lam50794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50795 = arg_buffer[1];
//reading env and args
void* a5045350657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5045150654 = (decode_clo(env50795))[3];
//not do dummy comment
void* kont50545 = (decode_clo(env50795))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env50795))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50545;
arg_buffer[3] = a5045150654;
arg_buffer[4] = a5045350657;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50794 = encode_clo(alloc_clo(lam50794_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50798 = arg_buffer[1];
//reading env and args
void* kont50545 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50931 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50931, "0", 10);
void* a5045150654 = encode_mpz(mpzvar50931);
mpz_t* mpzvar50932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50932, "2", 10);
void* a5045250655 = encode_mpz(mpzvar50932);

//creating new closure instance
void** clo50934 = alloc_clo(lam50794_fptr, 3);

//setting env list
clo50934[1] = equal_u63;
clo50934[2] = kont50545;
clo50934[3] = a5045150654;
void* f5054650656 = encode_clo(clo50934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5054650656;
arg_buffer[3] = x;
arg_buffer[4] = a5045250655;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam50799_fptr() // lam50799 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50800 = arg_buffer[1];
//reading env and args
void* a5045650661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env50800))[3];
//not do dummy comment
void* a5045450658 = (decode_clo(env50800))[2];
//not do dummy comment
void* kont50547 = (decode_clo(env50800))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50547;
arg_buffer[3] = a5045450658;
arg_buffer[4] = a5045650661;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50799 = encode_clo(alloc_clo(lam50799_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50803 = arg_buffer[1];
//reading env and args
void* kont50547 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50935 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50935, "1", 10);
void* a5045450658 = encode_mpz(mpzvar50935);
mpz_t* mpzvar50936 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50936, "2", 10);
void* a5045550659 = encode_mpz(mpzvar50936);

//creating new closure instance
void** clo50938 = alloc_clo(lam50799_fptr, 3);

//setting env list
clo50938[1] = kont50547;
clo50938[2] = a5045450658;
clo50938[3] = equal_u63;
void* f5054850660 = encode_clo(clo50938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5054850660;
arg_buffer[3] = x;
arg_buffer[4] = a5045550659;
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
void* _50804 = arg_buffer[1];
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

void* kont5054950662 = prim_car(x);
void* x50663 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5054950662);
arg_buffer[2] = x50663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5054950662))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam50807_fptr() // lam50807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50808 = arg_buffer[1];
//reading env and args
void* a5046250673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env50808))[3];
//not do dummy comment
void* kont50551 = (decode_clo(env50808))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50808))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont50551;
arg_buffer[3] = x;
arg_buffer[4] = a5046250673;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50807 = encode_clo(alloc_clo(lam50807_fptr, 0));

void* lam50809_fptr() // lam50809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50810 = arg_buffer[1];
//reading env and args
void* a5046050670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50810))[5];
//not do dummy comment
void* lst = (decode_clo(env50810))[4];
//not do dummy comment
void* x = (decode_clo(env50810))[3];
//not do dummy comment
void* kont50551 = (decode_clo(env50810))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50810))[1];

//if-clause
bool if_guard50939 = is_true(a5046050670);
if(if_guard50939)
{
void* x5046150671 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50551);
arg_buffer[2] = x5046150671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50551))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50941 = alloc_clo(lam50807_fptr, 3);

//setting env list
clo50941[1] = member_u63;
clo50941[2] = kont50551;
clo50941[3] = x;
void* f5055250672 = encode_clo(clo50941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5055250672;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50809 = encode_clo(alloc_clo(lam50809_fptr, 0));

void* lam50811_fptr() // lam50811 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50812 = arg_buffer[1];
//reading env and args
void* a5045950668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50812))[6];
//not do dummy comment
void* lst = (decode_clo(env50812))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env50812))[4];
//not do dummy comment
void* x = (decode_clo(env50812))[3];
//not do dummy comment
void* kont50551 = (decode_clo(env50812))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50812))[1];

//creating new closure instance
void** clo50943 = alloc_clo(lam50809_fptr, 5);

//setting env list
clo50943[1] = member_u63;
clo50943[2] = kont50551;
clo50943[3] = x;
clo50943[4] = lst;
clo50943[5] = cdr;
void* f5055350669 = encode_clo(clo50943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5055350669;
arg_buffer[3] = a5045950668;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50811 = encode_clo(alloc_clo(lam50811_fptr, 0));

void* lam50813_fptr() // lam50813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50814 = arg_buffer[1];
//reading env and args
void* a5045750665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50814))[7];
//not do dummy comment
void* lst = (decode_clo(env50814))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env50814))[5];
//not do dummy comment
void* x = (decode_clo(env50814))[4];
//not do dummy comment
void* car = (decode_clo(env50814))[3];
//not do dummy comment
void* kont50551 = (decode_clo(env50814))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50814))[1];

//if-clause
bool if_guard50944 = is_true(a5045750665);
if(if_guard50944)
{
void* x5045850666 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50551);
arg_buffer[2] = x5045850666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50551))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50946 = alloc_clo(lam50811_fptr, 6);

//setting env list
clo50946[1] = member_u63;
clo50946[2] = kont50551;
clo50946[3] = x;
clo50946[4] = equal_u63;
clo50946[5] = lst;
clo50946[6] = cdr;
void* f5055450667 = encode_clo(clo50946);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5055450667;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50813 = encode_clo(alloc_clo(lam50813_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50815 = arg_buffer[1];
//reading env and args
void* kont50551 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50948 = alloc_clo(lam50813_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo50948[1] = member_u63;
clo50948[2] = kont50551;
clo50948[3] = car;
clo50948[4] = x;
clo50948[5] = equal_u63;
clo50948[6] = lst;
clo50948[7] = cdr;
void* f5055550664 = encode_clo(clo50948);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5055550664;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam50816_fptr() // lam50816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50817 = arg_buffer[1];
//reading env and args
void* a5046650681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50556 = (decode_clo(env50817))[4];
//not do dummy comment
void* fun = (decode_clo(env50817))[3];
//not do dummy comment
void* a5046550679 = (decode_clo(env50817))[2];
//not do dummy comment
void* foldl = (decode_clo(env50817))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont50556;
arg_buffer[3] = fun;
arg_buffer[4] = a5046550679;
arg_buffer[5] = a5046650681;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50816 = encode_clo(alloc_clo(lam50816_fptr, 0));

void* lam50818_fptr() // lam50818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50819 = arg_buffer[1];
//reading env and args
void* a5046550679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50819))[5];
//not do dummy comment
void* kont50556 = (decode_clo(env50819))[4];
//not do dummy comment
void* lst = (decode_clo(env50819))[3];
//not do dummy comment
void* fun = (decode_clo(env50819))[2];
//not do dummy comment
void* foldl = (decode_clo(env50819))[1];

//creating new closure instance
void** clo50950 = alloc_clo(lam50816_fptr, 4);

//setting env list
clo50950[1] = foldl;
clo50950[2] = a5046550679;
clo50950[3] = fun;
clo50950[4] = kont50556;
void* f5055750680 = encode_clo(clo50950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5055750680;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50818 = encode_clo(alloc_clo(lam50818_fptr, 0));

void* lam50820_fptr() // lam50820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50821 = arg_buffer[1];
//reading env and args
void* a5046450677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50821))[6];
//not do dummy comment
void* kont50556 = (decode_clo(env50821))[5];
//not do dummy comment
void* lst = (decode_clo(env50821))[4];
//not do dummy comment
void* fun = (decode_clo(env50821))[3];
//not do dummy comment
void* acc = (decode_clo(env50821))[2];
//not do dummy comment
void* foldl = (decode_clo(env50821))[1];

//creating new closure instance
void** clo50952 = alloc_clo(lam50818_fptr, 5);

//setting env list
clo50952[1] = foldl;
clo50952[2] = fun;
clo50952[3] = lst;
clo50952[4] = kont50556;
clo50952[5] = cdr;
void* f5055850678 = encode_clo(clo50952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5055850678;
arg_buffer[3] = a5046450677;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50820 = encode_clo(alloc_clo(lam50820_fptr, 0));

void* lam50822_fptr() // lam50822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50823 = arg_buffer[1];
//reading env and args
void* a5046350675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50823))[7];
//not do dummy comment
void* kont50556 = (decode_clo(env50823))[6];
//not do dummy comment
void* lst = (decode_clo(env50823))[5];
//not do dummy comment
void* fun = (decode_clo(env50823))[4];
//not do dummy comment
void* acc = (decode_clo(env50823))[3];
//not do dummy comment
void* car = (decode_clo(env50823))[2];
//not do dummy comment
void* foldl = (decode_clo(env50823))[1];

//if-clause
bool if_guard50953 = is_true(a5046350675);
if(if_guard50953)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50556);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50556))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50955 = alloc_clo(lam50820_fptr, 6);

//setting env list
clo50955[1] = foldl;
clo50955[2] = acc;
clo50955[3] = fun;
clo50955[4] = lst;
clo50955[5] = kont50556;
clo50955[6] = cdr;
void* f5055950676 = encode_clo(clo50955);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5055950676;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50822 = encode_clo(alloc_clo(lam50822_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50824 = arg_buffer[1];
//reading env and args
void* kont50556 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo50957 = alloc_clo(lam50822_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo50957[1] = foldl;
clo50957[2] = car;
clo50957[3] = acc;
clo50957[4] = fun;
clo50957[5] = lst;
clo50957[6] = kont50556;
clo50957[7] = cdr;
void* f5056050674 = encode_clo(clo50957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5056050674;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam50825_fptr() // lam50825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50826 = arg_buffer[1];
//reading env and args
void* a5047050689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5046850685 = (decode_clo(env50826))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50826))[2];
//not do dummy comment
void* kont50561 = (decode_clo(env50826))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50561;
arg_buffer[3] = a5046850685;
arg_buffer[4] = a5047050689;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50825 = encode_clo(alloc_clo(lam50825_fptr, 0));

void* lam50827_fptr() // lam50827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50828 = arg_buffer[1];
//reading env and args
void* a5046950687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5046850685 = (decode_clo(env50828))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50828))[4];
//not do dummy comment
void* kont50561 = (decode_clo(env50828))[3];
//not do dummy comment
void* lst2 = (decode_clo(env50828))[2];
//not do dummy comment
void* cons = (decode_clo(env50828))[1];

//creating new closure instance
void** clo50959 = alloc_clo(lam50825_fptr, 3);

//setting env list
clo50959[1] = kont50561;
clo50959[2] = reverse_u45helper;
clo50959[3] = a5046850685;
void* f5056250688 = encode_clo(clo50959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5056250688;
arg_buffer[3] = a5046950687;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50827 = encode_clo(alloc_clo(lam50827_fptr, 0));

void* lam50829_fptr() // lam50829 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50830 = arg_buffer[1];
//reading env and args
void* a5046850685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50830))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50830))[5];
//not do dummy comment
void* kont50561 = (decode_clo(env50830))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50830))[3];
//not do dummy comment
void* car = (decode_clo(env50830))[2];
//not do dummy comment
void* cons = (decode_clo(env50830))[1];

//creating new closure instance
void** clo50961 = alloc_clo(lam50827_fptr, 5);

//setting env list
clo50961[1] = cons;
clo50961[2] = lst2;
clo50961[3] = kont50561;
clo50961[4] = reverse_u45helper;
clo50961[5] = a5046850685;
void* f5056350686 = encode_clo(clo50961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5056350686;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50829 = encode_clo(alloc_clo(lam50829_fptr, 0));

void* lam50831_fptr() // lam50831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50832 = arg_buffer[1];
//reading env and args
void* a5046750683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50832))[7];
//not do dummy comment
void* lst = (decode_clo(env50832))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50832))[5];
//not do dummy comment
void* kont50561 = (decode_clo(env50832))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50832))[3];
//not do dummy comment
void* car = (decode_clo(env50832))[2];
//not do dummy comment
void* cons = (decode_clo(env50832))[1];

//if-clause
bool if_guard50962 = is_true(a5046750683);
if(if_guard50962)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50561);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50561))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50964 = alloc_clo(lam50829_fptr, 6);

//setting env list
clo50964[1] = cons;
clo50964[2] = car;
clo50964[3] = lst2;
clo50964[4] = kont50561;
clo50964[5] = reverse_u45helper;
clo50964[6] = lst;
void* f5056450684 = encode_clo(clo50964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5056450684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50831 = encode_clo(alloc_clo(lam50831_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50833 = arg_buffer[1];
//reading env and args
void* kont50561 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50966 = alloc_clo(lam50831_fptr, 7);

//setting env list
clo50966[1] = cons;
clo50966[2] = car;
clo50966[3] = lst2;
clo50966[4] = kont50561;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo50966[5] = reverse_u45helper;
clo50966[6] = lst;
clo50966[7] = cdr;
void* f5056550682 = encode_clo(clo50966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5056550682;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam50834_fptr() // lam50834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50835 = arg_buffer[1];
//reading env and args
void* a5047150691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50835))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50835))[2];
//not do dummy comment
void* kont50566 = (decode_clo(env50835))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50566;
arg_buffer[3] = lst;
arg_buffer[4] = a5047150691;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50834 = encode_clo(alloc_clo(lam50834_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50836 = arg_buffer[1];
//reading env and args
void* kont50566 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50968 = alloc_clo(lam50834_fptr, 3);

//setting env list
clo50968[1] = kont50566;
clo50968[2] = reverse_u45helper;
clo50968[3] = lst;
void* f5056750690 = encode_clo(clo50968);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5056750690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam50837_fptr() // lam50837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50838 = arg_buffer[1];
//reading env and args
void* x5047450696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50568 = (decode_clo(env50838))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50568);
arg_buffer[2] = x5047450696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50568))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50837 = encode_clo(alloc_clo(lam50837_fptr, 0));

void* lam50839_fptr() // lam50839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50840 = arg_buffer[1];
//reading env and args
void* a5047950705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5047550698 = (decode_clo(env50840))[4];
//not do dummy comment
void* a5047750701 = (decode_clo(env50840))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50840))[2];
//not do dummy comment
void* kont50568 = (decode_clo(env50840))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50568;
arg_buffer[3] = a5047550698;
arg_buffer[4] = a5047750701;
arg_buffer[5] = a5047950705;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50839 = encode_clo(alloc_clo(lam50839_fptr, 0));

void* lam50841_fptr() // lam50841 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50842 = arg_buffer[1];
//reading env and args
void* a5047850703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5047550698 = (decode_clo(env50842))[6];
//not do dummy comment
void* a5047750701 = (decode_clo(env50842))[5];
//not do dummy comment
void* cons = (decode_clo(env50842))[4];
//not do dummy comment
void* kont50568 = (decode_clo(env50842))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50842))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50842))[1];

//creating new closure instance
void** clo50970 = alloc_clo(lam50839_fptr, 4);

//setting env list
clo50970[1] = kont50568;
clo50970[2] = take_u45helper;
clo50970[3] = a5047750701;
clo50970[4] = a5047550698;
void* f5057050704 = encode_clo(clo50970);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5057050704;
arg_buffer[3] = a5047850703;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50841 = encode_clo(alloc_clo(lam50841_fptr, 0));

void* lam50843_fptr() // lam50843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50844 = arg_buffer[1];
//reading env and args
void* a5047750701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5047550698 = (decode_clo(env50844))[7];
//not do dummy comment
void* lst = (decode_clo(env50844))[6];
//not do dummy comment
void* car = (decode_clo(env50844))[5];
//not do dummy comment
void* cons = (decode_clo(env50844))[4];
//not do dummy comment
void* kont50568 = (decode_clo(env50844))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50844))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50844))[1];

//creating new closure instance
void** clo50972 = alloc_clo(lam50841_fptr, 6);

//setting env list
clo50972[1] = lst2;
clo50972[2] = take_u45helper;
clo50972[3] = kont50568;
clo50972[4] = cons;
clo50972[5] = a5047750701;
clo50972[6] = a5047550698;
void* f5057150702 = encode_clo(clo50972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5057150702;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50843 = encode_clo(alloc_clo(lam50843_fptr, 0));

void* lam50846_fptr() // lam50846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50847 = arg_buffer[1];
//reading env and args
void* a5047550698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50847))[8];
//not do dummy comment
void* cons = (decode_clo(env50847))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env50847))[6];
//not do dummy comment
void* lst2 = (decode_clo(env50847))[5];
//not do dummy comment
void* n = (decode_clo(env50847))[4];
//not do dummy comment
void* car = (decode_clo(env50847))[3];
//not do dummy comment
void* kont50568 = (decode_clo(env50847))[2];
//not do dummy comment
void* _u45 = (decode_clo(env50847))[1];
mpz_t* mpzvar50973 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50973, "1", 10);
void* a5047650699 = encode_mpz(mpzvar50973);

//creating new closure instance
void** clo50975 = alloc_clo(lam50843_fptr, 7);

//setting env list
clo50975[1] = lst2;
clo50975[2] = take_u45helper;
clo50975[3] = kont50568;
clo50975[4] = cons;
clo50975[5] = car;
clo50975[6] = lst;
clo50975[7] = a5047550698;
void* f5057250700 = encode_clo(clo50975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5057250700;
arg_buffer[3] = n;
arg_buffer[4] = a5047650699;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50846 = encode_clo(alloc_clo(lam50846_fptr, 0));

void* lam50848_fptr() // lam50848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50849 = arg_buffer[1];
//reading env and args
void* a5047350694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50849))[10];
//not do dummy comment
void* lst = (decode_clo(env50849))[9];
//not do dummy comment
void* reverse = (decode_clo(env50849))[8];
//not do dummy comment
void* cons = (decode_clo(env50849))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env50849))[6];
//not do dummy comment
void* lst2 = (decode_clo(env50849))[5];
//not do dummy comment
void* n = (decode_clo(env50849))[4];
//not do dummy comment
void* car = (decode_clo(env50849))[3];
//not do dummy comment
void* kont50568 = (decode_clo(env50849))[2];
//not do dummy comment
void* _u45 = (decode_clo(env50849))[1];

//if-clause
bool if_guard50976 = is_true(a5047350694);
if(if_guard50976)
{

//creating new closure instance
void** clo50978 = alloc_clo(lam50837_fptr, 1);

//setting env list
clo50978[1] = kont50568;
void* f5056950695 = encode_clo(clo50978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5056950695;
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
void** clo50980 = alloc_clo(lam50846_fptr, 8);

//setting env list
clo50980[1] = _u45;
clo50980[2] = kont50568;
clo50980[3] = car;
clo50980[4] = n;
clo50980[5] = lst2;
clo50980[6] = take_u45helper;
clo50980[7] = cons;
clo50980[8] = lst;
void* f5057350697 = encode_clo(clo50980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5057350697;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50848 = encode_clo(alloc_clo(lam50848_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50851 = arg_buffer[1];
//reading env and args
void* kont50568 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar50981 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50981, "0", 10);
void* a5047250692 = encode_mpz(mpzvar50981);

//creating new closure instance
void** clo50983 = alloc_clo(lam50848_fptr, 10);

//setting env list
clo50983[1] = _u45;
clo50983[2] = kont50568;
clo50983[3] = car;
clo50983[4] = n;
clo50983[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo50983[6] = take_u45helper;
clo50983[7] = cons;
clo50983[8] = reverse;
clo50983[9] = lst;
clo50983[10] = cdr;
void* f5057450693 = encode_clo(clo50983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5057450693;
arg_buffer[3] = n;
arg_buffer[4] = a5047250692;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam50852_fptr() // lam50852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50853 = arg_buffer[1];
//reading env and args
void* a5048050707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50853))[4];
//not do dummy comment
void* kont50575 = (decode_clo(env50853))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50853))[2];
//not do dummy comment
void* n = (decode_clo(env50853))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50575;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5048050707;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50852 = encode_clo(alloc_clo(lam50852_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50854 = arg_buffer[1];
//reading env and args
void* kont50575 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50985 = alloc_clo(lam50852_fptr, 4);

//setting env list
clo50985[1] = n;
clo50985[2] = take_u45helper;
clo50985[3] = kont50575;
clo50985[4] = lst;
void* f5057650706 = encode_clo(clo50985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5057650706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam50856_fptr() // lam50856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50857 = arg_buffer[1];
//reading env and args
void* a5048550715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50577 = (decode_clo(env50857))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50857))[2];
//not do dummy comment
void* a5048350711 = (decode_clo(env50857))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont50577;
arg_buffer[3] = a5048350711;
arg_buffer[4] = a5048550715;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50856 = encode_clo(alloc_clo(lam50856_fptr, 0));

void* lam50858_fptr() // lam50858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50859 = arg_buffer[1];
//reading env and args
void* a5048450713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env50859))[4];
//not do dummy comment
void* kont50577 = (decode_clo(env50859))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50859))[2];
//not do dummy comment
void* a5048350711 = (decode_clo(env50859))[1];

//creating new closure instance
void** clo50987 = alloc_clo(lam50856_fptr, 3);

//setting env list
clo50987[1] = a5048350711;
clo50987[2] = _u43;
clo50987[3] = kont50577;
void* f5057850714 = encode_clo(clo50987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5057850714;
arg_buffer[3] = a5048450713;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50858 = encode_clo(alloc_clo(lam50858_fptr, 0));

void* lam50861_fptr() // lam50861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50862 = arg_buffer[1];
//reading env and args
void* a5048150709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50862))[5];
//not do dummy comment
void* lst = (decode_clo(env50862))[4];
//not do dummy comment
void* length = (decode_clo(env50862))[3];
//not do dummy comment
void* kont50577 = (decode_clo(env50862))[2];
//not do dummy comment
void* _u43 = (decode_clo(env50862))[1];

//if-clause
bool if_guard50988 = is_true(a5048150709);
if(if_guard50988)
{
mpz_t* mpzvar50989 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50989, "0", 10);
void* x5048250710 = encode_mpz(mpzvar50989);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50577);
arg_buffer[2] = x5048250710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50577))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar50990 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50990, "1", 10);
void* a5048350711 = encode_mpz(mpzvar50990);

//creating new closure instance
void** clo50992 = alloc_clo(lam50858_fptr, 4);

//setting env list
clo50992[1] = a5048350711;
clo50992[2] = _u43;
clo50992[3] = kont50577;
clo50992[4] = length;
void* f5057950712 = encode_clo(clo50992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5057950712;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50861 = encode_clo(alloc_clo(lam50861_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50863 = arg_buffer[1];
//reading env and args
void* kont50577 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50994 = alloc_clo(lam50861_fptr, 5);

//setting env list
clo50994[1] = _u43;
clo50994[2] = kont50577;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo50994[3] = length;
clo50994[4] = lst;
clo50994[5] = cdr;
void* f5058050708 = encode_clo(clo50994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5058050708;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam50864_fptr() // lam50864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50865 = arg_buffer[1];
//reading env and args
void* x5048750719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50581 = (decode_clo(env50865))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50581);
arg_buffer[2] = x5048750719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50581))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50864 = encode_clo(alloc_clo(lam50864_fptr, 0));

void* lam50866_fptr() // lam50866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50867 = arg_buffer[1];
//reading env and args
void* a5049150727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5048950723 = (decode_clo(env50867))[3];
//not do dummy comment
void* kont50581 = (decode_clo(env50867))[2];
//not do dummy comment
void* cons = (decode_clo(env50867))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50581;
arg_buffer[3] = a5048950723;
arg_buffer[4] = a5049150727;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50866 = encode_clo(alloc_clo(lam50866_fptr, 0));

void* lam50868_fptr() // lam50868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50869 = arg_buffer[1];
//reading env and args
void* a5049050725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env50869))[5];
//not do dummy comment
void* a5048950723 = (decode_clo(env50869))[4];
//not do dummy comment
void* proc = (decode_clo(env50869))[3];
//not do dummy comment
void* kont50581 = (decode_clo(env50869))[2];
//not do dummy comment
void* cons = (decode_clo(env50869))[1];

//creating new closure instance
void** clo50996 = alloc_clo(lam50866_fptr, 3);

//setting env list
clo50996[1] = cons;
clo50996[2] = kont50581;
clo50996[3] = a5048950723;
void* f5058350726 = encode_clo(clo50996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5058350726;
arg_buffer[3] = proc;
arg_buffer[4] = a5049050725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50868 = encode_clo(alloc_clo(lam50868_fptr, 0));

void* lam50870_fptr() // lam50870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50871 = arg_buffer[1];
//reading env and args
void* a5048950723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50871))[6];
//not do dummy comment
void* lst = (decode_clo(env50871))[5];
//not do dummy comment
void* map = (decode_clo(env50871))[4];
//not do dummy comment
void* proc = (decode_clo(env50871))[3];
//not do dummy comment
void* kont50581 = (decode_clo(env50871))[2];
//not do dummy comment
void* cons = (decode_clo(env50871))[1];

//creating new closure instance
void** clo50998 = alloc_clo(lam50868_fptr, 5);

//setting env list
clo50998[1] = cons;
clo50998[2] = kont50581;
clo50998[3] = proc;
clo50998[4] = a5048950723;
clo50998[5] = map;
void* f5058450724 = encode_clo(clo50998);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5058450724;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50870 = encode_clo(alloc_clo(lam50870_fptr, 0));

void* lam50872_fptr() // lam50872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50873 = arg_buffer[1];
//reading env and args
void* a5048850721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50873))[6];
//not do dummy comment
void* lst = (decode_clo(env50873))[5];
//not do dummy comment
void* map = (decode_clo(env50873))[4];
//not do dummy comment
void* proc = (decode_clo(env50873))[3];
//not do dummy comment
void* kont50581 = (decode_clo(env50873))[2];
//not do dummy comment
void* cons = (decode_clo(env50873))[1];

//creating new closure instance
void** clo51000 = alloc_clo(lam50870_fptr, 6);

//setting env list
clo51000[1] = cons;
clo51000[2] = kont50581;
clo51000[3] = proc;
clo51000[4] = map;
clo51000[5] = lst;
clo51000[6] = cdr;
void* f5058550722 = encode_clo(clo51000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5058550722;
arg_buffer[3] = a5048850721;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50872 = encode_clo(alloc_clo(lam50872_fptr, 0));

void* lam50874_fptr() // lam50874 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50875 = arg_buffer[1];
//reading env and args
void* a5048650717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50875))[8];
//not do dummy comment
void* map = (decode_clo(env50875))[7];
//not do dummy comment
void* proc = (decode_clo(env50875))[6];
//not do dummy comment
void* kont50581 = (decode_clo(env50875))[5];
//not do dummy comment
void* car = (decode_clo(env50875))[4];
//not do dummy comment
void* cons = (decode_clo(env50875))[3];
//not do dummy comment
void* list = (decode_clo(env50875))[2];
//not do dummy comment
void* cdr = (decode_clo(env50875))[1];

//if-clause
bool if_guard51001 = is_true(a5048650717);
if(if_guard51001)
{

//creating new closure instance
void** clo51003 = alloc_clo(lam50864_fptr, 1);

//setting env list
clo51003[1] = kont50581;
void* f5058250718 = encode_clo(clo51003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5058250718;
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
void** clo51005 = alloc_clo(lam50872_fptr, 6);

//setting env list
clo51005[1] = cons;
clo51005[2] = kont50581;
clo51005[3] = proc;
clo51005[4] = map;
clo51005[5] = lst;
clo51005[6] = cdr;
void* f5058650720 = encode_clo(clo51005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5058650720;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50874 = encode_clo(alloc_clo(lam50874_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50876 = arg_buffer[1];
//reading env and args
void* kont50581 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51007 = alloc_clo(lam50874_fptr, 8);

//setting env list
clo51007[1] = cdr;
clo51007[2] = list;
clo51007[3] = cons;
clo51007[4] = car;
clo51007[5] = kont50581;
clo51007[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo51007[7] = map;
clo51007[8] = lst;
void* f5058750716 = encode_clo(clo51007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5058750716;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam50877_fptr() // lam50877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50878 = arg_buffer[1];
//reading env and args
void* x5049350731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50588 = (decode_clo(env50878))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50588);
arg_buffer[2] = x5049350731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50588))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50877 = encode_clo(alloc_clo(lam50877_fptr, 0));

void* lam50879_fptr() // lam50879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50880 = arg_buffer[1];
//reading env and args
void* a5049850741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50588 = (decode_clo(env50880))[3];
//not do dummy comment
void* a5049650737 = (decode_clo(env50880))[2];
//not do dummy comment
void* cons = (decode_clo(env50880))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50588;
arg_buffer[3] = a5049650737;
arg_buffer[4] = a5049850741;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50879 = encode_clo(alloc_clo(lam50879_fptr, 0));

void* lam50881_fptr() // lam50881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50882 = arg_buffer[1];
//reading env and args
void* a5049750739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50588 = (decode_clo(env50882))[5];
//not do dummy comment
void* op = (decode_clo(env50882))[4];
//not do dummy comment
void* a5049650737 = (decode_clo(env50882))[3];
//not do dummy comment
void* filter = (decode_clo(env50882))[2];
//not do dummy comment
void* cons = (decode_clo(env50882))[1];

//creating new closure instance
void** clo51009 = alloc_clo(lam50879_fptr, 3);

//setting env list
clo51009[1] = cons;
clo51009[2] = a5049650737;
clo51009[3] = kont50588;
void* f5059050740 = encode_clo(clo51009);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5059050740;
arg_buffer[3] = op;
arg_buffer[4] = a5049750739;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50881 = encode_clo(alloc_clo(lam50881_fptr, 0));

void* lam50883_fptr() // lam50883 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50884 = arg_buffer[1];
//reading env and args
void* a5049650737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50884))[6];
//not do dummy comment
void* kont50588 = (decode_clo(env50884))[5];
//not do dummy comment
void* lst = (decode_clo(env50884))[4];
//not do dummy comment
void* op = (decode_clo(env50884))[3];
//not do dummy comment
void* filter = (decode_clo(env50884))[2];
//not do dummy comment
void* cons = (decode_clo(env50884))[1];

//creating new closure instance
void** clo51011 = alloc_clo(lam50881_fptr, 5);

//setting env list
clo51011[1] = cons;
clo51011[2] = filter;
clo51011[3] = a5049650737;
clo51011[4] = op;
clo51011[5] = kont50588;
void* f5059150738 = encode_clo(clo51011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5059150738;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50883 = encode_clo(alloc_clo(lam50883_fptr, 0));

void* lam50885_fptr() // lam50885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50886 = arg_buffer[1];
//reading env and args
void* a5049950743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50588 = (decode_clo(env50886))[3];
//not do dummy comment
void* op = (decode_clo(env50886))[2];
//not do dummy comment
void* filter = (decode_clo(env50886))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont50588;
arg_buffer[3] = op;
arg_buffer[4] = a5049950743;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50885 = encode_clo(alloc_clo(lam50885_fptr, 0));

void* lam50887_fptr() // lam50887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50888 = arg_buffer[1];
//reading env and args
void* a5049550735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50888))[7];
//not do dummy comment
void* kont50588 = (decode_clo(env50888))[6];
//not do dummy comment
void* lst = (decode_clo(env50888))[5];
//not do dummy comment
void* op = (decode_clo(env50888))[4];
//not do dummy comment
void* cons = (decode_clo(env50888))[3];
//not do dummy comment
void* filter = (decode_clo(env50888))[2];
//not do dummy comment
void* car = (decode_clo(env50888))[1];

//if-clause
bool if_guard51012 = is_true(a5049550735);
if(if_guard51012)
{

//creating new closure instance
void** clo51014 = alloc_clo(lam50883_fptr, 6);

//setting env list
clo51014[1] = cons;
clo51014[2] = filter;
clo51014[3] = op;
clo51014[4] = lst;
clo51014[5] = kont50588;
clo51014[6] = cdr;
void* f5059250736 = encode_clo(clo51014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5059250736;
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
void** clo51016 = alloc_clo(lam50885_fptr, 3);

//setting env list
clo51016[1] = filter;
clo51016[2] = op;
clo51016[3] = kont50588;
void* f5059350742 = encode_clo(clo51016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5059350742;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50887 = encode_clo(alloc_clo(lam50887_fptr, 0));

void* lam50889_fptr() // lam50889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50890 = arg_buffer[1];
//reading env and args
void* a5049450733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50890))[7];
//not do dummy comment
void* kont50588 = (decode_clo(env50890))[6];
//not do dummy comment
void* lst = (decode_clo(env50890))[5];
//not do dummy comment
void* op = (decode_clo(env50890))[4];
//not do dummy comment
void* cons = (decode_clo(env50890))[3];
//not do dummy comment
void* filter = (decode_clo(env50890))[2];
//not do dummy comment
void* car = (decode_clo(env50890))[1];

//creating new closure instance
void** clo51018 = alloc_clo(lam50887_fptr, 7);

//setting env list
clo51018[1] = car;
clo51018[2] = filter;
clo51018[3] = cons;
clo51018[4] = op;
clo51018[5] = lst;
clo51018[6] = kont50588;
clo51018[7] = cdr;
void* f5059450734 = encode_clo(clo51018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5059450734;
arg_buffer[3] = a5049450733;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50889 = encode_clo(alloc_clo(lam50889_fptr, 0));

void* lam50891_fptr() // lam50891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50892 = arg_buffer[1];
//reading env and args
void* a5049250729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50588 = (decode_clo(env50892))[8];
//not do dummy comment
void* lst = (decode_clo(env50892))[7];
//not do dummy comment
void* op = (decode_clo(env50892))[6];
//not do dummy comment
void* cons = (decode_clo(env50892))[5];
//not do dummy comment
void* list = (decode_clo(env50892))[4];
//not do dummy comment
void* cdr = (decode_clo(env50892))[3];
//not do dummy comment
void* filter = (decode_clo(env50892))[2];
//not do dummy comment
void* car = (decode_clo(env50892))[1];

//if-clause
bool if_guard51019 = is_true(a5049250729);
if(if_guard51019)
{

//creating new closure instance
void** clo51021 = alloc_clo(lam50877_fptr, 1);

//setting env list
clo51021[1] = kont50588;
void* f5058950730 = encode_clo(clo51021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5058950730;
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
void** clo51023 = alloc_clo(lam50889_fptr, 7);

//setting env list
clo51023[1] = car;
clo51023[2] = filter;
clo51023[3] = cons;
clo51023[4] = op;
clo51023[5] = lst;
clo51023[6] = kont50588;
clo51023[7] = cdr;
void* f5059550732 = encode_clo(clo51023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5059550732;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50891 = encode_clo(alloc_clo(lam50891_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50893 = arg_buffer[1];
//reading env and args
void* kont50588 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51025 = alloc_clo(lam50891_fptr, 8);

//setting env list
clo51025[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo51025[2] = filter;
clo51025[3] = cdr;
clo51025[4] = list;
clo51025[5] = cons;
clo51025[6] = op;
clo51025[7] = lst;
clo51025[8] = kont50588;
void* f5059650728 = encode_clo(clo51025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5059650728;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam50894_fptr() // lam50894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50895 = arg_buffer[1];
//reading env and args
void* a5050450751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5050250748 = (decode_clo(env50895))[3];
//not do dummy comment
void* drop = (decode_clo(env50895))[2];
//not do dummy comment
void* kont50597 = (decode_clo(env50895))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont50597;
arg_buffer[3] = a5050250748;
arg_buffer[4] = a5050450751;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50894 = encode_clo(alloc_clo(lam50894_fptr, 0));

void* lam50897_fptr() // lam50897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50898 = arg_buffer[1];
//reading env and args
void* a5050250748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env50898))[4];
//not do dummy comment
void* kont50597 = (decode_clo(env50898))[3];
//not do dummy comment
void* n = (decode_clo(env50898))[2];
//not do dummy comment
void* _u45 = (decode_clo(env50898))[1];
mpz_t* mpzvar51026 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51026, "1", 10);
void* a5050350749 = encode_mpz(mpzvar51026);

//creating new closure instance
void** clo51028 = alloc_clo(lam50894_fptr, 3);

//setting env list
clo51028[1] = kont50597;
clo51028[2] = drop;
clo51028[3] = a5050250748;
void* f5059850750 = encode_clo(clo51028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5059850750;
arg_buffer[3] = n;
arg_buffer[4] = a5050350749;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50897 = encode_clo(alloc_clo(lam50897_fptr, 0));

void* lam50899_fptr() // lam50899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50900 = arg_buffer[1];
//reading env and args
void* a5050150746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50900))[6];
//not do dummy comment
void* kont50597 = (decode_clo(env50900))[5];
//not do dummy comment
void* n = (decode_clo(env50900))[4];
//not do dummy comment
void* _u45 = (decode_clo(env50900))[3];
//not do dummy comment
void* lst = (decode_clo(env50900))[2];
//not do dummy comment
void* drop = (decode_clo(env50900))[1];

//if-clause
bool if_guard51029 = is_true(a5050150746);
if(if_guard51029)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50597);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50597))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51031 = alloc_clo(lam50897_fptr, 4);

//setting env list
clo51031[1] = _u45;
clo51031[2] = n;
clo51031[3] = kont50597;
clo51031[4] = drop;
void* f5059950747 = encode_clo(clo51031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5059950747;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50899 = encode_clo(alloc_clo(lam50899_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50902 = arg_buffer[1];
//reading env and args
void* kont50597 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar51032 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51032, "0", 10);
void* a5050050744 = encode_mpz(mpzvar51032);

//creating new closure instance
void** clo51034 = alloc_clo(lam50899_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo51034[1] = drop;
clo51034[2] = lst;
clo51034[3] = _u45;
clo51034[4] = n;
clo51034[5] = kont50597;
clo51034[6] = cdr;
void* f5060050745 = encode_clo(clo51034);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5060050745;
arg_buffer[3] = n;
arg_buffer[4] = a5050050744;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam50903_fptr() // lam50903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50904 = arg_buffer[1];
//reading env and args
void* a5050850759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50601 = (decode_clo(env50904))[3];
//not do dummy comment
void* a5050650755 = (decode_clo(env50904))[2];
//not do dummy comment
void* proc = (decode_clo(env50904))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont50601;
arg_buffer[3] = a5050650755;
arg_buffer[4] = a5050850759;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50903 = encode_clo(alloc_clo(lam50903_fptr, 0));

void* lam50905_fptr() // lam50905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50906 = arg_buffer[1];
//reading env and args
void* a5050750757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50601 = (decode_clo(env50906))[5];
//not do dummy comment
void* foldr = (decode_clo(env50906))[4];
//not do dummy comment
void* a5050650755 = (decode_clo(env50906))[3];
//not do dummy comment
void* proc = (decode_clo(env50906))[2];
//not do dummy comment
void* acc = (decode_clo(env50906))[1];

//creating new closure instance
void** clo51036 = alloc_clo(lam50903_fptr, 3);

//setting env list
clo51036[1] = proc;
clo51036[2] = a5050650755;
clo51036[3] = kont50601;
void* f5060250758 = encode_clo(clo51036);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5060250758;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5050750757;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50905 = encode_clo(alloc_clo(lam50905_fptr, 0));

void* lam50907_fptr() // lam50907 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50908 = arg_buffer[1];
//reading env and args
void* a5050650755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50601 = (decode_clo(env50908))[6];
//not do dummy comment
void* cdr = (decode_clo(env50908))[5];
//not do dummy comment
void* foldr = (decode_clo(env50908))[4];
//not do dummy comment
void* lst = (decode_clo(env50908))[3];
//not do dummy comment
void* proc = (decode_clo(env50908))[2];
//not do dummy comment
void* acc = (decode_clo(env50908))[1];

//creating new closure instance
void** clo51038 = alloc_clo(lam50905_fptr, 5);

//setting env list
clo51038[1] = acc;
clo51038[2] = proc;
clo51038[3] = a5050650755;
clo51038[4] = foldr;
clo51038[5] = kont50601;
void* f5060350756 = encode_clo(clo51038);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5060350756;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50907 = encode_clo(alloc_clo(lam50907_fptr, 0));

void* lam50909_fptr() // lam50909 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50910 = arg_buffer[1];
//reading env and args
void* a5050550753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env50910))[7];
//not do dummy comment
void* kont50601 = (decode_clo(env50910))[6];
//not do dummy comment
void* cdr = (decode_clo(env50910))[5];
//not do dummy comment
void* foldr = (decode_clo(env50910))[4];
//not do dummy comment
void* lst = (decode_clo(env50910))[3];
//not do dummy comment
void* proc = (decode_clo(env50910))[2];
//not do dummy comment
void* acc = (decode_clo(env50910))[1];

//if-clause
bool if_guard51039 = is_true(a5050550753);
if(if_guard51039)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50601);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50601))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51041 = alloc_clo(lam50907_fptr, 6);

//setting env list
clo51041[1] = acc;
clo51041[2] = proc;
clo51041[3] = lst;
clo51041[4] = foldr;
clo51041[5] = cdr;
clo51041[6] = kont50601;
void* f5060450754 = encode_clo(clo51041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5060450754;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50909 = encode_clo(alloc_clo(lam50909_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50911 = arg_buffer[1];
//reading env and args
void* kont50601 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo51043 = alloc_clo(lam50909_fptr, 7);

//setting env list
clo51043[1] = acc;
clo51043[2] = proc;
clo51043[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo51043[4] = foldr;
clo51043[5] = cdr;
clo51043[6] = kont50601;
clo51043[7] = car;
void* f5060550752 = encode_clo(clo51043);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5060550752;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam50912_fptr() // lam50912 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50913 = arg_buffer[1];
//reading env and args
void* a5051250767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5051050763 = (decode_clo(env50913))[3];
//not do dummy comment
void* kont50606 = (decode_clo(env50913))[2];
//not do dummy comment
void* cons = (decode_clo(env50913))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50606;
arg_buffer[3] = a5051050763;
arg_buffer[4] = a5051250767;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50912 = encode_clo(alloc_clo(lam50912_fptr, 0));

void* lam50914_fptr() // lam50914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50915 = arg_buffer[1];
//reading env and args
void* a5051150765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5051050763 = (decode_clo(env50915))[5];
//not do dummy comment
void* kont50606 = (decode_clo(env50915))[4];
//not do dummy comment
void* append = (decode_clo(env50915))[3];
//not do dummy comment
void* lst2 = (decode_clo(env50915))[2];
//not do dummy comment
void* cons = (decode_clo(env50915))[1];

//creating new closure instance
void** clo51045 = alloc_clo(lam50912_fptr, 3);

//setting env list
clo51045[1] = cons;
clo51045[2] = kont50606;
clo51045[3] = a5051050763;
void* f5060750766 = encode_clo(clo51045);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5060750766;
arg_buffer[3] = a5051150765;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50914 = encode_clo(alloc_clo(lam50914_fptr, 0));

void* lam50916_fptr() // lam50916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50917 = arg_buffer[1];
//reading env and args
void* a5051050763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50917))[6];
//not do dummy comment
void* kont50606 = (decode_clo(env50917))[5];
//not do dummy comment
void* append = (decode_clo(env50917))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50917))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50917))[2];
//not do dummy comment
void* cons = (decode_clo(env50917))[1];

//creating new closure instance
void** clo51047 = alloc_clo(lam50914_fptr, 5);

//setting env list
clo51047[1] = cons;
clo51047[2] = lst2;
clo51047[3] = append;
clo51047[4] = kont50606;
clo51047[5] = a5051050763;
void* f5060850764 = encode_clo(clo51047);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5060850764;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50916 = encode_clo(alloc_clo(lam50916_fptr, 0));

void* lam50918_fptr() // lam50918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50919 = arg_buffer[1];
//reading env and args
void* a5050950761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50919))[7];
//not do dummy comment
void* kont50606 = (decode_clo(env50919))[6];
//not do dummy comment
void* append = (decode_clo(env50919))[5];
//not do dummy comment
void* lst2 = (decode_clo(env50919))[4];
//not do dummy comment
void* cons = (decode_clo(env50919))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50919))[2];
//not do dummy comment
void* car = (decode_clo(env50919))[1];

//if-clause
bool if_guard51048 = is_true(a5050950761);
if(if_guard51048)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50606);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50606))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51050 = alloc_clo(lam50916_fptr, 6);

//setting env list
clo51050[1] = cons;
clo51050[2] = lst1;
clo51050[3] = lst2;
clo51050[4] = append;
clo51050[5] = kont50606;
clo51050[6] = cdr;
void* f5060950762 = encode_clo(clo51050);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5060950762;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50918 = encode_clo(alloc_clo(lam50918_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50920 = arg_buffer[1];
//reading env and args
void* kont50606 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51052 = alloc_clo(lam50918_fptr, 7);

//setting env list
clo51052[1] = car;
clo51052[2] = lst1;
clo51052[3] = cons;
clo51052[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo51052[5] = append;
clo51052[6] = kont50606;
clo51052[7] = cdr;
void* f5061050760 = encode_clo(clo51052);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5061050760;
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
void* _50921 = arg_buffer[1];
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

void* kont5061150768 = prim_car(lst);
void* lst50769 = prim_cdr(lst);
void* x5051350770 = apply_prim_hash(lst50769);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5061150768);
arg_buffer[2] = x5051350770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5061150768))[0]);
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
void* _50922 = arg_buffer[1];
//reading env and args
void* kont50613 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5051450771 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50613);
arg_buffer[2] = x5051450771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50613))[0]);
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
void* _50923 = arg_buffer[1];
//reading env and args
void* kont50614 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5051550772 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50614);
arg_buffer[2] = x5051550772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50614))[0]);
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
void* _50924 = arg_buffer[1];
//reading env and args
void* kont50615 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5051650773 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50615);
arg_buffer[2] = x5051650773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50615))[0]);
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
void* _50925 = arg_buffer[1];
//reading env and args
void* kont50616 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5051750774 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50616);
arg_buffer[2] = x5051750774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50616))[0]);
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
void* _50927 = arg_buffer[1];
//reading env and args
void* kont50617 = arg_buffer[2];
//Dummy comment
void* x5051850775 = encode_str(new(GC) std::string("random"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50617);
arg_buffer[2] = x5051850775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50617))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam50928_fptr() // lam50928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50929 = arg_buffer[1];
//reading env and args
void* x5051950777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50618 = (decode_clo(env50929))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50618);
arg_buffer[2] = x5051950777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50618))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50928 = encode_clo(alloc_clo(lam50928_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50930 = arg_buffer[1];
//reading env and args
void* kont50618 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo51054 = alloc_clo(lam50928_fptr, 1);

//setting env list
clo51054[1] = kont50618;
void* f5061950776 = encode_clo(clo51054);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5061950776;
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

