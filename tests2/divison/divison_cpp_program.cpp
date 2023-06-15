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
void* _9777 = arg_buffer[1];
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

void* kont95189618 = prim_car(lst);
void* lst9619 = prim_cdr(lst);
void* x94329620 = apply_prim__u43(lst9619);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95189618);
arg_buffer[2] = x94329620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95189618))[0]);
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
void* _9778 = arg_buffer[1];
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

void* kont95209621 = prim_car(lst);
void* lst9622 = prim_cdr(lst);
void* x94339623 = apply_prim__u45(lst9622);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95209621);
arg_buffer[2] = x94339623;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95209621))[0]);
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
void* _9779 = arg_buffer[1];
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

void* kont95229624 = prim_car(lst);
void* lst9625 = prim_cdr(lst);
void* x94349626 = apply_prim__u42(lst9625);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95229624);
arg_buffer[2] = x94349626;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95229624))[0]);
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
void* _9780 = arg_buffer[1];
//reading env and args
void* kont9524 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x94359627 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9524);
arg_buffer[2] = x94359627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9524))[0]);
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

void* kont95259628 = prim_car(lst);
void* lst9629 = prim_cdr(lst);
void* x94369630 = apply_prim__u47(lst9629);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95259628);
arg_buffer[2] = x94369630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95259628))[0]);
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

void* kont95279631 = prim_car(lst);
void* lst9632 = prim_cdr(lst);
void* x94379633 = apply_prim__u61(lst9632);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95279631);
arg_buffer[2] = x94379633;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95279631))[0]);
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

void* kont95299634 = prim_car(lst);
void* lst9635 = prim_cdr(lst);
void* x94389636 = apply_prim__u62(lst9635);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95299634);
arg_buffer[2] = x94389636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95299634))[0]);
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
void* _9784 = arg_buffer[1];
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

void* kont95319637 = prim_car(lst);
void* lst9638 = prim_cdr(lst);
void* x94399639 = apply_prim__u60(lst9638);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95319637);
arg_buffer[2] = x94399639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95319637))[0]);
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

void* kont95339640 = prim_car(lst);
void* lst9641 = prim_cdr(lst);
void* x94409642 = apply_prim__u60_u61(lst9641);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95339640);
arg_buffer[2] = x94409642;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95339640))[0]);
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

void* kont95359643 = prim_car(lst);
void* lst9644 = prim_cdr(lst);
void* x94419645 = apply_prim__u62_u61(lst9644);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95359643);
arg_buffer[2] = x94419645;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95359643))[0]);
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
void* _9787 = arg_buffer[1];
//reading env and args
void* kont9537 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x94429646 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9537);
arg_buffer[2] = x94429646;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9537))[0]);
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
void* _9788 = arg_buffer[1];
//reading env and args
void* kont9538 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x94439647 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9538);
arg_buffer[2] = x94439647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9538))[0]);
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
void* _9789 = arg_buffer[1];
//reading env and args
void* kont9539 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x94449648 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9539);
arg_buffer[2] = x94449648;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9539))[0]);
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
void* _9790 = arg_buffer[1];
//reading env and args
void* kont9540 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x94459649 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9540);
arg_buffer[2] = x94459649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9540))[0]);
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
void* _9791 = arg_buffer[1];
//reading env and args
void* kont9541 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x94469650 = prim_car(lst);

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

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9792 = arg_buffer[1];
//reading env and args
void* kont9542 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x94479651 = prim_cdr(lst);

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

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam9793_fptr() // lam9793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9794 = arg_buffer[1];
//reading env and args
void* a94509655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94489652 = (decode_clo(env9794))[3];
//not do dummy comment
void* kont9543 = (decode_clo(env9794))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9794))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9543;
arg_buffer[3] = a94489652;
arg_buffer[4] = a94509655;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9793 = encode_clo(alloc_clo(lam9793_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9797 = arg_buffer[1];
//reading env and args
void* kont9543 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10471 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10471, "0", 10);
void* a94489652 = encode_mpz(mpzvar10471);
mpz_t* mpzvar10472 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10472, "2", 10);
void* a94499653 = encode_mpz(mpzvar10472);

//creating new closure instance
void** clo10474 = alloc_clo(lam9793_fptr, 3);

//setting env list
clo10474[1] = equal_u63;
clo10474[2] = kont9543;
clo10474[3] = a94489652;
void* f95449654 = encode_clo(clo10474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f95449654;
arg_buffer[3] = x;
arg_buffer[4] = a94499653;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam9798_fptr() // lam9798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9799 = arg_buffer[1];
//reading env and args
void* a94539659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94519656 = (decode_clo(env9799))[3];
//not do dummy comment
void* kont9545 = (decode_clo(env9799))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9799))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9545;
arg_buffer[3] = a94519656;
arg_buffer[4] = a94539659;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9798 = encode_clo(alloc_clo(lam9798_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9802 = arg_buffer[1];
//reading env and args
void* kont9545 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10475 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10475, "1", 10);
void* a94519656 = encode_mpz(mpzvar10475);
mpz_t* mpzvar10476 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10476, "2", 10);
void* a94529657 = encode_mpz(mpzvar10476);

//creating new closure instance
void** clo10478 = alloc_clo(lam9798_fptr, 3);

//setting env list
clo10478[1] = equal_u63;
clo10478[2] = kont9545;
clo10478[3] = a94519656;
void* f95469658 = encode_clo(clo10478);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f95469658;
arg_buffer[3] = x;
arg_buffer[4] = a94529657;
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
void* _9803 = arg_buffer[1];
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

void* kont95479660 = prim_car(x);
void* x9661 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont95479660);
arg_buffer[2] = x9661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont95479660))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam9806_fptr() // lam9806 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9807 = arg_buffer[1];
//reading env and args
void* a94599671 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env9807))[3];
//not do dummy comment
void* x = (decode_clo(env9807))[2];
//not do dummy comment
void* kont9549 = (decode_clo(env9807))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont9549;
arg_buffer[3] = x;
arg_buffer[4] = a94599671;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9806 = encode_clo(alloc_clo(lam9806_fptr, 0));

