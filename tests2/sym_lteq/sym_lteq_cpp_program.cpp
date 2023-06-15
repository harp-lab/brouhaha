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
void* _57623 = arg_buffer[1];
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

void* kont5736057460 = prim_car(lst);
void* lst57461 = prim_cdr(lst);
void* x5727057462 = apply_prim__u43(lst57461);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5736057460);
arg_buffer[2] = x5727057462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5736057460))[0]);
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
void* _57624 = arg_buffer[1];
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

void* kont5736257463 = prim_car(lst);
void* lst57464 = prim_cdr(lst);
void* x5727157465 = apply_prim__u45(lst57464);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5736257463);
arg_buffer[2] = x5727157465;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5736257463))[0]);
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
void* _57625 = arg_buffer[1];
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

void* kont5736457466 = prim_car(lst);
void* lst57467 = prim_cdr(lst);
void* x5727257468 = apply_prim__u42(lst57467);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5736457466);
arg_buffer[2] = x5727257468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5736457466))[0]);
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
void* _57626 = arg_buffer[1];
//reading env and args
void* kont57366 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5727357469 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57366);
arg_buffer[2] = x5727357469;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57366))[0]);
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
void* _57627 = arg_buffer[1];
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

void* kont5736757470 = prim_car(lst);
void* lst57471 = prim_cdr(lst);
void* x5727457472 = apply_prim__u47(lst57471);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5736757470);
arg_buffer[2] = x5727457472;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5736757470))[0]);
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
void* _57628 = arg_buffer[1];
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

void* kont5736957473 = prim_car(lst);
void* lst57474 = prim_cdr(lst);
void* x5727557475 = apply_prim__u61(lst57474);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5736957473);
arg_buffer[2] = x5727557475;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5736957473))[0]);
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
void* _57629 = arg_buffer[1];
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

void* kont5737157476 = prim_car(lst);
void* lst57477 = prim_cdr(lst);
void* x5727657478 = apply_prim__u62(lst57477);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5737157476);
arg_buffer[2] = x5727657478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5737157476))[0]);
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
void* _57630 = arg_buffer[1];
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

void* kont5737357479 = prim_car(lst);
void* lst57480 = prim_cdr(lst);
void* x5727757481 = apply_prim__u60(lst57480);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5737357479);
arg_buffer[2] = x5727757481;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5737357479))[0]);
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
void* _57631 = arg_buffer[1];
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

void* kont5737557482 = prim_car(lst);
void* lst57483 = prim_cdr(lst);
void* x5727857484 = apply_prim__u60_u61(lst57483);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5737557482);
arg_buffer[2] = x5727857484;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5737557482))[0]);
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
void* _57632 = arg_buffer[1];
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

void* kont5737757485 = prim_car(lst);
void* lst57486 = prim_cdr(lst);
void* x5727957487 = apply_prim__u62_u61(lst57486);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5737757485);
arg_buffer[2] = x5727957487;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5737757485))[0]);
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
void* _57633 = arg_buffer[1];
//reading env and args
void* kont57379 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5728057488 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57379);
arg_buffer[2] = x5728057488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57379))[0]);
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
void* _57634 = arg_buffer[1];
//reading env and args
void* kont57380 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5728157489 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57380);
arg_buffer[2] = x5728157489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57380))[0]);
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
void* _57635 = arg_buffer[1];
//reading env and args
void* kont57381 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5728257490 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57381);
arg_buffer[2] = x5728257490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57381))[0]);
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
void* _57636 = arg_buffer[1];
//reading env and args
void* kont57382 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5728357491 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57382);
arg_buffer[2] = x5728357491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57382))[0]);
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
void* _57637 = arg_buffer[1];
//reading env and args
void* kont57383 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5728457492 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57383);
arg_buffer[2] = x5728457492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57383))[0]);
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
void* _57638 = arg_buffer[1];
//reading env and args
void* kont57384 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5728557493 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57384);
arg_buffer[2] = x5728557493;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57384))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam57639_fptr() // lam57639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57640 = arg_buffer[1];
//reading env and args
void* a5728857497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5728657494 = (decode_clo(env57640))[3];
//not do dummy comment
void* kont57385 = (decode_clo(env57640))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env57640))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57385;
arg_buffer[3] = a5728657494;
arg_buffer[4] = a5728857497;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57639 = encode_clo(alloc_clo(lam57639_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57643 = arg_buffer[1];
//reading env and args
void* kont57385 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58285 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58285, "0", 10);
void* a5728657494 = encode_mpz(mpzvar58285);
mpz_t* mpzvar58286 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58286, "2", 10);
void* a5728757495 = encode_mpz(mpzvar58286);

//creating new closure instance
void** clo58288 = alloc_clo(lam57639_fptr, 3);

//setting env list
clo58288[1] = equal_u63;
clo58288[2] = kont57385;
clo58288[3] = a5728657494;
void* f5738657496 = encode_clo(clo58288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5738657496;
arg_buffer[3] = x;
arg_buffer[4] = a5728757495;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam57644_fptr() // lam57644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57645 = arg_buffer[1];
//reading env and args
void* a5729157501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5728957498 = (decode_clo(env57645))[3];
//not do dummy comment
void* kont57387 = (decode_clo(env57645))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env57645))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57387;
arg_buffer[3] = a5728957498;
arg_buffer[4] = a5729157501;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57644 = encode_clo(alloc_clo(lam57644_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57648 = arg_buffer[1];
//reading env and args
void* kont57387 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58289 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58289, "1", 10);
void* a5728957498 = encode_mpz(mpzvar58289);
mpz_t* mpzvar58290 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58290, "2", 10);
void* a5729057499 = encode_mpz(mpzvar58290);

//creating new closure instance
void** clo58292 = alloc_clo(lam57644_fptr, 3);

//setting env list
clo58292[1] = equal_u63;
clo58292[2] = kont57387;
clo58292[3] = a5728957498;
void* f5738857500 = encode_clo(clo58292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5738857500;
arg_buffer[3] = x;
arg_buffer[4] = a5729057499;
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
void* _57649 = arg_buffer[1];
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

void* kont5738957502 = prim_car(x);
void* x57503 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5738957502);
arg_buffer[2] = x57503;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5738957502))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam57652_fptr() // lam57652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57653 = arg_buffer[1];
//reading env and args
void* a5729757513 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env57653))[3];
//not do dummy comment
void* x = (decode_clo(env57653))[2];
//not do dummy comment
void* kont57391 = (decode_clo(env57653))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont57391;
arg_buffer[3] = x;
arg_buffer[4] = a5729757513;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57652 = encode_clo(alloc_clo(lam57652_fptr, 0));

