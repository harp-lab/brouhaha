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
void* _99819 = arg_buffer[1];
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

void* kont9953099638 = prim_car(lst);
void* lst99639 = prim_cdr(lst);
void* x9943099640 = apply_prim__u43(lst99639);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9953099638);
arg_buffer[2] = x9943099640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9953099638))[0]);
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
void* _99820 = arg_buffer[1];
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

void* kont9953299641 = prim_car(lst);
void* lst99642 = prim_cdr(lst);
void* x9943199643 = apply_prim__u45(lst99642);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9953299641);
arg_buffer[2] = x9943199643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9953299641))[0]);
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
void* _99821 = arg_buffer[1];
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

void* kont9953499644 = prim_car(lst);
void* lst99645 = prim_cdr(lst);
void* x9943299646 = apply_prim__u42(lst99645);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9953499644);
arg_buffer[2] = x9943299646;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9953499644))[0]);
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
void* _99822 = arg_buffer[1];
//reading env and args
void* kont99536 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9943399647 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99536);
arg_buffer[2] = x9943399647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99536))[0]);
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
void* _99823 = arg_buffer[1];
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

void* kont9953799648 = prim_car(lst);
void* lst99649 = prim_cdr(lst);
void* x9943499650 = apply_prim__u47(lst99649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9953799648);
arg_buffer[2] = x9943499650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9953799648))[0]);
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
void* _99824 = arg_buffer[1];
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

void* kont9953999651 = prim_car(lst);
void* lst99652 = prim_cdr(lst);
void* x9943599653 = apply_prim__u61(lst99652);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9953999651);
arg_buffer[2] = x9943599653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9953999651))[0]);
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
void* _99825 = arg_buffer[1];
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

void* kont9954199654 = prim_car(lst);
void* lst99655 = prim_cdr(lst);
void* x9943699656 = apply_prim__u62(lst99655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9954199654);
arg_buffer[2] = x9943699656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9954199654))[0]);
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
void* _99826 = arg_buffer[1];
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

void* kont9954399657 = prim_car(lst);
void* lst99658 = prim_cdr(lst);
void* x9943799659 = apply_prim__u60(lst99658);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9954399657);
arg_buffer[2] = x9943799659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9954399657))[0]);
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
void* _99827 = arg_buffer[1];
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

void* kont9954599660 = prim_car(lst);
void* lst99661 = prim_cdr(lst);
void* x9943899662 = apply_prim__u60_u61(lst99661);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9954599660);
arg_buffer[2] = x9943899662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9954599660))[0]);
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
void* _99828 = arg_buffer[1];
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

void* kont9954799663 = prim_car(lst);
void* lst99664 = prim_cdr(lst);
void* x9943999665 = apply_prim__u62_u61(lst99664);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9954799663);
arg_buffer[2] = x9943999665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9954799663))[0]);
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
void* _99829 = arg_buffer[1];
//reading env and args
void* kont99549 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x9944099666 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99549);
arg_buffer[2] = x9944099666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99549))[0]);
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
void* _99830 = arg_buffer[1];
//reading env and args
void* kont99550 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9944199667 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99550);
arg_buffer[2] = x9944199667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99550))[0]);
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
void* _99831 = arg_buffer[1];
//reading env and args
void* kont99551 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9944299668 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99551);
arg_buffer[2] = x9944299668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99551))[0]);
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
void* _99832 = arg_buffer[1];
//reading env and args
void* kont99552 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9944399669 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99552);
arg_buffer[2] = x9944399669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99552))[0]);
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
void* _99833 = arg_buffer[1];
//reading env and args
void* kont99553 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9944499670 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99553);
arg_buffer[2] = x9944499670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99553))[0]);
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
void* _99834 = arg_buffer[1];
//reading env and args
void* kont99554 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9944599671 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99554);
arg_buffer[2] = x9944599671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99554))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam99835_fptr() // lam99835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99836 = arg_buffer[1];
//reading env and args
void* a9944899675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env99836))[3];
//not do dummy comment
void* kont99555 = (decode_clo(env99836))[2];
//not do dummy comment
void* a9944699672 = (decode_clo(env99836))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont99555;
arg_buffer[3] = a9944699672;
arg_buffer[4] = a9944899675;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99835 = encode_clo(alloc_clo(lam99835_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99839 = arg_buffer[1];
//reading env and args
void* kont99555 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar110435 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110435, "0", 10);
void* a9944699672 = encode_mpz(mpzvar110435);
mpz_t* mpzvar110436 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110436, "2", 10);
void* a9944799673 = encode_mpz(mpzvar110436);

//creating new closure instance
void** clo110438 = alloc_clo(lam99835_fptr, 3);

//setting env list
clo110438[1] = a9944699672;
clo110438[2] = kont99555;
clo110438[3] = equal_u63;
void* f9955699674 = encode_clo(clo110438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9955699674;
arg_buffer[3] = x;
arg_buffer[4] = a9944799673;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam99840_fptr() // lam99840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99841 = arg_buffer[1];
//reading env and args
void* a9945199679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9944999676 = (decode_clo(env99841))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env99841))[2];
//not do dummy comment
void* kont99557 = (decode_clo(env99841))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont99557;
arg_buffer[3] = a9944999676;
arg_buffer[4] = a9945199679;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99840 = encode_clo(alloc_clo(lam99840_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99844 = arg_buffer[1];
//reading env and args
void* kont99557 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar110439 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110439, "1", 10);
void* a9944999676 = encode_mpz(mpzvar110439);
mpz_t* mpzvar110440 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110440, "2", 10);
void* a9945099677 = encode_mpz(mpzvar110440);

//creating new closure instance
void** clo110442 = alloc_clo(lam99840_fptr, 3);

//setting env list
clo110442[1] = kont99557;
clo110442[2] = equal_u63;
clo110442[3] = a9944999676;
void* f9955899678 = encode_clo(clo110442);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9955899678;
arg_buffer[3] = x;
arg_buffer[4] = a9945099677;
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
void* _99845 = arg_buffer[1];
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

void* kont9955999680 = prim_car(x);
void* x99681 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9955999680);
arg_buffer[2] = x99681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9955999680))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam99848_fptr() // lam99848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99849 = arg_buffer[1];
//reading env and args
void* a9945799691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99561 = (decode_clo(env99849))[3];
//not do dummy comment
void* x = (decode_clo(env99849))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env99849))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont99561;
arg_buffer[3] = x;
arg_buffer[4] = a9945799691;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99848 = encode_clo(alloc_clo(lam99848_fptr, 0));

void* lam99850_fptr() // lam99850 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99851 = arg_buffer[1];
//reading env and args
void* a9945599688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env99851))[5];
//not do dummy comment
void* x = (decode_clo(env99851))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env99851))[3];
//not do dummy comment
void* kont99561 = (decode_clo(env99851))[2];
//not do dummy comment
void* cdr = (decode_clo(env99851))[1];

//if-clause
bool if_guard110443 = is_true(a9945599688);
if(if_guard110443)
{
void* x9945699689 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99561);
arg_buffer[2] = x9945699689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99561))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110445 = alloc_clo(lam99848_fptr, 3);

//setting env list
clo110445[1] = member_u63;
clo110445[2] = x;
clo110445[3] = kont99561;
void* f9956299690 = encode_clo(clo110445);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9956299690;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99850 = encode_clo(alloc_clo(lam99850_fptr, 0));

void* lam99852_fptr() // lam99852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99853 = arg_buffer[1];
//reading env and args
void* a9945499686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env99853))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env99853))[5];
//not do dummy comment
void* x = (decode_clo(env99853))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env99853))[3];
//not do dummy comment
void* kont99561 = (decode_clo(env99853))[2];
//not do dummy comment
void* cdr = (decode_clo(env99853))[1];

//creating new closure instance
void** clo110447 = alloc_clo(lam99850_fptr, 5);

