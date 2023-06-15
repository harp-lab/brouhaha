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
void* _9781 = arg_buffer[1];
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

void* kont95229622 = prim_car(lst);
void* lst9623 = prim_cdr(lst);
void* x94369624 = apply_prim__u43(lst9623);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95229622);
arg_buffer[2] = x94369624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95229622))[0]);
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
void* _9782 = arg_buffer[1];
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

void* kont95249625 = prim_car(lst);
void* lst9626 = prim_cdr(lst);
void* x94379627 = apply_prim__u45(lst9626);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95249625);
arg_buffer[2] = x94379627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95249625))[0]);
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
void* _9783 = arg_buffer[1];
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

void* kont95269628 = prim_car(lst);
void* lst9629 = prim_cdr(lst);
void* x94389630 = apply_prim__u42(lst9629);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95269628);
arg_buffer[2] = x94389630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95269628))[0]);
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
void* _9784 = arg_buffer[1];
//reading env and args
void* kont9528 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x94399631 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9528);
arg_buffer[2] = x94399631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9528))[0]);
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
void* _9785 = arg_buffer[1];
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

void* kont95299632 = prim_car(lst);
void* lst9633 = prim_cdr(lst);
void* x94409634 = apply_prim__u47(lst9633);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95299632);
arg_buffer[2] = x94409634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95299632))[0]);
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
void* _9786 = arg_buffer[1];
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

void* kont95319635 = prim_car(lst);
void* lst9636 = prim_cdr(lst);
void* x94419637 = apply_prim__u61(lst9636);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95319635);
arg_buffer[2] = x94419637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95319635))[0]);
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
void* _9787 = arg_buffer[1];
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

void* kont95339638 = prim_car(lst);
void* lst9639 = prim_cdr(lst);
void* x94429640 = apply_prim__u62(lst9639);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95339638);
arg_buffer[2] = x94429640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95339638))[0]);
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
void* _9788 = arg_buffer[1];
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

void* kont95359641 = prim_car(lst);
void* lst9642 = prim_cdr(lst);
void* x94439643 = apply_prim__u60(lst9642);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95359641);
arg_buffer[2] = x94439643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95359641))[0]);
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
void* _9789 = arg_buffer[1];
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

void* kont95379644 = prim_car(lst);
void* lst9645 = prim_cdr(lst);
void* x94449646 = apply_prim__u60_u61(lst9645);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95379644);
arg_buffer[2] = x94449646;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95379644))[0]);
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
void* _9790 = arg_buffer[1];
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

void* kont95399647 = prim_car(lst);
void* lst9648 = prim_cdr(lst);
void* x94459649 = apply_prim__u62_u61(lst9648);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95399647);
arg_buffer[2] = x94459649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95399647))[0]);
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
void* _9791 = arg_buffer[1];
//reading env and args
void* kont9541 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x94469650 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9541);
arg_buffer[2] = x94469650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9541))[0]);
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
void* _9792 = arg_buffer[1];
//reading env and args
void* kont9542 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x94479651 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9542);
arg_buffer[2] = x94479651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9542))[0]);
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
void* _9793 = arg_buffer[1];
//reading env and args
void* kont9543 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x94489652 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9543);
arg_buffer[2] = x94489652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9543))[0]);
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
void* _9794 = arg_buffer[1];
//reading env and args
void* kont9544 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x94499653 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9544);
arg_buffer[2] = x94499653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9544))[0]);
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
void* _9795 = arg_buffer[1];
//reading env and args
void* kont9545 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x94509654 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9545);
arg_buffer[2] = x94509654;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9545))[0]);
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
void* _9796 = arg_buffer[1];
//reading env and args
void* kont9546 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x94519655 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9546);
arg_buffer[2] = x94519655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9546))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam9797_fptr() // lam9797 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9798 = arg_buffer[1];
//reading env and args
void* a94549659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94529656 = (decode_clo(env9798))[3];
//not do dummy comment
void* kont9547 = (decode_clo(env9798))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9798))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9547;
arg_buffer[3] = a94529656;
arg_buffer[4] = a94549659;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9797 = encode_clo(alloc_clo(lam9797_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9801 = arg_buffer[1];
//reading env and args
void* kont9547 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10475 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10475, "0", 10);
void* a94529656 = encode_mpz(mpzvar10475);
mpz_t* mpzvar10476 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10476, "2", 10);
void* a94539657 = encode_mpz(mpzvar10476);

//creating new closure instance
void** clo10478 = alloc_clo(lam9797_fptr, 3);

//setting env list
clo10478[1] = equal_u63;
clo10478[2] = kont9547;
clo10478[3] = a94529656;
void* f95489658 = encode_clo(clo10478);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f95489658;
arg_buffer[3] = x;
arg_buffer[4] = a94539657;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam9802_fptr() // lam9802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9803 = arg_buffer[1];
//reading env and args
void* a94579663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94559660 = (decode_clo(env9803))[3];
//not do dummy comment
void* kont9549 = (decode_clo(env9803))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9803))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9549;
arg_buffer[3] = a94559660;
arg_buffer[4] = a94579663;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9802 = encode_clo(alloc_clo(lam9802_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9806 = arg_buffer[1];
//reading env and args
void* kont9549 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10479 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10479, "1", 10);
void* a94559660 = encode_mpz(mpzvar10479);
mpz_t* mpzvar10480 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10480, "2", 10);
void* a94569661 = encode_mpz(mpzvar10480);

//creating new closure instance
void** clo10482 = alloc_clo(lam9802_fptr, 3);

//setting env list
clo10482[1] = equal_u63;
clo10482[2] = kont9549;
clo10482[3] = a94559660;
void* f95509662 = encode_clo(clo10482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f95509662;
arg_buffer[3] = x;
arg_buffer[4] = a94569661;
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
void* _9807 = arg_buffer[1];
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

void* kont95519664 = prim_car(x);
void* x9665 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95519664);
arg_buffer[2] = x9665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95519664))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam9810_fptr() // lam9810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9811 = arg_buffer[1];
//reading env and args
void* a94639675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env9811))[3];
//not do dummy comment
void* x = (decode_clo(env9811))[2];
//not do dummy comment
void* kont9553 = (decode_clo(env9811))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont9553;
arg_buffer[3] = x;
arg_buffer[4] = a94639675;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9810 = encode_clo(alloc_clo(lam9810_fptr, 0));