void* lam57654_fptr() // lam57654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57655 = arg_buffer[1];
//reading env and args
void* a5729557510 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57655))[5];
//not do dummy comment
void* lst = (decode_clo(env57655))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env57655))[3];
//not do dummy comment
void* x = (decode_clo(env57655))[2];
//not do dummy comment
void* kont57391 = (decode_clo(env57655))[1];

//if-clause
bool if_guard58293 = is_true(a5729557510);
if(if_guard58293)
{
void* x5729657511 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57391);
arg_buffer[2] = x5729657511;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57391))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58295 = alloc_clo(lam57652_fptr, 3);

//setting env list
clo58295[1] = kont57391;
clo58295[2] = x;
clo58295[3] = member_u63;
void* f5739257512 = encode_clo(clo58295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5739257512;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57654 = encode_clo(alloc_clo(lam57654_fptr, 0));

void* lam57656_fptr() // lam57656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57657 = arg_buffer[1];
//reading env and args
void* a5729457508 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57657))[6];
//not do dummy comment
void* lst = (decode_clo(env57657))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env57657))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env57657))[3];
//not do dummy comment
void* x = (decode_clo(env57657))[2];
//not do dummy comment
void* kont57391 = (decode_clo(env57657))[1];

//creating new closure instance
void** clo58297 = alloc_clo(lam57654_fptr, 5);

//setting env list
clo58297[1] = kont57391;
clo58297[2] = x;
clo58297[3] = member_u63;
clo58297[4] = lst;
clo58297[5] = cdr;
void* f5739357509 = encode_clo(clo58297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5739357509;
arg_buffer[3] = a5729457508;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57656 = encode_clo(alloc_clo(lam57656_fptr, 0));

void* lam57658_fptr() // lam57658 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57659 = arg_buffer[1];
//reading env and args
void* a5729257505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57659))[7];
//not do dummy comment
void* lst = (decode_clo(env57659))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env57659))[5];
//not do dummy comment
void* car = (decode_clo(env57659))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env57659))[3];
//not do dummy comment
void* x = (decode_clo(env57659))[2];
//not do dummy comment
void* kont57391 = (decode_clo(env57659))[1];

//if-clause
bool if_guard58298 = is_true(a5729257505);
if(if_guard58298)
{
void* x5729357506 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57391);
arg_buffer[2] = x5729357506;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57391))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58300 = alloc_clo(lam57656_fptr, 6);

//setting env list
clo58300[1] = kont57391;
clo58300[2] = x;
clo58300[3] = member_u63;
clo58300[4] = equal_u63;
clo58300[5] = lst;
clo58300[6] = cdr;
void* f5739457507 = encode_clo(clo58300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5739457507;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57658 = encode_clo(alloc_clo(lam57658_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57660 = arg_buffer[1];
//reading env and args
void* kont57391 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58302 = alloc_clo(lam57658_fptr, 7);

//setting env list
clo58302[1] = kont57391;
clo58302[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo58302[3] = member_u63;
clo58302[4] = car;
clo58302[5] = equal_u63;
clo58302[6] = lst;
clo58302[7] = cdr;
void* f5739557504 = encode_clo(clo58302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5739557504;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam57661_fptr() // lam57661 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57662 = arg_buffer[1];
//reading env and args
void* a5730157521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57396 = (decode_clo(env57662))[4];
//not do dummy comment
void* fun = (decode_clo(env57662))[3];
//not do dummy comment
void* a5730057519 = (decode_clo(env57662))[2];
//not do dummy comment
void* foldl = (decode_clo(env57662))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont57396;
arg_buffer[3] = fun;
arg_buffer[4] = a5730057519;
arg_buffer[5] = a5730157521;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57661 = encode_clo(alloc_clo(lam57661_fptr, 0));

void* lam57663_fptr() // lam57663 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57664 = arg_buffer[1];
//reading env and args
void* a5730057519 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57664))[5];
//not do dummy comment
void* fun = (decode_clo(env57664))[4];
//not do dummy comment
void* foldl = (decode_clo(env57664))[3];
//not do dummy comment
void* kont57396 = (decode_clo(env57664))[2];
//not do dummy comment
void* cdr = (decode_clo(env57664))[1];

//creating new closure instance
void** clo58304 = alloc_clo(lam57661_fptr, 4);

//setting env list
clo58304[1] = foldl;
clo58304[2] = a5730057519;
clo58304[3] = fun;
clo58304[4] = kont57396;
void* f5739757520 = encode_clo(clo58304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5739757520;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57663 = encode_clo(alloc_clo(lam57663_fptr, 0));

void* lam57665_fptr() // lam57665 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57666 = arg_buffer[1];
//reading env and args
void* a5729957517 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57666))[6];
//not do dummy comment
void* fun = (decode_clo(env57666))[5];
//not do dummy comment
void* acc = (decode_clo(env57666))[4];
//not do dummy comment
void* foldl = (decode_clo(env57666))[3];
//not do dummy comment
void* kont57396 = (decode_clo(env57666))[2];
//not do dummy comment
void* cdr = (decode_clo(env57666))[1];

//creating new closure instance
void** clo58306 = alloc_clo(lam57663_fptr, 5);

//setting env list
clo58306[1] = cdr;
clo58306[2] = kont57396;
clo58306[3] = foldl;
clo58306[4] = fun;
clo58306[5] = lst;
void* f5739857518 = encode_clo(clo58306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5739857518;
arg_buffer[3] = a5729957517;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57665 = encode_clo(alloc_clo(lam57665_fptr, 0));

void* lam57667_fptr() // lam57667 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57668 = arg_buffer[1];
//reading env and args
void* a5729857515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57668))[7];
//not do dummy comment
void* fun = (decode_clo(env57668))[6];
//not do dummy comment
void* acc = (decode_clo(env57668))[5];
//not do dummy comment
void* car = (decode_clo(env57668))[4];
//not do dummy comment
void* foldl = (decode_clo(env57668))[3];
//not do dummy comment
void* kont57396 = (decode_clo(env57668))[2];
//not do dummy comment
void* cdr = (decode_clo(env57668))[1];

//if-clause
bool if_guard58307 = is_true(a5729857515);
if(if_guard58307)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57396);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57396))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58309 = alloc_clo(lam57665_fptr, 6);