//setting env list
clo110447[1] = cdr;
clo110447[2] = kont99561;
clo110447[3] = member_u63;
clo110447[4] = x;
clo110447[5] = lst;
void* f9956399687 = encode_clo(clo110447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9956399687;
arg_buffer[3] = a9945499686;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99852 = encode_clo(alloc_clo(lam99852_fptr, 0));

void* lam99854_fptr() // lam99854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99855 = arg_buffer[1];
//reading env and args
void* a9945299683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env99855))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env99855))[6];
//not do dummy comment
void* x = (decode_clo(env99855))[5];
//not do dummy comment
void* car = (decode_clo(env99855))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env99855))[3];
//not do dummy comment
void* kont99561 = (decode_clo(env99855))[2];
//not do dummy comment
void* cdr = (decode_clo(env99855))[1];

//if-clause
bool if_guard110448 = is_true(a9945299683);
if(if_guard110448)
{
void* x9945399684 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99561);
arg_buffer[2] = x9945399684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99561))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110450 = alloc_clo(lam99852_fptr, 6);

//setting env list
clo110450[1] = cdr;
clo110450[2] = kont99561;
clo110450[3] = member_u63;
clo110450[4] = x;
clo110450[5] = equal_u63;
clo110450[6] = lst;
void* f9956499685 = encode_clo(clo110450);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9956499685;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99854 = encode_clo(alloc_clo(lam99854_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99856 = arg_buffer[1];
//reading env and args
void* kont99561 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110452 = alloc_clo(lam99854_fptr, 7);

//setting env list
clo110452[1] = cdr;
clo110452[2] = kont99561;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo110452[3] = member_u63;
clo110452[4] = car;
clo110452[5] = x;
clo110452[6] = equal_u63;
clo110452[7] = lst;
void* f9956599682 = encode_clo(clo110452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9956599682;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam99857_fptr() // lam99857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99858 = arg_buffer[1];
//reading env and args
void* a9946199699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99566 = (decode_clo(env99858))[4];
//not do dummy comment
void* a9946099697 = (decode_clo(env99858))[3];
//not do dummy comment
void* fun = (decode_clo(env99858))[2];
//not do dummy comment
void* foldl = (decode_clo(env99858))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont99566;
arg_buffer[3] = fun;
arg_buffer[4] = a9946099697;
arg_buffer[5] = a9946199699;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99857 = encode_clo(alloc_clo(lam99857_fptr, 0));

void* lam99859_fptr() // lam99859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99860 = arg_buffer[1];
//reading env and args
void* a9946099697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99860))[5];
//not do dummy comment
void* lst = (decode_clo(env99860))[4];
//not do dummy comment
void* kont99566 = (decode_clo(env99860))[3];
//not do dummy comment
void* fun = (decode_clo(env99860))[2];
//not do dummy comment
void* foldl = (decode_clo(env99860))[1];

//creating new closure instance
void** clo110454 = alloc_clo(lam99857_fptr, 4);

//setting env list
clo110454[1] = foldl;
clo110454[2] = fun;
clo110454[3] = a9946099697;
clo110454[4] = kont99566;
void* f9956799698 = encode_clo(clo110454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9956799698;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99859 = encode_clo(alloc_clo(lam99859_fptr, 0));

void* lam99861_fptr() // lam99861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99862 = arg_buffer[1];
//reading env and args
void* a9945999695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99862))[6];
//not do dummy comment
void* lst = (decode_clo(env99862))[5];
//not do dummy comment
void* kont99566 = (decode_clo(env99862))[4];
//not do dummy comment
void* fun = (decode_clo(env99862))[3];
//not do dummy comment
void* acc = (decode_clo(env99862))[2];
//not do dummy comment
void* foldl = (decode_clo(env99862))[1];

//creating new closure instance
void** clo110456 = alloc_clo(lam99859_fptr, 5);

//setting env list
clo110456[1] = foldl;
clo110456[2] = fun;
clo110456[3] = kont99566;
clo110456[4] = lst;
clo110456[5] = cdr;
void* f9956899696 = encode_clo(clo110456);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f9956899696;
arg_buffer[3] = a9945999695;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99861 = encode_clo(alloc_clo(lam99861_fptr, 0));

void* lam99863_fptr() // lam99863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99864 = arg_buffer[1];
//reading env and args
void* a9945899693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99864))[7];
//not do dummy comment
void* lst = (decode_clo(env99864))[6];
//not do dummy comment
void* kont99566 = (decode_clo(env99864))[5];
//not do dummy comment
void* fun = (decode_clo(env99864))[4];
//not do dummy comment
void* acc = (decode_clo(env99864))[3];
//not do dummy comment
void* car = (decode_clo(env99864))[2];
//not do dummy comment
void* foldl = (decode_clo(env99864))[1];

//if-clause
bool if_guard110457 = is_true(a9945899693);
if(if_guard110457)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99566);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99566))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110459 = alloc_clo(lam99861_fptr, 6);

//setting env list
clo110459[1] = foldl;
clo110459[2] = acc;
clo110459[3] = fun;
clo110459[4] = kont99566;
clo110459[5] = lst;
clo110459[6] = cdr;
void* f9956999694 = encode_clo(clo110459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9956999694;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99863 = encode_clo(alloc_clo(lam99863_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99865 = arg_buffer[1];
//reading env and args
void* kont99566 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo110461 = alloc_clo(lam99863_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo110461[1] = foldl;
clo110461[2] = car;
clo110461[3] = acc;
clo110461[4] = fun;
clo110461[5] = kont99566;
clo110461[6] = lst;
clo110461[7] = cdr;
void* f9957099692 = encode_clo(clo110461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9957099692;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam99866_fptr() // lam99866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99867 = arg_buffer[1];
//reading env and args
void* a9946599707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env99867))[3];
//not do dummy comment
void* kont99571 = (decode_clo(env99867))[2];
//not do dummy comment
void* a9946399703 = (decode_clo(env99867))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont99571;
arg_buffer[3] = a9946399703;
arg_buffer[4] = a9946599707;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99866 = encode_clo(alloc_clo(lam99866_fptr, 0));

void* lam99868_fptr() // lam99868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99869 = arg_buffer[1];
//reading env and args
void* a9946499705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env99869))[5];
//not do dummy comment
void* kont99571 = (decode_clo(env99869))[4];
//not do dummy comment
void* lst2 = (decode_clo(env99869))[3];
//not do dummy comment
void* a9946399703 = (decode_clo(env99869))[2];
//not do dummy comment
void* cons = (decode_clo(env99869))[1];

//creating new closure instance
void** clo110463 = alloc_clo(lam99866_fptr, 3);

//setting env list
clo110463[1] = a9946399703;
clo110463[2] = kont99571;
clo110463[3] = reverse_u45helper;
void* f9957299706 = encode_clo(clo110463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9957299706;
arg_buffer[3] = a9946499705;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99868 = encode_clo(alloc_clo(lam99868_fptr, 0));

void* lam99870_fptr() // lam99870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99871 = arg_buffer[1];
//reading env and args
void* a9946399703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env99871))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env99871))[5];
//not do dummy comment
void* kont99571 = (decode_clo(env99871))[4];
//not do dummy comment
void* lst2 = (decode_clo(env99871))[3];
//not do dummy comment
void* car = (decode_clo(env99871))[2];
//not do dummy comment
void* cons = (decode_clo(env99871))[1];

//creating new closure instance
void** clo110465 = alloc_clo(lam99868_fptr, 5);

//setting env list
clo110465[1] = cons;
clo110465[2] = a9946399703;
clo110465[3] = lst2;
clo110465[4] = kont99571;
clo110465[5] = reverse_u45helper;
void* f9957399704 = encode_clo(clo110465);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9957399704;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99870 = encode_clo(alloc_clo(lam99870_fptr, 0));

