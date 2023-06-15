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
void* _57652 = arg_buffer[1];
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

void* kont5737957483 = prim_car(lst);
void* lst57484 = prim_cdr(lst);
void* x5728757485 = apply_prim__u43(lst57484);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5737957483);
arg_buffer[2] = x5728757485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5737957483))[0]);
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
void* _57653 = arg_buffer[1];
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

void* kont5738157486 = prim_car(lst);
void* lst57487 = prim_cdr(lst);
void* x5728857488 = apply_prim__u45(lst57487);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5738157486);
arg_buffer[2] = x5728857488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5738157486))[0]);
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
void* _57654 = arg_buffer[1];
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

void* kont5738357489 = prim_car(lst);
void* lst57490 = prim_cdr(lst);
void* x5728957491 = apply_prim__u42(lst57490);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5738357489);
arg_buffer[2] = x5728957491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5738357489))[0]);
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
void* _57655 = arg_buffer[1];
//reading env and args
void* kont57385 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5729057492 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57385);
arg_buffer[2] = x5729057492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57385))[0]);
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
void* _57656 = arg_buffer[1];
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

void* kont5738657493 = prim_car(lst);
void* lst57494 = prim_cdr(lst);
void* x5729157495 = apply_prim__u47(lst57494);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5738657493);
arg_buffer[2] = x5729157495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5738657493))[0]);
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
void* _57657 = arg_buffer[1];
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

void* kont5738857496 = prim_car(lst);
void* lst57497 = prim_cdr(lst);
void* x5729257498 = apply_prim__u61(lst57497);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5738857496);
arg_buffer[2] = x5729257498;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5738857496))[0]);
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
void* _57658 = arg_buffer[1];
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

void* kont5739057499 = prim_car(lst);
void* lst57500 = prim_cdr(lst);
void* x5729357501 = apply_prim__u62(lst57500);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5739057499);
arg_buffer[2] = x5729357501;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5739057499))[0]);
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
void* _57659 = arg_buffer[1];
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

void* kont5739257502 = prim_car(lst);
void* lst57503 = prim_cdr(lst);
void* x5729457504 = apply_prim__u60(lst57503);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5739257502);
arg_buffer[2] = x5729457504;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5739257502))[0]);
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
void* _57660 = arg_buffer[1];
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

void* kont5739457505 = prim_car(lst);
void* lst57506 = prim_cdr(lst);
void* x5729557507 = apply_prim__u60_u61(lst57506);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5739457505);
arg_buffer[2] = x5729557507;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5739457505))[0]);
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
void* _57661 = arg_buffer[1];
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

void* kont5739657508 = prim_car(lst);
void* lst57509 = prim_cdr(lst);
void* x5729657510 = apply_prim__u62_u61(lst57509);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5739657508);
arg_buffer[2] = x5729657510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5739657508))[0]);
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
void* _57662 = arg_buffer[1];
//reading env and args
void* kont57398 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5729757511 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57398);
arg_buffer[2] = x5729757511;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57398))[0]);
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
void* _57663 = arg_buffer[1];
//reading env and args
void* kont57399 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5729857512 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57399);
arg_buffer[2] = x5729857512;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57399))[0]);
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
void* _57664 = arg_buffer[1];
//reading env and args
void* kont57400 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5729957513 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57400);
arg_buffer[2] = x5729957513;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57400))[0]);
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
void* _57665 = arg_buffer[1];
//reading env and args
void* kont57401 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5730057514 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57401);
arg_buffer[2] = x5730057514;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57401))[0]);
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
void* _57666 = arg_buffer[1];
//reading env and args
void* kont57402 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5730157515 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57402);
arg_buffer[2] = x5730157515;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57402))[0]);
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
void* _57667 = arg_buffer[1];
//reading env and args
void* kont57403 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5730257516 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57403);
arg_buffer[2] = x5730257516;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57403))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam57668_fptr() // lam57668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57669 = arg_buffer[1];
//reading env and args
void* a5730557520 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env57669))[3];
//not do dummy comment
void* kont57404 = (decode_clo(env57669))[2];
//not do dummy comment
void* a5730357517 = (decode_clo(env57669))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57404;
arg_buffer[3] = a5730357517;
arg_buffer[4] = a5730557520;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57668 = encode_clo(alloc_clo(lam57668_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57672 = arg_buffer[1];
//reading env and args
void* kont57404 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58352 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58352, "0", 10);
void* a5730357517 = encode_mpz(mpzvar58352);
mpz_t* mpzvar58353 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58353, "2", 10);
void* a5730457518 = encode_mpz(mpzvar58353);

//creating new closure instance
void** clo58355 = alloc_clo(lam57668_fptr, 3);

//setting env list
clo58355[1] = a5730357517;
clo58355[2] = kont57404;
clo58355[3] = equal_u63;
void* f5740557519 = encode_clo(clo58355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5740557519;
arg_buffer[3] = x;
arg_buffer[4] = a5730457518;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam57673_fptr() // lam57673 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57674 = arg_buffer[1];
//reading env and args
void* a5730857524 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env57674))[3];
//not do dummy comment
void* kont57406 = (decode_clo(env57674))[2];
//not do dummy comment
void* a5730657521 = (decode_clo(env57674))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57406;
arg_buffer[3] = a5730657521;
arg_buffer[4] = a5730857524;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57673 = encode_clo(alloc_clo(lam57673_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57677 = arg_buffer[1];
//reading env and args
void* kont57406 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58356 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58356, "1", 10);
void* a5730657521 = encode_mpz(mpzvar58356);
mpz_t* mpzvar58357 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58357, "2", 10);
void* a5730757522 = encode_mpz(mpzvar58357);

//creating new closure instance
void** clo58359 = alloc_clo(lam57673_fptr, 3);

//setting env list
clo58359[1] = a5730657521;
clo58359[2] = kont57406;
clo58359[3] = equal_u63;
void* f5740757523 = encode_clo(clo58359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5740757523;
arg_buffer[3] = x;
arg_buffer[4] = a5730757522;
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
void* _57678 = arg_buffer[1];
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

void* kont5740857525 = prim_car(x);
void* x57526 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5740857525);
arg_buffer[2] = x57526;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5740857525))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* and_fptr() // and 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57679 = arg_buffer[1];
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

void* kont5741057527 = prim_car(lst);
void* lst57528 = prim_cdr(lst);
void* x5730957529 = apply_prim_and(lst57528);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5741057527);
arg_buffer[2] = x5730957529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5741057527))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* and = encode_clo(alloc_clo(and_fptr, 0));

void* or_fptr() // or 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57680 = arg_buffer[1];
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

