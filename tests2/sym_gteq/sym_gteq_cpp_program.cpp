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
void* _53769 = arg_buffer[1];
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

void* kont5350753607 = prim_car(lst);
void* lst53608 = prim_cdr(lst);
void* x5341853609 = apply_prim__u43(lst53608);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5350753607);
arg_buffer[2] = x5341853609;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5350753607))[0]);
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
void* _53770 = arg_buffer[1];
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

void* kont5350953610 = prim_car(lst);
void* lst53611 = prim_cdr(lst);
void* x5341953612 = apply_prim__u45(lst53611);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5350953610);
arg_buffer[2] = x5341953612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5350953610))[0]);
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
void* _53771 = arg_buffer[1];
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

void* kont5351153613 = prim_car(lst);
void* lst53614 = prim_cdr(lst);
void* x5342053615 = apply_prim__u42(lst53614);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5351153613);
arg_buffer[2] = x5342053615;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5351153613))[0]);
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
void* _53772 = arg_buffer[1];
//reading env and args
void* kont53513 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5342153616 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53513);
arg_buffer[2] = x5342153616;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53513))[0]);
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
void* _53773 = arg_buffer[1];
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

void* kont5351453617 = prim_car(lst);
void* lst53618 = prim_cdr(lst);
void* x5342253619 = apply_prim__u47(lst53618);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5351453617);
arg_buffer[2] = x5342253619;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5351453617))[0]);
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
void* _53774 = arg_buffer[1];
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

void* kont5351653620 = prim_car(lst);
void* lst53621 = prim_cdr(lst);
void* x5342353622 = apply_prim__u61(lst53621);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5351653620);
arg_buffer[2] = x5342353622;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5351653620))[0]);
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
void* _53775 = arg_buffer[1];
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

void* kont5351853623 = prim_car(lst);
void* lst53624 = prim_cdr(lst);
void* x5342453625 = apply_prim__u62(lst53624);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5351853623);
arg_buffer[2] = x5342453625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5351853623))[0]);
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
void* _53776 = arg_buffer[1];
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

void* kont5352053626 = prim_car(lst);
void* lst53627 = prim_cdr(lst);
void* x5342553628 = apply_prim__u60(lst53627);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5352053626);
arg_buffer[2] = x5342553628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5352053626))[0]);
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
void* _53777 = arg_buffer[1];
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

void* kont5352253629 = prim_car(lst);
void* lst53630 = prim_cdr(lst);
void* x5342653631 = apply_prim__u60_u61(lst53630);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5352253629);
arg_buffer[2] = x5342653631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5352253629))[0]);
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
void* _53778 = arg_buffer[1];
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

void* kont5352453632 = prim_car(lst);
void* lst53633 = prim_cdr(lst);
void* x5342753634 = apply_prim__u62_u61(lst53633);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5352453632);
arg_buffer[2] = x5342753634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5352453632))[0]);
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
void* _53779 = arg_buffer[1];
//reading env and args
void* kont53526 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5342853635 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53526);
arg_buffer[2] = x5342853635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53526))[0]);
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
void* _53780 = arg_buffer[1];
//reading env and args
void* kont53527 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5342953636 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53527);
arg_buffer[2] = x5342953636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53527))[0]);
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
void* _53781 = arg_buffer[1];
//reading env and args
void* kont53528 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5343053637 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53528);
arg_buffer[2] = x5343053637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53528))[0]);
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
void* _53782 = arg_buffer[1];
//reading env and args
void* kont53529 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5343153638 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53529);
arg_buffer[2] = x5343153638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53529))[0]);
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
void* _53783 = arg_buffer[1];
//reading env and args
void* kont53530 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5343253639 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53530);
arg_buffer[2] = x5343253639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53530))[0]);
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
void* _53784 = arg_buffer[1];
//reading env and args
void* kont53531 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5343353640 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53531);
arg_buffer[2] = x5343353640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53531))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam53785_fptr() // lam53785 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53786 = arg_buffer[1];
//reading env and args
void* a5343653644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53532 = (decode_clo(env53786))[3];
//not do dummy comment
void* a5343453641 = (decode_clo(env53786))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env53786))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont53532;
arg_buffer[3] = a5343453641;
arg_buffer[4] = a5343653644;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53785 = encode_clo(alloc_clo(lam53785_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53789 = arg_buffer[1];
//reading env and args
void* kont53532 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54466 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54466, "0", 10);
void* a5343453641 = encode_mpz(mpzvar54466);
mpz_t* mpzvar54467 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54467, "2", 10);
void* a5343553642 = encode_mpz(mpzvar54467);

//creating new closure instance
void** clo54469 = alloc_clo(lam53785_fptr, 3);

//setting env list
clo54469[1] = equal_u63;
clo54469[2] = a5343453641;
clo54469[3] = kont53532;
void* f5353353643 = encode_clo(clo54469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5353353643;
arg_buffer[3] = x;
arg_buffer[4] = a5343553642;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam53790_fptr() // lam53790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53791 = arg_buffer[1];
//reading env and args
void* a5343953648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env53791))[3];
//not do dummy comment
void* a5343753645 = (decode_clo(env53791))[2];
//not do dummy comment
void* kont53534 = (decode_clo(env53791))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont53534;
arg_buffer[3] = a5343753645;
arg_buffer[4] = a5343953648;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53790 = encode_clo(alloc_clo(lam53790_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53794 = arg_buffer[1];
//reading env and args
void* kont53534 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54470 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54470, "1", 10);
void* a5343753645 = encode_mpz(mpzvar54470);
mpz_t* mpzvar54471 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54471, "2", 10);
void* a5343853646 = encode_mpz(mpzvar54471);

//creating new closure instance
void** clo54473 = alloc_clo(lam53790_fptr, 3);

//setting env list
clo54473[1] = kont53534;
clo54473[2] = a5343753645;
clo54473[3] = equal_u63;
void* f5353553647 = encode_clo(clo54473);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5353553647;
arg_buffer[3] = x;
arg_buffer[4] = a5343853646;
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
void* _53795 = arg_buffer[1];
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

void* kont5353653649 = prim_car(x);
void* x53650 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5353653649);
arg_buffer[2] = x53650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5353653649))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam53798_fptr() // lam53798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53799 = arg_buffer[1];
//reading env and args
void* a5344553660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53538 = (decode_clo(env53799))[3];
//not do dummy comment
void* x = (decode_clo(env53799))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env53799))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont53538;
arg_buffer[3] = x;
arg_buffer[4] = a5344553660;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53798 = encode_clo(alloc_clo(lam53798_fptr, 0));