void* lam99872_fptr() // lam99872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99873 = arg_buffer[1];
//reading env and args
void* a9946299701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99873))[7];
//not do dummy comment
void* lst = (decode_clo(env99873))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env99873))[5];
//not do dummy comment
void* kont99571 = (decode_clo(env99873))[4];
//not do dummy comment
void* lst2 = (decode_clo(env99873))[3];
//not do dummy comment
void* car = (decode_clo(env99873))[2];
//not do dummy comment
void* cons = (decode_clo(env99873))[1];

//if-clause
bool if_guard110466 = is_true(a9946299701);
if(if_guard110466)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99571);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99571))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110468 = alloc_clo(lam99870_fptr, 6);

//setting env list
clo110468[1] = cons;
clo110468[2] = car;
clo110468[3] = lst2;
clo110468[4] = kont99571;
clo110468[5] = reverse_u45helper;
clo110468[6] = lst;
void* f9957499702 = encode_clo(clo110468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9957499702;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99872 = encode_clo(alloc_clo(lam99872_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99874 = arg_buffer[1];
//reading env and args
void* kont99571 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110470 = alloc_clo(lam99872_fptr, 7);

//setting env list
clo110470[1] = cons;
clo110470[2] = car;
clo110470[3] = lst2;
clo110470[4] = kont99571;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo110470[5] = reverse_u45helper;
clo110470[6] = lst;
clo110470[7] = cdr;
void* f9957599700 = encode_clo(clo110470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9957599700;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam99875_fptr() // lam99875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99876 = arg_buffer[1];
//reading env and args
void* a9946699709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env99876))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env99876))[2];
//not do dummy comment
void* kont99576 = (decode_clo(env99876))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont99576;
arg_buffer[3] = lst;
arg_buffer[4] = a9946699709;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99875 = encode_clo(alloc_clo(lam99875_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99877 = arg_buffer[1];
//reading env and args
void* kont99576 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo110472 = alloc_clo(lam99875_fptr, 3);

//setting env list
clo110472[1] = kont99576;
clo110472[2] = reverse_u45helper;
clo110472[3] = lst;
void* f9957799708 = encode_clo(clo110472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9957799708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam99878_fptr() // lam99878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99879 = arg_buffer[1];
//reading env and args
void* x9946999714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99578 = (decode_clo(env99879))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99578);
arg_buffer[2] = x9946999714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99578))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99878 = encode_clo(alloc_clo(lam99878_fptr, 0));

void* lam99880_fptr() // lam99880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99881 = arg_buffer[1];
//reading env and args
void* a9947499723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99578 = (decode_clo(env99881))[4];
//not do dummy comment
void* a9947099716 = (decode_clo(env99881))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env99881))[2];
//not do dummy comment
void* a9947299719 = (decode_clo(env99881))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont99578;
arg_buffer[3] = a9947099716;
arg_buffer[4] = a9947299719;
arg_buffer[5] = a9947499723;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99880 = encode_clo(alloc_clo(lam99880_fptr, 0));

void* lam99882_fptr() // lam99882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99883 = arg_buffer[1];
//reading env and args
void* a9947399721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99578 = (decode_clo(env99883))[6];
//not do dummy comment
void* a9947099716 = (decode_clo(env99883))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env99883))[4];
//not do dummy comment
void* lst2 = (decode_clo(env99883))[3];
//not do dummy comment
void* a9947299719 = (decode_clo(env99883))[2];
//not do dummy comment
void* cons = (decode_clo(env99883))[1];

//creating new closure instance
void** clo110474 = alloc_clo(lam99880_fptr, 4);

//setting env list
clo110474[1] = a9947299719;
clo110474[2] = take_u45helper;
clo110474[3] = a9947099716;
clo110474[4] = kont99578;
void* f9958099722 = encode_clo(clo110474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9958099722;
arg_buffer[3] = a9947399721;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99882 = encode_clo(alloc_clo(lam99882_fptr, 0));

void* lam99884_fptr() // lam99884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99885 = arg_buffer[1];
//reading env and args
void* a9947299719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99578 = (decode_clo(env99885))[7];
//not do dummy comment
void* lst = (decode_clo(env99885))[6];
//not do dummy comment
void* a9947099716 = (decode_clo(env99885))[5];
//not do dummy comment
void* car = (decode_clo(env99885))[4];
//not do dummy comment
void* cons = (decode_clo(env99885))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env99885))[2];
//not do dummy comment
void* lst2 = (decode_clo(env99885))[1];

//creating new closure instance
void** clo110476 = alloc_clo(lam99882_fptr, 6);

//setting env list
clo110476[1] = cons;
clo110476[2] = a9947299719;
clo110476[3] = lst2;
clo110476[4] = take_u45helper;
clo110476[5] = a9947099716;
clo110476[6] = kont99578;
void* f9958199720 = encode_clo(clo110476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9958199720;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99884 = encode_clo(alloc_clo(lam99884_fptr, 0));

void* lam99887_fptr() // lam99887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99888 = arg_buffer[1];
//reading env and args
void* a9947099716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99578 = (decode_clo(env99888))[8];
//not do dummy comment
void* lst = (decode_clo(env99888))[7];
//not do dummy comment
void* cons = (decode_clo(env99888))[6];
//not do dummy comment
void* _u45 = (decode_clo(env99888))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env99888))[4];
//not do dummy comment
void* lst2 = (decode_clo(env99888))[3];
//not do dummy comment
void* n = (decode_clo(env99888))[2];
//not do dummy comment
void* car = (decode_clo(env99888))[1];
mpz_t* mpzvar110477 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110477, "1", 10);
void* a9947199717 = encode_mpz(mpzvar110477);

//creating new closure instance
void** clo110479 = alloc_clo(lam99884_fptr, 7);

//setting env list
clo110479[1] = lst2;
clo110479[2] = take_u45helper;
clo110479[3] = cons;
clo110479[4] = car;
clo110479[5] = a9947099716;
clo110479[6] = lst;
clo110479[7] = kont99578;
void* f9958299718 = encode_clo(clo110479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9958299718;
arg_buffer[3] = n;
arg_buffer[4] = a9947199717;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99887 = encode_clo(alloc_clo(lam99887_fptr, 0));

void* lam99889_fptr() // lam99889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99890 = arg_buffer[1];
//reading env and args
void* a9946899712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99890))[10];
//not do dummy comment
void* kont99578 = (decode_clo(env99890))[9];
//not do dummy comment
void* lst = (decode_clo(env99890))[8];
//not do dummy comment
void* reverse = (decode_clo(env99890))[7];
//not do dummy comment
void* cons = (decode_clo(env99890))[6];
//not do dummy comment
void* _u45 = (decode_clo(env99890))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env99890))[4];
//not do dummy comment
void* lst2 = (decode_clo(env99890))[3];
//not do dummy comment
void* n = (decode_clo(env99890))[2];
//not do dummy comment
void* car = (decode_clo(env99890))[1];

