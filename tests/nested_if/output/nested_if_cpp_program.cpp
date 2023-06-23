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
void* _86879 = arg_buffer[1];
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

void* kont8647186580 = prim_car(lst);
void* lst86581 = prim_cdr(lst);
void* x8625486582 = apply_prim__u43(lst86581);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8647186580);
arg_buffer[2] = x8625486582;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8647186580))[0]);
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
void* _86880 = arg_buffer[1];
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

void* kont8647386583 = prim_car(lst);
void* lst86584 = prim_cdr(lst);
void* x8625586585 = apply_prim__u45(lst86584);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8647386583);
arg_buffer[2] = x8625586585;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8647386583))[0]);
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
void* _86881 = arg_buffer[1];
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

void* kont8647586586 = prim_car(lst);
void* lst86587 = prim_cdr(lst);
void* x8625686588 = apply_prim__u42(lst86587);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8647586586);
arg_buffer[2] = x8625686588;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8647586586))[0]);
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
void* _86882 = arg_buffer[1];
//reading env and args
void* kont86477 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8625786589 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86477);
arg_buffer[2] = x8625786589;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86477))[0]);
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
void* _86883 = arg_buffer[1];
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

void* kont8647886590 = prim_car(lst);
void* lst86591 = prim_cdr(lst);
void* x8625886592 = apply_prim__u47(lst86591);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8647886590);
arg_buffer[2] = x8625886592;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8647886590))[0]);
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
void* _86884 = arg_buffer[1];
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

void* kont8648086593 = prim_car(lst);
void* lst86594 = prim_cdr(lst);
void* x8625986595 = apply_prim__u61(lst86594);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8648086593);
arg_buffer[2] = x8625986595;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8648086593))[0]);
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
void* _86885 = arg_buffer[1];
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

void* kont8648286596 = prim_car(lst);
void* lst86597 = prim_cdr(lst);
void* x8626086598 = apply_prim__u62(lst86597);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8648286596);
arg_buffer[2] = x8626086598;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8648286596))[0]);
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
void* _86886 = arg_buffer[1];
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

void* kont8648486599 = prim_car(lst);
void* lst86600 = prim_cdr(lst);
void* x8626186601 = apply_prim__u60(lst86600);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8648486599);
arg_buffer[2] = x8626186601;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8648486599))[0]);
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
void* _86887 = arg_buffer[1];
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

void* kont8648686602 = prim_car(lst);
void* lst86603 = prim_cdr(lst);
void* x8626286604 = apply_prim__u60_u61(lst86603);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8648686602);
arg_buffer[2] = x8626286604;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8648686602))[0]);
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
void* _86888 = arg_buffer[1];
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

void* kont8648886605 = prim_car(lst);
void* lst86606 = prim_cdr(lst);
void* x8626386607 = apply_prim__u62_u61(lst86606);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8648886605);
arg_buffer[2] = x8626386607;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8648886605))[0]);
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
void* _86889 = arg_buffer[1];
//reading env and args
void* kont86490 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8626486608 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86490);
arg_buffer[2] = x8626486608;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86490))[0]);
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
void* _86890 = arg_buffer[1];
//reading env and args
void* kont86491 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8626586609 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86491);
arg_buffer[2] = x8626586609;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86491))[0]);
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
void* _86891 = arg_buffer[1];
//reading env and args
void* kont86492 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8626686610 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86492);
arg_buffer[2] = x8626686610;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86492))[0]);
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
void* _86892 = arg_buffer[1];
//reading env and args
void* kont86493 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8626786611 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86493);
arg_buffer[2] = x8626786611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86493))[0]);
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
void* _86893 = arg_buffer[1];
//reading env and args
void* kont86494 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8626886612 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86494);
arg_buffer[2] = x8626886612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86494))[0]);
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
void* _86894 = arg_buffer[1];
//reading env and args
void* kont86495 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8626986613 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86495);
arg_buffer[2] = x8626986613;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86495))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam86895_fptr() // lam86895 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86896 = arg_buffer[1];
//reading env and args
void* a8627286617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86496 = (decode_clo(env86896))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env86896))[2];
//not do dummy comment
void* a8627086614 = (decode_clo(env86896))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont86496;
arg_buffer[3] = a8627086614;
arg_buffer[4] = a8627286617;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86895 = encode_clo(alloc_clo(lam86895_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86899 = arg_buffer[1];
//reading env and args
void* kont86496 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar90869 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90869, "0", 10);
void* a8627086614 = encode_mpz(mpzvar90869);
mpz_t* mpzvar90870 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90870, "2", 10);
void* a8627186615 = encode_mpz(mpzvar90870);

//creating new closure instance
void** clo90872 = alloc_clo(lam86895_fptr, 3);

//setting env list
clo90872[1] = a8627086614;
clo90872[2] = equal_u63;
clo90872[3] = kont86496;
void* f8649786616 = encode_clo(clo90872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8649786616;
arg_buffer[3] = x;
arg_buffer[4] = a8627186615;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam86900_fptr() // lam86900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86901 = arg_buffer[1];
//reading env and args
void* a8627586621 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86498 = (decode_clo(env86901))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env86901))[2];
//not do dummy comment
void* a8627386618 = (decode_clo(env86901))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont86498;
arg_buffer[3] = a8627386618;
arg_buffer[4] = a8627586621;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86900 = encode_clo(alloc_clo(lam86900_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86904 = arg_buffer[1];
//reading env and args
void* kont86498 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar90873 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90873, "1", 10);
void* a8627386618 = encode_mpz(mpzvar90873);
mpz_t* mpzvar90874 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90874, "2", 10);
void* a8627486619 = encode_mpz(mpzvar90874);

//creating new closure instance
void** clo90876 = alloc_clo(lam86900_fptr, 3);

//setting env list
clo90876[1] = a8627386618;
clo90876[2] = equal_u63;
clo90876[3] = kont86498;
void* f8649986620 = encode_clo(clo90876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8649986620;
arg_buffer[3] = x;
arg_buffer[4] = a8627486619;
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
void* _86905 = arg_buffer[1];
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

void* kont8650086622 = prim_car(x);
void* x86623 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8650086622);
arg_buffer[2] = x86623;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8650086622))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam86908_fptr() // lam86908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86909 = arg_buffer[1];
//reading env and args
void* a8628186633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86502 = (decode_clo(env86909))[3];
//not do dummy comment
void* x = (decode_clo(env86909))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env86909))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont86502;
arg_buffer[3] = x;
arg_buffer[4] = a8628186633;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86908 = encode_clo(alloc_clo(lam86908_fptr, 0));

void* lam86910_fptr() // lam86910 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86911 = arg_buffer[1];
//reading env and args
void* a8627986630 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86911))[5];
//not do dummy comment
void* lst = (decode_clo(env86911))[4];
//not do dummy comment
void* kont86502 = (decode_clo(env86911))[3];
//not do dummy comment
void* x = (decode_clo(env86911))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env86911))[1];

//if-clause
bool if_guard90877 = is_true(a8627986630);
if(if_guard90877)
{
void* x8628086631 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86502);
arg_buffer[2] = x8628086631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86502))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90879 = alloc_clo(lam86908_fptr, 3);

//setting env list
clo90879[1] = member_u63;
clo90879[2] = x;
clo90879[3] = kont86502;
void* f8650386632 = encode_clo(clo90879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8650386632;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86910 = encode_clo(alloc_clo(lam86910_fptr, 0));

void* lam86912_fptr() // lam86912 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86913 = arg_buffer[1];
//reading env and args
void* a8627886628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86913))[6];
//not do dummy comment
void* lst = (decode_clo(env86913))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env86913))[4];
//not do dummy comment
void* kont86502 = (decode_clo(env86913))[3];
//not do dummy comment
void* x = (decode_clo(env86913))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env86913))[1];

//creating new closure instance
void** clo90881 = alloc_clo(lam86910_fptr, 5);

//setting env list
clo90881[1] = member_u63;
clo90881[2] = x;
clo90881[3] = kont86502;
clo90881[4] = lst;
clo90881[5] = cdr;
void* f8650486629 = encode_clo(clo90881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8650486629;
arg_buffer[3] = a8627886628;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86912 = encode_clo(alloc_clo(lam86912_fptr, 0));

void* lam86914_fptr() // lam86914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86915 = arg_buffer[1];
//reading env and args
void* a8627686625 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86915))[7];
//not do dummy comment
void* lst = (decode_clo(env86915))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env86915))[5];
//not do dummy comment
void* kont86502 = (decode_clo(env86915))[4];
//not do dummy comment
void* x = (decode_clo(env86915))[3];
//not do dummy comment
void* car = (decode_clo(env86915))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env86915))[1];

//if-clause
bool if_guard90882 = is_true(a8627686625);
if(if_guard90882)
{
void* x8627786626 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86502);
arg_buffer[2] = x8627786626;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86502))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90884 = alloc_clo(lam86912_fptr, 6);

