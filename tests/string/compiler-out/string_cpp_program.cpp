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
void* _33641 = arg_buffer[1];
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

void* kont3334733464 = prim_car(lst);
void* lst33465 = prim_cdr(lst);
void* x3324733466 = apply_prim__u43(lst33465);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3334733464);
arg_buffer[2] = x3324733466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3334733464))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33642 = arg_buffer[1];
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

void* kont3334933467 = prim_car(lst);
void* lst33468 = prim_cdr(lst);
void* x3324833469 = apply_prim_max(lst33468);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3334933467);
arg_buffer[2] = x3324833469;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3334933467))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33643 = arg_buffer[1];
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

void* kont3335133470 = prim_car(lst);
void* lst33471 = prim_cdr(lst);
void* x3324933472 = apply_prim__u45(lst33471);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3335133470);
arg_buffer[2] = x3324933472;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3335133470))[0]);
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
void* _33644 = arg_buffer[1];
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

void* kont3335333473 = prim_car(lst);
void* lst33474 = prim_cdr(lst);
void* x3325033475 = apply_prim__u42(lst33474);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3335333473);
arg_buffer[2] = x3325033475;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3335333473))[0]);
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
void* _33645 = arg_buffer[1];
//reading env and args
void* kont33355 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3325133476 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33355);
arg_buffer[2] = x3325133476;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33355))[0]);
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
void* _33646 = arg_buffer[1];
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

void* kont3335633477 = prim_car(lst);
void* lst33478 = prim_cdr(lst);
void* x3325233479 = apply_prim__u47(lst33478);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3335633477);
arg_buffer[2] = x3325233479;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3335633477))[0]);
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
void* _33647 = arg_buffer[1];
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

void* kont3335833480 = prim_car(lst);
void* lst33481 = prim_cdr(lst);
void* x3325333482 = apply_prim__u61(lst33481);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3335833480);
arg_buffer[2] = x3325333482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3335833480))[0]);
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
void* _33648 = arg_buffer[1];
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

void* kont3336033483 = prim_car(lst);
void* lst33484 = prim_cdr(lst);
void* x3325433485 = apply_prim__u62(lst33484);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3336033483);
arg_buffer[2] = x3325433485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3336033483))[0]);
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
void* _33649 = arg_buffer[1];
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

void* kont3336233486 = prim_car(lst);
void* lst33487 = prim_cdr(lst);
void* x3325533488 = apply_prim__u60(lst33487);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3336233486);
arg_buffer[2] = x3325533488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3336233486))[0]);
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
void* _33650 = arg_buffer[1];
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

void* kont3336433489 = prim_car(lst);
void* lst33490 = prim_cdr(lst);
void* x3325633491 = apply_prim__u60_u61(lst33490);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3336433489);
arg_buffer[2] = x3325633491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3336433489))[0]);
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
void* _33651 = arg_buffer[1];
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

void* kont3336633492 = prim_car(lst);
void* lst33493 = prim_cdr(lst);
void* x3325733494 = apply_prim__u62_u61(lst33493);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3336633492);
arg_buffer[2] = x3325733494;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3336633492))[0]);
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
void* _33652 = arg_buffer[1];
//reading env and args
void* kont33368 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3325833495 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33368);
arg_buffer[2] = x3325833495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33368))[0]);
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
void* _33653 = arg_buffer[1];
//reading env and args
void* kont33369 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3325933496 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33369);
arg_buffer[2] = x3325933496;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33369))[0]);
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
void* _33654 = arg_buffer[1];
//reading env and args
void* kont33370 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3326033497 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33370);
arg_buffer[2] = x3326033497;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33370))[0]);
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
void* _33655 = arg_buffer[1];
//reading env and args
void* kont33371 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3326133498 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33371);
arg_buffer[2] = x3326133498;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33371))[0]);
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
void* _33656 = arg_buffer[1];
//reading env and args
void* kont33372 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3326233499 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33372);
arg_buffer[2] = x3326233499;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33372))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33657 = arg_buffer[1];
//reading env and args
void* kont33373 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3326333500 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33373);
arg_buffer[2] = x3326333500;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33373))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs = encode_clo(alloc_clo(abs_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33658 = arg_buffer[1];
//reading env and args
void* kont33374 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3326433501 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33374);
arg_buffer[2] = x3326433501;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33374))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam33659_fptr() // lam33659 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33660 = arg_buffer[1];
//reading env and args
void* a3326733505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3326533502 = (decode_clo(env33660))[3];
//not do dummy comment
void* kont33375 = (decode_clo(env33660))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env33660))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont33375;
arg_buffer[3] = a3326533502;
arg_buffer[4] = a3326733505;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33659 = encode_clo(alloc_clo(lam33659_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33663 = arg_buffer[1];
//reading env and args
void* kont33375 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar33809 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33809, "0", 10);
void* a3326533502 = encode_mpz(mpzvar33809);
mpz_t* mpzvar33810 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33810, "2", 10);
void* a3326633503 = encode_mpz(mpzvar33810);

//creating new closure instance
void** clo33812 = alloc_clo(lam33659_fptr, 3);

//setting env list
clo33812[1] = equal_u63;
clo33812[2] = kont33375;
clo33812[3] = a3326533502;
void* f3337633504 = encode_clo(clo33812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3337633504;
arg_buffer[3] = x;
arg_buffer[4] = a3326633503;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam33664_fptr() // lam33664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33665 = arg_buffer[1];
//reading env and args
void* a3327033509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont33377 = (decode_clo(env33665))[3];
//not do dummy comment
void* a3326833506 = (decode_clo(env33665))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env33665))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont33377;
arg_buffer[3] = a3326833506;
arg_buffer[4] = a3327033509;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33664 = encode_clo(alloc_clo(lam33664_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33668 = arg_buffer[1];
//reading env and args
void* kont33377 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar33813 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33813, "1", 10);
void* a3326833506 = encode_mpz(mpzvar33813);
mpz_t* mpzvar33814 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33814, "2", 10);
void* a3326933507 = encode_mpz(mpzvar33814);

//creating new closure instance
void** clo33816 = alloc_clo(lam33664_fptr, 3);

//setting env list
clo33816[1] = equal_u63;
clo33816[2] = a3326833506;
clo33816[3] = kont33377;
void* f3337833508 = encode_clo(clo33816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3337833508;
arg_buffer[3] = x;
arg_buffer[4] = a3326933507;
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
void* _33669 = arg_buffer[1];
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

void* kont3337933510 = prim_car(x);
void* x33511 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3337933510);
arg_buffer[2] = x33511;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3337933510))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33670 = arg_buffer[1];
//reading env and args
void* kont33381 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x3327133512 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33381);
arg_buffer[2] = x3327133512;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33381))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33671 = arg_buffer[1];
//reading env and args
void* kont33382 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x3327233513 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33382);
arg_buffer[2] = x3327233513;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33382))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam33674_fptr() // lam33674 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33675 = arg_buffer[1];
//reading env and args
void* a3327833523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont33383 = (decode_clo(env33675))[3];
//not do dummy comment
void* x = (decode_clo(env33675))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env33675))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont33383;
arg_buffer[3] = x;
arg_buffer[4] = a3327833523;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33674 = encode_clo(alloc_clo(lam33674_fptr, 0));

