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
void* _125792 = arg_buffer[1];
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

void* kont125532125632 = prim_car(lst);
void* lst125633 = prim_cdr(lst);
void* x125445125634 = apply_prim__u43(lst125633);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125532125632);
arg_buffer[2] = x125445125634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125532125632))[0]);
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
void* _125793 = arg_buffer[1];
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

void* kont125534125635 = prim_car(lst);
void* lst125636 = prim_cdr(lst);
void* x125446125637 = apply_prim__u45(lst125636);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125534125635);
arg_buffer[2] = x125446125637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125534125635))[0]);
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
void* _125794 = arg_buffer[1];
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

void* kont125536125638 = prim_car(lst);
void* lst125639 = prim_cdr(lst);
void* x125447125640 = apply_prim__u42(lst125639);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125536125638);
arg_buffer[2] = x125447125640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125536125638))[0]);
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
void* _125795 = arg_buffer[1];
//reading env and args
void* kont125538 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x125448125641 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125538);
arg_buffer[2] = x125448125641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125538))[0]);
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
void* _125796 = arg_buffer[1];
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

void* kont125539125642 = prim_car(lst);
void* lst125643 = prim_cdr(lst);
void* x125449125644 = apply_prim__u47(lst125643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125539125642);
arg_buffer[2] = x125449125644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125539125642))[0]);
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
void* _125797 = arg_buffer[1];
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

void* kont125541125645 = prim_car(lst);
void* lst125646 = prim_cdr(lst);
void* x125450125647 = apply_prim__u61(lst125646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125541125645);
arg_buffer[2] = x125450125647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125541125645))[0]);
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
void* _125798 = arg_buffer[1];
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

void* kont125543125648 = prim_car(lst);
void* lst125649 = prim_cdr(lst);
void* x125451125650 = apply_prim__u62(lst125649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125543125648);
arg_buffer[2] = x125451125650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125543125648))[0]);
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
void* _125799 = arg_buffer[1];
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

void* kont125545125651 = prim_car(lst);
void* lst125652 = prim_cdr(lst);
void* x125452125653 = apply_prim__u60(lst125652);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125545125651);
arg_buffer[2] = x125452125653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125545125651))[0]);
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
void* _125800 = arg_buffer[1];
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

void* kont125547125654 = prim_car(lst);
void* lst125655 = prim_cdr(lst);
void* x125453125656 = apply_prim__u60_u61(lst125655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125547125654);
arg_buffer[2] = x125453125656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125547125654))[0]);
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
void* _125801 = arg_buffer[1];
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

void* kont125549125657 = prim_car(lst);
void* lst125658 = prim_cdr(lst);
void* x125454125659 = apply_prim__u62_u61(lst125658);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125549125657);
arg_buffer[2] = x125454125659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125549125657))[0]);
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
void* _125802 = arg_buffer[1];
//reading env and args
void* kont125551 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x125455125660 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125551);
arg_buffer[2] = x125455125660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125551))[0]);
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
void* _125803 = arg_buffer[1];
//reading env and args
void* kont125552 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x125456125661 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125552);
arg_buffer[2] = x125456125661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125552))[0]);
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
void* _125804 = arg_buffer[1];
//reading env and args
void* kont125553 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x125457125662 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125553);
arg_buffer[2] = x125457125662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125553))[0]);
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
void* _125805 = arg_buffer[1];
//reading env and args
void* kont125554 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x125458125663 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125554);
arg_buffer[2] = x125458125663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125554))[0]);
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
void* _125806 = arg_buffer[1];
//reading env and args
void* kont125555 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x125459125664 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125555);
arg_buffer[2] = x125459125664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125555))[0]);
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
void* _125807 = arg_buffer[1];
//reading env and args
void* kont125556 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x125460125665 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125556);
arg_buffer[2] = x125460125665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125556))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam125808_fptr() // lam125808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125809 = arg_buffer[1];
//reading env and args
void* a125463125669 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a125461125666 = (decode_clo(env125809))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env125809))[2];
//not do dummy comment
void* kont125557 = (decode_clo(env125809))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont125557;
arg_buffer[3] = a125461125666;
arg_buffer[4] = a125463125669;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125808 = encode_clo(alloc_clo(lam125808_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125812 = arg_buffer[1];
//reading env and args
void* kont125557 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar126451 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126451, "0", 10);
void* a125461125666 = encode_mpz(mpzvar126451);
mpz_t* mpzvar126452 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126452, "2", 10);
void* a125462125667 = encode_mpz(mpzvar126452);

//creating new closure instance
void** clo126454 = alloc_clo(lam125808_fptr, 3);

//setting env list
clo126454[1] = kont125557;
clo126454[2] = equal_u63;
clo126454[3] = a125461125666;
void* f125558125668 = encode_clo(clo126454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f125558125668;
arg_buffer[3] = x;
arg_buffer[4] = a125462125667;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam125813_fptr() // lam125813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125814 = arg_buffer[1];
//reading env and args
void* a125466125673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env125814))[3];
//not do dummy comment
void* a125464125670 = (decode_clo(env125814))[2];
//not do dummy comment
void* kont125559 = (decode_clo(env125814))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont125559;
arg_buffer[3] = a125464125670;
arg_buffer[4] = a125466125673;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125813 = encode_clo(alloc_clo(lam125813_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125817 = arg_buffer[1];
//reading env and args
void* kont125559 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar126455 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126455, "1", 10);
void* a125464125670 = encode_mpz(mpzvar126455);
mpz_t* mpzvar126456 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126456, "2", 10);
void* a125465125671 = encode_mpz(mpzvar126456);

//creating new closure instance
void** clo126458 = alloc_clo(lam125813_fptr, 3);

//setting env list
clo126458[1] = kont125559;
clo126458[2] = a125464125670;
clo126458[3] = equal_u63;
void* f125560125672 = encode_clo(clo126458);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f125560125672;
arg_buffer[3] = x;
arg_buffer[4] = a125465125671;
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
void* _125818 = arg_buffer[1];
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

void* kont125561125674 = prim_car(x);
void* x125675 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125561125674);
arg_buffer[2] = x125675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125561125674))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam125821_fptr() // lam125821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125822 = arg_buffer[1];
//reading env and args
void* a125472125685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env125822))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env125822))[2];
//not do dummy comment
void* kont125563 = (decode_clo(env125822))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont125563;
arg_buffer[3] = x;
arg_buffer[4] = a125472125685;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125821 = encode_clo(alloc_clo(lam125821_fptr, 0));

