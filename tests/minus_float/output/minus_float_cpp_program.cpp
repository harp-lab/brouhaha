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
void* _81763 = arg_buffer[1];
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

void* kont8150281602 = prim_car(lst);
void* lst81603 = prim_cdr(lst);
void* x8141481604 = apply_prim__u43(lst81603);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8150281602);
arg_buffer[2] = x8141481604;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8150281602))[0]);
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
void* _81764 = arg_buffer[1];
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

void* kont8150481605 = prim_car(lst);
void* lst81606 = prim_cdr(lst);
void* x8141581607 = apply_prim__u45(lst81606);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8150481605);
arg_buffer[2] = x8141581607;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8150481605))[0]);
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
void* _81765 = arg_buffer[1];
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

void* kont8150681608 = prim_car(lst);
void* lst81609 = prim_cdr(lst);
void* x8141681610 = apply_prim__u42(lst81609);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8150681608);
arg_buffer[2] = x8141681610;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8150681608))[0]);
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
void* _81766 = arg_buffer[1];
//reading env and args
void* kont81508 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8141781611 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81508);
arg_buffer[2] = x8141781611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81508))[0]);
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
void* _81767 = arg_buffer[1];
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

void* kont8150981612 = prim_car(lst);
void* lst81613 = prim_cdr(lst);
void* x8141881614 = apply_prim__u47(lst81613);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8150981612);
arg_buffer[2] = x8141881614;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8150981612))[0]);
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
void* _81768 = arg_buffer[1];
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

void* kont8151181615 = prim_car(lst);
void* lst81616 = prim_cdr(lst);
void* x8141981617 = apply_prim__u61(lst81616);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8151181615);
arg_buffer[2] = x8141981617;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8151181615))[0]);
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
void* _81769 = arg_buffer[1];
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

void* kont8151381618 = prim_car(lst);
void* lst81619 = prim_cdr(lst);
void* x8142081620 = apply_prim__u62(lst81619);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8151381618);
arg_buffer[2] = x8142081620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8151381618))[0]);
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
void* _81770 = arg_buffer[1];
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

void* kont8151581621 = prim_car(lst);
void* lst81622 = prim_cdr(lst);
void* x8142181623 = apply_prim__u60(lst81622);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8151581621);
arg_buffer[2] = x8142181623;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8151581621))[0]);
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
void* _81771 = arg_buffer[1];
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

void* kont8151781624 = prim_car(lst);
void* lst81625 = prim_cdr(lst);
void* x8142281626 = apply_prim__u60_u61(lst81625);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8151781624);
arg_buffer[2] = x8142281626;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8151781624))[0]);
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
void* _81772 = arg_buffer[1];
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

void* kont8151981627 = prim_car(lst);
void* lst81628 = prim_cdr(lst);
void* x8142381629 = apply_prim__u62_u61(lst81628);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8151981627);
arg_buffer[2] = x8142381629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8151981627))[0]);
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
void* _81773 = arg_buffer[1];
//reading env and args
void* kont81521 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8142481630 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81521);
arg_buffer[2] = x8142481630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81521))[0]);
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
void* _81774 = arg_buffer[1];
//reading env and args
void* kont81522 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8142581631 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81522);
arg_buffer[2] = x8142581631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81522))[0]);
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
void* _81775 = arg_buffer[1];
//reading env and args
void* kont81523 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8142681632 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81523);
arg_buffer[2] = x8142681632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81523))[0]);
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
void* _81776 = arg_buffer[1];
//reading env and args
void* kont81524 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8142781633 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81524);
arg_buffer[2] = x8142781633;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81524))[0]);
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
void* _81777 = arg_buffer[1];
//reading env and args
void* kont81525 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8142881634 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81525);
arg_buffer[2] = x8142881634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81525))[0]);
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
void* _81778 = arg_buffer[1];
//reading env and args
void* kont81526 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8142981635 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81526);
arg_buffer[2] = x8142981635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81526))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam81779_fptr() // lam81779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81780 = arg_buffer[1];
//reading env and args
void* a8143281639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env81780))[3];
//not do dummy comment
void* a8143081636 = (decode_clo(env81780))[2];
//not do dummy comment
void* kont81527 = (decode_clo(env81780))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont81527;
arg_buffer[3] = a8143081636;
arg_buffer[4] = a8143281639;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81779 = encode_clo(alloc_clo(lam81779_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81783 = arg_buffer[1];
//reading env and args
void* kont81527 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar82423 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82423, "0", 10);
void* a8143081636 = encode_mpz(mpzvar82423);
mpz_t* mpzvar82424 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82424, "2", 10);
void* a8143181637 = encode_mpz(mpzvar82424);

//creating new closure instance
void** clo82426 = alloc_clo(lam81779_fptr, 3);

//setting env list
clo82426[1] = kont81527;
clo82426[2] = a8143081636;
clo82426[3] = equal_u63;
void* f8152881638 = encode_clo(clo82426);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8152881638;
arg_buffer[3] = x;
arg_buffer[4] = a8143181637;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam81784_fptr() // lam81784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81785 = arg_buffer[1];
//reading env and args
void* a8143581643 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8143381640 = (decode_clo(env81785))[3];
//not do dummy comment
void* kont81529 = (decode_clo(env81785))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env81785))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont81529;
arg_buffer[3] = a8143381640;
arg_buffer[4] = a8143581643;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81784 = encode_clo(alloc_clo(lam81784_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81788 = arg_buffer[1];
//reading env and args
void* kont81529 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar82427 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82427, "1", 10);
void* a8143381640 = encode_mpz(mpzvar82427);
mpz_t* mpzvar82428 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82428, "2", 10);
void* a8143481641 = encode_mpz(mpzvar82428);

//creating new closure instance
void** clo82430 = alloc_clo(lam81784_fptr, 3);

//setting env list
clo82430[1] = equal_u63;
clo82430[2] = kont81529;
clo82430[3] = a8143381640;
void* f8153081642 = encode_clo(clo82430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8153081642;
arg_buffer[3] = x;
arg_buffer[4] = a8143481641;
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
void* _81789 = arg_buffer[1];
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

void* kont8153181644 = prim_car(x);
void* x81645 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8153181644);
arg_buffer[2] = x81645;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8153181644))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam81792_fptr() // lam81792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81793 = arg_buffer[1];
//reading env and args
void* a8144181655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81533 = (decode_clo(env81793))[3];
//not do dummy comment
void* x = (decode_clo(env81793))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env81793))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont81533;
arg_buffer[3] = x;
arg_buffer[4] = a8144181655;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81792 = encode_clo(alloc_clo(lam81792_fptr, 0));