void* lam9812_fptr() // lam9812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9813 = arg_buffer[1];
//reading env and args
void* a94619672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9813))[5];
//not do dummy comment
void* lst = (decode_clo(env9813))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9813))[3];
//not do dummy comment
void* x = (decode_clo(env9813))[2];
//not do dummy comment
void* kont9553 = (decode_clo(env9813))[1];

//if-clause
bool if_guard10483 = is_true(a94619672);
if(if_guard10483)
{
void* x94629673 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9553);
arg_buffer[2] = x94629673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9553))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10485 = alloc_clo(lam9810_fptr, 3);

//setting env list
clo10485[1] = kont9553;
clo10485[2] = x;
clo10485[3] = member_u63;
void* f95549674 = encode_clo(clo10485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95549674;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9812 = encode_clo(alloc_clo(lam9812_fptr, 0));

void* lam9814_fptr() // lam9814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9815 = arg_buffer[1];
//reading env and args
void* a94609670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9815))[6];
//not do dummy comment
void* lst = (decode_clo(env9815))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env9815))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9815))[3];
//not do dummy comment
void* x = (decode_clo(env9815))[2];
//not do dummy comment
void* kont9553 = (decode_clo(env9815))[1];

//creating new closure instance
void** clo10487 = alloc_clo(lam9812_fptr, 5);

//setting env list
clo10487[1] = kont9553;
clo10487[2] = x;
clo10487[3] = member_u63;
clo10487[4] = lst;
clo10487[5] = cdr;
void* f95559671 = encode_clo(clo10487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f95559671;
arg_buffer[3] = a94609670;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9814 = encode_clo(alloc_clo(lam9814_fptr, 0));

void* lam9816_fptr() // lam9816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9817 = arg_buffer[1];
//reading env and args
void* a94589667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9817))[7];
//not do dummy comment
void* lst = (decode_clo(env9817))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env9817))[5];
//not do dummy comment
void* car = (decode_clo(env9817))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9817))[3];
//not do dummy comment
void* x = (decode_clo(env9817))[2];
//not do dummy comment
void* kont9553 = (decode_clo(env9817))[1];

//if-clause
bool if_guard10488 = is_true(a94589667);
if(if_guard10488)
{
void* x94599668 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9553);
arg_buffer[2] = x94599668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9553))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10490 = alloc_clo(lam9814_fptr, 6);

//setting env list
clo10490[1] = kont9553;
clo10490[2] = x;
clo10490[3] = member_u63;
clo10490[4] = equal_u63;
clo10490[5] = lst;
clo10490[6] = cdr;
void* f95569669 = encode_clo(clo10490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95569669;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9816 = encode_clo(alloc_clo(lam9816_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9818 = arg_buffer[1];
//reading env and args
void* kont9553 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10492 = alloc_clo(lam9816_fptr, 7);

//setting env list
clo10492[1] = kont9553;
clo10492[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo10492[3] = member_u63;
clo10492[4] = car;
clo10492[5] = equal_u63;
clo10492[6] = lst;
clo10492[7] = cdr;
void* f95579666 = encode_clo(clo10492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95579666;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam9819_fptr() // lam9819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9820 = arg_buffer[1];
//reading env and args
void* a94679683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9558 = (decode_clo(env9820))[4];
//not do dummy comment
void* fun = (decode_clo(env9820))[3];
//not do dummy comment
void* a94669681 = (decode_clo(env9820))[2];
//not do dummy comment
void* foldl = (decode_clo(env9820))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont9558;
arg_buffer[3] = fun;
arg_buffer[4] = a94669681;
arg_buffer[5] = a94679683;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9819 = encode_clo(alloc_clo(lam9819_fptr, 0));

void* lam9821_fptr() // lam9821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9822 = arg_buffer[1];
//reading env and args
void* a94669681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9822))[5];
//not do dummy comment
void* fun = (decode_clo(env9822))[4];
//not do dummy comment
void* foldl = (decode_clo(env9822))[3];
//not do dummy comment
void* kont9558 = (decode_clo(env9822))[2];
//not do dummy comment
void* cdr = (decode_clo(env9822))[1];

//creating new closure instance
void** clo10494 = alloc_clo(lam9819_fptr, 4);

//setting env list
clo10494[1] = foldl;
clo10494[2] = a94669681;
clo10494[3] = fun;
clo10494[4] = kont9558;
void* f95599682 = encode_clo(clo10494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95599682;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9821 = encode_clo(alloc_clo(lam9821_fptr, 0));

void* lam9823_fptr() // lam9823 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9824 = arg_buffer[1];
//reading env and args
void* a94659679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9824))[6];
//not do dummy comment
void* fun = (decode_clo(env9824))[5];
//not do dummy comment
void* acc = (decode_clo(env9824))[4];
//not do dummy comment
void* foldl = (decode_clo(env9824))[3];
//not do dummy comment
void* kont9558 = (decode_clo(env9824))[2];
//not do dummy comment
void* cdr = (decode_clo(env9824))[1];

//creating new closure instance
void** clo10496 = alloc_clo(lam9821_fptr, 5);

//setting env list
clo10496[1] = cdr;
clo10496[2] = kont9558;
clo10496[3] = foldl;
clo10496[4] = fun;
clo10496[5] = lst;
void* f95609680 = encode_clo(clo10496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f95609680;
arg_buffer[3] = a94659679;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9823 = encode_clo(alloc_clo(lam9823_fptr, 0));

void* lam9825_fptr() // lam9825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9826 = arg_buffer[1];
//reading env and args
void* a94649677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9826))[7];
//not do dummy comment
void* fun = (decode_clo(env9826))[6];
//not do dummy comment
void* acc = (decode_clo(env9826))[5];
//not do dummy comment
void* car = (decode_clo(env9826))[4];
//not do dummy comment
void* foldl = (decode_clo(env9826))[3];
//not do dummy comment
void* kont9558 = (decode_clo(env9826))[2];
//not do dummy comment
void* cdr = (decode_clo(env9826))[1];

//if-clause
bool if_guard10497 = is_true(a94649677);
if(if_guard10497)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9558);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9558))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10499 = alloc_clo(lam9823_fptr, 6);