void* lam125823_fptr() // lam125823 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125824 = arg_buffer[1];
//reading env and args
void* a125470125682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125824))[5];
//not do dummy comment
void* lst = (decode_clo(env125824))[4];
//not do dummy comment
void* x = (decode_clo(env125824))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env125824))[2];
//not do dummy comment
void* kont125563 = (decode_clo(env125824))[1];

//if-clause
bool if_guard126459 = is_true(a125470125682);
if(if_guard126459)
{
void* x125471125683 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125563);
arg_buffer[2] = x125471125683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125563))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo126461 = alloc_clo(lam125821_fptr, 3);

//setting env list
clo126461[1] = kont125563;
clo126461[2] = member_u63;
clo126461[3] = x;
void* f125564125684 = encode_clo(clo126461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125564125684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125823 = encode_clo(alloc_clo(lam125823_fptr, 0));

void* lam125825_fptr() // lam125825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125826 = arg_buffer[1];
//reading env and args
void* a125469125680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125826))[6];
//not do dummy comment
void* lst = (decode_clo(env125826))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env125826))[4];
//not do dummy comment
void* x = (decode_clo(env125826))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env125826))[2];
//not do dummy comment
void* kont125563 = (decode_clo(env125826))[1];

//creating new closure instance
void** clo126463 = alloc_clo(lam125823_fptr, 5);

//setting env list
clo126463[1] = kont125563;
clo126463[2] = member_u63;
clo126463[3] = x;
clo126463[4] = lst;
clo126463[5] = cdr;
void* f125565125681 = encode_clo(clo126463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f125565125681;
arg_buffer[3] = a125469125680;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125825 = encode_clo(alloc_clo(lam125825_fptr, 0));

void* lam125827_fptr() // lam125827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125828 = arg_buffer[1];
//reading env and args
void* a125467125677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125828))[7];
//not do dummy comment
void* lst = (decode_clo(env125828))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env125828))[5];
//not do dummy comment
void* x = (decode_clo(env125828))[4];
//not do dummy comment
void* car = (decode_clo(env125828))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env125828))[2];
//not do dummy comment
void* kont125563 = (decode_clo(env125828))[1];

//if-clause
bool if_guard126464 = is_true(a125467125677);
if(if_guard126464)
{
void* x125468125678 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125563);
arg_buffer[2] = x125468125678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125563))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo126466 = alloc_clo(lam125825_fptr, 6);

//setting env list
clo126466[1] = kont125563;
clo126466[2] = member_u63;
clo126466[3] = x;
clo126466[4] = equal_u63;
clo126466[5] = lst;
clo126466[6] = cdr;
void* f125566125679 = encode_clo(clo126466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f125566125679;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125827 = encode_clo(alloc_clo(lam125827_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125829 = arg_buffer[1];
//reading env and args
void* kont125563 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo126468 = alloc_clo(lam125827_fptr, 7);

//setting env list
clo126468[1] = kont125563;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo126468[2] = member_u63;
clo126468[3] = car;
clo126468[4] = x;
clo126468[5] = equal_u63;
clo126468[6] = lst;
clo126468[7] = cdr;
void* f125567125676 = encode_clo(clo126468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f125567125676;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam125830_fptr() // lam125830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125831 = arg_buffer[1];
//reading env and args
void* a125476125693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125568 = (decode_clo(env125831))[4];
//not do dummy comment
void* fun = (decode_clo(env125831))[3];
//not do dummy comment
void* foldl = (decode_clo(env125831))[2];
//not do dummy comment
void* a125475125691 = (decode_clo(env125831))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont125568;
arg_buffer[3] = fun;
arg_buffer[4] = a125475125691;
arg_buffer[5] = a125476125693;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125830 = encode_clo(alloc_clo(lam125830_fptr, 0));

void* lam125832_fptr() // lam125832 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125833 = arg_buffer[1];
//reading env and args
void* a125475125691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125833))[5];
//not do dummy comment
void* fun = (decode_clo(env125833))[4];
//not do dummy comment
void* foldl = (decode_clo(env125833))[3];
//not do dummy comment
void* lst = (decode_clo(env125833))[2];
//not do dummy comment
void* kont125568 = (decode_clo(env125833))[1];

//creating new closure instance
void** clo126470 = alloc_clo(lam125830_fptr, 4);

//setting env list
clo126470[1] = a125475125691;
clo126470[2] = foldl;
clo126470[3] = fun;
clo126470[4] = kont125568;
void* f125569125692 = encode_clo(clo126470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125569125692;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125832 = encode_clo(alloc_clo(lam125832_fptr, 0));

void* lam125834_fptr() // lam125834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125835 = arg_buffer[1];
//reading env and args
void* a125474125689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125835))[6];
//not do dummy comment
void* fun = (decode_clo(env125835))[5];
//not do dummy comment
void* acc = (decode_clo(env125835))[4];
//not do dummy comment
void* foldl = (decode_clo(env125835))[3];
//not do dummy comment
void* lst = (decode_clo(env125835))[2];
//not do dummy comment
void* kont125568 = (decode_clo(env125835))[1];

//creating new closure instance
void** clo126472 = alloc_clo(lam125832_fptr, 5);

//setting env list
clo126472[1] = kont125568;
clo126472[2] = lst;
clo126472[3] = foldl;
clo126472[4] = fun;
clo126472[5] = cdr;
void* f125570125690 = encode_clo(clo126472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f125570125690;
arg_buffer[3] = a125474125689;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125834 = encode_clo(alloc_clo(lam125834_fptr, 0));

void* lam125836_fptr() // lam125836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125837 = arg_buffer[1];
//reading env and args
void* a125473125687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125837))[7];
//not do dummy comment
void* fun = (decode_clo(env125837))[6];
//not do dummy comment
void* acc = (decode_clo(env125837))[5];
//not do dummy comment
void* car = (decode_clo(env125837))[4];
//not do dummy comment
void* foldl = (decode_clo(env125837))[3];
//not do dummy comment
void* lst = (decode_clo(env125837))[2];
//not do dummy comment
void* kont125568 = (decode_clo(env125837))[1];

//if-clause
bool if_guard126473 = is_true(a125473125687);
if(if_guard126473)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125568);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125568))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo126475 = alloc_clo(lam125834_fptr, 6);

