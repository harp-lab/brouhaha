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
void* _83817 = arg_buffer[1];
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

void* kont8355283653 = prim_car(lst);
void* lst83654 = prim_cdr(lst);
void* x8346283655 = apply_prim__u43(lst83654);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8355283653);
arg_buffer[2] = x8346283655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8355283653))[0]);
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
void* _83818 = arg_buffer[1];
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

void* kont8355483656 = prim_car(lst);
void* lst83657 = prim_cdr(lst);
void* x8346383658 = apply_prim__u45(lst83657);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8355483656);
arg_buffer[2] = x8346383658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8355483656))[0]);
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
void* _83819 = arg_buffer[1];
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

void* kont8355683659 = prim_car(lst);
void* lst83660 = prim_cdr(lst);
void* x8346483661 = apply_prim__u42(lst83660);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8355683659);
arg_buffer[2] = x8346483661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8355683659))[0]);
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
void* _83820 = arg_buffer[1];
//reading env and args
void* kont83558 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8346583662 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83558);
arg_buffer[2] = x8346583662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83558))[0]);
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
void* _83821 = arg_buffer[1];
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

void* kont8355983663 = prim_car(lst);
void* lst83664 = prim_cdr(lst);
void* x8346683665 = apply_prim__u47(lst83664);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8355983663);
arg_buffer[2] = x8346683665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8355983663))[0]);
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
void* _83822 = arg_buffer[1];
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

void* kont8356183666 = prim_car(lst);
void* lst83667 = prim_cdr(lst);
void* x8346783668 = apply_prim__u61(lst83667);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8356183666);
arg_buffer[2] = x8346783668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8356183666))[0]);
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
void* _83823 = arg_buffer[1];
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

void* kont8356383669 = prim_car(lst);
void* lst83670 = prim_cdr(lst);
void* x8346883671 = apply_prim__u62(lst83670);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8356383669);
arg_buffer[2] = x8346883671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8356383669))[0]);
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
void* _83824 = arg_buffer[1];
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

void* kont8356583672 = prim_car(lst);
void* lst83673 = prim_cdr(lst);
void* x8346983674 = apply_prim__u60(lst83673);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8356583672);
arg_buffer[2] = x8346983674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8356583672))[0]);
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
void* _83825 = arg_buffer[1];
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

void* kont8356783675 = prim_car(lst);
void* lst83676 = prim_cdr(lst);
void* x8347083677 = apply_prim__u60_u61(lst83676);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8356783675);
arg_buffer[2] = x8347083677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8356783675))[0]);
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
void* _83826 = arg_buffer[1];
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

void* kont8356983678 = prim_car(lst);
void* lst83679 = prim_cdr(lst);
void* x8347183680 = apply_prim__u62_u61(lst83679);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8356983678);
arg_buffer[2] = x8347183680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8356983678))[0]);
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
void* _83827 = arg_buffer[1];
//reading env and args
void* kont83571 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8347283681 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83571);
arg_buffer[2] = x8347283681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83571))[0]);
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
void* _83828 = arg_buffer[1];
//reading env and args
void* kont83572 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8347383682 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83572);
arg_buffer[2] = x8347383682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83572))[0]);
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
void* _83829 = arg_buffer[1];
//reading env and args
void* kont83573 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8347483683 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83573);
arg_buffer[2] = x8347483683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83573))[0]);
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
void* _83830 = arg_buffer[1];
//reading env and args
void* kont83574 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8347583684 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83574);
arg_buffer[2] = x8347583684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83574))[0]);
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
void* _83831 = arg_buffer[1];
//reading env and args
void* kont83575 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8347683685 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83575);
arg_buffer[2] = x8347683685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83575))[0]);
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
void* _83832 = arg_buffer[1];
//reading env and args
void* kont83576 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8347783686 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83576);
arg_buffer[2] = x8347783686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83576))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam83833_fptr() // lam83833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83834 = arg_buffer[1];
//reading env and args
void* a8348083690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8347883687 = (decode_clo(env83834))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env83834))[2];
//not do dummy comment
void* kont83577 = (decode_clo(env83834))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont83577;
arg_buffer[3] = a8347883687;
arg_buffer[4] = a8348083690;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83833 = encode_clo(alloc_clo(lam83833_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83837 = arg_buffer[1];
//reading env and args
void* kont83577 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar84984 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84984, "0", 10);
void* a8347883687 = encode_mpz(mpzvar84984);
mpz_t* mpzvar84985 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84985, "2", 10);
void* a8347983688 = encode_mpz(mpzvar84985);

//creating new closure instance
void** clo84987 = alloc_clo(lam83833_fptr, 3);

//setting env list
clo84987[1] = kont83577;
clo84987[2] = equal_u63;
clo84987[3] = a8347883687;
void* f8357883689 = encode_clo(clo84987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8357883689;
arg_buffer[3] = x;
arg_buffer[4] = a8347983688;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam83838_fptr() // lam83838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83839 = arg_buffer[1];
//reading env and args
void* a8348383694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env83839))[3];
//not do dummy comment
void* kont83579 = (decode_clo(env83839))[2];
//not do dummy comment
void* a8348183691 = (decode_clo(env83839))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont83579;
arg_buffer[3] = a8348183691;
arg_buffer[4] = a8348383694;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83838 = encode_clo(alloc_clo(lam83838_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83842 = arg_buffer[1];
//reading env and args
void* kont83579 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar84988 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84988, "1", 10);
void* a8348183691 = encode_mpz(mpzvar84988);
mpz_t* mpzvar84989 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar84989, "2", 10);
void* a8348283692 = encode_mpz(mpzvar84989);

//creating new closure instance
void** clo84991 = alloc_clo(lam83838_fptr, 3);

//setting env list
clo84991[1] = a8348183691;
clo84991[2] = kont83579;
clo84991[3] = equal_u63;
void* f8358083693 = encode_clo(clo84991);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8358083693;
arg_buffer[3] = x;
arg_buffer[4] = a8348283692;
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
void* _83843 = arg_buffer[1];
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

void* kont8358183695 = prim_car(x);
void* x83696 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8358183695);
arg_buffer[2] = x83696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8358183695))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam83846_fptr() // lam83846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83847 = arg_buffer[1];
//reading env and args
void* a8348983706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env83847))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env83847))[2];
//not do dummy comment
void* kont83583 = (decode_clo(env83847))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont83583;
arg_buffer[3] = x;
arg_buffer[4] = a8348983706;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83846 = encode_clo(alloc_clo(lam83846_fptr, 0));

void* lam83848_fptr() // lam83848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83849 = arg_buffer[1];
//reading env and args
void* a8348783703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83849))[5];
//not do dummy comment
void* lst = (decode_clo(env83849))[4];
//not do dummy comment
void* x = (decode_clo(env83849))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env83849))[2];
//not do dummy comment
void* kont83583 = (decode_clo(env83849))[1];