//setting env list
clo58309[1] = cdr;
clo58309[2] = kont57396;
clo58309[3] = foldl;
clo58309[4] = acc;
clo58309[5] = fun;
clo58309[6] = lst;
void* f5739957516 = encode_clo(clo58309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5739957516;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57667 = encode_clo(alloc_clo(lam57667_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57669 = arg_buffer[1];
//reading env and args
void* kont57396 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58311 = alloc_clo(lam57667_fptr, 7);

//setting env list
clo58311[1] = cdr;
clo58311[2] = kont57396;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo58311[3] = foldl;
clo58311[4] = car;
clo58311[5] = acc;
clo58311[6] = fun;
clo58311[7] = lst;
void* f5740057514 = encode_clo(clo58311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5740057514;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam57670_fptr() // lam57670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57671 = arg_buffer[1];
//reading env and args
void* a5730557529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5730357525 = (decode_clo(env57671))[3];
//not do dummy comment
void* kont57401 = (decode_clo(env57671))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57671))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57401;
arg_buffer[3] = a5730357525;
arg_buffer[4] = a5730557529;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57670 = encode_clo(alloc_clo(lam57670_fptr, 0));

void* lam57672_fptr() // lam57672 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57673 = arg_buffer[1];
//reading env and args
void* a5730457527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5730357525 = (decode_clo(env57673))[5];
//not do dummy comment
void* kont57401 = (decode_clo(env57673))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57673))[3];
//not do dummy comment
void* lst2 = (decode_clo(env57673))[2];
//not do dummy comment
void* cons = (decode_clo(env57673))[1];

//creating new closure instance
void** clo58313 = alloc_clo(lam57670_fptr, 3);

//setting env list
clo58313[1] = reverse_u45helper;
clo58313[2] = kont57401;
clo58313[3] = a5730357525;
void* f5740257528 = encode_clo(clo58313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5740257528;
arg_buffer[3] = a5730457527;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57672 = encode_clo(alloc_clo(lam57672_fptr, 0));

void* lam57674_fptr() // lam57674 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57675 = arg_buffer[1];
//reading env and args
void* a5730357525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57675))[6];
//not do dummy comment
void* kont57401 = (decode_clo(env57675))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57675))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57675))[3];
//not do dummy comment
void* car = (decode_clo(env57675))[2];
//not do dummy comment
void* cons = (decode_clo(env57675))[1];

//creating new closure instance
void** clo58315 = alloc_clo(lam57672_fptr, 5);

//setting env list
clo58315[1] = cons;
clo58315[2] = lst2;
clo58315[3] = reverse_u45helper;
clo58315[4] = kont57401;
clo58315[5] = a5730357525;
void* f5740357526 = encode_clo(clo58315);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5740357526;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57674 = encode_clo(alloc_clo(lam57674_fptr, 0));

void* lam57676_fptr() // lam57676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57677 = arg_buffer[1];
//reading env and args
void* a5730257523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57677))[7];
//not do dummy comment
void* lst = (decode_clo(env57677))[6];
//not do dummy comment
void* kont57401 = (decode_clo(env57677))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57677))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57677))[3];
//not do dummy comment
void* car = (decode_clo(env57677))[2];
//not do dummy comment
void* cons = (decode_clo(env57677))[1];

//if-clause
bool if_guard58316 = is_true(a5730257523);
if(if_guard58316)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57401);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57401))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58318 = alloc_clo(lam57674_fptr, 6);

//setting env list
clo58318[1] = cons;
clo58318[2] = car;
clo58318[3] = lst2;
clo58318[4] = reverse_u45helper;
clo58318[5] = kont57401;
clo58318[6] = lst;
void* f5740457524 = encode_clo(clo58318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5740457524;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57676 = encode_clo(alloc_clo(lam57676_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57678 = arg_buffer[1];
//reading env and args
void* kont57401 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58320 = alloc_clo(lam57676_fptr, 7);

//setting env list
clo58320[1] = cons;
clo58320[2] = car;
clo58320[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo58320[4] = reverse_u45helper;
clo58320[5] = kont57401;
clo58320[6] = lst;
clo58320[7] = cdr;
void* f5740557522 = encode_clo(clo58320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5740557522;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam57679_fptr() // lam57679 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57680 = arg_buffer[1];
//reading env and args
void* a5730657531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57680))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57680))[2];
//not do dummy comment
void* kont57406 = (decode_clo(env57680))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57406;
arg_buffer[3] = lst;
arg_buffer[4] = a5730657531;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57679 = encode_clo(alloc_clo(lam57679_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57681 = arg_buffer[1];
//reading env and args
void* kont57406 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58322 = alloc_clo(lam57679_fptr, 3);

//setting env list
clo58322[1] = kont57406;
clo58322[2] = reverse_u45helper;
clo58322[3] = lst;
void* f5740757530 = encode_clo(clo58322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5740757530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam57682_fptr() // lam57682 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57683 = arg_buffer[1];
//reading env and args
void* x5730957536 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57408 = (decode_clo(env57683))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57408);
arg_buffer[2] = x5730957536;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57408))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57682 = encode_clo(alloc_clo(lam57682_fptr, 0));

void* lam57684_fptr() // lam57684 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57685 = arg_buffer[1];
//reading env and args
void* a5731457545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5731257541 = (decode_clo(env57685))[4];
//not do dummy comment
void* a5731057538 = (decode_clo(env57685))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57685))[2];
//not do dummy comment
void* kont57408 = (decode_clo(env57685))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57408;
arg_buffer[3] = a5731057538;
arg_buffer[4] = a5731257541;
arg_buffer[5] = a5731457545;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57684 = encode_clo(alloc_clo(lam57684_fptr, 0));

void* lam57686_fptr() // lam57686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57687 = arg_buffer[1];
//reading env and args
void* a5731357543 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5731257541 = (decode_clo(env57687))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env57687))[5];
//not do dummy comment
void* kont57408 = (decode_clo(env57687))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57687))[3];
//not do dummy comment
void* cons = (decode_clo(env57687))[2];
//not do dummy comment
void* a5731057538 = (decode_clo(env57687))[1];

//creating new closure instance
void** clo58324 = alloc_clo(lam57684_fptr, 4);