void* kont5741257530 = prim_car(lst);
void* lst57531 = prim_cdr(lst);
void* x5731057532 = apply_prim_or(lst57531);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5741257530);
arg_buffer[2] = x5731057532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5741257530))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam57683_fptr() // lam57683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57684 = arg_buffer[1];
//reading env and args
void* a5731657542 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57414 = (decode_clo(env57684))[3];
//not do dummy comment
void* x = (decode_clo(env57684))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57684))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont57414;
arg_buffer[3] = x;
arg_buffer[4] = a5731657542;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57683 = encode_clo(alloc_clo(lam57683_fptr, 0));

void* lam57685_fptr() // lam57685 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57686 = arg_buffer[1];
//reading env and args
void* a5731457539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57686))[5];
//not do dummy comment
void* x = (decode_clo(env57686))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env57686))[3];
//not do dummy comment
void* lst = (decode_clo(env57686))[2];
//not do dummy comment
void* kont57414 = (decode_clo(env57686))[1];

//if-clause
bool if_guard58360 = is_true(a5731457539);
if(if_guard58360)
{
void* x5731557540 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57414);
arg_buffer[2] = x5731557540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57414))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58362 = alloc_clo(lam57683_fptr, 3);

//setting env list
clo58362[1] = member_u63;
clo58362[2] = x;
clo58362[3] = kont57414;
void* f5741557541 = encode_clo(clo58362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5741557541;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57685 = encode_clo(alloc_clo(lam57685_fptr, 0));

void* lam57687_fptr() // lam57687 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57688 = arg_buffer[1];
//reading env and args
void* a5731357537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57688))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env57688))[5];
//not do dummy comment
void* x = (decode_clo(env57688))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env57688))[3];
//not do dummy comment
void* lst = (decode_clo(env57688))[2];
//not do dummy comment
void* kont57414 = (decode_clo(env57688))[1];

//creating new closure instance
void** clo58364 = alloc_clo(lam57685_fptr, 5);

//setting env list
clo58364[1] = kont57414;
clo58364[2] = lst;
clo58364[3] = member_u63;
clo58364[4] = x;
clo58364[5] = cdr;
void* f5741657538 = encode_clo(clo58364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5741657538;
arg_buffer[3] = a5731357537;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57687 = encode_clo(alloc_clo(lam57687_fptr, 0));

void* lam57689_fptr() // lam57689 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57690 = arg_buffer[1];
//reading env and args
void* a5731157534 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57690))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env57690))[6];
//not do dummy comment
void* x = (decode_clo(env57690))[5];
//not do dummy comment
void* car = (decode_clo(env57690))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env57690))[3];
//not do dummy comment
void* lst = (decode_clo(env57690))[2];
//not do dummy comment
void* kont57414 = (decode_clo(env57690))[1];

//if-clause
bool if_guard58365 = is_true(a5731157534);
if(if_guard58365)
{
void* x5731257535 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57414);
arg_buffer[2] = x5731257535;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57414))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58367 = alloc_clo(lam57687_fptr, 6);

//setting env list
clo58367[1] = kont57414;
clo58367[2] = lst;
clo58367[3] = member_u63;
clo58367[4] = x;
clo58367[5] = equal_u63;
clo58367[6] = cdr;
void* f5741757536 = encode_clo(clo58367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5741757536;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57689 = encode_clo(alloc_clo(lam57689_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57691 = arg_buffer[1];
//reading env and args
void* kont57414 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58369 = alloc_clo(lam57689_fptr, 7);

//setting env list
clo58369[1] = kont57414;
clo58369[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo58369[3] = member_u63;
clo58369[4] = car;
clo58369[5] = x;
clo58369[6] = equal_u63;
clo58369[7] = cdr;
void* f5741857533 = encode_clo(clo58369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5741857533;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam57692_fptr() // lam57692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57693 = arg_buffer[1];
//reading env and args
void* a5732057550 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57419 = (decode_clo(env57693))[4];
//not do dummy comment
void* foldl = (decode_clo(env57693))[3];
//not do dummy comment
void* a5731957548 = (decode_clo(env57693))[2];
//not do dummy comment
void* fun = (decode_clo(env57693))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont57419;
arg_buffer[3] = fun;
arg_buffer[4] = a5731957548;
arg_buffer[5] = a5732057550;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57692 = encode_clo(alloc_clo(lam57692_fptr, 0));

void* lam57694_fptr() // lam57694 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57695 = arg_buffer[1];
//reading env and args
void* a5731957548 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57695))[5];
//not do dummy comment
void* lst = (decode_clo(env57695))[4];
//not do dummy comment
void* kont57419 = (decode_clo(env57695))[3];
//not do dummy comment
void* fun = (decode_clo(env57695))[2];
//not do dummy comment
void* foldl = (decode_clo(env57695))[1];

//creating new closure instance
void** clo58371 = alloc_clo(lam57692_fptr, 4);

//setting env list
clo58371[1] = fun;
clo58371[2] = a5731957548;
clo58371[3] = foldl;
clo58371[4] = kont57419;
void* f5742057549 = encode_clo(clo58371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5742057549;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57694 = encode_clo(alloc_clo(lam57694_fptr, 0));

void* lam57696_fptr() // lam57696 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57697 = arg_buffer[1];
//reading env and args
void* a5731857546 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57697))[6];
//not do dummy comment
void* lst = (decode_clo(env57697))[5];
//not do dummy comment
void* kont57419 = (decode_clo(env57697))[4];
//not do dummy comment
void* fun = (decode_clo(env57697))[3];
//not do dummy comment
void* acc = (decode_clo(env57697))[2];
//not do dummy comment
void* foldl = (decode_clo(env57697))[1];

//creating new closure instance
void** clo58373 = alloc_clo(lam57694_fptr, 5);

//setting env list
clo58373[1] = foldl;
clo58373[2] = fun;
clo58373[3] = kont57419;
clo58373[4] = lst;
clo58373[5] = cdr;
void* f5742157547 = encode_clo(clo58373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5742157547;
arg_buffer[3] = a5731857546;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57696 = encode_clo(alloc_clo(lam57696_fptr, 0));

void* lam57698_fptr() // lam57698 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57699 = arg_buffer[1];
//reading env and args
void* a5731757544 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57699))[7];
//not do dummy comment
void* lst = (decode_clo(env57699))[6];
//not do dummy comment
void* kont57419 = (decode_clo(env57699))[5];
//not do dummy comment
void* fun = (decode_clo(env57699))[4];
//not do dummy comment
void* acc = (decode_clo(env57699))[3];
//not do dummy comment
void* car = (decode_clo(env57699))[2];
//not do dummy comment
void* foldl = (decode_clo(env57699))[1];

//if-clause
bool if_guard58374 = is_true(a5731757544);
if(if_guard58374)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57419);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57419))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58376 = alloc_clo(lam57696_fptr, 6);