void* lam81794_fptr() // lam81794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81795 = arg_buffer[1];
//reading env and args
void* a8143981652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81795))[5];
//not do dummy comment
void* lst = (decode_clo(env81795))[4];
//not do dummy comment
void* kont81533 = (decode_clo(env81795))[3];
//not do dummy comment
void* x = (decode_clo(env81795))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env81795))[1];

//if-clause
bool if_guard82431 = is_true(a8143981652);
if(if_guard82431)
{
void* x8144081653 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81533);
arg_buffer[2] = x8144081653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81533))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82433 = alloc_clo(lam81792_fptr, 3);

//setting env list
clo82433[1] = member_u63;
clo82433[2] = x;
clo82433[3] = kont81533;
void* f8153481654 = encode_clo(clo82433);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8153481654;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81794 = encode_clo(alloc_clo(lam81794_fptr, 0));

void* lam81796_fptr() // lam81796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81797 = arg_buffer[1];
//reading env and args
void* a8143881650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81797))[6];
//not do dummy comment
void* lst = (decode_clo(env81797))[5];
//not do dummy comment
void* kont81533 = (decode_clo(env81797))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env81797))[3];
//not do dummy comment
void* x = (decode_clo(env81797))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env81797))[1];

//creating new closure instance
void** clo82435 = alloc_clo(lam81794_fptr, 5);

//setting env list
clo82435[1] = member_u63;
clo82435[2] = x;
clo82435[3] = kont81533;
clo82435[4] = lst;
clo82435[5] = cdr;
void* f8153581651 = encode_clo(clo82435);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8153581651;
arg_buffer[3] = a8143881650;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81796 = encode_clo(alloc_clo(lam81796_fptr, 0));

void* lam81798_fptr() // lam81798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81799 = arg_buffer[1];
//reading env and args
void* a8143681647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81799))[7];
//not do dummy comment
void* lst = (decode_clo(env81799))[6];
//not do dummy comment
void* kont81533 = (decode_clo(env81799))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env81799))[4];
//not do dummy comment
void* x = (decode_clo(env81799))[3];
//not do dummy comment
void* car = (decode_clo(env81799))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env81799))[1];

//if-clause
bool if_guard82436 = is_true(a8143681647);
if(if_guard82436)
{
void* x8143781648 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81533);
arg_buffer[2] = x8143781648;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81533))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82438 = alloc_clo(lam81796_fptr, 6);

//setting env list
clo82438[1] = member_u63;
clo82438[2] = x;
clo82438[3] = equal_u63;
clo82438[4] = kont81533;
clo82438[5] = lst;
clo82438[6] = cdr;
void* f8153681649 = encode_clo(clo82438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8153681649;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81798 = encode_clo(alloc_clo(lam81798_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81800 = arg_buffer[1];
//reading env and args
void* kont81533 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82440 = alloc_clo(lam81798_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo82440[1] = member_u63;
clo82440[2] = car;
clo82440[3] = x;
clo82440[4] = equal_u63;
clo82440[5] = kont81533;
clo82440[6] = lst;
clo82440[7] = cdr;
void* f8153781646 = encode_clo(clo82440);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8153781646;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam81801_fptr() // lam81801 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81802 = arg_buffer[1];
//reading env and args
void* a8144581663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8144481661 = (decode_clo(env81802))[4];
//not do dummy comment
void* foldl = (decode_clo(env81802))[3];
//not do dummy comment
void* kont81538 = (decode_clo(env81802))[2];
//not do dummy comment
void* fun = (decode_clo(env81802))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont81538;
arg_buffer[3] = fun;
arg_buffer[4] = a8144481661;
arg_buffer[5] = a8144581663;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81801 = encode_clo(alloc_clo(lam81801_fptr, 0));

void* lam81803_fptr() // lam81803 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81804 = arg_buffer[1];
//reading env and args
void* a8144481661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81804))[5];
//not do dummy comment
void* lst = (decode_clo(env81804))[4];
//not do dummy comment
void* foldl = (decode_clo(env81804))[3];
//not do dummy comment
void* kont81538 = (decode_clo(env81804))[2];
//not do dummy comment
void* fun = (decode_clo(env81804))[1];

//creating new closure instance
void** clo82442 = alloc_clo(lam81801_fptr, 4);

//setting env list
clo82442[1] = fun;
clo82442[2] = kont81538;
clo82442[3] = foldl;
clo82442[4] = a8144481661;
void* f8153981662 = encode_clo(clo82442);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8153981662;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81803 = encode_clo(alloc_clo(lam81803_fptr, 0));

void* lam81805_fptr() // lam81805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81806 = arg_buffer[1];
//reading env and args
void* a8144381659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81806))[6];
//not do dummy comment
void* lst = (decode_clo(env81806))[5];
//not do dummy comment
void* acc = (decode_clo(env81806))[4];
//not do dummy comment
void* foldl = (decode_clo(env81806))[3];
//not do dummy comment
void* kont81538 = (decode_clo(env81806))[2];
//not do dummy comment
void* fun = (decode_clo(env81806))[1];

//creating new closure instance
void** clo82444 = alloc_clo(lam81803_fptr, 5);

//setting env list
clo82444[1] = fun;
clo82444[2] = kont81538;
clo82444[3] = foldl;
clo82444[4] = lst;
clo82444[5] = cdr;
void* f8154081660 = encode_clo(clo82444);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8154081660;
arg_buffer[3] = a8144381659;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81805 = encode_clo(alloc_clo(lam81805_fptr, 0));

void* lam81807_fptr() // lam81807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81808 = arg_buffer[1];
//reading env and args
void* a8144281657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81808))[7];
//not do dummy comment
void* lst = (decode_clo(env81808))[6];
//not do dummy comment
void* acc = (decode_clo(env81808))[5];
//not do dummy comment
void* car = (decode_clo(env81808))[4];
//not do dummy comment
void* foldl = (decode_clo(env81808))[3];
//not do dummy comment
void* kont81538 = (decode_clo(env81808))[2];
//not do dummy comment
void* fun = (decode_clo(env81808))[1];

//if-clause
bool if_guard82445 = is_true(a8144281657);
if(if_guard82445)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81538);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81538))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82447 = alloc_clo(lam81805_fptr, 6);