//if-clause
bool if_guard84992 = is_true(a8348783703);
if(if_guard84992)
{
void* x8348883704 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83583);
arg_buffer[2] = x8348883704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83583))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo84994 = alloc_clo(lam83846_fptr, 3);

//setting env list
clo84994[1] = kont83583;
clo84994[2] = member_u63;
clo84994[3] = x;
void* f8358483705 = encode_clo(clo84994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8358483705;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83848 = encode_clo(alloc_clo(lam83848_fptr, 0));

void* lam83850_fptr() // lam83850 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83851 = arg_buffer[1];
//reading env and args
void* a8348683701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83851))[6];
//not do dummy comment
void* lst = (decode_clo(env83851))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env83851))[4];
//not do dummy comment
void* x = (decode_clo(env83851))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env83851))[2];
//not do dummy comment
void* kont83583 = (decode_clo(env83851))[1];

//creating new closure instance
void** clo84996 = alloc_clo(lam83848_fptr, 5);

//setting env list
clo84996[1] = kont83583;
clo84996[2] = member_u63;
clo84996[3] = x;
clo84996[4] = lst;
clo84996[5] = cdr;
void* f8358583702 = encode_clo(clo84996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8358583702;
arg_buffer[3] = a8348683701;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83850 = encode_clo(alloc_clo(lam83850_fptr, 0));

void* lam83852_fptr() // lam83852 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83853 = arg_buffer[1];
//reading env and args
void* a8348483698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83853))[7];
//not do dummy comment
void* lst = (decode_clo(env83853))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env83853))[5];
//not do dummy comment
void* x = (decode_clo(env83853))[4];
//not do dummy comment
void* car = (decode_clo(env83853))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env83853))[2];
//not do dummy comment
void* kont83583 = (decode_clo(env83853))[1];

//if-clause
bool if_guard84997 = is_true(a8348483698);
if(if_guard84997)
{
void* x8348583699 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83583);
arg_buffer[2] = x8348583699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83583))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo84999 = alloc_clo(lam83850_fptr, 6);

//setting env list
clo84999[1] = kont83583;
clo84999[2] = member_u63;
clo84999[3] = x;
clo84999[4] = equal_u63;
clo84999[5] = lst;
clo84999[6] = cdr;
void* f8358683700 = encode_clo(clo84999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8358683700;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83852 = encode_clo(alloc_clo(lam83852_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83854 = arg_buffer[1];
//reading env and args
void* kont83583 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85001 = alloc_clo(lam83852_fptr, 7);

//setting env list
clo85001[1] = kont83583;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo85001[2] = member_u63;
clo85001[3] = car;
clo85001[4] = x;
clo85001[5] = equal_u63;
clo85001[6] = lst;
clo85001[7] = cdr;
void* f8358783697 = encode_clo(clo85001);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8358783697;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam83855_fptr() // lam83855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83856 = arg_buffer[1];
//reading env and args
void* a8349383714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8349283712 = (decode_clo(env83856))[4];
//not do dummy comment
void* kont83588 = (decode_clo(env83856))[3];
//not do dummy comment
void* fun = (decode_clo(env83856))[2];
//not do dummy comment
void* foldl = (decode_clo(env83856))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont83588;
arg_buffer[3] = fun;
arg_buffer[4] = a8349283712;
arg_buffer[5] = a8349383714;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83855 = encode_clo(alloc_clo(lam83855_fptr, 0));

void* lam83857_fptr() // lam83857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83858 = arg_buffer[1];
//reading env and args
void* a8349283712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83858))[5];
//not do dummy comment
void* fun = (decode_clo(env83858))[4];
//not do dummy comment
void* foldl = (decode_clo(env83858))[3];
//not do dummy comment
void* lst = (decode_clo(env83858))[2];
//not do dummy comment
void* kont83588 = (decode_clo(env83858))[1];

//creating new closure instance
void** clo85003 = alloc_clo(lam83855_fptr, 4);

//setting env list
clo85003[1] = foldl;
clo85003[2] = fun;
clo85003[3] = kont83588;
clo85003[4] = a8349283712;
void* f8358983713 = encode_clo(clo85003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8358983713;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83857 = encode_clo(alloc_clo(lam83857_fptr, 0));

void* lam83859_fptr() // lam83859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83860 = arg_buffer[1];
//reading env and args
void* a8349183710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83860))[6];
//not do dummy comment
void* fun = (decode_clo(env83860))[5];
//not do dummy comment
void* acc = (decode_clo(env83860))[4];
//not do dummy comment
void* foldl = (decode_clo(env83860))[3];
//not do dummy comment
void* lst = (decode_clo(env83860))[2];
//not do dummy comment
void* kont83588 = (decode_clo(env83860))[1];

//creating new closure instance
void** clo85005 = alloc_clo(lam83857_fptr, 5);

//setting env list
clo85005[1] = kont83588;
clo85005[2] = lst;
clo85005[3] = foldl;
clo85005[4] = fun;
clo85005[5] = cdr;
void* f8359083711 = encode_clo(clo85005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8359083711;
arg_buffer[3] = a8349183710;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83859 = encode_clo(alloc_clo(lam83859_fptr, 0));

void* lam83861_fptr() // lam83861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83862 = arg_buffer[1];
//reading env and args
void* a8349083708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83862))[7];
//not do dummy comment
void* fun = (decode_clo(env83862))[6];
//not do dummy comment
void* acc = (decode_clo(env83862))[5];
//not do dummy comment
void* car = (decode_clo(env83862))[4];
//not do dummy comment
void* foldl = (decode_clo(env83862))[3];
//not do dummy comment
void* lst = (decode_clo(env83862))[2];
//not do dummy comment
void* kont83588 = (decode_clo(env83862))[1];

//if-clause
bool if_guard85006 = is_true(a8349083708);
if(if_guard85006)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83588);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83588))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85008 = alloc_clo(lam83859_fptr, 6);