//setting env list
clo126475[1] = kont125568;
clo126475[2] = lst;
clo126475[3] = foldl;
clo126475[4] = acc;
clo126475[5] = fun;
clo126475[6] = cdr;
void* f125571125688 = encode_clo(clo126475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f125571125688;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125836 = encode_clo(alloc_clo(lam125836_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125838 = arg_buffer[1];
//reading env and args
void* kont125568 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo126477 = alloc_clo(lam125836_fptr, 7);

//setting env list
clo126477[1] = kont125568;
clo126477[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo126477[3] = foldl;
clo126477[4] = car;
clo126477[5] = acc;
clo126477[6] = fun;
clo126477[7] = cdr;
void* f125572125686 = encode_clo(clo126477);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f125572125686;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam125839_fptr() // lam125839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125840 = arg_buffer[1];
//reading env and args
void* a125480125701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a125478125697 = (decode_clo(env125840))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env125840))[2];
//not do dummy comment
void* kont125573 = (decode_clo(env125840))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont125573;
arg_buffer[3] = a125478125697;
arg_buffer[4] = a125480125701;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125839 = encode_clo(alloc_clo(lam125839_fptr, 0));

void* lam125841_fptr() // lam125841 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125842 = arg_buffer[1];
//reading env and args
void* a125479125699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a125478125697 = (decode_clo(env125842))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env125842))[4];
//not do dummy comment
void* kont125573 = (decode_clo(env125842))[3];
//not do dummy comment
void* lst2 = (decode_clo(env125842))[2];
//not do dummy comment
void* cons = (decode_clo(env125842))[1];

//creating new closure instance
void** clo126479 = alloc_clo(lam125839_fptr, 3);

//setting env list
clo126479[1] = kont125573;
clo126479[2] = reverse_u45helper;
clo126479[3] = a125478125697;
void* f125574125700 = encode_clo(clo126479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f125574125700;
arg_buffer[3] = a125479125699;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125841 = encode_clo(alloc_clo(lam125841_fptr, 0));

void* lam125843_fptr() // lam125843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125844 = arg_buffer[1];
//reading env and args
void* a125478125697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env125844))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env125844))[5];
//not do dummy comment
void* kont125573 = (decode_clo(env125844))[4];
//not do dummy comment
void* lst2 = (decode_clo(env125844))[3];
//not do dummy comment
void* car = (decode_clo(env125844))[2];
//not do dummy comment
void* cons = (decode_clo(env125844))[1];

//creating new closure instance
void** clo126481 = alloc_clo(lam125841_fptr, 5);

//setting env list
clo126481[1] = cons;
clo126481[2] = lst2;
clo126481[3] = kont125573;
clo126481[4] = reverse_u45helper;
clo126481[5] = a125478125697;
void* f125575125698 = encode_clo(clo126481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f125575125698;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125843 = encode_clo(alloc_clo(lam125843_fptr, 0));

void* lam125845_fptr() // lam125845 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125846 = arg_buffer[1];
//reading env and args
void* a125477125695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125846))[7];
//not do dummy comment
void* lst = (decode_clo(env125846))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env125846))[5];
//not do dummy comment
void* kont125573 = (decode_clo(env125846))[4];
//not do dummy comment
void* lst2 = (decode_clo(env125846))[3];
//not do dummy comment
void* car = (decode_clo(env125846))[2];
//not do dummy comment
void* cons = (decode_clo(env125846))[1];

//if-clause
bool if_guard126482 = is_true(a125477125695);
if(if_guard126482)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125573);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125573))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo126484 = alloc_clo(lam125843_fptr, 6);

//setting env list
clo126484[1] = cons;
clo126484[2] = car;
clo126484[3] = lst2;
clo126484[4] = kont125573;
clo126484[5] = reverse_u45helper;
clo126484[6] = lst;
void* f125576125696 = encode_clo(clo126484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125576125696;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125845 = encode_clo(alloc_clo(lam125845_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125847 = arg_buffer[1];
//reading env and args
void* kont125573 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo126486 = alloc_clo(lam125845_fptr, 7);

//setting env list
clo126486[1] = cons;
clo126486[2] = car;
clo126486[3] = lst2;
clo126486[4] = kont125573;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo126486[5] = reverse_u45helper;
clo126486[6] = lst;
clo126486[7] = cdr;
void* f125577125694 = encode_clo(clo126486);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f125577125694;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam125848_fptr() // lam125848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125849 = arg_buffer[1];
//reading env and args
void* a125481125703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env125849))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env125849))[2];
//not do dummy comment
void* kont125578 = (decode_clo(env125849))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont125578;
arg_buffer[3] = lst;
arg_buffer[4] = a125481125703;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125848 = encode_clo(alloc_clo(lam125848_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125850 = arg_buffer[1];
//reading env and args
void* kont125578 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo126488 = alloc_clo(lam125848_fptr, 3);

//setting env list
clo126488[1] = kont125578;
clo126488[2] = reverse_u45helper;
clo126488[3] = lst;
void* f125579125702 = encode_clo(clo126488);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f125579125702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam125851_fptr() // lam125851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125852 = arg_buffer[1];
//reading env and args
void* x125484125708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125580 = (decode_clo(env125852))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125580);
arg_buffer[2] = x125484125708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125580))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125851 = encode_clo(alloc_clo(lam125851_fptr, 0));

void* lam125853_fptr() // lam125853 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125854 = arg_buffer[1];
//reading env and args
void* a125489125717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125580 = (decode_clo(env125854))[4];
//not do dummy comment
void* a125485125710 = (decode_clo(env125854))[3];
//not do dummy comment
void* a125487125713 = (decode_clo(env125854))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env125854))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont125580;
arg_buffer[3] = a125485125710;
arg_buffer[4] = a125487125713;
arg_buffer[5] = a125489125717;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125853 = encode_clo(alloc_clo(lam125853_fptr, 0));

void* lam125855_fptr() // lam125855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125856 = arg_buffer[1];
//reading env and args
void* a125488125715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125580 = (decode_clo(env125856))[6];
//not do dummy comment
void* a125485125710 = (decode_clo(env125856))[5];
//not do dummy comment
void* a125487125713 = (decode_clo(env125856))[4];
//not do dummy comment
void* cons = (decode_clo(env125856))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env125856))[2];
//not do dummy comment
void* lst2 = (decode_clo(env125856))[1];

//creating new closure instance
void** clo126490 = alloc_clo(lam125853_fptr, 4);

//setting env list
clo126490[1] = take_u45helper;
clo126490[2] = a125487125713;
clo126490[3] = a125485125710;
clo126490[4] = kont125580;
void* f125582125716 = encode_clo(clo126490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f125582125716;
arg_buffer[3] = a125488125715;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125855 = encode_clo(alloc_clo(lam125855_fptr, 0));

void* lam125857_fptr() // lam125857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125858 = arg_buffer[1];
//reading env and args
void* a125487125713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125580 = (decode_clo(env125858))[7];
//not do dummy comment
void* a125485125710 = (decode_clo(env125858))[6];
//not do dummy comment
void* lst = (decode_clo(env125858))[5];
//not do dummy comment
void* car = (decode_clo(env125858))[4];
//not do dummy comment
void* cons = (decode_clo(env125858))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env125858))[2];
//not do dummy comment
void* lst2 = (decode_clo(env125858))[1];