//setting env list
clo90884[1] = member_u63;
clo90884[2] = x;
clo90884[3] = kont86502;
clo90884[4] = equal_u63;
clo90884[5] = lst;
clo90884[6] = cdr;
void* f8650586627 = encode_clo(clo90884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8650586627;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86914 = encode_clo(alloc_clo(lam86914_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86916 = arg_buffer[1];
//reading env and args
void* kont86502 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90886 = alloc_clo(lam86914_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo90886[1] = member_u63;
clo90886[2] = car;
clo90886[3] = x;
clo90886[4] = kont86502;
clo90886[5] = equal_u63;
clo90886[6] = lst;
clo90886[7] = cdr;
void* f8650686624 = encode_clo(clo90886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8650686624;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam86917_fptr() // lam86917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86918 = arg_buffer[1];
//reading env and args
void* a8628586641 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8628486639 = (decode_clo(env86918))[4];
//not do dummy comment
void* fun = (decode_clo(env86918))[3];
//not do dummy comment
void* foldl = (decode_clo(env86918))[2];
//not do dummy comment
void* kont86507 = (decode_clo(env86918))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont86507;
arg_buffer[3] = fun;
arg_buffer[4] = a8628486639;
arg_buffer[5] = a8628586641;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86917 = encode_clo(alloc_clo(lam86917_fptr, 0));

void* lam86919_fptr() // lam86919 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86920 = arg_buffer[1];
//reading env and args
void* a8628486639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86920))[5];
//not do dummy comment
void* lst = (decode_clo(env86920))[4];
//not do dummy comment
void* fun = (decode_clo(env86920))[3];
//not do dummy comment
void* foldl = (decode_clo(env86920))[2];
//not do dummy comment
void* kont86507 = (decode_clo(env86920))[1];

//creating new closure instance
void** clo90888 = alloc_clo(lam86917_fptr, 4);

//setting env list
clo90888[1] = kont86507;
clo90888[2] = foldl;
clo90888[3] = fun;
clo90888[4] = a8628486639;
void* f8650886640 = encode_clo(clo90888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8650886640;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86919 = encode_clo(alloc_clo(lam86919_fptr, 0));

void* lam86921_fptr() // lam86921 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86922 = arg_buffer[1];
//reading env and args
void* a8628386637 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86922))[6];
//not do dummy comment
void* lst = (decode_clo(env86922))[5];
//not do dummy comment
void* fun = (decode_clo(env86922))[4];
//not do dummy comment
void* acc = (decode_clo(env86922))[3];
//not do dummy comment
void* foldl = (decode_clo(env86922))[2];
//not do dummy comment
void* kont86507 = (decode_clo(env86922))[1];

//creating new closure instance
void** clo90890 = alloc_clo(lam86919_fptr, 5);

//setting env list
clo90890[1] = kont86507;
clo90890[2] = foldl;
clo90890[3] = fun;
clo90890[4] = lst;
clo90890[5] = cdr;
void* f8650986638 = encode_clo(clo90890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8650986638;
arg_buffer[3] = a8628386637;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86921 = encode_clo(alloc_clo(lam86921_fptr, 0));

void* lam86923_fptr() // lam86923 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86924 = arg_buffer[1];
//reading env and args
void* a8628286635 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86924))[7];
//not do dummy comment
void* lst = (decode_clo(env86924))[6];
//not do dummy comment
void* fun = (decode_clo(env86924))[5];
//not do dummy comment
void* acc = (decode_clo(env86924))[4];
//not do dummy comment
void* car = (decode_clo(env86924))[3];
//not do dummy comment
void* foldl = (decode_clo(env86924))[2];
//not do dummy comment
void* kont86507 = (decode_clo(env86924))[1];

//if-clause
bool if_guard90891 = is_true(a8628286635);
if(if_guard90891)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86507);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86507))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90893 = alloc_clo(lam86921_fptr, 6);

//setting env list
clo90893[1] = kont86507;
clo90893[2] = foldl;
clo90893[3] = acc;
clo90893[4] = fun;
clo90893[5] = lst;
clo90893[6] = cdr;
void* f8651086636 = encode_clo(clo90893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8651086636;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86923 = encode_clo(alloc_clo(lam86923_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86925 = arg_buffer[1];
//reading env and args
void* kont86507 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo90895 = alloc_clo(lam86923_fptr, 7);

//setting env list
clo90895[1] = kont86507;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo90895[2] = foldl;
clo90895[3] = car;
clo90895[4] = acc;
clo90895[5] = fun;
clo90895[6] = lst;
clo90895[7] = cdr;
void* f8651186634 = encode_clo(clo90895);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8651186634;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam86926_fptr() // lam86926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86927 = arg_buffer[1];
//reading env and args
void* a8628986649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86512 = (decode_clo(env86927))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env86927))[2];
//not do dummy comment
void* a8628786645 = (decode_clo(env86927))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont86512;
arg_buffer[3] = a8628786645;
arg_buffer[4] = a8628986649;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86926 = encode_clo(alloc_clo(lam86926_fptr, 0));

void* lam86928_fptr() // lam86928 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86929 = arg_buffer[1];
//reading env and args
void* a8628886647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86512 = (decode_clo(env86929))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env86929))[4];
//not do dummy comment
void* a8628786645 = (decode_clo(env86929))[3];
//not do dummy comment
void* lst2 = (decode_clo(env86929))[2];
//not do dummy comment
void* cons = (decode_clo(env86929))[1];

//creating new closure instance
void** clo90897 = alloc_clo(lam86926_fptr, 3);

//setting env list
clo90897[1] = a8628786645;
clo90897[2] = reverse_u45helper;
clo90897[3] = kont86512;
void* f8651386648 = encode_clo(clo90897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8651386648;
arg_buffer[3] = a8628886647;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86928 = encode_clo(alloc_clo(lam86928_fptr, 0));

void* lam86930_fptr() // lam86930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86931 = arg_buffer[1];
//reading env and args
void* a8628786645 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env86931))[6];
//not do dummy comment
void* lst2 = (decode_clo(env86931))[5];
//not do dummy comment
void* car = (decode_clo(env86931))[4];
//not do dummy comment
void* cons = (decode_clo(env86931))[3];
//not do dummy comment
void* kont86512 = (decode_clo(env86931))[2];
//not do dummy comment
void* lst = (decode_clo(env86931))[1];

//creating new closure instance
void** clo90899 = alloc_clo(lam86928_fptr, 5);

//setting env list
clo90899[1] = cons;
clo90899[2] = lst2;
clo90899[3] = a8628786645;
clo90899[4] = reverse_u45helper;
clo90899[5] = kont86512;
void* f8651486646 = encode_clo(clo90899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8651486646;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86930 = encode_clo(alloc_clo(lam86930_fptr, 0));

void* lam86932_fptr() // lam86932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86933 = arg_buffer[1];
//reading env and args
void* a8628686643 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86933))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env86933))[6];
//not do dummy comment
void* lst2 = (decode_clo(env86933))[5];
//not do dummy comment
void* car = (decode_clo(env86933))[4];
//not do dummy comment
void* cons = (decode_clo(env86933))[3];
//not do dummy comment
void* kont86512 = (decode_clo(env86933))[2];
//not do dummy comment
void* lst = (decode_clo(env86933))[1];

//if-clause
bool if_guard90900 = is_true(a8628686643);
if(if_guard90900)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86512);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86512))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90902 = alloc_clo(lam86930_fptr, 6);

//setting env list
clo90902[1] = lst;
clo90902[2] = kont86512;
clo90902[3] = cons;
clo90902[4] = car;
clo90902[5] = lst2;
clo90902[6] = reverse_u45helper;
void* f8651586644 = encode_clo(clo90902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8651586644;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86932 = encode_clo(alloc_clo(lam86932_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86934 = arg_buffer[1];
//reading env and args
void* kont86512 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90904 = alloc_clo(lam86932_fptr, 7);

//setting env list
clo90904[1] = lst;
clo90904[2] = kont86512;
clo90904[3] = cons;
clo90904[4] = car;
clo90904[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo90904[6] = reverse_u45helper;
clo90904[7] = cdr;
void* f8651686642 = encode_clo(clo90904);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8651686642;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam86935_fptr() // lam86935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86936 = arg_buffer[1];
//reading env and args
void* a8629086651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env86936))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env86936))[2];
//not do dummy comment
void* kont86517 = (decode_clo(env86936))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont86517;
arg_buffer[3] = lst;
arg_buffer[4] = a8629086651;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86935 = encode_clo(alloc_clo(lam86935_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86937 = arg_buffer[1];
//reading env and args
void* kont86517 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo90906 = alloc_clo(lam86935_fptr, 3);

//setting env list
clo90906[1] = kont86517;
clo90906[2] = reverse_u45helper;
clo90906[3] = lst;
void* f8651886650 = encode_clo(clo90906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8651886650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam86938_fptr() // lam86938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86939 = arg_buffer[1];
//reading env and args
void* x8629386656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86519 = (decode_clo(env86939))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86519);
arg_buffer[2] = x8629386656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86519))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86938 = encode_clo(alloc_clo(lam86938_fptr, 0));

void* lam86940_fptr() // lam86940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86941 = arg_buffer[1];
//reading env and args
void* a8629886665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8629486658 = (decode_clo(env86941))[4];
//not do dummy comment
void* a8629686661 = (decode_clo(env86941))[3];
//not do dummy comment
void* kont86519 = (decode_clo(env86941))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env86941))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont86519;
arg_buffer[3] = a8629486658;
arg_buffer[4] = a8629686661;
arg_buffer[5] = a8629886665;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86940 = encode_clo(alloc_clo(lam86940_fptr, 0));

void* lam86942_fptr() // lam86942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86943 = arg_buffer[1];
//reading env and args
void* a8629786663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8629486658 = (decode_clo(env86943))[6];
//not do dummy comment
void* a8629686661 = (decode_clo(env86943))[5];
//not do dummy comment
void* kont86519 = (decode_clo(env86943))[4];
//not do dummy comment
void* cons = (decode_clo(env86943))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env86943))[2];
//not do dummy comment
void* lst2 = (decode_clo(env86943))[1];

//creating new closure instance
void** clo90908 = alloc_clo(lam86940_fptr, 4);

//setting env list
clo90908[1] = take_u45helper;
clo90908[2] = kont86519;
clo90908[3] = a8629686661;
clo90908[4] = a8629486658;
void* f8652186664 = encode_clo(clo90908);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8652186664;
arg_buffer[3] = a8629786663;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86942 = encode_clo(alloc_clo(lam86942_fptr, 0));

void* lam86944_fptr() // lam86944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86945 = arg_buffer[1];
//reading env and args
void* a8629686661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env86945))[7];
//not do dummy comment
void* a8629486658 = (decode_clo(env86945))[6];
//not do dummy comment
void* kont86519 = (decode_clo(env86945))[5];
//not do dummy comment
void* car = (decode_clo(env86945))[4];
//not do dummy comment
void* cons = (decode_clo(env86945))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env86945))[2];
//not do dummy comment
void* lst2 = (decode_clo(env86945))[1];