//setting env list
clo58376[1] = foldl;
clo58376[2] = acc;
clo58376[3] = fun;
clo58376[4] = kont57419;
clo58376[5] = lst;
clo58376[6] = cdr;
void* f5742257545 = encode_clo(clo58376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5742257545;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57698 = encode_clo(alloc_clo(lam57698_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57700 = arg_buffer[1];
//reading env and args
void* kont57419 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58378 = alloc_clo(lam57698_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo58378[1] = foldl;
clo58378[2] = car;
clo58378[3] = acc;
clo58378[4] = fun;
clo58378[5] = kont57419;
clo58378[6] = lst;
clo58378[7] = cdr;
void* f5742357543 = encode_clo(clo58378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5742357543;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam57701_fptr() // lam57701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57702 = arg_buffer[1];
//reading env and args
void* a5732457558 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5732257554 = (decode_clo(env57702))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57702))[2];
//not do dummy comment
void* kont57424 = (decode_clo(env57702))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57424;
arg_buffer[3] = a5732257554;
arg_buffer[4] = a5732457558;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57701 = encode_clo(alloc_clo(lam57701_fptr, 0));

void* lam57703_fptr() // lam57703 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57704 = arg_buffer[1];
//reading env and args
void* a5732357556 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5732257554 = (decode_clo(env57704))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57704))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57704))[3];
//not do dummy comment
void* cons = (decode_clo(env57704))[2];
//not do dummy comment
void* kont57424 = (decode_clo(env57704))[1];

//creating new closure instance
void** clo58380 = alloc_clo(lam57701_fptr, 3);

//setting env list
clo58380[1] = kont57424;
clo58380[2] = reverse_u45helper;
clo58380[3] = a5732257554;
void* f5742557557 = encode_clo(clo58380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5742557557;
arg_buffer[3] = a5732357556;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57703 = encode_clo(alloc_clo(lam57703_fptr, 0));

void* lam57705_fptr() // lam57705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57706 = arg_buffer[1];
//reading env and args
void* a5732257554 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57706))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57706))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57706))[4];
//not do dummy comment
void* car = (decode_clo(env57706))[3];
//not do dummy comment
void* cons = (decode_clo(env57706))[2];
//not do dummy comment
void* kont57424 = (decode_clo(env57706))[1];

//creating new closure instance
void** clo58382 = alloc_clo(lam57703_fptr, 5);

//setting env list
clo58382[1] = kont57424;
clo58382[2] = cons;
clo58382[3] = lst2;
clo58382[4] = reverse_u45helper;
clo58382[5] = a5732257554;
void* f5742657555 = encode_clo(clo58382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5742657555;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57705 = encode_clo(alloc_clo(lam57705_fptr, 0));

void* lam57707_fptr() // lam57707 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57708 = arg_buffer[1];
//reading env and args
void* a5732157552 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57708))[7];
//not do dummy comment
void* lst = (decode_clo(env57708))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57708))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57708))[4];
//not do dummy comment
void* car = (decode_clo(env57708))[3];
//not do dummy comment
void* cons = (decode_clo(env57708))[2];
//not do dummy comment
void* kont57424 = (decode_clo(env57708))[1];

//if-clause
bool if_guard58383 = is_true(a5732157552);
if(if_guard58383)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57424);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57424))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58385 = alloc_clo(lam57705_fptr, 6);

//setting env list
clo58385[1] = kont57424;
clo58385[2] = cons;
clo58385[3] = car;
clo58385[4] = lst2;
clo58385[5] = reverse_u45helper;
clo58385[6] = lst;
void* f5742757553 = encode_clo(clo58385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5742757553;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57707 = encode_clo(alloc_clo(lam57707_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57709 = arg_buffer[1];
//reading env and args
void* kont57424 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58387 = alloc_clo(lam57707_fptr, 7);

//setting env list
clo58387[1] = kont57424;
clo58387[2] = cons;
clo58387[3] = car;
clo58387[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo58387[5] = reverse_u45helper;
clo58387[6] = lst;
clo58387[7] = cdr;
void* f5742857551 = encode_clo(clo58387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5742857551;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam57710_fptr() // lam57710 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57711 = arg_buffer[1];
//reading env and args
void* a5732557560 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57429 = (decode_clo(env57711))[3];
//not do dummy comment
void* lst = (decode_clo(env57711))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57711))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57429;
arg_buffer[3] = lst;
arg_buffer[4] = a5732557560;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57710 = encode_clo(alloc_clo(lam57710_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57712 = arg_buffer[1];
//reading env and args
void* kont57429 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58389 = alloc_clo(lam57710_fptr, 3);

//setting env list
clo58389[1] = reverse_u45helper;
clo58389[2] = lst;
clo58389[3] = kont57429;
void* f5743057559 = encode_clo(clo58389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5743057559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam57713_fptr() // lam57713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57714 = arg_buffer[1];
//reading env and args
void* x5732857565 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57431 = (decode_clo(env57714))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57431);
arg_buffer[2] = x5732857565;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57431))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57713 = encode_clo(alloc_clo(lam57713_fptr, 0));

void* lam57715_fptr() // lam57715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57716 = arg_buffer[1];
//reading env and args
void* a5733357574 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5733157570 = (decode_clo(env57716))[4];
//not do dummy comment
void* kont57431 = (decode_clo(env57716))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57716))[2];
//not do dummy comment
void* a5732957567 = (decode_clo(env57716))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57431;
arg_buffer[3] = a5732957567;
arg_buffer[4] = a5733157570;
arg_buffer[5] = a5733357574;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57715 = encode_clo(alloc_clo(lam57715_fptr, 0));

void* lam57717_fptr() // lam57717 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57718 = arg_buffer[1];
//reading env and args
void* a5733257572 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5733157570 = (decode_clo(env57718))[6];
//not do dummy comment
void* kont57431 = (decode_clo(env57718))[5];
//not do dummy comment
void* a5732957567 = (decode_clo(env57718))[4];
//not do dummy comment
void* cons = (decode_clo(env57718))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57718))[2];
//not do dummy comment
void* lst2 = (decode_clo(env57718))[1];

//creating new closure instance
void** clo58391 = alloc_clo(lam57715_fptr, 4);