void* lam9808_fptr() // lam9808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9809 = arg_buffer[1];
//reading env and args
void* a94579668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9809))[5];
//not do dummy comment
void* lst = (decode_clo(env9809))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9809))[3];
//not do dummy comment
void* x = (decode_clo(env9809))[2];
//not do dummy comment
void* kont9549 = (decode_clo(env9809))[1];

//if-clause
bool if_guard10479 = is_true(a94579668);
if(if_guard10479)
{
void* x94589669 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9549);
arg_buffer[2] = x94589669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9549))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10481 = alloc_clo(lam9806_fptr, 3);

//setting env list
clo10481[1] = kont9549;
clo10481[2] = x;
clo10481[3] = member_u63;
void* f95509670 = encode_clo(clo10481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95509670;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9808 = encode_clo(alloc_clo(lam9808_fptr, 0));

void* lam9810_fptr() // lam9810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9811 = arg_buffer[1];
//reading env and args
void* a94569666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9811))[6];
//not do dummy comment
void* lst = (decode_clo(env9811))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env9811))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9811))[3];
//not do dummy comment
void* x = (decode_clo(env9811))[2];
//not do dummy comment
void* kont9549 = (decode_clo(env9811))[1];

//creating new closure instance
void** clo10483 = alloc_clo(lam9808_fptr, 5);

//setting env list
clo10483[1] = kont9549;
clo10483[2] = x;
clo10483[3] = member_u63;
clo10483[4] = lst;
clo10483[5] = cdr;
void* f95519667 = encode_clo(clo10483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f95519667;
arg_buffer[3] = a94569666;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
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
void* a94549663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9813))[7];
//not do dummy comment
void* lst = (decode_clo(env9813))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env9813))[5];
//not do dummy comment
void* car = (decode_clo(env9813))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9813))[3];
//not do dummy comment
void* x = (decode_clo(env9813))[2];
//not do dummy comment
void* kont9549 = (decode_clo(env9813))[1];

//if-clause
bool if_guard10484 = is_true(a94549663);
if(if_guard10484)
{
void* x94559664 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9549);
arg_buffer[2] = x94559664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9549))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10486 = alloc_clo(lam9810_fptr, 6);

//setting env list
clo10486[1] = kont9549;
clo10486[2] = x;
clo10486[3] = member_u63;
clo10486[4] = equal_u63;
clo10486[5] = lst;
clo10486[6] = cdr;
void* f95529665 = encode_clo(clo10486);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95529665;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9812 = encode_clo(alloc_clo(lam9812_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9814 = arg_buffer[1];
//reading env and args
void* kont9549 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10488 = alloc_clo(lam9812_fptr, 7);

//setting env list
clo10488[1] = kont9549;
clo10488[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo10488[3] = member_u63;
clo10488[4] = car;
clo10488[5] = equal_u63;
clo10488[6] = lst;
clo10488[7] = cdr;
void* f95539662 = encode_clo(clo10488);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95539662;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam9815_fptr() // lam9815 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9816 = arg_buffer[1];
//reading env and args
void* a94639679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9554 = (decode_clo(env9816))[4];
//not do dummy comment
void* fun = (decode_clo(env9816))[3];
//not do dummy comment
void* a94629677 = (decode_clo(env9816))[2];
//not do dummy comment
void* foldl = (decode_clo(env9816))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont9554;
arg_buffer[3] = fun;
arg_buffer[4] = a94629677;
arg_buffer[5] = a94639679;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9815 = encode_clo(alloc_clo(lam9815_fptr, 0));

void* lam9817_fptr() // lam9817 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9818 = arg_buffer[1];
//reading env and args
void* a94629677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9818))[5];
//not do dummy comment
void* fun = (decode_clo(env9818))[4];
//not do dummy comment
void* foldl = (decode_clo(env9818))[3];
//not do dummy comment
void* kont9554 = (decode_clo(env9818))[2];
//not do dummy comment
void* cdr = (decode_clo(env9818))[1];

//creating new closure instance
void** clo10490 = alloc_clo(lam9815_fptr, 4);

//setting env list
clo10490[1] = foldl;
clo10490[2] = a94629677;
clo10490[3] = fun;
clo10490[4] = kont9554;
void* f95559678 = encode_clo(clo10490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95559678;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9817 = encode_clo(alloc_clo(lam9817_fptr, 0));

void* lam9819_fptr() // lam9819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9820 = arg_buffer[1];
//reading env and args
void* a94619675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9820))[6];
//not do dummy comment
void* fun = (decode_clo(env9820))[5];
//not do dummy comment
void* acc = (decode_clo(env9820))[4];
//not do dummy comment
void* foldl = (decode_clo(env9820))[3];
//not do dummy comment
void* kont9554 = (decode_clo(env9820))[2];
//not do dummy comment
void* cdr = (decode_clo(env9820))[1];

//creating new closure instance
void** clo10492 = alloc_clo(lam9817_fptr, 5);

//setting env list
clo10492[1] = cdr;
clo10492[2] = kont9554;
clo10492[3] = foldl;
clo10492[4] = fun;
clo10492[5] = lst;
void* f95569676 = encode_clo(clo10492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f95569676;
arg_buffer[3] = a94619675;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a94609673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9822))[7];
//not do dummy comment
void* fun = (decode_clo(env9822))[6];
//not do dummy comment
void* acc = (decode_clo(env9822))[5];
//not do dummy comment
void* car = (decode_clo(env9822))[4];
//not do dummy comment
void* foldl = (decode_clo(env9822))[3];
//not do dummy comment
void* kont9554 = (decode_clo(env9822))[2];
//not do dummy comment
void* cdr = (decode_clo(env9822))[1];

//if-clause
bool if_guard10493 = is_true(a94609673);
if(if_guard10493)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9554);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9554))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10495 = alloc_clo(lam9819_fptr, 6);