//if-clause
bool if_guard110480 = is_true(a9946899712);
if(if_guard110480)
{

//creating new closure instance
void** clo110482 = alloc_clo(lam99878_fptr, 1);

//setting env list
clo110482[1] = kont99578;
void* f9957999713 = encode_clo(clo110482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f9957999713;
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
void** clo110484 = alloc_clo(lam99887_fptr, 8);

//setting env list
clo110484[1] = car;
clo110484[2] = n;
clo110484[3] = lst2;
clo110484[4] = take_u45helper;
clo110484[5] = _u45;
clo110484[6] = cons;
clo110484[7] = lst;
clo110484[8] = kont99578;
void* f9958399715 = encode_clo(clo110484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9958399715;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99889 = encode_clo(alloc_clo(lam99889_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99892 = arg_buffer[1];
//reading env and args
void* kont99578 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar110485 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110485, "0", 10);
void* a9946799710 = encode_mpz(mpzvar110485);

//creating new closure instance
void** clo110487 = alloc_clo(lam99889_fptr, 10);

//setting env list
clo110487[1] = car;
clo110487[2] = n;
clo110487[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo110487[4] = take_u45helper;
clo110487[5] = _u45;
clo110487[6] = cons;
clo110487[7] = reverse;
clo110487[8] = lst;
clo110487[9] = kont99578;
clo110487[10] = cdr;
void* f9958499711 = encode_clo(clo110487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9958499711;
arg_buffer[3] = n;
arg_buffer[4] = a9946799710;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam99893_fptr() // lam99893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99894 = arg_buffer[1];
//reading env and args
void* a9947599725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env99894))[4];
//not do dummy comment
void* kont99585 = (decode_clo(env99894))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env99894))[2];
//not do dummy comment
void* n = (decode_clo(env99894))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont99585;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a9947599725;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99893 = encode_clo(alloc_clo(lam99893_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99895 = arg_buffer[1];
//reading env and args
void* kont99585 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110489 = alloc_clo(lam99893_fptr, 4);

//setting env list
clo110489[1] = n;
clo110489[2] = take_u45helper;
clo110489[3] = kont99585;
clo110489[4] = lst;
void* f9958699724 = encode_clo(clo110489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9958699724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam99897_fptr() // lam99897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99898 = arg_buffer[1];
//reading env and args
void* a9948099733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9947899729 = (decode_clo(env99898))[3];
//not do dummy comment
void* _u43 = (decode_clo(env99898))[2];
//not do dummy comment
void* kont99587 = (decode_clo(env99898))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont99587;
arg_buffer[3] = a9947899729;
arg_buffer[4] = a9948099733;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99897 = encode_clo(alloc_clo(lam99897_fptr, 0));

void* lam99899_fptr() // lam99899 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99900 = arg_buffer[1];
//reading env and args
void* a9947999731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env99900))[4];
//not do dummy comment
void* a9947899729 = (decode_clo(env99900))[3];
//not do dummy comment
void* _u43 = (decode_clo(env99900))[2];
//not do dummy comment
void* kont99587 = (decode_clo(env99900))[1];

//creating new closure instance
void** clo110491 = alloc_clo(lam99897_fptr, 3);

//setting env list
clo110491[1] = kont99587;
clo110491[2] = _u43;
clo110491[3] = a9947899729;
void* f9958899732 = encode_clo(clo110491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f9958899732;
arg_buffer[3] = a9947999731;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99899 = encode_clo(alloc_clo(lam99899_fptr, 0));

void* lam99902_fptr() // lam99902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99903 = arg_buffer[1];
//reading env and args
void* a9947699727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99903))[5];
//not do dummy comment
void* lst = (decode_clo(env99903))[4];
//not do dummy comment
void* length = (decode_clo(env99903))[3];
//not do dummy comment
void* _u43 = (decode_clo(env99903))[2];
//not do dummy comment
void* kont99587 = (decode_clo(env99903))[1];

//if-clause
bool if_guard110492 = is_true(a9947699727);
if(if_guard110492)
{
mpz_t* mpzvar110493 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110493, "0", 10);
void* x9947799728 = encode_mpz(mpzvar110493);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99587);
arg_buffer[2] = x9947799728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99587))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar110494 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110494, "1", 10);
void* a9947899729 = encode_mpz(mpzvar110494);

//creating new closure instance
void** clo110496 = alloc_clo(lam99899_fptr, 4);

//setting env list
clo110496[1] = kont99587;
clo110496[2] = _u43;
clo110496[3] = a9947899729;
clo110496[4] = length;
void* f9958999730 = encode_clo(clo110496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9958999730;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99902 = encode_clo(alloc_clo(lam99902_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99904 = arg_buffer[1];
//reading env and args
void* kont99587 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo110498 = alloc_clo(lam99902_fptr, 5);

//setting env list
clo110498[1] = kont99587;
clo110498[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo110498[3] = length;
clo110498[4] = lst;
clo110498[5] = cdr;
void* f9959099726 = encode_clo(clo110498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9959099726;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam99905_fptr() // lam99905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99906 = arg_buffer[1];
//reading env and args
void* x9948299737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99591 = (decode_clo(env99906))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99591);
arg_buffer[2] = x9948299737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99591))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99905 = encode_clo(alloc_clo(lam99905_fptr, 0));

void* lam99907_fptr() // lam99907 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99908 = arg_buffer[1];
//reading env and args
void* a9948699745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9948499741 = (decode_clo(env99908))[3];
//not do dummy comment
void* cons = (decode_clo(env99908))[2];
//not do dummy comment
void* kont99591 = (decode_clo(env99908))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont99591;
arg_buffer[3] = a9948499741;
arg_buffer[4] = a9948699745;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99907 = encode_clo(alloc_clo(lam99907_fptr, 0));

void* lam99909_fptr() // lam99909 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99910 = arg_buffer[1];
//reading env and args
void* a9948599743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9948499741 = (decode_clo(env99910))[5];
//not do dummy comment
void* map = (decode_clo(env99910))[4];
//not do dummy comment
void* proc = (decode_clo(env99910))[3];
//not do dummy comment
void* cons = (decode_clo(env99910))[2];
//not do dummy comment
void* kont99591 = (decode_clo(env99910))[1];

//creating new closure instance
void** clo110500 = alloc_clo(lam99907_fptr, 3);

//setting env list
clo110500[1] = kont99591;
clo110500[2] = cons;
clo110500[3] = a9948499741;
void* f9959399744 = encode_clo(clo110500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f9959399744;
arg_buffer[3] = proc;
arg_buffer[4] = a9948599743;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99909 = encode_clo(alloc_clo(lam99909_fptr, 0));

void* lam99911_fptr() // lam99911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99912 = arg_buffer[1];
//reading env and args
void* a9948499741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99912))[6];
//not do dummy comment
void* lst = (decode_clo(env99912))[5];
//not do dummy comment
void* map = (decode_clo(env99912))[4];
//not do dummy comment
void* proc = (decode_clo(env99912))[3];
//not do dummy comment
void* cons = (decode_clo(env99912))[2];
//not do dummy comment
void* kont99591 = (decode_clo(env99912))[1];

//creating new closure instance
void** clo110502 = alloc_clo(lam99909_fptr, 5);

//setting env list
clo110502[1] = kont99591;
clo110502[2] = cons;
clo110502[3] = proc;
clo110502[4] = map;
clo110502[5] = a9948499741;
void* f9959499742 = encode_clo(clo110502);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9959499742;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99911 = encode_clo(alloc_clo(lam99911_fptr, 0));

void* lam99913_fptr() // lam99913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99914 = arg_buffer[1];
//reading env and args
void* a9948399739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99914))[6];
//not do dummy comment
void* lst = (decode_clo(env99914))[5];
//not do dummy comment
void* map = (decode_clo(env99914))[4];
//not do dummy comment
void* proc = (decode_clo(env99914))[3];
//not do dummy comment
void* cons = (decode_clo(env99914))[2];
//not do dummy comment
void* kont99591 = (decode_clo(env99914))[1];

//creating new closure instance
void** clo110504 = alloc_clo(lam99911_fptr, 6);

//setting env list
clo110504[1] = kont99591;
clo110504[2] = cons;
clo110504[3] = proc;
clo110504[4] = map;
clo110504[5] = lst;
clo110504[6] = cdr;
void* f9959599740 = encode_clo(clo110504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f9959599740;
arg_buffer[3] = a9948399739;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99913 = encode_clo(alloc_clo(lam99913_fptr, 0));

void* lam99915_fptr() // lam99915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99916 = arg_buffer[1];
//reading env and args
void* a9948199735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env99916))[8];
//not do dummy comment
void* map = (decode_clo(env99916))[7];
//not do dummy comment
void* proc = (decode_clo(env99916))[6];
//not do dummy comment
void* car = (decode_clo(env99916))[5];
//not do dummy comment
void* list = (decode_clo(env99916))[4];
//not do dummy comment
void* cdr = (decode_clo(env99916))[3];
//not do dummy comment
void* cons = (decode_clo(env99916))[2];
//not do dummy comment
void* kont99591 = (decode_clo(env99916))[1];

