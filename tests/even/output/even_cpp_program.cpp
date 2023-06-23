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
void* _30739 = arg_buffer[1];
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

void* kont3048130581 = prim_car(lst);
void* lst30582 = prim_cdr(lst);
void* x3039630583 = apply_prim__u43(lst30582);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3048130581);
arg_buffer[2] = x3039630583;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3048130581))[0]);
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
void* _30740 = arg_buffer[1];
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

void* kont3048330584 = prim_car(lst);
void* lst30585 = prim_cdr(lst);
void* x3039730586 = apply_prim__u45(lst30585);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3048330584);
arg_buffer[2] = x3039730586;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3048330584))[0]);
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
void* _30741 = arg_buffer[1];
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

void* kont3048530587 = prim_car(lst);
void* lst30588 = prim_cdr(lst);
void* x3039830589 = apply_prim__u42(lst30588);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3048530587);
arg_buffer[2] = x3039830589;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3048530587))[0]);
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
void* _30742 = arg_buffer[1];
//reading env and args
void* kont30487 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3039930590 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30487);
arg_buffer[2] = x3039930590;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30487))[0]);
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
void* _30743 = arg_buffer[1];
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

void* kont3048830591 = prim_car(lst);
void* lst30592 = prim_cdr(lst);
void* x3040030593 = apply_prim__u47(lst30592);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3048830591);
arg_buffer[2] = x3040030593;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3048830591))[0]);
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
void* _30744 = arg_buffer[1];
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

void* kont3049030594 = prim_car(lst);
void* lst30595 = prim_cdr(lst);
void* x3040130596 = apply_prim__u61(lst30595);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3049030594);
arg_buffer[2] = x3040130596;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3049030594))[0]);
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
void* _30745 = arg_buffer[1];
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

void* kont3049230597 = prim_car(lst);
void* lst30598 = prim_cdr(lst);
void* x3040230599 = apply_prim__u62(lst30598);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3049230597);
arg_buffer[2] = x3040230599;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3049230597))[0]);
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
void* _30746 = arg_buffer[1];
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

void* kont3049430600 = prim_car(lst);
void* lst30601 = prim_cdr(lst);
void* x3040330602 = apply_prim__u60(lst30601);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3049430600);
arg_buffer[2] = x3040330602;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3049430600))[0]);
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
void* _30747 = arg_buffer[1];
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

void* kont3049630603 = prim_car(lst);
void* lst30604 = prim_cdr(lst);
void* x3040430605 = apply_prim__u60_u61(lst30604);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3049630603);
arg_buffer[2] = x3040430605;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3049630603))[0]);
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
void* _30748 = arg_buffer[1];
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

void* kont3049830606 = prim_car(lst);
void* lst30607 = prim_cdr(lst);
void* x3040530608 = apply_prim__u62_u61(lst30607);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3049830606);
arg_buffer[2] = x3040530608;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3049830606))[0]);
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
void* _30749 = arg_buffer[1];
//reading env and args
void* kont30500 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3040630609 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30500);
arg_buffer[2] = x3040630609;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30500))[0]);
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
void* _30750 = arg_buffer[1];
//reading env and args
void* kont30501 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3040730610 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30501);
arg_buffer[2] = x3040730610;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30501))[0]);
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
void* _30751 = arg_buffer[1];
//reading env and args
void* kont30502 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3040830611 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30502);
arg_buffer[2] = x3040830611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30502))[0]);
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
void* _30752 = arg_buffer[1];
//reading env and args
void* kont30503 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3040930612 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30503);
arg_buffer[2] = x3040930612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30503))[0]);
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
void* _30753 = arg_buffer[1];
//reading env and args
void* kont30504 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3041030613 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30504);
arg_buffer[2] = x3041030613;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30504))[0]);
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
void* _30754 = arg_buffer[1];
//reading env and args
void* kont30505 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3041130614 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30505);
arg_buffer[2] = x3041130614;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30505))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam30755_fptr() // lam30755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30756 = arg_buffer[1];
//reading env and args
void* a3041430618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30506 = (decode_clo(env30756))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env30756))[2];
//not do dummy comment
void* a3041230615 = (decode_clo(env30756))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont30506;
arg_buffer[3] = a3041230615;
arg_buffer[4] = a3041430618;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30755 = encode_clo(alloc_clo(lam30755_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30759 = arg_buffer[1];
//reading env and args
void* kont30506 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar31452 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31452, "0", 10);
void* a3041230615 = encode_mpz(mpzvar31452);
mpz_t* mpzvar31453 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31453, "2", 10);
void* a3041330616 = encode_mpz(mpzvar31453);

//creating new closure instance
void** clo31455 = alloc_clo(lam30755_fptr, 3);

//setting env list
clo31455[1] = a3041230615;
clo31455[2] = equal_u63;
clo31455[3] = kont30506;
void* f3050730617 = encode_clo(clo31455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3050730617;
arg_buffer[3] = x;
arg_buffer[4] = a3041330616;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam30760_fptr() // lam30760 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30761 = arg_buffer[1];
//reading env and args
void* a3041730622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3041530619 = (decode_clo(env30761))[3];
//not do dummy comment
void* kont30508 = (decode_clo(env30761))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env30761))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont30508;
arg_buffer[3] = a3041530619;
arg_buffer[4] = a3041730622;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30760 = encode_clo(alloc_clo(lam30760_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30764 = arg_buffer[1];
//reading env and args
void* kont30508 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar31456 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31456, "1", 10);
void* a3041530619 = encode_mpz(mpzvar31456);
mpz_t* mpzvar31457 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31457, "2", 10);
void* a3041630620 = encode_mpz(mpzvar31457);

//creating new closure instance
void** clo31459 = alloc_clo(lam30760_fptr, 3);

//setting env list
clo31459[1] = equal_u63;
clo31459[2] = kont30508;
clo31459[3] = a3041530619;
void* f3050930621 = encode_clo(clo31459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3050930621;
arg_buffer[3] = x;
arg_buffer[4] = a3041630620;
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
void* _30765 = arg_buffer[1];
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

void* kont3051030623 = prim_car(x);
void* x30624 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3051030623);
arg_buffer[2] = x30624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3051030623))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam30768_fptr() // lam30768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30769 = arg_buffer[1];
//reading env and args
void* a3042330634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30512 = (decode_clo(env30769))[3];
//not do dummy comment
void* x = (decode_clo(env30769))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30769))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont30512;
arg_buffer[3] = x;
arg_buffer[4] = a3042330634;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30768 = encode_clo(alloc_clo(lam30768_fptr, 0));