//creating new closure instance
void** clo126492 = alloc_clo(lam125855_fptr, 6);

//setting env list
clo126492[1] = lst2;
clo126492[2] = take_u45helper;
clo126492[3] = cons;
clo126492[4] = a125487125713;
clo126492[5] = a125485125710;
clo126492[6] = kont125580;
void* f125583125714 = encode_clo(clo126492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f125583125714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125857 = encode_clo(alloc_clo(lam125857_fptr, 0));

void* lam125860_fptr() // lam125860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125861 = arg_buffer[1];
//reading env and args
void* a125485125710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125580 = (decode_clo(env125861))[8];
//not do dummy comment
void* lst = (decode_clo(env125861))[7];
//not do dummy comment
void* cons = (decode_clo(env125861))[6];
//not do dummy comment
void* _u45 = (decode_clo(env125861))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env125861))[4];
//not do dummy comment
void* lst2 = (decode_clo(env125861))[3];
//not do dummy comment
void* n = (decode_clo(env125861))[2];
//not do dummy comment
void* car = (decode_clo(env125861))[1];
mpz_t* mpzvar126493 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126493, "1", 10);
void* a125486125711 = encode_mpz(mpzvar126493);

//creating new closure instance
void** clo126495 = alloc_clo(lam125857_fptr, 7);

//setting env list
clo126495[1] = lst2;
clo126495[2] = take_u45helper;
clo126495[3] = cons;
clo126495[4] = car;
clo126495[5] = lst;
clo126495[6] = a125485125710;
clo126495[7] = kont125580;
void* f125584125712 = encode_clo(clo126495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f125584125712;
arg_buffer[3] = n;
arg_buffer[4] = a125486125711;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125860 = encode_clo(alloc_clo(lam125860_fptr, 0));

void* lam125862_fptr() // lam125862 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125863 = arg_buffer[1];
//reading env and args
void* a125483125706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env125863))[10];
//not do dummy comment
void* reverse = (decode_clo(env125863))[9];
//not do dummy comment
void* cons = (decode_clo(env125863))[8];
//not do dummy comment
void* _u45 = (decode_clo(env125863))[7];
//not do dummy comment
void* kont125580 = (decode_clo(env125863))[6];
//not do dummy comment
void* cdr = (decode_clo(env125863))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env125863))[4];
//not do dummy comment
void* lst2 = (decode_clo(env125863))[3];
//not do dummy comment
void* n = (decode_clo(env125863))[2];
//not do dummy comment
void* car = (decode_clo(env125863))[1];

//if-clause
bool if_guard126496 = is_true(a125483125706);
if(if_guard126496)
{

//creating new closure instance
void** clo126498 = alloc_clo(lam125851_fptr, 1);

//setting env list
clo126498[1] = kont125580;
void* f125581125707 = encode_clo(clo126498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f125581125707;
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
void** clo126500 = alloc_clo(lam125860_fptr, 8);

//setting env list
clo126500[1] = car;
clo126500[2] = n;
clo126500[3] = lst2;
clo126500[4] = take_u45helper;
clo126500[5] = _u45;
clo126500[6] = cons;
clo126500[7] = lst;
clo126500[8] = kont125580;
void* f125585125709 = encode_clo(clo126500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125585125709;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125862 = encode_clo(alloc_clo(lam125862_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125865 = arg_buffer[1];
//reading env and args
void* kont125580 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar126501 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126501, "0", 10);
void* a125482125704 = encode_mpz(mpzvar126501);

//creating new closure instance
void** clo126503 = alloc_clo(lam125862_fptr, 10);

//setting env list
clo126503[1] = car;
clo126503[2] = n;
clo126503[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo126503[4] = take_u45helper;
clo126503[5] = cdr;
clo126503[6] = kont125580;
clo126503[7] = _u45;
clo126503[8] = cons;
clo126503[9] = reverse;
clo126503[10] = lst;
void* f125586125705 = encode_clo(clo126503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f125586125705;
arg_buffer[3] = n;
arg_buffer[4] = a125482125704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam125866_fptr() // lam125866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125867 = arg_buffer[1];
//reading env and args
void* a125490125719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env125867))[4];
//not do dummy comment
void* kont125587 = (decode_clo(env125867))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env125867))[2];
//not do dummy comment
void* n = (decode_clo(env125867))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont125587;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a125490125719;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125866 = encode_clo(alloc_clo(lam125866_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125868 = arg_buffer[1];
//reading env and args
void* kont125587 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo126505 = alloc_clo(lam125866_fptr, 4);

//setting env list
clo126505[1] = n;
clo126505[2] = take_u45helper;
clo126505[3] = kont125587;
clo126505[4] = lst;
void* f125588125718 = encode_clo(clo126505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f125588125718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam125870_fptr() // lam125870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125871 = arg_buffer[1];
//reading env and args
void* a125495125727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a125493125723 = (decode_clo(env125871))[3];
//not do dummy comment
void* kont125589 = (decode_clo(env125871))[2];
//not do dummy comment
void* _u43 = (decode_clo(env125871))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont125589;
arg_buffer[3] = a125493125723;
arg_buffer[4] = a125495125727;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125870 = encode_clo(alloc_clo(lam125870_fptr, 0));

void* lam125872_fptr() // lam125872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125873 = arg_buffer[1];
//reading env and args
void* a125494125725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env125873))[4];
//not do dummy comment
void* a125493125723 = (decode_clo(env125873))[3];
//not do dummy comment
void* kont125589 = (decode_clo(env125873))[2];
//not do dummy comment
void* _u43 = (decode_clo(env125873))[1];

//creating new closure instance
void** clo126507 = alloc_clo(lam125870_fptr, 3);

//setting env list
clo126507[1] = _u43;
clo126507[2] = kont125589;
clo126507[3] = a125493125723;
void* f125590125726 = encode_clo(clo126507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f125590125726;
arg_buffer[3] = a125494125725;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125872 = encode_clo(alloc_clo(lam125872_fptr, 0));

void* lam125875_fptr() // lam125875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125876 = arg_buffer[1];
//reading env and args
void* a125491125721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125876))[5];
//not do dummy comment
void* lst = (decode_clo(env125876))[4];
//not do dummy comment
void* length = (decode_clo(env125876))[3];
//not do dummy comment
void* kont125589 = (decode_clo(env125876))[2];
//not do dummy comment
void* _u43 = (decode_clo(env125876))[1];

//if-clause
bool if_guard126508 = is_true(a125491125721);
if(if_guard126508)
{
mpz_t* mpzvar126509 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126509, "0", 10);
void* x125492125722 = encode_mpz(mpzvar126509);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125589);
arg_buffer[2] = x125492125722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125589))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar126510 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126510, "1", 10);
void* a125493125723 = encode_mpz(mpzvar126510);