//setting env list
clo58391[1] = a5732957567;
clo58391[2] = take_u45helper;
clo58391[3] = kont57431;
clo58391[4] = a5733157570;
void* f5743357573 = encode_clo(clo58391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5743357573;
arg_buffer[3] = a5733257572;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57717 = encode_clo(alloc_clo(lam57717_fptr, 0));

void* lam57719_fptr() // lam57719 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57720 = arg_buffer[1];
//reading env and args
void* a5733157570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57720))[7];
//not do dummy comment
void* kont57431 = (decode_clo(env57720))[6];
//not do dummy comment
void* cons = (decode_clo(env57720))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env57720))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57720))[3];
//not do dummy comment
void* a5732957567 = (decode_clo(env57720))[2];
//not do dummy comment
void* car = (decode_clo(env57720))[1];

//creating new closure instance
void** clo58393 = alloc_clo(lam57717_fptr, 6);

//setting env list
clo58393[1] = lst2;
clo58393[2] = take_u45helper;
clo58393[3] = cons;
clo58393[4] = a5732957567;
clo58393[5] = kont57431;
clo58393[6] = a5733157570;
void* f5743457571 = encode_clo(clo58393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5743457571;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57719 = encode_clo(alloc_clo(lam57719_fptr, 0));

void* lam57722_fptr() // lam57722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57723 = arg_buffer[1];
//reading env and args
void* a5732957567 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57723))[8];
//not do dummy comment
void* kont57431 = (decode_clo(env57723))[7];
//not do dummy comment
void* cons = (decode_clo(env57723))[6];
//not do dummy comment
void* _u45 = (decode_clo(env57723))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env57723))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57723))[3];
//not do dummy comment
void* n = (decode_clo(env57723))[2];
//not do dummy comment
void* car = (decode_clo(env57723))[1];
mpz_t* mpzvar58394 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58394, "1", 10);
void* a5733057568 = encode_mpz(mpzvar58394);

//creating new closure instance
void** clo58396 = alloc_clo(lam57719_fptr, 7);

//setting env list
clo58396[1] = car;
clo58396[2] = a5732957567;
clo58396[3] = lst2;
clo58396[4] = take_u45helper;
clo58396[5] = cons;
clo58396[6] = kont57431;
clo58396[7] = lst;
void* f5743557569 = encode_clo(clo58396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5743557569;
arg_buffer[3] = n;
arg_buffer[4] = a5733057568;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57722 = encode_clo(alloc_clo(lam57722_fptr, 0));

void* lam57724_fptr() // lam57724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57725 = arg_buffer[1];
//reading env and args
void* a5732757563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57725))[10];
//not do dummy comment
void* lst = (decode_clo(env57725))[9];
//not do dummy comment
void* kont57431 = (decode_clo(env57725))[8];
//not do dummy comment
void* reverse = (decode_clo(env57725))[7];
//not do dummy comment
void* cons = (decode_clo(env57725))[6];
//not do dummy comment
void* _u45 = (decode_clo(env57725))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env57725))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57725))[3];
//not do dummy comment
void* n = (decode_clo(env57725))[2];
//not do dummy comment
void* car = (decode_clo(env57725))[1];

//if-clause
bool if_guard58397 = is_true(a5732757563);
if(if_guard58397)
{

//creating new closure instance
void** clo58399 = alloc_clo(lam57713_fptr, 1);

//setting env list
clo58399[1] = kont57431;
void* f5743257564 = encode_clo(clo58399);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5743257564;
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
void** clo58401 = alloc_clo(lam57722_fptr, 8);

//setting env list
clo58401[1] = car;
clo58401[2] = n;
clo58401[3] = lst2;
clo58401[4] = take_u45helper;
clo58401[5] = _u45;
clo58401[6] = cons;
clo58401[7] = kont57431;
clo58401[8] = lst;
void* f5743657566 = encode_clo(clo58401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5743657566;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57724 = encode_clo(alloc_clo(lam57724_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57727 = arg_buffer[1];
//reading env and args
void* kont57431 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar58402 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58402, "0", 10);
void* a5732657561 = encode_mpz(mpzvar58402);

//creating new closure instance
void** clo58404 = alloc_clo(lam57724_fptr, 10);

//setting env list
clo58404[1] = car;
clo58404[2] = n;
clo58404[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo58404[4] = take_u45helper;
clo58404[5] = _u45;
clo58404[6] = cons;
clo58404[7] = reverse;
clo58404[8] = kont57431;
clo58404[9] = lst;
clo58404[10] = cdr;
void* f5743757562 = encode_clo(clo58404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5743757562;
arg_buffer[3] = n;
arg_buffer[4] = a5732657561;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam57728_fptr() // lam57728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57729 = arg_buffer[1];
//reading env and args
void* a5733457576 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57729))[4];
//not do dummy comment
void* n = (decode_clo(env57729))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57729))[2];
//not do dummy comment
void* kont57438 = (decode_clo(env57729))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57438;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5733457576;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57728 = encode_clo(alloc_clo(lam57728_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57730 = arg_buffer[1];
//reading env and args
void* kont57438 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58406 = alloc_clo(lam57728_fptr, 4);

//setting env list
clo58406[1] = kont57438;
clo58406[2] = take_u45helper;
clo58406[3] = n;
clo58406[4] = lst;
void* f5743957575 = encode_clo(clo58406);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5743957575;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam57732_fptr() // lam57732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57733 = arg_buffer[1];
//reading env and args
void* a5733957584 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env57733))[3];
//not do dummy comment
void* a5733757580 = (decode_clo(env57733))[2];
//not do dummy comment
void* kont57440 = (decode_clo(env57733))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont57440;
arg_buffer[3] = a5733757580;
arg_buffer[4] = a5733957584;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57732 = encode_clo(alloc_clo(lam57732_fptr, 0));

void* lam57734_fptr() // lam57734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57735 = arg_buffer[1];
//reading env and args
void* a5733857582 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env57735))[4];
//not do dummy comment
void* _u43 = (decode_clo(env57735))[3];
//not do dummy comment
void* a5733757580 = (decode_clo(env57735))[2];
//not do dummy comment
void* kont57440 = (decode_clo(env57735))[1];

//creating new closure instance
void** clo58408 = alloc_clo(lam57732_fptr, 3);

//setting env list
clo58408[1] = kont57440;
clo58408[2] = a5733757580;
clo58408[3] = _u43;
void* f5744157583 = encode_clo(clo58408);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5744157583;
arg_buffer[3] = a5733857582;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57734 = encode_clo(alloc_clo(lam57734_fptr, 0));

void* lam57737_fptr() // lam57737 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57738 = arg_buffer[1];
//reading env and args
void* a5733557578 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57738))[5];
//not do dummy comment
void* lst = (decode_clo(env57738))[4];
//not do dummy comment
void* length = (decode_clo(env57738))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57738))[2];
//not do dummy comment
void* kont57440 = (decode_clo(env57738))[1];