//setting env list
clo10495[1] = cdr;
clo10495[2] = kont9554;
clo10495[3] = foldl;
clo10495[4] = acc;
clo10495[5] = fun;
clo10495[6] = lst;
void* f95579674 = encode_clo(clo10495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95579674;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9821 = encode_clo(alloc_clo(lam9821_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9823 = arg_buffer[1];
//reading env and args
void* kont9554 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo10497 = alloc_clo(lam9821_fptr, 7);

//setting env list
clo10497[1] = cdr;
clo10497[2] = kont9554;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo10497[3] = foldl;
clo10497[4] = car;
clo10497[5] = acc;
clo10497[6] = fun;
clo10497[7] = lst;
void* f95589672 = encode_clo(clo10497);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95589672;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam9824_fptr() // lam9824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9825 = arg_buffer[1];
//reading env and args
void* a94679687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94659683 = (decode_clo(env9825))[3];
//not do dummy comment
void* kont9559 = (decode_clo(env9825))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9825))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9559;
arg_buffer[3] = a94659683;
arg_buffer[4] = a94679687;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9824 = encode_clo(alloc_clo(lam9824_fptr, 0));

void* lam9826_fptr() // lam9826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9827 = arg_buffer[1];
//reading env and args
void* a94669685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94659683 = (decode_clo(env9827))[5];
//not do dummy comment
void* kont9559 = (decode_clo(env9827))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9827))[3];
//not do dummy comment
void* lst2 = (decode_clo(env9827))[2];
//not do dummy comment
void* cons = (decode_clo(env9827))[1];

//creating new closure instance
void** clo10499 = alloc_clo(lam9824_fptr, 3);

//setting env list
clo10499[1] = reverse_u45helper;
clo10499[2] = kont9559;
clo10499[3] = a94659683;
void* f95609686 = encode_clo(clo10499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f95609686;
arg_buffer[3] = a94669685;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9826 = encode_clo(alloc_clo(lam9826_fptr, 0));

void* lam9828_fptr() // lam9828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9829 = arg_buffer[1];
//reading env and args
void* a94659683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9829))[6];
//not do dummy comment
void* kont9559 = (decode_clo(env9829))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9829))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9829))[3];
//not do dummy comment
void* car = (decode_clo(env9829))[2];
//not do dummy comment
void* cons = (decode_clo(env9829))[1];

//creating new closure instance
void** clo10501 = alloc_clo(lam9826_fptr, 5);

//setting env list
clo10501[1] = cons;
clo10501[2] = lst2;
clo10501[3] = reverse_u45helper;
clo10501[4] = kont9559;
clo10501[5] = a94659683;
void* f95619684 = encode_clo(clo10501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95619684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a94649681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9831))[7];
//not do dummy comment
void* lst = (decode_clo(env9831))[6];
//not do dummy comment
void* kont9559 = (decode_clo(env9831))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9831))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9831))[3];
//not do dummy comment
void* car = (decode_clo(env9831))[2];
//not do dummy comment
void* cons = (decode_clo(env9831))[1];

//if-clause
bool if_guard10502 = is_true(a94649681);
if(if_guard10502)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9559);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9559))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10504 = alloc_clo(lam9828_fptr, 6);

//setting env list
clo10504[1] = cons;
clo10504[2] = car;
clo10504[3] = lst2;
clo10504[4] = reverse_u45helper;
clo10504[5] = kont9559;
clo10504[6] = lst;
void* f95629682 = encode_clo(clo10504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95629682;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9830 = encode_clo(alloc_clo(lam9830_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9832 = arg_buffer[1];
//reading env and args
void* kont9559 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10506 = alloc_clo(lam9830_fptr, 7);

//setting env list
clo10506[1] = cons;
clo10506[2] = car;
clo10506[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo10506[4] = reverse_u45helper;
clo10506[5] = kont9559;
clo10506[6] = lst;
clo10506[7] = cdr;
void* f95639680 = encode_clo(clo10506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95639680;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam9833_fptr() // lam9833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9834 = arg_buffer[1];
//reading env and args
void* a94689689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9834))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9834))[2];
//not do dummy comment
void* kont9564 = (decode_clo(env9834))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9564;
arg_buffer[3] = lst;
arg_buffer[4] = a94689689;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9833 = encode_clo(alloc_clo(lam9833_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9835 = arg_buffer[1];
//reading env and args
void* kont9564 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10508 = alloc_clo(lam9833_fptr, 3);

//setting env list
clo10508[1] = kont9564;
clo10508[2] = reverse_u45helper;
clo10508[3] = lst;
void* f95659688 = encode_clo(clo10508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f95659688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam9836_fptr() // lam9836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9837 = arg_buffer[1];
//reading env and args
void* x94719694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9566 = (decode_clo(env9837))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9566);
arg_buffer[2] = x94719694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9566))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9836 = encode_clo(alloc_clo(lam9836_fptr, 0));

void* lam9838_fptr() // lam9838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9839 = arg_buffer[1];
//reading env and args
void* a94769703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94749699 = (decode_clo(env9839))[4];
//not do dummy comment
void* a94729696 = (decode_clo(env9839))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9839))[2];
//not do dummy comment
void* kont9566 = (decode_clo(env9839))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9566;
arg_buffer[3] = a94729696;
arg_buffer[4] = a94749699;
arg_buffer[5] = a94769703;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9838 = encode_clo(alloc_clo(lam9838_fptr, 0));

void* lam9840_fptr() // lam9840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9841 = arg_buffer[1];
//reading env and args
void* a94759701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94749699 = (decode_clo(env9841))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env9841))[5];
//not do dummy comment
void* kont9566 = (decode_clo(env9841))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9841))[3];
//not do dummy comment
void* a94729696 = (decode_clo(env9841))[2];
//not do dummy comment
void* cons = (decode_clo(env9841))[1];

//creating new closure instance
void** clo10510 = alloc_clo(lam9838_fptr, 4);

//setting env list
clo10510[1] = kont9566;
clo10510[2] = take_u45helper;
clo10510[3] = a94729696;
clo10510[4] = a94749699;
void* f95689702 = encode_clo(clo10510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f95689702;
arg_buffer[3] = a94759701;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a94749699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9843))[7];
//not do dummy comment
void* car = (decode_clo(env9843))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env9843))[5];
//not do dummy comment
void* kont9566 = (decode_clo(env9843))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9843))[3];
//not do dummy comment
void* a94729696 = (decode_clo(env9843))[2];
//not do dummy comment
void* cons = (decode_clo(env9843))[1];