//creating new closure instance
void** clo126512 = alloc_clo(lam125872_fptr, 4);

//setting env list
clo126512[1] = _u43;
clo126512[2] = kont125589;
clo126512[3] = a125493125723;
clo126512[4] = length;
void* f125591125724 = encode_clo(clo126512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125591125724;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125875 = encode_clo(alloc_clo(lam125875_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125877 = arg_buffer[1];
//reading env and args
void* kont125589 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo126514 = alloc_clo(lam125875_fptr, 5);

//setting env list
clo126514[1] = _u43;
clo126514[2] = kont125589;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo126514[3] = length;
clo126514[4] = lst;
clo126514[5] = cdr;
void* f125592125720 = encode_clo(clo126514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f125592125720;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam125878_fptr() // lam125878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125879 = arg_buffer[1];
//reading env and args
void* x125497125731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125593 = (decode_clo(env125879))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125593);
arg_buffer[2] = x125497125731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125593))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125878 = encode_clo(alloc_clo(lam125878_fptr, 0));

void* lam125880_fptr() // lam125880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125881 = arg_buffer[1];
//reading env and args
void* a125501125739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a125499125735 = (decode_clo(env125881))[3];
//not do dummy comment
void* kont125593 = (decode_clo(env125881))[2];
//not do dummy comment
void* cons = (decode_clo(env125881))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont125593;
arg_buffer[3] = a125499125735;
arg_buffer[4] = a125501125739;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125880 = encode_clo(alloc_clo(lam125880_fptr, 0));

void* lam125882_fptr() // lam125882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125883 = arg_buffer[1];
//reading env and args
void* a125500125737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env125883))[5];
//not do dummy comment
void* kont125593 = (decode_clo(env125883))[4];
//not do dummy comment
void* cons = (decode_clo(env125883))[3];
//not do dummy comment
void* proc = (decode_clo(env125883))[2];
//not do dummy comment
void* a125499125735 = (decode_clo(env125883))[1];

//creating new closure instance
void** clo126516 = alloc_clo(lam125880_fptr, 3);

//setting env list
clo126516[1] = cons;
clo126516[2] = kont125593;
clo126516[3] = a125499125735;
void* f125595125738 = encode_clo(clo126516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f125595125738;
arg_buffer[3] = proc;
arg_buffer[4] = a125500125737;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125882 = encode_clo(alloc_clo(lam125882_fptr, 0));

void* lam125884_fptr() // lam125884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125885 = arg_buffer[1];
//reading env and args
void* a125499125735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125885))[6];
//not do dummy comment
void* lst = (decode_clo(env125885))[5];
//not do dummy comment
void* map = (decode_clo(env125885))[4];
//not do dummy comment
void* proc = (decode_clo(env125885))[3];
//not do dummy comment
void* kont125593 = (decode_clo(env125885))[2];
//not do dummy comment
void* cons = (decode_clo(env125885))[1];

//creating new closure instance
void** clo126518 = alloc_clo(lam125882_fptr, 5);

//setting env list
clo126518[1] = a125499125735;
clo126518[2] = proc;
clo126518[3] = cons;
clo126518[4] = kont125593;
clo126518[5] = map;
void* f125596125736 = encode_clo(clo126518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125596125736;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125884 = encode_clo(alloc_clo(lam125884_fptr, 0));

void* lam125886_fptr() // lam125886 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125887 = arg_buffer[1];
//reading env and args
void* a125498125733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125887))[6];
//not do dummy comment
void* lst = (decode_clo(env125887))[5];
//not do dummy comment
void* map = (decode_clo(env125887))[4];
//not do dummy comment
void* proc = (decode_clo(env125887))[3];
//not do dummy comment
void* kont125593 = (decode_clo(env125887))[2];
//not do dummy comment
void* cons = (decode_clo(env125887))[1];

//creating new closure instance
void** clo126520 = alloc_clo(lam125884_fptr, 6);

//setting env list
clo126520[1] = cons;
clo126520[2] = kont125593;
clo126520[3] = proc;
clo126520[4] = map;
clo126520[5] = lst;
clo126520[6] = cdr;
void* f125597125734 = encode_clo(clo126520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f125597125734;
arg_buffer[3] = a125498125733;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125886 = encode_clo(alloc_clo(lam125886_fptr, 0));

void* lam125888_fptr() // lam125888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125889 = arg_buffer[1];
//reading env and args
void* a125496125729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env125889))[8];
//not do dummy comment
void* map = (decode_clo(env125889))[7];
//not do dummy comment
void* proc = (decode_clo(env125889))[6];
//not do dummy comment
void* cons = (decode_clo(env125889))[5];
//not do dummy comment
void* list = (decode_clo(env125889))[4];
//not do dummy comment
void* cdr = (decode_clo(env125889))[3];
//not do dummy comment
void* kont125593 = (decode_clo(env125889))[2];
//not do dummy comment
void* car = (decode_clo(env125889))[1];