//setting env list
clo85008[1] = kont83588;
clo85008[2] = lst;
clo85008[3] = foldl;
clo85008[4] = acc;
clo85008[5] = fun;
clo85008[6] = cdr;
void* f8359183709 = encode_clo(clo85008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8359183709;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83861 = encode_clo(alloc_clo(lam83861_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83863 = arg_buffer[1];
//reading env and args
void* kont83588 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo85010 = alloc_clo(lam83861_fptr, 7);

//setting env list
clo85010[1] = kont83588;
clo85010[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo85010[3] = foldl;
clo85010[4] = car;
clo85010[5] = acc;
clo85010[6] = fun;
clo85010[7] = cdr;
void* f8359283707 = encode_clo(clo85010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8359283707;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam83864_fptr() // lam83864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83865 = arg_buffer[1];
//reading env and args
void* a8349783722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8349583718 = (decode_clo(env83865))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env83865))[2];
//not do dummy comment
void* kont83593 = (decode_clo(env83865))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont83593;
arg_buffer[3] = a8349583718;
arg_buffer[4] = a8349783722;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83864 = encode_clo(alloc_clo(lam83864_fptr, 0));

void* lam83866_fptr() // lam83866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83867 = arg_buffer[1];
//reading env and args
void* a8349683720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8349583718 = (decode_clo(env83867))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env83867))[4];
//not do dummy comment
void* kont83593 = (decode_clo(env83867))[3];
//not do dummy comment
void* lst2 = (decode_clo(env83867))[2];
//not do dummy comment
void* cons = (decode_clo(env83867))[1];

//creating new closure instance
void** clo85012 = alloc_clo(lam83864_fptr, 3);

//setting env list
clo85012[1] = kont83593;
clo85012[2] = reverse_u45helper;
clo85012[3] = a8349583718;
void* f8359483721 = encode_clo(clo85012);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8359483721;
arg_buffer[3] = a8349683720;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83866 = encode_clo(alloc_clo(lam83866_fptr, 0));

void* lam83868_fptr() // lam83868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83869 = arg_buffer[1];
//reading env and args
void* a8349583718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83869))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env83869))[5];
//not do dummy comment
void* kont83593 = (decode_clo(env83869))[4];
//not do dummy comment
void* lst2 = (decode_clo(env83869))[3];
//not do dummy comment
void* car = (decode_clo(env83869))[2];
//not do dummy comment
void* cons = (decode_clo(env83869))[1];

//creating new closure instance
void** clo85014 = alloc_clo(lam83866_fptr, 5);

//setting env list
clo85014[1] = cons;
clo85014[2] = lst2;
clo85014[3] = kont83593;
clo85014[4] = reverse_u45helper;
clo85014[5] = a8349583718;
void* f8359583719 = encode_clo(clo85014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8359583719;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83868 = encode_clo(alloc_clo(lam83868_fptr, 0));

void* lam83870_fptr() // lam83870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83871 = arg_buffer[1];
//reading env and args
void* a8349483716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83871))[7];
//not do dummy comment
void* lst = (decode_clo(env83871))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env83871))[5];
//not do dummy comment
void* kont83593 = (decode_clo(env83871))[4];
//not do dummy comment
void* lst2 = (decode_clo(env83871))[3];
//not do dummy comment
void* car = (decode_clo(env83871))[2];
//not do dummy comment
void* cons = (decode_clo(env83871))[1];

//if-clause
bool if_guard85015 = is_true(a8349483716);
if(if_guard85015)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83593);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83593))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85017 = alloc_clo(lam83868_fptr, 6);

//setting env list
clo85017[1] = cons;
clo85017[2] = car;
clo85017[3] = lst2;
clo85017[4] = kont83593;
clo85017[5] = reverse_u45helper;
clo85017[6] = lst;
void* f8359683717 = encode_clo(clo85017);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8359683717;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83870 = encode_clo(alloc_clo(lam83870_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83872 = arg_buffer[1];
//reading env and args
void* kont83593 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85019 = alloc_clo(lam83870_fptr, 7);

//setting env list
clo85019[1] = cons;
clo85019[2] = car;
clo85019[3] = lst2;
clo85019[4] = kont83593;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo85019[5] = reverse_u45helper;
clo85019[6] = lst;
clo85019[7] = cdr;
void* f8359783715 = encode_clo(clo85019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8359783715;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam83873_fptr() // lam83873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83874 = arg_buffer[1];
//reading env and args
void* a8349883724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83874))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env83874))[2];
//not do dummy comment
void* kont83598 = (decode_clo(env83874))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont83598;
arg_buffer[3] = lst;
arg_buffer[4] = a8349883724;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83873 = encode_clo(alloc_clo(lam83873_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83875 = arg_buffer[1];
//reading env and args
void* kont83598 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo85021 = alloc_clo(lam83873_fptr, 3);

//setting env list
clo85021[1] = kont83598;
clo85021[2] = reverse_u45helper;
clo85021[3] = lst;
void* f8359983723 = encode_clo(clo85021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8359983723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam83876_fptr() // lam83876 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83877 = arg_buffer[1];
//reading env and args
void* x8350183729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83600 = (decode_clo(env83877))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83600);
arg_buffer[2] = x8350183729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83600))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83876 = encode_clo(alloc_clo(lam83876_fptr, 0));

void* lam83878_fptr() // lam83878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83879 = arg_buffer[1];
//reading env and args
void* a8350683738 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83600 = (decode_clo(env83879))[4];
//not do dummy comment
void* a8350283731 = (decode_clo(env83879))[3];
//not do dummy comment
void* a8350483734 = (decode_clo(env83879))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env83879))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont83600;
arg_buffer[3] = a8350283731;
arg_buffer[4] = a8350483734;
arg_buffer[5] = a8350683738;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83878 = encode_clo(alloc_clo(lam83878_fptr, 0));

void* lam83880_fptr() // lam83880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83881 = arg_buffer[1];
//reading env and args
void* a8350583736 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83600 = (decode_clo(env83881))[6];
//not do dummy comment
void* a8350283731 = (decode_clo(env83881))[5];
//not do dummy comment
void* a8350483734 = (decode_clo(env83881))[4];
//not do dummy comment
void* cons = (decode_clo(env83881))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env83881))[2];
//not do dummy comment
void* lst2 = (decode_clo(env83881))[1];

//creating new closure instance
void** clo85023 = alloc_clo(lam83878_fptr, 4);

//setting env list
clo85023[1] = take_u45helper;
clo85023[2] = a8350483734;
clo85023[3] = a8350283731;
clo85023[4] = kont83600;
void* f8360283737 = encode_clo(clo85023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8360283737;
arg_buffer[3] = a8350583736;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83880 = encode_clo(alloc_clo(lam83880_fptr, 0));

void* lam83882_fptr() // lam83882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83883 = arg_buffer[1];
//reading env and args
void* a8350483734 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83600 = (decode_clo(env83883))[7];
//not do dummy comment
void* a8350283731 = (decode_clo(env83883))[6];
//not do dummy comment
void* lst = (decode_clo(env83883))[5];
//not do dummy comment
void* car = (decode_clo(env83883))[4];
//not do dummy comment
void* cons = (decode_clo(env83883))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env83883))[2];
//not do dummy comment
void* lst2 = (decode_clo(env83883))[1];

//creating new closure instance
void** clo85025 = alloc_clo(lam83880_fptr, 6);