void* lam30770_fptr() // lam30770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30771 = arg_buffer[1];
//reading env and args
void* a3042130631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30771))[5];
//not do dummy comment
void* lst = (decode_clo(env30771))[4];
//not do dummy comment
void* kont30512 = (decode_clo(env30771))[3];
//not do dummy comment
void* x = (decode_clo(env30771))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30771))[1];

//if-clause
bool if_guard31460 = is_true(a3042130631);
if(if_guard31460)
{
void* x3042230632 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30512);
arg_buffer[2] = x3042230632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30512))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31462 = alloc_clo(lam30768_fptr, 3);

//setting env list
clo31462[1] = member_u63;
clo31462[2] = x;
clo31462[3] = kont30512;
void* f3051330633 = encode_clo(clo31462);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3051330633;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30770 = encode_clo(alloc_clo(lam30770_fptr, 0));

void* lam30772_fptr() // lam30772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30773 = arg_buffer[1];
//reading env and args
void* a3042030629 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30773))[6];
//not do dummy comment
void* lst = (decode_clo(env30773))[5];
//not do dummy comment
void* kont30512 = (decode_clo(env30773))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env30773))[3];
//not do dummy comment
void* x = (decode_clo(env30773))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30773))[1];

//creating new closure instance
void** clo31464 = alloc_clo(lam30770_fptr, 5);

//setting env list
clo31464[1] = member_u63;
clo31464[2] = x;
clo31464[3] = kont30512;
clo31464[4] = lst;
clo31464[5] = cdr;
void* f3051430630 = encode_clo(clo31464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3051430630;
arg_buffer[3] = a3042030629;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30772 = encode_clo(alloc_clo(lam30772_fptr, 0));

void* lam30774_fptr() // lam30774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30775 = arg_buffer[1];
//reading env and args
void* a3041830626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30775))[7];
//not do dummy comment
void* lst = (decode_clo(env30775))[6];
//not do dummy comment
void* kont30512 = (decode_clo(env30775))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env30775))[4];
//not do dummy comment
void* x = (decode_clo(env30775))[3];
//not do dummy comment
void* car = (decode_clo(env30775))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30775))[1];

//if-clause
bool if_guard31465 = is_true(a3041830626);
if(if_guard31465)
{
void* x3041930627 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30512);
arg_buffer[2] = x3041930627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30512))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31467 = alloc_clo(lam30772_fptr, 6);

//setting env list
clo31467[1] = member_u63;
clo31467[2] = x;
clo31467[3] = equal_u63;
clo31467[4] = kont30512;
clo31467[5] = lst;
clo31467[6] = cdr;
void* f3051530628 = encode_clo(clo31467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3051530628;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30774 = encode_clo(alloc_clo(lam30774_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30776 = arg_buffer[1];
//reading env and args
void* kont30512 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31469 = alloc_clo(lam30774_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo31469[1] = member_u63;
clo31469[2] = car;
clo31469[3] = x;
clo31469[4] = equal_u63;
clo31469[5] = kont30512;
clo31469[6] = lst;
clo31469[7] = cdr;
void* f3051630625 = encode_clo(clo31469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3051630625;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam30777_fptr() // lam30777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30778 = arg_buffer[1];
//reading env and args
void* a3042730642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3042630640 = (decode_clo(env30778))[4];
//not do dummy comment
void* fun = (decode_clo(env30778))[3];
//not do dummy comment
void* kont30517 = (decode_clo(env30778))[2];
//not do dummy comment
void* foldl = (decode_clo(env30778))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont30517;
arg_buffer[3] = fun;
arg_buffer[4] = a3042630640;
arg_buffer[5] = a3042730642;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30777 = encode_clo(alloc_clo(lam30777_fptr, 0));

void* lam30779_fptr() // lam30779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30780 = arg_buffer[1];
//reading env and args
void* a3042630640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30780))[5];
//not do dummy comment
void* lst = (decode_clo(env30780))[4];
//not do dummy comment
void* fun = (decode_clo(env30780))[3];
//not do dummy comment
void* kont30517 = (decode_clo(env30780))[2];
//not do dummy comment
void* foldl = (decode_clo(env30780))[1];

//creating new closure instance
void** clo31471 = alloc_clo(lam30777_fptr, 4);

//setting env list
clo31471[1] = foldl;
clo31471[2] = kont30517;
clo31471[3] = fun;
clo31471[4] = a3042630640;
void* f3051830641 = encode_clo(clo31471);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3051830641;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30779 = encode_clo(alloc_clo(lam30779_fptr, 0));

void* lam30781_fptr() // lam30781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30782 = arg_buffer[1];
//reading env and args
void* a3042530638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30782))[6];
//not do dummy comment
void* lst = (decode_clo(env30782))[5];
//not do dummy comment
void* fun = (decode_clo(env30782))[4];
//not do dummy comment
void* acc = (decode_clo(env30782))[3];
//not do dummy comment
void* kont30517 = (decode_clo(env30782))[2];
//not do dummy comment
void* foldl = (decode_clo(env30782))[1];

//creating new closure instance
void** clo31473 = alloc_clo(lam30779_fptr, 5);

//setting env list
clo31473[1] = foldl;
clo31473[2] = kont30517;
clo31473[3] = fun;
clo31473[4] = lst;
clo31473[5] = cdr;
void* f3051930639 = encode_clo(clo31473);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3051930639;
arg_buffer[3] = a3042530638;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30781 = encode_clo(alloc_clo(lam30781_fptr, 0));

void* lam30783_fptr() // lam30783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30784 = arg_buffer[1];
//reading env and args
void* a3042430636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30784))[7];
//not do dummy comment
void* lst = (decode_clo(env30784))[6];
//not do dummy comment
void* fun = (decode_clo(env30784))[5];
//not do dummy comment
void* acc = (decode_clo(env30784))[4];
//not do dummy comment
void* kont30517 = (decode_clo(env30784))[3];
//not do dummy comment
void* car = (decode_clo(env30784))[2];
//not do dummy comment
void* foldl = (decode_clo(env30784))[1];

//if-clause
bool if_guard31474 = is_true(a3042430636);
if(if_guard31474)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30517);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30517))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31476 = alloc_clo(lam30781_fptr, 6);