//setting env list
clo10499[1] = cdr;
clo10499[2] = kont9558;
clo10499[3] = foldl;
clo10499[4] = acc;
clo10499[5] = fun;
clo10499[6] = lst;
void* f95619678 = encode_clo(clo10499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95619678;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9825 = encode_clo(alloc_clo(lam9825_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9827 = arg_buffer[1];
//reading env and args
void* kont9558 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo10501 = alloc_clo(lam9825_fptr, 7);

//setting env list
clo10501[1] = cdr;
clo10501[2] = kont9558;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo10501[3] = foldl;
clo10501[4] = car;
clo10501[5] = acc;
clo10501[6] = fun;
clo10501[7] = lst;
void* f95629676 = encode_clo(clo10501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95629676;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam9828_fptr() // lam9828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9829 = arg_buffer[1];
//reading env and args
void* a94719691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94699687 = (decode_clo(env9829))[3];
//not do dummy comment
void* kont9563 = (decode_clo(env9829))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9829))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9563;
arg_buffer[3] = a94699687;
arg_buffer[4] = a94719691;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9828 = encode_clo(alloc_clo(lam9828_fptr, 0));

void* lam9830_fptr() // lam9830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9831 = arg_buffer[1];
//reading env and args
void* a94709689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94699687 = (decode_clo(env9831))[5];
//not do dummy comment
void* kont9563 = (decode_clo(env9831))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9831))[3];
//not do dummy comment
void* lst2 = (decode_clo(env9831))[2];
//not do dummy comment
void* cons = (decode_clo(env9831))[1];

//creating new closure instance
void** clo10503 = alloc_clo(lam9828_fptr, 3);

//setting env list
clo10503[1] = reverse_u45helper;
clo10503[2] = kont9563;
clo10503[3] = a94699687;
void* f95649690 = encode_clo(clo10503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f95649690;
arg_buffer[3] = a94709689;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9830 = encode_clo(alloc_clo(lam9830_fptr, 0));

void* lam9832_fptr() // lam9832 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9833 = arg_buffer[1];
//reading env and args
void* a94699687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9833))[6];
//not do dummy comment
void* kont9563 = (decode_clo(env9833))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9833))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9833))[3];
//not do dummy comment
void* car = (decode_clo(env9833))[2];
//not do dummy comment
void* cons = (decode_clo(env9833))[1];

//creating new closure instance
void** clo10505 = alloc_clo(lam9830_fptr, 5);

//setting env list
clo10505[1] = cons;
clo10505[2] = lst2;
clo10505[3] = reverse_u45helper;
clo10505[4] = kont9563;
clo10505[5] = a94699687;
void* f95659688 = encode_clo(clo10505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95659688;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9832 = encode_clo(alloc_clo(lam9832_fptr, 0));

void* lam9834_fptr() // lam9834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9835 = arg_buffer[1];
//reading env and args
void* a94689685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9835))[7];
//not do dummy comment
void* lst = (decode_clo(env9835))[6];
//not do dummy comment
void* kont9563 = (decode_clo(env9835))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9835))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9835))[3];
//not do dummy comment
void* car = (decode_clo(env9835))[2];
//not do dummy comment
void* cons = (decode_clo(env9835))[1];

//if-clause
bool if_guard10506 = is_true(a94689685);
if(if_guard10506)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9563);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9563))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10508 = alloc_clo(lam9832_fptr, 6);

//setting env list
clo10508[1] = cons;
clo10508[2] = car;
clo10508[3] = lst2;
clo10508[4] = reverse_u45helper;
clo10508[5] = kont9563;
clo10508[6] = lst;
void* f95669686 = encode_clo(clo10508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95669686;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9834 = encode_clo(alloc_clo(lam9834_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9836 = arg_buffer[1];
//reading env and args
void* kont9563 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10510 = alloc_clo(lam9834_fptr, 7);

//setting env list
clo10510[1] = cons;
clo10510[2] = car;
clo10510[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo10510[4] = reverse_u45helper;
clo10510[5] = kont9563;
clo10510[6] = lst;
clo10510[7] = cdr;
void* f95679684 = encode_clo(clo10510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95679684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam9837_fptr() // lam9837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9838 = arg_buffer[1];
//reading env and args
void* a94729693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9838))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9838))[2];
//not do dummy comment
void* kont9568 = (decode_clo(env9838))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9568;
arg_buffer[3] = lst;
arg_buffer[4] = a94729693;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9837 = encode_clo(alloc_clo(lam9837_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9839 = arg_buffer[1];
//reading env and args
void* kont9568 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10512 = alloc_clo(lam9837_fptr, 3);

//setting env list
clo10512[1] = kont9568;
clo10512[2] = reverse_u45helper;
clo10512[3] = lst;
void* f95699692 = encode_clo(clo10512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f95699692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam9840_fptr() // lam9840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9841 = arg_buffer[1];
//reading env and args
void* x94759698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9570 = (decode_clo(env9841))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9570);
arg_buffer[2] = x94759698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9570))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9840 = encode_clo(alloc_clo(lam9840_fptr, 0));

void* lam9842_fptr() // lam9842 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9843 = arg_buffer[1];
//reading env and args
void* a94809707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94789703 = (decode_clo(env9843))[4];
//not do dummy comment
void* a94769700 = (decode_clo(env9843))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9843))[2];
//not do dummy comment
void* kont9570 = (decode_clo(env9843))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9570;
arg_buffer[3] = a94769700;
arg_buffer[4] = a94789703;
arg_buffer[5] = a94809707;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9842 = encode_clo(alloc_clo(lam9842_fptr, 0));

void* lam9844_fptr() // lam9844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9845 = arg_buffer[1];
//reading env and args
void* a94799705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94789703 = (decode_clo(env9845))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env9845))[5];
//not do dummy comment
void* kont9570 = (decode_clo(env9845))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9845))[3];
//not do dummy comment
void* cons = (decode_clo(env9845))[2];
//not do dummy comment
void* a94769700 = (decode_clo(env9845))[1];

//creating new closure instance
void** clo10514 = alloc_clo(lam9842_fptr, 4);

//setting env list
clo10514[1] = kont9570;
clo10514[2] = take_u45helper;
clo10514[3] = a94769700;
clo10514[4] = a94789703;
void* f95729706 = encode_clo(clo10514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f95729706;
arg_buffer[3] = a94799705;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9844 = encode_clo(alloc_clo(lam9844_fptr, 0));

void* lam9846_fptr() // lam9846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9847 = arg_buffer[1];
//reading env and args
void* a94789703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9847))[7];
//not do dummy comment
void* car = (decode_clo(env9847))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env9847))[5];
//not do dummy comment
void* kont9570 = (decode_clo(env9847))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9847))[3];
//not do dummy comment
void* cons = (decode_clo(env9847))[2];
//not do dummy comment
void* a94769700 = (decode_clo(env9847))[1];