//setting env list
clo58324[1] = kont57408;
clo58324[2] = take_u45helper;
clo58324[3] = a5731057538;
clo58324[4] = a5731257541;
void* f5741057544 = encode_clo(clo58324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5741057544;
arg_buffer[3] = a5731357543;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57686 = encode_clo(alloc_clo(lam57686_fptr, 0));

void* lam57688_fptr() // lam57688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57689 = arg_buffer[1];
//reading env and args
void* a5731257541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57689))[7];
//not do dummy comment
void* car = (decode_clo(env57689))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env57689))[5];
//not do dummy comment
void* kont57408 = (decode_clo(env57689))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57689))[3];
//not do dummy comment
void* cons = (decode_clo(env57689))[2];
//not do dummy comment
void* a5731057538 = (decode_clo(env57689))[1];

//creating new closure instance
void** clo58326 = alloc_clo(lam57686_fptr, 6);

//setting env list
clo58326[1] = a5731057538;
clo58326[2] = cons;
clo58326[3] = lst2;
clo58326[4] = kont57408;
clo58326[5] = take_u45helper;
clo58326[6] = a5731257541;
void* f5741157542 = encode_clo(clo58326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5741157542;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57688 = encode_clo(alloc_clo(lam57688_fptr, 0));

void* lam57691_fptr() // lam57691 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57692 = arg_buffer[1];
//reading env and args
void* a5731057538 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57692))[8];
//not do dummy comment
void* cons = (decode_clo(env57692))[7];
//not do dummy comment
void* _u45 = (decode_clo(env57692))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env57692))[5];
//not do dummy comment
void* kont57408 = (decode_clo(env57692))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57692))[3];
//not do dummy comment
void* n = (decode_clo(env57692))[2];
//not do dummy comment
void* car = (decode_clo(env57692))[1];
mpz_t* mpzvar58327 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58327, "1", 10);
void* a5731157539 = encode_mpz(mpzvar58327);

//creating new closure instance
void** clo58329 = alloc_clo(lam57688_fptr, 7);

//setting env list
clo58329[1] = a5731057538;
clo58329[2] = cons;
clo58329[3] = lst2;
clo58329[4] = kont57408;
clo58329[5] = take_u45helper;
clo58329[6] = car;
clo58329[7] = lst;
void* f5741257540 = encode_clo(clo58329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5741257540;
arg_buffer[3] = n;
arg_buffer[4] = a5731157539;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57691 = encode_clo(alloc_clo(lam57691_fptr, 0));

void* lam57693_fptr() // lam57693 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57694 = arg_buffer[1];
//reading env and args
void* a5730857534 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57694))[10];
//not do dummy comment
void* lst = (decode_clo(env57694))[9];
//not do dummy comment
void* reverse = (decode_clo(env57694))[8];
//not do dummy comment
void* cons = (decode_clo(env57694))[7];
//not do dummy comment
void* _u45 = (decode_clo(env57694))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env57694))[5];
//not do dummy comment
void* kont57408 = (decode_clo(env57694))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57694))[3];
//not do dummy comment
void* n = (decode_clo(env57694))[2];
//not do dummy comment
void* car = (decode_clo(env57694))[1];

//if-clause
bool if_guard58330 = is_true(a5730857534);
if(if_guard58330)
{

//creating new closure instance
void** clo58332 = alloc_clo(lam57682_fptr, 1);

//setting env list
clo58332[1] = kont57408;
void* f5740957535 = encode_clo(clo58332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5740957535;
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
void** clo58334 = alloc_clo(lam57691_fptr, 8);

//setting env list
clo58334[1] = car;
clo58334[2] = n;
clo58334[3] = lst2;
clo58334[4] = kont57408;
clo58334[5] = take_u45helper;
clo58334[6] = _u45;
clo58334[7] = cons;
clo58334[8] = lst;
void* f5741357537 = encode_clo(clo58334);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5741357537;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57693 = encode_clo(alloc_clo(lam57693_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57696 = arg_buffer[1];
//reading env and args
void* kont57408 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar58335 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58335, "0", 10);
void* a5730757532 = encode_mpz(mpzvar58335);

//creating new closure instance
void** clo58337 = alloc_clo(lam57693_fptr, 10);

//setting env list
clo58337[1] = car;
clo58337[2] = n;
clo58337[3] = lst2;
clo58337[4] = kont57408;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo58337[5] = take_u45helper;
clo58337[6] = _u45;
clo58337[7] = cons;
clo58337[8] = reverse;
clo58337[9] = lst;
clo58337[10] = cdr;
void* f5741457533 = encode_clo(clo58337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5741457533;
arg_buffer[3] = n;
arg_buffer[4] = a5730757532;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam57697_fptr() // lam57697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57698 = arg_buffer[1];
//reading env and args
void* a5731557547 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57415 = (decode_clo(env57698))[4];
//not do dummy comment
void* lst = (decode_clo(env57698))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57698))[2];
//not do dummy comment
void* n = (decode_clo(env57698))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57415;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5731557547;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57697 = encode_clo(alloc_clo(lam57697_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57699 = arg_buffer[1];
//reading env and args
void* kont57415 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58339 = alloc_clo(lam57697_fptr, 4);

//setting env list
clo58339[1] = n;
clo58339[2] = take_u45helper;
clo58339[3] = lst;
clo58339[4] = kont57415;
void* f5741657546 = encode_clo(clo58339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5741657546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam57701_fptr() // lam57701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57702 = arg_buffer[1];
//reading env and args
void* a5732057555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57417 = (decode_clo(env57702))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57702))[2];
//not do dummy comment
void* a5731857551 = (decode_clo(env57702))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont57417;
arg_buffer[3] = a5731857551;
arg_buffer[4] = a5732057555;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
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
void* a5731957553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env57704))[4];
//not do dummy comment
void* a5731857551 = (decode_clo(env57704))[3];
//not do dummy comment
void* kont57417 = (decode_clo(env57704))[2];
//not do dummy comment
void* length = (decode_clo(env57704))[1];

//creating new closure instance
void** clo58341 = alloc_clo(lam57701_fptr, 3);

//setting env list
clo58341[1] = a5731857551;
clo58341[2] = _u43;
clo58341[3] = kont57417;
void* f5741857554 = encode_clo(clo58341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5741857554;
arg_buffer[3] = a5731957553;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57703 = encode_clo(alloc_clo(lam57703_fptr, 0));

void* lam57706_fptr() // lam57706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57707 = arg_buffer[1];
//reading env and args
void* a5731657549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57707))[5];
//not do dummy comment
void* lst = (decode_clo(env57707))[4];
//not do dummy comment
void* _u43 = (decode_clo(env57707))[3];
//not do dummy comment
void* kont57417 = (decode_clo(env57707))[2];
//not do dummy comment
void* length = (decode_clo(env57707))[1];