void* lam53800_fptr() // lam53800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53801 = arg_buffer[1];
//reading env and args
void* a5344353657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53801))[5];
//not do dummy comment
void* kont53538 = (decode_clo(env53801))[4];
//not do dummy comment
void* lst = (decode_clo(env53801))[3];
//not do dummy comment
void* x = (decode_clo(env53801))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env53801))[1];

//if-clause
bool if_guard54474 = is_true(a5344353657);
if(if_guard54474)
{
void* x5344453658 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53538);
arg_buffer[2] = x5344453658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53538))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54476 = alloc_clo(lam53798_fptr, 3);

//setting env list
clo54476[1] = member_u63;
clo54476[2] = x;
clo54476[3] = kont53538;
void* f5353953659 = encode_clo(clo54476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5353953659;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53800 = encode_clo(alloc_clo(lam53800_fptr, 0));

void* lam53802_fptr() // lam53802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53803 = arg_buffer[1];
//reading env and args
void* a5344253655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53803))[6];
//not do dummy comment
void* kont53538 = (decode_clo(env53803))[5];
//not do dummy comment
void* lst = (decode_clo(env53803))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env53803))[3];
//not do dummy comment
void* x = (decode_clo(env53803))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env53803))[1];

//creating new closure instance
void** clo54478 = alloc_clo(lam53800_fptr, 5);

//setting env list
clo54478[1] = member_u63;
clo54478[2] = x;
clo54478[3] = lst;
clo54478[4] = kont53538;
clo54478[5] = cdr;
void* f5354053656 = encode_clo(clo54478);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5354053656;
arg_buffer[3] = a5344253655;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53802 = encode_clo(alloc_clo(lam53802_fptr, 0));

void* lam53804_fptr() // lam53804 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53805 = arg_buffer[1];
//reading env and args
void* a5344053652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53805))[7];
//not do dummy comment
void* kont53538 = (decode_clo(env53805))[6];
//not do dummy comment
void* lst = (decode_clo(env53805))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env53805))[4];
//not do dummy comment
void* x = (decode_clo(env53805))[3];
//not do dummy comment
void* car = (decode_clo(env53805))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env53805))[1];

//if-clause
bool if_guard54479 = is_true(a5344053652);
if(if_guard54479)
{
void* x5344153653 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53538);
arg_buffer[2] = x5344153653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53538))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54481 = alloc_clo(lam53802_fptr, 6);

//setting env list
clo54481[1] = member_u63;
clo54481[2] = x;
clo54481[3] = equal_u63;
clo54481[4] = lst;
clo54481[5] = kont53538;
clo54481[6] = cdr;
void* f5354153654 = encode_clo(clo54481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5354153654;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53804 = encode_clo(alloc_clo(lam53804_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53806 = arg_buffer[1];
//reading env and args
void* kont53538 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54483 = alloc_clo(lam53804_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo54483[1] = member_u63;
clo54483[2] = car;
clo54483[3] = x;
clo54483[4] = equal_u63;
clo54483[5] = lst;
clo54483[6] = kont53538;
clo54483[7] = cdr;
void* f5354253651 = encode_clo(clo54483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5354253651;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam53807_fptr() // lam53807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53808 = arg_buffer[1];
//reading env and args
void* a5344953668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5344853666 = (decode_clo(env53808))[4];
//not do dummy comment
void* kont53543 = (decode_clo(env53808))[3];
//not do dummy comment
void* fun = (decode_clo(env53808))[2];
//not do dummy comment
void* foldl = (decode_clo(env53808))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont53543;
arg_buffer[3] = fun;
arg_buffer[4] = a5344853666;
arg_buffer[5] = a5344953668;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53807 = encode_clo(alloc_clo(lam53807_fptr, 0));

void* lam53809_fptr() // lam53809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53810 = arg_buffer[1];
//reading env and args
void* a5344853666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53810))[5];
//not do dummy comment
void* lst = (decode_clo(env53810))[4];
//not do dummy comment
void* kont53543 = (decode_clo(env53810))[3];
//not do dummy comment
void* fun = (decode_clo(env53810))[2];
//not do dummy comment
void* foldl = (decode_clo(env53810))[1];

//creating new closure instance
void** clo54485 = alloc_clo(lam53807_fptr, 4);

//setting env list
clo54485[1] = foldl;
clo54485[2] = fun;
clo54485[3] = kont53543;
clo54485[4] = a5344853666;
void* f5354453667 = encode_clo(clo54485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5354453667;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53809 = encode_clo(alloc_clo(lam53809_fptr, 0));

void* lam53811_fptr() // lam53811 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53812 = arg_buffer[1];
//reading env and args
void* a5344753664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53812))[6];
//not do dummy comment
void* lst = (decode_clo(env53812))[5];
//not do dummy comment
void* kont53543 = (decode_clo(env53812))[4];
//not do dummy comment
void* fun = (decode_clo(env53812))[3];
//not do dummy comment
void* acc = (decode_clo(env53812))[2];
//not do dummy comment
void* foldl = (decode_clo(env53812))[1];

//creating new closure instance
void** clo54487 = alloc_clo(lam53809_fptr, 5);

//setting env list
clo54487[1] = foldl;
clo54487[2] = fun;
clo54487[3] = kont53543;
clo54487[4] = lst;
clo54487[5] = cdr;
void* f5354553665 = encode_clo(clo54487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5354553665;
arg_buffer[3] = a5344753664;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53811 = encode_clo(alloc_clo(lam53811_fptr, 0));

void* lam53813_fptr() // lam53813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53814 = arg_buffer[1];
//reading env and args
void* a5344653662 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53814))[7];
//not do dummy comment
void* lst = (decode_clo(env53814))[6];
//not do dummy comment
void* kont53543 = (decode_clo(env53814))[5];
//not do dummy comment
void* fun = (decode_clo(env53814))[4];
//not do dummy comment
void* acc = (decode_clo(env53814))[3];
//not do dummy comment
void* car = (decode_clo(env53814))[2];
//not do dummy comment
void* foldl = (decode_clo(env53814))[1];

//if-clause
bool if_guard54488 = is_true(a5344653662);
if(if_guard54488)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53543);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53543))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54490 = alloc_clo(lam53811_fptr, 6);