//creating new closure instance
void** clo10516 = alloc_clo(lam9844_fptr, 6);

//setting env list
clo10516[1] = a94769700;
clo10516[2] = cons;
clo10516[3] = lst2;
clo10516[4] = kont9570;
clo10516[5] = take_u45helper;
clo10516[6] = a94789703;
void* f95739704 = encode_clo(clo10516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95739704;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9846 = encode_clo(alloc_clo(lam9846_fptr, 0));

void* lam9849_fptr() // lam9849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9850 = arg_buffer[1];
//reading env and args
void* a94769700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9850))[8];
//not do dummy comment
void* cons = (decode_clo(env9850))[7];
//not do dummy comment
void* _u45 = (decode_clo(env9850))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env9850))[5];
//not do dummy comment
void* kont9570 = (decode_clo(env9850))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9850))[3];
//not do dummy comment
void* n = (decode_clo(env9850))[2];
//not do dummy comment
void* car = (decode_clo(env9850))[1];
mpz_t* mpzvar10517 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10517, "1", 10);
void* a94779701 = encode_mpz(mpzvar10517);

//creating new closure instance
void** clo10519 = alloc_clo(lam9846_fptr, 7);

//setting env list
clo10519[1] = a94769700;
clo10519[2] = cons;
clo10519[3] = lst2;
clo10519[4] = kont9570;
clo10519[5] = take_u45helper;
clo10519[6] = car;
clo10519[7] = lst;
void* f95749702 = encode_clo(clo10519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f95749702;
arg_buffer[3] = n;
arg_buffer[4] = a94779701;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9849 = encode_clo(alloc_clo(lam9849_fptr, 0));

void* lam9851_fptr() // lam9851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9852 = arg_buffer[1];
//reading env and args
void* a94749696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9852))[10];
//not do dummy comment
void* lst = (decode_clo(env9852))[9];
//not do dummy comment
void* reverse = (decode_clo(env9852))[8];
//not do dummy comment
void* cons = (decode_clo(env9852))[7];
//not do dummy comment
void* _u45 = (decode_clo(env9852))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env9852))[5];
//not do dummy comment
void* kont9570 = (decode_clo(env9852))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9852))[3];
//not do dummy comment
void* n = (decode_clo(env9852))[2];
//not do dummy comment
void* car = (decode_clo(env9852))[1];

//if-clause
bool if_guard10520 = is_true(a94749696);
if(if_guard10520)
{

//creating new closure instance
void** clo10522 = alloc_clo(lam9840_fptr, 1);

//setting env list
clo10522[1] = kont9570;
void* f95719697 = encode_clo(clo10522);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f95719697;
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
void** clo10524 = alloc_clo(lam9849_fptr, 8);

//setting env list
clo10524[1] = car;
clo10524[2] = n;
clo10524[3] = lst2;
clo10524[4] = kont9570;
clo10524[5] = take_u45helper;
clo10524[6] = _u45;
clo10524[7] = cons;
clo10524[8] = lst;
void* f95759699 = encode_clo(clo10524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95759699;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9851 = encode_clo(alloc_clo(lam9851_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9854 = arg_buffer[1];
//reading env and args
void* kont9570 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar10525 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10525, "0", 10);
void* a94739694 = encode_mpz(mpzvar10525);

//creating new closure instance
void** clo10527 = alloc_clo(lam9851_fptr, 10);

//setting env list
clo10527[1] = car;
clo10527[2] = n;
clo10527[3] = lst2;
clo10527[4] = kont9570;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo10527[5] = take_u45helper;
clo10527[6] = _u45;
clo10527[7] = cons;
clo10527[8] = reverse;
clo10527[9] = lst;
clo10527[10] = cdr;
void* f95769695 = encode_clo(clo10527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f95769695;
arg_buffer[3] = n;
arg_buffer[4] = a94739694;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam9855_fptr() // lam9855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9856 = arg_buffer[1];
//reading env and args
void* a94819709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9577 = (decode_clo(env9856))[4];
//not do dummy comment
void* lst = (decode_clo(env9856))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9856))[2];
//not do dummy comment
void* n = (decode_clo(env9856))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9577;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a94819709;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9855 = encode_clo(alloc_clo(lam9855_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9857 = arg_buffer[1];
//reading env and args
void* kont9577 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10529 = alloc_clo(lam9855_fptr, 4);

//setting env list
clo10529[1] = n;
clo10529[2] = take_u45helper;
clo10529[3] = lst;
clo10529[4] = kont9577;
void* f95789708 = encode_clo(clo10529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f95789708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam9859_fptr() // lam9859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9860 = arg_buffer[1];
//reading env and args
void* a94869717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9579 = (decode_clo(env9860))[3];
//not do dummy comment
void* _u43 = (decode_clo(env9860))[2];
//not do dummy comment
void* a94849713 = (decode_clo(env9860))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont9579;
arg_buffer[3] = a94849713;
arg_buffer[4] = a94869717;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9859 = encode_clo(alloc_clo(lam9859_fptr, 0));

void* lam9861_fptr() // lam9861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9862 = arg_buffer[1];
//reading env and args
void* a94859715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env9862))[4];
//not do dummy comment
void* a94849713 = (decode_clo(env9862))[3];
//not do dummy comment
void* kont9579 = (decode_clo(env9862))[2];
//not do dummy comment
void* length = (decode_clo(env9862))[1];

//creating new closure instance
void** clo10531 = alloc_clo(lam9859_fptr, 3);

//setting env list
clo10531[1] = a94849713;
clo10531[2] = _u43;
clo10531[3] = kont9579;
void* f95809716 = encode_clo(clo10531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f95809716;
arg_buffer[3] = a94859715;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9861 = encode_clo(alloc_clo(lam9861_fptr, 0));

void* lam9864_fptr() // lam9864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9865 = arg_buffer[1];
//reading env and args
void* a94829711 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9865))[5];
//not do dummy comment
void* lst = (decode_clo(env9865))[4];
//not do dummy comment
void* _u43 = (decode_clo(env9865))[3];
//not do dummy comment
void* kont9579 = (decode_clo(env9865))[2];
//not do dummy comment
void* length = (decode_clo(env9865))[1];

//if-clause
bool if_guard10532 = is_true(a94829711);
if(if_guard10532)
{
mpz_t* mpzvar10533 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10533, "0", 10);
void* x94839712 = encode_mpz(mpzvar10533);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9579);
arg_buffer[2] = x94839712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9579))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar10534 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10534, "1", 10);
void* a94849713 = encode_mpz(mpzvar10534);