//if-clause
bool if_guard110505 = is_true(a9948199735);
if(if_guard110505)
{

//creating new closure instance
void** clo110507 = alloc_clo(lam99905_fptr, 1);

//setting env list
clo110507[1] = kont99591;
void* f9959299736 = encode_clo(clo110507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9959299736;
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
void** clo110509 = alloc_clo(lam99913_fptr, 6);

//setting env list
clo110509[1] = kont99591;
clo110509[2] = cons;
clo110509[3] = proc;
clo110509[4] = map;
clo110509[5] = lst;
clo110509[6] = cdr;
void* f9959699738 = encode_clo(clo110509);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9959699738;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99915 = encode_clo(alloc_clo(lam99915_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99917 = arg_buffer[1];
//reading env and args
void* kont99591 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110511 = alloc_clo(lam99915_fptr, 8);

//setting env list
clo110511[1] = kont99591;
clo110511[2] = cons;
clo110511[3] = cdr;
clo110511[4] = list;
clo110511[5] = car;
clo110511[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo110511[7] = map;
clo110511[8] = lst;
void* f9959799734 = encode_clo(clo110511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9959799734;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam99918_fptr() // lam99918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99919 = arg_buffer[1];
//reading env and args
void* x9948899749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99598 = (decode_clo(env99919))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99598);
arg_buffer[2] = x9948899749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99598))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99918 = encode_clo(alloc_clo(lam99918_fptr, 0));

void* lam99920_fptr() // lam99920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99921 = arg_buffer[1];
//reading env and args
void* a9949399759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9949199755 = (decode_clo(env99921))[3];
//not do dummy comment
void* kont99598 = (decode_clo(env99921))[2];
//not do dummy comment
void* cons = (decode_clo(env99921))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont99598;
arg_buffer[3] = a9949199755;
arg_buffer[4] = a9949399759;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99920 = encode_clo(alloc_clo(lam99920_fptr, 0));

void* lam99922_fptr() // lam99922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99923 = arg_buffer[1];
//reading env and args
void* a9949299757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9949199755 = (decode_clo(env99923))[5];
//not do dummy comment
void* kont99598 = (decode_clo(env99923))[4];
//not do dummy comment
void* op = (decode_clo(env99923))[3];
//not do dummy comment
void* filter = (decode_clo(env99923))[2];
//not do dummy comment
void* cons = (decode_clo(env99923))[1];

//creating new closure instance
void** clo110513 = alloc_clo(lam99920_fptr, 3);

//setting env list
clo110513[1] = cons;
clo110513[2] = kont99598;
clo110513[3] = a9949199755;
void* f9960099758 = encode_clo(clo110513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f9960099758;
arg_buffer[3] = op;
arg_buffer[4] = a9949299757;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99922 = encode_clo(alloc_clo(lam99922_fptr, 0));

void* lam99924_fptr() // lam99924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99925 = arg_buffer[1];
//reading env and args
void* a9949199755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99925))[6];
//not do dummy comment
void* lst = (decode_clo(env99925))[5];
//not do dummy comment
void* kont99598 = (decode_clo(env99925))[4];
//not do dummy comment
void* op = (decode_clo(env99925))[3];
//not do dummy comment
void* filter = (decode_clo(env99925))[2];
//not do dummy comment
void* cons = (decode_clo(env99925))[1];

//creating new closure instance
void** clo110515 = alloc_clo(lam99922_fptr, 5);

//setting env list
clo110515[1] = cons;
clo110515[2] = filter;
clo110515[3] = op;
clo110515[4] = kont99598;
clo110515[5] = a9949199755;
void* f9960199756 = encode_clo(clo110515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9960199756;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99924 = encode_clo(alloc_clo(lam99924_fptr, 0));

void* lam99926_fptr() // lam99926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99927 = arg_buffer[1];
//reading env and args
void* a9949499761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99598 = (decode_clo(env99927))[3];
//not do dummy comment
void* op = (decode_clo(env99927))[2];
//not do dummy comment
void* filter = (decode_clo(env99927))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont99598;
arg_buffer[3] = op;
arg_buffer[4] = a9949499761;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99926 = encode_clo(alloc_clo(lam99926_fptr, 0));

void* lam99928_fptr() // lam99928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99929 = arg_buffer[1];
//reading env and args
void* a9949099753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99929))[7];
//not do dummy comment
void* lst = (decode_clo(env99929))[6];
//not do dummy comment
void* kont99598 = (decode_clo(env99929))[5];
//not do dummy comment
void* op = (decode_clo(env99929))[4];
//not do dummy comment
void* cons = (decode_clo(env99929))[3];
//not do dummy comment
void* filter = (decode_clo(env99929))[2];
//not do dummy comment
void* car = (decode_clo(env99929))[1];

//if-clause
bool if_guard110516 = is_true(a9949099753);
if(if_guard110516)
{

//creating new closure instance
void** clo110518 = alloc_clo(lam99924_fptr, 6);

//setting env list
clo110518[1] = cons;
clo110518[2] = filter;
clo110518[3] = op;
clo110518[4] = kont99598;
clo110518[5] = lst;
clo110518[6] = cdr;
void* f9960299754 = encode_clo(clo110518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9960299754;
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
void** clo110520 = alloc_clo(lam99926_fptr, 3);

//setting env list
clo110520[1] = filter;
clo110520[2] = op;
clo110520[3] = kont99598;
void* f9960399760 = encode_clo(clo110520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9960399760;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99928 = encode_clo(alloc_clo(lam99928_fptr, 0));

void* lam99930_fptr() // lam99930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99931 = arg_buffer[1];
//reading env and args
void* a9948999751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99931))[7];
//not do dummy comment
void* lst = (decode_clo(env99931))[6];
//not do dummy comment
void* kont99598 = (decode_clo(env99931))[5];
//not do dummy comment
void* op = (decode_clo(env99931))[4];
//not do dummy comment
void* cons = (decode_clo(env99931))[3];
//not do dummy comment
void* filter = (decode_clo(env99931))[2];
//not do dummy comment
void* car = (decode_clo(env99931))[1];

//creating new closure instance
void** clo110522 = alloc_clo(lam99928_fptr, 7);

//setting env list
clo110522[1] = car;
clo110522[2] = filter;
clo110522[3] = cons;
clo110522[4] = op;
clo110522[5] = kont99598;
clo110522[6] = lst;
clo110522[7] = cdr;
void* f9960499752 = encode_clo(clo110522);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f9960499752;
arg_buffer[3] = a9948999751;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99930 = encode_clo(alloc_clo(lam99930_fptr, 0));

void* lam99932_fptr() // lam99932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99933 = arg_buffer[1];
//reading env and args
void* a9948799747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env99933))[8];
//not do dummy comment
void* kont99598 = (decode_clo(env99933))[7];
//not do dummy comment
void* op = (decode_clo(env99933))[6];
//not do dummy comment
void* cons = (decode_clo(env99933))[5];
//not do dummy comment
void* list = (decode_clo(env99933))[4];
//not do dummy comment
void* cdr = (decode_clo(env99933))[3];
//not do dummy comment
void* filter = (decode_clo(env99933))[2];
//not do dummy comment
void* car = (decode_clo(env99933))[1];