//setting env list
clo54490[1] = foldl;
clo54490[2] = acc;
clo54490[3] = fun;
clo54490[4] = kont53543;
clo54490[5] = lst;
clo54490[6] = cdr;
void* f5354653663 = encode_clo(clo54490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5354653663;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53813 = encode_clo(alloc_clo(lam53813_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53815 = arg_buffer[1];
//reading env and args
void* kont53543 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54492 = alloc_clo(lam53813_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo54492[1] = foldl;
clo54492[2] = car;
clo54492[3] = acc;
clo54492[4] = fun;
clo54492[5] = kont53543;
clo54492[6] = lst;
clo54492[7] = cdr;
void* f5354753661 = encode_clo(clo54492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5354753661;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam53816_fptr() // lam53816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53817 = arg_buffer[1];
//reading env and args
void* a5345353676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53548 = (decode_clo(env53817))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53817))[2];
//not do dummy comment
void* a5345153672 = (decode_clo(env53817))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont53548;
arg_buffer[3] = a5345153672;
arg_buffer[4] = a5345353676;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53816 = encode_clo(alloc_clo(lam53816_fptr, 0));

void* lam53818_fptr() // lam53818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53819 = arg_buffer[1];
//reading env and args
void* a5345253674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53548 = (decode_clo(env53819))[5];
//not do dummy comment
void* lst2 = (decode_clo(env53819))[4];
//not do dummy comment
void* cons = (decode_clo(env53819))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53819))[2];
//not do dummy comment
void* a5345153672 = (decode_clo(env53819))[1];

//creating new closure instance
void** clo54494 = alloc_clo(lam53816_fptr, 3);

//setting env list
clo54494[1] = a5345153672;
clo54494[2] = reverse_u45helper;
clo54494[3] = kont53548;
void* f5354953675 = encode_clo(clo54494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5354953675;
arg_buffer[3] = a5345253674;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53818 = encode_clo(alloc_clo(lam53818_fptr, 0));

void* lam53820_fptr() // lam53820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53821 = arg_buffer[1];
//reading env and args
void* a5345153672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53821))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53821))[5];
//not do dummy comment
void* kont53548 = (decode_clo(env53821))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53821))[3];
//not do dummy comment
void* car = (decode_clo(env53821))[2];
//not do dummy comment
void* cons = (decode_clo(env53821))[1];

//creating new closure instance
void** clo54496 = alloc_clo(lam53818_fptr, 5);

//setting env list
clo54496[1] = a5345153672;
clo54496[2] = reverse_u45helper;
clo54496[3] = cons;
clo54496[4] = lst2;
clo54496[5] = kont53548;
void* f5355053673 = encode_clo(clo54496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5355053673;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53820 = encode_clo(alloc_clo(lam53820_fptr, 0));

void* lam53822_fptr() // lam53822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53823 = arg_buffer[1];
//reading env and args
void* a5345053670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53823))[7];
//not do dummy comment
void* lst = (decode_clo(env53823))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53823))[5];
//not do dummy comment
void* kont53548 = (decode_clo(env53823))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53823))[3];
//not do dummy comment
void* car = (decode_clo(env53823))[2];
//not do dummy comment
void* cons = (decode_clo(env53823))[1];

//if-clause
bool if_guard54497 = is_true(a5345053670);
if(if_guard54497)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53548);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53548))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54499 = alloc_clo(lam53820_fptr, 6);

//setting env list
clo54499[1] = cons;
clo54499[2] = car;
clo54499[3] = lst2;
clo54499[4] = kont53548;
clo54499[5] = reverse_u45helper;
clo54499[6] = lst;
void* f5355153671 = encode_clo(clo54499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5355153671;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53822 = encode_clo(alloc_clo(lam53822_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53824 = arg_buffer[1];
//reading env and args
void* kont53548 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54501 = alloc_clo(lam53822_fptr, 7);

//setting env list
clo54501[1] = cons;
clo54501[2] = car;
clo54501[3] = lst2;
clo54501[4] = kont53548;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo54501[5] = reverse_u45helper;
clo54501[6] = lst;
clo54501[7] = cdr;
void* f5355253669 = encode_clo(clo54501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5355253669;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam53825_fptr() // lam53825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53826 = arg_buffer[1];
//reading env and args
void* a5345453678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53553 = (decode_clo(env53826))[3];
//not do dummy comment
void* lst = (decode_clo(env53826))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53826))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont53553;
arg_buffer[3] = lst;
arg_buffer[4] = a5345453678;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53825 = encode_clo(alloc_clo(lam53825_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53827 = arg_buffer[1];
//reading env and args
void* kont53553 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54503 = alloc_clo(lam53825_fptr, 3);

//setting env list
clo54503[1] = reverse_u45helper;
clo54503[2] = lst;
clo54503[3] = kont53553;
void* f5355453677 = encode_clo(clo54503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5355453677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam53828_fptr() // lam53828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53829 = arg_buffer[1];
//reading env and args
void* x5345753683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53555 = (decode_clo(env53829))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53555);
arg_buffer[2] = x5345753683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53555))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53828 = encode_clo(alloc_clo(lam53828_fptr, 0));

void* lam53830_fptr() // lam53830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53831 = arg_buffer[1];
//reading env and args
void* a5346253692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53555 = (decode_clo(env53831))[4];
//not do dummy comment
void* a5345853685 = (decode_clo(env53831))[3];
//not do dummy comment
void* a5346053688 = (decode_clo(env53831))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env53831))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont53555;
arg_buffer[3] = a5345853685;
arg_buffer[4] = a5346053688;
arg_buffer[5] = a5346253692;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53830 = encode_clo(alloc_clo(lam53830_fptr, 0));

void* lam53832_fptr() // lam53832 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53833 = arg_buffer[1];
//reading env and args
void* a5346153690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53555 = (decode_clo(env53833))[6];
//not do dummy comment
void* a5345853685 = (decode_clo(env53833))[5];
//not do dummy comment
void* a5346053688 = (decode_clo(env53833))[4];
//not do dummy comment
void* cons = (decode_clo(env53833))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env53833))[2];
//not do dummy comment
void* lst2 = (decode_clo(env53833))[1];

//creating new closure instance
void** clo54505 = alloc_clo(lam53830_fptr, 4);

//setting env list
clo54505[1] = take_u45helper;
clo54505[2] = a5346053688;
clo54505[3] = a5345853685;
clo54505[4] = kont53555;
void* f5355753691 = encode_clo(clo54505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5355753691;
arg_buffer[3] = a5346153690;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53832 = encode_clo(alloc_clo(lam53832_fptr, 0));

void* lam53834_fptr() // lam53834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53835 = arg_buffer[1];
//reading env and args
void* a5346053688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53555 = (decode_clo(env53835))[7];
//not do dummy comment
void* car = (decode_clo(env53835))[6];
//not do dummy comment
void* cons = (decode_clo(env53835))[5];
//not do dummy comment
void* lst = (decode_clo(env53835))[4];
//not do dummy comment
void* a5345853685 = (decode_clo(env53835))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env53835))[2];
//not do dummy comment
void* lst2 = (decode_clo(env53835))[1];