//creating new closure instance
void** clo90910 = alloc_clo(lam86942_fptr, 6);

//setting env list
clo90910[1] = lst2;
clo90910[2] = take_u45helper;
clo90910[3] = cons;
clo90910[4] = kont86519;
clo90910[5] = a8629686661;
clo90910[6] = a8629486658;
void* f8652286662 = encode_clo(clo90910);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8652286662;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86944 = encode_clo(alloc_clo(lam86944_fptr, 0));

void* lam86947_fptr() // lam86947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86948 = arg_buffer[1];
//reading env and args
void* a8629486658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env86948))[8];
//not do dummy comment
void* kont86519 = (decode_clo(env86948))[7];
//not do dummy comment
void* cons = (decode_clo(env86948))[6];
//not do dummy comment
void* _u45 = (decode_clo(env86948))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env86948))[4];
//not do dummy comment
void* lst2 = (decode_clo(env86948))[3];
//not do dummy comment
void* n = (decode_clo(env86948))[2];
//not do dummy comment
void* car = (decode_clo(env86948))[1];
mpz_t* mpzvar90911 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90911, "1", 10);
void* a8629586659 = encode_mpz(mpzvar90911);

//creating new closure instance
void** clo90913 = alloc_clo(lam86944_fptr, 7);

//setting env list
clo90913[1] = lst2;
clo90913[2] = take_u45helper;
clo90913[3] = cons;
clo90913[4] = car;
clo90913[5] = kont86519;
clo90913[6] = a8629486658;
clo90913[7] = lst;
void* f8652386660 = encode_clo(clo90913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8652386660;
arg_buffer[3] = n;
arg_buffer[4] = a8629586659;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86947 = encode_clo(alloc_clo(lam86947_fptr, 0));

void* lam86949_fptr() // lam86949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86950 = arg_buffer[1];
//reading env and args
void* a8629286654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86950))[10];
//not do dummy comment
void* lst = (decode_clo(env86950))[9];
//not do dummy comment
void* reverse = (decode_clo(env86950))[8];
//not do dummy comment
void* kont86519 = (decode_clo(env86950))[7];
//not do dummy comment
void* cons = (decode_clo(env86950))[6];
//not do dummy comment
void* _u45 = (decode_clo(env86950))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env86950))[4];
//not do dummy comment
void* lst2 = (decode_clo(env86950))[3];
//not do dummy comment
void* n = (decode_clo(env86950))[2];
//not do dummy comment
void* car = (decode_clo(env86950))[1];

//if-clause
bool if_guard90914 = is_true(a8629286654);
if(if_guard90914)
{

//creating new closure instance
void** clo90916 = alloc_clo(lam86938_fptr, 1);

//setting env list
clo90916[1] = kont86519;
void* f8652086655 = encode_clo(clo90916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8652086655;
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
void** clo90918 = alloc_clo(lam86947_fptr, 8);

//setting env list
clo90918[1] = car;
clo90918[2] = n;
clo90918[3] = lst2;
clo90918[4] = take_u45helper;
clo90918[5] = _u45;
clo90918[6] = cons;
clo90918[7] = kont86519;
clo90918[8] = lst;
void* f8652486657 = encode_clo(clo90918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8652486657;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86949 = encode_clo(alloc_clo(lam86949_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86952 = arg_buffer[1];
//reading env and args
void* kont86519 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar90919 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90919, "0", 10);
void* a8629186652 = encode_mpz(mpzvar90919);

//creating new closure instance
void** clo90921 = alloc_clo(lam86949_fptr, 10);

//setting env list
clo90921[1] = car;
clo90921[2] = n;
clo90921[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo90921[4] = take_u45helper;
clo90921[5] = _u45;
clo90921[6] = cons;
clo90921[7] = kont86519;
clo90921[8] = reverse;
clo90921[9] = lst;
clo90921[10] = cdr;
void* f8652586653 = encode_clo(clo90921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8652586653;
arg_buffer[3] = n;
arg_buffer[4] = a8629186652;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam86953_fptr() // lam86953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86954 = arg_buffer[1];
//reading env and args
void* a8629986667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86526 = (decode_clo(env86954))[4];
//not do dummy comment
void* lst = (decode_clo(env86954))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env86954))[2];
//not do dummy comment
void* n = (decode_clo(env86954))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont86526;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8629986667;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86953 = encode_clo(alloc_clo(lam86953_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86955 = arg_buffer[1];
//reading env and args
void* kont86526 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90923 = alloc_clo(lam86953_fptr, 4);

//setting env list
clo90923[1] = n;
clo90923[2] = take_u45helper;
clo90923[3] = lst;
clo90923[4] = kont86526;
void* f8652786666 = encode_clo(clo90923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8652786666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam86957_fptr() // lam86957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86958 = arg_buffer[1];
//reading env and args
void* a8630486675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8630286671 = (decode_clo(env86958))[3];
//not do dummy comment
void* kont86528 = (decode_clo(env86958))[2];
//not do dummy comment
void* _u43 = (decode_clo(env86958))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont86528;
arg_buffer[3] = a8630286671;
arg_buffer[4] = a8630486675;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86957 = encode_clo(alloc_clo(lam86957_fptr, 0));

void* lam86959_fptr() // lam86959 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86960 = arg_buffer[1];
//reading env and args
void* a8630386673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8630286671 = (decode_clo(env86960))[4];
//not do dummy comment
void* kont86528 = (decode_clo(env86960))[3];
//not do dummy comment
void* length = (decode_clo(env86960))[2];
//not do dummy comment
void* _u43 = (decode_clo(env86960))[1];

//creating new closure instance
void** clo90925 = alloc_clo(lam86957_fptr, 3);

//setting env list
clo90925[1] = _u43;
clo90925[2] = kont86528;
clo90925[3] = a8630286671;
void* f8652986674 = encode_clo(clo90925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8652986674;
arg_buffer[3] = a8630386673;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86959 = encode_clo(alloc_clo(lam86959_fptr, 0));

void* lam86962_fptr() // lam86962 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86963 = arg_buffer[1];
//reading env and args
void* a8630086669 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86963))[5];
//not do dummy comment
void* length = (decode_clo(env86963))[4];
//not do dummy comment
void* _u43 = (decode_clo(env86963))[3];
//not do dummy comment
void* lst = (decode_clo(env86963))[2];
//not do dummy comment
void* kont86528 = (decode_clo(env86963))[1];

//if-clause
bool if_guard90926 = is_true(a8630086669);
if(if_guard90926)
{
mpz_t* mpzvar90927 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90927, "0", 10);
void* x8630186670 = encode_mpz(mpzvar90927);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86528);
arg_buffer[2] = x8630186670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86528))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar90928 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90928, "1", 10);
void* a8630286671 = encode_mpz(mpzvar90928);

//creating new closure instance
void** clo90930 = alloc_clo(lam86959_fptr, 4);

//setting env list
clo90930[1] = _u43;
clo90930[2] = length;
clo90930[3] = kont86528;
clo90930[4] = a8630286671;
void* f8653086672 = encode_clo(clo90930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8653086672;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86962 = encode_clo(alloc_clo(lam86962_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86964 = arg_buffer[1];
//reading env and args
void* kont86528 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo90932 = alloc_clo(lam86962_fptr, 5);

//setting env list
clo90932[1] = kont86528;
clo90932[2] = lst;
clo90932[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo90932[4] = length;
clo90932[5] = cdr;
void* f8653186668 = encode_clo(clo90932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8653186668;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam86965_fptr() // lam86965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86966 = arg_buffer[1];
//reading env and args
void* x8630686679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86532 = (decode_clo(env86966))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86532);
arg_buffer[2] = x8630686679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86532))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86965 = encode_clo(alloc_clo(lam86965_fptr, 0));

void* lam86967_fptr() // lam86967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86968 = arg_buffer[1];
//reading env and args
void* a8631086687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86532 = (decode_clo(env86968))[3];
//not do dummy comment
void* cons = (decode_clo(env86968))[2];
//not do dummy comment
void* a8630886683 = (decode_clo(env86968))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont86532;
arg_buffer[3] = a8630886683;
arg_buffer[4] = a8631086687;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86967 = encode_clo(alloc_clo(lam86967_fptr, 0));

void* lam86969_fptr() // lam86969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86970 = arg_buffer[1];
//reading env and args
void* a8630986685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env86970))[5];
//not do dummy comment
void* kont86532 = (decode_clo(env86970))[4];
//not do dummy comment
void* proc = (decode_clo(env86970))[3];
//not do dummy comment
void* cons = (decode_clo(env86970))[2];
//not do dummy comment
void* a8630886683 = (decode_clo(env86970))[1];

//creating new closure instance
void** clo90934 = alloc_clo(lam86967_fptr, 3);

//setting env list
clo90934[1] = a8630886683;
clo90934[2] = cons;
clo90934[3] = kont86532;
void* f8653486686 = encode_clo(clo90934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8653486686;
arg_buffer[3] = proc;
arg_buffer[4] = a8630986685;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86969 = encode_clo(alloc_clo(lam86969_fptr, 0));

void* lam86971_fptr() // lam86971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86972 = arg_buffer[1];
//reading env and args
void* a8630886683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86972))[6];
//not do dummy comment
void* lst = (decode_clo(env86972))[5];
//not do dummy comment
void* map = (decode_clo(env86972))[4];
//not do dummy comment
void* kont86532 = (decode_clo(env86972))[3];
//not do dummy comment
void* proc = (decode_clo(env86972))[2];
//not do dummy comment
void* cons = (decode_clo(env86972))[1];

//creating new closure instance
void** clo90936 = alloc_clo(lam86969_fptr, 5);

//setting env list
clo90936[1] = a8630886683;
clo90936[2] = cons;
clo90936[3] = proc;
clo90936[4] = kont86532;
clo90936[5] = map;
void* f8653586684 = encode_clo(clo90936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8653586684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86971 = encode_clo(alloc_clo(lam86971_fptr, 0));

void* lam86973_fptr() // lam86973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86974 = arg_buffer[1];
//reading env and args
void* a8630786681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86974))[6];
//not do dummy comment
void* lst = (decode_clo(env86974))[5];
//not do dummy comment
void* map = (decode_clo(env86974))[4];
//not do dummy comment
void* kont86532 = (decode_clo(env86974))[3];
//not do dummy comment
void* proc = (decode_clo(env86974))[2];
//not do dummy comment
void* cons = (decode_clo(env86974))[1];