//if-clause
bool if_guard110523 = is_true(a9948799747);
if(if_guard110523)
{

//creating new closure instance
void** clo110525 = alloc_clo(lam99918_fptr, 1);

//setting env list
clo110525[1] = kont99598;
void* f9959999748 = encode_clo(clo110525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9959999748;
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
void** clo110527 = alloc_clo(lam99930_fptr, 7);

//setting env list
clo110527[1] = car;
clo110527[2] = filter;
clo110527[3] = cons;
clo110527[4] = op;
clo110527[5] = kont99598;
clo110527[6] = lst;
clo110527[7] = cdr;
void* f9960599750 = encode_clo(clo110527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9960599750;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99932 = encode_clo(alloc_clo(lam99932_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99934 = arg_buffer[1];
//reading env and args
void* kont99598 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110529 = alloc_clo(lam99932_fptr, 8);

//setting env list
clo110529[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo110529[2] = filter;
clo110529[3] = cdr;
clo110529[4] = list;
clo110529[5] = cons;
clo110529[6] = op;
clo110529[7] = kont99598;
clo110529[8] = lst;
void* f9960699746 = encode_clo(clo110529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9960699746;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam99935_fptr() // lam99935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99936 = arg_buffer[1];
//reading env and args
void* a9949999769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env99936))[3];
//not do dummy comment
void* a9949799766 = (decode_clo(env99936))[2];
//not do dummy comment
void* kont99607 = (decode_clo(env99936))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont99607;
arg_buffer[3] = a9949799766;
arg_buffer[4] = a9949999769;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99935 = encode_clo(alloc_clo(lam99935_fptr, 0));

void* lam99938_fptr() // lam99938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99939 = arg_buffer[1];
//reading env and args
void* a9949799766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env99939))[4];
//not do dummy comment
void* n = (decode_clo(env99939))[3];
//not do dummy comment
void* kont99607 = (decode_clo(env99939))[2];
//not do dummy comment
void* _u45 = (decode_clo(env99939))[1];
mpz_t* mpzvar110530 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110530, "1", 10);
void* a9949899767 = encode_mpz(mpzvar110530);

//creating new closure instance
void** clo110532 = alloc_clo(lam99935_fptr, 3);

//setting env list
clo110532[1] = kont99607;
clo110532[2] = a9949799766;
clo110532[3] = drop;
void* f9960899768 = encode_clo(clo110532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9960899768;
arg_buffer[3] = n;
arg_buffer[4] = a9949899767;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99938 = encode_clo(alloc_clo(lam99938_fptr, 0));

void* lam99940_fptr() // lam99940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99941 = arg_buffer[1];
//reading env and args
void* a9949699764 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99941))[6];
//not do dummy comment
void* n = (decode_clo(env99941))[5];
//not do dummy comment
void* kont99607 = (decode_clo(env99941))[4];
//not do dummy comment
void* _u45 = (decode_clo(env99941))[3];
//not do dummy comment
void* lst = (decode_clo(env99941))[2];
//not do dummy comment
void* drop = (decode_clo(env99941))[1];

//if-clause
bool if_guard110533 = is_true(a9949699764);
if(if_guard110533)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99607);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99607))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110535 = alloc_clo(lam99938_fptr, 4);

//setting env list
clo110535[1] = _u45;
clo110535[2] = kont99607;
clo110535[3] = n;
clo110535[4] = drop;
void* f9960999765 = encode_clo(clo110535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9960999765;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99940 = encode_clo(alloc_clo(lam99940_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99943 = arg_buffer[1];
//reading env and args
void* kont99607 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar110536 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110536, "0", 10);
void* a9949599762 = encode_mpz(mpzvar110536);

//creating new closure instance
void** clo110538 = alloc_clo(lam99940_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo110538[1] = drop;
clo110538[2] = lst;
clo110538[3] = _u45;
clo110538[4] = kont99607;
clo110538[5] = n;
clo110538[6] = cdr;
void* f9961099763 = encode_clo(clo110538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9961099763;
arg_buffer[3] = n;
arg_buffer[4] = a9949599762;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam99944_fptr() // lam99944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99945 = arg_buffer[1];
//reading env and args
void* a9950399777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99611 = (decode_clo(env99945))[3];
//not do dummy comment
void* a9950199773 = (decode_clo(env99945))[2];
//not do dummy comment
void* proc = (decode_clo(env99945))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont99611;
arg_buffer[3] = a9950199773;
arg_buffer[4] = a9950399777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99944 = encode_clo(alloc_clo(lam99944_fptr, 0));

void* lam99946_fptr() // lam99946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99947 = arg_buffer[1];
//reading env and args
void* a9950299775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99611 = (decode_clo(env99947))[5];
//not do dummy comment
void* foldr = (decode_clo(env99947))[4];
//not do dummy comment
void* a9950199773 = (decode_clo(env99947))[3];
//not do dummy comment
void* proc = (decode_clo(env99947))[2];
//not do dummy comment
void* acc = (decode_clo(env99947))[1];

//creating new closure instance
void** clo110540 = alloc_clo(lam99944_fptr, 3);

//setting env list
clo110540[1] = proc;
clo110540[2] = a9950199773;
clo110540[3] = kont99611;
void* f9961299776 = encode_clo(clo110540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f9961299776;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a9950299775;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99946 = encode_clo(alloc_clo(lam99946_fptr, 0));

void* lam99948_fptr() // lam99948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99949 = arg_buffer[1];
//reading env and args
void* a9950199773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99949))[6];
//not do dummy comment
void* kont99611 = (decode_clo(env99949))[5];
//not do dummy comment
void* foldr = (decode_clo(env99949))[4];
//not do dummy comment
void* lst = (decode_clo(env99949))[3];
//not do dummy comment
void* proc = (decode_clo(env99949))[2];
//not do dummy comment
void* acc = (decode_clo(env99949))[1];

//creating new closure instance
void** clo110542 = alloc_clo(lam99946_fptr, 5);

//setting env list
clo110542[1] = acc;
clo110542[2] = proc;
clo110542[3] = a9950199773;
clo110542[4] = foldr;
clo110542[5] = kont99611;
void* f9961399774 = encode_clo(clo110542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9961399774;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99948 = encode_clo(alloc_clo(lam99948_fptr, 0));

void* lam99950_fptr() // lam99950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99951 = arg_buffer[1];
//reading env and args
void* a9950099771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99951))[7];
//not do dummy comment
void* kont99611 = (decode_clo(env99951))[6];
//not do dummy comment
void* car = (decode_clo(env99951))[5];
//not do dummy comment
void* foldr = (decode_clo(env99951))[4];
//not do dummy comment
void* lst = (decode_clo(env99951))[3];
//not do dummy comment
void* proc = (decode_clo(env99951))[2];
//not do dummy comment
void* acc = (decode_clo(env99951))[1];

//if-clause
bool if_guard110543 = is_true(a9950099771);
if(if_guard110543)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99611);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99611))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110545 = alloc_clo(lam99948_fptr, 6);