void* lam33676_fptr() // lam33676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33677 = arg_buffer[1];
//reading env and args
void* a3327633520 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33677))[5];
//not do dummy comment
void* lst = (decode_clo(env33677))[4];
//not do dummy comment
void* kont33383 = (decode_clo(env33677))[3];
//not do dummy comment
void* x = (decode_clo(env33677))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env33677))[1];

//if-clause
bool if_guard33817 = is_true(a3327633520);
if(if_guard33817)
{
void* x3327733521 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33383);
arg_buffer[2] = x3327733521;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33383))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo33819 = alloc_clo(lam33674_fptr, 3);

//setting env list
clo33819[1] = member_u63;
clo33819[2] = x;
clo33819[3] = kont33383;
void* f3338433522 = encode_clo(clo33819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3338433522;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33676 = encode_clo(alloc_clo(lam33676_fptr, 0));

void* lam33678_fptr() // lam33678 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33679 = arg_buffer[1];
//reading env and args
void* a3327533518 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33679))[6];
//not do dummy comment
void* lst = (decode_clo(env33679))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env33679))[4];
//not do dummy comment
void* kont33383 = (decode_clo(env33679))[3];
//not do dummy comment
void* x = (decode_clo(env33679))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env33679))[1];

//creating new closure instance
void** clo33821 = alloc_clo(lam33676_fptr, 5);

//setting env list
clo33821[1] = member_u63;
clo33821[2] = x;
clo33821[3] = kont33383;
clo33821[4] = lst;
clo33821[5] = cdr;
void* f3338533519 = encode_clo(clo33821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3338533519;
arg_buffer[3] = a3327533518;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33678 = encode_clo(alloc_clo(lam33678_fptr, 0));

void* lam33680_fptr() // lam33680 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33681 = arg_buffer[1];
//reading env and args
void* a3327333515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33681))[7];
//not do dummy comment
void* lst = (decode_clo(env33681))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env33681))[5];
//not do dummy comment
void* kont33383 = (decode_clo(env33681))[4];
//not do dummy comment
void* x = (decode_clo(env33681))[3];
//not do dummy comment
void* car = (decode_clo(env33681))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env33681))[1];

//if-clause
bool if_guard33822 = is_true(a3327333515);
if(if_guard33822)
{
void* x3327433516 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33383);
arg_buffer[2] = x3327433516;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33383))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo33824 = alloc_clo(lam33678_fptr, 6);

//setting env list
clo33824[1] = member_u63;
clo33824[2] = x;
clo33824[3] = kont33383;
clo33824[4] = equal_u63;
clo33824[5] = lst;
clo33824[6] = cdr;
void* f3338633517 = encode_clo(clo33824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3338633517;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33680 = encode_clo(alloc_clo(lam33680_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33682 = arg_buffer[1];
//reading env and args
void* kont33383 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo33826 = alloc_clo(lam33680_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo33826[1] = member_u63;
clo33826[2] = car;
clo33826[3] = x;
clo33826[4] = kont33383;
clo33826[5] = equal_u63;
clo33826[6] = lst;
clo33826[7] = cdr;
void* f3338733514 = encode_clo(clo33826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3338733514;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam33683_fptr() // lam33683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33684 = arg_buffer[1];
//reading env and args
void* a3328233531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env33684))[4];
//not do dummy comment
void* a3328133529 = (decode_clo(env33684))[3];
//not do dummy comment
void* foldl = (decode_clo(env33684))[2];
//not do dummy comment
void* kont33388 = (decode_clo(env33684))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont33388;
arg_buffer[3] = fun;
arg_buffer[4] = a3328133529;
arg_buffer[5] = a3328233531;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33683 = encode_clo(alloc_clo(lam33683_fptr, 0));

void* lam33685_fptr() // lam33685 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33686 = arg_buffer[1];
//reading env and args
void* a3328133529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33686))[5];
//not do dummy comment
void* lst = (decode_clo(env33686))[4];
//not do dummy comment
void* fun = (decode_clo(env33686))[3];
//not do dummy comment
void* foldl = (decode_clo(env33686))[2];
//not do dummy comment
void* kont33388 = (decode_clo(env33686))[1];

//creating new closure instance
void** clo33828 = alloc_clo(lam33683_fptr, 4);

//setting env list
clo33828[1] = kont33388;
clo33828[2] = foldl;
clo33828[3] = a3328133529;
clo33828[4] = fun;
void* f3338933530 = encode_clo(clo33828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3338933530;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33685 = encode_clo(alloc_clo(lam33685_fptr, 0));

void* lam33687_fptr() // lam33687 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33688 = arg_buffer[1];
//reading env and args
void* a3328033527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33688))[6];
//not do dummy comment
void* lst = (decode_clo(env33688))[5];
//not do dummy comment
void* fun = (decode_clo(env33688))[4];
//not do dummy comment
void* acc = (decode_clo(env33688))[3];
//not do dummy comment
void* foldl = (decode_clo(env33688))[2];
//not do dummy comment
void* kont33388 = (decode_clo(env33688))[1];

//creating new closure instance
void** clo33830 = alloc_clo(lam33685_fptr, 5);

//setting env list
clo33830[1] = kont33388;
clo33830[2] = foldl;
clo33830[3] = fun;
clo33830[4] = lst;
clo33830[5] = cdr;
void* f3339033528 = encode_clo(clo33830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3339033528;
arg_buffer[3] = a3328033527;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33687 = encode_clo(alloc_clo(lam33687_fptr, 0));

void* lam33689_fptr() // lam33689 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33690 = arg_buffer[1];
//reading env and args
void* a3327933525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33690))[7];
//not do dummy comment
void* lst = (decode_clo(env33690))[6];
//not do dummy comment
void* fun = (decode_clo(env33690))[5];
//not do dummy comment
void* acc = (decode_clo(env33690))[4];
//not do dummy comment
void* car = (decode_clo(env33690))[3];
//not do dummy comment
void* foldl = (decode_clo(env33690))[2];
//not do dummy comment
void* kont33388 = (decode_clo(env33690))[1];

//if-clause
bool if_guard33831 = is_true(a3327933525);
if(if_guard33831)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33388);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33388))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo33833 = alloc_clo(lam33687_fptr, 6);