//if-clause
bool if_guard126521 = is_true(a125496125729);
if(if_guard126521)
{

//creating new closure instance
void** clo126523 = alloc_clo(lam125878_fptr, 1);

//setting env list
clo126523[1] = kont125593;
void* f125594125730 = encode_clo(clo126523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f125594125730;
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
void** clo126525 = alloc_clo(lam125886_fptr, 6);

//setting env list
clo126525[1] = cons;
clo126525[2] = kont125593;
clo126525[3] = proc;
clo126525[4] = map;
clo126525[5] = lst;
clo126525[6] = cdr;
void* f125598125732 = encode_clo(clo126525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f125598125732;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125888 = encode_clo(alloc_clo(lam125888_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125890 = arg_buffer[1];
//reading env and args
void* kont125593 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo126527 = alloc_clo(lam125888_fptr, 8);

//setting env list
clo126527[1] = car;
clo126527[2] = kont125593;
clo126527[3] = cdr;
clo126527[4] = list;
clo126527[5] = cons;
clo126527[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo126527[7] = map;
clo126527[8] = lst;
void* f125599125728 = encode_clo(clo126527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f125599125728;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam125891_fptr() // lam125891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125892 = arg_buffer[1];
//reading env and args
void* x125503125743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125600 = (decode_clo(env125892))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125600);
arg_buffer[2] = x125503125743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125600))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125891 = encode_clo(alloc_clo(lam125891_fptr, 0));

void* lam125893_fptr() // lam125893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125894 = arg_buffer[1];
//reading env and args
void* a125508125753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125600 = (decode_clo(env125894))[3];
//not do dummy comment
void* a125506125749 = (decode_clo(env125894))[2];
//not do dummy comment
void* cons = (decode_clo(env125894))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont125600;
arg_buffer[3] = a125506125749;
arg_buffer[4] = a125508125753;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125893 = encode_clo(alloc_clo(lam125893_fptr, 0));

void* lam125895_fptr() // lam125895 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125896 = arg_buffer[1];
//reading env and args
void* a125507125751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125600 = (decode_clo(env125896))[5];
//not do dummy comment
void* op = (decode_clo(env125896))[4];
//not do dummy comment
void* a125506125749 = (decode_clo(env125896))[3];
//not do dummy comment
void* filter = (decode_clo(env125896))[2];
//not do dummy comment
void* cons = (decode_clo(env125896))[1];

//creating new closure instance
void** clo126529 = alloc_clo(lam125893_fptr, 3);

//setting env list
clo126529[1] = cons;
clo126529[2] = a125506125749;
clo126529[3] = kont125600;
void* f125602125752 = encode_clo(clo126529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f125602125752;
arg_buffer[3] = op;
arg_buffer[4] = a125507125751;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125895 = encode_clo(alloc_clo(lam125895_fptr, 0));

void* lam125897_fptr() // lam125897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125898 = arg_buffer[1];
//reading env and args
void* a125506125749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125898))[6];
//not do dummy comment
void* op = (decode_clo(env125898))[5];
//not do dummy comment
void* filter = (decode_clo(env125898))[4];
//not do dummy comment
void* cons = (decode_clo(env125898))[3];
//not do dummy comment
void* lst = (decode_clo(env125898))[2];
//not do dummy comment
void* kont125600 = (decode_clo(env125898))[1];

//creating new closure instance
void** clo126531 = alloc_clo(lam125895_fptr, 5);

//setting env list
clo126531[1] = cons;
clo126531[2] = filter;
clo126531[3] = a125506125749;
clo126531[4] = op;
clo126531[5] = kont125600;
void* f125603125750 = encode_clo(clo126531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125603125750;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125897 = encode_clo(alloc_clo(lam125897_fptr, 0));

void* lam125899_fptr() // lam125899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125900 = arg_buffer[1];
//reading env and args
void* a125509125755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125600 = (decode_clo(env125900))[3];
//not do dummy comment
void* op = (decode_clo(env125900))[2];
//not do dummy comment
void* filter = (decode_clo(env125900))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont125600;
arg_buffer[3] = op;
arg_buffer[4] = a125509125755;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125899 = encode_clo(alloc_clo(lam125899_fptr, 0));

void* lam125901_fptr() // lam125901 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125902 = arg_buffer[1];
//reading env and args
void* a125505125747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125902))[7];
//not do dummy comment
void* op = (decode_clo(env125902))[6];
//not do dummy comment
void* cons = (decode_clo(env125902))[5];
//not do dummy comment
void* lst = (decode_clo(env125902))[4];
//not do dummy comment
void* kont125600 = (decode_clo(env125902))[3];
//not do dummy comment
void* filter = (decode_clo(env125902))[2];
//not do dummy comment
void* car = (decode_clo(env125902))[1];

//if-clause
bool if_guard126532 = is_true(a125505125747);
if(if_guard126532)
{

//creating new closure instance
void** clo126534 = alloc_clo(lam125897_fptr, 6);

//setting env list
clo126534[1] = kont125600;
clo126534[2] = lst;
clo126534[3] = cons;
clo126534[4] = filter;
clo126534[5] = op;
clo126534[6] = cdr;
void* f125604125748 = encode_clo(clo126534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f125604125748;
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
void** clo126536 = alloc_clo(lam125899_fptr, 3);

//setting env list
clo126536[1] = filter;
clo126536[2] = op;
clo126536[3] = kont125600;
void* f125605125754 = encode_clo(clo126536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125605125754;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125901 = encode_clo(alloc_clo(lam125901_fptr, 0));

void* lam125903_fptr() // lam125903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125904 = arg_buffer[1];
//reading env and args
void* a125504125745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125904))[7];
//not do dummy comment
void* op = (decode_clo(env125904))[6];
//not do dummy comment
void* cons = (decode_clo(env125904))[5];
//not do dummy comment
void* lst = (decode_clo(env125904))[4];
//not do dummy comment
void* kont125600 = (decode_clo(env125904))[3];
//not do dummy comment
void* filter = (decode_clo(env125904))[2];
//not do dummy comment
void* car = (decode_clo(env125904))[1];

//creating new closure instance
void** clo126538 = alloc_clo(lam125901_fptr, 7);

//setting env list
clo126538[1] = car;
clo126538[2] = filter;
clo126538[3] = kont125600;
clo126538[4] = lst;
clo126538[5] = cons;
clo126538[6] = op;
clo126538[7] = cdr;
void* f125606125746 = encode_clo(clo126538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f125606125746;
arg_buffer[3] = a125504125745;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125903 = encode_clo(alloc_clo(lam125903_fptr, 0));

void* lam125905_fptr() // lam125905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125906 = arg_buffer[1];
//reading env and args
void* a125502125741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env125906))[8];
//not do dummy comment
void* cons = (decode_clo(env125906))[7];
//not do dummy comment
void* list = (decode_clo(env125906))[6];
//not do dummy comment
void* cdr = (decode_clo(env125906))[5];
//not do dummy comment
void* lst = (decode_clo(env125906))[4];
//not do dummy comment
void* kont125600 = (decode_clo(env125906))[3];
//not do dummy comment
void* filter = (decode_clo(env125906))[2];
//not do dummy comment
void* car = (decode_clo(env125906))[1];

//if-clause
bool if_guard126539 = is_true(a125502125741);
if(if_guard126539)
{

//creating new closure instance
void** clo126541 = alloc_clo(lam125891_fptr, 1);

//setting env list
clo126541[1] = kont125600;
void* f125601125742 = encode_clo(clo126541);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f125601125742;
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
void** clo126543 = alloc_clo(lam125903_fptr, 7);

//setting env list
clo126543[1] = car;
clo126543[2] = filter;
clo126543[3] = kont125600;
clo126543[4] = lst;
clo126543[5] = cons;
clo126543[6] = op;
clo126543[7] = cdr;
void* f125607125744 = encode_clo(clo126543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f125607125744;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125905 = encode_clo(alloc_clo(lam125905_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125907 = arg_buffer[1];
//reading env and args
void* kont125600 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo126545 = alloc_clo(lam125905_fptr, 8);

//setting env list
clo126545[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo126545[2] = filter;
clo126545[3] = kont125600;
clo126545[4] = lst;
clo126545[5] = cdr;
clo126545[6] = list;
clo126545[7] = cons;
clo126545[8] = op;
void* f125608125740 = encode_clo(clo126545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f125608125740;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam125908_fptr() // lam125908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125909 = arg_buffer[1];
//reading env and args
void* a125514125763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125609 = (decode_clo(env125909))[3];
//not do dummy comment
void* a125512125760 = (decode_clo(env125909))[2];
//not do dummy comment
void* drop = (decode_clo(env125909))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont125609;
arg_buffer[3] = a125512125760;
arg_buffer[4] = a125514125763;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125908 = encode_clo(alloc_clo(lam125908_fptr, 0));

void* lam125911_fptr() // lam125911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125912 = arg_buffer[1];
//reading env and args
void* a125512125760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env125912))[4];
//not do dummy comment
void* _u45 = (decode_clo(env125912))[3];
//not do dummy comment
void* kont125609 = (decode_clo(env125912))[2];
//not do dummy comment
void* n = (decode_clo(env125912))[1];
mpz_t* mpzvar126546 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126546, "1", 10);
void* a125513125761 = encode_mpz(mpzvar126546);

//creating new closure instance
void** clo126548 = alloc_clo(lam125908_fptr, 3);

//setting env list
clo126548[1] = drop;
clo126548[2] = a125512125760;
clo126548[3] = kont125609;
void* f125610125762 = encode_clo(clo126548);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f125610125762;
arg_buffer[3] = n;
arg_buffer[4] = a125513125761;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125911 = encode_clo(alloc_clo(lam125911_fptr, 0));

void* lam125913_fptr() // lam125913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125914 = arg_buffer[1];
//reading env and args
void* a125511125758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125914))[6];
//not do dummy comment
void* _u45 = (decode_clo(env125914))[5];
//not do dummy comment
void* lst = (decode_clo(env125914))[4];
//not do dummy comment
void* drop = (decode_clo(env125914))[3];
//not do dummy comment
void* kont125609 = (decode_clo(env125914))[2];
//not do dummy comment
void* n = (decode_clo(env125914))[1];

//if-clause
bool if_guard126549 = is_true(a125511125758);
if(if_guard126549)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125609);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125609))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo126551 = alloc_clo(lam125911_fptr, 4);