//setting env list
clo82447[1] = fun;
clo82447[2] = kont81538;
clo82447[3] = foldl;
clo82447[4] = acc;
clo82447[5] = lst;
clo82447[6] = cdr;
void* f8154181658 = encode_clo(clo82447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8154181658;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81807 = encode_clo(alloc_clo(lam81807_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81809 = arg_buffer[1];
//reading env and args
void* kont81538 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo82449 = alloc_clo(lam81807_fptr, 7);

//setting env list
clo82449[1] = fun;
clo82449[2] = kont81538;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo82449[3] = foldl;
clo82449[4] = car;
clo82449[5] = acc;
clo82449[6] = lst;
clo82449[7] = cdr;
void* f8154281656 = encode_clo(clo82449);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8154281656;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam81810_fptr() // lam81810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81811 = arg_buffer[1];
//reading env and args
void* a8144981671 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env81811))[3];
//not do dummy comment
void* a8144781667 = (decode_clo(env81811))[2];
//not do dummy comment
void* kont81543 = (decode_clo(env81811))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont81543;
arg_buffer[3] = a8144781667;
arg_buffer[4] = a8144981671;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81810 = encode_clo(alloc_clo(lam81810_fptr, 0));

void* lam81812_fptr() // lam81812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81813 = arg_buffer[1];
//reading env and args
void* a8144881669 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env81813))[5];
//not do dummy comment
void* a8144781667 = (decode_clo(env81813))[4];
//not do dummy comment
void* lst2 = (decode_clo(env81813))[3];
//not do dummy comment
void* cons = (decode_clo(env81813))[2];
//not do dummy comment
void* kont81543 = (decode_clo(env81813))[1];

//creating new closure instance
void** clo82451 = alloc_clo(lam81810_fptr, 3);

//setting env list
clo82451[1] = kont81543;
clo82451[2] = a8144781667;
clo82451[3] = reverse_u45helper;
void* f8154481670 = encode_clo(clo82451);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8154481670;
arg_buffer[3] = a8144881669;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81812 = encode_clo(alloc_clo(lam81812_fptr, 0));

void* lam81814_fptr() // lam81814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81815 = arg_buffer[1];
//reading env and args
void* a8144781667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env81815))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env81815))[5];
//not do dummy comment
void* lst2 = (decode_clo(env81815))[4];
//not do dummy comment
void* car = (decode_clo(env81815))[3];
//not do dummy comment
void* cons = (decode_clo(env81815))[2];
//not do dummy comment
void* kont81543 = (decode_clo(env81815))[1];

//creating new closure instance
void** clo82453 = alloc_clo(lam81812_fptr, 5);

//setting env list
clo82453[1] = kont81543;
clo82453[2] = cons;
clo82453[3] = lst2;
clo82453[4] = a8144781667;
clo82453[5] = reverse_u45helper;
void* f8154581668 = encode_clo(clo82453);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8154581668;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81814 = encode_clo(alloc_clo(lam81814_fptr, 0));

void* lam81816_fptr() // lam81816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81817 = arg_buffer[1];
//reading env and args
void* a8144681665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81817))[7];
//not do dummy comment
void* lst = (decode_clo(env81817))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env81817))[5];
//not do dummy comment
void* lst2 = (decode_clo(env81817))[4];
//not do dummy comment
void* car = (decode_clo(env81817))[3];
//not do dummy comment
void* cons = (decode_clo(env81817))[2];
//not do dummy comment
void* kont81543 = (decode_clo(env81817))[1];

//if-clause
bool if_guard82454 = is_true(a8144681665);
if(if_guard82454)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81543);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81543))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82456 = alloc_clo(lam81814_fptr, 6);

//setting env list
clo82456[1] = kont81543;
clo82456[2] = cons;
clo82456[3] = car;
clo82456[4] = lst2;
clo82456[5] = reverse_u45helper;
clo82456[6] = lst;
void* f8154681666 = encode_clo(clo82456);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8154681666;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81816 = encode_clo(alloc_clo(lam81816_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81818 = arg_buffer[1];
//reading env and args
void* kont81543 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82458 = alloc_clo(lam81816_fptr, 7);

//setting env list
clo82458[1] = kont81543;
clo82458[2] = cons;
clo82458[3] = car;
clo82458[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo82458[5] = reverse_u45helper;
clo82458[6] = lst;
clo82458[7] = cdr;
void* f8154781664 = encode_clo(clo82458);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8154781664;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam81819_fptr() // lam81819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81820 = arg_buffer[1];
//reading env and args
void* a8145081673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env81820))[3];
//not do dummy comment
void* lst = (decode_clo(env81820))[2];
//not do dummy comment
void* kont81548 = (decode_clo(env81820))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont81548;
arg_buffer[3] = lst;
arg_buffer[4] = a8145081673;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81819 = encode_clo(alloc_clo(lam81819_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81821 = arg_buffer[1];
//reading env and args
void* kont81548 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo82460 = alloc_clo(lam81819_fptr, 3);

//setting env list
clo82460[1] = kont81548;
clo82460[2] = lst;
clo82460[3] = reverse_u45helper;
void* f8154981672 = encode_clo(clo82460);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8154981672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam81822_fptr() // lam81822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81823 = arg_buffer[1];
//reading env and args
void* x8145381678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81550 = (decode_clo(env81823))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81550);
arg_buffer[2] = x8145381678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81550))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81822 = encode_clo(alloc_clo(lam81822_fptr, 0));

void* lam81824_fptr() // lam81824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81825 = arg_buffer[1];
//reading env and args
void* a8145881687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81550 = (decode_clo(env81825))[4];
//not do dummy comment
void* a8145481680 = (decode_clo(env81825))[3];
//not do dummy comment
void* a8145681683 = (decode_clo(env81825))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env81825))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont81550;
arg_buffer[3] = a8145481680;
arg_buffer[4] = a8145681683;
arg_buffer[5] = a8145881687;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81824 = encode_clo(alloc_clo(lam81824_fptr, 0));

void* lam81826_fptr() // lam81826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81827 = arg_buffer[1];
//reading env and args
void* a8145781685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81550 = (decode_clo(env81827))[6];
//not do dummy comment
void* a8145481680 = (decode_clo(env81827))[5];
//not do dummy comment
void* a8145681683 = (decode_clo(env81827))[4];
//not do dummy comment
void* cons = (decode_clo(env81827))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env81827))[2];
//not do dummy comment
void* lst2 = (decode_clo(env81827))[1];

//creating new closure instance
void** clo82462 = alloc_clo(lam81824_fptr, 4);

//setting env list
clo82462[1] = take_u45helper;
clo82462[2] = a8145681683;
clo82462[3] = a8145481680;
clo82462[4] = kont81550;
void* f8155281686 = encode_clo(clo82462);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8155281686;
arg_buffer[3] = a8145781685;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81826 = encode_clo(alloc_clo(lam81826_fptr, 0));