//setting env list
clo33833[1] = kont33388;
clo33833[2] = foldl;
clo33833[3] = acc;
clo33833[4] = fun;
clo33833[5] = lst;
clo33833[6] = cdr;
void* f3339133526 = encode_clo(clo33833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3339133526;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33689 = encode_clo(alloc_clo(lam33689_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33691 = arg_buffer[1];
//reading env and args
void* kont33388 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo33835 = alloc_clo(lam33689_fptr, 7);

//setting env list
clo33835[1] = kont33388;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo33835[2] = foldl;
clo33835[3] = car;
clo33835[4] = acc;
clo33835[5] = fun;
clo33835[6] = lst;
clo33835[7] = cdr;
void* f3339233524 = encode_clo(clo33835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3339233524;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam33692_fptr() // lam33692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33693 = arg_buffer[1];
//reading env and args
void* a3328633539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3328433535 = (decode_clo(env33693))[3];
//not do dummy comment
void* kont33393 = (decode_clo(env33693))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33693))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont33393;
arg_buffer[3] = a3328433535;
arg_buffer[4] = a3328633539;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33692 = encode_clo(alloc_clo(lam33692_fptr, 0));

void* lam33694_fptr() // lam33694 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33695 = arg_buffer[1];
//reading env and args
void* a3328533537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3328433535 = (decode_clo(env33695))[5];
//not do dummy comment
void* kont33393 = (decode_clo(env33695))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33695))[3];
//not do dummy comment
void* lst2 = (decode_clo(env33695))[2];
//not do dummy comment
void* cons = (decode_clo(env33695))[1];

//creating new closure instance
void** clo33837 = alloc_clo(lam33692_fptr, 3);

//setting env list
clo33837[1] = reverse_u45helper;
clo33837[2] = kont33393;
clo33837[3] = a3328433535;
void* f3339433538 = encode_clo(clo33837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3339433538;
arg_buffer[3] = a3328533537;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33694 = encode_clo(alloc_clo(lam33694_fptr, 0));

void* lam33696_fptr() // lam33696 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33697 = arg_buffer[1];
//reading env and args
void* a3328433535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33697))[6];
//not do dummy comment
void* lst2 = (decode_clo(env33697))[5];
//not do dummy comment
void* car = (decode_clo(env33697))[4];
//not do dummy comment
void* cons = (decode_clo(env33697))[3];
//not do dummy comment
void* lst = (decode_clo(env33697))[2];
//not do dummy comment
void* kont33393 = (decode_clo(env33697))[1];

//creating new closure instance
void** clo33839 = alloc_clo(lam33694_fptr, 5);

//setting env list
clo33839[1] = cons;
clo33839[2] = lst2;
clo33839[3] = reverse_u45helper;
clo33839[4] = kont33393;
clo33839[5] = a3328433535;
void* f3339533536 = encode_clo(clo33839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3339533536;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33696 = encode_clo(alloc_clo(lam33696_fptr, 0));

void* lam33698_fptr() // lam33698 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33699 = arg_buffer[1];
//reading env and args
void* a3328333533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33699))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33699))[6];
//not do dummy comment
void* lst2 = (decode_clo(env33699))[5];
//not do dummy comment
void* car = (decode_clo(env33699))[4];
//not do dummy comment
void* cons = (decode_clo(env33699))[3];
//not do dummy comment
void* lst = (decode_clo(env33699))[2];
//not do dummy comment
void* kont33393 = (decode_clo(env33699))[1];

//if-clause
bool if_guard33840 = is_true(a3328333533);
if(if_guard33840)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33393);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33393))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo33842 = alloc_clo(lam33696_fptr, 6);

//setting env list
clo33842[1] = kont33393;
clo33842[2] = lst;
clo33842[3] = cons;
clo33842[4] = car;
clo33842[5] = lst2;
clo33842[6] = reverse_u45helper;
void* f3339633534 = encode_clo(clo33842);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3339633534;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33698 = encode_clo(alloc_clo(lam33698_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33700 = arg_buffer[1];
//reading env and args
void* kont33393 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo33844 = alloc_clo(lam33698_fptr, 7);

//setting env list
clo33844[1] = kont33393;
clo33844[2] = lst;
clo33844[3] = cons;
clo33844[4] = car;
clo33844[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo33844[6] = reverse_u45helper;
clo33844[7] = cdr;
void* f3339733532 = encode_clo(clo33844);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3339733532;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam33701_fptr() // lam33701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33702 = arg_buffer[1];
//reading env and args
void* a3328733541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33702))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33702))[2];
//not do dummy comment
void* kont33398 = (decode_clo(env33702))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont33398;
arg_buffer[3] = lst;
arg_buffer[4] = a3328733541;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33701 = encode_clo(alloc_clo(lam33701_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33703 = arg_buffer[1];
//reading env and args
void* kont33398 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo33846 = alloc_clo(lam33701_fptr, 3);

//setting env list
clo33846[1] = kont33398;
clo33846[2] = reverse_u45helper;
clo33846[3] = lst;
void* f3339933540 = encode_clo(clo33846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3339933540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam33704_fptr() // lam33704 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33705 = arg_buffer[1];
//reading env and args
void* x3329033546 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont33400 = (decode_clo(env33705))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33400);
arg_buffer[2] = x3329033546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33400))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33704 = encode_clo(alloc_clo(lam33704_fptr, 0));

void* lam33706_fptr() // lam33706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33707 = arg_buffer[1];
//reading env and args
void* a3329533555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3329333551 = (decode_clo(env33707))[4];
//not do dummy comment
void* kont33400 = (decode_clo(env33707))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env33707))[2];
//not do dummy comment
void* a3329133548 = (decode_clo(env33707))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont33400;
arg_buffer[3] = a3329133548;
arg_buffer[4] = a3329333551;
arg_buffer[5] = a3329533555;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33706 = encode_clo(alloc_clo(lam33706_fptr, 0));

void* lam33708_fptr() // lam33708 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33709 = arg_buffer[1];
//reading env and args
void* a3329433553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3329333551 = (decode_clo(env33709))[6];
//not do dummy comment
void* kont33400 = (decode_clo(env33709))[5];
//not do dummy comment
void* cons = (decode_clo(env33709))[4];
//not do dummy comment
void* a3329133548 = (decode_clo(env33709))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env33709))[2];
//not do dummy comment
void* lst2 = (decode_clo(env33709))[1];

//creating new closure instance
void** clo33848 = alloc_clo(lam33706_fptr, 4);

//setting env list
clo33848[1] = a3329133548;
clo33848[2] = take_u45helper;
clo33848[3] = kont33400;
clo33848[4] = a3329333551;
void* f3340233554 = encode_clo(clo33848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3340233554;
arg_buffer[3] = a3329433553;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33708 = encode_clo(alloc_clo(lam33708_fptr, 0));

void* lam33710_fptr() // lam33710 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33711 = arg_buffer[1];
//reading env and args
void* a3329333551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33711))[7];
//not do dummy comment
void* kont33400 = (decode_clo(env33711))[6];
//not do dummy comment
void* car = (decode_clo(env33711))[5];
//not do dummy comment
void* cons = (decode_clo(env33711))[4];
//not do dummy comment
void* a3329133548 = (decode_clo(env33711))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env33711))[2];
//not do dummy comment
void* lst2 = (decode_clo(env33711))[1];