//creating new closure instance
void** clo10536 = alloc_clo(lam9861_fptr, 4);

//setting env list
clo10536[1] = length;
clo10536[2] = kont9579;
clo10536[3] = a94849713;
clo10536[4] = _u43;
void* f95819714 = encode_clo(clo10536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95819714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9864 = encode_clo(alloc_clo(lam9864_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9866 = arg_buffer[1];
//reading env and args
void* kont9579 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10538 = alloc_clo(lam9864_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo10538[1] = length;
clo10538[2] = kont9579;
clo10538[3] = _u43;
clo10538[4] = lst;
clo10538[5] = cdr;
void* f95829710 = encode_clo(clo10538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95829710;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam9867_fptr() // lam9867 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9868 = arg_buffer[1];
//reading env and args
void* x94889721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9583 = (decode_clo(env9868))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9583);
arg_buffer[2] = x94889721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9583))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9867 = encode_clo(alloc_clo(lam9867_fptr, 0));

void* lam9869_fptr() // lam9869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9870 = arg_buffer[1];
//reading env and args
void* a94929729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94909725 = (decode_clo(env9870))[3];
//not do dummy comment
void* kont9583 = (decode_clo(env9870))[2];
//not do dummy comment
void* cons = (decode_clo(env9870))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9583;
arg_buffer[3] = a94909725;
arg_buffer[4] = a94929729;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9869 = encode_clo(alloc_clo(lam9869_fptr, 0));

void* lam9871_fptr() // lam9871 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9872 = arg_buffer[1];
//reading env and args
void* a94919727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env9872))[5];
//not do dummy comment
void* a94909725 = (decode_clo(env9872))[4];
//not do dummy comment
void* kont9583 = (decode_clo(env9872))[3];
//not do dummy comment
void* proc = (decode_clo(env9872))[2];
//not do dummy comment
void* cons = (decode_clo(env9872))[1];

//creating new closure instance
void** clo10540 = alloc_clo(lam9869_fptr, 3);

//setting env list
clo10540[1] = cons;
clo10540[2] = kont9583;
clo10540[3] = a94909725;
void* f95859728 = encode_clo(clo10540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f95859728;
arg_buffer[3] = proc;
arg_buffer[4] = a94919727;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9871 = encode_clo(alloc_clo(lam9871_fptr, 0));

void* lam9873_fptr() // lam9873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9874 = arg_buffer[1];
//reading env and args
void* a94909725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9874))[6];
//not do dummy comment
void* lst = (decode_clo(env9874))[5];
//not do dummy comment
void* map = (decode_clo(env9874))[4];
//not do dummy comment
void* kont9583 = (decode_clo(env9874))[3];
//not do dummy comment
void* proc = (decode_clo(env9874))[2];
//not do dummy comment
void* cons = (decode_clo(env9874))[1];

//creating new closure instance
void** clo10542 = alloc_clo(lam9871_fptr, 5);

//setting env list
clo10542[1] = cons;
clo10542[2] = proc;
clo10542[3] = kont9583;
clo10542[4] = a94909725;
clo10542[5] = map;
void* f95869726 = encode_clo(clo10542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95869726;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9873 = encode_clo(alloc_clo(lam9873_fptr, 0));

void* lam9875_fptr() // lam9875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9876 = arg_buffer[1];
//reading env and args
void* a94899723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9876))[6];
//not do dummy comment
void* lst = (decode_clo(env9876))[5];
//not do dummy comment
void* map = (decode_clo(env9876))[4];
//not do dummy comment
void* kont9583 = (decode_clo(env9876))[3];
//not do dummy comment
void* proc = (decode_clo(env9876))[2];
//not do dummy comment
void* cons = (decode_clo(env9876))[1];

//creating new closure instance
void** clo10544 = alloc_clo(lam9873_fptr, 6);

//setting env list
clo10544[1] = cons;
clo10544[2] = proc;
clo10544[3] = kont9583;
clo10544[4] = map;
clo10544[5] = lst;
clo10544[6] = cdr;
void* f95879724 = encode_clo(clo10544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f95879724;
arg_buffer[3] = a94899723;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9875 = encode_clo(alloc_clo(lam9875_fptr, 0));

void* lam9877_fptr() // lam9877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9878 = arg_buffer[1];
//reading env and args
void* a94879719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9878))[8];
//not do dummy comment
void* map = (decode_clo(env9878))[7];
//not do dummy comment
void* kont9583 = (decode_clo(env9878))[6];
//not do dummy comment
void* proc = (decode_clo(env9878))[5];
//not do dummy comment
void* car = (decode_clo(env9878))[4];
//not do dummy comment
void* cons = (decode_clo(env9878))[3];
//not do dummy comment
void* list = (decode_clo(env9878))[2];
//not do dummy comment
void* cdr = (decode_clo(env9878))[1];