//setting env list
clo85025[1] = lst2;
clo85025[2] = take_u45helper;
clo85025[3] = cons;
clo85025[4] = a8350483734;
clo85025[5] = a8350283731;
clo85025[6] = kont83600;
void* f8360383735 = encode_clo(clo85025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8360383735;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83882 = encode_clo(alloc_clo(lam83882_fptr, 0));

void* lam83885_fptr() // lam83885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83886 = arg_buffer[1];
//reading env and args
void* a8350283731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83600 = (decode_clo(env83886))[8];
//not do dummy comment
void* lst = (decode_clo(env83886))[7];
//not do dummy comment
void* cons = (decode_clo(env83886))[6];
//not do dummy comment
void* _u45 = (decode_clo(env83886))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env83886))[4];
//not do dummy comment
void* lst2 = (decode_clo(env83886))[3];
//not do dummy comment
void* n = (decode_clo(env83886))[2];
//not do dummy comment
void* car = (decode_clo(env83886))[1];
mpz_t* mpzvar85026 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85026, "1", 10);
void* a8350383732 = encode_mpz(mpzvar85026);

//creating new closure instance
void** clo85028 = alloc_clo(lam83882_fptr, 7);

//setting env list
clo85028[1] = lst2;
clo85028[2] = take_u45helper;
clo85028[3] = cons;
clo85028[4] = car;
clo85028[5] = lst;
clo85028[6] = a8350283731;
clo85028[7] = kont83600;
void* f8360483733 = encode_clo(clo85028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8360483733;
arg_buffer[3] = n;
arg_buffer[4] = a8350383732;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83885 = encode_clo(alloc_clo(lam83885_fptr, 0));

void* lam83887_fptr() // lam83887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83888 = arg_buffer[1];
//reading env and args
void* a8350083727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83888))[10];
//not do dummy comment
void* reverse = (decode_clo(env83888))[9];
//not do dummy comment
void* cons = (decode_clo(env83888))[8];
//not do dummy comment
void* _u45 = (decode_clo(env83888))[7];
//not do dummy comment
void* kont83600 = (decode_clo(env83888))[6];
//not do dummy comment
void* cdr = (decode_clo(env83888))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env83888))[4];
//not do dummy comment
void* lst2 = (decode_clo(env83888))[3];
//not do dummy comment
void* n = (decode_clo(env83888))[2];
//not do dummy comment
void* car = (decode_clo(env83888))[1];

//if-clause
bool if_guard85029 = is_true(a8350083727);
if(if_guard85029)
{

//creating new closure instance
void** clo85031 = alloc_clo(lam83876_fptr, 1);

//setting env list
clo85031[1] = kont83600;
void* f8360183728 = encode_clo(clo85031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8360183728;
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
void** clo85033 = alloc_clo(lam83885_fptr, 8);

//setting env list
clo85033[1] = car;
clo85033[2] = n;
clo85033[3] = lst2;
clo85033[4] = take_u45helper;
clo85033[5] = _u45;
clo85033[6] = cons;
clo85033[7] = lst;
clo85033[8] = kont83600;
void* f8360583730 = encode_clo(clo85033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8360583730;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83887 = encode_clo(alloc_clo(lam83887_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83890 = arg_buffer[1];
//reading env and args
void* kont83600 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar85034 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85034, "0", 10);
void* a8349983725 = encode_mpz(mpzvar85034);

//creating new closure instance
void** clo85036 = alloc_clo(lam83887_fptr, 10);

//setting env list
clo85036[1] = car;
clo85036[2] = n;
clo85036[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo85036[4] = take_u45helper;
clo85036[5] = cdr;
clo85036[6] = kont83600;
clo85036[7] = _u45;
clo85036[8] = cons;
clo85036[9] = reverse;
clo85036[10] = lst;
void* f8360683726 = encode_clo(clo85036);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8360683726;
arg_buffer[3] = n;
arg_buffer[4] = a8349983725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam83891_fptr() // lam83891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83892 = arg_buffer[1];
//reading env and args
void* a8350783740 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83892))[4];
//not do dummy comment
void* kont83607 = (decode_clo(env83892))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env83892))[2];
//not do dummy comment
void* n = (decode_clo(env83892))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont83607;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8350783740;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83891 = encode_clo(alloc_clo(lam83891_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83893 = arg_buffer[1];
//reading env and args
void* kont83607 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85038 = alloc_clo(lam83891_fptr, 4);

//setting env list
clo85038[1] = n;
clo85038[2] = take_u45helper;
clo85038[3] = kont83607;
clo85038[4] = lst;
void* f8360883739 = encode_clo(clo85038);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8360883739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam83895_fptr() // lam83895 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83896 = arg_buffer[1];
//reading env and args
void* a8351283748 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8351083744 = (decode_clo(env83896))[3];
//not do dummy comment
void* _u43 = (decode_clo(env83896))[2];
//not do dummy comment
void* kont83609 = (decode_clo(env83896))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont83609;
arg_buffer[3] = a8351083744;
arg_buffer[4] = a8351283748;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83895 = encode_clo(alloc_clo(lam83895_fptr, 0));

void* lam83897_fptr() // lam83897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83898 = arg_buffer[1];
//reading env and args
void* a8351183746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8351083744 = (decode_clo(env83898))[4];
//not do dummy comment
void* length = (decode_clo(env83898))[3];
//not do dummy comment
void* _u43 = (decode_clo(env83898))[2];
//not do dummy comment
void* kont83609 = (decode_clo(env83898))[1];

//creating new closure instance
void** clo85040 = alloc_clo(lam83895_fptr, 3);

//setting env list
clo85040[1] = kont83609;
clo85040[2] = _u43;
clo85040[3] = a8351083744;
void* f8361083747 = encode_clo(clo85040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8361083747;
arg_buffer[3] = a8351183746;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83897 = encode_clo(alloc_clo(lam83897_fptr, 0));

void* lam83900_fptr() // lam83900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83901 = arg_buffer[1];
//reading env and args
void* a8350883742 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83901))[5];
//not do dummy comment
void* lst = (decode_clo(env83901))[4];
//not do dummy comment
void* length = (decode_clo(env83901))[3];
//not do dummy comment
void* _u43 = (decode_clo(env83901))[2];
//not do dummy comment
void* kont83609 = (decode_clo(env83901))[1];

//if-clause
bool if_guard85041 = is_true(a8350883742);
if(if_guard85041)
{
mpz_t* mpzvar85042 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85042, "0", 10);
void* x8350983743 = encode_mpz(mpzvar85042);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83609);
arg_buffer[2] = x8350983743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83609))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar85043 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85043, "1", 10);
void* a8351083744 = encode_mpz(mpzvar85043);