//creating new closure instance
void** clo10512 = alloc_clo(lam9840_fptr, 6);

//setting env list
clo10512[1] = cons;
clo10512[2] = a94729696;
clo10512[3] = lst2;
clo10512[4] = kont9566;
clo10512[5] = take_u45helper;
clo10512[6] = a94749699;
void* f95699700 = encode_clo(clo10512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95699700;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9842 = encode_clo(alloc_clo(lam9842_fptr, 0));

void* lam9845_fptr() // lam9845 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9846 = arg_buffer[1];
//reading env and args
void* a94729696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9846))[8];
//not do dummy comment
void* cons = (decode_clo(env9846))[7];
//not do dummy comment
void* _u45 = (decode_clo(env9846))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env9846))[5];
//not do dummy comment
void* kont9566 = (decode_clo(env9846))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9846))[3];
//not do dummy comment
void* n = (decode_clo(env9846))[2];
//not do dummy comment
void* car = (decode_clo(env9846))[1];
mpz_t* mpzvar10513 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10513, "1", 10);
void* a94739697 = encode_mpz(mpzvar10513);

//creating new closure instance
void** clo10515 = alloc_clo(lam9842_fptr, 7);

//setting env list
clo10515[1] = cons;
clo10515[2] = a94729696;
clo10515[3] = lst2;
clo10515[4] = kont9566;
clo10515[5] = take_u45helper;
clo10515[6] = car;
clo10515[7] = lst;
void* f95709698 = encode_clo(clo10515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f95709698;
arg_buffer[3] = n;
arg_buffer[4] = a94739697;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9845 = encode_clo(alloc_clo(lam9845_fptr, 0));

void* lam9847_fptr() // lam9847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9848 = arg_buffer[1];
//reading env and args
void* a94709692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9848))[10];
//not do dummy comment
void* lst = (decode_clo(env9848))[9];
//not do dummy comment
void* reverse = (decode_clo(env9848))[8];
//not do dummy comment
void* cons = (decode_clo(env9848))[7];
//not do dummy comment
void* _u45 = (decode_clo(env9848))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env9848))[5];
//not do dummy comment
void* kont9566 = (decode_clo(env9848))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9848))[3];
//not do dummy comment
void* n = (decode_clo(env9848))[2];
//not do dummy comment
void* car = (decode_clo(env9848))[1];

//if-clause
bool if_guard10516 = is_true(a94709692);
if(if_guard10516)
{

//creating new closure instance
void** clo10518 = alloc_clo(lam9836_fptr, 1);

//setting env list
clo10518[1] = kont9566;
void* f95679693 = encode_clo(clo10518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f95679693;
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
void** clo10520 = alloc_clo(lam9845_fptr, 8);

//setting env list
clo10520[1] = car;
clo10520[2] = n;
clo10520[3] = lst2;
clo10520[4] = kont9566;
clo10520[5] = take_u45helper;
clo10520[6] = _u45;
clo10520[7] = cons;
clo10520[8] = lst;
void* f95719695 = encode_clo(clo10520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95719695;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9847 = encode_clo(alloc_clo(lam9847_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9850 = arg_buffer[1];
//reading env and args
void* kont9566 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar10521 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10521, "0", 10);
void* a94699690 = encode_mpz(mpzvar10521);

//creating new closure instance
void** clo10523 = alloc_clo(lam9847_fptr, 10);

//setting env list
clo10523[1] = car;
clo10523[2] = n;
clo10523[3] = lst2;
clo10523[4] = kont9566;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo10523[5] = take_u45helper;
clo10523[6] = _u45;
clo10523[7] = cons;
clo10523[8] = reverse;
clo10523[9] = lst;
clo10523[10] = cdr;
void* f95729691 = encode_clo(clo10523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f95729691;
arg_buffer[3] = n;
arg_buffer[4] = a94699690;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam9851_fptr() // lam9851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9852 = arg_buffer[1];
//reading env and args
void* a94779705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9573 = (decode_clo(env9852))[4];
//not do dummy comment
void* lst = (decode_clo(env9852))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9852))[2];
//not do dummy comment
void* n = (decode_clo(env9852))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9573;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a94779705;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9851 = encode_clo(alloc_clo(lam9851_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9853 = arg_buffer[1];
//reading env and args
void* kont9573 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10525 = alloc_clo(lam9851_fptr, 4);

//setting env list
clo10525[1] = n;
clo10525[2] = take_u45helper;
clo10525[3] = lst;
clo10525[4] = kont9573;
void* f95749704 = encode_clo(clo10525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f95749704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam9855_fptr() // lam9855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9856 = arg_buffer[1];
//reading env and args
void* a94829713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9575 = (decode_clo(env9856))[3];
//not do dummy comment
void* _u43 = (decode_clo(env9856))[2];
//not do dummy comment
void* a94809709 = (decode_clo(env9856))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont9575;
arg_buffer[3] = a94809709;
arg_buffer[4] = a94829713;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9855 = encode_clo(alloc_clo(lam9855_fptr, 0));

void* lam9857_fptr() // lam9857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9858 = arg_buffer[1];
//reading env and args
void* a94819711 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env9858))[4];
//not do dummy comment
void* a94809709 = (decode_clo(env9858))[3];
//not do dummy comment
void* kont9575 = (decode_clo(env9858))[2];
//not do dummy comment
void* length = (decode_clo(env9858))[1];

//creating new closure instance
void** clo10527 = alloc_clo(lam9855_fptr, 3);

//setting env list
clo10527[1] = a94809709;
clo10527[2] = _u43;
clo10527[3] = kont9575;
void* f95769712 = encode_clo(clo10527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f95769712;
arg_buffer[3] = a94819711;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9857 = encode_clo(alloc_clo(lam9857_fptr, 0));

void* lam9860_fptr() // lam9860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9861 = arg_buffer[1];
//reading env and args
void* a94789707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9861))[5];
//not do dummy comment
void* lst = (decode_clo(env9861))[4];
//not do dummy comment
void* _u43 = (decode_clo(env9861))[3];
//not do dummy comment
void* kont9575 = (decode_clo(env9861))[2];
//not do dummy comment
void* length = (decode_clo(env9861))[1];

//if-clause
bool if_guard10528 = is_true(a94789707);
if(if_guard10528)
{
mpz_t* mpzvar10529 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10529, "0", 10);
void* x94799708 = encode_mpz(mpzvar10529);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9575);
arg_buffer[2] = x94799708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9575))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar10530 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10530, "1", 10);
void* a94809709 = encode_mpz(mpzvar10530);