//if-clause
bool if_guard10545 = is_true(a94879719);
if(if_guard10545)
{

//creating new closure instance
void** clo10547 = alloc_clo(lam9867_fptr, 1);

//setting env list
clo10547[1] = kont9583;
void* f95849720 = encode_clo(clo10547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f95849720;
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
void** clo10549 = alloc_clo(lam9875_fptr, 6);

//setting env list
clo10549[1] = cons;
clo10549[2] = proc;
clo10549[3] = kont9583;
clo10549[4] = map;
clo10549[5] = lst;
clo10549[6] = cdr;
void* f95889722 = encode_clo(clo10549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95889722;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9877 = encode_clo(alloc_clo(lam9877_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9879 = arg_buffer[1];
//reading env and args
void* kont9583 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10551 = alloc_clo(lam9877_fptr, 8);

//setting env list
clo10551[1] = cdr;
clo10551[2] = list;
clo10551[3] = cons;
clo10551[4] = car;
clo10551[5] = proc;
clo10551[6] = kont9583;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo10551[7] = map;
clo10551[8] = lst;
void* f95899718 = encode_clo(clo10551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95899718;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam9880_fptr() // lam9880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9881 = arg_buffer[1];
//reading env and args
void* x94949733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9590 = (decode_clo(env9881))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9590);
arg_buffer[2] = x94949733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9590))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9880 = encode_clo(alloc_clo(lam9880_fptr, 0));

void* lam9882_fptr() // lam9882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9883 = arg_buffer[1];
//reading env and args
void* a94999743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9590 = (decode_clo(env9883))[3];
//not do dummy comment
void* a94979739 = (decode_clo(env9883))[2];
//not do dummy comment
void* cons = (decode_clo(env9883))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9590;
arg_buffer[3] = a94979739;
arg_buffer[4] = a94999743;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9882 = encode_clo(alloc_clo(lam9882_fptr, 0));

void* lam9884_fptr() // lam9884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9885 = arg_buffer[1];
//reading env and args
void* a94989741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9590 = (decode_clo(env9885))[5];
//not do dummy comment
void* a94979739 = (decode_clo(env9885))[4];
//not do dummy comment
void* op = (decode_clo(env9885))[3];
//not do dummy comment
void* filter = (decode_clo(env9885))[2];
//not do dummy comment
void* cons = (decode_clo(env9885))[1];

//creating new closure instance
void** clo10553 = alloc_clo(lam9882_fptr, 3);

//setting env list
clo10553[1] = cons;
clo10553[2] = a94979739;
clo10553[3] = kont9590;
void* f95929742 = encode_clo(clo10553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f95929742;
arg_buffer[3] = op;
arg_buffer[4] = a94989741;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9884 = encode_clo(alloc_clo(lam9884_fptr, 0));

void* lam9886_fptr() // lam9886 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9887 = arg_buffer[1];
//reading env and args
void* a94979739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9887))[6];
//not do dummy comment
void* op = (decode_clo(env9887))[5];
//not do dummy comment
void* filter = (decode_clo(env9887))[4];
//not do dummy comment
void* cons = (decode_clo(env9887))[3];
//not do dummy comment
void* kont9590 = (decode_clo(env9887))[2];
//not do dummy comment
void* cdr = (decode_clo(env9887))[1];

//creating new closure instance
void** clo10555 = alloc_clo(lam9884_fptr, 5);

//setting env list
clo10555[1] = cons;
clo10555[2] = filter;
clo10555[3] = op;
clo10555[4] = a94979739;
clo10555[5] = kont9590;
void* f95939740 = encode_clo(clo10555);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95939740;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9886 = encode_clo(alloc_clo(lam9886_fptr, 0));

void* lam9888_fptr() // lam9888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9889 = arg_buffer[1];
//reading env and args
void* a95009745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9590 = (decode_clo(env9889))[3];
//not do dummy comment
void* op = (decode_clo(env9889))[2];
//not do dummy comment
void* filter = (decode_clo(env9889))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont9590;
arg_buffer[3] = op;
arg_buffer[4] = a95009745;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9888 = encode_clo(alloc_clo(lam9888_fptr, 0));

void* lam9890_fptr() // lam9890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9891 = arg_buffer[1];
//reading env and args
void* a94969737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9891))[7];
//not do dummy comment
void* op = (decode_clo(env9891))[6];
//not do dummy comment
void* cons = (decode_clo(env9891))[5];
//not do dummy comment
void* kont9590 = (decode_clo(env9891))[4];
//not do dummy comment
void* cdr = (decode_clo(env9891))[3];
//not do dummy comment
void* filter = (decode_clo(env9891))[2];
//not do dummy comment
void* car = (decode_clo(env9891))[1];

//if-clause
bool if_guard10556 = is_true(a94969737);
if(if_guard10556)
{

//creating new closure instance
void** clo10558 = alloc_clo(lam9886_fptr, 6);

//setting env list
clo10558[1] = cdr;
clo10558[2] = kont9590;
clo10558[3] = cons;
clo10558[4] = filter;
clo10558[5] = op;
clo10558[6] = lst;
void* f95949738 = encode_clo(clo10558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95949738;
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
void** clo10560 = alloc_clo(lam9888_fptr, 3);

//setting env list
clo10560[1] = filter;
clo10560[2] = op;
clo10560[3] = kont9590;
void* f95959744 = encode_clo(clo10560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95959744;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9890 = encode_clo(alloc_clo(lam9890_fptr, 0));

void* lam9892_fptr() // lam9892 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9893 = arg_buffer[1];
//reading env and args
void* a94959735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9893))[7];
//not do dummy comment
void* op = (decode_clo(env9893))[6];
//not do dummy comment
void* cons = (decode_clo(env9893))[5];
//not do dummy comment
void* kont9590 = (decode_clo(env9893))[4];
//not do dummy comment
void* cdr = (decode_clo(env9893))[3];
//not do dummy comment
void* filter = (decode_clo(env9893))[2];
//not do dummy comment
void* car = (decode_clo(env9893))[1];

//creating new closure instance
void** clo10562 = alloc_clo(lam9890_fptr, 7);

//setting env list
clo10562[1] = car;
clo10562[2] = filter;
clo10562[3] = cdr;
clo10562[4] = kont9590;
clo10562[5] = cons;
clo10562[6] = op;
clo10562[7] = lst;
void* f95969736 = encode_clo(clo10562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f95969736;
arg_buffer[3] = a94959735;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9892 = encode_clo(alloc_clo(lam9892_fptr, 0));

void* lam9894_fptr() // lam9894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9895 = arg_buffer[1];
//reading env and args
void* a94939731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9895))[8];
//not do dummy comment
void* op = (decode_clo(env9895))[7];
//not do dummy comment
void* cons = (decode_clo(env9895))[6];
//not do dummy comment
void* list = (decode_clo(env9895))[5];
//not do dummy comment
void* kont9590 = (decode_clo(env9895))[4];
//not do dummy comment
void* cdr = (decode_clo(env9895))[3];
//not do dummy comment
void* filter = (decode_clo(env9895))[2];
//not do dummy comment
void* car = (decode_clo(env9895))[1];