//setting env list
clo126551[1] = n;
clo126551[2] = kont125609;
clo126551[3] = _u45;
clo126551[4] = drop;
void* f125611125759 = encode_clo(clo126551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125611125759;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125913 = encode_clo(alloc_clo(lam125913_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125916 = arg_buffer[1];
//reading env and args
void* kont125609 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar126552 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126552, "0", 10);
void* a125510125756 = encode_mpz(mpzvar126552);

//creating new closure instance
void** clo126554 = alloc_clo(lam125913_fptr, 6);

//setting env list
clo126554[1] = n;
clo126554[2] = kont125609;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo126554[3] = drop;
clo126554[4] = lst;
clo126554[5] = _u45;
clo126554[6] = cdr;
void* f125612125757 = encode_clo(clo126554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f125612125757;
arg_buffer[3] = n;
arg_buffer[4] = a125510125756;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam125917_fptr() // lam125917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125918 = arg_buffer[1];
//reading env and args
void* a125518125771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125613 = (decode_clo(env125918))[3];
//not do dummy comment
void* proc = (decode_clo(env125918))[2];
//not do dummy comment
void* a125516125767 = (decode_clo(env125918))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont125613;
arg_buffer[3] = a125516125767;
arg_buffer[4] = a125518125771;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125917 = encode_clo(alloc_clo(lam125917_fptr, 0));

void* lam125919_fptr() // lam125919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125920 = arg_buffer[1];
//reading env and args
void* a125517125769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125613 = (decode_clo(env125920))[5];
//not do dummy comment
void* foldr = (decode_clo(env125920))[4];
//not do dummy comment
void* proc = (decode_clo(env125920))[3];
//not do dummy comment
void* acc = (decode_clo(env125920))[2];
//not do dummy comment
void* a125516125767 = (decode_clo(env125920))[1];

//creating new closure instance
void** clo126556 = alloc_clo(lam125917_fptr, 3);

//setting env list
clo126556[1] = a125516125767;
clo126556[2] = proc;
clo126556[3] = kont125613;
void* f125614125770 = encode_clo(clo126556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f125614125770;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a125517125769;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125919 = encode_clo(alloc_clo(lam125919_fptr, 0));

void* lam125921_fptr() // lam125921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125922 = arg_buffer[1];
//reading env and args
void* a125516125767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125922))[6];
//not do dummy comment
void* kont125613 = (decode_clo(env125922))[5];
//not do dummy comment
void* foldr = (decode_clo(env125922))[4];
//not do dummy comment
void* lst = (decode_clo(env125922))[3];
//not do dummy comment
void* proc = (decode_clo(env125922))[2];
//not do dummy comment
void* acc = (decode_clo(env125922))[1];

//creating new closure instance
void** clo126558 = alloc_clo(lam125919_fptr, 5);

//setting env list
clo126558[1] = a125516125767;
clo126558[2] = acc;
clo126558[3] = proc;
clo126558[4] = foldr;
clo126558[5] = kont125613;
void* f125615125768 = encode_clo(clo126558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125615125768;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125921 = encode_clo(alloc_clo(lam125921_fptr, 0));

void* lam125923_fptr() // lam125923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125924 = arg_buffer[1];
//reading env and args
void* a125515125765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125924))[7];
//not do dummy comment
void* kont125613 = (decode_clo(env125924))[6];
//not do dummy comment
void* car = (decode_clo(env125924))[5];
//not do dummy comment
void* foldr = (decode_clo(env125924))[4];
//not do dummy comment
void* lst = (decode_clo(env125924))[3];
//not do dummy comment
void* proc = (decode_clo(env125924))[2];
//not do dummy comment
void* acc = (decode_clo(env125924))[1];

//if-clause
bool if_guard126559 = is_true(a125515125765);
if(if_guard126559)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125613);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125613))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo126561 = alloc_clo(lam125921_fptr, 6);