//setting env list
clo31476[1] = foldl;
clo31476[2] = kont30517;
clo31476[3] = acc;
clo31476[4] = fun;
clo31476[5] = lst;
clo31476[6] = cdr;
void* f3052030637 = encode_clo(clo31476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3052030637;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30783 = encode_clo(alloc_clo(lam30783_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30785 = arg_buffer[1];
//reading env and args
void* kont30517 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo31478 = alloc_clo(lam30783_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo31478[1] = foldl;
clo31478[2] = car;
clo31478[3] = kont30517;
clo31478[4] = acc;
clo31478[5] = fun;
clo31478[6] = lst;
clo31478[7] = cdr;
void* f3052130635 = encode_clo(clo31478);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3052130635;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam30786_fptr() // lam30786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30787 = arg_buffer[1];
//reading env and args
void* a3043130650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30522 = (decode_clo(env30787))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30787))[2];
//not do dummy comment
void* a3042930646 = (decode_clo(env30787))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont30522;
arg_buffer[3] = a3042930646;
arg_buffer[4] = a3043130650;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30786 = encode_clo(alloc_clo(lam30786_fptr, 0));

void* lam30788_fptr() // lam30788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30789 = arg_buffer[1];
//reading env and args
void* a3043030648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30522 = (decode_clo(env30789))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30789))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30789))[3];
//not do dummy comment
void* a3042930646 = (decode_clo(env30789))[2];
//not do dummy comment
void* cons = (decode_clo(env30789))[1];

//creating new closure instance
void** clo31480 = alloc_clo(lam30786_fptr, 3);

//setting env list
clo31480[1] = a3042930646;
clo31480[2] = reverse_u45helper;
clo31480[3] = kont30522;
void* f3052330649 = encode_clo(clo31480);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3052330649;
arg_buffer[3] = a3043030648;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30788 = encode_clo(alloc_clo(lam30788_fptr, 0));

void* lam30790_fptr() // lam30790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30791 = arg_buffer[1];
//reading env and args
void* a3042930646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30522 = (decode_clo(env30791))[6];
//not do dummy comment
void* lst = (decode_clo(env30791))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30791))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30791))[3];
//not do dummy comment
void* car = (decode_clo(env30791))[2];
//not do dummy comment
void* cons = (decode_clo(env30791))[1];

//creating new closure instance
void** clo31482 = alloc_clo(lam30788_fptr, 5);

//setting env list
clo31482[1] = cons;
clo31482[2] = a3042930646;
clo31482[3] = lst2;
clo31482[4] = reverse_u45helper;
clo31482[5] = kont30522;
void* f3052430647 = encode_clo(clo31482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3052430647;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30790 = encode_clo(alloc_clo(lam30790_fptr, 0));

void* lam30792_fptr() // lam30792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30793 = arg_buffer[1];
//reading env and args
void* a3042830644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30793))[7];
//not do dummy comment
void* kont30522 = (decode_clo(env30793))[6];
//not do dummy comment
void* lst = (decode_clo(env30793))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30793))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30793))[3];
//not do dummy comment
void* car = (decode_clo(env30793))[2];
//not do dummy comment
void* cons = (decode_clo(env30793))[1];

//if-clause
bool if_guard31483 = is_true(a3042830644);
if(if_guard31483)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30522);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30522))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31485 = alloc_clo(lam30790_fptr, 6);

//setting env list
clo31485[1] = cons;
clo31485[2] = car;
clo31485[3] = lst2;
clo31485[4] = reverse_u45helper;
clo31485[5] = lst;
clo31485[6] = kont30522;
void* f3052530645 = encode_clo(clo31485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3052530645;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30792 = encode_clo(alloc_clo(lam30792_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30794 = arg_buffer[1];
//reading env and args
void* kont30522 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31487 = alloc_clo(lam30792_fptr, 7);

//setting env list
clo31487[1] = cons;
clo31487[2] = car;
clo31487[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo31487[4] = reverse_u45helper;
clo31487[5] = lst;
clo31487[6] = kont30522;
clo31487[7] = cdr;
void* f3052630643 = encode_clo(clo31487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3052630643;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam30795_fptr() // lam30795 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30796 = arg_buffer[1];
//reading env and args
void* a3043230652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30796))[3];
//not do dummy comment
void* kont30527 = (decode_clo(env30796))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30796))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont30527;
arg_buffer[3] = lst;
arg_buffer[4] = a3043230652;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30795 = encode_clo(alloc_clo(lam30795_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30797 = arg_buffer[1];
//reading env and args
void* kont30527 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo31489 = alloc_clo(lam30795_fptr, 3);

//setting env list
clo31489[1] = reverse_u45helper;
clo31489[2] = kont30527;
clo31489[3] = lst;
void* f3052830651 = encode_clo(clo31489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3052830651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam30798_fptr() // lam30798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30799 = arg_buffer[1];
//reading env and args
void* x3043530657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30529 = (decode_clo(env30799))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30529);
arg_buffer[2] = x3043530657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30529))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30798 = encode_clo(alloc_clo(lam30798_fptr, 0));

void* lam30800_fptr() // lam30800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30801 = arg_buffer[1];
//reading env and args
void* a3044030666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30529 = (decode_clo(env30801))[4];
//not do dummy comment
void* a3043630659 = (decode_clo(env30801))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30801))[2];
//not do dummy comment
void* a3043830662 = (decode_clo(env30801))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont30529;
arg_buffer[3] = a3043630659;
arg_buffer[4] = a3043830662;
arg_buffer[5] = a3044030666;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30800 = encode_clo(alloc_clo(lam30800_fptr, 0));

void* lam30802_fptr() // lam30802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30803 = arg_buffer[1];
//reading env and args
void* a3043930664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30529 = (decode_clo(env30803))[6];
//not do dummy comment
void* a3043630659 = (decode_clo(env30803))[5];
//not do dummy comment
void* a3043830662 = (decode_clo(env30803))[4];
//not do dummy comment
void* cons = (decode_clo(env30803))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30803))[2];
//not do dummy comment
void* lst2 = (decode_clo(env30803))[1];

//creating new closure instance
void** clo31491 = alloc_clo(lam30800_fptr, 4);