//creating new closure instance
void** clo33850 = alloc_clo(lam33708_fptr, 6);

//setting env list
clo33850[1] = lst2;
clo33850[2] = take_u45helper;
clo33850[3] = a3329133548;
clo33850[4] = cons;
clo33850[5] = kont33400;
clo33850[6] = a3329333551;
void* f3340333552 = encode_clo(clo33850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3340333552;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33710 = encode_clo(alloc_clo(lam33710_fptr, 0));

void* lam33713_fptr() // lam33713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33714 = arg_buffer[1];
//reading env and args
void* a3329133548 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33714))[8];
//not do dummy comment
void* kont33400 = (decode_clo(env33714))[7];
//not do dummy comment
void* cons = (decode_clo(env33714))[6];
//not do dummy comment
void* _u45 = (decode_clo(env33714))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env33714))[4];
//not do dummy comment
void* lst2 = (decode_clo(env33714))[3];
//not do dummy comment
void* n = (decode_clo(env33714))[2];
//not do dummy comment
void* car = (decode_clo(env33714))[1];
mpz_t* mpzvar33851 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33851, "1", 10);
void* a3329233549 = encode_mpz(mpzvar33851);

//creating new closure instance
void** clo33853 = alloc_clo(lam33710_fptr, 7);

//setting env list
clo33853[1] = lst2;
clo33853[2] = take_u45helper;
clo33853[3] = a3329133548;
clo33853[4] = cons;
clo33853[5] = car;
clo33853[6] = kont33400;
clo33853[7] = lst;
void* f3340433550 = encode_clo(clo33853);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3340433550;
arg_buffer[3] = n;
arg_buffer[4] = a3329233549;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33713 = encode_clo(alloc_clo(lam33713_fptr, 0));

void* lam33715_fptr() // lam33715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33716 = arg_buffer[1];
//reading env and args
void* a3328933544 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33716))[10];
//not do dummy comment
void* lst = (decode_clo(env33716))[9];
//not do dummy comment
void* reverse = (decode_clo(env33716))[8];
//not do dummy comment
void* kont33400 = (decode_clo(env33716))[7];
//not do dummy comment
void* cons = (decode_clo(env33716))[6];
//not do dummy comment
void* _u45 = (decode_clo(env33716))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env33716))[4];
//not do dummy comment
void* lst2 = (decode_clo(env33716))[3];
//not do dummy comment
void* n = (decode_clo(env33716))[2];
//not do dummy comment
void* car = (decode_clo(env33716))[1];

//if-clause
bool if_guard33854 = is_true(a3328933544);
if(if_guard33854)
{

//creating new closure instance
void** clo33856 = alloc_clo(lam33704_fptr, 1);

//setting env list
clo33856[1] = kont33400;
void* f3340133545 = encode_clo(clo33856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3340133545;
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
void** clo33858 = alloc_clo(lam33713_fptr, 8);

//setting env list
clo33858[1] = car;
clo33858[2] = n;
clo33858[3] = lst2;
clo33858[4] = take_u45helper;
clo33858[5] = _u45;
clo33858[6] = cons;
clo33858[7] = kont33400;
clo33858[8] = lst;
void* f3340533547 = encode_clo(clo33858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3340533547;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33715 = encode_clo(alloc_clo(lam33715_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33718 = arg_buffer[1];
//reading env and args
void* kont33400 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar33859 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33859, "0", 10);
void* a3328833542 = encode_mpz(mpzvar33859);

//creating new closure instance
void** clo33861 = alloc_clo(lam33715_fptr, 10);

//setting env list
clo33861[1] = car;
clo33861[2] = n;
clo33861[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo33861[4] = take_u45helper;
clo33861[5] = _u45;
clo33861[6] = cons;
clo33861[7] = kont33400;
clo33861[8] = reverse;
clo33861[9] = lst;
clo33861[10] = cdr;
void* f3340633543 = encode_clo(clo33861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3340633543;
arg_buffer[3] = n;
arg_buffer[4] = a3328833542;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam33719_fptr() // lam33719 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33720 = arg_buffer[1];
//reading env and args
void* a3329633557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont33407 = (decode_clo(env33720))[4];
//not do dummy comment
void* lst = (decode_clo(env33720))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env33720))[2];
//not do dummy comment
void* n = (decode_clo(env33720))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont33407;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3329633557;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33719 = encode_clo(alloc_clo(lam33719_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33721 = arg_buffer[1];
//reading env and args
void* kont33407 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo33863 = alloc_clo(lam33719_fptr, 4);

//setting env list
clo33863[1] = n;
clo33863[2] = take_u45helper;
clo33863[3] = lst;
clo33863[4] = kont33407;
void* f3340833556 = encode_clo(clo33863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3340833556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam33723_fptr() // lam33723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33724 = arg_buffer[1];
//reading env and args
void* a3330133565 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont33409 = (decode_clo(env33724))[3];
//not do dummy comment
void* _u43 = (decode_clo(env33724))[2];
//not do dummy comment
void* a3329933561 = (decode_clo(env33724))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont33409;
arg_buffer[3] = a3329933561;
arg_buffer[4] = a3330133565;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33723 = encode_clo(alloc_clo(lam33723_fptr, 0));

void* lam33725_fptr() // lam33725 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33726 = arg_buffer[1];
//reading env and args
void* a3330033563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont33409 = (decode_clo(env33726))[4];
//not do dummy comment
void* length = (decode_clo(env33726))[3];
//not do dummy comment
void* _u43 = (decode_clo(env33726))[2];
//not do dummy comment
void* a3329933561 = (decode_clo(env33726))[1];

//creating new closure instance
void** clo33865 = alloc_clo(lam33723_fptr, 3);

//setting env list
clo33865[1] = a3329933561;
clo33865[2] = _u43;
clo33865[3] = kont33409;
void* f3341033564 = encode_clo(clo33865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3341033564;
arg_buffer[3] = a3330033563;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33725 = encode_clo(alloc_clo(lam33725_fptr, 0));

void* lam33728_fptr() // lam33728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33729 = arg_buffer[1];
//reading env and args
void* a3329733559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33729))[5];
//not do dummy comment
void* length = (decode_clo(env33729))[4];
//not do dummy comment
void* _u43 = (decode_clo(env33729))[3];
//not do dummy comment
void* lst = (decode_clo(env33729))[2];
//not do dummy comment
void* kont33409 = (decode_clo(env33729))[1];

//if-clause
bool if_guard33866 = is_true(a3329733559);
if(if_guard33866)
{
mpz_t* mpzvar33867 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33867, "0", 10);
void* x3329833560 = encode_mpz(mpzvar33867);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33409);
arg_buffer[2] = x3329833560;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33409))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar33868 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33868, "1", 10);
void* a3329933561 = encode_mpz(mpzvar33868);

//creating new closure instance
void** clo33870 = alloc_clo(lam33725_fptr, 4);

//setting env list
clo33870[1] = a3329933561;
clo33870[2] = _u43;
clo33870[3] = length;
clo33870[4] = kont33409;
void* f3341133562 = encode_clo(clo33870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3341133562;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33728 = encode_clo(alloc_clo(lam33728_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33730 = arg_buffer[1];
//reading env and args
void* kont33409 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo33872 = alloc_clo(lam33728_fptr, 5);

//setting env list
clo33872[1] = kont33409;
clo33872[2] = lst;
clo33872[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo33872[4] = length;
clo33872[5] = cdr;
void* f3341233558 = encode_clo(clo33872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3341233558;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam33731_fptr() // lam33731 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33732 = arg_buffer[1];
//reading env and args
void* x3330333569 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont33413 = (decode_clo(env33732))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33413);
arg_buffer[2] = x3330333569;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33413))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33731 = encode_clo(alloc_clo(lam33731_fptr, 0));

void* lam33733_fptr() // lam33733 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33734 = arg_buffer[1];
//reading env and args
void* a3330733577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env33734))[3];
//not do dummy comment
void* a3330533573 = (decode_clo(env33734))[2];
//not do dummy comment
void* kont33413 = (decode_clo(env33734))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont33413;
arg_buffer[3] = a3330533573;
arg_buffer[4] = a3330733577;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33733 = encode_clo(alloc_clo(lam33733_fptr, 0));

void* lam33735_fptr() // lam33735 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33736 = arg_buffer[1];
//reading env and args
void* a3330633575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env33736))[5];
//not do dummy comment
void* proc = (decode_clo(env33736))[4];
//not do dummy comment
void* cons = (decode_clo(env33736))[3];
//not do dummy comment
void* a3330533573 = (decode_clo(env33736))[2];
//not do dummy comment
void* kont33413 = (decode_clo(env33736))[1];