//creating new closure instance
void** clo54507 = alloc_clo(lam53832_fptr, 6);

//setting env list
clo54507[1] = lst2;
clo54507[2] = take_u45helper;
clo54507[3] = cons;
clo54507[4] = a5346053688;
clo54507[5] = a5345853685;
clo54507[6] = kont53555;
void* f5355853689 = encode_clo(clo54507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5355853689;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53834 = encode_clo(alloc_clo(lam53834_fptr, 0));

void* lam53837_fptr() // lam53837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53838 = arg_buffer[1];
//reading env and args
void* a5345853685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53555 = (decode_clo(env53838))[8];
//not do dummy comment
void* lst = (decode_clo(env53838))[7];
//not do dummy comment
void* cons = (decode_clo(env53838))[6];
//not do dummy comment
void* _u45 = (decode_clo(env53838))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env53838))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53838))[3];
//not do dummy comment
void* n = (decode_clo(env53838))[2];
//not do dummy comment
void* car = (decode_clo(env53838))[1];
mpz_t* mpzvar54508 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54508, "1", 10);
void* a5345953686 = encode_mpz(mpzvar54508);

//creating new closure instance
void** clo54510 = alloc_clo(lam53834_fptr, 7);

//setting env list
clo54510[1] = lst2;
clo54510[2] = take_u45helper;
clo54510[3] = a5345853685;
clo54510[4] = lst;
clo54510[5] = cons;
clo54510[6] = car;
clo54510[7] = kont53555;
void* f5355953687 = encode_clo(clo54510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5355953687;
arg_buffer[3] = n;
arg_buffer[4] = a5345953686;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53837 = encode_clo(alloc_clo(lam53837_fptr, 0));

void* lam53839_fptr() // lam53839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53840 = arg_buffer[1];
//reading env and args
void* a5345653681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53840))[10];
//not do dummy comment
void* kont53555 = (decode_clo(env53840))[9];
//not do dummy comment
void* lst = (decode_clo(env53840))[8];
//not do dummy comment
void* reverse = (decode_clo(env53840))[7];
//not do dummy comment
void* cons = (decode_clo(env53840))[6];
//not do dummy comment
void* _u45 = (decode_clo(env53840))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env53840))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53840))[3];
//not do dummy comment
void* n = (decode_clo(env53840))[2];
//not do dummy comment
void* car = (decode_clo(env53840))[1];

//if-clause
bool if_guard54511 = is_true(a5345653681);
if(if_guard54511)
{

//creating new closure instance
void** clo54513 = alloc_clo(lam53828_fptr, 1);

//setting env list
clo54513[1] = kont53555;
void* f5355653682 = encode_clo(clo54513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5355653682;
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
void** clo54515 = alloc_clo(lam53837_fptr, 8);

//setting env list
clo54515[1] = car;
clo54515[2] = n;
clo54515[3] = lst2;
clo54515[4] = take_u45helper;
clo54515[5] = _u45;
clo54515[6] = cons;
clo54515[7] = lst;
clo54515[8] = kont53555;
void* f5356053684 = encode_clo(clo54515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5356053684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53839 = encode_clo(alloc_clo(lam53839_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53842 = arg_buffer[1];
//reading env and args
void* kont53555 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar54516 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54516, "0", 10);
void* a5345553679 = encode_mpz(mpzvar54516);

//creating new closure instance
void** clo54518 = alloc_clo(lam53839_fptr, 10);

//setting env list
clo54518[1] = car;
clo54518[2] = n;
clo54518[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo54518[4] = take_u45helper;
clo54518[5] = _u45;
clo54518[6] = cons;
clo54518[7] = reverse;
clo54518[8] = lst;
clo54518[9] = kont53555;
clo54518[10] = cdr;
void* f5356153680 = encode_clo(clo54518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5356153680;
arg_buffer[3] = n;
arg_buffer[4] = a5345553679;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam53843_fptr() // lam53843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53844 = arg_buffer[1];
//reading env and args
void* a5346353694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53844))[4];
//not do dummy comment
void* kont53562 = (decode_clo(env53844))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env53844))[2];
//not do dummy comment
void* n = (decode_clo(env53844))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont53562;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5346353694;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53843 = encode_clo(alloc_clo(lam53843_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53845 = arg_buffer[1];
//reading env and args
void* kont53562 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54520 = alloc_clo(lam53843_fptr, 4);

//setting env list
clo54520[1] = n;
clo54520[2] = take_u45helper;
clo54520[3] = kont53562;
clo54520[4] = lst;
void* f5356353693 = encode_clo(clo54520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5356353693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam53847_fptr() // lam53847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53848 = arg_buffer[1];
//reading env and args
void* a5346853702 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5346653698 = (decode_clo(env53848))[3];
//not do dummy comment
void* _u43 = (decode_clo(env53848))[2];
//not do dummy comment
void* kont53564 = (decode_clo(env53848))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont53564;
arg_buffer[3] = a5346653698;
arg_buffer[4] = a5346853702;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53847 = encode_clo(alloc_clo(lam53847_fptr, 0));

void* lam53849_fptr() // lam53849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53850 = arg_buffer[1];
//reading env and args
void* a5346753700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5346653698 = (decode_clo(env53850))[4];
//not do dummy comment
void* length = (decode_clo(env53850))[3];
//not do dummy comment
void* _u43 = (decode_clo(env53850))[2];
//not do dummy comment
void* kont53564 = (decode_clo(env53850))[1];

//creating new closure instance
void** clo54522 = alloc_clo(lam53847_fptr, 3);

//setting env list
clo54522[1] = kont53564;
clo54522[2] = _u43;
clo54522[3] = a5346653698;
void* f5356553701 = encode_clo(clo54522);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5356553701;
arg_buffer[3] = a5346753700;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53849 = encode_clo(alloc_clo(lam53849_fptr, 0));

void* lam53852_fptr() // lam53852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53853 = arg_buffer[1];
//reading env and args
void* a5346453696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53853))[5];
//not do dummy comment
void* lst = (decode_clo(env53853))[4];
//not do dummy comment
void* length = (decode_clo(env53853))[3];
//not do dummy comment
void* _u43 = (decode_clo(env53853))[2];
//not do dummy comment
void* kont53564 = (decode_clo(env53853))[1];

//if-clause
bool if_guard54523 = is_true(a5346453696);
if(if_guard54523)
{
mpz_t* mpzvar54524 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54524, "0", 10);
void* x5346553697 = encode_mpz(mpzvar54524);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53564);
arg_buffer[2] = x5346553697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53564))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar54525 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54525, "1", 10);
void* a5346653698 = encode_mpz(mpzvar54525);