//creating new closure instance
void** clo85045 = alloc_clo(lam83897_fptr, 4);

//setting env list
clo85045[1] = kont83609;
clo85045[2] = _u43;
clo85045[3] = length;
clo85045[4] = a8351083744;
void* f8361183745 = encode_clo(clo85045);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8361183745;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83900 = encode_clo(alloc_clo(lam83900_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83902 = arg_buffer[1];
//reading env and args
void* kont83609 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo85047 = alloc_clo(lam83900_fptr, 5);

//setting env list
clo85047[1] = kont83609;
clo85047[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo85047[3] = length;
clo85047[4] = lst;
clo85047[5] = cdr;
void* f8361283741 = encode_clo(clo85047);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8361283741;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam83903_fptr() // lam83903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83904 = arg_buffer[1];
//reading env and args
void* x8351483752 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83613 = (decode_clo(env83904))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83613);
arg_buffer[2] = x8351483752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83613))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83903 = encode_clo(alloc_clo(lam83903_fptr, 0));

void* lam83905_fptr() // lam83905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83906 = arg_buffer[1];
//reading env and args
void* a8351883760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8351683756 = (decode_clo(env83906))[3];
//not do dummy comment
void* kont83613 = (decode_clo(env83906))[2];
//not do dummy comment
void* cons = (decode_clo(env83906))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont83613;
arg_buffer[3] = a8351683756;
arg_buffer[4] = a8351883760;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83905 = encode_clo(alloc_clo(lam83905_fptr, 0));

void* lam83907_fptr() // lam83907 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83908 = arg_buffer[1];
//reading env and args
void* a8351783758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env83908))[5];
//not do dummy comment
void* proc = (decode_clo(env83908))[4];
//not do dummy comment
void* a8351683756 = (decode_clo(env83908))[3];
//not do dummy comment
void* kont83613 = (decode_clo(env83908))[2];
//not do dummy comment
void* cons = (decode_clo(env83908))[1];

//creating new closure instance
void** clo85049 = alloc_clo(lam83905_fptr, 3);

//setting env list
clo85049[1] = cons;
clo85049[2] = kont83613;
clo85049[3] = a8351683756;
void* f8361583759 = encode_clo(clo85049);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8361583759;
arg_buffer[3] = proc;
arg_buffer[4] = a8351783758;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83907 = encode_clo(alloc_clo(lam83907_fptr, 0));

void* lam83909_fptr() // lam83909 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83910 = arg_buffer[1];
//reading env and args
void* a8351683756 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83910))[6];
//not do dummy comment
void* lst = (decode_clo(env83910))[5];
//not do dummy comment
void* map = (decode_clo(env83910))[4];
//not do dummy comment
void* proc = (decode_clo(env83910))[3];
//not do dummy comment
void* kont83613 = (decode_clo(env83910))[2];
//not do dummy comment
void* cons = (decode_clo(env83910))[1];

//creating new closure instance
void** clo85051 = alloc_clo(lam83907_fptr, 5);

//setting env list
clo85051[1] = cons;
clo85051[2] = kont83613;
clo85051[3] = a8351683756;
clo85051[4] = proc;
clo85051[5] = map;
void* f8361683757 = encode_clo(clo85051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8361683757;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83909 = encode_clo(alloc_clo(lam83909_fptr, 0));

void* lam83911_fptr() // lam83911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83912 = arg_buffer[1];
//reading env and args
void* a8351583754 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83912))[6];
//not do dummy comment
void* lst = (decode_clo(env83912))[5];
//not do dummy comment
void* map = (decode_clo(env83912))[4];
//not do dummy comment
void* proc = (decode_clo(env83912))[3];
//not do dummy comment
void* kont83613 = (decode_clo(env83912))[2];
//not do dummy comment
void* cons = (decode_clo(env83912))[1];

//creating new closure instance
void** clo85053 = alloc_clo(lam83909_fptr, 6);

//setting env list
clo85053[1] = cons;
clo85053[2] = kont83613;
clo85053[3] = proc;
clo85053[4] = map;
clo85053[5] = lst;
clo85053[6] = cdr;
void* f8361783755 = encode_clo(clo85053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8361783755;
arg_buffer[3] = a8351583754;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83911 = encode_clo(alloc_clo(lam83911_fptr, 0));

void* lam83913_fptr() // lam83913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83914 = arg_buffer[1];
//reading env and args
void* a8351383750 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env83914))[8];
//not do dummy comment
void* map = (decode_clo(env83914))[7];
//not do dummy comment
void* proc = (decode_clo(env83914))[6];
//not do dummy comment
void* cons = (decode_clo(env83914))[5];
//not do dummy comment
void* list = (decode_clo(env83914))[4];
//not do dummy comment
void* cdr = (decode_clo(env83914))[3];
//not do dummy comment
void* kont83613 = (decode_clo(env83914))[2];
//not do dummy comment
void* car = (decode_clo(env83914))[1];