//creating new closure instance
void** clo33874 = alloc_clo(lam33733_fptr, 3);

//setting env list
clo33874[1] = kont33413;
clo33874[2] = a3330533573;
clo33874[3] = cons;
void* f3341533576 = encode_clo(clo33874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3341533576;
arg_buffer[3] = proc;
arg_buffer[4] = a3330633575;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33735 = encode_clo(alloc_clo(lam33735_fptr, 0));

void* lam33737_fptr() // lam33737 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33738 = arg_buffer[1];
//reading env and args
void* a3330533573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33738))[6];
//not do dummy comment
void* lst = (decode_clo(env33738))[5];
//not do dummy comment
void* map = (decode_clo(env33738))[4];
//not do dummy comment
void* kont33413 = (decode_clo(env33738))[3];
//not do dummy comment
void* proc = (decode_clo(env33738))[2];
//not do dummy comment
void* cons = (decode_clo(env33738))[1];

//creating new closure instance
void** clo33876 = alloc_clo(lam33735_fptr, 5);

//setting env list
clo33876[1] = kont33413;
clo33876[2] = a3330533573;
clo33876[3] = cons;
clo33876[4] = proc;
clo33876[5] = map;
void* f3341633574 = encode_clo(clo33876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3341633574;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33737 = encode_clo(alloc_clo(lam33737_fptr, 0));

void* lam33739_fptr() // lam33739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33740 = arg_buffer[1];
//reading env and args
void* a3330433571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33740))[6];
//not do dummy comment
void* lst = (decode_clo(env33740))[5];
//not do dummy comment
void* map = (decode_clo(env33740))[4];
//not do dummy comment
void* kont33413 = (decode_clo(env33740))[3];
//not do dummy comment
void* proc = (decode_clo(env33740))[2];
//not do dummy comment
void* cons = (decode_clo(env33740))[1];

//creating new closure instance
void** clo33878 = alloc_clo(lam33737_fptr, 6);

//setting env list
clo33878[1] = cons;
clo33878[2] = proc;
clo33878[3] = kont33413;
clo33878[4] = map;
clo33878[5] = lst;
clo33878[6] = cdr;
void* f3341733572 = encode_clo(clo33878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3341733572;
arg_buffer[3] = a3330433571;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33739 = encode_clo(alloc_clo(lam33739_fptr, 0));

void* lam33741_fptr() // lam33741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33742 = arg_buffer[1];
//reading env and args
void* a3330233567 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33742))[8];
//not do dummy comment
void* map = (decode_clo(env33742))[7];
//not do dummy comment
void* kont33413 = (decode_clo(env33742))[6];
//not do dummy comment
void* proc = (decode_clo(env33742))[5];
//not do dummy comment
void* car = (decode_clo(env33742))[4];
//not do dummy comment
void* cons = (decode_clo(env33742))[3];
//not do dummy comment
void* list = (decode_clo(env33742))[2];
//not do dummy comment
void* cdr = (decode_clo(env33742))[1];