//creating new closure instance
void** clo90938 = alloc_clo(lam86971_fptr, 6);

//setting env list
clo90938[1] = cons;
clo90938[2] = proc;
clo90938[3] = kont86532;
clo90938[4] = map;
clo90938[5] = lst;
clo90938[6] = cdr;
void* f8653686682 = encode_clo(clo90938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8653686682;
arg_buffer[3] = a8630786681;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86973 = encode_clo(alloc_clo(lam86973_fptr, 0));

void* lam86975_fptr() // lam86975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86976 = arg_buffer[1];
//reading env and args
void* a8630586677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env86976))[8];
//not do dummy comment
void* map = (decode_clo(env86976))[7];
//not do dummy comment
void* kont86532 = (decode_clo(env86976))[6];
//not do dummy comment
void* proc = (decode_clo(env86976))[5];
//not do dummy comment
void* car = (decode_clo(env86976))[4];
//not do dummy comment
void* cons = (decode_clo(env86976))[3];
//not do dummy comment
void* list = (decode_clo(env86976))[2];
//not do dummy comment
void* cdr = (decode_clo(env86976))[1];

//if-clause
bool if_guard90939 = is_true(a8630586677);
if(if_guard90939)
{

//creating new closure instance
void** clo90941 = alloc_clo(lam86965_fptr, 1);

//setting env list
clo90941[1] = kont86532;
void* f8653386678 = encode_clo(clo90941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8653386678;
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
void** clo90943 = alloc_clo(lam86973_fptr, 6);

//setting env list
clo90943[1] = cons;
clo90943[2] = proc;
clo90943[3] = kont86532;
clo90943[4] = map;
clo90943[5] = lst;
clo90943[6] = cdr;
void* f8653786680 = encode_clo(clo90943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8653786680;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86975 = encode_clo(alloc_clo(lam86975_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86977 = arg_buffer[1];
//reading env and args
void* kont86532 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90945 = alloc_clo(lam86975_fptr, 8);

//setting env list
clo90945[1] = cdr;
clo90945[2] = list;
clo90945[3] = cons;
clo90945[4] = car;
clo90945[5] = proc;
clo90945[6] = kont86532;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo90945[7] = map;
clo90945[8] = lst;
void* f8653886676 = encode_clo(clo90945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8653886676;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam86978_fptr() // lam86978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86979 = arg_buffer[1];
//reading env and args
void* x8631286691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86539 = (decode_clo(env86979))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86539);
arg_buffer[2] = x8631286691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86539))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86978 = encode_clo(alloc_clo(lam86978_fptr, 0));

void* lam86980_fptr() // lam86980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86981 = arg_buffer[1];
//reading env and args
void* a8631786701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8631586697 = (decode_clo(env86981))[3];
//not do dummy comment
void* cons = (decode_clo(env86981))[2];
//not do dummy comment
void* kont86539 = (decode_clo(env86981))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont86539;
arg_buffer[3] = a8631586697;
arg_buffer[4] = a8631786701;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86980 = encode_clo(alloc_clo(lam86980_fptr, 0));

void* lam86982_fptr() // lam86982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86983 = arg_buffer[1];
//reading env and args
void* a8631686699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env86983))[5];
//not do dummy comment
void* cons = (decode_clo(env86983))[4];
//not do dummy comment
void* kont86539 = (decode_clo(env86983))[3];
//not do dummy comment
void* filter = (decode_clo(env86983))[2];
//not do dummy comment
void* a8631586697 = (decode_clo(env86983))[1];

//creating new closure instance
void** clo90947 = alloc_clo(lam86980_fptr, 3);

//setting env list
clo90947[1] = kont86539;
clo90947[2] = cons;
clo90947[3] = a8631586697;
void* f8654186700 = encode_clo(clo90947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8654186700;
arg_buffer[3] = op;
arg_buffer[4] = a8631686699;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86982 = encode_clo(alloc_clo(lam86982_fptr, 0));

void* lam86984_fptr() // lam86984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86985 = arg_buffer[1];
//reading env and args
void* a8631586697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86985))[6];
//not do dummy comment
void* lst = (decode_clo(env86985))[5];
//not do dummy comment
void* op = (decode_clo(env86985))[4];
//not do dummy comment
void* filter = (decode_clo(env86985))[3];
//not do dummy comment
void* cons = (decode_clo(env86985))[2];
//not do dummy comment
void* kont86539 = (decode_clo(env86985))[1];

//creating new closure instance
void** clo90949 = alloc_clo(lam86982_fptr, 5);

//setting env list
clo90949[1] = a8631586697;
clo90949[2] = filter;
clo90949[3] = kont86539;
clo90949[4] = cons;
clo90949[5] = op;
void* f8654286698 = encode_clo(clo90949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8654286698;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86984 = encode_clo(alloc_clo(lam86984_fptr, 0));

void* lam86986_fptr() // lam86986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86987 = arg_buffer[1];
//reading env and args
void* a8631886703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env86987))[3];
//not do dummy comment
void* filter = (decode_clo(env86987))[2];
//not do dummy comment
void* kont86539 = (decode_clo(env86987))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont86539;
arg_buffer[3] = op;
arg_buffer[4] = a8631886703;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86986 = encode_clo(alloc_clo(lam86986_fptr, 0));

void* lam86988_fptr() // lam86988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86989 = arg_buffer[1];
//reading env and args
void* a8631486695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86989))[7];
//not do dummy comment
void* lst = (decode_clo(env86989))[6];
//not do dummy comment
void* op = (decode_clo(env86989))[5];
//not do dummy comment
void* cons = (decode_clo(env86989))[4];
//not do dummy comment
void* kont86539 = (decode_clo(env86989))[3];
//not do dummy comment
void* filter = (decode_clo(env86989))[2];
//not do dummy comment
void* car = (decode_clo(env86989))[1];

//if-clause
bool if_guard90950 = is_true(a8631486695);
if(if_guard90950)
{

//creating new closure instance
void** clo90952 = alloc_clo(lam86984_fptr, 6);

//setting env list
clo90952[1] = kont86539;
clo90952[2] = cons;
clo90952[3] = filter;
clo90952[4] = op;
clo90952[5] = lst;
clo90952[6] = cdr;
void* f8654386696 = encode_clo(clo90952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8654386696;
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
void** clo90954 = alloc_clo(lam86986_fptr, 3);

//setting env list
clo90954[1] = kont86539;
clo90954[2] = filter;
clo90954[3] = op;
void* f8654486702 = encode_clo(clo90954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8654486702;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86988 = encode_clo(alloc_clo(lam86988_fptr, 0));

void* lam86990_fptr() // lam86990 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86991 = arg_buffer[1];
//reading env and args
void* a8631386693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env86991))[7];
//not do dummy comment
void* lst = (decode_clo(env86991))[6];
//not do dummy comment
void* op = (decode_clo(env86991))[5];
//not do dummy comment
void* cons = (decode_clo(env86991))[4];
//not do dummy comment
void* kont86539 = (decode_clo(env86991))[3];
//not do dummy comment
void* filter = (decode_clo(env86991))[2];
//not do dummy comment
void* car = (decode_clo(env86991))[1];

//creating new closure instance
void** clo90956 = alloc_clo(lam86988_fptr, 7);

//setting env list
clo90956[1] = car;
clo90956[2] = filter;
clo90956[3] = kont86539;
clo90956[4] = cons;
clo90956[5] = op;
clo90956[6] = lst;
clo90956[7] = cdr;
void* f8654586694 = encode_clo(clo90956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8654586694;
arg_buffer[3] = a8631386693;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86990 = encode_clo(alloc_clo(lam86990_fptr, 0));

void* lam86992_fptr() // lam86992 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86993 = arg_buffer[1];
//reading env and args
void* a8631186689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env86993))[8];
//not do dummy comment
void* op = (decode_clo(env86993))[7];
//not do dummy comment
void* cons = (decode_clo(env86993))[6];
//not do dummy comment
void* kont86539 = (decode_clo(env86993))[5];
//not do dummy comment
void* list = (decode_clo(env86993))[4];
//not do dummy comment
void* cdr = (decode_clo(env86993))[3];
//not do dummy comment
void* filter = (decode_clo(env86993))[2];
//not do dummy comment
void* car = (decode_clo(env86993))[1];