//setting env list
clo31491[1] = a3043830662;
clo31491[2] = take_u45helper;
clo31491[3] = a3043630659;
clo31491[4] = kont30529;
void* f3053130665 = encode_clo(clo31491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3053130665;
arg_buffer[3] = a3043930664;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30802 = encode_clo(alloc_clo(lam30802_fptr, 0));

void* lam30804_fptr() // lam30804 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30805 = arg_buffer[1];
//reading env and args
void* a3043830662 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30805))[7];
//not do dummy comment
void* kont30529 = (decode_clo(env30805))[6];
//not do dummy comment
void* a3043630659 = (decode_clo(env30805))[5];
//not do dummy comment
void* car = (decode_clo(env30805))[4];
//not do dummy comment
void* cons = (decode_clo(env30805))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30805))[2];
//not do dummy comment
void* lst2 = (decode_clo(env30805))[1];

//creating new closure instance
void** clo31493 = alloc_clo(lam30802_fptr, 6);

//setting env list
clo31493[1] = lst2;
clo31493[2] = take_u45helper;
clo31493[3] = cons;
clo31493[4] = a3043830662;
clo31493[5] = a3043630659;
clo31493[6] = kont30529;
void* f3053230663 = encode_clo(clo31493);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3053230663;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30804 = encode_clo(alloc_clo(lam30804_fptr, 0));

void* lam30807_fptr() // lam30807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30808 = arg_buffer[1];
//reading env and args
void* a3043630659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30808))[8];
//not do dummy comment
void* kont30529 = (decode_clo(env30808))[7];
//not do dummy comment
void* cons = (decode_clo(env30808))[6];
//not do dummy comment
void* _u45 = (decode_clo(env30808))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30808))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30808))[3];
//not do dummy comment
void* n = (decode_clo(env30808))[2];
//not do dummy comment
void* car = (decode_clo(env30808))[1];
mpz_t* mpzvar31494 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31494, "1", 10);
void* a3043730660 = encode_mpz(mpzvar31494);

//creating new closure instance
void** clo31496 = alloc_clo(lam30804_fptr, 7);

//setting env list
clo31496[1] = lst2;
clo31496[2] = take_u45helper;
clo31496[3] = cons;
clo31496[4] = car;
clo31496[5] = a3043630659;
clo31496[6] = kont30529;
clo31496[7] = lst;
void* f3053330661 = encode_clo(clo31496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3053330661;
arg_buffer[3] = n;
arg_buffer[4] = a3043730660;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30807 = encode_clo(alloc_clo(lam30807_fptr, 0));

void* lam30809_fptr() // lam30809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30810 = arg_buffer[1];
//reading env and args
void* a3043430655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30810))[10];
//not do dummy comment
void* lst = (decode_clo(env30810))[9];
//not do dummy comment
void* reverse = (decode_clo(env30810))[8];
//not do dummy comment
void* kont30529 = (decode_clo(env30810))[7];
//not do dummy comment
void* cons = (decode_clo(env30810))[6];
//not do dummy comment
void* _u45 = (decode_clo(env30810))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30810))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30810))[3];
//not do dummy comment
void* n = (decode_clo(env30810))[2];
//not do dummy comment
void* car = (decode_clo(env30810))[1];

//if-clause
bool if_guard31497 = is_true(a3043430655);
if(if_guard31497)
{

//creating new closure instance
void** clo31499 = alloc_clo(lam30798_fptr, 1);

//setting env list
clo31499[1] = kont30529;
void* f3053030656 = encode_clo(clo31499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3053030656;
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
void** clo31501 = alloc_clo(lam30807_fptr, 8);

//setting env list
clo31501[1] = car;
clo31501[2] = n;
clo31501[3] = lst2;
clo31501[4] = take_u45helper;
clo31501[5] = _u45;
clo31501[6] = cons;
clo31501[7] = kont30529;
clo31501[8] = lst;
void* f3053430658 = encode_clo(clo31501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3053430658;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30809 = encode_clo(alloc_clo(lam30809_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30812 = arg_buffer[1];
//reading env and args
void* kont30529 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar31502 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31502, "0", 10);
void* a3043330653 = encode_mpz(mpzvar31502);

//creating new closure instance
void** clo31504 = alloc_clo(lam30809_fptr, 10);

//setting env list
clo31504[1] = car;
clo31504[2] = n;
clo31504[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo31504[4] = take_u45helper;
clo31504[5] = _u45;
clo31504[6] = cons;
clo31504[7] = kont30529;
clo31504[8] = reverse;
clo31504[9] = lst;
clo31504[10] = cdr;
void* f3053530654 = encode_clo(clo31504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3053530654;
arg_buffer[3] = n;
arg_buffer[4] = a3043330653;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam30813_fptr() // lam30813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30814 = arg_buffer[1];
//reading env and args
void* a3044130668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30814))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env30814))[3];
//not do dummy comment
void* n = (decode_clo(env30814))[2];
//not do dummy comment
void* kont30536 = (decode_clo(env30814))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont30536;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3044130668;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30813 = encode_clo(alloc_clo(lam30813_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30815 = arg_buffer[1];
//reading env and args
void* kont30536 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31506 = alloc_clo(lam30813_fptr, 4);

//setting env list
clo31506[1] = kont30536;
clo31506[2] = n;
clo31506[3] = take_u45helper;
clo31506[4] = lst;
void* f3053730667 = encode_clo(clo31506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3053730667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam30817_fptr() // lam30817 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30818 = arg_buffer[1];
//reading env and args
void* a3044630676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30538 = (decode_clo(env30818))[3];
//not do dummy comment
void* a3044430672 = (decode_clo(env30818))[2];
//not do dummy comment
void* _u43 = (decode_clo(env30818))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont30538;
arg_buffer[3] = a3044430672;
arg_buffer[4] = a3044630676;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30817 = encode_clo(alloc_clo(lam30817_fptr, 0));

void* lam30819_fptr() // lam30819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30820 = arg_buffer[1];
//reading env and args
void* a3044530674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30538 = (decode_clo(env30820))[4];
//not do dummy comment
void* length = (decode_clo(env30820))[3];
//not do dummy comment
void* a3044430672 = (decode_clo(env30820))[2];
//not do dummy comment
void* _u43 = (decode_clo(env30820))[1];

//creating new closure instance
void** clo31508 = alloc_clo(lam30817_fptr, 3);

//setting env list
clo31508[1] = _u43;
clo31508[2] = a3044430672;
clo31508[3] = kont30538;
void* f3053930675 = encode_clo(clo31508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3053930675;
arg_buffer[3] = a3044530674;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30819 = encode_clo(alloc_clo(lam30819_fptr, 0));

void* lam30822_fptr() // lam30822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30823 = arg_buffer[1];
//reading env and args
void* a3044230670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30823))[5];
//not do dummy comment
void* kont30538 = (decode_clo(env30823))[4];
//not do dummy comment
void* lst = (decode_clo(env30823))[3];
//not do dummy comment
void* length = (decode_clo(env30823))[2];
//not do dummy comment
void* _u43 = (decode_clo(env30823))[1];

//if-clause
bool if_guard31509 = is_true(a3044230670);
if(if_guard31509)
{
mpz_t* mpzvar31510 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31510, "0", 10);
void* x3044330671 = encode_mpz(mpzvar31510);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30538);
arg_buffer[2] = x3044330671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30538))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar31511 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31511, "1", 10);
void* a3044430672 = encode_mpz(mpzvar31511);