//if-clause
bool if_guard33879 = is_true(a3330233567);
if(if_guard33879)
{

//creating new closure instance
void** clo33881 = alloc_clo(lam33731_fptr, 1);

//setting env list
clo33881[1] = kont33413;
void* f3341433568 = encode_clo(clo33881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3341433568;
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
void** clo33883 = alloc_clo(lam33739_fptr, 6);

//setting env list
clo33883[1] = cons;
clo33883[2] = proc;
clo33883[3] = kont33413;
clo33883[4] = map;
clo33883[5] = lst;
clo33883[6] = cdr;
void* f3341833570 = encode_clo(clo33883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3341833570;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33741 = encode_clo(alloc_clo(lam33741_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33743 = arg_buffer[1];
//reading env and args
void* kont33413 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo33885 = alloc_clo(lam33741_fptr, 8);

//setting env list
clo33885[1] = cdr;
clo33885[2] = list;
clo33885[3] = cons;
clo33885[4] = car;
clo33885[5] = proc;
clo33885[6] = kont33413;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo33885[7] = map;
clo33885[8] = lst;
void* f3341933566 = encode_clo(clo33885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3341933566;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam33744_fptr() // lam33744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33745 = arg_buffer[1];
//reading env and args
void* x3330933581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont33420 = (decode_clo(env33745))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33420);
arg_buffer[2] = x3330933581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33420))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33744 = encode_clo(alloc_clo(lam33744_fptr, 0));

void* lam33746_fptr() // lam33746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33747 = arg_buffer[1];
//reading env and args
void* a3331433591 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3331233587 = (decode_clo(env33747))[3];
//not do dummy comment
void* cons = (decode_clo(env33747))[2];
//not do dummy comment
void* kont33420 = (decode_clo(env33747))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont33420;
arg_buffer[3] = a3331233587;
arg_buffer[4] = a3331433591;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33746 = encode_clo(alloc_clo(lam33746_fptr, 0));

void* lam33748_fptr() // lam33748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33749 = arg_buffer[1];
//reading env and args
void* a3331333589 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3331233587 = (decode_clo(env33749))[5];
//not do dummy comment
void* op = (decode_clo(env33749))[4];
//not do dummy comment
void* filter = (decode_clo(env33749))[3];
//not do dummy comment
void* cons = (decode_clo(env33749))[2];
//not do dummy comment
void* kont33420 = (decode_clo(env33749))[1];

//creating new closure instance
void** clo33887 = alloc_clo(lam33746_fptr, 3);

//setting env list
clo33887[1] = kont33420;
clo33887[2] = cons;
clo33887[3] = a3331233587;
void* f3342233590 = encode_clo(clo33887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3342233590;
arg_buffer[3] = op;
arg_buffer[4] = a3331333589;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33748 = encode_clo(alloc_clo(lam33748_fptr, 0));

void* lam33750_fptr() // lam33750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33751 = arg_buffer[1];
//reading env and args
void* a3331233587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33751))[6];
//not do dummy comment
void* lst = (decode_clo(env33751))[5];
//not do dummy comment
void* op = (decode_clo(env33751))[4];
//not do dummy comment
void* filter = (decode_clo(env33751))[3];
//not do dummy comment
void* cons = (decode_clo(env33751))[2];
//not do dummy comment
void* kont33420 = (decode_clo(env33751))[1];

//creating new closure instance
void** clo33889 = alloc_clo(lam33748_fptr, 5);

//setting env list
clo33889[1] = kont33420;
clo33889[2] = cons;
clo33889[3] = filter;
clo33889[4] = op;
clo33889[5] = a3331233587;
void* f3342333588 = encode_clo(clo33889);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3342333588;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33750 = encode_clo(alloc_clo(lam33750_fptr, 0));

void* lam33752_fptr() // lam33752 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33753 = arg_buffer[1];
//reading env and args
void* a3331533593 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env33753))[3];
//not do dummy comment
void* filter = (decode_clo(env33753))[2];
//not do dummy comment
void* kont33420 = (decode_clo(env33753))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont33420;
arg_buffer[3] = op;
arg_buffer[4] = a3331533593;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33752 = encode_clo(alloc_clo(lam33752_fptr, 0));

void* lam33754_fptr() // lam33754 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33755 = arg_buffer[1];
//reading env and args
void* a3331133585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33755))[7];
//not do dummy comment
void* lst = (decode_clo(env33755))[6];
//not do dummy comment
void* op = (decode_clo(env33755))[5];
//not do dummy comment
void* cons = (decode_clo(env33755))[4];
//not do dummy comment
void* kont33420 = (decode_clo(env33755))[3];
//not do dummy comment
void* filter = (decode_clo(env33755))[2];
//not do dummy comment
void* car = (decode_clo(env33755))[1];

//if-clause
bool if_guard33890 = is_true(a3331133585);
if(if_guard33890)
{

//creating new closure instance
void** clo33892 = alloc_clo(lam33750_fptr, 6);

//setting env list
clo33892[1] = kont33420;
clo33892[2] = cons;
clo33892[3] = filter;
clo33892[4] = op;
clo33892[5] = lst;
clo33892[6] = cdr;
void* f3342433586 = encode_clo(clo33892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3342433586;
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
void** clo33894 = alloc_clo(lam33752_fptr, 3);

//setting env list
clo33894[1] = kont33420;
clo33894[2] = filter;
clo33894[3] = op;
void* f3342533592 = encode_clo(clo33894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3342533592;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33754 = encode_clo(alloc_clo(lam33754_fptr, 0));

void* lam33756_fptr() // lam33756 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33757 = arg_buffer[1];
//reading env and args
void* a3331033583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33757))[7];
//not do dummy comment
void* lst = (decode_clo(env33757))[6];
//not do dummy comment
void* op = (decode_clo(env33757))[5];
//not do dummy comment
void* cons = (decode_clo(env33757))[4];
//not do dummy comment
void* kont33420 = (decode_clo(env33757))[3];
//not do dummy comment
void* filter = (decode_clo(env33757))[2];
//not do dummy comment
void* car = (decode_clo(env33757))[1];

//creating new closure instance
void** clo33896 = alloc_clo(lam33754_fptr, 7);

//setting env list
clo33896[1] = car;
clo33896[2] = filter;
clo33896[3] = kont33420;
clo33896[4] = cons;
clo33896[5] = op;
clo33896[6] = lst;
clo33896[7] = cdr;
void* f3342633584 = encode_clo(clo33896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3342633584;
arg_buffer[3] = a3331033583;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33756 = encode_clo(alloc_clo(lam33756_fptr, 0));

void* lam33758_fptr() // lam33758 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33759 = arg_buffer[1];
//reading env and args
void* a3330833579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33759))[8];
//not do dummy comment
void* op = (decode_clo(env33759))[7];
//not do dummy comment
void* cons = (decode_clo(env33759))[6];
//not do dummy comment
void* kont33420 = (decode_clo(env33759))[5];
//not do dummy comment
void* list = (decode_clo(env33759))[4];
//not do dummy comment
void* cdr = (decode_clo(env33759))[3];
//not do dummy comment
void* filter = (decode_clo(env33759))[2];
//not do dummy comment
void* car = (decode_clo(env33759))[1];