void* lam81828_fptr() // lam81828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81829 = arg_buffer[1];
//reading env and args
void* a8145681683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env81829))[7];
//not do dummy comment
void* kont81550 = (decode_clo(env81829))[6];
//not do dummy comment
void* a8145481680 = (decode_clo(env81829))[5];
//not do dummy comment
void* car = (decode_clo(env81829))[4];
//not do dummy comment
void* cons = (decode_clo(env81829))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env81829))[2];
//not do dummy comment
void* lst2 = (decode_clo(env81829))[1];

//creating new closure instance
void** clo82464 = alloc_clo(lam81826_fptr, 6);

//setting env list
clo82464[1] = lst2;
clo82464[2] = take_u45helper;
clo82464[3] = cons;
clo82464[4] = a8145681683;
clo82464[5] = a8145481680;
clo82464[6] = kont81550;
void* f8155381684 = encode_clo(clo82464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8155381684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81828 = encode_clo(alloc_clo(lam81828_fptr, 0));

void* lam81831_fptr() // lam81831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81832 = arg_buffer[1];
//reading env and args
void* a8145481680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env81832))[8];
//not do dummy comment
void* kont81550 = (decode_clo(env81832))[7];
//not do dummy comment
void* cons = (decode_clo(env81832))[6];
//not do dummy comment
void* _u45 = (decode_clo(env81832))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env81832))[4];
//not do dummy comment
void* lst2 = (decode_clo(env81832))[3];
//not do dummy comment
void* n = (decode_clo(env81832))[2];
//not do dummy comment
void* car = (decode_clo(env81832))[1];
mpz_t* mpzvar82465 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82465, "1", 10);
void* a8145581681 = encode_mpz(mpzvar82465);

//creating new closure instance
void** clo82467 = alloc_clo(lam81828_fptr, 7);

//setting env list
clo82467[1] = lst2;
clo82467[2] = take_u45helper;
clo82467[3] = cons;
clo82467[4] = car;
clo82467[5] = a8145481680;
clo82467[6] = kont81550;
clo82467[7] = lst;
void* f8155481682 = encode_clo(clo82467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8155481682;
arg_buffer[3] = n;
arg_buffer[4] = a8145581681;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81831 = encode_clo(alloc_clo(lam81831_fptr, 0));

void* lam81833_fptr() // lam81833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81834 = arg_buffer[1];
//reading env and args
void* a8145281676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81834))[10];
//not do dummy comment
void* lst = (decode_clo(env81834))[9];
//not do dummy comment
void* kont81550 = (decode_clo(env81834))[8];
//not do dummy comment
void* reverse = (decode_clo(env81834))[7];
//not do dummy comment
void* cons = (decode_clo(env81834))[6];
//not do dummy comment
void* _u45 = (decode_clo(env81834))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env81834))[4];
//not do dummy comment
void* lst2 = (decode_clo(env81834))[3];
//not do dummy comment
void* n = (decode_clo(env81834))[2];
//not do dummy comment
void* car = (decode_clo(env81834))[1];

//if-clause
bool if_guard82468 = is_true(a8145281676);
if(if_guard82468)
{

//creating new closure instance
void** clo82470 = alloc_clo(lam81822_fptr, 1);

//setting env list
clo82470[1] = kont81550;
void* f8155181677 = encode_clo(clo82470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8155181677;
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
void** clo82472 = alloc_clo(lam81831_fptr, 8);

//setting env list
clo82472[1] = car;
clo82472[2] = n;
clo82472[3] = lst2;
clo82472[4] = take_u45helper;
clo82472[5] = _u45;
clo82472[6] = cons;
clo82472[7] = kont81550;
clo82472[8] = lst;
void* f8155581679 = encode_clo(clo82472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8155581679;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81833 = encode_clo(alloc_clo(lam81833_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81836 = arg_buffer[1];
//reading env and args
void* kont81550 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar82473 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82473, "0", 10);
void* a8145181674 = encode_mpz(mpzvar82473);

//creating new closure instance
void** clo82475 = alloc_clo(lam81833_fptr, 10);

//setting env list
clo82475[1] = car;
clo82475[2] = n;
clo82475[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo82475[4] = take_u45helper;
clo82475[5] = _u45;
clo82475[6] = cons;
clo82475[7] = reverse;
clo82475[8] = kont81550;
clo82475[9] = lst;
clo82475[10] = cdr;
void* f8155681675 = encode_clo(clo82475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8155681675;
arg_buffer[3] = n;
arg_buffer[4] = a8145181674;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam81837_fptr() // lam81837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81838 = arg_buffer[1];
//reading env and args
void* a8145981689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env81838))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env81838))[3];
//not do dummy comment
void* kont81557 = (decode_clo(env81838))[2];
//not do dummy comment
void* n = (decode_clo(env81838))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont81557;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8145981689;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81837 = encode_clo(alloc_clo(lam81837_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81839 = arg_buffer[1];
//reading env and args
void* kont81557 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82477 = alloc_clo(lam81837_fptr, 4);

//setting env list
clo82477[1] = n;
clo82477[2] = kont81557;
clo82477[3] = take_u45helper;
clo82477[4] = lst;
void* f8155881688 = encode_clo(clo82477);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8155881688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam81841_fptr() // lam81841 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81842 = arg_buffer[1];
//reading env and args
void* a8146481697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8146281693 = (decode_clo(env81842))[3];
//not do dummy comment
void* _u43 = (decode_clo(env81842))[2];
//not do dummy comment
void* kont81559 = (decode_clo(env81842))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont81559;
arg_buffer[3] = a8146281693;
arg_buffer[4] = a8146481697;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81841 = encode_clo(alloc_clo(lam81841_fptr, 0));

void* lam81843_fptr() // lam81843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81844 = arg_buffer[1];
//reading env and args
void* a8146381695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env81844))[4];
//not do dummy comment
void* kont81559 = (decode_clo(env81844))[3];
//not do dummy comment
void* a8146281693 = (decode_clo(env81844))[2];
//not do dummy comment
void* length = (decode_clo(env81844))[1];

//creating new closure instance
void** clo82479 = alloc_clo(lam81841_fptr, 3);

//setting env list
clo82479[1] = kont81559;
clo82479[2] = _u43;
clo82479[3] = a8146281693;
void* f8156081696 = encode_clo(clo82479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8156081696;
arg_buffer[3] = a8146381695;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81843 = encode_clo(alloc_clo(lam81843_fptr, 0));

void* lam81846_fptr() // lam81846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81847 = arg_buffer[1];
//reading env and args
void* a8146081691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81847))[5];
//not do dummy comment
void* lst = (decode_clo(env81847))[4];
//not do dummy comment
void* length = (decode_clo(env81847))[3];
//not do dummy comment
void* _u43 = (decode_clo(env81847))[2];
//not do dummy comment
void* kont81559 = (decode_clo(env81847))[1];

//if-clause
bool if_guard82480 = is_true(a8146081691);
if(if_guard82480)
{
mpz_t* mpzvar82481 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82481, "0", 10);
void* x8146181692 = encode_mpz(mpzvar82481);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81559);
arg_buffer[2] = x8146181692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81559))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar82482 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82482, "1", 10);
void* a8146281693 = encode_mpz(mpzvar82482);