//creating new closure instance
void** clo10532 = alloc_clo(lam9857_fptr, 4);

//setting env list
clo10532[1] = length;
clo10532[2] = kont9575;
clo10532[3] = a94809709;
clo10532[4] = _u43;
void* f95779710 = encode_clo(clo10532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95779710;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9860 = encode_clo(alloc_clo(lam9860_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9862 = arg_buffer[1];
//reading env and args
void* kont9575 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10534 = alloc_clo(lam9860_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo10534[1] = length;
clo10534[2] = kont9575;
clo10534[3] = _u43;
clo10534[4] = lst;
clo10534[5] = cdr;
void* f95789706 = encode_clo(clo10534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95789706;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam9863_fptr() // lam9863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9864 = arg_buffer[1];
//reading env and args
void* x94849717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9579 = (decode_clo(env9864))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9579);
arg_buffer[2] = x94849717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9579))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9863 = encode_clo(alloc_clo(lam9863_fptr, 0));

void* lam9865_fptr() // lam9865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9866 = arg_buffer[1];
//reading env and args
void* a94889725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94869721 = (decode_clo(env9866))[3];
//not do dummy comment
void* kont9579 = (decode_clo(env9866))[2];
//not do dummy comment
void* cons = (decode_clo(env9866))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9579;
arg_buffer[3] = a94869721;
arg_buffer[4] = a94889725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9865 = encode_clo(alloc_clo(lam9865_fptr, 0));

void* lam9867_fptr() // lam9867 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9868 = arg_buffer[1];
//reading env and args
void* a94879723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env9868))[5];
//not do dummy comment
void* a94869721 = (decode_clo(env9868))[4];
//not do dummy comment
void* kont9579 = (decode_clo(env9868))[3];
//not do dummy comment
void* proc = (decode_clo(env9868))[2];
//not do dummy comment
void* cons = (decode_clo(env9868))[1];

//creating new closure instance
void** clo10536 = alloc_clo(lam9865_fptr, 3);

//setting env list
clo10536[1] = cons;
clo10536[2] = kont9579;
clo10536[3] = a94869721;
void* f95819724 = encode_clo(clo10536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f95819724;
arg_buffer[3] = proc;
arg_buffer[4] = a94879723;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a94869721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9870))[6];
//not do dummy comment
void* lst = (decode_clo(env9870))[5];
//not do dummy comment
void* map = (decode_clo(env9870))[4];
//not do dummy comment
void* kont9579 = (decode_clo(env9870))[3];
//not do dummy comment
void* proc = (decode_clo(env9870))[2];
//not do dummy comment
void* cons = (decode_clo(env9870))[1];

//creating new closure instance
void** clo10538 = alloc_clo(lam9867_fptr, 5);

//setting env list
clo10538[1] = cons;
clo10538[2] = proc;
clo10538[3] = kont9579;
clo10538[4] = a94869721;
clo10538[5] = map;
void* f95829722 = encode_clo(clo10538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95829722;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a94859719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9872))[6];
//not do dummy comment
void* lst = (decode_clo(env9872))[5];
//not do dummy comment
void* map = (decode_clo(env9872))[4];
//not do dummy comment
void* kont9579 = (decode_clo(env9872))[3];
//not do dummy comment
void* proc = (decode_clo(env9872))[2];
//not do dummy comment
void* cons = (decode_clo(env9872))[1];

//creating new closure instance
void** clo10540 = alloc_clo(lam9869_fptr, 6);

//setting env list
clo10540[1] = cons;
clo10540[2] = proc;
clo10540[3] = kont9579;
clo10540[4] = map;
clo10540[5] = lst;
clo10540[6] = cdr;
void* f95839720 = encode_clo(clo10540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f95839720;
arg_buffer[3] = a94859719;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a94839715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9874))[8];
//not do dummy comment
void* map = (decode_clo(env9874))[7];
//not do dummy comment
void* kont9579 = (decode_clo(env9874))[6];
//not do dummy comment
void* proc = (decode_clo(env9874))[5];
//not do dummy comment
void* car = (decode_clo(env9874))[4];
//not do dummy comment
void* cons = (decode_clo(env9874))[3];
//not do dummy comment
void* list = (decode_clo(env9874))[2];
//not do dummy comment
void* cdr = (decode_clo(env9874))[1];