//if-clause
bool if_guard33897 = is_true(a3330833579);
if(if_guard33897)
{

//creating new closure instance
void** clo33899 = alloc_clo(lam33744_fptr, 1);

//setting env list
clo33899[1] = kont33420;
void* f3342133580 = encode_clo(clo33899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3342133580;
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
void** clo33901 = alloc_clo(lam33756_fptr, 7);

//setting env list
clo33901[1] = car;
clo33901[2] = filter;
clo33901[3] = kont33420;
clo33901[4] = cons;
clo33901[5] = op;
clo33901[6] = lst;
clo33901[7] = cdr;
void* f3342733582 = encode_clo(clo33901);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3342733582;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33758 = encode_clo(alloc_clo(lam33758_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33760 = arg_buffer[1];
//reading env and args
void* kont33420 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo33903 = alloc_clo(lam33758_fptr, 8);

//setting env list
clo33903[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo33903[2] = filter;
clo33903[3] = cdr;
clo33903[4] = list;
clo33903[5] = kont33420;
clo33903[6] = cons;
clo33903[7] = op;
clo33903[8] = lst;
void* f3342833578 = encode_clo(clo33903);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3342833578;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam33761_fptr() // lam33761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33762 = arg_buffer[1];
//reading env and args
void* a3332033601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3331833598 = (decode_clo(env33762))[3];
//not do dummy comment
void* drop = (decode_clo(env33762))[2];
//not do dummy comment
void* kont33429 = (decode_clo(env33762))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont33429;
arg_buffer[3] = a3331833598;
arg_buffer[4] = a3332033601;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33761 = encode_clo(alloc_clo(lam33761_fptr, 0));

void* lam33764_fptr() // lam33764 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33765 = arg_buffer[1];
//reading env and args
void* a3331833598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env33765))[4];
//not do dummy comment
void* kont33429 = (decode_clo(env33765))[3];
//not do dummy comment
void* n = (decode_clo(env33765))[2];
//not do dummy comment
void* _u45 = (decode_clo(env33765))[1];
mpz_t* mpzvar33904 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33904, "1", 10);
void* a3331933599 = encode_mpz(mpzvar33904);

//creating new closure instance
void** clo33906 = alloc_clo(lam33761_fptr, 3);

//setting env list
clo33906[1] = kont33429;
clo33906[2] = drop;
clo33906[3] = a3331833598;
void* f3343033600 = encode_clo(clo33906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3343033600;
arg_buffer[3] = n;
arg_buffer[4] = a3331933599;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33764 = encode_clo(alloc_clo(lam33764_fptr, 0));

void* lam33766_fptr() // lam33766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33767 = arg_buffer[1];
//reading env and args
void* a3331733596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33767))[6];
//not do dummy comment
void* kont33429 = (decode_clo(env33767))[5];
//not do dummy comment
void* n = (decode_clo(env33767))[4];
//not do dummy comment
void* _u45 = (decode_clo(env33767))[3];
//not do dummy comment
void* lst = (decode_clo(env33767))[2];
//not do dummy comment
void* drop = (decode_clo(env33767))[1];

//if-clause
bool if_guard33907 = is_true(a3331733596);
if(if_guard33907)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33429);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33429))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo33909 = alloc_clo(lam33764_fptr, 4);

//setting env list
clo33909[1] = _u45;
clo33909[2] = n;
clo33909[3] = kont33429;
clo33909[4] = drop;
void* f3343133597 = encode_clo(clo33909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3343133597;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33766 = encode_clo(alloc_clo(lam33766_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33769 = arg_buffer[1];
//reading env and args
void* kont33429 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar33910 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar33910, "0", 10);
void* a3331633594 = encode_mpz(mpzvar33910);

//creating new closure instance
void** clo33912 = alloc_clo(lam33766_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo33912[1] = drop;
clo33912[2] = lst;
clo33912[3] = _u45;
clo33912[4] = n;
clo33912[5] = kont33429;
clo33912[6] = cdr;
void* f3343233595 = encode_clo(clo33912);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3343233595;
arg_buffer[3] = n;
arg_buffer[4] = a3331633594;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam33770_fptr() // lam33770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33771 = arg_buffer[1];
//reading env and args
void* a3332433609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3332233605 = (decode_clo(env33771))[3];
//not do dummy comment
void* proc = (decode_clo(env33771))[2];
//not do dummy comment
void* kont33433 = (decode_clo(env33771))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont33433;
arg_buffer[3] = a3332233605;
arg_buffer[4] = a3332433609;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33770 = encode_clo(alloc_clo(lam33770_fptr, 0));

void* lam33772_fptr() // lam33772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33773 = arg_buffer[1];
//reading env and args
void* a3332333607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env33773))[5];
//not do dummy comment
void* a3332233605 = (decode_clo(env33773))[4];
//not do dummy comment
void* kont33433 = (decode_clo(env33773))[3];
//not do dummy comment
void* proc = (decode_clo(env33773))[2];
//not do dummy comment
void* acc = (decode_clo(env33773))[1];

//creating new closure instance
void** clo33914 = alloc_clo(lam33770_fptr, 3);

//setting env list
clo33914[1] = kont33433;
clo33914[2] = proc;
clo33914[3] = a3332233605;
void* f3343433608 = encode_clo(clo33914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3343433608;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3332333607;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33772 = encode_clo(alloc_clo(lam33772_fptr, 0));

void* lam33774_fptr() // lam33774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33775 = arg_buffer[1];
//reading env and args
void* a3332233605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33775))[6];
//not do dummy comment
void* kont33433 = (decode_clo(env33775))[5];
//not do dummy comment
void* foldr = (decode_clo(env33775))[4];
//not do dummy comment
void* lst = (decode_clo(env33775))[3];
//not do dummy comment
void* proc = (decode_clo(env33775))[2];
//not do dummy comment
void* acc = (decode_clo(env33775))[1];

//creating new closure instance
void** clo33916 = alloc_clo(lam33772_fptr, 5);

//setting env list
clo33916[1] = acc;
clo33916[2] = proc;
clo33916[3] = kont33433;
clo33916[4] = a3332233605;
clo33916[5] = foldr;
void* f3343533606 = encode_clo(clo33916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3343533606;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33774 = encode_clo(alloc_clo(lam33774_fptr, 0));

void* lam33776_fptr() // lam33776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33777 = arg_buffer[1];
//reading env and args
void* a3332133603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33777))[7];
//not do dummy comment
void* kont33433 = (decode_clo(env33777))[6];
//not do dummy comment
void* car = (decode_clo(env33777))[5];
//not do dummy comment
void* foldr = (decode_clo(env33777))[4];
//not do dummy comment
void* lst = (decode_clo(env33777))[3];
//not do dummy comment
void* proc = (decode_clo(env33777))[2];
//not do dummy comment
void* acc = (decode_clo(env33777))[1];

//if-clause
bool if_guard33917 = is_true(a3332133603);
if(if_guard33917)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33433);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33433))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo33919 = alloc_clo(lam33774_fptr, 6);