//creating new closure instance
void** clo82484 = alloc_clo(lam81843_fptr, 4);

//setting env list
clo82484[1] = length;
clo82484[2] = a8146281693;
clo82484[3] = kont81559;
clo82484[4] = _u43;
void* f8156181694 = encode_clo(clo82484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8156181694;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81846 = encode_clo(alloc_clo(lam81846_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81848 = arg_buffer[1];
//reading env and args
void* kont81559 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo82486 = alloc_clo(lam81846_fptr, 5);

//setting env list
clo82486[1] = kont81559;
clo82486[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo82486[3] = length;
clo82486[4] = lst;
clo82486[5] = cdr;
void* f8156281690 = encode_clo(clo82486);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8156281690;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam81849_fptr() // lam81849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81850 = arg_buffer[1];
//reading env and args
void* x8146681701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81563 = (decode_clo(env81850))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81563);
arg_buffer[2] = x8146681701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81563))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81849 = encode_clo(alloc_clo(lam81849_fptr, 0));

void* lam81851_fptr() // lam81851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81852 = arg_buffer[1];
//reading env and args
void* a8147081709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8146881705 = (decode_clo(env81852))[3];
//not do dummy comment
void* kont81563 = (decode_clo(env81852))[2];
//not do dummy comment
void* cons = (decode_clo(env81852))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont81563;
arg_buffer[3] = a8146881705;
arg_buffer[4] = a8147081709;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81851 = encode_clo(alloc_clo(lam81851_fptr, 0));

void* lam81853_fptr() // lam81853 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81854 = arg_buffer[1];
//reading env and args
void* a8146981707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8146881705 = (decode_clo(env81854))[5];
//not do dummy comment
void* kont81563 = (decode_clo(env81854))[4];
//not do dummy comment
void* map = (decode_clo(env81854))[3];
//not do dummy comment
void* proc = (decode_clo(env81854))[2];
//not do dummy comment
void* cons = (decode_clo(env81854))[1];

//creating new closure instance
void** clo82488 = alloc_clo(lam81851_fptr, 3);

//setting env list
clo82488[1] = cons;
clo82488[2] = kont81563;
clo82488[3] = a8146881705;
void* f8156581708 = encode_clo(clo82488);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8156581708;
arg_buffer[3] = proc;
arg_buffer[4] = a8146981707;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81853 = encode_clo(alloc_clo(lam81853_fptr, 0));

void* lam81855_fptr() // lam81855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81856 = arg_buffer[1];
//reading env and args
void* a8146881705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81856))[6];
//not do dummy comment
void* kont81563 = (decode_clo(env81856))[5];
//not do dummy comment
void* lst = (decode_clo(env81856))[4];
//not do dummy comment
void* map = (decode_clo(env81856))[3];
//not do dummy comment
void* proc = (decode_clo(env81856))[2];
//not do dummy comment
void* cons = (decode_clo(env81856))[1];

//creating new closure instance
void** clo82490 = alloc_clo(lam81853_fptr, 5);

//setting env list
clo82490[1] = cons;
clo82490[2] = proc;
clo82490[3] = map;
clo82490[4] = kont81563;
clo82490[5] = a8146881705;
void* f8156681706 = encode_clo(clo82490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8156681706;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81855 = encode_clo(alloc_clo(lam81855_fptr, 0));

void* lam81857_fptr() // lam81857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81858 = arg_buffer[1];
//reading env and args
void* a8146781703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81858))[6];
//not do dummy comment
void* kont81563 = (decode_clo(env81858))[5];
//not do dummy comment
void* lst = (decode_clo(env81858))[4];
//not do dummy comment
void* map = (decode_clo(env81858))[3];
//not do dummy comment
void* proc = (decode_clo(env81858))[2];
//not do dummy comment
void* cons = (decode_clo(env81858))[1];

//creating new closure instance
void** clo82492 = alloc_clo(lam81855_fptr, 6);