//if-clause
bool if_guard58409 = is_true(a5733557578);
if(if_guard58409)
{
mpz_t* mpzvar58410 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58410, "0", 10);
void* x5733657579 = encode_mpz(mpzvar58410);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57440);
arg_buffer[2] = x5733657579;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57440))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar58411 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58411, "1", 10);
void* a5733757580 = encode_mpz(mpzvar58411);

//creating new closure instance
void** clo58413 = alloc_clo(lam57734_fptr, 4);

//setting env list
clo58413[1] = kont57440;
clo58413[2] = a5733757580;
clo58413[3] = _u43;
clo58413[4] = length;
void* f5744257581 = encode_clo(clo58413);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5744257581;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57737 = encode_clo(alloc_clo(lam57737_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57739 = arg_buffer[1];
//reading env and args
void* kont57440 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58415 = alloc_clo(lam57737_fptr, 5);

//setting env list
clo58415[1] = kont57440;
clo58415[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo58415[3] = length;
clo58415[4] = lst;
clo58415[5] = cdr;
void* f5744357577 = encode_clo(clo58415);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5744357577;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam57740_fptr() // lam57740 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57741 = arg_buffer[1];
//reading env and args
void* x5734157588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57444 = (decode_clo(env57741))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57444);
arg_buffer[2] = x5734157588;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57444))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57740 = encode_clo(alloc_clo(lam57740_fptr, 0));

void* lam57742_fptr() // lam57742 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57743 = arg_buffer[1];
//reading env and args
void* a5734557596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57444 = (decode_clo(env57743))[3];
//not do dummy comment
void* a5734357592 = (decode_clo(env57743))[2];
//not do dummy comment
void* cons = (decode_clo(env57743))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57444;
arg_buffer[3] = a5734357592;
arg_buffer[4] = a5734557596;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57742 = encode_clo(alloc_clo(lam57742_fptr, 0));

void* lam57744_fptr() // lam57744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57745 = arg_buffer[1];
//reading env and args
void* a5734457594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57444 = (decode_clo(env57745))[5];
//not do dummy comment
void* map = (decode_clo(env57745))[4];
//not do dummy comment
void* a5734357592 = (decode_clo(env57745))[3];
//not do dummy comment
void* proc = (decode_clo(env57745))[2];
//not do dummy comment
void* cons = (decode_clo(env57745))[1];

//creating new closure instance
void** clo58417 = alloc_clo(lam57742_fptr, 3);

//setting env list
clo58417[1] = cons;
clo58417[2] = a5734357592;
clo58417[3] = kont57444;
void* f5744657595 = encode_clo(clo58417);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5744657595;
arg_buffer[3] = proc;
arg_buffer[4] = a5734457594;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57744 = encode_clo(alloc_clo(lam57744_fptr, 0));

void* lam57746_fptr() // lam57746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57747 = arg_buffer[1];
//reading env and args
void* a5734357592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57747))[6];
//not do dummy comment
void* kont57444 = (decode_clo(env57747))[5];
//not do dummy comment
void* lst = (decode_clo(env57747))[4];
//not do dummy comment
void* map = (decode_clo(env57747))[3];
//not do dummy comment
void* proc = (decode_clo(env57747))[2];
//not do dummy comment
void* cons = (decode_clo(env57747))[1];

//creating new closure instance
void** clo58419 = alloc_clo(lam57744_fptr, 5);

//setting env list
clo58419[1] = cons;
clo58419[2] = proc;
clo58419[3] = a5734357592;
clo58419[4] = map;
clo58419[5] = kont57444;
void* f5744757593 = encode_clo(clo58419);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5744757593;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57746 = encode_clo(alloc_clo(lam57746_fptr, 0));

void* lam57748_fptr() // lam57748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57749 = arg_buffer[1];
//reading env and args
void* a5734257590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57749))[6];
//not do dummy comment
void* kont57444 = (decode_clo(env57749))[5];
//not do dummy comment
void* lst = (decode_clo(env57749))[4];
//not do dummy comment
void* map = (decode_clo(env57749))[3];
//not do dummy comment
void* proc = (decode_clo(env57749))[2];
//not do dummy comment
void* cons = (decode_clo(env57749))[1];

//creating new closure instance
void** clo58421 = alloc_clo(lam57746_fptr, 6);