//if-clause
bool if_guard90957 = is_true(a8631186689);
if(if_guard90957)
{

//creating new closure instance
void** clo90959 = alloc_clo(lam86978_fptr, 1);

//setting env list
clo90959[1] = kont86539;
void* f8654086690 = encode_clo(clo90959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8654086690;
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
void** clo90961 = alloc_clo(lam86990_fptr, 7);

//setting env list
clo90961[1] = car;
clo90961[2] = filter;
clo90961[3] = kont86539;
clo90961[4] = cons;
clo90961[5] = op;
clo90961[6] = lst;
clo90961[7] = cdr;
void* f8654686692 = encode_clo(clo90961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8654686692;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam86992 = encode_clo(alloc_clo(lam86992_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _86994 = arg_buffer[1];
//reading env and args
void* kont86539 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90963 = alloc_clo(lam86992_fptr, 8);

//setting env list
clo90963[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo90963[2] = filter;
clo90963[3] = cdr;
clo90963[4] = list;
clo90963[5] = kont86539;
clo90963[6] = cons;
clo90963[7] = op;
clo90963[8] = lst;
void* f8654786688 = encode_clo(clo90963);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8654786688;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam86995_fptr() // lam86995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86996 = arg_buffer[1];
//reading env and args
void* a8632386711 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env86996))[3];
//not do dummy comment
void* kont86548 = (decode_clo(env86996))[2];
//not do dummy comment
void* a8632186708 = (decode_clo(env86996))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont86548;
arg_buffer[3] = a8632186708;
arg_buffer[4] = a8632386711;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86995 = encode_clo(alloc_clo(lam86995_fptr, 0));

void* lam86998_fptr() // lam86998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env86999 = arg_buffer[1];
//reading env and args
void* a8632186708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env86999))[4];
//not do dummy comment
void* kont86548 = (decode_clo(env86999))[3];
//not do dummy comment
void* n = (decode_clo(env86999))[2];
//not do dummy comment
void* _u45 = (decode_clo(env86999))[1];
mpz_t* mpzvar90964 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90964, "1", 10);
void* a8632286709 = encode_mpz(mpzvar90964);

//creating new closure instance
void** clo90966 = alloc_clo(lam86995_fptr, 3);

//setting env list
clo90966[1] = a8632186708;
clo90966[2] = kont86548;
clo90966[3] = drop;
void* f8654986710 = encode_clo(clo90966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8654986710;
arg_buffer[3] = n;
arg_buffer[4] = a8632286709;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam86998 = encode_clo(alloc_clo(lam86998_fptr, 0));

void* lam87000_fptr() // lam87000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87001 = arg_buffer[1];
//reading env and args
void* a8632086706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87001))[6];
//not do dummy comment
void* kont86548 = (decode_clo(env87001))[5];
//not do dummy comment
void* n = (decode_clo(env87001))[4];
//not do dummy comment
void* _u45 = (decode_clo(env87001))[3];
//not do dummy comment
void* lst = (decode_clo(env87001))[2];
//not do dummy comment
void* drop = (decode_clo(env87001))[1];

//if-clause
bool if_guard90967 = is_true(a8632086706);
if(if_guard90967)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86548);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86548))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90969 = alloc_clo(lam86998_fptr, 4);

//setting env list
clo90969[1] = _u45;
clo90969[2] = n;
clo90969[3] = kont86548;
clo90969[4] = drop;
void* f8655086707 = encode_clo(clo90969);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8655086707;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87000 = encode_clo(alloc_clo(lam87000_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87003 = arg_buffer[1];
//reading env and args
void* kont86548 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar90970 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90970, "0", 10);
void* a8631986704 = encode_mpz(mpzvar90970);

//creating new closure instance
void** clo90972 = alloc_clo(lam87000_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo90972[1] = drop;
clo90972[2] = lst;
clo90972[3] = _u45;
clo90972[4] = n;
clo90972[5] = kont86548;
clo90972[6] = cdr;
void* f8655186705 = encode_clo(clo90972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8655186705;
arg_buffer[3] = n;
arg_buffer[4] = a8631986704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam87004_fptr() // lam87004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87005 = arg_buffer[1];
//reading env and args
void* a8632786719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env87005))[3];
//not do dummy comment
void* kont86552 = (decode_clo(env87005))[2];
//not do dummy comment
void* a8632586715 = (decode_clo(env87005))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont86552;
arg_buffer[3] = a8632586715;
arg_buffer[4] = a8632786719;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87004 = encode_clo(alloc_clo(lam87004_fptr, 0));

void* lam87006_fptr() // lam87006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87007 = arg_buffer[1];
//reading env and args
void* a8632686717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env87007))[5];
//not do dummy comment
void* kont86552 = (decode_clo(env87007))[4];
//not do dummy comment
void* a8632586715 = (decode_clo(env87007))[3];
//not do dummy comment
void* proc = (decode_clo(env87007))[2];
//not do dummy comment
void* acc = (decode_clo(env87007))[1];

//creating new closure instance
void** clo90974 = alloc_clo(lam87004_fptr, 3);

//setting env list
clo90974[1] = a8632586715;
clo90974[2] = kont86552;
clo90974[3] = proc;
void* f8655386718 = encode_clo(clo90974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8655386718;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8632686717;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87006 = encode_clo(alloc_clo(lam87006_fptr, 0));

void* lam87008_fptr() // lam87008 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87009 = arg_buffer[1];
//reading env and args
void* a8632586715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87009))[6];
//not do dummy comment
void* kont86552 = (decode_clo(env87009))[5];
//not do dummy comment
void* foldr = (decode_clo(env87009))[4];
//not do dummy comment
void* lst = (decode_clo(env87009))[3];
//not do dummy comment
void* proc = (decode_clo(env87009))[2];
//not do dummy comment
void* acc = (decode_clo(env87009))[1];

//creating new closure instance
void** clo90976 = alloc_clo(lam87006_fptr, 5);

//setting env list
clo90976[1] = acc;
clo90976[2] = proc;
clo90976[3] = a8632586715;
clo90976[4] = kont86552;
clo90976[5] = foldr;
void* f8655486716 = encode_clo(clo90976);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8655486716;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87008 = encode_clo(alloc_clo(lam87008_fptr, 0));

void* lam87010_fptr() // lam87010 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87011 = arg_buffer[1];
//reading env and args
void* a8632486713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87011))[7];
//not do dummy comment
void* kont86552 = (decode_clo(env87011))[6];
//not do dummy comment
void* car = (decode_clo(env87011))[5];
//not do dummy comment
void* foldr = (decode_clo(env87011))[4];
//not do dummy comment
void* lst = (decode_clo(env87011))[3];
//not do dummy comment
void* proc = (decode_clo(env87011))[2];
//not do dummy comment
void* acc = (decode_clo(env87011))[1];

//if-clause
bool if_guard90977 = is_true(a8632486713);
if(if_guard90977)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86552);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86552))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90979 = alloc_clo(lam87008_fptr, 6);

//setting env list
clo90979[1] = acc;
clo90979[2] = proc;
clo90979[3] = lst;
clo90979[4] = foldr;
clo90979[5] = kont86552;
clo90979[6] = cdr;
void* f8655586714 = encode_clo(clo90979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8655586714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87010 = encode_clo(alloc_clo(lam87010_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87012 = arg_buffer[1];
//reading env and args
void* kont86552 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo90981 = alloc_clo(lam87010_fptr, 7);

//setting env list
clo90981[1] = acc;
clo90981[2] = proc;
clo90981[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo90981[4] = foldr;
clo90981[5] = car;
clo90981[6] = kont86552;
clo90981[7] = cdr;
void* f8655686712 = encode_clo(clo90981);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8655686712;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam87013_fptr() // lam87013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87014 = arg_buffer[1];
//reading env and args
void* a8633186727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86557 = (decode_clo(env87014))[3];
//not do dummy comment
void* a8632986723 = (decode_clo(env87014))[2];
//not do dummy comment
void* cons = (decode_clo(env87014))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont86557;
arg_buffer[3] = a8632986723;
arg_buffer[4] = a8633186727;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87013 = encode_clo(alloc_clo(lam87013_fptr, 0));

void* lam87015_fptr() // lam87015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87016 = arg_buffer[1];
//reading env and args
void* a8633086725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86557 = (decode_clo(env87016))[5];
//not do dummy comment
void* a8632986723 = (decode_clo(env87016))[4];
//not do dummy comment
void* append = (decode_clo(env87016))[3];
//not do dummy comment
void* lst2 = (decode_clo(env87016))[2];
//not do dummy comment
void* cons = (decode_clo(env87016))[1];

//creating new closure instance
void** clo90983 = alloc_clo(lam87013_fptr, 3);

//setting env list
clo90983[1] = cons;
clo90983[2] = a8632986723;
clo90983[3] = kont86557;
void* f8655886726 = encode_clo(clo90983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8655886726;
arg_buffer[3] = a8633086725;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87015 = encode_clo(alloc_clo(lam87015_fptr, 0));

void* lam87017_fptr() // lam87017 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87018 = arg_buffer[1];
//reading env and args
void* a8632986723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87018))[6];
//not do dummy comment
void* kont86557 = (decode_clo(env87018))[5];
//not do dummy comment
void* append = (decode_clo(env87018))[4];
//not do dummy comment
void* lst2 = (decode_clo(env87018))[3];
//not do dummy comment
void* lst1 = (decode_clo(env87018))[2];
//not do dummy comment
void* cons = (decode_clo(env87018))[1];

//creating new closure instance
void** clo90985 = alloc_clo(lam87015_fptr, 5);

//setting env list
clo90985[1] = cons;
clo90985[2] = lst2;
clo90985[3] = append;
clo90985[4] = a8632986723;
clo90985[5] = kont86557;
void* f8655986724 = encode_clo(clo90985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8655986724;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87017 = encode_clo(alloc_clo(lam87017_fptr, 0));

void* lam87019_fptr() // lam87019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87020 = arg_buffer[1];
//reading env and args
void* a8632886721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87020))[7];
//not do dummy comment
void* kont86557 = (decode_clo(env87020))[6];
//not do dummy comment
void* append = (decode_clo(env87020))[5];
//not do dummy comment
void* lst2 = (decode_clo(env87020))[4];
//not do dummy comment
void* cons = (decode_clo(env87020))[3];
//not do dummy comment
void* lst1 = (decode_clo(env87020))[2];
//not do dummy comment
void* car = (decode_clo(env87020))[1];

//if-clause
bool if_guard90986 = is_true(a8632886721);
if(if_guard90986)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86557);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86557))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90988 = alloc_clo(lam87017_fptr, 6);