//if-clause
bool if_guard58342 = is_true(a5731657549);
if(if_guard58342)
{
mpz_t* mpzvar58343 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58343, "0", 10);
void* x5731757550 = encode_mpz(mpzvar58343);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57417);
arg_buffer[2] = x5731757550;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57417))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar58344 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58344, "1", 10);
void* a5731857551 = encode_mpz(mpzvar58344);

//creating new closure instance
void** clo58346 = alloc_clo(lam57703_fptr, 4);

//setting env list
clo58346[1] = length;
clo58346[2] = kont57417;
clo58346[3] = a5731857551;
clo58346[4] = _u43;
void* f5741957552 = encode_clo(clo58346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5741957552;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57706 = encode_clo(alloc_clo(lam57706_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57708 = arg_buffer[1];
//reading env and args
void* kont57417 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58348 = alloc_clo(lam57706_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo58348[1] = length;
clo58348[2] = kont57417;
clo58348[3] = _u43;
clo58348[4] = lst;
clo58348[5] = cdr;
void* f5742057548 = encode_clo(clo58348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5742057548;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam57709_fptr() // lam57709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57710 = arg_buffer[1];
//reading env and args
void* x5732257559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57421 = (decode_clo(env57710))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57421);
arg_buffer[2] = x5732257559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57421))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57709 = encode_clo(alloc_clo(lam57709_fptr, 0));

void* lam57711_fptr() // lam57711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57712 = arg_buffer[1];
//reading env and args
void* a5732657567 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5732457563 = (decode_clo(env57712))[3];
//not do dummy comment
void* kont57421 = (decode_clo(env57712))[2];
//not do dummy comment
void* cons = (decode_clo(env57712))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57421;
arg_buffer[3] = a5732457563;
arg_buffer[4] = a5732657567;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57711 = encode_clo(alloc_clo(lam57711_fptr, 0));

void* lam57713_fptr() // lam57713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57714 = arg_buffer[1];
//reading env and args
void* a5732557565 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env57714))[5];
//not do dummy comment
void* a5732457563 = (decode_clo(env57714))[4];
//not do dummy comment
void* kont57421 = (decode_clo(env57714))[3];
//not do dummy comment
void* proc = (decode_clo(env57714))[2];
//not do dummy comment
void* cons = (decode_clo(env57714))[1];

//creating new closure instance
void** clo58350 = alloc_clo(lam57711_fptr, 3);

//setting env list
clo58350[1] = cons;
clo58350[2] = kont57421;
clo58350[3] = a5732457563;
void* f5742357566 = encode_clo(clo58350);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5742357566;
arg_buffer[3] = proc;
arg_buffer[4] = a5732557565;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a5732457563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57716))[6];
//not do dummy comment
void* lst = (decode_clo(env57716))[5];
//not do dummy comment
void* map = (decode_clo(env57716))[4];
//not do dummy comment
void* kont57421 = (decode_clo(env57716))[3];
//not do dummy comment
void* proc = (decode_clo(env57716))[2];
//not do dummy comment
void* cons = (decode_clo(env57716))[1];

//creating new closure instance
void** clo58352 = alloc_clo(lam57713_fptr, 5);

//setting env list
clo58352[1] = cons;
clo58352[2] = proc;
clo58352[3] = kont57421;
clo58352[4] = a5732457563;
clo58352[5] = map;
void* f5742457564 = encode_clo(clo58352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5742457564;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a5732357561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57718))[6];
//not do dummy comment
void* lst = (decode_clo(env57718))[5];
//not do dummy comment
void* map = (decode_clo(env57718))[4];
//not do dummy comment
void* kont57421 = (decode_clo(env57718))[3];
//not do dummy comment
void* proc = (decode_clo(env57718))[2];
//not do dummy comment
void* cons = (decode_clo(env57718))[1];

//creating new closure instance
void** clo58354 = alloc_clo(lam57715_fptr, 6);

//setting env list
clo58354[1] = cons;
clo58354[2] = proc;
clo58354[3] = kont57421;
clo58354[4] = map;
clo58354[5] = lst;
clo58354[6] = cdr;
void* f5742557562 = encode_clo(clo58354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5742557562;
arg_buffer[3] = a5732357561;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a5732157557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57720))[8];
//not do dummy comment
void* map = (decode_clo(env57720))[7];
//not do dummy comment
void* kont57421 = (decode_clo(env57720))[6];
//not do dummy comment
void* proc = (decode_clo(env57720))[5];
//not do dummy comment
void* car = (decode_clo(env57720))[4];
//not do dummy comment
void* cons = (decode_clo(env57720))[3];
//not do dummy comment
void* list = (decode_clo(env57720))[2];
//not do dummy comment
void* cdr = (decode_clo(env57720))[1];