//creating new closure instance
void** clo54527 = alloc_clo(lam53849_fptr, 4);

//setting env list
clo54527[1] = kont53564;
clo54527[2] = _u43;
clo54527[3] = length;
clo54527[4] = a5346653698;
void* f5356653699 = encode_clo(clo54527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5356653699;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53852 = encode_clo(alloc_clo(lam53852_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53854 = arg_buffer[1];
//reading env and args
void* kont53564 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54529 = alloc_clo(lam53852_fptr, 5);

//setting env list
clo54529[1] = kont53564;
clo54529[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo54529[3] = length;
clo54529[4] = lst;
clo54529[5] = cdr;
void* f5356753695 = encode_clo(clo54529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5356753695;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam53855_fptr() // lam53855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53856 = arg_buffer[1];
//reading env and args
void* x5347053706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53568 = (decode_clo(env53856))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53568);
arg_buffer[2] = x5347053706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53568))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53855 = encode_clo(alloc_clo(lam53855_fptr, 0));

void* lam53857_fptr() // lam53857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53858 = arg_buffer[1];
//reading env and args
void* a5347453714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5347253710 = (decode_clo(env53858))[3];
//not do dummy comment
void* cons = (decode_clo(env53858))[2];
//not do dummy comment
void* kont53568 = (decode_clo(env53858))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53568;
arg_buffer[3] = a5347253710;
arg_buffer[4] = a5347453714;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53857 = encode_clo(alloc_clo(lam53857_fptr, 0));

void* lam53859_fptr() // lam53859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53860 = arg_buffer[1];
//reading env and args
void* a5347353712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env53860))[5];
//not do dummy comment
void* proc = (decode_clo(env53860))[4];
//not do dummy comment
void* a5347253710 = (decode_clo(env53860))[3];
//not do dummy comment
void* cons = (decode_clo(env53860))[2];
//not do dummy comment
void* kont53568 = (decode_clo(env53860))[1];

//creating new closure instance
void** clo54531 = alloc_clo(lam53857_fptr, 3);

//setting env list
clo54531[1] = kont53568;
clo54531[2] = cons;
clo54531[3] = a5347253710;
void* f5357053713 = encode_clo(clo54531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5357053713;
arg_buffer[3] = proc;
arg_buffer[4] = a5347353712;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53859 = encode_clo(alloc_clo(lam53859_fptr, 0));

void* lam53861_fptr() // lam53861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53862 = arg_buffer[1];
//reading env and args
void* a5347253710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53862))[6];
//not do dummy comment
void* lst = (decode_clo(env53862))[5];
//not do dummy comment
void* map = (decode_clo(env53862))[4];
//not do dummy comment
void* proc = (decode_clo(env53862))[3];
//not do dummy comment
void* cons = (decode_clo(env53862))[2];
//not do dummy comment
void* kont53568 = (decode_clo(env53862))[1];

//creating new closure instance
void** clo54533 = alloc_clo(lam53859_fptr, 5);

//setting env list
clo54533[1] = kont53568;
clo54533[2] = cons;
clo54533[3] = a5347253710;
clo54533[4] = proc;
clo54533[5] = map;
void* f5357153711 = encode_clo(clo54533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5357153711;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53861 = encode_clo(alloc_clo(lam53861_fptr, 0));

void* lam53863_fptr() // lam53863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53864 = arg_buffer[1];
//reading env and args
void* a5347153708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53864))[6];
//not do dummy comment
void* lst = (decode_clo(env53864))[5];
//not do dummy comment
void* map = (decode_clo(env53864))[4];
//not do dummy comment
void* proc = (decode_clo(env53864))[3];
//not do dummy comment
void* cons = (decode_clo(env53864))[2];
//not do dummy comment
void* kont53568 = (decode_clo(env53864))[1];

//creating new closure instance
void** clo54535 = alloc_clo(lam53861_fptr, 6);

//setting env list
clo54535[1] = kont53568;
clo54535[2] = cons;
clo54535[3] = proc;
clo54535[4] = map;
clo54535[5] = lst;
clo54535[6] = cdr;
void* f5357253709 = encode_clo(clo54535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5357253709;
arg_buffer[3] = a5347153708;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53863 = encode_clo(alloc_clo(lam53863_fptr, 0));

void* lam53865_fptr() // lam53865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53866 = arg_buffer[1];
//reading env and args
void* a5346953704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53866))[8];
//not do dummy comment
void* map = (decode_clo(env53866))[7];
//not do dummy comment
void* proc = (decode_clo(env53866))[6];
//not do dummy comment
void* car = (decode_clo(env53866))[5];
//not do dummy comment
void* cons = (decode_clo(env53866))[4];
//not do dummy comment
void* kont53568 = (decode_clo(env53866))[3];
//not do dummy comment
void* list = (decode_clo(env53866))[2];
//not do dummy comment
void* cdr = (decode_clo(env53866))[1];