//setting env list
clo126561[1] = acc;
clo126561[2] = proc;
clo126561[3] = lst;
clo126561[4] = foldr;
clo126561[5] = kont125613;
clo126561[6] = cdr;
void* f125616125766 = encode_clo(clo126561);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f125616125766;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125923 = encode_clo(alloc_clo(lam125923_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125925 = arg_buffer[1];
//reading env and args
void* kont125613 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo126563 = alloc_clo(lam125923_fptr, 7);

//setting env list
clo126563[1] = acc;
clo126563[2] = proc;
clo126563[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo126563[4] = foldr;
clo126563[5] = car;
clo126563[6] = kont125613;
clo126563[7] = cdr;
void* f125617125764 = encode_clo(clo126563);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f125617125764;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam125926_fptr() // lam125926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125927 = arg_buffer[1];
//reading env and args
void* a125522125779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a125520125775 = (decode_clo(env125927))[3];
//not do dummy comment
void* kont125618 = (decode_clo(env125927))[2];
//not do dummy comment
void* cons = (decode_clo(env125927))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont125618;
arg_buffer[3] = a125520125775;
arg_buffer[4] = a125522125779;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125926 = encode_clo(alloc_clo(lam125926_fptr, 0));

void* lam125928_fptr() // lam125928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125929 = arg_buffer[1];
//reading env and args
void* a125521125777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a125520125775 = (decode_clo(env125929))[5];
//not do dummy comment
void* kont125618 = (decode_clo(env125929))[4];
//not do dummy comment
void* append = (decode_clo(env125929))[3];
//not do dummy comment
void* lst2 = (decode_clo(env125929))[2];
//not do dummy comment
void* cons = (decode_clo(env125929))[1];

//creating new closure instance
void** clo126565 = alloc_clo(lam125926_fptr, 3);

//setting env list
clo126565[1] = cons;
clo126565[2] = kont125618;
clo126565[3] = a125520125775;
void* f125619125778 = encode_clo(clo126565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f125619125778;
arg_buffer[3] = a125521125777;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125928 = encode_clo(alloc_clo(lam125928_fptr, 0));

void* lam125930_fptr() // lam125930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125931 = arg_buffer[1];
//reading env and args
void* a125520125775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125931))[6];
//not do dummy comment
void* kont125618 = (decode_clo(env125931))[5];
//not do dummy comment
void* append = (decode_clo(env125931))[4];
//not do dummy comment
void* lst2 = (decode_clo(env125931))[3];
//not do dummy comment
void* lst1 = (decode_clo(env125931))[2];
//not do dummy comment
void* cons = (decode_clo(env125931))[1];

//creating new closure instance
void** clo126567 = alloc_clo(lam125928_fptr, 5);

//setting env list
clo126567[1] = cons;
clo126567[2] = lst2;
clo126567[3] = append;
clo126567[4] = kont125618;
clo126567[5] = a125520125775;
void* f125620125776 = encode_clo(clo126567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f125620125776;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125930 = encode_clo(alloc_clo(lam125930_fptr, 0));

void* lam125932_fptr() // lam125932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125933 = arg_buffer[1];
//reading env and args
void* a125519125773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env125933))[7];
//not do dummy comment
void* kont125618 = (decode_clo(env125933))[6];
//not do dummy comment
void* append = (decode_clo(env125933))[5];
//not do dummy comment
void* lst2 = (decode_clo(env125933))[4];
//not do dummy comment
void* cons = (decode_clo(env125933))[3];
//not do dummy comment
void* lst1 = (decode_clo(env125933))[2];
//not do dummy comment
void* car = (decode_clo(env125933))[1];

//if-clause
bool if_guard126568 = is_true(a125519125773);
if(if_guard126568)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125618);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125618))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo126570 = alloc_clo(lam125930_fptr, 6);

//setting env list
clo126570[1] = cons;
clo126570[2] = lst1;
clo126570[3] = lst2;
clo126570[4] = append;
clo126570[5] = kont125618;
clo126570[6] = cdr;
void* f125621125774 = encode_clo(clo126570);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f125621125774;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam125932 = encode_clo(alloc_clo(lam125932_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125934 = arg_buffer[1];
//reading env and args
void* kont125618 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo126572 = alloc_clo(lam125932_fptr, 7);

//setting env list
clo126572[1] = car;
clo126572[2] = lst1;
clo126572[3] = cons;
clo126572[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo126572[5] = append;
clo126572[6] = kont125618;
clo126572[7] = cdr;
void* f125622125772 = encode_clo(clo126572);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f125622125772;
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
void* _125935 = arg_buffer[1];
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

void* kont125623125780 = prim_car(lst);
void* lst125781 = prim_cdr(lst);
void* x125523125782 = apply_prim_hash(lst125781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125623125780);
arg_buffer[2] = x125523125782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125623125780))[0]);
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
void* _125936 = arg_buffer[1];
//reading env and args
void* kont125625 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x125524125783 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125625);
arg_buffer[2] = x125524125783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125625))[0]);
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
void* _125937 = arg_buffer[1];
//reading env and args
void* kont125626 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x125525125784 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125626);
arg_buffer[2] = x125525125784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125626))[0]);
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
void* _125938 = arg_buffer[1];
//reading env and args
void* kont125627 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x125526125785 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125627);
arg_buffer[2] = x125526125785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125627))[0]);
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
void* _125939 = arg_buffer[1];
//reading env and args
void* kont125628 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x125527125786 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125628);
arg_buffer[2] = x125527125786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125628))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam125940_fptr() // lam125940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env125941 = arg_buffer[1];
//reading env and args
void* x125528125788 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont125629 = (decode_clo(env125941))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont125629);
arg_buffer[2] = x125528125788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont125629))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam125940 = encode_clo(alloc_clo(lam125940_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _125942 = arg_buffer[1];
//reading env and args
void* kont125629 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
void* z = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo126574 = alloc_clo(lam125940_fptr, 1);

//setting env list
clo126574[1] = kont125629;
void* f125630125787 = encode_clo(clo126574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f125630125787;
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
void* _125946 = arg_buffer[1];
//reading env and args
void* kont125631 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar126575 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126575, "1", 10);
void* a125529125789 = encode_mpz(mpzvar126575);
mpz_t* mpzvar126576 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126576, "2", 10);
void* a125530125790 = encode_mpz(mpzvar126576);
mpz_t* mpzvar126577 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar126577, "3", 10);
void* a125531125791 = encode_mpz(mpzvar126577);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont125631;
arg_buffer[3] = a125529125789;
arg_buffer[4] = a125530125790;
arg_buffer[5] = a125531125791;
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