//creating new closure instance
void** clo31513 = alloc_clo(lam30819_fptr, 4);

//setting env list
clo31513[1] = _u43;
clo31513[2] = a3044430672;
clo31513[3] = length;
clo31513[4] = kont30538;
void* f3054030673 = encode_clo(clo31513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3054030673;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30822 = encode_clo(alloc_clo(lam30822_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30824 = arg_buffer[1];
//reading env and args
void* kont30538 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo31515 = alloc_clo(lam30822_fptr, 5);

//setting env list
clo31515[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo31515[2] = length;
clo31515[3] = lst;
clo31515[4] = kont30538;
clo31515[5] = cdr;
void* f3054130669 = encode_clo(clo31515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3054130669;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam30825_fptr() // lam30825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30826 = arg_buffer[1];
//reading env and args
void* x3044830680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30542 = (decode_clo(env30826))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30542);
arg_buffer[2] = x3044830680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30542))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30825 = encode_clo(alloc_clo(lam30825_fptr, 0));

void* lam30827_fptr() // lam30827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30828 = arg_buffer[1];
//reading env and args
void* a3045230688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3045030684 = (decode_clo(env30828))[3];
//not do dummy comment
void* kont30542 = (decode_clo(env30828))[2];
//not do dummy comment
void* cons = (decode_clo(env30828))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30542;
arg_buffer[3] = a3045030684;
arg_buffer[4] = a3045230688;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30827 = encode_clo(alloc_clo(lam30827_fptr, 0));

void* lam30829_fptr() // lam30829 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30830 = arg_buffer[1];
//reading env and args
void* a3045130686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3045030684 = (decode_clo(env30830))[5];
//not do dummy comment
void* proc = (decode_clo(env30830))[4];
//not do dummy comment
void* cons = (decode_clo(env30830))[3];
//not do dummy comment
void* map = (decode_clo(env30830))[2];
//not do dummy comment
void* kont30542 = (decode_clo(env30830))[1];

//creating new closure instance
void** clo31517 = alloc_clo(lam30827_fptr, 3);

//setting env list
clo31517[1] = cons;
clo31517[2] = kont30542;
clo31517[3] = a3045030684;
void* f3054430687 = encode_clo(clo31517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3054430687;
arg_buffer[3] = proc;
arg_buffer[4] = a3045130686;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30829 = encode_clo(alloc_clo(lam30829_fptr, 0));

void* lam30831_fptr() // lam30831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30832 = arg_buffer[1];
//reading env and args
void* a3045030684 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30832))[6];
//not do dummy comment
void* lst = (decode_clo(env30832))[5];
//not do dummy comment
void* proc = (decode_clo(env30832))[4];
//not do dummy comment
void* cons = (decode_clo(env30832))[3];
//not do dummy comment
void* map = (decode_clo(env30832))[2];
//not do dummy comment
void* kont30542 = (decode_clo(env30832))[1];

//creating new closure instance
void** clo31519 = alloc_clo(lam30829_fptr, 5);

//setting env list
clo31519[1] = kont30542;
clo31519[2] = map;
clo31519[3] = cons;
clo31519[4] = proc;
clo31519[5] = a3045030684;
void* f3054530685 = encode_clo(clo31519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3054530685;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30831 = encode_clo(alloc_clo(lam30831_fptr, 0));

void* lam30833_fptr() // lam30833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30834 = arg_buffer[1];
//reading env and args
void* a3044930682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30834))[6];
//not do dummy comment
void* lst = (decode_clo(env30834))[5];
//not do dummy comment
void* proc = (decode_clo(env30834))[4];
//not do dummy comment
void* cons = (decode_clo(env30834))[3];
//not do dummy comment
void* map = (decode_clo(env30834))[2];
//not do dummy comment
void* kont30542 = (decode_clo(env30834))[1];

//creating new closure instance
void** clo31521 = alloc_clo(lam30831_fptr, 6);

//setting env list
clo31521[1] = kont30542;
clo31521[2] = map;
clo31521[3] = cons;
clo31521[4] = proc;
clo31521[5] = lst;
clo31521[6] = cdr;
void* f3054630683 = encode_clo(clo31521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3054630683;
arg_buffer[3] = a3044930682;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30833 = encode_clo(alloc_clo(lam30833_fptr, 0));

void* lam30835_fptr() // lam30835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30836 = arg_buffer[1];
//reading env and args
void* a3044730678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30836))[8];
//not do dummy comment
void* proc = (decode_clo(env30836))[7];
//not do dummy comment
void* car = (decode_clo(env30836))[6];
//not do dummy comment
void* cons = (decode_clo(env30836))[5];
//not do dummy comment
void* list = (decode_clo(env30836))[4];
//not do dummy comment
void* cdr = (decode_clo(env30836))[3];
//not do dummy comment
void* map = (decode_clo(env30836))[2];
//not do dummy comment
void* kont30542 = (decode_clo(env30836))[1];