//setting env list
clo82492[1] = cons;
clo82492[2] = proc;
clo82492[3] = map;
clo82492[4] = lst;
clo82492[5] = kont81563;
clo82492[6] = cdr;
void* f8156781704 = encode_clo(clo82492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8156781704;
arg_buffer[3] = a8146781703;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81857 = encode_clo(alloc_clo(lam81857_fptr, 0));

void* lam81859_fptr() // lam81859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81860 = arg_buffer[1];
//reading env and args
void* a8146581699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81563 = (decode_clo(env81860))[8];
//not do dummy comment
void* lst = (decode_clo(env81860))[7];
//not do dummy comment
void* map = (decode_clo(env81860))[6];
//not do dummy comment
void* proc = (decode_clo(env81860))[5];
//not do dummy comment
void* car = (decode_clo(env81860))[4];
//not do dummy comment
void* cons = (decode_clo(env81860))[3];
//not do dummy comment
void* list = (decode_clo(env81860))[2];
//not do dummy comment
void* cdr = (decode_clo(env81860))[1];

//if-clause
bool if_guard82493 = is_true(a8146581699);
if(if_guard82493)
{

//creating new closure instance
void** clo82495 = alloc_clo(lam81849_fptr, 1);

//setting env list
clo82495[1] = kont81563;
void* f8156481700 = encode_clo(clo82495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8156481700;
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
void** clo82497 = alloc_clo(lam81857_fptr, 6);

//setting env list
clo82497[1] = cons;
clo82497[2] = proc;
clo82497[3] = map;
clo82497[4] = lst;
clo82497[5] = kont81563;
clo82497[6] = cdr;
void* f8156881702 = encode_clo(clo82497);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8156881702;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81859 = encode_clo(alloc_clo(lam81859_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81861 = arg_buffer[1];
//reading env and args
void* kont81563 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82499 = alloc_clo(lam81859_fptr, 8);

//setting env list
clo82499[1] = cdr;
clo82499[2] = list;
clo82499[3] = cons;
clo82499[4] = car;
clo82499[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo82499[6] = map;
clo82499[7] = lst;
clo82499[8] = kont81563;
void* f8156981698 = encode_clo(clo82499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8156981698;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam81862_fptr() // lam81862 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81863 = arg_buffer[1];
//reading env and args
void* x8147281713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81570 = (decode_clo(env81863))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81570);
arg_buffer[2] = x8147281713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81570))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81862 = encode_clo(alloc_clo(lam81862_fptr, 0));

void* lam81864_fptr() // lam81864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81865 = arg_buffer[1];
//reading env and args
void* a8147781723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81570 = (decode_clo(env81865))[3];
//not do dummy comment
void* cons = (decode_clo(env81865))[2];
//not do dummy comment
void* a8147581719 = (decode_clo(env81865))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont81570;
arg_buffer[3] = a8147581719;
arg_buffer[4] = a8147781723;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81864 = encode_clo(alloc_clo(lam81864_fptr, 0));

void* lam81866_fptr() // lam81866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81867 = arg_buffer[1];
//reading env and args
void* a8147681721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env81867))[5];
//not do dummy comment
void* kont81570 = (decode_clo(env81867))[4];
//not do dummy comment
void* filter = (decode_clo(env81867))[3];
//not do dummy comment
void* cons = (decode_clo(env81867))[2];
//not do dummy comment
void* a8147581719 = (decode_clo(env81867))[1];

//creating new closure instance
void** clo82501 = alloc_clo(lam81864_fptr, 3);

//setting env list
clo82501[1] = a8147581719;
clo82501[2] = cons;
clo82501[3] = kont81570;
void* f8157281722 = encode_clo(clo82501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8157281722;
arg_buffer[3] = op;
arg_buffer[4] = a8147681721;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81866 = encode_clo(alloc_clo(lam81866_fptr, 0));

void* lam81868_fptr() // lam81868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81869 = arg_buffer[1];
//reading env and args
void* a8147581719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81869))[6];
//not do dummy comment
void* lst = (decode_clo(env81869))[5];
//not do dummy comment
void* op = (decode_clo(env81869))[4];
//not do dummy comment
void* kont81570 = (decode_clo(env81869))[3];
//not do dummy comment
void* filter = (decode_clo(env81869))[2];
//not do dummy comment
void* cons = (decode_clo(env81869))[1];

//creating new closure instance
void** clo82503 = alloc_clo(lam81866_fptr, 5);

//setting env list
clo82503[1] = a8147581719;
clo82503[2] = cons;
clo82503[3] = filter;
clo82503[4] = kont81570;
clo82503[5] = op;
void* f8157381720 = encode_clo(clo82503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8157381720;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81868 = encode_clo(alloc_clo(lam81868_fptr, 0));

void* lam81870_fptr() // lam81870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81871 = arg_buffer[1];
//reading env and args
void* a8147881725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env81871))[3];
//not do dummy comment
void* kont81570 = (decode_clo(env81871))[2];
//not do dummy comment
void* filter = (decode_clo(env81871))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont81570;
arg_buffer[3] = op;
arg_buffer[4] = a8147881725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81870 = encode_clo(alloc_clo(lam81870_fptr, 0));

void* lam81872_fptr() // lam81872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81873 = arg_buffer[1];
//reading env and args
void* a8147481717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81873))[7];
//not do dummy comment
void* lst = (decode_clo(env81873))[6];
//not do dummy comment
void* op = (decode_clo(env81873))[5];
//not do dummy comment
void* kont81570 = (decode_clo(env81873))[4];
//not do dummy comment
void* cons = (decode_clo(env81873))[3];
//not do dummy comment
void* filter = (decode_clo(env81873))[2];
//not do dummy comment
void* car = (decode_clo(env81873))[1];

//if-clause
bool if_guard82504 = is_true(a8147481717);
if(if_guard82504)
{

//creating new closure instance
void** clo82506 = alloc_clo(lam81868_fptr, 6);

//setting env list
clo82506[1] = cons;
clo82506[2] = filter;
clo82506[3] = kont81570;
clo82506[4] = op;
clo82506[5] = lst;
clo82506[6] = cdr;
void* f8157481718 = encode_clo(clo82506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8157481718;
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
void** clo82508 = alloc_clo(lam81870_fptr, 3);

//setting env list
clo82508[1] = filter;
clo82508[2] = kont81570;
clo82508[3] = op;
void* f8157581724 = encode_clo(clo82508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8157581724;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81872 = encode_clo(alloc_clo(lam81872_fptr, 0));

void* lam81874_fptr() // lam81874 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81875 = arg_buffer[1];
//reading env and args
void* a8147381715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81875))[7];
//not do dummy comment
void* lst = (decode_clo(env81875))[6];
//not do dummy comment
void* op = (decode_clo(env81875))[5];
//not do dummy comment
void* kont81570 = (decode_clo(env81875))[4];
//not do dummy comment
void* cons = (decode_clo(env81875))[3];
//not do dummy comment
void* filter = (decode_clo(env81875))[2];
//not do dummy comment
void* car = (decode_clo(env81875))[1];

//creating new closure instance
void** clo82510 = alloc_clo(lam81872_fptr, 7);

//setting env list
clo82510[1] = car;
clo82510[2] = filter;
clo82510[3] = cons;
clo82510[4] = kont81570;
clo82510[5] = op;
clo82510[6] = lst;
clo82510[7] = cdr;
void* f8157681716 = encode_clo(clo82510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8157681716;
arg_buffer[3] = a8147381715;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81874 = encode_clo(alloc_clo(lam81874_fptr, 0));

void* lam81876_fptr() // lam81876 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81877 = arg_buffer[1];
//reading env and args
void* a8147181711 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env81877))[8];
//not do dummy comment
void* op = (decode_clo(env81877))[7];
//not do dummy comment
void* kont81570 = (decode_clo(env81877))[6];
//not do dummy comment
void* cons = (decode_clo(env81877))[5];
//not do dummy comment
void* list = (decode_clo(env81877))[4];
//not do dummy comment
void* cdr = (decode_clo(env81877))[3];
//not do dummy comment
void* filter = (decode_clo(env81877))[2];
//not do dummy comment
void* car = (decode_clo(env81877))[1];