//setting env list
clo90988[1] = cons;
clo90988[2] = lst1;
clo90988[3] = lst2;
clo90988[4] = append;
clo90988[5] = kont86557;
clo90988[6] = cdr;
void* f8656086722 = encode_clo(clo90988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8656086722;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87019 = encode_clo(alloc_clo(lam87019_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87021 = arg_buffer[1];
//reading env and args
void* kont86557 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90990 = alloc_clo(lam87019_fptr, 7);

//setting env list
clo90990[1] = car;
clo90990[2] = lst1;
clo90990[3] = cons;
clo90990[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo90990[5] = append;
clo90990[6] = kont86557;
clo90990[7] = cdr;
void* f8656186720 = encode_clo(clo90990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8656186720;
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
void* _87022 = arg_buffer[1];
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

void* kont8656286728 = prim_car(lst);
void* lst86729 = prim_cdr(lst);
void* x8633286730 = apply_prim_hash(lst86729);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8656286728);
arg_buffer[2] = x8633286730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8656286728))[0]);
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
void* _87023 = arg_buffer[1];
//reading env and args
void* kont86564 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8633386731 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86564);
arg_buffer[2] = x8633386731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86564))[0]);
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
void* _87024 = arg_buffer[1];
//reading env and args
void* kont86565 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8633486732 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86565);
arg_buffer[2] = x8633486732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86565))[0]);
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
void* _87025 = arg_buffer[1];
//reading env and args
void* kont86566 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8633586733 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86566);
arg_buffer[2] = x8633586733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86566))[0]);
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
void* _87026 = arg_buffer[1];
//reading env and args
void* kont86567 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8633686734 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86567);
arg_buffer[2] = x8633686734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86567))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam87029_fptr() // lam87029 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87030 = arg_buffer[1];
//reading env and args
void* a8635886760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8635286753 = (decode_clo(env87030))[3];
//not do dummy comment
void* append = (decode_clo(env87030))[2];
//not do dummy comment
void* kont86568 = (decode_clo(env87030))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = kont86568;
arg_buffer[3] = a8635286753;
arg_buffer[4] = a8635886760;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87029 = encode_clo(alloc_clo(lam87029_fptr, 0));

void* lam87036_fptr() // lam87036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87037 = arg_buffer[1];
//reading env and args
void* a8635286753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env87037))[3];
//not do dummy comment
void* append = (decode_clo(env87037))[2];
//not do dummy comment
void* kont86568 = (decode_clo(env87037))[1];
mpz_t* mpzvar90991 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90991, "234", 10);
void* a8635386754 = encode_mpz(mpzvar90991);
mpz_t* mpzvar90992 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90992, "12212", 10);
void* a8635486755 = encode_mpz(mpzvar90992);
mpz_t* mpzvar90993 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90993, "332", 10);
void* a8635586756 = encode_mpz(mpzvar90993);
mpz_t* mpzvar90994 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90994, "12", 10);
void* a8635686757 = encode_mpz(mpzvar90994);
mpz_t* mpzvar90995 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90995, "2", 10);
void* a8635786758 = encode_mpz(mpzvar90995);

//creating new closure instance
void** clo90997 = alloc_clo(lam87029_fptr, 3);

//setting env list
clo90997[1] = kont86568;
clo90997[2] = append;
clo90997[3] = a8635286753;
void* f8656986759 = encode_clo(clo90997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8656986759;
arg_buffer[3] = a8635386754;
arg_buffer[4] = a8635486755;
arg_buffer[5] = a8635586756;
arg_buffer[6] = a8635686757;
arg_buffer[7] = a8635786758;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87036 = encode_clo(alloc_clo(lam87036_fptr, 0));

void* lam87044_fptr() // lam87044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87045 = arg_buffer[1];
//reading env and args
void* a8646986874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8636486768 = (decode_clo(env87045))[3];
//not do dummy comment
void* append = (decode_clo(env87045))[2];
//not do dummy comment
void* kont86568 = (decode_clo(env87045))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = kont86568;
arg_buffer[3] = a8636486768;
arg_buffer[4] = a8646986874;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87044 = encode_clo(alloc_clo(lam87044_fptr, 0));

void* lam87150_fptr() // lam87150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87151 = arg_buffer[1];
//reading env and args
void* a8636486768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env87151))[3];
//not do dummy comment
void* append = (decode_clo(env87151))[2];
//not do dummy comment
void* kont86568 = (decode_clo(env87151))[1];
mpz_t* mpzvar90998 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90998, "0", 10);
void* a8636586769 = encode_mpz(mpzvar90998);
mpz_t* mpzvar90999 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90999, "1", 10);
void* a8636686770 = encode_mpz(mpzvar90999);
mpz_t* mpzvar91000 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91000, "2", 10);
void* a8636786771 = encode_mpz(mpzvar91000);
mpz_t* mpzvar91001 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91001, "3", 10);
void* a8636886772 = encode_mpz(mpzvar91001);
mpz_t* mpzvar91002 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91002, "4", 10);
void* a8636986773 = encode_mpz(mpzvar91002);
mpz_t* mpzvar91003 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91003, "5", 10);
void* a8637086774 = encode_mpz(mpzvar91003);
mpz_t* mpzvar91004 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91004, "6", 10);
void* a8637186775 = encode_mpz(mpzvar91004);
mpz_t* mpzvar91005 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91005, "7", 10);
void* a8637286776 = encode_mpz(mpzvar91005);
mpz_t* mpzvar91006 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91006, "8", 10);
void* a8637386777 = encode_mpz(mpzvar91006);
mpz_t* mpzvar91007 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91007, "9", 10);
void* a8637486778 = encode_mpz(mpzvar91007);
mpz_t* mpzvar91008 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91008, "10", 10);
void* a8637586779 = encode_mpz(mpzvar91008);
mpz_t* mpzvar91009 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91009, "11", 10);
void* a8637686780 = encode_mpz(mpzvar91009);
mpz_t* mpzvar91010 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91010, "12", 10);
void* a8637786781 = encode_mpz(mpzvar91010);
mpz_t* mpzvar91011 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91011, "13", 10);
void* a8637886782 = encode_mpz(mpzvar91011);
mpz_t* mpzvar91012 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91012, "14", 10);
void* a8637986783 = encode_mpz(mpzvar91012);
mpz_t* mpzvar91013 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91013, "15", 10);
void* a8638086784 = encode_mpz(mpzvar91013);
mpz_t* mpzvar91014 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91014, "16", 10);
void* a8638186785 = encode_mpz(mpzvar91014);
mpz_t* mpzvar91015 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91015, "17", 10);
void* a8638286786 = encode_mpz(mpzvar91015);
mpz_t* mpzvar91016 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91016, "18", 10);
void* a8638386787 = encode_mpz(mpzvar91016);
mpz_t* mpzvar91017 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91017, "19", 10);
void* a8638486788 = encode_mpz(mpzvar91017);
mpz_t* mpzvar91018 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91018, "20", 10);
void* a8638586789 = encode_mpz(mpzvar91018);
mpz_t* mpzvar91019 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91019, "21", 10);
void* a8638686790 = encode_mpz(mpzvar91019);
mpz_t* mpzvar91020 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91020, "22", 10);
void* a8638786791 = encode_mpz(mpzvar91020);
mpz_t* mpzvar91021 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91021, "23", 10);
void* a8638886792 = encode_mpz(mpzvar91021);
mpz_t* mpzvar91022 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91022, "24", 10);
void* a8638986793 = encode_mpz(mpzvar91022);
mpz_t* mpzvar91023 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91023, "25", 10);
void* a8639086794 = encode_mpz(mpzvar91023);
mpz_t* mpzvar91024 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91024, "26", 10);
void* a8639186795 = encode_mpz(mpzvar91024);
mpz_t* mpzvar91025 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91025, "27", 10);
void* a8639286796 = encode_mpz(mpzvar91025);
mpz_t* mpzvar91026 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91026, "28", 10);
void* a8639386797 = encode_mpz(mpzvar91026);
mpz_t* mpzvar91027 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91027, "29", 10);
void* a8639486798 = encode_mpz(mpzvar91027);
mpz_t* mpzvar91028 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91028, "30", 10);
void* a8639586799 = encode_mpz(mpzvar91028);
mpz_t* mpzvar91029 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91029, "31", 10);
void* a8639686800 = encode_mpz(mpzvar91029);
mpz_t* mpzvar91030 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91030, "32", 10);
void* a8639786801 = encode_mpz(mpzvar91030);
mpz_t* mpzvar91031 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91031, "33", 10);
void* a8639886802 = encode_mpz(mpzvar91031);
mpz_t* mpzvar91032 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91032, "34", 10);
void* a8639986803 = encode_mpz(mpzvar91032);
mpz_t* mpzvar91033 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91033, "35", 10);
void* a8640086804 = encode_mpz(mpzvar91033);
mpz_t* mpzvar91034 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91034, "36", 10);
void* a8640186805 = encode_mpz(mpzvar91034);
mpz_t* mpzvar91035 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91035, "37", 10);
void* a8640286806 = encode_mpz(mpzvar91035);
mpz_t* mpzvar91036 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91036, "38", 10);
void* a8640386807 = encode_mpz(mpzvar91036);
mpz_t* mpzvar91037 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91037, "39", 10);
void* a8640486808 = encode_mpz(mpzvar91037);
mpz_t* mpzvar91038 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91038, "40", 10);
void* a8640586809 = encode_mpz(mpzvar91038);
mpz_t* mpzvar91039 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91039, "41", 10);
void* a8640686810 = encode_mpz(mpzvar91039);
mpz_t* mpzvar91040 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91040, "42", 10);
void* a8640786811 = encode_mpz(mpzvar91040);
mpz_t* mpzvar91041 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91041, "43", 10);
void* a8640886812 = encode_mpz(mpzvar91041);
mpz_t* mpzvar91042 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91042, "44", 10);
void* a8640986813 = encode_mpz(mpzvar91042);
mpz_t* mpzvar91043 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91043, "45", 10);
void* a8641086814 = encode_mpz(mpzvar91043);
mpz_t* mpzvar91044 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91044, "46", 10);
void* a8641186815 = encode_mpz(mpzvar91044);
mpz_t* mpzvar91045 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91045, "47", 10);
void* a8641286816 = encode_mpz(mpzvar91045);
mpz_t* mpzvar91046 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91046, "48", 10);
void* a8641386817 = encode_mpz(mpzvar91046);
mpz_t* mpzvar91047 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91047, "49", 10);
void* a8641486818 = encode_mpz(mpzvar91047);
mpz_t* mpzvar91048 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91048, "50", 10);
void* a8641586819 = encode_mpz(mpzvar91048);
mpz_t* mpzvar91049 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91049, "51", 10);
void* a8641686820 = encode_mpz(mpzvar91049);
mpz_t* mpzvar91050 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91050, "52", 10);
void* a8641786821 = encode_mpz(mpzvar91050);
mpz_t* mpzvar91051 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91051, "53", 10);
void* a8641886822 = encode_mpz(mpzvar91051);
mpz_t* mpzvar91052 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91052, "54", 10);
void* a8641986823 = encode_mpz(mpzvar91052);
mpz_t* mpzvar91053 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91053, "55", 10);
void* a8642086824 = encode_mpz(mpzvar91053);
mpz_t* mpzvar91054 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91054, "56", 10);
void* a8642186825 = encode_mpz(mpzvar91054);
mpz_t* mpzvar91055 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91055, "57", 10);
void* a8642286826 = encode_mpz(mpzvar91055);
mpz_t* mpzvar91056 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91056, "58", 10);
void* a8642386827 = encode_mpz(mpzvar91056);
mpz_t* mpzvar91057 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91057, "59", 10);
void* a8642486828 = encode_mpz(mpzvar91057);
mpz_t* mpzvar91058 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91058, "60", 10);
void* a8642586829 = encode_mpz(mpzvar91058);
mpz_t* mpzvar91059 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91059, "61", 10);
void* a8642686830 = encode_mpz(mpzvar91059);
mpz_t* mpzvar91060 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91060, "62", 10);
void* a8642786831 = encode_mpz(mpzvar91060);
mpz_t* mpzvar91061 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91061, "63", 10);
void* a8642886832 = encode_mpz(mpzvar91061);
mpz_t* mpzvar91062 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91062, "64", 10);
void* a8642986833 = encode_mpz(mpzvar91062);
mpz_t* mpzvar91063 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91063, "65", 10);
void* a8643086834 = encode_mpz(mpzvar91063);
mpz_t* mpzvar91064 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91064, "66", 10);
void* a8643186835 = encode_mpz(mpzvar91064);
mpz_t* mpzvar91065 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91065, "67", 10);
void* a8643286836 = encode_mpz(mpzvar91065);
mpz_t* mpzvar91066 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91066, "68", 10);
void* a8643386837 = encode_mpz(mpzvar91066);
mpz_t* mpzvar91067 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91067, "69", 10);
void* a8643486838 = encode_mpz(mpzvar91067);
mpz_t* mpzvar91068 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91068, "70", 10);
void* a8643586839 = encode_mpz(mpzvar91068);
mpz_t* mpzvar91069 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91069, "71", 10);
void* a8643686840 = encode_mpz(mpzvar91069);
mpz_t* mpzvar91070 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91070, "72", 10);
void* a8643786841 = encode_mpz(mpzvar91070);
mpz_t* mpzvar91071 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91071, "73", 10);
void* a8643886842 = encode_mpz(mpzvar91071);
mpz_t* mpzvar91072 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91072, "74", 10);
void* a8643986843 = encode_mpz(mpzvar91072);
mpz_t* mpzvar91073 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91073, "75", 10);
void* a8644086844 = encode_mpz(mpzvar91073);
mpz_t* mpzvar91074 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91074, "76", 10);
void* a8644186845 = encode_mpz(mpzvar91074);
mpz_t* mpzvar91075 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91075, "77", 10);
void* a8644286846 = encode_mpz(mpzvar91075);
mpz_t* mpzvar91076 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91076, "78", 10);
void* a8644386847 = encode_mpz(mpzvar91076);
mpz_t* mpzvar91077 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91077, "79", 10);
void* a8644486848 = encode_mpz(mpzvar91077);
mpz_t* mpzvar91078 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91078, "80", 10);
void* a8644586849 = encode_mpz(mpzvar91078);
mpz_t* mpzvar91079 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91079, "81", 10);
void* a8644686850 = encode_mpz(mpzvar91079);
mpz_t* mpzvar91080 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91080, "82", 10);
void* a8644786851 = encode_mpz(mpzvar91080);
mpz_t* mpzvar91081 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91081, "83", 10);
void* a8644886852 = encode_mpz(mpzvar91081);
mpz_t* mpzvar91082 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91082, "84", 10);
void* a8644986853 = encode_mpz(mpzvar91082);
mpz_t* mpzvar91083 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91083, "85", 10);
void* a8645086854 = encode_mpz(mpzvar91083);
mpz_t* mpzvar91084 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91084, "86", 10);
void* a8645186855 = encode_mpz(mpzvar91084);
mpz_t* mpzvar91085 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91085, "87", 10);
void* a8645286856 = encode_mpz(mpzvar91085);
mpz_t* mpzvar91086 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91086, "88", 10);
void* a8645386857 = encode_mpz(mpzvar91086);
mpz_t* mpzvar91087 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91087, "89", 10);
void* a8645486858 = encode_mpz(mpzvar91087);
mpz_t* mpzvar91088 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91088, "90", 10);
void* a8645586859 = encode_mpz(mpzvar91088);
mpz_t* mpzvar91089 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91089, "91", 10);
void* a8645686860 = encode_mpz(mpzvar91089);
mpz_t* mpzvar91090 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91090, "92", 10);
void* a8645786861 = encode_mpz(mpzvar91090);
mpz_t* mpzvar91091 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91091, "93", 10);
void* a8645886862 = encode_mpz(mpzvar91091);
mpz_t* mpzvar91092 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91092, "94", 10);
void* a8645986863 = encode_mpz(mpzvar91092);
mpz_t* mpzvar91093 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91093, "95", 10);
void* a8646086864 = encode_mpz(mpzvar91093);
mpz_t* mpzvar91094 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91094, "96", 10);
void* a8646186865 = encode_mpz(mpzvar91094);
mpz_t* mpzvar91095 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91095, "97", 10);
void* a8646286866 = encode_mpz(mpzvar91095);
mpz_t* mpzvar91096 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91096, "98", 10);
void* a8646386867 = encode_mpz(mpzvar91096);
mpz_t* mpzvar91097 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91097, "99", 10);
void* a8646486868 = encode_mpz(mpzvar91097);
mpz_t* mpzvar91098 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91098, "100", 10);
void* a8646586869 = encode_mpz(mpzvar91098);
mpz_t* mpzvar91099 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91099, "101", 10);
void* a8646686870 = encode_mpz(mpzvar91099);
mpz_t* mpzvar91100 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91100, "102", 10);
void* a8646786871 = encode_mpz(mpzvar91100);
mpz_t* mpzvar91101 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91101, "10459928", 10);
void* a8646886872 = encode_mpz(mpzvar91101);