//if-clause
bool if_guard10541 = is_true(a94839715);
if(if_guard10541)
{

//creating new closure instance
void** clo10543 = alloc_clo(lam9863_fptr, 1);

//setting env list
clo10543[1] = kont9579;
void* f95809716 = encode_clo(clo10543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f95809716;
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
void** clo10545 = alloc_clo(lam9871_fptr, 6);

//setting env list
clo10545[1] = cons;
clo10545[2] = proc;
clo10545[3] = kont9579;
clo10545[4] = map;
clo10545[5] = lst;
clo10545[6] = cdr;
void* f95849718 = encode_clo(clo10545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95849718;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9873 = encode_clo(alloc_clo(lam9873_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9875 = arg_buffer[1];
//reading env and args
void* kont9579 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10547 = alloc_clo(lam9873_fptr, 8);

//setting env list
clo10547[1] = cdr;
clo10547[2] = list;
clo10547[3] = cons;
clo10547[4] = car;
clo10547[5] = proc;
clo10547[6] = kont9579;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo10547[7] = map;
clo10547[8] = lst;
void* f95859714 = encode_clo(clo10547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95859714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam9876_fptr() // lam9876 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9877 = arg_buffer[1];
//reading env and args
void* x94909729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9586 = (decode_clo(env9877))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9586);
arg_buffer[2] = x94909729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9586))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9876 = encode_clo(alloc_clo(lam9876_fptr, 0));

void* lam9878_fptr() // lam9878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9879 = arg_buffer[1];
//reading env and args
void* a94959739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9586 = (decode_clo(env9879))[3];
//not do dummy comment
void* a94939735 = (decode_clo(env9879))[2];
//not do dummy comment
void* cons = (decode_clo(env9879))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9586;
arg_buffer[3] = a94939735;
arg_buffer[4] = a94959739;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9878 = encode_clo(alloc_clo(lam9878_fptr, 0));

void* lam9880_fptr() // lam9880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9881 = arg_buffer[1];
//reading env and args
void* a94949737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9586 = (decode_clo(env9881))[5];
//not do dummy comment
void* a94939735 = (decode_clo(env9881))[4];
//not do dummy comment
void* op = (decode_clo(env9881))[3];
//not do dummy comment
void* filter = (decode_clo(env9881))[2];
//not do dummy comment
void* cons = (decode_clo(env9881))[1];

//creating new closure instance
void** clo10549 = alloc_clo(lam9878_fptr, 3);

//setting env list
clo10549[1] = cons;
clo10549[2] = a94939735;
clo10549[3] = kont9586;
void* f95889738 = encode_clo(clo10549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f95889738;
arg_buffer[3] = op;
arg_buffer[4] = a94949737;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a94939735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9883))[6];
//not do dummy comment
void* op = (decode_clo(env9883))[5];
//not do dummy comment
void* filter = (decode_clo(env9883))[4];
//not do dummy comment
void* cons = (decode_clo(env9883))[3];
//not do dummy comment
void* kont9586 = (decode_clo(env9883))[2];
//not do dummy comment
void* cdr = (decode_clo(env9883))[1];

//creating new closure instance
void** clo10551 = alloc_clo(lam9880_fptr, 5);

//setting env list
clo10551[1] = cons;
clo10551[2] = filter;
clo10551[3] = op;
clo10551[4] = a94939735;
clo10551[5] = kont9586;
void* f95899736 = encode_clo(clo10551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95899736;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a94969741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9586 = (decode_clo(env9885))[3];
//not do dummy comment
void* op = (decode_clo(env9885))[2];
//not do dummy comment
void* filter = (decode_clo(env9885))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont9586;
arg_buffer[3] = op;
arg_buffer[4] = a94969741;
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
void* a94929733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9887))[7];
//not do dummy comment
void* op = (decode_clo(env9887))[6];
//not do dummy comment
void* cons = (decode_clo(env9887))[5];
//not do dummy comment
void* kont9586 = (decode_clo(env9887))[4];
//not do dummy comment
void* cdr = (decode_clo(env9887))[3];
//not do dummy comment
void* filter = (decode_clo(env9887))[2];
//not do dummy comment
void* car = (decode_clo(env9887))[1];

//if-clause
bool if_guard10552 = is_true(a94929733);
if(if_guard10552)
{

//creating new closure instance
void** clo10554 = alloc_clo(lam9882_fptr, 6);

//setting env list
clo10554[1] = cdr;
clo10554[2] = kont9586;
clo10554[3] = cons;
clo10554[4] = filter;
clo10554[5] = op;
clo10554[6] = lst;
void* f95909734 = encode_clo(clo10554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95909734;
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
void** clo10556 = alloc_clo(lam9884_fptr, 3);

//setting env list
clo10556[1] = filter;
clo10556[2] = op;
clo10556[3] = kont9586;
void* f95919740 = encode_clo(clo10556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95919740;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9886 = encode_clo(alloc_clo(lam9886_fptr, 0));

void* lam9888_fptr() // lam9888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9889 = arg_buffer[1];
//reading env and args
void* a94919731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9889))[7];
//not do dummy comment
void* op = (decode_clo(env9889))[6];
//not do dummy comment
void* cons = (decode_clo(env9889))[5];
//not do dummy comment
void* kont9586 = (decode_clo(env9889))[4];
//not do dummy comment
void* cdr = (decode_clo(env9889))[3];
//not do dummy comment
void* filter = (decode_clo(env9889))[2];
//not do dummy comment
void* car = (decode_clo(env9889))[1];

//creating new closure instance
void** clo10558 = alloc_clo(lam9886_fptr, 7);

//setting env list
clo10558[1] = car;
clo10558[2] = filter;
clo10558[3] = cdr;
clo10558[4] = kont9586;
clo10558[5] = cons;
clo10558[6] = op;
clo10558[7] = lst;
void* f95929732 = encode_clo(clo10558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f95929732;
arg_buffer[3] = a94919731;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a94899727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9891))[8];
//not do dummy comment
void* op = (decode_clo(env9891))[7];
//not do dummy comment
void* cons = (decode_clo(env9891))[6];
//not do dummy comment
void* list = (decode_clo(env9891))[5];
//not do dummy comment
void* kont9586 = (decode_clo(env9891))[4];
//not do dummy comment
void* cdr = (decode_clo(env9891))[3];
//not do dummy comment
void* filter = (decode_clo(env9891))[2];
//not do dummy comment
void* car = (decode_clo(env9891))[1];

//if-clause
bool if_guard10559 = is_true(a94899727);
if(if_guard10559)
{

//creating new closure instance
void** clo10561 = alloc_clo(lam9876_fptr, 1);

//setting env list
clo10561[1] = kont9586;
void* f95879728 = encode_clo(clo10561);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f95879728;
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
void** clo10563 = alloc_clo(lam9888_fptr, 7);

//setting env list
clo10563[1] = car;
clo10563[2] = filter;
clo10563[3] = cdr;
clo10563[4] = kont9586;
clo10563[5] = cons;
clo10563[6] = op;
clo10563[7] = lst;
void* f95939730 = encode_clo(clo10563);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f95939730;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9890 = encode_clo(alloc_clo(lam9890_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9892 = arg_buffer[1];
//reading env and args
void* kont9586 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10565 = alloc_clo(lam9890_fptr, 8);

//setting env list
clo10565[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo10565[2] = filter;
clo10565[3] = cdr;
clo10565[4] = kont9586;
clo10565[5] = list;
clo10565[6] = cons;
clo10565[7] = op;
clo10565[8] = lst;
void* f95949726 = encode_clo(clo10565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f95949726;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam9893_fptr() // lam9893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9894 = arg_buffer[1];
//reading env and args
void* a95019749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a94999746 = (decode_clo(env9894))[3];
//not do dummy comment
void* drop = (decode_clo(env9894))[2];
//not do dummy comment
void* kont9595 = (decode_clo(env9894))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont9595;
arg_buffer[3] = a94999746;
arg_buffer[4] = a95019749;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9893 = encode_clo(alloc_clo(lam9893_fptr, 0));

void* lam9896_fptr() // lam9896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9897 = arg_buffer[1];
//reading env and args
void* a94999746 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env9897))[4];
//not do dummy comment
void* kont9595 = (decode_clo(env9897))[3];
//not do dummy comment
void* n = (decode_clo(env9897))[2];
//not do dummy comment
void* _u45 = (decode_clo(env9897))[1];
mpz_t* mpzvar10566 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10566, "1", 10);
void* a95009747 = encode_mpz(mpzvar10566);

//creating new closure instance
void** clo10568 = alloc_clo(lam9893_fptr, 3);

//setting env list
clo10568[1] = kont9595;
clo10568[2] = drop;
clo10568[3] = a94999746;
void* f95969748 = encode_clo(clo10568);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f95969748;
arg_buffer[3] = n;
arg_buffer[4] = a95009747;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9896 = encode_clo(alloc_clo(lam9896_fptr, 0));

void* lam9898_fptr() // lam9898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9899 = arg_buffer[1];
//reading env and args
void* a94989744 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9899))[6];
//not do dummy comment
void* kont9595 = (decode_clo(env9899))[5];
//not do dummy comment
void* n = (decode_clo(env9899))[4];
//not do dummy comment
void* _u45 = (decode_clo(env9899))[3];
//not do dummy comment
void* lst = (decode_clo(env9899))[2];
//not do dummy comment
void* drop = (decode_clo(env9899))[1];

//if-clause
bool if_guard10569 = is_true(a94989744);
if(if_guard10569)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9595);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9595))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10571 = alloc_clo(lam9896_fptr, 4);