//if-clause
bool if_guard82511 = is_true(a8147181711);
if(if_guard82511)
{

//creating new closure instance
void** clo82513 = alloc_clo(lam81862_fptr, 1);

//setting env list
clo82513[1] = kont81570;
void* f8157181712 = encode_clo(clo82513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8157181712;
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
void** clo82515 = alloc_clo(lam81874_fptr, 7);

//setting env list
clo82515[1] = car;
clo82515[2] = filter;
clo82515[3] = cons;
clo82515[4] = kont81570;
clo82515[5] = op;
clo82515[6] = lst;
clo82515[7] = cdr;
void* f8157781714 = encode_clo(clo82515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8157781714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81876 = encode_clo(alloc_clo(lam81876_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81878 = arg_buffer[1];
//reading env and args
void* kont81570 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82517 = alloc_clo(lam81876_fptr, 8);

//setting env list
clo82517[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo82517[2] = filter;
clo82517[3] = cdr;
clo82517[4] = list;
clo82517[5] = cons;
clo82517[6] = kont81570;
clo82517[7] = op;
clo82517[8] = lst;
void* f8157881710 = encode_clo(clo82517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8157881710;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam81879_fptr() // lam81879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81880 = arg_buffer[1];
//reading env and args
void* a8148381733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81579 = (decode_clo(env81880))[3];
//not do dummy comment
void* drop = (decode_clo(env81880))[2];
//not do dummy comment
void* a8148181730 = (decode_clo(env81880))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont81579;
arg_buffer[3] = a8148181730;
arg_buffer[4] = a8148381733;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81879 = encode_clo(alloc_clo(lam81879_fptr, 0));

void* lam81882_fptr() // lam81882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81883 = arg_buffer[1];
//reading env and args
void* a8148181730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81579 = (decode_clo(env81883))[4];
//not do dummy comment
void* drop = (decode_clo(env81883))[3];
//not do dummy comment
void* n = (decode_clo(env81883))[2];
//not do dummy comment
void* _u45 = (decode_clo(env81883))[1];
mpz_t* mpzvar82518 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82518, "1", 10);
void* a8148281731 = encode_mpz(mpzvar82518);

//creating new closure instance
void** clo82520 = alloc_clo(lam81879_fptr, 3);

//setting env list
clo82520[1] = a8148181730;
clo82520[2] = drop;
clo82520[3] = kont81579;
void* f8158081732 = encode_clo(clo82520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8158081732;
arg_buffer[3] = n;
arg_buffer[4] = a8148281731;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81882 = encode_clo(alloc_clo(lam81882_fptr, 0));

void* lam81884_fptr() // lam81884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81885 = arg_buffer[1];
//reading env and args
void* a8148081728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81885))[6];
//not do dummy comment
void* kont81579 = (decode_clo(env81885))[5];
//not do dummy comment
void* n = (decode_clo(env81885))[4];
//not do dummy comment
void* _u45 = (decode_clo(env81885))[3];
//not do dummy comment
void* lst = (decode_clo(env81885))[2];
//not do dummy comment
void* drop = (decode_clo(env81885))[1];

//if-clause
bool if_guard82521 = is_true(a8148081728);
if(if_guard82521)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81579);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81579))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82523 = alloc_clo(lam81882_fptr, 4);

//setting env list
clo82523[1] = _u45;
clo82523[2] = n;
clo82523[3] = drop;
clo82523[4] = kont81579;
void* f8158181729 = encode_clo(clo82523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8158181729;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81884 = encode_clo(alloc_clo(lam81884_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81887 = arg_buffer[1];
//reading env and args
void* kont81579 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar82524 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82524, "0", 10);
void* a8147981726 = encode_mpz(mpzvar82524);

//creating new closure instance
void** clo82526 = alloc_clo(lam81884_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo82526[1] = drop;
clo82526[2] = lst;
clo82526[3] = _u45;
clo82526[4] = n;
clo82526[5] = kont81579;
clo82526[6] = cdr;
void* f8158281727 = encode_clo(clo82526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8158281727;
arg_buffer[3] = n;
arg_buffer[4] = a8147981726;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam81888_fptr() // lam81888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81889 = arg_buffer[1];
//reading env and args
void* a8148781741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8148581737 = (decode_clo(env81889))[3];
//not do dummy comment
void* kont81583 = (decode_clo(env81889))[2];
//not do dummy comment
void* proc = (decode_clo(env81889))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont81583;
arg_buffer[3] = a8148581737;
arg_buffer[4] = a8148781741;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81888 = encode_clo(alloc_clo(lam81888_fptr, 0));

void* lam81890_fptr() // lam81890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81891 = arg_buffer[1];
//reading env and args
void* a8148681739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8148581737 = (decode_clo(env81891))[5];
//not do dummy comment
void* foldr = (decode_clo(env81891))[4];
//not do dummy comment
void* kont81583 = (decode_clo(env81891))[3];
//not do dummy comment
void* proc = (decode_clo(env81891))[2];
//not do dummy comment
void* acc = (decode_clo(env81891))[1];

//creating new closure instance
void** clo82528 = alloc_clo(lam81888_fptr, 3);

//setting env list
clo82528[1] = proc;
clo82528[2] = kont81583;
clo82528[3] = a8148581737;
void* f8158481740 = encode_clo(clo82528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8158481740;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8148681739;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81890 = encode_clo(alloc_clo(lam81890_fptr, 0));

void* lam81892_fptr() // lam81892 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81893 = arg_buffer[1];
//reading env and args
void* a8148581737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81893))[6];
//not do dummy comment
void* kont81583 = (decode_clo(env81893))[5];
//not do dummy comment
void* foldr = (decode_clo(env81893))[4];
//not do dummy comment
void* lst = (decode_clo(env81893))[3];
//not do dummy comment
void* proc = (decode_clo(env81893))[2];
//not do dummy comment
void* acc = (decode_clo(env81893))[1];

//creating new closure instance
void** clo82530 = alloc_clo(lam81890_fptr, 5);

//setting env list
clo82530[1] = acc;
clo82530[2] = proc;
clo82530[3] = kont81583;
clo82530[4] = foldr;
clo82530[5] = a8148581737;
void* f8158581738 = encode_clo(clo82530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8158581738;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81892 = encode_clo(alloc_clo(lam81892_fptr, 0));

void* lam81894_fptr() // lam81894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81895 = arg_buffer[1];
//reading env and args
void* a8148481735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81895))[7];
//not do dummy comment
void* kont81583 = (decode_clo(env81895))[6];
//not do dummy comment
void* car = (decode_clo(env81895))[5];
//not do dummy comment
void* foldr = (decode_clo(env81895))[4];
//not do dummy comment
void* lst = (decode_clo(env81895))[3];
//not do dummy comment
void* proc = (decode_clo(env81895))[2];
//not do dummy comment
void* acc = (decode_clo(env81895))[1];

//if-clause
bool if_guard82531 = is_true(a8148481735);
if(if_guard82531)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81583);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81583))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82533 = alloc_clo(lam81892_fptr, 6);

//setting env list
clo82533[1] = acc;
clo82533[2] = proc;
clo82533[3] = lst;
clo82533[4] = foldr;
clo82533[5] = kont81583;
clo82533[6] = cdr;
void* f8158681736 = encode_clo(clo82533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8158681736;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81894 = encode_clo(alloc_clo(lam81894_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81896 = arg_buffer[1];
//reading env and args
void* kont81583 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo82535 = alloc_clo(lam81894_fptr, 7);

//setting env list
clo82535[1] = acc;
clo82535[2] = proc;
clo82535[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo82535[4] = foldr;
clo82535[5] = car;
clo82535[6] = kont81583;
clo82535[7] = cdr;
void* f8158781734 = encode_clo(clo82535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8158781734;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam81897_fptr() // lam81897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81898 = arg_buffer[1];
//reading env and args
void* a8149181749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8148981745 = (decode_clo(env81898))[3];
//not do dummy comment
void* kont81588 = (decode_clo(env81898))[2];
//not do dummy comment
void* cons = (decode_clo(env81898))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont81588;
arg_buffer[3] = a8148981745;
arg_buffer[4] = a8149181749;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81897 = encode_clo(alloc_clo(lam81897_fptr, 0));

void* lam81899_fptr() // lam81899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81900 = arg_buffer[1];
//reading env and args
void* a8149081747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env81900))[5];
//not do dummy comment
void* a8148981745 = (decode_clo(env81900))[4];
//not do dummy comment
void* cons = (decode_clo(env81900))[3];
//not do dummy comment
void* lst2 = (decode_clo(env81900))[2];
//not do dummy comment
void* kont81588 = (decode_clo(env81900))[1];

//creating new closure instance
void** clo82537 = alloc_clo(lam81897_fptr, 3);

//setting env list
clo82537[1] = cons;
clo82537[2] = kont81588;
clo82537[3] = a8148981745;
void* f8158981748 = encode_clo(clo82537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8158981748;
arg_buffer[3] = a8149081747;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81899 = encode_clo(alloc_clo(lam81899_fptr, 0));

void* lam81901_fptr() // lam81901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81902 = arg_buffer[1];
//reading env and args
void* a8148981745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81902))[6];
//not do dummy comment
void* append = (decode_clo(env81902))[5];
//not do dummy comment
void* lst1 = (decode_clo(env81902))[4];
//not do dummy comment
void* cons = (decode_clo(env81902))[3];
//not do dummy comment
void* lst2 = (decode_clo(env81902))[2];
//not do dummy comment
void* kont81588 = (decode_clo(env81902))[1];

//creating new closure instance
void** clo82539 = alloc_clo(lam81899_fptr, 5);

//setting env list
clo82539[1] = kont81588;
clo82539[2] = lst2;
clo82539[3] = cons;
clo82539[4] = a8148981745;
clo82539[5] = append;
void* f8159081746 = encode_clo(clo82539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8159081746;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81901 = encode_clo(alloc_clo(lam81901_fptr, 0));

void* lam81903_fptr() // lam81903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81904 = arg_buffer[1];
//reading env and args
void* a8148881743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env81904))[7];
//not do dummy comment
void* append = (decode_clo(env81904))[6];
//not do dummy comment
void* cons = (decode_clo(env81904))[5];
//not do dummy comment
void* lst2 = (decode_clo(env81904))[4];
//not do dummy comment
void* kont81588 = (decode_clo(env81904))[3];
//not do dummy comment
void* lst1 = (decode_clo(env81904))[2];
//not do dummy comment
void* car = (decode_clo(env81904))[1];

//if-clause
bool if_guard82540 = is_true(a8148881743);
if(if_guard82540)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81588);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81588))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo82542 = alloc_clo(lam81901_fptr, 6);