//creating new closure instance
void** clo91103 = alloc_clo(lam87044_fptr, 3);

//setting env list
clo91103[1] = kont86568;
clo91103[2] = append;
clo91103[3] = a8636486768;
void* f8657186873 = encode_clo(clo91103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8657186873;
arg_buffer[3] = a8636586769;
arg_buffer[4] = a8636686770;
arg_buffer[5] = a8636786771;
arg_buffer[6] = a8636886772;
arg_buffer[7] = a8636986773;
arg_buffer[8] = a8637086774;
arg_buffer[9] = a8637186775;
arg_buffer[10] = a8637286776;
arg_buffer[11] = a8637386777;
arg_buffer[12] = a8637486778;
arg_buffer[13] = a8637586779;
arg_buffer[14] = a8637686780;
arg_buffer[15] = a8637786781;
arg_buffer[16] = a8637886782;
arg_buffer[17] = a8637986783;
arg_buffer[18] = a8638086784;
arg_buffer[19] = a8638186785;
arg_buffer[20] = a8638286786;
arg_buffer[21] = a8638386787;
arg_buffer[22] = a8638486788;
arg_buffer[23] = a8638586789;
arg_buffer[24] = a8638686790;
arg_buffer[25] = a8638786791;
arg_buffer[26] = a8638886792;
arg_buffer[27] = a8638986793;
arg_buffer[28] = a8639086794;
arg_buffer[29] = a8639186795;
arg_buffer[30] = a8639286796;
arg_buffer[31] = a8639386797;
arg_buffer[32] = a8639486798;
arg_buffer[33] = a8639586799;
arg_buffer[34] = a8639686800;
arg_buffer[35] = a8639786801;
arg_buffer[36] = a8639886802;
arg_buffer[37] = a8639986803;
arg_buffer[38] = a8640086804;
arg_buffer[39] = a8640186805;
arg_buffer[40] = a8640286806;
arg_buffer[41] = a8640386807;
arg_buffer[42] = a8640486808;
arg_buffer[43] = a8640586809;
arg_buffer[44] = a8640686810;
arg_buffer[45] = a8640786811;
arg_buffer[46] = a8640886812;
arg_buffer[47] = a8640986813;
arg_buffer[48] = a8641086814;
arg_buffer[49] = a8641186815;
arg_buffer[50] = a8641286816;
arg_buffer[51] = a8641386817;
arg_buffer[52] = a8641486818;
arg_buffer[53] = a8641586819;
arg_buffer[54] = a8641686820;
arg_buffer[55] = a8641786821;
arg_buffer[56] = a8641886822;
arg_buffer[57] = a8641986823;
arg_buffer[58] = a8642086824;
arg_buffer[59] = a8642186825;
arg_buffer[60] = a8642286826;
arg_buffer[61] = a8642386827;
arg_buffer[62] = a8642486828;
arg_buffer[63] = a8642586829;
arg_buffer[64] = a8642686830;
arg_buffer[65] = a8642786831;
arg_buffer[66] = a8642886832;
arg_buffer[67] = a8642986833;
arg_buffer[68] = a8643086834;
arg_buffer[69] = a8643186835;
arg_buffer[70] = a8643286836;
arg_buffer[71] = a8643386837;
arg_buffer[72] = a8643486838;
arg_buffer[73] = a8643586839;
arg_buffer[74] = a8643686840;
arg_buffer[75] = a8643786841;
arg_buffer[76] = a8643886842;
arg_buffer[77] = a8643986843;
arg_buffer[78] = a8644086844;
arg_buffer[79] = a8644186845;
arg_buffer[80] = a8644286846;
arg_buffer[81] = a8644386847;
arg_buffer[82] = a8644486848;
arg_buffer[83] = a8644586849;
arg_buffer[84] = a8644686850;
arg_buffer[85] = a8644786851;
arg_buffer[86] = a8644886852;
arg_buffer[87] = a8644986853;
arg_buffer[88] = a8645086854;
arg_buffer[89] = a8645186855;
arg_buffer[90] = a8645286856;
arg_buffer[91] = a8645386857;
arg_buffer[92] = a8645486858;
arg_buffer[93] = a8645586859;
arg_buffer[94] = a8645686860;
arg_buffer[95] = a8645786861;
arg_buffer[96] = a8645886862;
arg_buffer[97] = a8645986863;
arg_buffer[98] = a8646086864;
arg_buffer[99] = a8646186865;
arg_buffer[100] = a8646286866;
arg_buffer[101] = a8646386867;
arg_buffer[102] = a8646486868;
arg_buffer[103] = a8646586869;
arg_buffer[104] = a8646686870;
arg_buffer[105] = a8646786871;
arg_buffer[106] = a8646886872;
arg_buffer[0] = reinterpret_cast<void*>(106);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87150 = encode_clo(alloc_clo(lam87150_fptr, 0));

void* lam87153_fptr() // lam87153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87154 = arg_buffer[1];
//reading env and args
void* a8636086763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env87154))[4];
//not do dummy comment
void* kont86568 = (decode_clo(env87154))[3];
//not do dummy comment
void* append = (decode_clo(env87154))[2];
//not do dummy comment
void* _u42 = (decode_clo(env87154))[1];