//setting env list
clo58421[1] = cons;
clo58421[2] = proc;
clo58421[3] = map;
clo58421[4] = lst;
clo58421[5] = kont57444;
clo58421[6] = cdr;
void* f5744857591 = encode_clo(clo58421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5744857591;
arg_buffer[3] = a5734257590;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57748 = encode_clo(alloc_clo(lam57748_fptr, 0));

void* lam57750_fptr() // lam57750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57751 = arg_buffer[1];
//reading env and args
void* a5734057586 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57444 = (decode_clo(env57751))[8];
//not do dummy comment
void* lst = (decode_clo(env57751))[7];
//not do dummy comment
void* map = (decode_clo(env57751))[6];
//not do dummy comment
void* proc = (decode_clo(env57751))[5];
//not do dummy comment
void* car = (decode_clo(env57751))[4];
//not do dummy comment
void* cons = (decode_clo(env57751))[3];
//not do dummy comment
void* list = (decode_clo(env57751))[2];
//not do dummy comment
void* cdr = (decode_clo(env57751))[1];

//if-clause
bool if_guard58422 = is_true(a5734057586);
if(if_guard58422)
{

//creating new closure instance
void** clo58424 = alloc_clo(lam57740_fptr, 1);

//setting env list
clo58424[1] = kont57444;
void* f5744557587 = encode_clo(clo58424);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5744557587;
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
void** clo58426 = alloc_clo(lam57748_fptr, 6);

//setting env list
clo58426[1] = cons;
clo58426[2] = proc;
clo58426[3] = map;
clo58426[4] = lst;
clo58426[5] = kont57444;
clo58426[6] = cdr;
void* f5744957589 = encode_clo(clo58426);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5744957589;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57750 = encode_clo(alloc_clo(lam57750_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57752 = arg_buffer[1];
//reading env and args
void* kont57444 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58428 = alloc_clo(lam57750_fptr, 8);

//setting env list
clo58428[1] = cdr;
clo58428[2] = list;
clo58428[3] = cons;
clo58428[4] = car;
clo58428[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo58428[6] = map;
clo58428[7] = lst;
clo58428[8] = kont57444;
void* f5745057585 = encode_clo(clo58428);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5745057585;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam57753_fptr() // lam57753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57754 = arg_buffer[1];
//reading env and args
void* x5734757600 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57451 = (decode_clo(env57754))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57451);
arg_buffer[2] = x5734757600;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57451))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57753 = encode_clo(alloc_clo(lam57753_fptr, 0));

void* lam57755_fptr() // lam57755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57756 = arg_buffer[1];
//reading env and args
void* a5735257610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5735057606 = (decode_clo(env57756))[3];
//not do dummy comment
void* kont57451 = (decode_clo(env57756))[2];
//not do dummy comment
void* cons = (decode_clo(env57756))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57451;
arg_buffer[3] = a5735057606;
arg_buffer[4] = a5735257610;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57755 = encode_clo(alloc_clo(lam57755_fptr, 0));

void* lam57757_fptr() // lam57757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57758 = arg_buffer[1];
//reading env and args
void* a5735157608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5735057606 = (decode_clo(env57758))[5];
//not do dummy comment
void* op = (decode_clo(env57758))[4];
//not do dummy comment
void* kont57451 = (decode_clo(env57758))[3];
//not do dummy comment
void* filter = (decode_clo(env57758))[2];
//not do dummy comment
void* cons = (decode_clo(env57758))[1];

//creating new closure instance
void** clo58430 = alloc_clo(lam57755_fptr, 3);

//setting env list
clo58430[1] = cons;
clo58430[2] = kont57451;
clo58430[3] = a5735057606;
void* f5745357609 = encode_clo(clo58430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5745357609;
arg_buffer[3] = op;
arg_buffer[4] = a5735157608;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57757 = encode_clo(alloc_clo(lam57757_fptr, 0));

void* lam57759_fptr() // lam57759 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57760 = arg_buffer[1];
//reading env and args
void* a5735057606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57760))[6];
//not do dummy comment
void* lst = (decode_clo(env57760))[5];
//not do dummy comment
void* op = (decode_clo(env57760))[4];
//not do dummy comment
void* kont57451 = (decode_clo(env57760))[3];
//not do dummy comment
void* filter = (decode_clo(env57760))[2];
//not do dummy comment
void* cons = (decode_clo(env57760))[1];

//creating new closure instance
void** clo58432 = alloc_clo(lam57757_fptr, 5);

//setting env list
clo58432[1] = cons;
clo58432[2] = filter;
clo58432[3] = kont57451;
clo58432[4] = op;
clo58432[5] = a5735057606;
void* f5745457607 = encode_clo(clo58432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5745457607;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57759 = encode_clo(alloc_clo(lam57759_fptr, 0));

void* lam57761_fptr() // lam57761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57762 = arg_buffer[1];
//reading env and args
void* a5735357612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env57762))[3];
//not do dummy comment
void* kont57451 = (decode_clo(env57762))[2];
//not do dummy comment
void* filter = (decode_clo(env57762))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont57451;
arg_buffer[3] = op;
arg_buffer[4] = a5735357612;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57761 = encode_clo(alloc_clo(lam57761_fptr, 0));

void* lam57763_fptr() // lam57763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57764 = arg_buffer[1];
//reading env and args
void* a5734957604 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57764))[7];
//not do dummy comment
void* lst = (decode_clo(env57764))[6];
//not do dummy comment
void* op = (decode_clo(env57764))[5];
//not do dummy comment
void* kont57451 = (decode_clo(env57764))[4];
//not do dummy comment
void* cons = (decode_clo(env57764))[3];
//not do dummy comment
void* filter = (decode_clo(env57764))[2];
//not do dummy comment
void* car = (decode_clo(env57764))[1];

//if-clause
bool if_guard58433 = is_true(a5734957604);
if(if_guard58433)
{

//creating new closure instance
void** clo58435 = alloc_clo(lam57759_fptr, 6);

//setting env list
clo58435[1] = cons;
clo58435[2] = filter;
clo58435[3] = kont57451;
clo58435[4] = op;
clo58435[5] = lst;
clo58435[6] = cdr;
void* f5745557605 = encode_clo(clo58435);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5745557605;
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
void** clo58437 = alloc_clo(lam57761_fptr, 3);

//setting env list
clo58437[1] = filter;
clo58437[2] = kont57451;
clo58437[3] = op;
void* f5745657611 = encode_clo(clo58437);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5745657611;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57763 = encode_clo(alloc_clo(lam57763_fptr, 0));

void* lam57765_fptr() // lam57765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57766 = arg_buffer[1];
//reading env and args
void* a5734857602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57766))[7];
//not do dummy comment
void* lst = (decode_clo(env57766))[6];
//not do dummy comment
void* op = (decode_clo(env57766))[5];
//not do dummy comment
void* kont57451 = (decode_clo(env57766))[4];
//not do dummy comment
void* cons = (decode_clo(env57766))[3];
//not do dummy comment
void* filter = (decode_clo(env57766))[2];
//not do dummy comment
void* car = (decode_clo(env57766))[1];

//creating new closure instance
void** clo58439 = alloc_clo(lam57763_fptr, 7);

//setting env list
clo58439[1] = car;
clo58439[2] = filter;
clo58439[3] = cons;
clo58439[4] = kont57451;
clo58439[5] = op;
clo58439[6] = lst;
clo58439[7] = cdr;
void* f5745757603 = encode_clo(clo58439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5745757603;
arg_buffer[3] = a5734857602;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57765 = encode_clo(alloc_clo(lam57765_fptr, 0));

void* lam57767_fptr() // lam57767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57768 = arg_buffer[1];
//reading env and args
void* a5734657598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57768))[8];
//not do dummy comment
void* op = (decode_clo(env57768))[7];
//not do dummy comment
void* kont57451 = (decode_clo(env57768))[6];
//not do dummy comment
void* cons = (decode_clo(env57768))[5];
//not do dummy comment
void* list = (decode_clo(env57768))[4];
//not do dummy comment
void* cdr = (decode_clo(env57768))[3];
//not do dummy comment
void* filter = (decode_clo(env57768))[2];
//not do dummy comment
void* car = (decode_clo(env57768))[1];