//if-clause
bool if_guard58355 = is_true(a5732157557);
if(if_guard58355)
{

//creating new closure instance
void** clo58357 = alloc_clo(lam57709_fptr, 1);

//setting env list
clo58357[1] = kont57421;
void* f5742257558 = encode_clo(clo58357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5742257558;
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
void** clo58359 = alloc_clo(lam57717_fptr, 6);

//setting env list
clo58359[1] = cons;
clo58359[2] = proc;
clo58359[3] = kont57421;
clo58359[4] = map;
clo58359[5] = lst;
clo58359[6] = cdr;
void* f5742657560 = encode_clo(clo58359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5742657560;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57719 = encode_clo(alloc_clo(lam57719_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57721 = arg_buffer[1];
//reading env and args
void* kont57421 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58361 = alloc_clo(lam57719_fptr, 8);

//setting env list
clo58361[1] = cdr;
clo58361[2] = list;
clo58361[3] = cons;
clo58361[4] = car;
clo58361[5] = proc;
clo58361[6] = kont57421;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo58361[7] = map;
clo58361[8] = lst;
void* f5742757556 = encode_clo(clo58361);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5742757556;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam57722_fptr() // lam57722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57723 = arg_buffer[1];
//reading env and args
void* x5732857571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57428 = (decode_clo(env57723))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57428);
arg_buffer[2] = x5732857571;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57428))[0]);
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
void* a5733357581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57428 = (decode_clo(env57725))[3];
//not do dummy comment
void* a5733157577 = (decode_clo(env57725))[2];
//not do dummy comment
void* cons = (decode_clo(env57725))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57428;
arg_buffer[3] = a5733157577;
arg_buffer[4] = a5733357581;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57724 = encode_clo(alloc_clo(lam57724_fptr, 0));

void* lam57726_fptr() // lam57726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57727 = arg_buffer[1];
//reading env and args
void* a5733257579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57428 = (decode_clo(env57727))[5];
//not do dummy comment
void* a5733157577 = (decode_clo(env57727))[4];
//not do dummy comment
void* op = (decode_clo(env57727))[3];
//not do dummy comment
void* filter = (decode_clo(env57727))[2];
//not do dummy comment
void* cons = (decode_clo(env57727))[1];

//creating new closure instance
void** clo58363 = alloc_clo(lam57724_fptr, 3);

//setting env list
clo58363[1] = cons;
clo58363[2] = a5733157577;
clo58363[3] = kont57428;
void* f5743057580 = encode_clo(clo58363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5743057580;
arg_buffer[3] = op;
arg_buffer[4] = a5733257579;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57726 = encode_clo(alloc_clo(lam57726_fptr, 0));

void* lam57728_fptr() // lam57728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57729 = arg_buffer[1];
//reading env and args
void* a5733157577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57729))[6];
//not do dummy comment
void* op = (decode_clo(env57729))[5];
//not do dummy comment
void* filter = (decode_clo(env57729))[4];
//not do dummy comment
void* cons = (decode_clo(env57729))[3];
//not do dummy comment
void* kont57428 = (decode_clo(env57729))[2];
//not do dummy comment
void* cdr = (decode_clo(env57729))[1];

//creating new closure instance
void** clo58365 = alloc_clo(lam57726_fptr, 5);

//setting env list
clo58365[1] = cons;
clo58365[2] = filter;
clo58365[3] = op;
clo58365[4] = a5733157577;
clo58365[5] = kont57428;
void* f5743157578 = encode_clo(clo58365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5743157578;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57728 = encode_clo(alloc_clo(lam57728_fptr, 0));

void* lam57730_fptr() // lam57730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57731 = arg_buffer[1];
//reading env and args
void* a5733457583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57428 = (decode_clo(env57731))[3];
//not do dummy comment
void* op = (decode_clo(env57731))[2];
//not do dummy comment
void* filter = (decode_clo(env57731))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont57428;
arg_buffer[3] = op;
arg_buffer[4] = a5733457583;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57730 = encode_clo(alloc_clo(lam57730_fptr, 0));

void* lam57732_fptr() // lam57732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57733 = arg_buffer[1];
//reading env and args
void* a5733057575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57733))[7];
//not do dummy comment
void* op = (decode_clo(env57733))[6];
//not do dummy comment
void* cons = (decode_clo(env57733))[5];
//not do dummy comment
void* kont57428 = (decode_clo(env57733))[4];
//not do dummy comment
void* cdr = (decode_clo(env57733))[3];
//not do dummy comment
void* filter = (decode_clo(env57733))[2];
//not do dummy comment
void* car = (decode_clo(env57733))[1];

//if-clause
bool if_guard58366 = is_true(a5733057575);
if(if_guard58366)
{

//creating new closure instance
void** clo58368 = alloc_clo(lam57728_fptr, 6);

//setting env list
clo58368[1] = cdr;
clo58368[2] = kont57428;
clo58368[3] = cons;
clo58368[4] = filter;
clo58368[5] = op;
clo58368[6] = lst;
void* f5743257576 = encode_clo(clo58368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5743257576;
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
void** clo58370 = alloc_clo(lam57730_fptr, 3);

//setting env list
clo58370[1] = filter;
clo58370[2] = op;
clo58370[3] = kont57428;
void* f5743357582 = encode_clo(clo58370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5743357582;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57732 = encode_clo(alloc_clo(lam57732_fptr, 0));

void* lam57734_fptr() // lam57734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57735 = arg_buffer[1];
//reading env and args
void* a5732957573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57735))[7];
//not do dummy comment
void* op = (decode_clo(env57735))[6];
//not do dummy comment
void* cons = (decode_clo(env57735))[5];
//not do dummy comment
void* kont57428 = (decode_clo(env57735))[4];
//not do dummy comment
void* cdr = (decode_clo(env57735))[3];
//not do dummy comment
void* filter = (decode_clo(env57735))[2];
//not do dummy comment
void* car = (decode_clo(env57735))[1];

//creating new closure instance
void** clo58372 = alloc_clo(lam57732_fptr, 7);

//setting env list
clo58372[1] = car;
clo58372[2] = filter;
clo58372[3] = cdr;
clo58372[4] = kont57428;
clo58372[5] = cons;
clo58372[6] = op;
clo58372[7] = lst;
void* f5743457574 = encode_clo(clo58372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5743457574;
arg_buffer[3] = a5732957573;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57734 = encode_clo(alloc_clo(lam57734_fptr, 0));

void* lam57736_fptr() // lam57736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57737 = arg_buffer[1];
//reading env and args
void* a5732757569 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57737))[8];
//not do dummy comment
void* op = (decode_clo(env57737))[7];
//not do dummy comment
void* cons = (decode_clo(env57737))[6];
//not do dummy comment
void* list = (decode_clo(env57737))[5];
//not do dummy comment
void* kont57428 = (decode_clo(env57737))[4];
//not do dummy comment
void* cdr = (decode_clo(env57737))[3];
//not do dummy comment
void* filter = (decode_clo(env57737))[2];
//not do dummy comment
void* car = (decode_clo(env57737))[1];