//if-clause
bool if_guard91104 = is_true(a8636086763);
if(if_guard91104)
{
mpz_t* mpzvar91105 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91105, "10", 10);
void* a8636186764 = encode_mpz(mpzvar91105);
mpz_t* mpzvar91106 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91106, "2", 10);
void* a8636286765 = encode_mpz(mpzvar91106);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont86568;
arg_buffer[3] = a8636186764;
arg_buffer[4] = a8636286765;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar91107 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91107, "0", 10);
void* a8636386766 = encode_mpz(mpzvar91107);

//creating new closure instance
void** clo91109 = alloc_clo(lam87150_fptr, 3);

//setting env list
clo91109[1] = kont86568;
clo91109[2] = append;
clo91109[3] = list;
void* f8657286767 = encode_clo(clo91109);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8657286767;
arg_buffer[3] = a8636386766;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87153 = encode_clo(alloc_clo(lam87153_fptr, 0));

void* lam87156_fptr() // lam87156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87157 = arg_buffer[1];
//reading env and args
void* a8634786747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env87157))[5];
//not do dummy comment
void* even_u63 = (decode_clo(env87157))[4];
//not do dummy comment
void* kont86568 = (decode_clo(env87157))[3];
//not do dummy comment
void* append = (decode_clo(env87157))[2];
//not do dummy comment
void* _u42 = (decode_clo(env87157))[1];

//if-clause
bool if_guard91110 = is_true(a8634786747);
if(if_guard91110)
{
mpz_t* mpzvar91111 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91111, "1", 10);
void* a8634886748 = encode_mpz(mpzvar91111);
mpz_t* mpzvar91112 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91112, "2", 10);
void* a8634986749 = encode_mpz(mpzvar91112);
mpz_t* mpzvar91113 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91113, "3", 10);
void* a8635086750 = encode_mpz(mpzvar91113);
mpz_t* mpzvar91114 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91114, "4", 10);
void* a8635186751 = encode_mpz(mpzvar91114);

//creating new closure instance
void** clo91116 = alloc_clo(lam87036_fptr, 3);

//setting env list
clo91116[1] = kont86568;
clo91116[2] = append;
clo91116[3] = list;
void* f8657086752 = encode_clo(clo91116);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8657086752;
arg_buffer[3] = a8634886748;
arg_buffer[4] = a8634986749;
arg_buffer[5] = a8635086750;
arg_buffer[6] = a8635186751;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar91117 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91117, "3", 10);
void* a8635986761 = encode_mpz(mpzvar91117);

//creating new closure instance
void** clo91119 = alloc_clo(lam87153_fptr, 4);

//setting env list
clo91119[1] = _u42;
clo91119[2] = append;
clo91119[3] = kont86568;
clo91119[4] = list;
void* f8657386762 = encode_clo(clo91119);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f8657386762;
arg_buffer[3] = a8635986761;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87156 = encode_clo(alloc_clo(lam87156_fptr, 0));

void* lam87158_fptr() // lam87158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87159 = arg_buffer[1];
//reading env and args
void* a8634486745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env87159))[5];
//not do dummy comment
void* even_u63 = (decode_clo(env87159))[4];
//not do dummy comment
void* kont86568 = (decode_clo(env87159))[3];
//not do dummy comment
void* append = (decode_clo(env87159))[2];
//not do dummy comment
void* _u42 = (decode_clo(env87159))[1];

//creating new closure instance
void** clo91121 = alloc_clo(lam87156_fptr, 5);

//setting env list
clo91121[1] = _u42;
clo91121[2] = append;
clo91121[3] = kont86568;
clo91121[4] = even_u63;
clo91121[5] = list;
void* f8657486746 = encode_clo(clo91121);



//if-clause
bool if_guard91122 = is_true(a8634486745);
if(if_guard91122)
{
void* x8634586875 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f8657486746);
arg_buffer[2] = x8634586875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8657486746))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x8634686876 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f8657486746);
arg_buffer[2] = x8634686876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8657486746))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87158 = encode_clo(alloc_clo(lam87158_fptr, 0));

void* lam87160_fptr() // lam87160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87161 = arg_buffer[1];
//reading env and args
void* a8634386743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env87161))[7];
//not do dummy comment
void* even_u63 = (decode_clo(env87161))[6];
//not do dummy comment
void* a8634086739 = (decode_clo(env87161))[5];
//not do dummy comment
void* kont86568 = (decode_clo(env87161))[4];
//not do dummy comment
void* append = (decode_clo(env87161))[3];
//not do dummy comment
void* _u42 = (decode_clo(env87161))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env87161))[1];

//creating new closure instance
void** clo91124 = alloc_clo(lam87158_fptr, 5);

//setting env list
clo91124[1] = _u42;
clo91124[2] = append;
clo91124[3] = kont86568;
clo91124[4] = even_u63;
clo91124[5] = list;
void* f8657586744 = encode_clo(clo91124);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8657586744;
arg_buffer[3] = a8634086739;
arg_buffer[4] = a8634386743;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87160 = encode_clo(alloc_clo(lam87160_fptr, 0));

void* lam87164_fptr() // lam87164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87165 = arg_buffer[1];
//reading env and args
void* a8634086739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env87165))[7];
//not do dummy comment
void* even_u63 = (decode_clo(env87165))[6];
//not do dummy comment
void* kont86568 = (decode_clo(env87165))[5];
//not do dummy comment
void* _u45 = (decode_clo(env87165))[4];
//not do dummy comment
void* append = (decode_clo(env87165))[3];
//not do dummy comment
void* _u42 = (decode_clo(env87165))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env87165))[1];
mpz_t* mpzvar91125 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91125, "10", 10);
void* a8634186740 = encode_mpz(mpzvar91125);
mpz_t* mpzvar91126 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91126, "4", 10);
void* a8634286741 = encode_mpz(mpzvar91126);

//creating new closure instance
void** clo91128 = alloc_clo(lam87160_fptr, 7);

//setting env list
clo91128[1] = equal_u63;
clo91128[2] = _u42;
clo91128[3] = append;
clo91128[4] = kont86568;
clo91128[5] = a8634086739;
clo91128[6] = even_u63;
clo91128[7] = list;
void* f8657686742 = encode_clo(clo91128);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8657686742;
arg_buffer[3] = a8634186740;
arg_buffer[4] = a8634286741;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87164 = encode_clo(alloc_clo(lam87164_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87169 = arg_buffer[1];
//reading env and args
void* kont86568 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar91129 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91129, "1", 10);
void* a8633786735 = encode_mpz(mpzvar91129);
mpz_t* mpzvar91130 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91130, "2", 10);
void* a8633886736 = encode_mpz(mpzvar91130);
mpz_t* mpzvar91131 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91131, "3", 10);
void* a8633986737 = encode_mpz(mpzvar91131);

//creating new closure instance
void** clo91133 = alloc_clo(lam87164_fptr, 7);

//setting env list
clo91133[1] = equal_u63;
clo91133[2] = _u42;
clo91133[3] = append;
clo91133[4] = _u45;
clo91133[5] = kont86568;
clo91133[6] = even_u63;
clo91133[7] = list;
void* f8657786738 = encode_clo(clo91133);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f8657786738;
arg_buffer[3] = a8633786735;
arg_buffer[4] = a8633886736;
arg_buffer[5] = a8633986737;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam87170_fptr() // lam87170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87171 = arg_buffer[1];
//reading env and args
void* x8647086878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86578 = (decode_clo(env87171))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86578);
arg_buffer[2] = x8647086878;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86578))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87170 = encode_clo(alloc_clo(lam87170_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87172 = arg_buffer[1];
//reading env and args
void* kont86578 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo91135 = alloc_clo(lam87170_fptr, 1);

//setting env list
clo91135[1] = kont86578;
void* f8657986877 = encode_clo(clo91135);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8657986877;
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