//setting env list
clo110545[1] = acc;
clo110545[2] = proc;
clo110545[3] = lst;
clo110545[4] = foldr;
clo110545[5] = kont99611;
clo110545[6] = cdr;
void* f9961499772 = encode_clo(clo110545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9961499772;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99950 = encode_clo(alloc_clo(lam99950_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99952 = arg_buffer[1];
//reading env and args
void* kont99611 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo110547 = alloc_clo(lam99950_fptr, 7);

//setting env list
clo110547[1] = acc;
clo110547[2] = proc;
clo110547[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo110547[4] = foldr;
clo110547[5] = car;
clo110547[6] = kont99611;
clo110547[7] = cdr;
void* f9961599770 = encode_clo(clo110547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9961599770;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam99953_fptr() // lam99953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99954 = arg_buffer[1];
//reading env and args
void* a9950799785 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99616 = (decode_clo(env99954))[3];
//not do dummy comment
void* a9950599781 = (decode_clo(env99954))[2];
//not do dummy comment
void* cons = (decode_clo(env99954))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont99616;
arg_buffer[3] = a9950599781;
arg_buffer[4] = a9950799785;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99953 = encode_clo(alloc_clo(lam99953_fptr, 0));

void* lam99955_fptr() // lam99955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99956 = arg_buffer[1];
//reading env and args
void* a9950699783 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99616 = (decode_clo(env99956))[5];
//not do dummy comment
void* append = (decode_clo(env99956))[4];
//not do dummy comment
void* cons = (decode_clo(env99956))[3];
//not do dummy comment
void* a9950599781 = (decode_clo(env99956))[2];
//not do dummy comment
void* lst2 = (decode_clo(env99956))[1];

//creating new closure instance
void** clo110549 = alloc_clo(lam99953_fptr, 3);

//setting env list
clo110549[1] = cons;
clo110549[2] = a9950599781;
clo110549[3] = kont99616;
void* f9961799784 = encode_clo(clo110549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f9961799784;
arg_buffer[3] = a9950699783;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99955 = encode_clo(alloc_clo(lam99955_fptr, 0));

void* lam99957_fptr() // lam99957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99958 = arg_buffer[1];
//reading env and args
void* a9950599781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99958))[6];
//not do dummy comment
void* kont99616 = (decode_clo(env99958))[5];
//not do dummy comment
void* append = (decode_clo(env99958))[4];
//not do dummy comment
void* lst2 = (decode_clo(env99958))[3];
//not do dummy comment
void* lst1 = (decode_clo(env99958))[2];
//not do dummy comment
void* cons = (decode_clo(env99958))[1];

//creating new closure instance
void** clo110551 = alloc_clo(lam99955_fptr, 5);

//setting env list
clo110551[1] = lst2;
clo110551[2] = a9950599781;
clo110551[3] = cons;
clo110551[4] = append;
clo110551[5] = kont99616;
void* f9961899782 = encode_clo(clo110551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9961899782;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99957 = encode_clo(alloc_clo(lam99957_fptr, 0));

void* lam99959_fptr() // lam99959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99960 = arg_buffer[1];
//reading env and args
void* a9950499779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env99960))[7];
//not do dummy comment
void* kont99616 = (decode_clo(env99960))[6];
//not do dummy comment
void* append = (decode_clo(env99960))[5];
//not do dummy comment
void* lst2 = (decode_clo(env99960))[4];
//not do dummy comment
void* cons = (decode_clo(env99960))[3];
//not do dummy comment
void* lst1 = (decode_clo(env99960))[2];
//not do dummy comment
void* car = (decode_clo(env99960))[1];

//if-clause
bool if_guard110552 = is_true(a9950499779);
if(if_guard110552)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99616);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99616))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110554 = alloc_clo(lam99957_fptr, 6);

//setting env list
clo110554[1] = cons;
clo110554[2] = lst1;
clo110554[3] = lst2;
clo110554[4] = append;
clo110554[5] = kont99616;
clo110554[6] = cdr;
void* f9961999780 = encode_clo(clo110554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9961999780;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99959 = encode_clo(alloc_clo(lam99959_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99961 = arg_buffer[1];
//reading env and args
void* kont99616 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo110556 = alloc_clo(lam99959_fptr, 7);

//setting env list
clo110556[1] = car;
clo110556[2] = lst1;
clo110556[3] = cons;
clo110556[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo110556[5] = append;
clo110556[6] = kont99616;
clo110556[7] = cdr;
void* f9962099778 = encode_clo(clo110556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9962099778;
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
void* _99962 = arg_buffer[1];
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

void* kont9962199786 = prim_car(lst);
void* lst99787 = prim_cdr(lst);
void* x9950899788 = apply_prim_hash(lst99787);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9962199786);
arg_buffer[2] = x9950899788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9962199786))[0]);
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
void* _99963 = arg_buffer[1];
//reading env and args
void* kont99623 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9950999789 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99623);
arg_buffer[2] = x9950999789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99623))[0]);
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
void* _99964 = arg_buffer[1];
//reading env and args
void* kont99624 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x9951099790 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99624);
arg_buffer[2] = x9951099790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99624))[0]);
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
void* _99965 = arg_buffer[1];
//reading env and args
void* kont99625 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9951199791 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99625);
arg_buffer[2] = x9951199791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99625))[0]);
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
void* _99966 = arg_buffer[1];
//reading env and args
void* kont99626 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x9951299792 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99626);
arg_buffer[2] = x9951299792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99626))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam99968_fptr() // lam99968 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99969 = arg_buffer[1];
//reading env and args
void* a9952199806 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* power = (decode_clo(env99969))[3];
//not do dummy comment
void* a9951999803 = (decode_clo(env99969))[2];
//not do dummy comment
void* kont99627 = (decode_clo(env99969))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(power);
arg_buffer[2] = kont99627;
arg_buffer[3] = a9951999803;
arg_buffer[4] = a9952199806;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(power))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99968 = encode_clo(alloc_clo(lam99968_fptr, 0));

void* lam99971_fptr() // lam99971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99972 = arg_buffer[1];
//reading env and args
void* a9951999803 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99627 = (decode_clo(env99972))[4];
//not do dummy comment
void* power = (decode_clo(env99972))[3];
//not do dummy comment
void* _u47 = (decode_clo(env99972))[2];
//not do dummy comment
void* n = (decode_clo(env99972))[1];
mpz_t* mpzvar110557 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110557, "2", 10);
void* a9952099804 = encode_mpz(mpzvar110557);

//creating new closure instance
void** clo110559 = alloc_clo(lam99968_fptr, 3);

//setting env list
clo110559[1] = kont99627;
clo110559[2] = a9951999803;
clo110559[3] = power;
void* f9962899805 = encode_clo(clo110559);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = f9962899805;
arg_buffer[3] = n;
arg_buffer[4] = a9952099804;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99971 = encode_clo(alloc_clo(lam99971_fptr, 0));

void* lam99973_fptr() // lam99973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99974 = arg_buffer[1];
//reading env and args
void* a9952799816 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99627 = (decode_clo(env99974))[3];
//not do dummy comment
void* _u42 = (decode_clo(env99974))[2];
//not do dummy comment
void* x = (decode_clo(env99974))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont99627;
arg_buffer[3] = x;
arg_buffer[4] = a9952799816;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99973 = encode_clo(alloc_clo(lam99973_fptr, 0));

void* lam99975_fptr() // lam99975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99976 = arg_buffer[1];
//reading env and args
void* a9952699814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99627 = (decode_clo(env99976))[5];
//not do dummy comment
void* power = (decode_clo(env99976))[4];
//not do dummy comment
void* a9952299808 = (decode_clo(env99976))[3];
//not do dummy comment
void* _u42 = (decode_clo(env99976))[2];
//not do dummy comment
void* x = (decode_clo(env99976))[1];

//creating new closure instance
void** clo110561 = alloc_clo(lam99973_fptr, 3);

//setting env list
clo110561[1] = x;
clo110561[2] = _u42;
clo110561[3] = kont99627;
void* f9963099815 = encode_clo(clo110561);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(power);
arg_buffer[2] = f9963099815;
arg_buffer[3] = a9952299808;
arg_buffer[4] = a9952699814;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(power))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99975 = encode_clo(alloc_clo(lam99975_fptr, 0));

void* lam99978_fptr() // lam99978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99979 = arg_buffer[1];
//reading env and args
void* a9952499811 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99627 = (decode_clo(env99979))[6];
//not do dummy comment
void* power = (decode_clo(env99979))[5];
//not do dummy comment
void* a9952299808 = (decode_clo(env99979))[4];
//not do dummy comment
void* _u42 = (decode_clo(env99979))[3];
//not do dummy comment
void* x = (decode_clo(env99979))[2];
//not do dummy comment
void* _u47 = (decode_clo(env99979))[1];
mpz_t* mpzvar110562 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110562, "2", 10);
void* a9952599812 = encode_mpz(mpzvar110562);