//if-clause
bool if_guard31522 = is_true(a3044730678);
if(if_guard31522)
{

//creating new closure instance
void** clo31524 = alloc_clo(lam30825_fptr, 1);

//setting env list
clo31524[1] = kont30542;
void* f3054330679 = encode_clo(clo31524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3054330679;
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
void** clo31526 = alloc_clo(lam30833_fptr, 6);

//setting env list
clo31526[1] = kont30542;
clo31526[2] = map;
clo31526[3] = cons;
clo31526[4] = proc;
clo31526[5] = lst;
clo31526[6] = cdr;
void* f3054730681 = encode_clo(clo31526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3054730681;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30835 = encode_clo(alloc_clo(lam30835_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30837 = arg_buffer[1];
//reading env and args
void* kont30542 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31528 = alloc_clo(lam30835_fptr, 8);

//setting env list
clo31528[1] = kont30542;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo31528[2] = map;
clo31528[3] = cdr;
clo31528[4] = list;
clo31528[5] = cons;
clo31528[6] = car;
clo31528[7] = proc;
clo31528[8] = lst;
void* f3054830677 = encode_clo(clo31528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3054830677;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam30838_fptr() // lam30838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30839 = arg_buffer[1];
//reading env and args
void* x3045430692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30549 = (decode_clo(env30839))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30549);
arg_buffer[2] = x3045430692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30549))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30838 = encode_clo(alloc_clo(lam30838_fptr, 0));

void* lam30840_fptr() // lam30840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30841 = arg_buffer[1];
//reading env and args
void* a3045930702 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3045730698 = (decode_clo(env30841))[3];
//not do dummy comment
void* kont30549 = (decode_clo(env30841))[2];
//not do dummy comment
void* cons = (decode_clo(env30841))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30549;
arg_buffer[3] = a3045730698;
arg_buffer[4] = a3045930702;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30840 = encode_clo(alloc_clo(lam30840_fptr, 0));

void* lam30842_fptr() // lam30842 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30843 = arg_buffer[1];
//reading env and args
void* a3045830700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3045730698 = (decode_clo(env30843))[5];
//not do dummy comment
void* op = (decode_clo(env30843))[4];
//not do dummy comment
void* kont30549 = (decode_clo(env30843))[3];
//not do dummy comment
void* filter = (decode_clo(env30843))[2];
//not do dummy comment
void* cons = (decode_clo(env30843))[1];

//creating new closure instance
void** clo31530 = alloc_clo(lam30840_fptr, 3);

//setting env list
clo31530[1] = cons;
clo31530[2] = kont30549;
clo31530[3] = a3045730698;
void* f3055130701 = encode_clo(clo31530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3055130701;
arg_buffer[3] = op;
arg_buffer[4] = a3045830700;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30842 = encode_clo(alloc_clo(lam30842_fptr, 0));

void* lam30844_fptr() // lam30844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30845 = arg_buffer[1];
//reading env and args
void* a3045730698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30845))[6];
//not do dummy comment
void* lst = (decode_clo(env30845))[5];
//not do dummy comment
void* op = (decode_clo(env30845))[4];
//not do dummy comment
void* kont30549 = (decode_clo(env30845))[3];
//not do dummy comment
void* filter = (decode_clo(env30845))[2];
//not do dummy comment
void* cons = (decode_clo(env30845))[1];

//creating new closure instance
void** clo31532 = alloc_clo(lam30842_fptr, 5);

//setting env list
clo31532[1] = cons;
clo31532[2] = filter;
clo31532[3] = kont30549;
clo31532[4] = op;
clo31532[5] = a3045730698;
void* f3055230699 = encode_clo(clo31532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3055230699;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30844 = encode_clo(alloc_clo(lam30844_fptr, 0));

void* lam30846_fptr() // lam30846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30847 = arg_buffer[1];
//reading env and args
void* a3046030704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env30847))[3];
//not do dummy comment
void* kont30549 = (decode_clo(env30847))[2];
//not do dummy comment
void* filter = (decode_clo(env30847))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont30549;
arg_buffer[3] = op;
arg_buffer[4] = a3046030704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30846 = encode_clo(alloc_clo(lam30846_fptr, 0));

void* lam30848_fptr() // lam30848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30849 = arg_buffer[1];
//reading env and args
void* a3045630696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30849))[7];
//not do dummy comment
void* lst = (decode_clo(env30849))[6];
//not do dummy comment
void* op = (decode_clo(env30849))[5];
//not do dummy comment
void* kont30549 = (decode_clo(env30849))[4];
//not do dummy comment
void* cons = (decode_clo(env30849))[3];
//not do dummy comment
void* filter = (decode_clo(env30849))[2];
//not do dummy comment
void* car = (decode_clo(env30849))[1];

//if-clause
bool if_guard31533 = is_true(a3045630696);
if(if_guard31533)
{

//creating new closure instance
void** clo31535 = alloc_clo(lam30844_fptr, 6);

//setting env list
clo31535[1] = cons;
clo31535[2] = filter;
clo31535[3] = kont30549;
clo31535[4] = op;
clo31535[5] = lst;
clo31535[6] = cdr;
void* f3055330697 = encode_clo(clo31535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3055330697;
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
void** clo31537 = alloc_clo(lam30846_fptr, 3);

//setting env list
clo31537[1] = filter;
clo31537[2] = kont30549;
clo31537[3] = op;
void* f3055430703 = encode_clo(clo31537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3055430703;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30848 = encode_clo(alloc_clo(lam30848_fptr, 0));

void* lam30850_fptr() // lam30850 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30851 = arg_buffer[1];
//reading env and args
void* a3045530694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30851))[7];
//not do dummy comment
void* lst = (decode_clo(env30851))[6];
//not do dummy comment
void* op = (decode_clo(env30851))[5];
//not do dummy comment
void* kont30549 = (decode_clo(env30851))[4];
//not do dummy comment
void* cons = (decode_clo(env30851))[3];
//not do dummy comment
void* filter = (decode_clo(env30851))[2];
//not do dummy comment
void* car = (decode_clo(env30851))[1];

//creating new closure instance
void** clo31539 = alloc_clo(lam30848_fptr, 7);

//setting env list
clo31539[1] = car;
clo31539[2] = filter;
clo31539[3] = cons;
clo31539[4] = kont30549;
clo31539[5] = op;
clo31539[6] = lst;
clo31539[7] = cdr;
void* f3055530695 = encode_clo(clo31539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3055530695;
arg_buffer[3] = a3045530694;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30850 = encode_clo(alloc_clo(lam30850_fptr, 0));

void* lam30852_fptr() // lam30852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30853 = arg_buffer[1];
//reading env and args
void* a3045330690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30853))[8];
//not do dummy comment
void* op = (decode_clo(env30853))[7];
//not do dummy comment
void* kont30549 = (decode_clo(env30853))[6];
//not do dummy comment
void* cons = (decode_clo(env30853))[5];
//not do dummy comment
void* list = (decode_clo(env30853))[4];
//not do dummy comment
void* cdr = (decode_clo(env30853))[3];
//not do dummy comment
void* filter = (decode_clo(env30853))[2];
//not do dummy comment
void* car = (decode_clo(env30853))[1];