//setting env list
clo10571[1] = _u45;
clo10571[2] = n;
clo10571[3] = kont9595;
clo10571[4] = drop;
void* f95979745 = encode_clo(clo10571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f95979745;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9898 = encode_clo(alloc_clo(lam9898_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9901 = arg_buffer[1];
//reading env and args
void* kont9595 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar10572 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10572, "0", 10);
void* a94979742 = encode_mpz(mpzvar10572);

//creating new closure instance
void** clo10574 = alloc_clo(lam9898_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo10574[1] = drop;
clo10574[2] = lst;
clo10574[3] = _u45;
clo10574[4] = n;
clo10574[5] = kont9595;
clo10574[6] = cdr;
void* f95989743 = encode_clo(clo10574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f95989743;
arg_buffer[3] = n;
arg_buffer[4] = a94979742;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam9902_fptr() // lam9902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9903 = arg_buffer[1];
//reading env and args
void* a95059757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a95039753 = (decode_clo(env9903))[3];
//not do dummy comment
void* proc = (decode_clo(env9903))[2];
//not do dummy comment
void* kont9599 = (decode_clo(env9903))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont9599;
arg_buffer[3] = a95039753;
arg_buffer[4] = a95059757;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9902 = encode_clo(alloc_clo(lam9902_fptr, 0));

void* lam9904_fptr() // lam9904 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9905 = arg_buffer[1];
//reading env and args
void* a95049755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env9905))[5];
//not do dummy comment
void* a95039753 = (decode_clo(env9905))[4];
//not do dummy comment
void* kont9599 = (decode_clo(env9905))[3];
//not do dummy comment
void* proc = (decode_clo(env9905))[2];
//not do dummy comment
void* acc = (decode_clo(env9905))[1];

//creating new closure instance
void** clo10576 = alloc_clo(lam9902_fptr, 3);

//setting env list
clo10576[1] = kont9599;
clo10576[2] = proc;
clo10576[3] = a95039753;
void* f96009756 = encode_clo(clo10576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f96009756;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a95049755;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9904 = encode_clo(alloc_clo(lam9904_fptr, 0));

void* lam9906_fptr() // lam9906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9907 = arg_buffer[1];
//reading env and args
void* a95039753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9907))[6];
//not do dummy comment
void* kont9599 = (decode_clo(env9907))[5];
//not do dummy comment
void* foldr = (decode_clo(env9907))[4];
//not do dummy comment
void* lst = (decode_clo(env9907))[3];
//not do dummy comment
void* proc = (decode_clo(env9907))[2];
//not do dummy comment
void* acc = (decode_clo(env9907))[1];

//creating new closure instance
void** clo10578 = alloc_clo(lam9904_fptr, 5);

//setting env list
clo10578[1] = acc;
clo10578[2] = proc;
clo10578[3] = kont9599;
clo10578[4] = a95039753;
clo10578[5] = foldr;
void* f96019754 = encode_clo(clo10578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96019754;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a95029751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9909))[7];
//not do dummy comment
void* foldr = (decode_clo(env9909))[6];
//not do dummy comment
void* lst = (decode_clo(env9909))[5];
//not do dummy comment
void* proc = (decode_clo(env9909))[4];
//not do dummy comment
void* acc = (decode_clo(env9909))[3];
//not do dummy comment
void* kont9599 = (decode_clo(env9909))[2];
//not do dummy comment
void* car = (decode_clo(env9909))[1];

//if-clause
bool if_guard10579 = is_true(a95029751);
if(if_guard10579)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9599);
arg_buffer[2] = acc;
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
void** clo10581 = alloc_clo(lam9906_fptr, 6);