//if-clause
bool if_guard85054 = is_true(a8351383750);
if(if_guard85054)
{

//creating new closure instance
void** clo85056 = alloc_clo(lam83903_fptr, 1);

//setting env list
clo85056[1] = kont83613;
void* f8361483751 = encode_clo(clo85056);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8361483751;
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
void** clo85058 = alloc_clo(lam83911_fptr, 6);

//setting env list
clo85058[1] = cons;
clo85058[2] = kont83613;
clo85058[3] = proc;
clo85058[4] = map;
clo85058[5] = lst;
clo85058[6] = cdr;
void* f8361883753 = encode_clo(clo85058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8361883753;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83913 = encode_clo(alloc_clo(lam83913_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83915 = arg_buffer[1];
//reading env and args
void* kont83613 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85060 = alloc_clo(lam83913_fptr, 8);

//setting env list
clo85060[1] = car;
clo85060[2] = kont83613;
clo85060[3] = cdr;
clo85060[4] = list;
clo85060[5] = cons;
clo85060[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo85060[7] = map;
clo85060[8] = lst;
void* f8361983749 = encode_clo(clo85060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8361983749;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam83916_fptr() // lam83916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83917 = arg_buffer[1];
//reading env and args
void* x8352083764 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83620 = (decode_clo(env83917))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83620);
arg_buffer[2] = x8352083764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83620))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83916 = encode_clo(alloc_clo(lam83916_fptr, 0));

void* lam83918_fptr() // lam83918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83919 = arg_buffer[1];
//reading env and args
void* a8352583774 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83620 = (decode_clo(env83919))[3];
//not do dummy comment
void* a8352383770 = (decode_clo(env83919))[2];
//not do dummy comment
void* cons = (decode_clo(env83919))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont83620;
arg_buffer[3] = a8352383770;
arg_buffer[4] = a8352583774;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83918 = encode_clo(alloc_clo(lam83918_fptr, 0));

void* lam83920_fptr() // lam83920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83921 = arg_buffer[1];
//reading env and args
void* a8352483772 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83620 = (decode_clo(env83921))[5];
//not do dummy comment
void* op = (decode_clo(env83921))[4];
//not do dummy comment
void* a8352383770 = (decode_clo(env83921))[3];
//not do dummy comment
void* filter = (decode_clo(env83921))[2];
//not do dummy comment
void* cons = (decode_clo(env83921))[1];

//creating new closure instance
void** clo85062 = alloc_clo(lam83918_fptr, 3);

//setting env list
clo85062[1] = cons;
clo85062[2] = a8352383770;
clo85062[3] = kont83620;
void* f8362283773 = encode_clo(clo85062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8362283773;
arg_buffer[3] = op;
arg_buffer[4] = a8352483772;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83920 = encode_clo(alloc_clo(lam83920_fptr, 0));

void* lam83922_fptr() // lam83922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83923 = arg_buffer[1];
//reading env and args
void* a8352383770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83923))[6];
//not do dummy comment
void* op = (decode_clo(env83923))[5];
//not do dummy comment
void* filter = (decode_clo(env83923))[4];
//not do dummy comment
void* cons = (decode_clo(env83923))[3];
//not do dummy comment
void* lst = (decode_clo(env83923))[2];
//not do dummy comment
void* kont83620 = (decode_clo(env83923))[1];

//creating new closure instance
void** clo85064 = alloc_clo(lam83920_fptr, 5);

//setting env list
clo85064[1] = cons;
clo85064[2] = filter;
clo85064[3] = a8352383770;
clo85064[4] = op;
clo85064[5] = kont83620;
void* f8362383771 = encode_clo(clo85064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8362383771;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83922 = encode_clo(alloc_clo(lam83922_fptr, 0));

void* lam83924_fptr() // lam83924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83925 = arg_buffer[1];
//reading env and args
void* a8352683776 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83620 = (decode_clo(env83925))[3];
//not do dummy comment
void* op = (decode_clo(env83925))[2];
//not do dummy comment
void* filter = (decode_clo(env83925))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont83620;
arg_buffer[3] = op;
arg_buffer[4] = a8352683776;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83924 = encode_clo(alloc_clo(lam83924_fptr, 0));

void* lam83926_fptr() // lam83926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83927 = arg_buffer[1];
//reading env and args
void* a8352283768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83927))[7];
//not do dummy comment
void* op = (decode_clo(env83927))[6];
//not do dummy comment
void* cons = (decode_clo(env83927))[5];
//not do dummy comment
void* lst = (decode_clo(env83927))[4];
//not do dummy comment
void* kont83620 = (decode_clo(env83927))[3];
//not do dummy comment
void* filter = (decode_clo(env83927))[2];
//not do dummy comment
void* car = (decode_clo(env83927))[1];

//if-clause
bool if_guard85065 = is_true(a8352283768);
if(if_guard85065)
{

//creating new closure instance
void** clo85067 = alloc_clo(lam83922_fptr, 6);

//setting env list
clo85067[1] = kont83620;
clo85067[2] = lst;
clo85067[3] = cons;
clo85067[4] = filter;
clo85067[5] = op;
clo85067[6] = cdr;
void* f8362483769 = encode_clo(clo85067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8362483769;
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
void** clo85069 = alloc_clo(lam83924_fptr, 3);

//setting env list
clo85069[1] = filter;
clo85069[2] = op;
clo85069[3] = kont83620;
void* f8362583775 = encode_clo(clo85069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8362583775;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83926 = encode_clo(alloc_clo(lam83926_fptr, 0));

void* lam83928_fptr() // lam83928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83929 = arg_buffer[1];
//reading env and args
void* a8352183766 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83929))[7];
//not do dummy comment
void* op = (decode_clo(env83929))[6];
//not do dummy comment
void* cons = (decode_clo(env83929))[5];
//not do dummy comment
void* lst = (decode_clo(env83929))[4];
//not do dummy comment
void* kont83620 = (decode_clo(env83929))[3];
//not do dummy comment
void* filter = (decode_clo(env83929))[2];
//not do dummy comment
void* car = (decode_clo(env83929))[1];

//creating new closure instance
void** clo85071 = alloc_clo(lam83926_fptr, 7);

//setting env list
clo85071[1] = car;
clo85071[2] = filter;
clo85071[3] = kont83620;
clo85071[4] = lst;
clo85071[5] = cons;
clo85071[6] = op;
clo85071[7] = cdr;
void* f8362683767 = encode_clo(clo85071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8362683767;
arg_buffer[3] = a8352183766;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83928 = encode_clo(alloc_clo(lam83928_fptr, 0));

void* lam83930_fptr() // lam83930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83931 = arg_buffer[1];
//reading env and args
void* a8351983762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env83931))[8];
//not do dummy comment
void* cons = (decode_clo(env83931))[7];
//not do dummy comment
void* list = (decode_clo(env83931))[6];
//not do dummy comment
void* cdr = (decode_clo(env83931))[5];
//not do dummy comment
void* lst = (decode_clo(env83931))[4];
//not do dummy comment
void* kont83620 = (decode_clo(env83931))[3];
//not do dummy comment
void* filter = (decode_clo(env83931))[2];
//not do dummy comment
void* car = (decode_clo(env83931))[1];

//if-clause
bool if_guard85072 = is_true(a8351983762);
if(if_guard85072)
{

//creating new closure instance
void** clo85074 = alloc_clo(lam83916_fptr, 1);

//setting env list
clo85074[1] = kont83620;
void* f8362183763 = encode_clo(clo85074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8362183763;
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
void** clo85076 = alloc_clo(lam83928_fptr, 7);

//setting env list
clo85076[1] = car;
clo85076[2] = filter;
clo85076[3] = kont83620;
clo85076[4] = lst;
clo85076[5] = cons;
clo85076[6] = op;
clo85076[7] = cdr;
void* f8362783765 = encode_clo(clo85076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8362783765;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83930 = encode_clo(alloc_clo(lam83930_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83932 = arg_buffer[1];
//reading env and args
void* kont83620 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85078 = alloc_clo(lam83930_fptr, 8);

//setting env list
clo85078[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo85078[2] = filter;
clo85078[3] = kont83620;
clo85078[4] = lst;
clo85078[5] = cdr;
clo85078[6] = list;
clo85078[7] = cons;
clo85078[8] = op;
void* f8362883761 = encode_clo(clo85078);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8362883761;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam83933_fptr() // lam83933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83934 = arg_buffer[1];
//reading env and args
void* a8353183784 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env83934))[3];
//not do dummy comment
void* a8352983781 = (decode_clo(env83934))[2];
//not do dummy comment
void* kont83629 = (decode_clo(env83934))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont83629;
arg_buffer[3] = a8352983781;
arg_buffer[4] = a8353183784;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83933 = encode_clo(alloc_clo(lam83933_fptr, 0));

void* lam83936_fptr() // lam83936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83937 = arg_buffer[1];
//reading env and args
void* a8352983781 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env83937))[4];
//not do dummy comment
void* _u45 = (decode_clo(env83937))[3];
//not do dummy comment
void* kont83629 = (decode_clo(env83937))[2];
//not do dummy comment
void* n = (decode_clo(env83937))[1];
mpz_t* mpzvar85079 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85079, "1", 10);
void* a8353083782 = encode_mpz(mpzvar85079);

//creating new closure instance
void** clo85081 = alloc_clo(lam83933_fptr, 3);

//setting env list
clo85081[1] = kont83629;
clo85081[2] = a8352983781;
clo85081[3] = drop;
void* f8363083783 = encode_clo(clo85081);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8363083783;
arg_buffer[3] = n;
arg_buffer[4] = a8353083782;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83936 = encode_clo(alloc_clo(lam83936_fptr, 0));

void* lam83938_fptr() // lam83938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83939 = arg_buffer[1];
//reading env and args
void* a8352883779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83939))[6];
//not do dummy comment
void* _u45 = (decode_clo(env83939))[5];
//not do dummy comment
void* lst = (decode_clo(env83939))[4];
//not do dummy comment
void* drop = (decode_clo(env83939))[3];
//not do dummy comment
void* kont83629 = (decode_clo(env83939))[2];
//not do dummy comment
void* n = (decode_clo(env83939))[1];