//if-clause
bool if_guard31540 = is_true(a3045330690);
if(if_guard31540)
{

//creating new closure instance
void** clo31542 = alloc_clo(lam30838_fptr, 1);

//setting env list
clo31542[1] = kont30549;
void* f3055030691 = encode_clo(clo31542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3055030691;
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
void** clo31544 = alloc_clo(lam30850_fptr, 7);

//setting env list
clo31544[1] = car;
clo31544[2] = filter;
clo31544[3] = cons;
clo31544[4] = kont30549;
clo31544[5] = op;
clo31544[6] = lst;
clo31544[7] = cdr;
void* f3055630693 = encode_clo(clo31544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3055630693;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30852 = encode_clo(alloc_clo(lam30852_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30854 = arg_buffer[1];
//reading env and args
void* kont30549 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31546 = alloc_clo(lam30852_fptr, 8);

//setting env list
clo31546[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo31546[2] = filter;
clo31546[3] = cdr;
clo31546[4] = list;
clo31546[5] = cons;
clo31546[6] = kont30549;
clo31546[7] = op;
clo31546[8] = lst;
void* f3055730689 = encode_clo(clo31546);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3055730689;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam30855_fptr() // lam30855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30856 = arg_buffer[1];
//reading env and args
void* a3046530712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env30856))[3];
//not do dummy comment
void* kont30558 = (decode_clo(env30856))[2];
//not do dummy comment
void* a3046330709 = (decode_clo(env30856))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont30558;
arg_buffer[3] = a3046330709;
arg_buffer[4] = a3046530712;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30855 = encode_clo(alloc_clo(lam30855_fptr, 0));

void* lam30858_fptr() // lam30858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30859 = arg_buffer[1];
//reading env and args
void* a3046330709 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env30859))[4];
//not do dummy comment
void* kont30558 = (decode_clo(env30859))[3];
//not do dummy comment
void* n = (decode_clo(env30859))[2];
//not do dummy comment
void* _u45 = (decode_clo(env30859))[1];
mpz_t* mpzvar31547 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31547, "1", 10);
void* a3046430710 = encode_mpz(mpzvar31547);

//creating new closure instance
void** clo31549 = alloc_clo(lam30855_fptr, 3);

//setting env list
clo31549[1] = a3046330709;
clo31549[2] = kont30558;
clo31549[3] = drop;
void* f3055930711 = encode_clo(clo31549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3055930711;
arg_buffer[3] = n;
arg_buffer[4] = a3046430710;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30858 = encode_clo(alloc_clo(lam30858_fptr, 0));

void* lam30860_fptr() // lam30860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30861 = arg_buffer[1];
//reading env and args
void* a3046230707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30861))[6];
//not do dummy comment
void* kont30558 = (decode_clo(env30861))[5];
//not do dummy comment
void* n = (decode_clo(env30861))[4];
//not do dummy comment
void* _u45 = (decode_clo(env30861))[3];
//not do dummy comment
void* lst = (decode_clo(env30861))[2];
//not do dummy comment
void* drop = (decode_clo(env30861))[1];

//if-clause
bool if_guard31550 = is_true(a3046230707);
if(if_guard31550)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30558);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30558))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31552 = alloc_clo(lam30858_fptr, 4);

//setting env list
clo31552[1] = _u45;
clo31552[2] = n;
clo31552[3] = kont30558;
clo31552[4] = drop;
void* f3056030708 = encode_clo(clo31552);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3056030708;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30860 = encode_clo(alloc_clo(lam30860_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30863 = arg_buffer[1];
//reading env and args
void* kont30558 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar31553 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31553, "0", 10);
void* a3046130705 = encode_mpz(mpzvar31553);

//creating new closure instance
void** clo31555 = alloc_clo(lam30860_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo31555[1] = drop;
clo31555[2] = lst;
clo31555[3] = _u45;
clo31555[4] = n;
clo31555[5] = kont30558;
clo31555[6] = cdr;
void* f3056130706 = encode_clo(clo31555);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3056130706;
arg_buffer[3] = n;
arg_buffer[4] = a3046130705;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam30864_fptr() // lam30864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30865 = arg_buffer[1];
//reading env and args
void* a3046930720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3046730716 = (decode_clo(env30865))[3];
//not do dummy comment
void* kont30562 = (decode_clo(env30865))[2];
//not do dummy comment
void* proc = (decode_clo(env30865))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont30562;
arg_buffer[3] = a3046730716;
arg_buffer[4] = a3046930720;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30864 = encode_clo(alloc_clo(lam30864_fptr, 0));

void* lam30866_fptr() // lam30866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30867 = arg_buffer[1];
//reading env and args
void* a3046830718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3046730716 = (decode_clo(env30867))[5];
//not do dummy comment
void* foldr = (decode_clo(env30867))[4];
//not do dummy comment
void* kont30562 = (decode_clo(env30867))[3];
//not do dummy comment
void* proc = (decode_clo(env30867))[2];
//not do dummy comment
void* acc = (decode_clo(env30867))[1];

//creating new closure instance
void** clo31557 = alloc_clo(lam30864_fptr, 3);

//setting env list
clo31557[1] = proc;
clo31557[2] = kont30562;
clo31557[3] = a3046730716;
void* f3056330719 = encode_clo(clo31557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3056330719;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3046830718;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30866 = encode_clo(alloc_clo(lam30866_fptr, 0));

void* lam30868_fptr() // lam30868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30869 = arg_buffer[1];
//reading env and args
void* a3046730716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30869))[6];
//not do dummy comment
void* kont30562 = (decode_clo(env30869))[5];
//not do dummy comment
void* foldr = (decode_clo(env30869))[4];
//not do dummy comment
void* lst = (decode_clo(env30869))[3];
//not do dummy comment
void* proc = (decode_clo(env30869))[2];
//not do dummy comment
void* acc = (decode_clo(env30869))[1];

//creating new closure instance
void** clo31559 = alloc_clo(lam30866_fptr, 5);

//setting env list
clo31559[1] = acc;
clo31559[2] = proc;
clo31559[3] = kont30562;
clo31559[4] = foldr;
clo31559[5] = a3046730716;
void* f3056430717 = encode_clo(clo31559);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3056430717;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30868 = encode_clo(alloc_clo(lam30868_fptr, 0));

void* lam30870_fptr() // lam30870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30871 = arg_buffer[1];
//reading env and args
void* a3046630714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30871))[7];
//not do dummy comment
void* kont30562 = (decode_clo(env30871))[6];
//not do dummy comment
void* car = (decode_clo(env30871))[5];
//not do dummy comment
void* foldr = (decode_clo(env30871))[4];
//not do dummy comment
void* lst = (decode_clo(env30871))[3];
//not do dummy comment
void* proc = (decode_clo(env30871))[2];
//not do dummy comment
void* acc = (decode_clo(env30871))[1];