//if-clause
bool if_guard58373 = is_true(a5732757569);
if(if_guard58373)
{

//creating new closure instance
void** clo58375 = alloc_clo(lam57722_fptr, 1);

//setting env list
clo58375[1] = kont57428;
void* f5742957570 = encode_clo(clo58375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5742957570;
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
void** clo58377 = alloc_clo(lam57734_fptr, 7);

//setting env list
clo58377[1] = car;
clo58377[2] = filter;
clo58377[3] = cdr;
clo58377[4] = kont57428;
clo58377[5] = cons;
clo58377[6] = op;
clo58377[7] = lst;
void* f5743557572 = encode_clo(clo58377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5743557572;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57736 = encode_clo(alloc_clo(lam57736_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57738 = arg_buffer[1];
//reading env and args
void* kont57428 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58379 = alloc_clo(lam57736_fptr, 8);

//setting env list
clo58379[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo58379[2] = filter;
clo58379[3] = cdr;
clo58379[4] = kont57428;
clo58379[5] = list;
clo58379[6] = cons;
clo58379[7] = op;
clo58379[8] = lst;
void* f5743657568 = encode_clo(clo58379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5743657568;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam57739_fptr() // lam57739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57740 = arg_buffer[1];
//reading env and args
void* a5733957591 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5733757588 = (decode_clo(env57740))[3];
//not do dummy comment
void* drop = (decode_clo(env57740))[2];
//not do dummy comment
void* kont57437 = (decode_clo(env57740))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont57437;
arg_buffer[3] = a5733757588;
arg_buffer[4] = a5733957591;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57739 = encode_clo(alloc_clo(lam57739_fptr, 0));

void* lam57742_fptr() // lam57742 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57743 = arg_buffer[1];
//reading env and args
void* a5733757588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env57743))[4];
//not do dummy comment
void* kont57437 = (decode_clo(env57743))[3];
//not do dummy comment
void* n = (decode_clo(env57743))[2];
//not do dummy comment
void* _u45 = (decode_clo(env57743))[1];
mpz_t* mpzvar58380 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58380, "1", 10);
void* a5733857589 = encode_mpz(mpzvar58380);

//creating new closure instance
void** clo58382 = alloc_clo(lam57739_fptr, 3);

//setting env list
clo58382[1] = kont57437;
clo58382[2] = drop;
clo58382[3] = a5733757588;
void* f5743857590 = encode_clo(clo58382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5743857590;
arg_buffer[3] = n;
arg_buffer[4] = a5733857589;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a5733657586 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57745))[6];
//not do dummy comment
void* kont57437 = (decode_clo(env57745))[5];
//not do dummy comment
void* n = (decode_clo(env57745))[4];
//not do dummy comment
void* _u45 = (decode_clo(env57745))[3];
//not do dummy comment
void* lst = (decode_clo(env57745))[2];
//not do dummy comment
void* drop = (decode_clo(env57745))[1];

//if-clause
bool if_guard58383 = is_true(a5733657586);
if(if_guard58383)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57437);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57437))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58385 = alloc_clo(lam57742_fptr, 4);

//setting env list
clo58385[1] = _u45;
clo58385[2] = n;
clo58385[3] = kont57437;
clo58385[4] = drop;
void* f5743957587 = encode_clo(clo58385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5743957587;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57744 = encode_clo(alloc_clo(lam57744_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57747 = arg_buffer[1];
//reading env and args
void* kont57437 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar58386 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58386, "0", 10);
void* a5733557584 = encode_mpz(mpzvar58386);

//creating new closure instance
void** clo58388 = alloc_clo(lam57744_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo58388[1] = drop;
clo58388[2] = lst;
clo58388[3] = _u45;
clo58388[4] = n;
clo58388[5] = kont57437;
clo58388[6] = cdr;
void* f5744057585 = encode_clo(clo58388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5744057585;
arg_buffer[3] = n;
arg_buffer[4] = a5733557584;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam57748_fptr() // lam57748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57749 = arg_buffer[1];
//reading env and args
void* a5734357599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5734157595 = (decode_clo(env57749))[3];
//not do dummy comment
void* proc = (decode_clo(env57749))[2];
//not do dummy comment
void* kont57441 = (decode_clo(env57749))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont57441;
arg_buffer[3] = a5734157595;
arg_buffer[4] = a5734357599;
arg_buffer[0] = reinterpret_cast<void*>(4);
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
void* a5734257597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env57751))[5];
//not do dummy comment
void* a5734157595 = (decode_clo(env57751))[4];
//not do dummy comment
void* kont57441 = (decode_clo(env57751))[3];
//not do dummy comment
void* proc = (decode_clo(env57751))[2];
//not do dummy comment
void* acc = (decode_clo(env57751))[1];

//creating new closure instance
void** clo58390 = alloc_clo(lam57748_fptr, 3);

//setting env list
clo58390[1] = kont57441;
clo58390[2] = proc;
clo58390[3] = a5734157595;
void* f5744257598 = encode_clo(clo58390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5744257598;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5734257597;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57750 = encode_clo(alloc_clo(lam57750_fptr, 0));

void* lam57752_fptr() // lam57752 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57753 = arg_buffer[1];
//reading env and args
void* a5734157595 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57753))[6];
//not do dummy comment
void* kont57441 = (decode_clo(env57753))[5];
//not do dummy comment
void* foldr = (decode_clo(env57753))[4];
//not do dummy comment
void* lst = (decode_clo(env57753))[3];
//not do dummy comment
void* proc = (decode_clo(env57753))[2];
//not do dummy comment
void* acc = (decode_clo(env57753))[1];

//creating new closure instance
void** clo58392 = alloc_clo(lam57750_fptr, 5);

//setting env list
clo58392[1] = acc;
clo58392[2] = proc;
clo58392[3] = kont57441;
clo58392[4] = a5734157595;
clo58392[5] = foldr;
void* f5744357596 = encode_clo(clo58392);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5744357596;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57752 = encode_clo(alloc_clo(lam57752_fptr, 0));

void* lam57754_fptr() // lam57754 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57755 = arg_buffer[1];
//reading env and args
void* a5734057593 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57755))[7];
//not do dummy comment
void* foldr = (decode_clo(env57755))[6];
//not do dummy comment
void* lst = (decode_clo(env57755))[5];
//not do dummy comment
void* proc = (decode_clo(env57755))[4];
//not do dummy comment
void* acc = (decode_clo(env57755))[3];
//not do dummy comment
void* kont57441 = (decode_clo(env57755))[2];
//not do dummy comment
void* car = (decode_clo(env57755))[1];

//if-clause
bool if_guard58393 = is_true(a5734057593);
if(if_guard58393)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57441);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57441))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58395 = alloc_clo(lam57752_fptr, 6);