//if-clause
bool if_guard85082 = is_true(a8352883779);
if(if_guard85082)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83629);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83629))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85084 = alloc_clo(lam83936_fptr, 4);

//setting env list
clo85084[1] = n;
clo85084[2] = kont83629;
clo85084[3] = _u45;
clo85084[4] = drop;
void* f8363183780 = encode_clo(clo85084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8363183780;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83938 = encode_clo(alloc_clo(lam83938_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83941 = arg_buffer[1];
//reading env and args
void* kont83629 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar85085 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85085, "0", 10);
void* a8352783777 = encode_mpz(mpzvar85085);

//creating new closure instance
void** clo85087 = alloc_clo(lam83938_fptr, 6);

//setting env list
clo85087[1] = n;
clo85087[2] = kont83629;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo85087[3] = drop;
clo85087[4] = lst;
clo85087[5] = _u45;
clo85087[6] = cdr;
void* f8363283778 = encode_clo(clo85087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8363283778;
arg_buffer[3] = n;
arg_buffer[4] = a8352783777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam83942_fptr() // lam83942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83943 = arg_buffer[1];
//reading env and args
void* a8353583792 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83633 = (decode_clo(env83943))[3];
//not do dummy comment
void* proc = (decode_clo(env83943))[2];
//not do dummy comment
void* a8353383788 = (decode_clo(env83943))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont83633;
arg_buffer[3] = a8353383788;
arg_buffer[4] = a8353583792;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83942 = encode_clo(alloc_clo(lam83942_fptr, 0));

void* lam83944_fptr() // lam83944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83945 = arg_buffer[1];
//reading env and args
void* a8353483790 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83633 = (decode_clo(env83945))[5];
//not do dummy comment
void* foldr = (decode_clo(env83945))[4];
//not do dummy comment
void* a8353383788 = (decode_clo(env83945))[3];
//not do dummy comment
void* proc = (decode_clo(env83945))[2];
//not do dummy comment
void* acc = (decode_clo(env83945))[1];

//creating new closure instance
void** clo85089 = alloc_clo(lam83942_fptr, 3);

//setting env list
clo85089[1] = a8353383788;
clo85089[2] = proc;
clo85089[3] = kont83633;
void* f8363483791 = encode_clo(clo85089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8363483791;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8353483790;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83944 = encode_clo(alloc_clo(lam83944_fptr, 0));

void* lam83946_fptr() // lam83946 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83947 = arg_buffer[1];
//reading env and args
void* a8353383788 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83947))[6];
//not do dummy comment
void* kont83633 = (decode_clo(env83947))[5];
//not do dummy comment
void* foldr = (decode_clo(env83947))[4];
//not do dummy comment
void* lst = (decode_clo(env83947))[3];
//not do dummy comment
void* proc = (decode_clo(env83947))[2];
//not do dummy comment
void* acc = (decode_clo(env83947))[1];

//creating new closure instance
void** clo85091 = alloc_clo(lam83944_fptr, 5);

//setting env list
clo85091[1] = acc;
clo85091[2] = proc;
clo85091[3] = a8353383788;
clo85091[4] = foldr;
clo85091[5] = kont83633;
void* f8363583789 = encode_clo(clo85091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8363583789;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83946 = encode_clo(alloc_clo(lam83946_fptr, 0));

void* lam83948_fptr() // lam83948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83949 = arg_buffer[1];
//reading env and args
void* a8353283786 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83949))[7];
//not do dummy comment
void* kont83633 = (decode_clo(env83949))[6];
//not do dummy comment
void* car = (decode_clo(env83949))[5];
//not do dummy comment
void* foldr = (decode_clo(env83949))[4];
//not do dummy comment
void* lst = (decode_clo(env83949))[3];
//not do dummy comment
void* proc = (decode_clo(env83949))[2];
//not do dummy comment
void* acc = (decode_clo(env83949))[1];

//if-clause
bool if_guard85092 = is_true(a8353283786);
if(if_guard85092)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83633);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83633))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85094 = alloc_clo(lam83946_fptr, 6);