//setting env list
clo82542[1] = kont81588;
clo82542[2] = lst2;
clo82542[3] = cons;
clo82542[4] = lst1;
clo82542[5] = append;
clo82542[6] = cdr;
void* f8159181744 = encode_clo(clo82542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8159181744;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam81903 = encode_clo(alloc_clo(lam81903_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81905 = arg_buffer[1];
//reading env and args
void* kont81588 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo82544 = alloc_clo(lam81903_fptr, 7);

//setting env list
clo82544[1] = car;
clo82544[2] = lst1;
clo82544[3] = kont81588;
clo82544[4] = lst2;
clo82544[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo82544[6] = append;
clo82544[7] = cdr;
void* f8159281742 = encode_clo(clo82544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8159281742;
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
void* _81906 = arg_buffer[1];
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

void* kont8159381750 = prim_car(lst);
void* lst81751 = prim_cdr(lst);
void* x8149281752 = apply_prim_hash(lst81751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8159381750);
arg_buffer[2] = x8149281752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8159381750))[0]);
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
void* _81907 = arg_buffer[1];
//reading env and args
void* kont81595 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8149381753 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81595);
arg_buffer[2] = x8149381753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81595))[0]);
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
void* _81908 = arg_buffer[1];
//reading env and args
void* kont81596 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8149481754 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81596);
arg_buffer[2] = x8149481754;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81596))[0]);
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
void* _81909 = arg_buffer[1];
//reading env and args
void* kont81597 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8149581755 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81597);
arg_buffer[2] = x8149581755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81597))[0]);
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
void* _81910 = arg_buffer[1];
//reading env and args
void* kont81598 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8149681756 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81598);
arg_buffer[2] = x8149681756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81598))[0]);
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
void* _81915 = arg_buffer[1];
//reading env and args
void* kont81599 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar82545 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar82545, "100.8", 10);
void* a8149781757 = encode_mpf(mpfvar82545);
mpz_t* mpzvar82546 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82546, "80", 10);
void* a8149881758 = encode_mpz(mpzvar82546);
mpz_t* mpzvar82547 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar82547, "10", 10);
void* a8149981759 = encode_mpz(mpzvar82547);
mpf_t* mpfvar82548 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar82548, "2.4", 10);
void* a8150081760 = encode_mpf(mpfvar82548);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = kont81599;
arg_buffer[3] = a8149781757;
arg_buffer[4] = a8149881758;
arg_buffer[5] = a8149981759;
arg_buffer[6] = a8150081760;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam81916_fptr() // lam81916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env81917 = arg_buffer[1];
//reading env and args
void* x8150181762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont81600 = (decode_clo(env81917))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont81600);
arg_buffer[2] = x8150181762;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont81600))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam81916 = encode_clo(alloc_clo(lam81916_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _81918 = arg_buffer[1];
//reading env and args
void* kont81600 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo82550 = alloc_clo(lam81916_fptr, 1);

//setting env list
clo82550[1] = kont81600;
void* f8160181761 = encode_clo(clo82550);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8160181761;
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