//if-clause
bool if_guard58440 = is_true(a5734657598);
if(if_guard58440)
{

//creating new closure instance
void** clo58442 = alloc_clo(lam57753_fptr, 1);

//setting env list
clo58442[1] = kont57451;
void* f5745257599 = encode_clo(clo58442);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5745257599;
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
void** clo58444 = alloc_clo(lam57765_fptr, 7);

//setting env list
clo58444[1] = car;
clo58444[2] = filter;
clo58444[3] = cons;
clo58444[4] = kont57451;
clo58444[5] = op;
clo58444[6] = lst;
clo58444[7] = cdr;
void* f5745857601 = encode_clo(clo58444);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5745857601;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57767 = encode_clo(alloc_clo(lam57767_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57769 = arg_buffer[1];
//reading env and args
void* kont57451 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58446 = alloc_clo(lam57767_fptr, 8);

//setting env list
clo58446[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo58446[2] = filter;
clo58446[3] = cdr;
clo58446[4] = list;
clo58446[5] = cons;
clo58446[6] = kont57451;
clo58446[7] = op;
clo58446[8] = lst;
void* f5745957597 = encode_clo(clo58446);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5745957597;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam57770_fptr() // lam57770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57771 = arg_buffer[1];
//reading env and args
void* a5735857620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57460 = (decode_clo(env57771))[3];
//not do dummy comment
void* drop = (decode_clo(env57771))[2];
//not do dummy comment
void* a5735657617 = (decode_clo(env57771))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont57460;
arg_buffer[3] = a5735657617;
arg_buffer[4] = a5735857620;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57770 = encode_clo(alloc_clo(lam57770_fptr, 0));

void* lam57773_fptr() // lam57773 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57774 = arg_buffer[1];
//reading env and args
void* a5735657617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57460 = (decode_clo(env57774))[4];
//not do dummy comment
void* drop = (decode_clo(env57774))[3];
//not do dummy comment
void* n = (decode_clo(env57774))[2];
//not do dummy comment
void* _u45 = (decode_clo(env57774))[1];
mpz_t* mpzvar58447 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58447, "1", 10);
void* a5735757618 = encode_mpz(mpzvar58447);

//creating new closure instance
void** clo58449 = alloc_clo(lam57770_fptr, 3);

//setting env list
clo58449[1] = a5735657617;
clo58449[2] = drop;
clo58449[3] = kont57460;
void* f5746157619 = encode_clo(clo58449);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5746157619;
arg_buffer[3] = n;
arg_buffer[4] = a5735757618;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57773 = encode_clo(alloc_clo(lam57773_fptr, 0));

void* lam57775_fptr() // lam57775 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57776 = arg_buffer[1];
//reading env and args
void* a5735557615 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57776))[6];
//not do dummy comment
void* kont57460 = (decode_clo(env57776))[5];
//not do dummy comment
void* n = (decode_clo(env57776))[4];
//not do dummy comment
void* _u45 = (decode_clo(env57776))[3];
//not do dummy comment
void* lst = (decode_clo(env57776))[2];
//not do dummy comment
void* drop = (decode_clo(env57776))[1];

//if-clause
bool if_guard58450 = is_true(a5735557615);
if(if_guard58450)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57460);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57460))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58452 = alloc_clo(lam57773_fptr, 4);

//setting env list
clo58452[1] = _u45;
clo58452[2] = n;
clo58452[3] = drop;
clo58452[4] = kont57460;
void* f5746257616 = encode_clo(clo58452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5746257616;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57775 = encode_clo(alloc_clo(lam57775_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57778 = arg_buffer[1];
//reading env and args
void* kont57460 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar58453 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58453, "0", 10);
void* a5735457613 = encode_mpz(mpzvar58453);

//creating new closure instance
void** clo58455 = alloc_clo(lam57775_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo58455[1] = drop;
clo58455[2] = lst;
clo58455[3] = _u45;
clo58455[4] = n;
clo58455[5] = kont57460;
clo58455[6] = cdr;
void* f5746357614 = encode_clo(clo58455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5746357614;
arg_buffer[3] = n;
arg_buffer[4] = a5735457613;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam57779_fptr() // lam57779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57780 = arg_buffer[1];
//reading env and args
void* a5736257628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env57780))[3];
//not do dummy comment
void* a5736057624 = (decode_clo(env57780))[2];
//not do dummy comment
void* kont57464 = (decode_clo(env57780))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont57464;
arg_buffer[3] = a5736057624;
arg_buffer[4] = a5736257628;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57779 = encode_clo(alloc_clo(lam57779_fptr, 0));

void* lam57781_fptr() // lam57781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57782 = arg_buffer[1];
//reading env and args
void* a5736157626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env57782))[5];
//not do dummy comment
void* a5736057624 = (decode_clo(env57782))[4];
//not do dummy comment
void* kont57464 = (decode_clo(env57782))[3];
//not do dummy comment
void* proc = (decode_clo(env57782))[2];
//not do dummy comment
void* acc = (decode_clo(env57782))[1];

//creating new closure instance
void** clo58457 = alloc_clo(lam57779_fptr, 3);

//setting env list
clo58457[1] = kont57464;
clo58457[2] = a5736057624;
clo58457[3] = proc;
void* f5746557627 = encode_clo(clo58457);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5746557627;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5736157626;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57781 = encode_clo(alloc_clo(lam57781_fptr, 0));

void* lam57783_fptr() // lam57783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57784 = arg_buffer[1];
//reading env and args
void* a5736057624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57784))[6];
//not do dummy comment
void* kont57464 = (decode_clo(env57784))[5];
//not do dummy comment
void* foldr = (decode_clo(env57784))[4];
//not do dummy comment
void* lst = (decode_clo(env57784))[3];
//not do dummy comment
void* proc = (decode_clo(env57784))[2];
//not do dummy comment
void* acc = (decode_clo(env57784))[1];

//creating new closure instance
void** clo58459 = alloc_clo(lam57781_fptr, 5);

//setting env list
clo58459[1] = acc;
clo58459[2] = proc;
clo58459[3] = kont57464;
clo58459[4] = a5736057624;
clo58459[5] = foldr;
void* f5746657625 = encode_clo(clo58459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5746657625;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57783 = encode_clo(alloc_clo(lam57783_fptr, 0));

void* lam57785_fptr() // lam57785 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57786 = arg_buffer[1];
//reading env and args
void* a5735957622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57786))[7];
//not do dummy comment
void* kont57464 = (decode_clo(env57786))[6];
//not do dummy comment
void* car = (decode_clo(env57786))[5];
//not do dummy comment
void* foldr = (decode_clo(env57786))[4];
//not do dummy comment
void* lst = (decode_clo(env57786))[3];
//not do dummy comment
void* proc = (decode_clo(env57786))[2];
//not do dummy comment
void* acc = (decode_clo(env57786))[1];

//if-clause
bool if_guard58460 = is_true(a5735957622);
if(if_guard58460)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57464);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57464))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58462 = alloc_clo(lam57783_fptr, 6);