//setting env list
clo10581[1] = acc;
clo10581[2] = proc;
clo10581[3] = lst;
clo10581[4] = foldr;
clo10581[5] = kont9599;
clo10581[6] = cdr;
void* f96029752 = encode_clo(clo10581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96029752;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9908 = encode_clo(alloc_clo(lam9908_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9910 = arg_buffer[1];
//reading env and args
void* kont9599 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo10583 = alloc_clo(lam9908_fptr, 7);

//setting env list
clo10583[1] = car;
clo10583[2] = kont9599;
clo10583[3] = acc;
clo10583[4] = proc;
clo10583[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo10583[6] = foldr;
clo10583[7] = cdr;
void* f96039750 = encode_clo(clo10583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f96039750;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam9911_fptr() // lam9911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9912 = arg_buffer[1];
//reading env and args
void* a95099765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9604 = (decode_clo(env9912))[3];
//not do dummy comment
void* cons = (decode_clo(env9912))[2];
//not do dummy comment
void* a95079761 = (decode_clo(env9912))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9604;
arg_buffer[3] = a95079761;
arg_buffer[4] = a95099765;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9911 = encode_clo(alloc_clo(lam9911_fptr, 0));

void* lam9913_fptr() // lam9913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9914 = arg_buffer[1];
//reading env and args
void* a95089763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9604 = (decode_clo(env9914))[5];
//not do dummy comment
void* append = (decode_clo(env9914))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9914))[3];
//not do dummy comment
void* cons = (decode_clo(env9914))[2];
//not do dummy comment
void* a95079761 = (decode_clo(env9914))[1];

//creating new closure instance
void** clo10585 = alloc_clo(lam9911_fptr, 3);

//setting env list
clo10585[1] = a95079761;
clo10585[2] = cons;
clo10585[3] = kont9604;
void* f96059764 = encode_clo(clo10585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f96059764;
arg_buffer[3] = a95089763;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9913 = encode_clo(alloc_clo(lam9913_fptr, 0));

void* lam9915_fptr() // lam9915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9916 = arg_buffer[1];
//reading env and args
void* a95079761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9916))[6];
//not do dummy comment
void* kont9604 = (decode_clo(env9916))[5];
//not do dummy comment
void* append = (decode_clo(env9916))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9916))[3];
//not do dummy comment
void* lst1 = (decode_clo(env9916))[2];
//not do dummy comment
void* cons = (decode_clo(env9916))[1];

//creating new closure instance
void** clo10587 = alloc_clo(lam9913_fptr, 5);

//setting env list
clo10587[1] = a95079761;
clo10587[2] = cons;
clo10587[3] = lst2;
clo10587[4] = append;
clo10587[5] = kont9604;
void* f96069762 = encode_clo(clo10587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f96069762;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a95069759 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9918))[7];
//not do dummy comment
void* kont9604 = (decode_clo(env9918))[6];
//not do dummy comment
void* append = (decode_clo(env9918))[5];
//not do dummy comment
void* lst2 = (decode_clo(env9918))[4];
//not do dummy comment
void* cons = (decode_clo(env9918))[3];
//not do dummy comment
void* lst1 = (decode_clo(env9918))[2];
//not do dummy comment
void* car = (decode_clo(env9918))[1];

//if-clause
bool if_guard10588 = is_true(a95069759);
if(if_guard10588)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9604);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9604))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10590 = alloc_clo(lam9915_fptr, 6);

//setting env list
clo10590[1] = cons;
clo10590[2] = lst1;
clo10590[3] = lst2;
clo10590[4] = append;
clo10590[5] = kont9604;
clo10590[6] = cdr;
void* f96079760 = encode_clo(clo10590);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f96079760;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9917 = encode_clo(alloc_clo(lam9917_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9919 = arg_buffer[1];
//reading env and args
void* kont9604 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10592 = alloc_clo(lam9917_fptr, 7);

//setting env list
clo10592[1] = car;
clo10592[2] = lst1;
clo10592[3] = cons;
clo10592[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo10592[5] = append;
clo10592[6] = kont9604;
clo10592[7] = cdr;
void* f96089758 = encode_clo(clo10592);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f96089758;
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
void* _9920 = arg_buffer[1];
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

void* kont96099766 = prim_car(lst);
void* lst9767 = prim_cdr(lst);
void* x95109768 = apply_prim_hash(lst9767);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96099766);
arg_buffer[2] = x95109768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96099766))[0]);
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
void* _9921 = arg_buffer[1];
//reading env and args
void* kont9611 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x95119769 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9611);
arg_buffer[2] = x95119769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9611))[0]);
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
void* _9922 = arg_buffer[1];
//reading env and args
void* kont9612 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x95129770 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9612);
arg_buffer[2] = x95129770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9612))[0]);
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
void* _9923 = arg_buffer[1];
//reading env and args
void* kont9613 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x95139771 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9613);
arg_buffer[2] = x95139771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9613))[0]);
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
void* _9924 = arg_buffer[1];
//reading env and args
void* kont9614 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x95149772 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9614);
arg_buffer[2] = x95149772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9614))[0]);
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
void* _9927 = arg_buffer[1];
//reading env and args
void* kont9615 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar10593 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10593, "100", 10);
void* a95159773 = encode_mpz(mpzvar10593);
mpz_t* mpzvar10594 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10594, "2", 10);
void* a95169774 = encode_mpz(mpzvar10594);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = kont9615;
arg_buffer[3] = a95159773;
arg_buffer[4] = a95169774;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam9928_fptr() // lam9928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9929 = arg_buffer[1];
//reading env and args
void* x95179776 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9616 = (decode_clo(env9929))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9616);
arg_buffer[2] = x95179776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9616))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9928 = encode_clo(alloc_clo(lam9928_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9930 = arg_buffer[1];
//reading env and args
void* kont9616 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo10596 = alloc_clo(lam9928_fptr, 1);

//setting env list
clo10596[1] = kont9616;
void* f96179775 = encode_clo(clo10596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f96179775;
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