//if-clause
bool if_guard54536 = is_true(a5346953704);
if(if_guard54536)
{

//creating new closure instance
void** clo54538 = alloc_clo(lam53855_fptr, 1);

//setting env list
clo54538[1] = kont53568;
void* f5356953705 = encode_clo(clo54538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5356953705;
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
void** clo54540 = alloc_clo(lam53863_fptr, 6);

//setting env list
clo54540[1] = kont53568;
clo54540[2] = cons;
clo54540[3] = proc;
clo54540[4] = map;
clo54540[5] = lst;
clo54540[6] = cdr;
void* f5357353707 = encode_clo(clo54540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5357353707;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53865 = encode_clo(alloc_clo(lam53865_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53867 = arg_buffer[1];
//reading env and args
void* kont53568 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54542 = alloc_clo(lam53865_fptr, 8);

//setting env list
clo54542[1] = cdr;
clo54542[2] = list;
clo54542[3] = kont53568;
clo54542[4] = cons;
clo54542[5] = car;
clo54542[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo54542[7] = map;
clo54542[8] = lst;
void* f5357453703 = encode_clo(clo54542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5357453703;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam53868_fptr() // lam53868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53869 = arg_buffer[1];
//reading env and args
void* x5347653718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53575 = (decode_clo(env53869))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53575);
arg_buffer[2] = x5347653718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53575))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53868 = encode_clo(alloc_clo(lam53868_fptr, 0));

void* lam53870_fptr() // lam53870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53871 = arg_buffer[1];
//reading env and args
void* a5348153728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53575 = (decode_clo(env53871))[3];
//not do dummy comment
void* a5347953724 = (decode_clo(env53871))[2];
//not do dummy comment
void* cons = (decode_clo(env53871))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53575;
arg_buffer[3] = a5347953724;
arg_buffer[4] = a5348153728;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53870 = encode_clo(alloc_clo(lam53870_fptr, 0));

void* lam53872_fptr() // lam53872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53873 = arg_buffer[1];
//reading env and args
void* a5348053726 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53575 = (decode_clo(env53873))[5];
//not do dummy comment
void* op = (decode_clo(env53873))[4];
//not do dummy comment
void* a5347953724 = (decode_clo(env53873))[3];
//not do dummy comment
void* filter = (decode_clo(env53873))[2];
//not do dummy comment
void* cons = (decode_clo(env53873))[1];

//creating new closure instance
void** clo54544 = alloc_clo(lam53870_fptr, 3);

//setting env list
clo54544[1] = cons;
clo54544[2] = a5347953724;
clo54544[3] = kont53575;
void* f5357753727 = encode_clo(clo54544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5357753727;
arg_buffer[3] = op;
arg_buffer[4] = a5348053726;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53872 = encode_clo(alloc_clo(lam53872_fptr, 0));

void* lam53874_fptr() // lam53874 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53875 = arg_buffer[1];
//reading env and args
void* a5347953724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53875))[6];
//not do dummy comment
void* lst = (decode_clo(env53875))[5];
//not do dummy comment
void* kont53575 = (decode_clo(env53875))[4];
//not do dummy comment
void* op = (decode_clo(env53875))[3];
//not do dummy comment
void* filter = (decode_clo(env53875))[2];
//not do dummy comment
void* cons = (decode_clo(env53875))[1];

//creating new closure instance
void** clo54546 = alloc_clo(lam53872_fptr, 5);

//setting env list
clo54546[1] = cons;
clo54546[2] = filter;
clo54546[3] = a5347953724;
clo54546[4] = op;
clo54546[5] = kont53575;
void* f5357853725 = encode_clo(clo54546);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5357853725;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53874 = encode_clo(alloc_clo(lam53874_fptr, 0));

void* lam53876_fptr() // lam53876 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53877 = arg_buffer[1];
//reading env and args
void* a5348253730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53575 = (decode_clo(env53877))[3];
//not do dummy comment
void* op = (decode_clo(env53877))[2];
//not do dummy comment
void* filter = (decode_clo(env53877))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont53575;
arg_buffer[3] = op;
arg_buffer[4] = a5348253730;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53876 = encode_clo(alloc_clo(lam53876_fptr, 0));

void* lam53878_fptr() // lam53878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53879 = arg_buffer[1];
//reading env and args
void* a5347853722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53879))[7];
//not do dummy comment
void* lst = (decode_clo(env53879))[6];
//not do dummy comment
void* kont53575 = (decode_clo(env53879))[5];
//not do dummy comment
void* op = (decode_clo(env53879))[4];
//not do dummy comment
void* cons = (decode_clo(env53879))[3];
//not do dummy comment
void* filter = (decode_clo(env53879))[2];
//not do dummy comment
void* car = (decode_clo(env53879))[1];

//if-clause
bool if_guard54547 = is_true(a5347853722);
if(if_guard54547)
{

//creating new closure instance
void** clo54549 = alloc_clo(lam53874_fptr, 6);

//setting env list
clo54549[1] = cons;
clo54549[2] = filter;
clo54549[3] = op;
clo54549[4] = kont53575;
clo54549[5] = lst;
clo54549[6] = cdr;
void* f5357953723 = encode_clo(clo54549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5357953723;
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
void** clo54551 = alloc_clo(lam53876_fptr, 3);

//setting env list
clo54551[1] = filter;
clo54551[2] = op;
clo54551[3] = kont53575;
void* f5358053729 = encode_clo(clo54551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5358053729;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53878 = encode_clo(alloc_clo(lam53878_fptr, 0));

void* lam53880_fptr() // lam53880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53881 = arg_buffer[1];
//reading env and args
void* a5347753720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53881))[7];
//not do dummy comment
void* lst = (decode_clo(env53881))[6];
//not do dummy comment
void* kont53575 = (decode_clo(env53881))[5];
//not do dummy comment
void* op = (decode_clo(env53881))[4];
//not do dummy comment
void* cons = (decode_clo(env53881))[3];
//not do dummy comment
void* filter = (decode_clo(env53881))[2];
//not do dummy comment
void* car = (decode_clo(env53881))[1];

//creating new closure instance
void** clo54553 = alloc_clo(lam53878_fptr, 7);

//setting env list
clo54553[1] = car;
clo54553[2] = filter;
clo54553[3] = cons;
clo54553[4] = op;
clo54553[5] = kont53575;
clo54553[6] = lst;
clo54553[7] = cdr;
void* f5358153721 = encode_clo(clo54553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5358153721;
arg_buffer[3] = a5347753720;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53880 = encode_clo(alloc_clo(lam53880_fptr, 0));

void* lam53882_fptr() // lam53882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53883 = arg_buffer[1];
//reading env and args
void* a5347553716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53883))[8];
//not do dummy comment
void* kont53575 = (decode_clo(env53883))[7];
//not do dummy comment
void* op = (decode_clo(env53883))[6];
//not do dummy comment
void* cons = (decode_clo(env53883))[5];
//not do dummy comment
void* list = (decode_clo(env53883))[4];
//not do dummy comment
void* cdr = (decode_clo(env53883))[3];
//not do dummy comment
void* filter = (decode_clo(env53883))[2];
//not do dummy comment
void* car = (decode_clo(env53883))[1];

//if-clause
bool if_guard54554 = is_true(a5347553716);
if(if_guard54554)
{

//creating new closure instance
void** clo54556 = alloc_clo(lam53868_fptr, 1);

//setting env list
clo54556[1] = kont53575;
void* f5357653717 = encode_clo(clo54556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5357653717;
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
void** clo54558 = alloc_clo(lam53880_fptr, 7);

//setting env list
clo54558[1] = car;
clo54558[2] = filter;
clo54558[3] = cons;
clo54558[4] = op;
clo54558[5] = kont53575;
clo54558[6] = lst;
clo54558[7] = cdr;
void* f5358253719 = encode_clo(clo54558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5358253719;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53882 = encode_clo(alloc_clo(lam53882_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53884 = arg_buffer[1];
//reading env and args
void* kont53575 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54560 = alloc_clo(lam53882_fptr, 8);

//setting env list
clo54560[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo54560[2] = filter;
clo54560[3] = cdr;
clo54560[4] = list;
clo54560[5] = cons;
clo54560[6] = op;
clo54560[7] = kont53575;
clo54560[8] = lst;
void* f5358353715 = encode_clo(clo54560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5358353715;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam53885_fptr() // lam53885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53886 = arg_buffer[1];
//reading env and args
void* a5348753738 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env53886))[3];
//not do dummy comment
void* a5348553735 = (decode_clo(env53886))[2];
//not do dummy comment
void* kont53584 = (decode_clo(env53886))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont53584;
arg_buffer[3] = a5348553735;
arg_buffer[4] = a5348753738;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53885 = encode_clo(alloc_clo(lam53885_fptr, 0));

void* lam53888_fptr() // lam53888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53889 = arg_buffer[1];
//reading env and args
void* a5348553735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env53889))[4];
//not do dummy comment
void* n = (decode_clo(env53889))[3];
//not do dummy comment
void* _u45 = (decode_clo(env53889))[2];
//not do dummy comment
void* kont53584 = (decode_clo(env53889))[1];
mpz_t* mpzvar54561 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54561, "1", 10);
void* a5348653736 = encode_mpz(mpzvar54561);

//creating new closure instance
void** clo54563 = alloc_clo(lam53885_fptr, 3);

//setting env list
clo54563[1] = kont53584;
clo54563[2] = a5348553735;
clo54563[3] = drop;
void* f5358553737 = encode_clo(clo54563);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5358553737;
arg_buffer[3] = n;
arg_buffer[4] = a5348653736;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53888 = encode_clo(alloc_clo(lam53888_fptr, 0));

void* lam53890_fptr() // lam53890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53891 = arg_buffer[1];
//reading env and args
void* a5348453733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53891))[6];
//not do dummy comment
void* n = (decode_clo(env53891))[5];
//not do dummy comment
void* lst = (decode_clo(env53891))[4];
//not do dummy comment
void* drop = (decode_clo(env53891))[3];
//not do dummy comment
void* _u45 = (decode_clo(env53891))[2];
//not do dummy comment
void* kont53584 = (decode_clo(env53891))[1];

//if-clause
bool if_guard54564 = is_true(a5348453733);
if(if_guard54564)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53584);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53584))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54566 = alloc_clo(lam53888_fptr, 4);