//if-clause
bool if_guard10563 = is_true(a94939731);
if(if_guard10563)
{

//creating new closure instance
void** clo10565 = alloc_clo(lam9880_fptr, 1);

//setting env list
clo10565[1] = kont9590;
void* f95919732 = encode_clo(clo10565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f95919732;
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
void** clo10567 = alloc_clo(lam9892_fptr, 7);

//setting env list
clo10567[1] = car;
clo10567[2] = filter;
clo10567[3] = cdr;
clo10567[4] = kont9590;
clo10567[5] = cons;
clo10567[6] = op;
clo10567[7] = lst;
void* f95979734 = encode_clo(clo10567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95979734;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9894 = encode_clo(alloc_clo(lam9894_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9896 = arg_buffer[1];
//reading env and args
void* kont9590 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10569 = alloc_clo(lam9894_fptr, 8);

//setting env list
clo10569[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo10569[2] = filter;
clo10569[3] = cdr;
clo10569[4] = kont9590;
clo10569[5] = list;
clo10569[6] = cons;
clo10569[7] = op;
clo10569[8] = lst;
void* f95989730 = encode_clo(clo10569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95989730;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam9897_fptr() // lam9897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9898 = arg_buffer[1];
//reading env and args
void* a95059753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95039750 = (decode_clo(env9898))[3];
//not do dummy comment
void* drop = (decode_clo(env9898))[2];
//not do dummy comment
void* kont9599 = (decode_clo(env9898))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont9599;
arg_buffer[3] = a95039750;
arg_buffer[4] = a95059753;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9897 = encode_clo(alloc_clo(lam9897_fptr, 0));

void* lam9900_fptr() // lam9900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9901 = arg_buffer[1];
//reading env and args
void* a95039750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env9901))[4];
//not do dummy comment
void* kont9599 = (decode_clo(env9901))[3];
//not do dummy comment
void* n = (decode_clo(env9901))[2];
//not do dummy comment
void* _u45 = (decode_clo(env9901))[1];
mpz_t* mpzvar10570 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10570, "1", 10);
void* a95049751 = encode_mpz(mpzvar10570);

//creating new closure instance
void** clo10572 = alloc_clo(lam9897_fptr, 3);

//setting env list
clo10572[1] = kont9599;
clo10572[2] = drop;
clo10572[3] = a95039750;
void* f96009752 = encode_clo(clo10572);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f96009752;
arg_buffer[3] = n;
arg_buffer[4] = a95049751;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9900 = encode_clo(alloc_clo(lam9900_fptr, 0));

void* lam9902_fptr() // lam9902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9903 = arg_buffer[1];
//reading env and args
void* a95029748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9903))[6];
//not do dummy comment
void* kont9599 = (decode_clo(env9903))[5];
//not do dummy comment
void* n = (decode_clo(env9903))[4];
//not do dummy comment
void* _u45 = (decode_clo(env9903))[3];
//not do dummy comment
void* lst = (decode_clo(env9903))[2];
//not do dummy comment
void* drop = (decode_clo(env9903))[1];

//if-clause
bool if_guard10573 = is_true(a95029748);
if(if_guard10573)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9599);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9599))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10575 = alloc_clo(lam9900_fptr, 4);

//setting env list
clo10575[1] = _u45;
clo10575[2] = n;
clo10575[3] = kont9599;
clo10575[4] = drop;
void* f96019749 = encode_clo(clo10575);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96019749;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9902 = encode_clo(alloc_clo(lam9902_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9905 = arg_buffer[1];
//reading env and args
void* kont9599 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar10576 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10576, "0", 10);
void* a95019746 = encode_mpz(mpzvar10576);

//creating new closure instance
void** clo10578 = alloc_clo(lam9902_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo10578[1] = drop;
clo10578[2] = lst;
clo10578[3] = _u45;
clo10578[4] = n;
clo10578[5] = kont9599;
clo10578[6] = cdr;
void* f96029747 = encode_clo(clo10578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f96029747;
arg_buffer[3] = n;
arg_buffer[4] = a95019746;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam9906_fptr() // lam9906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9907 = arg_buffer[1];
//reading env and args
void* a95099761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95079757 = (decode_clo(env9907))[3];
//not do dummy comment
void* proc = (decode_clo(env9907))[2];
//not do dummy comment
void* kont9603 = (decode_clo(env9907))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont9603;
arg_buffer[3] = a95079757;
arg_buffer[4] = a95099761;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9906 = encode_clo(alloc_clo(lam9906_fptr, 0));

void* lam9908_fptr() // lam9908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9909 = arg_buffer[1];
//reading env and args
void* a95089759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env9909))[5];
//not do dummy comment
void* a95079757 = (decode_clo(env9909))[4];
//not do dummy comment
void* kont9603 = (decode_clo(env9909))[3];
//not do dummy comment
void* proc = (decode_clo(env9909))[2];
//not do dummy comment
void* acc = (decode_clo(env9909))[1];

//creating new closure instance
void** clo10580 = alloc_clo(lam9906_fptr, 3);

//setting env list
clo10580[1] = kont9603;
clo10580[2] = proc;
clo10580[3] = a95079757;
void* f96049760 = encode_clo(clo10580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f96049760;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a95089759;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9908 = encode_clo(alloc_clo(lam9908_fptr, 0));

void* lam9910_fptr() // lam9910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9911 = arg_buffer[1];
//reading env and args
void* a95079757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9911))[6];
//not do dummy comment
void* kont9603 = (decode_clo(env9911))[5];
//not do dummy comment
void* foldr = (decode_clo(env9911))[4];
//not do dummy comment
void* lst = (decode_clo(env9911))[3];
//not do dummy comment
void* proc = (decode_clo(env9911))[2];
//not do dummy comment
void* acc = (decode_clo(env9911))[1];

//creating new closure instance
void** clo10582 = alloc_clo(lam9908_fptr, 5);

//setting env list
clo10582[1] = acc;
clo10582[2] = proc;
clo10582[3] = kont9603;
clo10582[4] = a95079757;
clo10582[5] = foldr;
void* f96059758 = encode_clo(clo10582);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96059758;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9910 = encode_clo(alloc_clo(lam9910_fptr, 0));

void* lam9912_fptr() // lam9912 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9913 = arg_buffer[1];
//reading env and args
void* a95069755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9913))[7];
//not do dummy comment
void* foldr = (decode_clo(env9913))[6];
//not do dummy comment
void* lst = (decode_clo(env9913))[5];
//not do dummy comment
void* proc = (decode_clo(env9913))[4];
//not do dummy comment
void* acc = (decode_clo(env9913))[3];
//not do dummy comment
void* kont9603 = (decode_clo(env9913))[2];
//not do dummy comment
void* car = (decode_clo(env9913))[1];