//creating new closure instance
void** clo110564 = alloc_clo(lam99975_fptr, 5);

//setting env list
clo110564[1] = x;
clo110564[2] = _u42;
clo110564[3] = a9952299808;
clo110564[4] = power;
clo110564[5] = kont99627;
void* f9963199813 = encode_clo(clo110564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = f9963199813;
arg_buffer[3] = a9952499811;
arg_buffer[4] = a9952599812;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99978 = encode_clo(alloc_clo(lam99978_fptr, 0));

void* lam99981_fptr() // lam99981 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99982 = arg_buffer[1];
//reading env and args
void* a9952299808 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99627 = (decode_clo(env99982))[7];
//not do dummy comment
void* power = (decode_clo(env99982))[6];
//not do dummy comment
void* _u42 = (decode_clo(env99982))[5];
//not do dummy comment
void* x = (decode_clo(env99982))[4];
//not do dummy comment
void* _u45 = (decode_clo(env99982))[3];
//not do dummy comment
void* _u47 = (decode_clo(env99982))[2];
//not do dummy comment
void* n = (decode_clo(env99982))[1];
mpz_t* mpzvar110565 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110565, "1", 10);
void* a9952399809 = encode_mpz(mpzvar110565);

//creating new closure instance
void** clo110567 = alloc_clo(lam99978_fptr, 6);

//setting env list
clo110567[1] = _u47;
clo110567[2] = x;
clo110567[3] = _u42;
clo110567[4] = a9952299808;
clo110567[5] = power;
clo110567[6] = kont99627;
void* f9963299810 = encode_clo(clo110567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9963299810;
arg_buffer[3] = n;
arg_buffer[4] = a9952399809;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam99981 = encode_clo(alloc_clo(lam99981_fptr, 0));

void* lam99983_fptr() // lam99983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99984 = arg_buffer[1];
//reading env and args
void* a9951899801 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont99627 = (decode_clo(env99984))[7];
//not do dummy comment
void* power = (decode_clo(env99984))[6];
//not do dummy comment
void* _u42 = (decode_clo(env99984))[5];
//not do dummy comment
void* x = (decode_clo(env99984))[4];
//not do dummy comment
void* _u45 = (decode_clo(env99984))[3];
//not do dummy comment
void* _u47 = (decode_clo(env99984))[2];
//not do dummy comment
void* n = (decode_clo(env99984))[1];

//if-clause
bool if_guard110568 = is_true(a9951899801);
if(if_guard110568)
{

//creating new closure instance
void** clo110570 = alloc_clo(lam99971_fptr, 4);

//setting env list
clo110570[1] = n;
clo110570[2] = _u47;
clo110570[3] = power;
clo110570[4] = kont99627;
void* f9962999802 = encode_clo(clo110570);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = f9962999802;
arg_buffer[3] = x;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110572 = alloc_clo(lam99981_fptr, 7);

//setting env list
clo110572[1] = n;
clo110572[2] = _u47;
clo110572[3] = _u45;
clo110572[4] = x;
clo110572[5] = _u42;
clo110572[6] = power;
clo110572[7] = kont99627;
void* f9963399807 = encode_clo(clo110572);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = f9963399807;
arg_buffer[3] = x;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99983 = encode_clo(alloc_clo(lam99983_fptr, 0));

void* lam99985_fptr() // lam99985 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99986 = arg_buffer[1];
//reading env and args
void* a9951799799 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* power = (decode_clo(env99986))[8];
//not do dummy comment
void* _u42 = (decode_clo(env99986))[7];
//not do dummy comment
void* x = (decode_clo(env99986))[6];
//not do dummy comment
void* _u45 = (decode_clo(env99986))[5];
//not do dummy comment
void* even_u63 = (decode_clo(env99986))[4];
//not do dummy comment
void* kont99627 = (decode_clo(env99986))[3];
//not do dummy comment
void* _u47 = (decode_clo(env99986))[2];
//not do dummy comment
void* n = (decode_clo(env99986))[1];

//if-clause
bool if_guard110573 = is_true(a9951799799);
if(if_guard110573)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99627);
arg_buffer[2] = x;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99627))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo110575 = alloc_clo(lam99983_fptr, 7);

//setting env list
clo110575[1] = n;
clo110575[2] = _u47;
clo110575[3] = _u45;
clo110575[4] = x;
clo110575[5] = _u42;
clo110575[6] = power;
clo110575[7] = kont99627;
void* f9963499800 = encode_clo(clo110575);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f9963499800;
arg_buffer[3] = n;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99985 = encode_clo(alloc_clo(lam99985_fptr, 0));

void* lam99988_fptr() // lam99988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env99989 = arg_buffer[1];
//reading env and args
void* a9951499795 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* power = (decode_clo(env99989))[9];
//not do dummy comment
void* _u42 = (decode_clo(env99989))[8];
//not do dummy comment
void* x = (decode_clo(env99989))[7];
//not do dummy comment
void* even_u63 = (decode_clo(env99989))[6];
//not do dummy comment
void* kont99627 = (decode_clo(env99989))[5];
//not do dummy comment
void* _u47 = (decode_clo(env99989))[4];
//not do dummy comment
void* n = (decode_clo(env99989))[3];
//not do dummy comment
void* _u61 = (decode_clo(env99989))[2];
//not do dummy comment
void* _u45 = (decode_clo(env99989))[1];

//if-clause
bool if_guard110576 = is_true(a9951499795);
if(if_guard110576)
{
mpz_t* mpzvar110577 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110577, "1", 10);
void* x9951599796 = encode_mpz(mpzvar110577);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont99627);
arg_buffer[2] = x9951599796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont99627))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar110578 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110578, "1", 10);
void* a9951699797 = encode_mpz(mpzvar110578);

//creating new closure instance
void** clo110580 = alloc_clo(lam99985_fptr, 8);

//setting env list
clo110580[1] = n;
clo110580[2] = _u47;
clo110580[3] = kont99627;
clo110580[4] = even_u63;
clo110580[5] = _u45;
clo110580[6] = x;
clo110580[7] = _u42;
clo110580[8] = power;
void* f9963599798 = encode_clo(clo110580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9963599798;
arg_buffer[3] = n;
arg_buffer[4] = a9951699797;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam99988 = encode_clo(alloc_clo(lam99988_fptr, 0));

void* power_fptr() // power 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99991 = arg_buffer[1];
//reading env and args
void* kont99627 = arg_buffer[2];
void* x = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar110581 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110581, "0", 10);
void* a9951399793 = encode_mpz(mpzvar110581);

//creating new closure instance
void** clo110583 = alloc_clo(lam99988_fptr, 9);

//setting env list
clo110583[1] = _u45;
clo110583[2] = _u61;
clo110583[3] = n;
clo110583[4] = _u47;
clo110583[5] = kont99627;
clo110583[6] = even_u63;
clo110583[7] = x;
clo110583[8] = _u42;
void* power = encode_clo(alloc_clo(power_fptr, 0));

clo110583[9] = power;
void* f9963699794 = encode_clo(clo110583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9963699794;
arg_buffer[3] = n;
arg_buffer[4] = a9951399793;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* power = encode_clo(alloc_clo(power_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _99994 = arg_buffer[1];
//reading env and args
void* kont99637 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar110584 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110584, "2", 10);
void* a9952899817 = encode_mpz(mpzvar110584);
mpz_t* mpzvar110585 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar110585, "10", 10);
void* a9952999818 = encode_mpz(mpzvar110585);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(power);
arg_buffer[2] = kont99637;
arg_buffer[3] = a9952899817;
arg_buffer[4] = a9952999818;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(power))[0]);
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