//setting env list
clo58462[1] = acc;
clo58462[2] = proc;
clo58462[3] = lst;
clo58462[4] = foldr;
clo58462[5] = kont57464;
clo58462[6] = cdr;
void* f5746757623 = encode_clo(clo58462);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5746757623;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57785 = encode_clo(alloc_clo(lam57785_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57787 = arg_buffer[1];
//reading env and args
void* kont57464 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58464 = alloc_clo(lam57785_fptr, 7);

//setting env list
clo58464[1] = acc;
clo58464[2] = proc;
clo58464[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo58464[4] = foldr;
clo58464[5] = car;
clo58464[6] = kont57464;
clo58464[7] = cdr;
void* f5746857621 = encode_clo(clo58464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5746857621;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam57788_fptr() // lam57788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57789 = arg_buffer[1];
//reading env and args
void* a5736657636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57469 = (decode_clo(env57789))[3];
//not do dummy comment
void* a5736457632 = (decode_clo(env57789))[2];
//not do dummy comment
void* cons = (decode_clo(env57789))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57469;
arg_buffer[3] = a5736457632;
arg_buffer[4] = a5736657636;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57788 = encode_clo(alloc_clo(lam57788_fptr, 0));

void* lam57790_fptr() // lam57790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57791 = arg_buffer[1];
//reading env and args
void* a5736557634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env57791))[5];
//not do dummy comment
void* kont57469 = (decode_clo(env57791))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57791))[3];
//not do dummy comment
void* a5736457632 = (decode_clo(env57791))[2];
//not do dummy comment
void* cons = (decode_clo(env57791))[1];

//creating new closure instance
void** clo58466 = alloc_clo(lam57788_fptr, 3);

//setting env list
clo58466[1] = cons;
clo58466[2] = a5736457632;
clo58466[3] = kont57469;
void* f5747057635 = encode_clo(clo58466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5747057635;
arg_buffer[3] = a5736557634;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57790 = encode_clo(alloc_clo(lam57790_fptr, 0));

void* lam57792_fptr() // lam57792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57793 = arg_buffer[1];
//reading env and args
void* a5736457632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57793))[6];
//not do dummy comment
void* append = (decode_clo(env57793))[5];
//not do dummy comment
void* kont57469 = (decode_clo(env57793))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57793))[3];
//not do dummy comment
void* lst1 = (decode_clo(env57793))[2];
//not do dummy comment
void* cons = (decode_clo(env57793))[1];

//creating new closure instance
void** clo58468 = alloc_clo(lam57790_fptr, 5);

//setting env list
clo58468[1] = cons;
clo58468[2] = a5736457632;
clo58468[3] = lst2;
clo58468[4] = kont57469;
clo58468[5] = append;
void* f5747157633 = encode_clo(clo58468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5747157633;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57792 = encode_clo(alloc_clo(lam57792_fptr, 0));

void* lam57794_fptr() // lam57794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57795 = arg_buffer[1];
//reading env and args
void* a5736357630 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57795))[7];
//not do dummy comment
void* append = (decode_clo(env57795))[6];
//not do dummy comment
void* kont57469 = (decode_clo(env57795))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57795))[4];
//not do dummy comment
void* cons = (decode_clo(env57795))[3];
//not do dummy comment
void* lst1 = (decode_clo(env57795))[2];
//not do dummy comment
void* car = (decode_clo(env57795))[1];

//if-clause
bool if_guard58469 = is_true(a5736357630);
if(if_guard58469)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57469);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57469))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58471 = alloc_clo(lam57792_fptr, 6);

//setting env list
clo58471[1] = cons;
clo58471[2] = lst1;
clo58471[3] = lst2;
clo58471[4] = kont57469;
clo58471[5] = append;
clo58471[6] = cdr;
void* f5747257631 = encode_clo(clo58471);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5747257631;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57794 = encode_clo(alloc_clo(lam57794_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57796 = arg_buffer[1];
//reading env and args
void* kont57469 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58473 = alloc_clo(lam57794_fptr, 7);

//setting env list
clo58473[1] = car;
clo58473[2] = lst1;
clo58473[3] = cons;
clo58473[4] = lst2;
clo58473[5] = kont57469;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo58473[6] = append;
clo58473[7] = cdr;
void* f5747357629 = encode_clo(clo58473);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5747357629;
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
void* _57797 = arg_buffer[1];
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

void* kont5747457637 = prim_car(lst);
void* lst57638 = prim_cdr(lst);
void* x5736757639 = apply_prim_hash(lst57638);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5747457637);
arg_buffer[2] = x5736757639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5747457637))[0]);
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
void* _57798 = arg_buffer[1];
//reading env and args
void* kont57476 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5736857640 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57476);
arg_buffer[2] = x5736857640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57476))[0]);
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
void* _57799 = arg_buffer[1];
//reading env and args
void* kont57477 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5736957641 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57477);
arg_buffer[2] = x5736957641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57477))[0]);
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
void* _57800 = arg_buffer[1];
//reading env and args
void* kont57478 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5737057642 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57478);
arg_buffer[2] = x5737057642;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57478))[0]);
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
void* _57801 = arg_buffer[1];
//reading env and args
void* kont57479 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5737157643 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57479);
arg_buffer[2] = x5737157643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57479))[0]);
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
void* _57808 = arg_buffer[1];
//reading env and args
void* kont57480 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar58474 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58474, "1", 10);
void* a5737257644 = encode_mpz(mpzvar58474);
mpz_t* mpzvar58475 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58475, "2", 10);
void* a5737357645 = encode_mpz(mpzvar58475);
mpz_t* mpzvar58476 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58476, "3", 10);
void* a5737457646 = encode_mpz(mpzvar58476);
mpz_t* mpzvar58477 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58477, "4", 10);
void* a5737557647 = encode_mpz(mpzvar58477);
mpz_t* mpzvar58478 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58478, "5", 10);
void* a5737657648 = encode_mpz(mpzvar58478);
mpz_t* mpzvar58479 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58479, "100", 10);
void* a5737757649 = encode_mpz(mpzvar58479);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60);
arg_buffer[2] = kont57480;
arg_buffer[3] = a5737257644;
arg_buffer[4] = a5737357645;
arg_buffer[5] = a5737457646;
arg_buffer[6] = a5737557647;
arg_buffer[7] = a5737657648;
arg_buffer[8] = a5737757649;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam57809_fptr() // lam57809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57810 = arg_buffer[1];
//reading env and args
void* x5737857651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57481 = (decode_clo(env57810))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57481);
arg_buffer[2] = x5737857651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57481))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57809 = encode_clo(alloc_clo(lam57809_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57811 = arg_buffer[1];
//reading env and args
void* kont57481 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo58481 = alloc_clo(lam57809_fptr, 1);

//setting env list
clo58481[1] = kont57481;
void* f5748257650 = encode_clo(clo58481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5748257650;
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