//setting env list
clo54566[1] = kont53584;
clo54566[2] = _u45;
clo54566[3] = n;
clo54566[4] = drop;
void* f5358653734 = encode_clo(clo54566);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5358653734;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53890 = encode_clo(alloc_clo(lam53890_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53893 = arg_buffer[1];
//reading env and args
void* kont53584 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar54567 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54567, "0", 10);
void* a5348353731 = encode_mpz(mpzvar54567);

//creating new closure instance
void** clo54569 = alloc_clo(lam53890_fptr, 6);

//setting env list
clo54569[1] = kont53584;
clo54569[2] = _u45;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo54569[3] = drop;
clo54569[4] = lst;
clo54569[5] = n;
clo54569[6] = cdr;
void* f5358753732 = encode_clo(clo54569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5358753732;
arg_buffer[3] = n;
arg_buffer[4] = a5348353731;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam53894_fptr() // lam53894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53895 = arg_buffer[1];
//reading env and args
void* a5349153746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53588 = (decode_clo(env53895))[3];
//not do dummy comment
void* proc = (decode_clo(env53895))[2];
//not do dummy comment
void* a5348953742 = (decode_clo(env53895))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont53588;
arg_buffer[3] = a5348953742;
arg_buffer[4] = a5349153746;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53894 = encode_clo(alloc_clo(lam53894_fptr, 0));

void* lam53896_fptr() // lam53896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53897 = arg_buffer[1];
//reading env and args
void* a5349053744 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53588 = (decode_clo(env53897))[5];
//not do dummy comment
void* foldr = (decode_clo(env53897))[4];
//not do dummy comment
void* a5348953742 = (decode_clo(env53897))[3];
//not do dummy comment
void* proc = (decode_clo(env53897))[2];
//not do dummy comment
void* acc = (decode_clo(env53897))[1];

//creating new closure instance
void** clo54571 = alloc_clo(lam53894_fptr, 3);

//setting env list
clo54571[1] = a5348953742;
clo54571[2] = proc;
clo54571[3] = kont53588;
void* f5358953745 = encode_clo(clo54571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5358953745;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5349053744;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53896 = encode_clo(alloc_clo(lam53896_fptr, 0));

void* lam53898_fptr() // lam53898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53899 = arg_buffer[1];
//reading env and args
void* a5348953742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53899))[6];
//not do dummy comment
void* kont53588 = (decode_clo(env53899))[5];
//not do dummy comment
void* foldr = (decode_clo(env53899))[4];
//not do dummy comment
void* lst = (decode_clo(env53899))[3];
//not do dummy comment
void* proc = (decode_clo(env53899))[2];
//not do dummy comment
void* acc = (decode_clo(env53899))[1];

//creating new closure instance
void** clo54573 = alloc_clo(lam53896_fptr, 5);

//setting env list
clo54573[1] = acc;
clo54573[2] = proc;
clo54573[3] = a5348953742;
clo54573[4] = foldr;
clo54573[5] = kont53588;
void* f5359053743 = encode_clo(clo54573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5359053743;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53898 = encode_clo(alloc_clo(lam53898_fptr, 0));

void* lam53900_fptr() // lam53900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53901 = arg_buffer[1];
//reading env and args
void* a5348853740 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53901))[7];
//not do dummy comment
void* kont53588 = (decode_clo(env53901))[6];
//not do dummy comment
void* car = (decode_clo(env53901))[5];
//not do dummy comment
void* foldr = (decode_clo(env53901))[4];
//not do dummy comment
void* lst = (decode_clo(env53901))[3];
//not do dummy comment
void* proc = (decode_clo(env53901))[2];
//not do dummy comment
void* acc = (decode_clo(env53901))[1];

//if-clause
bool if_guard54574 = is_true(a5348853740);
if(if_guard54574)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53588);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53588))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54576 = alloc_clo(lam53898_fptr, 6);