//if-clause
bool if_guard10583 = is_true(a95069755);
if(if_guard10583)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9603);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9603))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10585 = alloc_clo(lam9910_fptr, 6);

//setting env list
clo10585[1] = acc;
clo10585[2] = proc;
clo10585[3] = lst;
clo10585[4] = foldr;
clo10585[5] = kont9603;
clo10585[6] = cdr;
void* f96069756 = encode_clo(clo10585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96069756;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9912 = encode_clo(alloc_clo(lam9912_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9914 = arg_buffer[1];
//reading env and args
void* kont9603 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo10587 = alloc_clo(lam9912_fptr, 7);

//setting env list
clo10587[1] = car;
clo10587[2] = kont9603;
clo10587[3] = acc;
clo10587[4] = proc;
clo10587[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo10587[6] = foldr;
clo10587[7] = cdr;
void* f96079754 = encode_clo(clo10587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f96079754;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam9915_fptr() // lam9915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9916 = arg_buffer[1];
//reading env and args
void* a95139769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9608 = (decode_clo(env9916))[3];
//not do dummy comment
void* cons = (decode_clo(env9916))[2];
//not do dummy comment
void* a95119765 = (decode_clo(env9916))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9608;
arg_buffer[3] = a95119765;
arg_buffer[4] = a95139769;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9915 = encode_clo(alloc_clo(lam9915_fptr, 0));

void* lam9917_fptr() // lam9917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9918 = arg_buffer[1];
//reading env and args
void* a95129767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9608 = (decode_clo(env9918))[5];
//not do dummy comment
void* append = (decode_clo(env9918))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9918))[3];
//not do dummy comment
void* cons = (decode_clo(env9918))[2];
//not do dummy comment
void* a95119765 = (decode_clo(env9918))[1];

//creating new closure instance
void** clo10589 = alloc_clo(lam9915_fptr, 3);

//setting env list
clo10589[1] = a95119765;
clo10589[2] = cons;
clo10589[3] = kont9608;
void* f96099768 = encode_clo(clo10589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f96099768;
arg_buffer[3] = a95129767;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9917 = encode_clo(alloc_clo(lam9917_fptr, 0));

void* lam9919_fptr() // lam9919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9920 = arg_buffer[1];
//reading env and args
void* a95119765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9920))[6];
//not do dummy comment
void* kont9608 = (decode_clo(env9920))[5];
//not do dummy comment
void* append = (decode_clo(env9920))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9920))[3];
//not do dummy comment
void* lst1 = (decode_clo(env9920))[2];
//not do dummy comment
void* cons = (decode_clo(env9920))[1];

//creating new closure instance
void** clo10591 = alloc_clo(lam9917_fptr, 5);

//setting env list
clo10591[1] = a95119765;
clo10591[2] = cons;
clo10591[3] = lst2;
clo10591[4] = append;
clo10591[5] = kont9608;
void* f96109766 = encode_clo(clo10591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96109766;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9919 = encode_clo(alloc_clo(lam9919_fptr, 0));

void* lam9921_fptr() // lam9921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9922 = arg_buffer[1];
//reading env and args
void* a95109763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9922))[7];
//not do dummy comment
void* kont9608 = (decode_clo(env9922))[6];
//not do dummy comment
void* append = (decode_clo(env9922))[5];
//not do dummy comment
void* lst2 = (decode_clo(env9922))[4];
//not do dummy comment
void* cons = (decode_clo(env9922))[3];
//not do dummy comment
void* lst1 = (decode_clo(env9922))[2];
//not do dummy comment
void* car = (decode_clo(env9922))[1];

//if-clause
bool if_guard10592 = is_true(a95109763);
if(if_guard10592)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9608);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9608))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10594 = alloc_clo(lam9919_fptr, 6);

//setting env list
clo10594[1] = cons;
clo10594[2] = lst1;
clo10594[3] = lst2;
clo10594[4] = append;
clo10594[5] = kont9608;
clo10594[6] = cdr;
void* f96119764 = encode_clo(clo10594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96119764;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9921 = encode_clo(alloc_clo(lam9921_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9923 = arg_buffer[1];
//reading env and args
void* kont9608 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10596 = alloc_clo(lam9921_fptr, 7);

//setting env list
clo10596[1] = car;
clo10596[2] = lst1;
clo10596[3] = cons;
clo10596[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo10596[5] = append;
clo10596[6] = kont9608;
clo10596[7] = cdr;
void* f96129762 = encode_clo(clo10596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f96129762;
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
void* _9924 = arg_buffer[1];
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

void* kont96139770 = prim_car(lst);
void* lst9771 = prim_cdr(lst);
void* x95149772 = apply_prim_hash(lst9771);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96139770);
arg_buffer[2] = x95149772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96139770))[0]);
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
void* _9925 = arg_buffer[1];
//reading env and args
void* kont9615 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x95159773 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9615);
arg_buffer[2] = x95159773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9615))[0]);
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
void* _9926 = arg_buffer[1];
//reading env and args
void* kont9616 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x95169774 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9616);
arg_buffer[2] = x95169774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9616))[0]);
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
void* _9927 = arg_buffer[1];
//reading env and args
void* kont9617 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x95179775 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9617);
arg_buffer[2] = x95179775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9617))[0]);
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
void* _9928 = arg_buffer[1];
//reading env and args
void* kont9618 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x95189776 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9618);
arg_buffer[2] = x95189776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9618))[0]);
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
void* _9931 = arg_buffer[1];
//reading env and args
void* kont9619 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar10597 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10597, "100", 10);
void* a95199777 = encode_mpz(mpzvar10597);
mpz_t* mpzvar10598 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10598, "2", 10);
void* a95209778 = encode_mpz(mpzvar10598);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = kont9619;
arg_buffer[3] = a95199777;
arg_buffer[4] = a95209778;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam9932_fptr() // lam9932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9933 = arg_buffer[1];
//reading env and args
void* x95219780 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9620 = (decode_clo(env9933))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9620);
arg_buffer[2] = x95219780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9620))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9932 = encode_clo(alloc_clo(lam9932_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9934 = arg_buffer[1];
//reading env and args
void* kont9620 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo10600 = alloc_clo(lam9932_fptr, 1);

//setting env list
clo10600[1] = kont9620;
void* f96219779 = encode_clo(clo10600);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f96219779;
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