//setting env list
clo85094[1] = acc;
clo85094[2] = proc;
clo85094[3] = lst;
clo85094[4] = foldr;
clo85094[5] = kont83633;
clo85094[6] = cdr;
void* f8363683787 = encode_clo(clo85094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8363683787;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83948 = encode_clo(alloc_clo(lam83948_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83950 = arg_buffer[1];
//reading env and args
void* kont83633 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo85096 = alloc_clo(lam83948_fptr, 7);

//setting env list
clo85096[1] = acc;
clo85096[2] = proc;
clo85096[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo85096[4] = foldr;
clo85096[5] = car;
clo85096[6] = kont83633;
clo85096[7] = cdr;
void* f8363783785 = encode_clo(clo85096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8363783785;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam83951_fptr() // lam83951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83952 = arg_buffer[1];
//reading env and args
void* a8353983800 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8353783796 = (decode_clo(env83952))[3];
//not do dummy comment
void* kont83638 = (decode_clo(env83952))[2];
//not do dummy comment
void* cons = (decode_clo(env83952))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont83638;
arg_buffer[3] = a8353783796;
arg_buffer[4] = a8353983800;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83951 = encode_clo(alloc_clo(lam83951_fptr, 0));

void* lam83953_fptr() // lam83953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83954 = arg_buffer[1];
//reading env and args
void* a8353883798 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8353783796 = (decode_clo(env83954))[5];
//not do dummy comment
void* kont83638 = (decode_clo(env83954))[4];
//not do dummy comment
void* append = (decode_clo(env83954))[3];
//not do dummy comment
void* lst2 = (decode_clo(env83954))[2];
//not do dummy comment
void* cons = (decode_clo(env83954))[1];

//creating new closure instance
void** clo85098 = alloc_clo(lam83951_fptr, 3);

//setting env list
clo85098[1] = cons;
clo85098[2] = kont83638;
clo85098[3] = a8353783796;
void* f8363983799 = encode_clo(clo85098);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8363983799;
arg_buffer[3] = a8353883798;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83953 = encode_clo(alloc_clo(lam83953_fptr, 0));

void* lam83955_fptr() // lam83955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83956 = arg_buffer[1];
//reading env and args
void* a8353783796 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83956))[6];
//not do dummy comment
void* kont83638 = (decode_clo(env83956))[5];
//not do dummy comment
void* append = (decode_clo(env83956))[4];
//not do dummy comment
void* lst2 = (decode_clo(env83956))[3];
//not do dummy comment
void* lst1 = (decode_clo(env83956))[2];
//not do dummy comment
void* cons = (decode_clo(env83956))[1];

//creating new closure instance
void** clo85100 = alloc_clo(lam83953_fptr, 5);

//setting env list
clo85100[1] = cons;
clo85100[2] = lst2;
clo85100[3] = append;
clo85100[4] = kont83638;
clo85100[5] = a8353783796;
void* f8364083797 = encode_clo(clo85100);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8364083797;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83955 = encode_clo(alloc_clo(lam83955_fptr, 0));

void* lam83957_fptr() // lam83957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83958 = arg_buffer[1];
//reading env and args
void* a8353683794 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env83958))[7];
//not do dummy comment
void* kont83638 = (decode_clo(env83958))[6];
//not do dummy comment
void* append = (decode_clo(env83958))[5];
//not do dummy comment
void* lst2 = (decode_clo(env83958))[4];
//not do dummy comment
void* cons = (decode_clo(env83958))[3];
//not do dummy comment
void* lst1 = (decode_clo(env83958))[2];
//not do dummy comment
void* car = (decode_clo(env83958))[1];

//if-clause
bool if_guard85101 = is_true(a8353683794);
if(if_guard85101)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83638);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83638))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85103 = alloc_clo(lam83955_fptr, 6);

//setting env list
clo85103[1] = cons;
clo85103[2] = lst1;
clo85103[3] = lst2;
clo85103[4] = append;
clo85103[5] = kont83638;
clo85103[6] = cdr;
void* f8364183795 = encode_clo(clo85103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8364183795;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam83957 = encode_clo(alloc_clo(lam83957_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83959 = arg_buffer[1];
//reading env and args
void* kont83638 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85105 = alloc_clo(lam83957_fptr, 7);

//setting env list
clo85105[1] = car;
clo85105[2] = lst1;
clo85105[3] = cons;
clo85105[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo85105[5] = append;
clo85105[6] = kont83638;
clo85105[7] = cdr;
void* f8364283793 = encode_clo(clo85105);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8364283793;
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
void* _83960 = arg_buffer[1];
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

void* kont8364383801 = prim_car(lst);
void* lst83802 = prim_cdr(lst);
void* x8354083803 = apply_prim_hash(lst83802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8364383801);
arg_buffer[2] = x8354083803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8364383801))[0]);
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
void* _83961 = arg_buffer[1];
//reading env and args
void* kont83645 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8354183804 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83645);
arg_buffer[2] = x8354183804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83645))[0]);
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
void* _83962 = arg_buffer[1];
//reading env and args
void* kont83646 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8354283805 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83646);
arg_buffer[2] = x8354283805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83646))[0]);
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
void* _83963 = arg_buffer[1];
//reading env and args
void* kont83647 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8354383806 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83647);
arg_buffer[2] = x8354383806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83647))[0]);
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
void* _83964 = arg_buffer[1];
//reading env and args
void* kont83648 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8354483807 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83648);
arg_buffer[2] = x8354483807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83648))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam83965_fptr() // lam83965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83966 = arg_buffer[1];
//reading env and args
void* a8355083814 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8354583808 = (decode_clo(env83966))[4];
//not do dummy comment
void* _u42 = (decode_clo(env83966))[3];
//not do dummy comment
void* a8354683809 = (decode_clo(env83966))[2];
//not do dummy comment
void* kont83649 = (decode_clo(env83966))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont83649;
arg_buffer[3] = a8354583808;
arg_buffer[4] = a8354683809;
arg_buffer[5] = a8355083814;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83965 = encode_clo(alloc_clo(lam83965_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83972 = arg_buffer[1];
//reading env and args
void* kont83649 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar85106 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85106, "1", 10);
void* a8354583808 = encode_mpz(mpzvar85106);
mpz_t* mpzvar85107 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85107, "2", 10);
void* a8354683809 = encode_mpz(mpzvar85107);
mpz_t* mpzvar85108 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85108, "3", 10);
void* a8354783810 = encode_mpz(mpzvar85108);
mpz_t* mpzvar85109 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85109, "4", 10);
void* a8354883811 = encode_mpz(mpzvar85109);
mpz_t* mpzvar85110 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85110, "5", 10);
void* a8354983812 = encode_mpz(mpzvar85110);

//creating new closure instance
void** clo85112 = alloc_clo(lam83965_fptr, 4);

//setting env list
clo85112[1] = kont83649;
clo85112[2] = a8354683809;
clo85112[3] = _u42;
clo85112[4] = a8354583808;
void* f8365083813 = encode_clo(clo85112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = f8365083813;
arg_buffer[3] = a8354783810;
arg_buffer[4] = a8354883811;
arg_buffer[5] = a8354983812;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam83973_fptr() // lam83973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env83974 = arg_buffer[1];
//reading env and args
void* x8355183816 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont83651 = (decode_clo(env83974))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont83651);
arg_buffer[2] = x8355183816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont83651))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam83973 = encode_clo(alloc_clo(lam83973_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _83975 = arg_buffer[1];
//reading env and args
void* kont83651 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo85114 = alloc_clo(lam83973_fptr, 1);

//setting env list
clo85114[1] = kont83651;
void* f8365283815 = encode_clo(clo85114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8365283815;
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