//setting env list
clo54576[1] = acc;
clo54576[2] = proc;
clo54576[3] = lst;
clo54576[4] = foldr;
clo54576[5] = kont53588;
clo54576[6] = cdr;
void* f5359153741 = encode_clo(clo54576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5359153741;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53900 = encode_clo(alloc_clo(lam53900_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53902 = arg_buffer[1];
//reading env and args
void* kont53588 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54578 = alloc_clo(lam53900_fptr, 7);

//setting env list
clo54578[1] = acc;
clo54578[2] = proc;
clo54578[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo54578[4] = foldr;
clo54578[5] = car;
clo54578[6] = kont53588;
clo54578[7] = cdr;
void* f5359253739 = encode_clo(clo54578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5359253739;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam53903_fptr() // lam53903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53904 = arg_buffer[1];
//reading env and args
void* a5349553754 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5349353750 = (decode_clo(env53904))[3];
//not do dummy comment
void* kont53593 = (decode_clo(env53904))[2];
//not do dummy comment
void* cons = (decode_clo(env53904))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53593;
arg_buffer[3] = a5349353750;
arg_buffer[4] = a5349553754;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53903 = encode_clo(alloc_clo(lam53903_fptr, 0));

void* lam53905_fptr() // lam53905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53906 = arg_buffer[1];
//reading env and args
void* a5349453752 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5349353750 = (decode_clo(env53906))[5];
//not do dummy comment
void* lst2 = (decode_clo(env53906))[4];
//not do dummy comment
void* cons = (decode_clo(env53906))[3];
//not do dummy comment
void* append = (decode_clo(env53906))[2];
//not do dummy comment
void* kont53593 = (decode_clo(env53906))[1];

//creating new closure instance
void** clo54580 = alloc_clo(lam53903_fptr, 3);

//setting env list
clo54580[1] = cons;
clo54580[2] = kont53593;
clo54580[3] = a5349353750;
void* f5359453753 = encode_clo(clo54580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5359453753;
arg_buffer[3] = a5349453752;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53905 = encode_clo(alloc_clo(lam53905_fptr, 0));

void* lam53907_fptr() // lam53907 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53908 = arg_buffer[1];
//reading env and args
void* a5349353750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53908))[6];
//not do dummy comment
void* lst2 = (decode_clo(env53908))[5];
//not do dummy comment
void* lst1 = (decode_clo(env53908))[4];
//not do dummy comment
void* cons = (decode_clo(env53908))[3];
//not do dummy comment
void* append = (decode_clo(env53908))[2];
//not do dummy comment
void* kont53593 = (decode_clo(env53908))[1];

//creating new closure instance
void** clo54582 = alloc_clo(lam53905_fptr, 5);

//setting env list
clo54582[1] = kont53593;
clo54582[2] = append;
clo54582[3] = cons;
clo54582[4] = lst2;
clo54582[5] = a5349353750;
void* f5359553751 = encode_clo(clo54582);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5359553751;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53907 = encode_clo(alloc_clo(lam53907_fptr, 0));

void* lam53909_fptr() // lam53909 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53910 = arg_buffer[1];
//reading env and args
void* a5349253748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53910))[7];
//not do dummy comment
void* lst2 = (decode_clo(env53910))[6];
//not do dummy comment
void* cons = (decode_clo(env53910))[5];
//not do dummy comment
void* append = (decode_clo(env53910))[4];
//not do dummy comment
void* kont53593 = (decode_clo(env53910))[3];
//not do dummy comment
void* lst1 = (decode_clo(env53910))[2];
//not do dummy comment
void* car = (decode_clo(env53910))[1];

//if-clause
bool if_guard54583 = is_true(a5349253748);
if(if_guard54583)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53593);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53593))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54585 = alloc_clo(lam53907_fptr, 6);

//setting env list
clo54585[1] = kont53593;
clo54585[2] = append;
clo54585[3] = cons;
clo54585[4] = lst1;
clo54585[5] = lst2;
clo54585[6] = cdr;
void* f5359653749 = encode_clo(clo54585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5359653749;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53909 = encode_clo(alloc_clo(lam53909_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53911 = arg_buffer[1];
//reading env and args
void* kont53593 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54587 = alloc_clo(lam53909_fptr, 7);

//setting env list
clo54587[1] = car;
clo54587[2] = lst1;
clo54587[3] = kont53593;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo54587[4] = append;
clo54587[5] = cons;
clo54587[6] = lst2;
clo54587[7] = cdr;
void* f5359753747 = encode_clo(clo54587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5359753747;
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
void* _53912 = arg_buffer[1];
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

void* kont5359853755 = prim_car(lst);
void* lst53756 = prim_cdr(lst);
void* x5349653757 = apply_prim_hash(lst53756);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5359853755);
arg_buffer[2] = x5349653757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5359853755))[0]);
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
void* _53913 = arg_buffer[1];
//reading env and args
void* kont53600 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5349753758 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53600);
arg_buffer[2] = x5349753758;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53600))[0]);
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
void* _53914 = arg_buffer[1];
//reading env and args
void* kont53601 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5349853759 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53601);
arg_buffer[2] = x5349853759;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53601))[0]);
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
void* _53915 = arg_buffer[1];
//reading env and args
void* kont53602 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5349953760 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53602);
arg_buffer[2] = x5349953760;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53602))[0]);
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
void* _53916 = arg_buffer[1];
//reading env and args
void* kont53603 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5350053761 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53603);
arg_buffer[2] = x5350053761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53603))[0]);
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
void* _53922 = arg_buffer[1];
//reading env and args
void* kont53604 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar54588 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54588, "100", 10);
void* a5350153762 = encode_mpz(mpzvar54588);
mpz_t* mpzvar54589 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54589, "90", 10);
void* a5350253763 = encode_mpz(mpzvar54589);
mpz_t* mpzvar54590 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54590, "80", 10);
void* a5350353764 = encode_mpz(mpzvar54590);
mpz_t* mpzvar54591 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54591, "70", 10);
void* a5350453765 = encode_mpz(mpzvar54591);
mpz_t* mpzvar54592 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54592, "60", 10);
void* a5350553766 = encode_mpz(mpzvar54592);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62_u61);
arg_buffer[2] = kont53604;
arg_buffer[3] = a5350153762;
arg_buffer[4] = a5350253763;
arg_buffer[5] = a5350353764;
arg_buffer[6] = a5350453765;
arg_buffer[7] = a5350553766;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam53923_fptr() // lam53923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53924 = arg_buffer[1];
//reading env and args
void* x5350653768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53605 = (decode_clo(env53924))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53605);
arg_buffer[2] = x5350653768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53605))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53923 = encode_clo(alloc_clo(lam53923_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53925 = arg_buffer[1];
//reading env and args
void* kont53605 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo54594 = alloc_clo(lam53923_fptr, 1);

//setting env list
clo54594[1] = kont53605;
void* f5360653767 = encode_clo(clo54594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5360653767;
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