//setting env list
clo33919[1] = acc;
clo33919[2] = proc;
clo33919[3] = lst;
clo33919[4] = foldr;
clo33919[5] = kont33433;
clo33919[6] = cdr;
void* f3343633604 = encode_clo(clo33919);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3343633604;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33776 = encode_clo(alloc_clo(lam33776_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33778 = arg_buffer[1];
//reading env and args
void* kont33433 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo33921 = alloc_clo(lam33776_fptr, 7);

//setting env list
clo33921[1] = acc;
clo33921[2] = proc;
clo33921[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo33921[4] = foldr;
clo33921[5] = car;
clo33921[6] = kont33433;
clo33921[7] = cdr;
void* f3343733602 = encode_clo(clo33921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3343733602;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam33779_fptr() // lam33779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33780 = arg_buffer[1];
//reading env and args
void* a3332833617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3332633613 = (decode_clo(env33780))[3];
//not do dummy comment
void* kont33438 = (decode_clo(env33780))[2];
//not do dummy comment
void* cons = (decode_clo(env33780))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont33438;
arg_buffer[3] = a3332633613;
arg_buffer[4] = a3332833617;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33779 = encode_clo(alloc_clo(lam33779_fptr, 0));

void* lam33781_fptr() // lam33781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33782 = arg_buffer[1];
//reading env and args
void* a3332733615 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3332633613 = (decode_clo(env33782))[5];
//not do dummy comment
void* kont33438 = (decode_clo(env33782))[4];
//not do dummy comment
void* append = (decode_clo(env33782))[3];
//not do dummy comment
void* lst2 = (decode_clo(env33782))[2];
//not do dummy comment
void* cons = (decode_clo(env33782))[1];

//creating new closure instance
void** clo33923 = alloc_clo(lam33779_fptr, 3);

//setting env list
clo33923[1] = cons;
clo33923[2] = kont33438;
clo33923[3] = a3332633613;
void* f3343933616 = encode_clo(clo33923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3343933616;
arg_buffer[3] = a3332733615;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33781 = encode_clo(alloc_clo(lam33781_fptr, 0));

void* lam33783_fptr() // lam33783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33784 = arg_buffer[1];
//reading env and args
void* a3332633613 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33784))[6];
//not do dummy comment
void* kont33438 = (decode_clo(env33784))[5];
//not do dummy comment
void* append = (decode_clo(env33784))[4];
//not do dummy comment
void* lst2 = (decode_clo(env33784))[3];
//not do dummy comment
void* lst1 = (decode_clo(env33784))[2];
//not do dummy comment
void* cons = (decode_clo(env33784))[1];

//creating new closure instance
void** clo33925 = alloc_clo(lam33781_fptr, 5);

//setting env list
clo33925[1] = cons;
clo33925[2] = lst2;
clo33925[3] = append;
clo33925[4] = kont33438;
clo33925[5] = a3332633613;
void* f3344033614 = encode_clo(clo33925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3344033614;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33783 = encode_clo(alloc_clo(lam33783_fptr, 0));

void* lam33785_fptr() // lam33785 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33786 = arg_buffer[1];
//reading env and args
void* a3332533611 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33786))[7];
//not do dummy comment
void* kont33438 = (decode_clo(env33786))[6];
//not do dummy comment
void* append = (decode_clo(env33786))[5];
//not do dummy comment
void* lst2 = (decode_clo(env33786))[4];
//not do dummy comment
void* cons = (decode_clo(env33786))[3];
//not do dummy comment
void* lst1 = (decode_clo(env33786))[2];
//not do dummy comment
void* car = (decode_clo(env33786))[1];

//if-clause
bool if_guard33926 = is_true(a3332533611);
if(if_guard33926)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33438);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33438))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo33928 = alloc_clo(lam33783_fptr, 6);

//setting env list
clo33928[1] = cons;
clo33928[2] = lst1;
clo33928[3] = lst2;
clo33928[4] = append;
clo33928[5] = kont33438;
clo33928[6] = cdr;
void* f3344133612 = encode_clo(clo33928);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3344133612;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33785 = encode_clo(alloc_clo(lam33785_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33787 = arg_buffer[1];
//reading env and args
void* kont33438 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo33930 = alloc_clo(lam33785_fptr, 7);

//setting env list
clo33930[1] = car;
clo33930[2] = lst1;
clo33930[3] = cons;
clo33930[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo33930[5] = append;
clo33930[6] = kont33438;
clo33930[7] = cdr;
void* f3344233610 = encode_clo(clo33930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3344233610;
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
void* _33788 = arg_buffer[1];
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

void* kont3344333618 = prim_car(lst);
void* lst33619 = prim_cdr(lst);
void* x3332933620 = apply_prim_hash(lst33619);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3344333618);
arg_buffer[2] = x3332933620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3344333618))[0]);
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
void* _33789 = arg_buffer[1];
//reading env and args
void* kont33445 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3333033621 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33445);
arg_buffer[2] = x3333033621;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33445))[0]);
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
void* _33790 = arg_buffer[1];
//reading env and args
void* kont33446 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3333133622 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33446);
arg_buffer[2] = x3333133622;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33446))[0]);
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
void* _33791 = arg_buffer[1];
//reading env and args
void* kont33447 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3333233623 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33447);
arg_buffer[2] = x3333233623;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33447))[0]);
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
void* _33792 = arg_buffer[1];
//reading env and args
void* kont33448 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3333333624 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33448);
arg_buffer[2] = x3333333624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33448))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33793 = arg_buffer[1];
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

void* kont3344933625 = prim_car(lst);
void* lst33626 = prim_cdr(lst);
void* x3333433627 = apply_prim_set(lst33626);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3344933625);
arg_buffer[2] = x3333433627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3344933625))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33794 = arg_buffer[1];
//reading env and args
void* kont33451 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3333533628 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33451);
arg_buffer[2] = x3333533628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33451))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33795 = arg_buffer[1];
//reading env and args
void* kont33452 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3333633629 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33452);
arg_buffer[2] = x3333633629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33452))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33796 = arg_buffer[1];
//reading env and args
void* kont33453 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3333733630 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33453);
arg_buffer[2] = x3333733630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33453))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33797 = arg_buffer[1];
//reading env and args
void* kont33454 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3333833631 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33454);
arg_buffer[2] = x3333833631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33454))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33798 = arg_buffer[1];
//reading env and args
void* kont33455 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x3333933632 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33455);
arg_buffer[2] = x3333933632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33455))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33799 = arg_buffer[1];
//reading env and args
void* kont33456 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x3334033633 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33456);
arg_buffer[2] = x3334033633;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33456))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33800 = arg_buffer[1];
//reading env and args
void* kont33457 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x3334133634 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33457);
arg_buffer[2] = x3334133634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33457))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33801 = arg_buffer[1];
//reading env and args
void* kont33458 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x3334233635 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33458);
arg_buffer[2] = x3334233635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33458))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33802 = arg_buffer[1];
//reading env and args
void* kont33459 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x3334333636 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33459);
arg_buffer[2] = x3334333636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33459))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33803 = arg_buffer[1];
//reading env and args
void* kont33460 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x3334433637 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33460);
arg_buffer[2] = x3334433637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33460))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33805 = arg_buffer[1];
//reading env and args
void* kont33461 = arg_buffer[2];
//Dummy comment
void* x3334533638 = encode_str(new(GC) std::string("random"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33461);
arg_buffer[2] = x3334533638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33461))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam33806_fptr() // lam33806 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33807 = arg_buffer[1];
//reading env and args
void* x3334633640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont33462 = (decode_clo(env33807))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33462);
arg_buffer[2] = x3334633640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33462))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33806 = encode_clo(alloc_clo(lam33806_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33808 = arg_buffer[1];
//reading env and args
void* kont33462 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo33932 = alloc_clo(lam33806_fptr, 1);

//setting env list
clo33932[1] = kont33462;
void* f3346333639 = encode_clo(clo33932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f3346333639;
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