//if-clause
bool if_guard31560 = is_true(a3046630714);
if(if_guard31560)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30562);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30562))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31562 = alloc_clo(lam30868_fptr, 6);

//setting env list
clo31562[1] = acc;
clo31562[2] = proc;
clo31562[3] = lst;
clo31562[4] = foldr;
clo31562[5] = kont30562;
clo31562[6] = cdr;
void* f3056530715 = encode_clo(clo31562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3056530715;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30870 = encode_clo(alloc_clo(lam30870_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30872 = arg_buffer[1];
//reading env and args
void* kont30562 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo31564 = alloc_clo(lam30870_fptr, 7);

//setting env list
clo31564[1] = acc;
clo31564[2] = proc;
clo31564[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo31564[4] = foldr;
clo31564[5] = car;
clo31564[6] = kont30562;
clo31564[7] = cdr;
void* f3056630713 = encode_clo(clo31564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3056630713;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam30873_fptr() // lam30873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30874 = arg_buffer[1];
//reading env and args
void* a3047330728 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3047130724 = (decode_clo(env30874))[3];
//not do dummy comment
void* kont30567 = (decode_clo(env30874))[2];
//not do dummy comment
void* cons = (decode_clo(env30874))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30567;
arg_buffer[3] = a3047130724;
arg_buffer[4] = a3047330728;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30873 = encode_clo(alloc_clo(lam30873_fptr, 0));

void* lam30875_fptr() // lam30875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30876 = arg_buffer[1];
//reading env and args
void* a3047230726 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env30876))[5];
//not do dummy comment
void* a3047130724 = (decode_clo(env30876))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30876))[3];
//not do dummy comment
void* kont30567 = (decode_clo(env30876))[2];
//not do dummy comment
void* cons = (decode_clo(env30876))[1];

//creating new closure instance
void** clo31566 = alloc_clo(lam30873_fptr, 3);

//setting env list
clo31566[1] = cons;
clo31566[2] = kont30567;
clo31566[3] = a3047130724;
void* f3056830727 = encode_clo(clo31566);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3056830727;
arg_buffer[3] = a3047230726;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30875 = encode_clo(alloc_clo(lam30875_fptr, 0));

void* lam30877_fptr() // lam30877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30878 = arg_buffer[1];
//reading env and args
void* a3047130724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30878))[6];
//not do dummy comment
void* append = (decode_clo(env30878))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30878))[4];
//not do dummy comment
void* lst1 = (decode_clo(env30878))[3];
//not do dummy comment
void* kont30567 = (decode_clo(env30878))[2];
//not do dummy comment
void* cons = (decode_clo(env30878))[1];

//creating new closure instance
void** clo31568 = alloc_clo(lam30875_fptr, 5);

//setting env list
clo31568[1] = cons;
clo31568[2] = kont30567;
clo31568[3] = lst2;
clo31568[4] = a3047130724;
clo31568[5] = append;
void* f3056930725 = encode_clo(clo31568);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3056930725;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30877 = encode_clo(alloc_clo(lam30877_fptr, 0));

void* lam30879_fptr() // lam30879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30880 = arg_buffer[1];
//reading env and args
void* a3047030722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30880))[7];
//not do dummy comment
void* append = (decode_clo(env30880))[6];
//not do dummy comment
void* lst2 = (decode_clo(env30880))[5];
//not do dummy comment
void* lst1 = (decode_clo(env30880))[4];
//not do dummy comment
void* car = (decode_clo(env30880))[3];
//not do dummy comment
void* kont30567 = (decode_clo(env30880))[2];
//not do dummy comment
void* cons = (decode_clo(env30880))[1];

//if-clause
bool if_guard31569 = is_true(a3047030722);
if(if_guard31569)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30567);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30567))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31571 = alloc_clo(lam30877_fptr, 6);

//setting env list
clo31571[1] = cons;
clo31571[2] = kont30567;
clo31571[3] = lst1;
clo31571[4] = lst2;
clo31571[5] = append;
clo31571[6] = cdr;
void* f3057030723 = encode_clo(clo31571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3057030723;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30879 = encode_clo(alloc_clo(lam30879_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30881 = arg_buffer[1];
//reading env and args
void* kont30567 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31573 = alloc_clo(lam30879_fptr, 7);

//setting env list
clo31573[1] = cons;
clo31573[2] = kont30567;
clo31573[3] = car;
clo31573[4] = lst1;
clo31573[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo31573[6] = append;
clo31573[7] = cdr;
void* f3057130721 = encode_clo(clo31573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3057130721;
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
void* _30882 = arg_buffer[1];
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

void* kont3057230729 = prim_car(lst);
void* lst30730 = prim_cdr(lst);
void* x3047430731 = apply_prim_hash(lst30730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3057230729);
arg_buffer[2] = x3047430731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3057230729))[0]);
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
void* _30883 = arg_buffer[1];
//reading env and args
void* kont30574 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3047530732 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30574);
arg_buffer[2] = x3047530732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30574))[0]);
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
void* _30884 = arg_buffer[1];
//reading env and args
void* kont30575 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3047630733 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30575);
arg_buffer[2] = x3047630733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30575))[0]);
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
void* _30885 = arg_buffer[1];
//reading env and args
void* kont30576 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3047730734 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30576);
arg_buffer[2] = x3047730734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30576))[0]);
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
void* _30886 = arg_buffer[1];
//reading env and args
void* kont30577 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3047830735 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30577);
arg_buffer[2] = x3047830735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30577))[0]);
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
void* _30888 = arg_buffer[1];
//reading env and args
void* kont30578 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar31574 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31574, "5", 10);
void* a3047930736 = encode_mpz(mpzvar31574);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont30578;
arg_buffer[3] = a3047930736;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam30889_fptr() // lam30889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30890 = arg_buffer[1];
//reading env and args
void* x3048030738 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30579 = (decode_clo(env30890))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30579);
arg_buffer[2] = x3048030738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30579))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30889 = encode_clo(alloc_clo(lam30889_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30891 = arg_buffer[1];
//reading env and args
void* kont30579 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo31576 = alloc_clo(lam30889_fptr, 1);

//setting env list
clo31576[1] = kont30579;
void* f3058030737 = encode_clo(clo31576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f3058030737;
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