//setting env list
clo58395[1] = acc;
clo58395[2] = proc;
clo58395[3] = lst;
clo58395[4] = foldr;
clo58395[5] = kont57441;
clo58395[6] = cdr;
void* f5744457594 = encode_clo(clo58395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5744457594;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57754 = encode_clo(alloc_clo(lam57754_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57756 = arg_buffer[1];
//reading env and args
void* kont57441 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58397 = alloc_clo(lam57754_fptr, 7);

//setting env list
clo58397[1] = car;
clo58397[2] = kont57441;
clo58397[3] = acc;
clo58397[4] = proc;
clo58397[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo58397[6] = foldr;
clo58397[7] = cdr;
void* f5744557592 = encode_clo(clo58397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5744557592;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam57757_fptr() // lam57757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57758 = arg_buffer[1];
//reading env and args
void* a5734757607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57446 = (decode_clo(env57758))[3];
//not do dummy comment
void* cons = (decode_clo(env57758))[2];
//not do dummy comment
void* a5734557603 = (decode_clo(env57758))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57446;
arg_buffer[3] = a5734557603;
arg_buffer[4] = a5734757607;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a5734657605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57446 = (decode_clo(env57760))[5];
//not do dummy comment
void* append = (decode_clo(env57760))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57760))[3];
//not do dummy comment
void* cons = (decode_clo(env57760))[2];
//not do dummy comment
void* a5734557603 = (decode_clo(env57760))[1];

//creating new closure instance
void** clo58399 = alloc_clo(lam57757_fptr, 3);

//setting env list
clo58399[1] = a5734557603;
clo58399[2] = cons;
clo58399[3] = kont57446;
void* f5744757606 = encode_clo(clo58399);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5744757606;
arg_buffer[3] = a5734657605;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a5734557603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57762))[6];
//not do dummy comment
void* kont57446 = (decode_clo(env57762))[5];
//not do dummy comment
void* append = (decode_clo(env57762))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57762))[3];
//not do dummy comment
void* lst1 = (decode_clo(env57762))[2];
//not do dummy comment
void* cons = (decode_clo(env57762))[1];

//creating new closure instance
void** clo58401 = alloc_clo(lam57759_fptr, 5);

//setting env list
clo58401[1] = a5734557603;
clo58401[2] = cons;
clo58401[3] = lst2;
clo58401[4] = append;
clo58401[5] = kont57446;
void* f5744857604 = encode_clo(clo58401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5744857604;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a5734457601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57764))[7];
//not do dummy comment
void* kont57446 = (decode_clo(env57764))[6];
//not do dummy comment
void* append = (decode_clo(env57764))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57764))[4];
//not do dummy comment
void* cons = (decode_clo(env57764))[3];
//not do dummy comment
void* lst1 = (decode_clo(env57764))[2];
//not do dummy comment
void* car = (decode_clo(env57764))[1];

//if-clause
bool if_guard58402 = is_true(a5734457601);
if(if_guard58402)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57446);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57446))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58404 = alloc_clo(lam57761_fptr, 6);

//setting env list
clo58404[1] = cons;
clo58404[2] = lst1;
clo58404[3] = lst2;
clo58404[4] = append;
clo58404[5] = kont57446;
clo58404[6] = cdr;
void* f5744957602 = encode_clo(clo58404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5744957602;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57763 = encode_clo(alloc_clo(lam57763_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57765 = arg_buffer[1];
//reading env and args
void* kont57446 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58406 = alloc_clo(lam57763_fptr, 7);

//setting env list
clo58406[1] = car;
clo58406[2] = lst1;
clo58406[3] = cons;
clo58406[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo58406[5] = append;
clo58406[6] = kont57446;
clo58406[7] = cdr;
void* f5745057600 = encode_clo(clo58406);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5745057600;
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
void* _57766 = arg_buffer[1];
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

void* kont5745157608 = prim_car(lst);
void* lst57609 = prim_cdr(lst);
void* x5734857610 = apply_prim_hash(lst57609);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5745157608);
arg_buffer[2] = x5734857610;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5745157608))[0]);
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
void* _57767 = arg_buffer[1];
//reading env and args
void* kont57453 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5734957611 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57453);
arg_buffer[2] = x5734957611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57453))[0]);
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
void* _57768 = arg_buffer[1];
//reading env and args
void* kont57454 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5735057612 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57454);
arg_buffer[2] = x5735057612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57454))[0]);
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
void* _57769 = arg_buffer[1];
//reading env and args
void* kont57455 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5735157613 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57455);
arg_buffer[2] = x5735157613;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57455))[0]);
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
void* _57770 = arg_buffer[1];
//reading env and args
void* kont57456 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5735257614 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57456);
arg_buffer[2] = x5735257614;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57456))[0]);
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
void* _57777 = arg_buffer[1];
//reading env and args
void* kont57457 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar58407 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58407, "1", 10);
void* a5735357615 = encode_mpz(mpzvar58407);
mpz_t* mpzvar58408 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58408, "2", 10);
void* a5735457616 = encode_mpz(mpzvar58408);
mpz_t* mpzvar58409 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58409, "3", 10);
void* a5735557617 = encode_mpz(mpzvar58409);
mpz_t* mpzvar58410 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58410, "4", 10);
void* a5735657618 = encode_mpz(mpzvar58410);
mpz_t* mpzvar58411 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58411, "5", 10);
void* a5735757619 = encode_mpz(mpzvar58411);
mpz_t* mpzvar58412 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58412, "100", 10);
void* a5735857620 = encode_mpz(mpzvar58412);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60_u61);
arg_buffer[2] = kont57457;
arg_buffer[3] = a5735357615;
arg_buffer[4] = a5735457616;
arg_buffer[5] = a5735557617;
arg_buffer[6] = a5735657618;
arg_buffer[7] = a5735757619;
arg_buffer[8] = a5735857620;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam57778_fptr() // lam57778 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57779 = arg_buffer[1];
//reading env and args
void* x5735957622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57458 = (decode_clo(env57779))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57458);
arg_buffer[2] = x5735957622;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57458))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57778 = encode_clo(alloc_clo(lam57778_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57780 = arg_buffer[1];
//reading env and args
void* kont57458 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo58414 = alloc_clo(lam57778_fptr, 1);

//setting env list
clo58414[1] = kont57458;
void* f5745957621 = encode_clo(clo58414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5745957621;
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

