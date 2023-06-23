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
void* _116610 = arg_buffer[1];
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

void* kont116347116447 = prim_car(lst);
void* lst116448 = prim_cdr(lst);
void* x116257116449 = apply_prim__u43(lst116448);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116347116447);
arg_buffer[2] = x116257116449;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116347116447))[0]);
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
void* _116611 = arg_buffer[1];
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

void* kont116349116450 = prim_car(lst);
void* lst116451 = prim_cdr(lst);
void* x116258116452 = apply_prim__u45(lst116451);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116349116450);
arg_buffer[2] = x116258116452;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116349116450))[0]);
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
void* _116612 = arg_buffer[1];
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

void* kont116351116453 = prim_car(lst);
void* lst116454 = prim_cdr(lst);
void* x116259116455 = apply_prim__u42(lst116454);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116351116453);
arg_buffer[2] = x116259116455;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116351116453))[0]);
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
void* _116613 = arg_buffer[1];
//reading env and args
void* kont116353 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x116260116456 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116353);
arg_buffer[2] = x116260116456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116353))[0]);
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
void* _116614 = arg_buffer[1];
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

void* kont116354116457 = prim_car(lst);
void* lst116458 = prim_cdr(lst);
void* x116261116459 = apply_prim__u47(lst116458);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116354116457);
arg_buffer[2] = x116261116459;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116354116457))[0]);
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
void* _116615 = arg_buffer[1];
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

void* kont116356116460 = prim_car(lst);
void* lst116461 = prim_cdr(lst);
void* x116262116462 = apply_prim__u61(lst116461);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116356116460);
arg_buffer[2] = x116262116462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116356116460))[0]);
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
void* _116616 = arg_buffer[1];
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

void* kont116358116463 = prim_car(lst);
void* lst116464 = prim_cdr(lst);
void* x116263116465 = apply_prim__u62(lst116464);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116358116463);
arg_buffer[2] = x116263116465;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116358116463))[0]);
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
void* _116617 = arg_buffer[1];
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

void* kont116360116466 = prim_car(lst);
void* lst116467 = prim_cdr(lst);
void* x116264116468 = apply_prim__u60(lst116467);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116360116466);
arg_buffer[2] = x116264116468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116360116466))[0]);
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
void* _116618 = arg_buffer[1];
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

void* kont116362116469 = prim_car(lst);
void* lst116470 = prim_cdr(lst);
void* x116265116471 = apply_prim__u60_u61(lst116470);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116362116469);
arg_buffer[2] = x116265116471;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116362116469))[0]);
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
void* _116619 = arg_buffer[1];
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

void* kont116364116472 = prim_car(lst);
void* lst116473 = prim_cdr(lst);
void* x116266116474 = apply_prim__u62_u61(lst116473);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116364116472);
arg_buffer[2] = x116266116474;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116364116472))[0]);
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
void* _116620 = arg_buffer[1];
//reading env and args
void* kont116366 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x116267116475 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116366);
arg_buffer[2] = x116267116475;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116366))[0]);
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
void* _116621 = arg_buffer[1];
//reading env and args
void* kont116367 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x116268116476 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116367);
arg_buffer[2] = x116268116476;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116367))[0]);
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
void* _116622 = arg_buffer[1];
//reading env and args
void* kont116368 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x116269116477 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116368);
arg_buffer[2] = x116269116477;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116368))[0]);
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
void* _116623 = arg_buffer[1];
//reading env and args
void* kont116369 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x116270116478 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116369);
arg_buffer[2] = x116270116478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116369))[0]);
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
void* _116624 = arg_buffer[1];
//reading env and args
void* kont116370 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x116271116479 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116370);
arg_buffer[2] = x116271116479;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116370))[0]);
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
void* _116625 = arg_buffer[1];
//reading env and args
void* kont116371 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x116272116480 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116371);
arg_buffer[2] = x116272116480;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116371))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam116626_fptr() // lam116626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116627 = arg_buffer[1];
//reading env and args
void* a116275116484 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env116627))[3];
//not do dummy comment
void* a116273116481 = (decode_clo(env116627))[2];
//not do dummy comment
void* kont116372 = (decode_clo(env116627))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont116372;
arg_buffer[3] = a116273116481;
arg_buffer[4] = a116275116484;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116626 = encode_clo(alloc_clo(lam116626_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116630 = arg_buffer[1];
//reading env and args
void* kont116372 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar117272 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117272, "0", 10);
void* a116273116481 = encode_mpz(mpzvar117272);
mpz_t* mpzvar117273 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117273, "2", 10);
void* a116274116482 = encode_mpz(mpzvar117273);

//creating new closure instance
void** clo117275 = alloc_clo(lam116626_fptr, 3);

//setting env list
clo117275[1] = kont116372;
clo117275[2] = a116273116481;
clo117275[3] = equal_u63;
void* f116373116483 = encode_clo(clo117275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f116373116483;
arg_buffer[3] = x;
arg_buffer[4] = a116274116482;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam116631_fptr() // lam116631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116632 = arg_buffer[1];
//reading env and args
void* a116278116488 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env116632))[3];
//not do dummy comment
void* a116276116485 = (decode_clo(env116632))[2];
//not do dummy comment
void* kont116374 = (decode_clo(env116632))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont116374;
arg_buffer[3] = a116276116485;
arg_buffer[4] = a116278116488;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116631 = encode_clo(alloc_clo(lam116631_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116635 = arg_buffer[1];
//reading env and args
void* kont116374 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar117276 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117276, "1", 10);
void* a116276116485 = encode_mpz(mpzvar117276);
mpz_t* mpzvar117277 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117277, "2", 10);
void* a116277116486 = encode_mpz(mpzvar117277);

//creating new closure instance
void** clo117279 = alloc_clo(lam116631_fptr, 3);

//setting env list
clo117279[1] = kont116374;
clo117279[2] = a116276116485;
clo117279[3] = equal_u63;
void* f116375116487 = encode_clo(clo117279);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f116375116487;
arg_buffer[3] = x;
arg_buffer[4] = a116277116486;
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
void* _116636 = arg_buffer[1];
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

void* kont116376116489 = prim_car(x);
void* x116490 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116376116489);
arg_buffer[2] = x116490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116376116489))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam116639_fptr() // lam116639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116640 = arg_buffer[1];
//reading env and args
void* a116284116500 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116378 = (decode_clo(env116640))[3];
//not do dummy comment
void* x = (decode_clo(env116640))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env116640))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont116378;
arg_buffer[3] = x;
arg_buffer[4] = a116284116500;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116639 = encode_clo(alloc_clo(lam116639_fptr, 0));

void* lam116641_fptr() // lam116641 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116642 = arg_buffer[1];
//reading env and args
void* a116282116497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116642))[5];
//not do dummy comment
void* kont116378 = (decode_clo(env116642))[4];
//not do dummy comment
void* lst = (decode_clo(env116642))[3];
//not do dummy comment
void* x = (decode_clo(env116642))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env116642))[1];

//if-clause
bool if_guard117280 = is_true(a116282116497);
if(if_guard117280)
{
void* x116283116498 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116378);
arg_buffer[2] = x116283116498;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116378))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117282 = alloc_clo(lam116639_fptr, 3);

//setting env list
clo117282[1] = member_u63;
clo117282[2] = x;
clo117282[3] = kont116378;
void* f116379116499 = encode_clo(clo117282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116379116499;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116641 = encode_clo(alloc_clo(lam116641_fptr, 0));

void* lam116643_fptr() // lam116643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116644 = arg_buffer[1];
//reading env and args
void* a116281116495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116644))[6];
//not do dummy comment
void* kont116378 = (decode_clo(env116644))[5];
//not do dummy comment
void* lst = (decode_clo(env116644))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env116644))[3];
//not do dummy comment
void* x = (decode_clo(env116644))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env116644))[1];

//creating new closure instance
void** clo117284 = alloc_clo(lam116641_fptr, 5);

//setting env list
clo117284[1] = member_u63;
clo117284[2] = x;
clo117284[3] = lst;
clo117284[4] = kont116378;
clo117284[5] = cdr;
void* f116380116496 = encode_clo(clo117284);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f116380116496;
arg_buffer[3] = a116281116495;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116643 = encode_clo(alloc_clo(lam116643_fptr, 0));

void* lam116645_fptr() // lam116645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116646 = arg_buffer[1];
//reading env and args
void* a116279116492 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116646))[7];
//not do dummy comment
void* kont116378 = (decode_clo(env116646))[6];
//not do dummy comment
void* lst = (decode_clo(env116646))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env116646))[4];
//not do dummy comment
void* x = (decode_clo(env116646))[3];
//not do dummy comment
void* car = (decode_clo(env116646))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env116646))[1];

//if-clause
bool if_guard117285 = is_true(a116279116492);
if(if_guard117285)
{
void* x116280116493 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116378);
arg_buffer[2] = x116280116493;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116378))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117287 = alloc_clo(lam116643_fptr, 6);

//setting env list
clo117287[1] = member_u63;
clo117287[2] = x;
clo117287[3] = equal_u63;
clo117287[4] = lst;
clo117287[5] = kont116378;
clo117287[6] = cdr;
void* f116381116494 = encode_clo(clo117287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116381116494;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116645 = encode_clo(alloc_clo(lam116645_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116647 = arg_buffer[1];
//reading env and args
void* kont116378 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117289 = alloc_clo(lam116645_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo117289[1] = member_u63;
clo117289[2] = car;
clo117289[3] = x;
clo117289[4] = equal_u63;
clo117289[5] = lst;
clo117289[6] = kont116378;
clo117289[7] = cdr;
void* f116382116491 = encode_clo(clo117289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116382116491;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam116648_fptr() // lam116648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116649 = arg_buffer[1];
//reading env and args
void* a116288116508 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116287116506 = (decode_clo(env116649))[4];
//not do dummy comment
void* kont116383 = (decode_clo(env116649))[3];
//not do dummy comment
void* fun = (decode_clo(env116649))[2];
//not do dummy comment
void* foldl = (decode_clo(env116649))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont116383;
arg_buffer[3] = fun;
arg_buffer[4] = a116287116506;
arg_buffer[5] = a116288116508;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116648 = encode_clo(alloc_clo(lam116648_fptr, 0));

void* lam116650_fptr() // lam116650 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116651 = arg_buffer[1];
//reading env and args
void* a116287116506 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116651))[5];
//not do dummy comment
void* lst = (decode_clo(env116651))[4];
//not do dummy comment
void* kont116383 = (decode_clo(env116651))[3];
//not do dummy comment
void* fun = (decode_clo(env116651))[2];
//not do dummy comment
void* foldl = (decode_clo(env116651))[1];

//creating new closure instance
void** clo117291 = alloc_clo(lam116648_fptr, 4);

//setting env list
clo117291[1] = foldl;
clo117291[2] = fun;
clo117291[3] = kont116383;
clo117291[4] = a116287116506;
void* f116384116507 = encode_clo(clo117291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116384116507;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116650 = encode_clo(alloc_clo(lam116650_fptr, 0));

void* lam116652_fptr() // lam116652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116653 = arg_buffer[1];
//reading env and args
void* a116286116504 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116653))[6];
//not do dummy comment
void* lst = (decode_clo(env116653))[5];
//not do dummy comment
void* kont116383 = (decode_clo(env116653))[4];
//not do dummy comment
void* fun = (decode_clo(env116653))[3];
//not do dummy comment
void* acc = (decode_clo(env116653))[2];
//not do dummy comment
void* foldl = (decode_clo(env116653))[1];

//creating new closure instance
void** clo117293 = alloc_clo(lam116650_fptr, 5);

//setting env list
clo117293[1] = foldl;
clo117293[2] = fun;
clo117293[3] = kont116383;
clo117293[4] = lst;
clo117293[5] = cdr;
void* f116385116505 = encode_clo(clo117293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f116385116505;
arg_buffer[3] = a116286116504;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116652 = encode_clo(alloc_clo(lam116652_fptr, 0));

void* lam116654_fptr() // lam116654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116655 = arg_buffer[1];
//reading env and args
void* a116285116502 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116655))[7];
//not do dummy comment
void* lst = (decode_clo(env116655))[6];
//not do dummy comment
void* kont116383 = (decode_clo(env116655))[5];
//not do dummy comment
void* fun = (decode_clo(env116655))[4];
//not do dummy comment
void* acc = (decode_clo(env116655))[3];
//not do dummy comment
void* car = (decode_clo(env116655))[2];
//not do dummy comment
void* foldl = (decode_clo(env116655))[1];

//if-clause
bool if_guard117294 = is_true(a116285116502);
if(if_guard117294)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116383);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116383))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117296 = alloc_clo(lam116652_fptr, 6);

//setting env list
clo117296[1] = foldl;
clo117296[2] = acc;
clo117296[3] = fun;
clo117296[4] = kont116383;
clo117296[5] = lst;
clo117296[6] = cdr;
void* f116386116503 = encode_clo(clo117296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116386116503;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116654 = encode_clo(alloc_clo(lam116654_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116656 = arg_buffer[1];
//reading env and args
void* kont116383 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo117298 = alloc_clo(lam116654_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo117298[1] = foldl;
clo117298[2] = car;
clo117298[3] = acc;
clo117298[4] = fun;
clo117298[5] = kont116383;
clo117298[6] = lst;
clo117298[7] = cdr;
void* f116387116501 = encode_clo(clo117298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116387116501;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam116657_fptr() // lam116657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116658 = arg_buffer[1];
//reading env and args
void* a116292116516 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env116658))[3];
//not do dummy comment
void* a116290116512 = (decode_clo(env116658))[2];
//not do dummy comment
void* kont116388 = (decode_clo(env116658))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont116388;
arg_buffer[3] = a116290116512;
arg_buffer[4] = a116292116516;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116657 = encode_clo(alloc_clo(lam116657_fptr, 0));

void* lam116659_fptr() // lam116659 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116660 = arg_buffer[1];
//reading env and args
void* a116291116514 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env116660))[5];
//not do dummy comment
void* a116290116512 = (decode_clo(env116660))[4];
//not do dummy comment
void* cons = (decode_clo(env116660))[3];
//not do dummy comment
void* kont116388 = (decode_clo(env116660))[2];
//not do dummy comment
void* lst2 = (decode_clo(env116660))[1];

//creating new closure instance
void** clo117300 = alloc_clo(lam116657_fptr, 3);

//setting env list
clo117300[1] = kont116388;
clo117300[2] = a116290116512;
clo117300[3] = reverse_u45helper;
void* f116389116515 = encode_clo(clo117300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f116389116515;
arg_buffer[3] = a116291116514;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116659 = encode_clo(alloc_clo(lam116659_fptr, 0));

void* lam116661_fptr() // lam116661 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116662 = arg_buffer[1];
//reading env and args
void* a116290116512 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env116662))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env116662))[5];
//not do dummy comment
void* car = (decode_clo(env116662))[4];
//not do dummy comment
void* cons = (decode_clo(env116662))[3];
//not do dummy comment
void* kont116388 = (decode_clo(env116662))[2];
//not do dummy comment
void* lst2 = (decode_clo(env116662))[1];

//creating new closure instance
void** clo117302 = alloc_clo(lam116659_fptr, 5);

//setting env list
clo117302[1] = lst2;
clo117302[2] = kont116388;
clo117302[3] = cons;
clo117302[4] = a116290116512;
clo117302[5] = reverse_u45helper;
void* f116390116513 = encode_clo(clo117302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116390116513;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116661 = encode_clo(alloc_clo(lam116661_fptr, 0));

void* lam116663_fptr() // lam116663 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116664 = arg_buffer[1];
//reading env and args
void* a116289116510 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116664))[7];
//not do dummy comment
void* lst = (decode_clo(env116664))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env116664))[5];
//not do dummy comment
void* car = (decode_clo(env116664))[4];
//not do dummy comment
void* cons = (decode_clo(env116664))[3];
//not do dummy comment
void* kont116388 = (decode_clo(env116664))[2];
//not do dummy comment
void* lst2 = (decode_clo(env116664))[1];

//if-clause
bool if_guard117303 = is_true(a116289116510);
if(if_guard117303)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116388);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116388))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117305 = alloc_clo(lam116661_fptr, 6);

//setting env list
clo117305[1] = lst2;
clo117305[2] = kont116388;
clo117305[3] = cons;
clo117305[4] = car;
clo117305[5] = reverse_u45helper;
clo117305[6] = lst;
void* f116391116511 = encode_clo(clo117305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116391116511;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116663 = encode_clo(alloc_clo(lam116663_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116665 = arg_buffer[1];
//reading env and args
void* kont116388 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117307 = alloc_clo(lam116663_fptr, 7);

//setting env list
clo117307[1] = lst2;
clo117307[2] = kont116388;
clo117307[3] = cons;
clo117307[4] = car;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo117307[5] = reverse_u45helper;
clo117307[6] = lst;
clo117307[7] = cdr;
void* f116392116509 = encode_clo(clo117307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116392116509;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam116666_fptr() // lam116666 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116667 = arg_buffer[1];
//reading env and args
void* a116293116518 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116393 = (decode_clo(env116667))[3];
//not do dummy comment
void* lst = (decode_clo(env116667))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env116667))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont116393;
arg_buffer[3] = lst;
arg_buffer[4] = a116293116518;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116666 = encode_clo(alloc_clo(lam116666_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116668 = arg_buffer[1];
//reading env and args
void* kont116393 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo117309 = alloc_clo(lam116666_fptr, 3);

//setting env list
clo117309[1] = reverse_u45helper;
clo117309[2] = lst;
clo117309[3] = kont116393;
void* f116394116517 = encode_clo(clo117309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f116394116517;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam116669_fptr() // lam116669 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116670 = arg_buffer[1];
//reading env and args
void* x116296116523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116395 = (decode_clo(env116670))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116395);
arg_buffer[2] = x116296116523;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116395))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116669 = encode_clo(alloc_clo(lam116669_fptr, 0));

void* lam116671_fptr() // lam116671 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116672 = arg_buffer[1];
//reading env and args
void* a116301116532 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116395 = (decode_clo(env116672))[4];
//not do dummy comment
void* a116297116525 = (decode_clo(env116672))[3];
//not do dummy comment
void* a116299116528 = (decode_clo(env116672))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env116672))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont116395;
arg_buffer[3] = a116297116525;
arg_buffer[4] = a116299116528;
arg_buffer[5] = a116301116532;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116671 = encode_clo(alloc_clo(lam116671_fptr, 0));

void* lam116673_fptr() // lam116673 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116674 = arg_buffer[1];
//reading env and args
void* a116300116530 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116395 = (decode_clo(env116674))[6];
//not do dummy comment
void* a116297116525 = (decode_clo(env116674))[5];
//not do dummy comment
void* a116299116528 = (decode_clo(env116674))[4];
//not do dummy comment
void* cons = (decode_clo(env116674))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env116674))[2];
//not do dummy comment
void* lst2 = (decode_clo(env116674))[1];

//creating new closure instance
void** clo117311 = alloc_clo(lam116671_fptr, 4);

//setting env list
clo117311[1] = take_u45helper;
clo117311[2] = a116299116528;
clo117311[3] = a116297116525;
clo117311[4] = kont116395;
void* f116397116531 = encode_clo(clo117311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f116397116531;
arg_buffer[3] = a116300116530;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116673 = encode_clo(alloc_clo(lam116673_fptr, 0));

void* lam116675_fptr() // lam116675 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116676 = arg_buffer[1];
//reading env and args
void* a116299116528 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116395 = (decode_clo(env116676))[7];
//not do dummy comment
void* lst = (decode_clo(env116676))[6];
//not do dummy comment
void* a116297116525 = (decode_clo(env116676))[5];
//not do dummy comment
void* car = (decode_clo(env116676))[4];
//not do dummy comment
void* cons = (decode_clo(env116676))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env116676))[2];
//not do dummy comment
void* lst2 = (decode_clo(env116676))[1];

//creating new closure instance
void** clo117313 = alloc_clo(lam116673_fptr, 6);

//setting env list
clo117313[1] = lst2;
clo117313[2] = take_u45helper;
clo117313[3] = cons;
clo117313[4] = a116299116528;
clo117313[5] = a116297116525;
clo117313[6] = kont116395;
void* f116398116529 = encode_clo(clo117313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116398116529;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116675 = encode_clo(alloc_clo(lam116675_fptr, 0));

void* lam116678_fptr() // lam116678 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116679 = arg_buffer[1];
//reading env and args
void* a116297116525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116395 = (decode_clo(env116679))[8];
//not do dummy comment
void* lst = (decode_clo(env116679))[7];
//not do dummy comment
void* cons = (decode_clo(env116679))[6];
//not do dummy comment
void* _u45 = (decode_clo(env116679))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env116679))[4];
//not do dummy comment
void* lst2 = (decode_clo(env116679))[3];
//not do dummy comment
void* n = (decode_clo(env116679))[2];
//not do dummy comment
void* car = (decode_clo(env116679))[1];
mpz_t* mpzvar117314 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117314, "1", 10);
void* a116298116526 = encode_mpz(mpzvar117314);

//creating new closure instance
void** clo117316 = alloc_clo(lam116675_fptr, 7);

//setting env list
clo117316[1] = lst2;
clo117316[2] = take_u45helper;
clo117316[3] = cons;
clo117316[4] = car;
clo117316[5] = a116297116525;
clo117316[6] = lst;
clo117316[7] = kont116395;
void* f116399116527 = encode_clo(clo117316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f116399116527;
arg_buffer[3] = n;
arg_buffer[4] = a116298116526;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116678 = encode_clo(alloc_clo(lam116678_fptr, 0));

void* lam116680_fptr() // lam116680 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116681 = arg_buffer[1];
//reading env and args
void* a116295116521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116681))[10];
//not do dummy comment
void* kont116395 = (decode_clo(env116681))[9];
//not do dummy comment
void* lst = (decode_clo(env116681))[8];
//not do dummy comment
void* reverse = (decode_clo(env116681))[7];
//not do dummy comment
void* cons = (decode_clo(env116681))[6];
//not do dummy comment
void* _u45 = (decode_clo(env116681))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env116681))[4];
//not do dummy comment
void* lst2 = (decode_clo(env116681))[3];
//not do dummy comment
void* n = (decode_clo(env116681))[2];
//not do dummy comment
void* car = (decode_clo(env116681))[1];

//if-clause
bool if_guard117317 = is_true(a116295116521);
if(if_guard117317)
{

//creating new closure instance
void** clo117319 = alloc_clo(lam116669_fptr, 1);

//setting env list
clo117319[1] = kont116395;
void* f116396116522 = encode_clo(clo117319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f116396116522;
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
void** clo117321 = alloc_clo(lam116678_fptr, 8);

//setting env list
clo117321[1] = car;
clo117321[2] = n;
clo117321[3] = lst2;
clo117321[4] = take_u45helper;
clo117321[5] = _u45;
clo117321[6] = cons;
clo117321[7] = lst;
clo117321[8] = kont116395;
void* f116400116524 = encode_clo(clo117321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116400116524;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116680 = encode_clo(alloc_clo(lam116680_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116683 = arg_buffer[1];
//reading env and args
void* kont116395 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar117322 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117322, "0", 10);
void* a116294116519 = encode_mpz(mpzvar117322);

//creating new closure instance
void** clo117324 = alloc_clo(lam116680_fptr, 10);

//setting env list
clo117324[1] = car;
clo117324[2] = n;
clo117324[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo117324[4] = take_u45helper;
clo117324[5] = _u45;
clo117324[6] = cons;
clo117324[7] = reverse;
clo117324[8] = lst;
clo117324[9] = kont116395;
clo117324[10] = cdr;
void* f116401116520 = encode_clo(clo117324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f116401116520;
arg_buffer[3] = n;
arg_buffer[4] = a116294116519;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam116684_fptr() // lam116684 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116685 = arg_buffer[1];
//reading env and args
void* a116302116534 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env116685))[4];
//not do dummy comment
void* kont116402 = (decode_clo(env116685))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env116685))[2];
//not do dummy comment
void* n = (decode_clo(env116685))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont116402;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a116302116534;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116684 = encode_clo(alloc_clo(lam116684_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116686 = arg_buffer[1];
//reading env and args
void* kont116402 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117326 = alloc_clo(lam116684_fptr, 4);

//setting env list
clo117326[1] = n;
clo117326[2] = take_u45helper;
clo117326[3] = kont116402;
clo117326[4] = lst;
void* f116403116533 = encode_clo(clo117326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f116403116533;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam116688_fptr() // lam116688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116689 = arg_buffer[1];
//reading env and args
void* a116307116542 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116305116538 = (decode_clo(env116689))[3];
//not do dummy comment
void* _u43 = (decode_clo(env116689))[2];
//not do dummy comment
void* kont116404 = (decode_clo(env116689))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont116404;
arg_buffer[3] = a116305116538;
arg_buffer[4] = a116307116542;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116688 = encode_clo(alloc_clo(lam116688_fptr, 0));

void* lam116690_fptr() // lam116690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116691 = arg_buffer[1];
//reading env and args
void* a116306116540 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116305116538 = (decode_clo(env116691))[4];
//not do dummy comment
void* length = (decode_clo(env116691))[3];
//not do dummy comment
void* _u43 = (decode_clo(env116691))[2];
//not do dummy comment
void* kont116404 = (decode_clo(env116691))[1];

//creating new closure instance
void** clo117328 = alloc_clo(lam116688_fptr, 3);

//setting env list
clo117328[1] = kont116404;
clo117328[2] = _u43;
clo117328[3] = a116305116538;
void* f116405116541 = encode_clo(clo117328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f116405116541;
arg_buffer[3] = a116306116540;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116690 = encode_clo(alloc_clo(lam116690_fptr, 0));

void* lam116693_fptr() // lam116693 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116694 = arg_buffer[1];
//reading env and args
void* a116303116536 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116694))[5];
//not do dummy comment
void* lst = (decode_clo(env116694))[4];
//not do dummy comment
void* length = (decode_clo(env116694))[3];
//not do dummy comment
void* _u43 = (decode_clo(env116694))[2];
//not do dummy comment
void* kont116404 = (decode_clo(env116694))[1];

//if-clause
bool if_guard117329 = is_true(a116303116536);
if(if_guard117329)
{
mpz_t* mpzvar117330 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117330, "0", 10);
void* x116304116537 = encode_mpz(mpzvar117330);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116404);
arg_buffer[2] = x116304116537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116404))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar117331 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117331, "1", 10);
void* a116305116538 = encode_mpz(mpzvar117331);

//creating new closure instance
void** clo117333 = alloc_clo(lam116690_fptr, 4);

//setting env list
clo117333[1] = kont116404;
clo117333[2] = _u43;
clo117333[3] = length;
clo117333[4] = a116305116538;
void* f116406116539 = encode_clo(clo117333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116406116539;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116693 = encode_clo(alloc_clo(lam116693_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116695 = arg_buffer[1];
//reading env and args
void* kont116404 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo117335 = alloc_clo(lam116693_fptr, 5);

//setting env list
clo117335[1] = kont116404;
clo117335[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo117335[3] = length;
clo117335[4] = lst;
clo117335[5] = cdr;
void* f116407116535 = encode_clo(clo117335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116407116535;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam116696_fptr() // lam116696 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116697 = arg_buffer[1];
//reading env and args
void* x116309116546 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116408 = (decode_clo(env116697))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116408);
arg_buffer[2] = x116309116546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116408))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116696 = encode_clo(alloc_clo(lam116696_fptr, 0));

void* lam116698_fptr() // lam116698 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116699 = arg_buffer[1];
//reading env and args
void* a116313116554 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116408 = (decode_clo(env116699))[3];
//not do dummy comment
void* a116311116550 = (decode_clo(env116699))[2];
//not do dummy comment
void* cons = (decode_clo(env116699))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont116408;
arg_buffer[3] = a116311116550;
arg_buffer[4] = a116313116554;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116698 = encode_clo(alloc_clo(lam116698_fptr, 0));

void* lam116700_fptr() // lam116700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116701 = arg_buffer[1];
//reading env and args
void* a116312116552 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116408 = (decode_clo(env116701))[5];
//not do dummy comment
void* map = (decode_clo(env116701))[4];
//not do dummy comment
void* proc = (decode_clo(env116701))[3];
//not do dummy comment
void* a116311116550 = (decode_clo(env116701))[2];
//not do dummy comment
void* cons = (decode_clo(env116701))[1];

//creating new closure instance
void** clo117337 = alloc_clo(lam116698_fptr, 3);

//setting env list
clo117337[1] = cons;
clo117337[2] = a116311116550;
clo117337[3] = kont116408;
void* f116410116553 = encode_clo(clo117337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f116410116553;
arg_buffer[3] = proc;
arg_buffer[4] = a116312116552;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116700 = encode_clo(alloc_clo(lam116700_fptr, 0));

void* lam116702_fptr() // lam116702 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116703 = arg_buffer[1];
//reading env and args
void* a116311116550 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env116703))[6];
//not do dummy comment
void* map = (decode_clo(env116703))[5];
//not do dummy comment
void* proc = (decode_clo(env116703))[4];
//not do dummy comment
void* cons = (decode_clo(env116703))[3];
//not do dummy comment
void* kont116408 = (decode_clo(env116703))[2];
//not do dummy comment
void* cdr = (decode_clo(env116703))[1];

//creating new closure instance
void** clo117339 = alloc_clo(lam116700_fptr, 5);

//setting env list
clo117339[1] = cons;
clo117339[2] = a116311116550;
clo117339[3] = proc;
clo117339[4] = map;
clo117339[5] = kont116408;
void* f116411116551 = encode_clo(clo117339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116411116551;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116702 = encode_clo(alloc_clo(lam116702_fptr, 0));

void* lam116704_fptr() // lam116704 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116705 = arg_buffer[1];
//reading env and args
void* a116310116548 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env116705))[6];
//not do dummy comment
void* map = (decode_clo(env116705))[5];
//not do dummy comment
void* proc = (decode_clo(env116705))[4];
//not do dummy comment
void* cons = (decode_clo(env116705))[3];
//not do dummy comment
void* kont116408 = (decode_clo(env116705))[2];
//not do dummy comment
void* cdr = (decode_clo(env116705))[1];

//creating new closure instance
void** clo117341 = alloc_clo(lam116702_fptr, 6);

//setting env list
clo117341[1] = cdr;
clo117341[2] = kont116408;
clo117341[3] = cons;
clo117341[4] = proc;
clo117341[5] = map;
clo117341[6] = lst;
void* f116412116549 = encode_clo(clo117341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f116412116549;
arg_buffer[3] = a116310116548;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116704 = encode_clo(alloc_clo(lam116704_fptr, 0));

void* lam116706_fptr() // lam116706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116707 = arg_buffer[1];
//reading env and args
void* a116308116544 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env116707))[8];
//not do dummy comment
void* map = (decode_clo(env116707))[7];
//not do dummy comment
void* proc = (decode_clo(env116707))[6];
//not do dummy comment
void* car = (decode_clo(env116707))[5];
//not do dummy comment
void* cons = (decode_clo(env116707))[4];
//not do dummy comment
void* list = (decode_clo(env116707))[3];
//not do dummy comment
void* kont116408 = (decode_clo(env116707))[2];
//not do dummy comment
void* cdr = (decode_clo(env116707))[1];

//if-clause
bool if_guard117342 = is_true(a116308116544);
if(if_guard117342)
{

//creating new closure instance
void** clo117344 = alloc_clo(lam116696_fptr, 1);

//setting env list
clo117344[1] = kont116408;
void* f116409116545 = encode_clo(clo117344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f116409116545;
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
void** clo117346 = alloc_clo(lam116704_fptr, 6);

//setting env list
clo117346[1] = cdr;
clo117346[2] = kont116408;
clo117346[3] = cons;
clo117346[4] = proc;
clo117346[5] = map;
clo117346[6] = lst;
void* f116413116547 = encode_clo(clo117346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116413116547;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116706 = encode_clo(alloc_clo(lam116706_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116708 = arg_buffer[1];
//reading env and args
void* kont116408 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117348 = alloc_clo(lam116706_fptr, 8);

//setting env list
clo117348[1] = cdr;
clo117348[2] = kont116408;
clo117348[3] = list;
clo117348[4] = cons;
clo117348[5] = car;
clo117348[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo117348[7] = map;
clo117348[8] = lst;
void* f116414116543 = encode_clo(clo117348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116414116543;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam116709_fptr() // lam116709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116710 = arg_buffer[1];
//reading env and args
void* x116315116558 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116415 = (decode_clo(env116710))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116415);
arg_buffer[2] = x116315116558;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116415))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116709 = encode_clo(alloc_clo(lam116709_fptr, 0));

void* lam116711_fptr() // lam116711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116712 = arg_buffer[1];
//reading env and args
void* a116320116568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116415 = (decode_clo(env116712))[3];
//not do dummy comment
void* a116318116564 = (decode_clo(env116712))[2];
//not do dummy comment
void* cons = (decode_clo(env116712))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont116415;
arg_buffer[3] = a116318116564;
arg_buffer[4] = a116320116568;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116711 = encode_clo(alloc_clo(lam116711_fptr, 0));

void* lam116713_fptr() // lam116713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116714 = arg_buffer[1];
//reading env and args
void* a116319116566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116318116564 = (decode_clo(env116714))[5];
//not do dummy comment
void* filter = (decode_clo(env116714))[4];
//not do dummy comment
void* cons = (decode_clo(env116714))[3];
//not do dummy comment
void* kont116415 = (decode_clo(env116714))[2];
//not do dummy comment
void* op = (decode_clo(env116714))[1];

//creating new closure instance
void** clo117350 = alloc_clo(lam116711_fptr, 3);

//setting env list
clo117350[1] = cons;
clo117350[2] = a116318116564;
clo117350[3] = kont116415;
void* f116417116567 = encode_clo(clo117350);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f116417116567;
arg_buffer[3] = op;
arg_buffer[4] = a116319116566;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116713 = encode_clo(alloc_clo(lam116713_fptr, 0));

void* lam116715_fptr() // lam116715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116716 = arg_buffer[1];
//reading env and args
void* a116318116564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116716))[6];
//not do dummy comment
void* lst = (decode_clo(env116716))[5];
//not do dummy comment
void* filter = (decode_clo(env116716))[4];
//not do dummy comment
void* cons = (decode_clo(env116716))[3];
//not do dummy comment
void* kont116415 = (decode_clo(env116716))[2];
//not do dummy comment
void* op = (decode_clo(env116716))[1];

//creating new closure instance
void** clo117352 = alloc_clo(lam116713_fptr, 5);

//setting env list
clo117352[1] = op;
clo117352[2] = kont116415;
clo117352[3] = cons;
clo117352[4] = filter;
clo117352[5] = a116318116564;
void* f116418116565 = encode_clo(clo117352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116418116565;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116715 = encode_clo(alloc_clo(lam116715_fptr, 0));

void* lam116717_fptr() // lam116717 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116718 = arg_buffer[1];
//reading env and args
void* a116321116570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* filter = (decode_clo(env116718))[3];
//not do dummy comment
void* kont116415 = (decode_clo(env116718))[2];
//not do dummy comment
void* op = (decode_clo(env116718))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont116415;
arg_buffer[3] = op;
arg_buffer[4] = a116321116570;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116717 = encode_clo(alloc_clo(lam116717_fptr, 0));

void* lam116719_fptr() // lam116719 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116720 = arg_buffer[1];
//reading env and args
void* a116317116562 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116720))[7];
//not do dummy comment
void* lst = (decode_clo(env116720))[6];
//not do dummy comment
void* cons = (decode_clo(env116720))[5];
//not do dummy comment
void* kont116415 = (decode_clo(env116720))[4];
//not do dummy comment
void* op = (decode_clo(env116720))[3];
//not do dummy comment
void* filter = (decode_clo(env116720))[2];
//not do dummy comment
void* car = (decode_clo(env116720))[1];

//if-clause
bool if_guard117353 = is_true(a116317116562);
if(if_guard117353)
{

//creating new closure instance
void** clo117355 = alloc_clo(lam116715_fptr, 6);

//setting env list
clo117355[1] = op;
clo117355[2] = kont116415;
clo117355[3] = cons;
clo117355[4] = filter;
clo117355[5] = lst;
clo117355[6] = cdr;
void* f116419116563 = encode_clo(clo117355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116419116563;
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
void** clo117357 = alloc_clo(lam116717_fptr, 3);

//setting env list
clo117357[1] = op;
clo117357[2] = kont116415;
clo117357[3] = filter;
void* f116420116569 = encode_clo(clo117357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116420116569;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116719 = encode_clo(alloc_clo(lam116719_fptr, 0));

void* lam116721_fptr() // lam116721 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116722 = arg_buffer[1];
//reading env and args
void* a116316116560 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116722))[7];
//not do dummy comment
void* lst = (decode_clo(env116722))[6];
//not do dummy comment
void* cons = (decode_clo(env116722))[5];
//not do dummy comment
void* kont116415 = (decode_clo(env116722))[4];
//not do dummy comment
void* op = (decode_clo(env116722))[3];
//not do dummy comment
void* filter = (decode_clo(env116722))[2];
//not do dummy comment
void* car = (decode_clo(env116722))[1];

//creating new closure instance
void** clo117359 = alloc_clo(lam116719_fptr, 7);

//setting env list
clo117359[1] = car;
clo117359[2] = filter;
clo117359[3] = op;
clo117359[4] = kont116415;
clo117359[5] = cons;
clo117359[6] = lst;
clo117359[7] = cdr;
void* f116421116561 = encode_clo(clo117359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f116421116561;
arg_buffer[3] = a116316116560;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116721 = encode_clo(alloc_clo(lam116721_fptr, 0));

void* lam116723_fptr() // lam116723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116724 = arg_buffer[1];
//reading env and args
void* a116314116556 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env116724))[8];
//not do dummy comment
void* cons = (decode_clo(env116724))[7];
//not do dummy comment
void* list = (decode_clo(env116724))[6];
//not do dummy comment
void* cdr = (decode_clo(env116724))[5];
//not do dummy comment
void* kont116415 = (decode_clo(env116724))[4];
//not do dummy comment
void* op = (decode_clo(env116724))[3];
//not do dummy comment
void* filter = (decode_clo(env116724))[2];
//not do dummy comment
void* car = (decode_clo(env116724))[1];

//if-clause
bool if_guard117360 = is_true(a116314116556);
if(if_guard117360)
{

//creating new closure instance
void** clo117362 = alloc_clo(lam116709_fptr, 1);

//setting env list
clo117362[1] = kont116415;
void* f116416116557 = encode_clo(clo117362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f116416116557;
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
void** clo117364 = alloc_clo(lam116721_fptr, 7);

//setting env list
clo117364[1] = car;
clo117364[2] = filter;
clo117364[3] = op;
clo117364[4] = kont116415;
clo117364[5] = cons;
clo117364[6] = lst;
clo117364[7] = cdr;
void* f116422116559 = encode_clo(clo117364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116422116559;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116723 = encode_clo(alloc_clo(lam116723_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116725 = arg_buffer[1];
//reading env and args
void* kont116415 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117366 = alloc_clo(lam116723_fptr, 8);

//setting env list
clo117366[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo117366[2] = filter;
clo117366[3] = op;
clo117366[4] = kont116415;
clo117366[5] = cdr;
clo117366[6] = list;
clo117366[7] = cons;
clo117366[8] = lst;
void* f116423116555 = encode_clo(clo117366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116423116555;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam116726_fptr() // lam116726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116727 = arg_buffer[1];
//reading env and args
void* a116326116578 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116424 = (decode_clo(env116727))[3];
//not do dummy comment
void* drop = (decode_clo(env116727))[2];
//not do dummy comment
void* a116324116575 = (decode_clo(env116727))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont116424;
arg_buffer[3] = a116324116575;
arg_buffer[4] = a116326116578;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116726 = encode_clo(alloc_clo(lam116726_fptr, 0));

void* lam116729_fptr() // lam116729 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116730 = arg_buffer[1];
//reading env and args
void* a116324116575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116424 = (decode_clo(env116730))[4];
//not do dummy comment
void* drop = (decode_clo(env116730))[3];
//not do dummy comment
void* n = (decode_clo(env116730))[2];
//not do dummy comment
void* _u45 = (decode_clo(env116730))[1];
mpz_t* mpzvar117367 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117367, "1", 10);
void* a116325116576 = encode_mpz(mpzvar117367);

//creating new closure instance
void** clo117369 = alloc_clo(lam116726_fptr, 3);

//setting env list
clo117369[1] = a116324116575;
clo117369[2] = drop;
clo117369[3] = kont116424;
void* f116425116577 = encode_clo(clo117369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f116425116577;
arg_buffer[3] = n;
arg_buffer[4] = a116325116576;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116729 = encode_clo(alloc_clo(lam116729_fptr, 0));

void* lam116731_fptr() // lam116731 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116732 = arg_buffer[1];
//reading env and args
void* a116323116573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env116732))[6];
//not do dummy comment
void* _u45 = (decode_clo(env116732))[5];
//not do dummy comment
void* kont116424 = (decode_clo(env116732))[4];
//not do dummy comment
void* cdr = (decode_clo(env116732))[3];
//not do dummy comment
void* lst = (decode_clo(env116732))[2];
//not do dummy comment
void* drop = (decode_clo(env116732))[1];

//if-clause
bool if_guard117370 = is_true(a116323116573);
if(if_guard117370)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116424);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116424))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117372 = alloc_clo(lam116729_fptr, 4);

//setting env list
clo117372[1] = _u45;
clo117372[2] = n;
clo117372[3] = drop;
clo117372[4] = kont116424;
void* f116426116574 = encode_clo(clo117372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116426116574;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116731 = encode_clo(alloc_clo(lam116731_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116734 = arg_buffer[1];
//reading env and args
void* kont116424 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar117373 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117373, "0", 10);
void* a116322116571 = encode_mpz(mpzvar117373);

//creating new closure instance
void** clo117375 = alloc_clo(lam116731_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo117375[1] = drop;
clo117375[2] = lst;
clo117375[3] = cdr;
clo117375[4] = kont116424;
clo117375[5] = _u45;
clo117375[6] = n;
void* f116427116572 = encode_clo(clo117375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f116427116572;
arg_buffer[3] = n;
arg_buffer[4] = a116322116571;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam116735_fptr() // lam116735 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116736 = arg_buffer[1];
//reading env and args
void* a116330116586 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116428 = (decode_clo(env116736))[3];
//not do dummy comment
void* proc = (decode_clo(env116736))[2];
//not do dummy comment
void* a116328116582 = (decode_clo(env116736))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont116428;
arg_buffer[3] = a116328116582;
arg_buffer[4] = a116330116586;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116735 = encode_clo(alloc_clo(lam116735_fptr, 0));

void* lam116737_fptr() // lam116737 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116738 = arg_buffer[1];
//reading env and args
void* a116329116584 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116328116582 = (decode_clo(env116738))[5];
//not do dummy comment
void* foldr = (decode_clo(env116738))[4];
//not do dummy comment
void* kont116428 = (decode_clo(env116738))[3];
//not do dummy comment
void* proc = (decode_clo(env116738))[2];
//not do dummy comment
void* acc = (decode_clo(env116738))[1];

//creating new closure instance
void** clo117377 = alloc_clo(lam116735_fptr, 3);

//setting env list
clo117377[1] = a116328116582;
clo117377[2] = proc;
clo117377[3] = kont116428;
void* f116429116585 = encode_clo(clo117377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f116429116585;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a116329116584;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116737 = encode_clo(alloc_clo(lam116737_fptr, 0));

void* lam116739_fptr() // lam116739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116740 = arg_buffer[1];
//reading env and args
void* a116328116582 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116740))[6];
//not do dummy comment
void* kont116428 = (decode_clo(env116740))[5];
//not do dummy comment
void* foldr = (decode_clo(env116740))[4];
//not do dummy comment
void* lst = (decode_clo(env116740))[3];
//not do dummy comment
void* proc = (decode_clo(env116740))[2];
//not do dummy comment
void* acc = (decode_clo(env116740))[1];

//creating new closure instance
void** clo117379 = alloc_clo(lam116737_fptr, 5);

//setting env list
clo117379[1] = acc;
clo117379[2] = proc;
clo117379[3] = kont116428;
clo117379[4] = foldr;
clo117379[5] = a116328116582;
void* f116430116583 = encode_clo(clo117379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116430116583;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116739 = encode_clo(alloc_clo(lam116739_fptr, 0));

void* lam116741_fptr() // lam116741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116742 = arg_buffer[1];
//reading env and args
void* a116327116580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116742))[7];
//not do dummy comment
void* car = (decode_clo(env116742))[6];
//not do dummy comment
void* kont116428 = (decode_clo(env116742))[5];
//not do dummy comment
void* foldr = (decode_clo(env116742))[4];
//not do dummy comment
void* lst = (decode_clo(env116742))[3];
//not do dummy comment
void* proc = (decode_clo(env116742))[2];
//not do dummy comment
void* acc = (decode_clo(env116742))[1];

//if-clause
bool if_guard117380 = is_true(a116327116580);
if(if_guard117380)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116428);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116428))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117382 = alloc_clo(lam116739_fptr, 6);

//setting env list
clo117382[1] = acc;
clo117382[2] = proc;
clo117382[3] = lst;
clo117382[4] = foldr;
clo117382[5] = kont116428;
clo117382[6] = cdr;
void* f116431116581 = encode_clo(clo117382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116431116581;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116741 = encode_clo(alloc_clo(lam116741_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116743 = arg_buffer[1];
//reading env and args
void* kont116428 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo117384 = alloc_clo(lam116741_fptr, 7);

//setting env list
clo117384[1] = acc;
clo117384[2] = proc;
clo117384[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo117384[4] = foldr;
clo117384[5] = kont116428;
clo117384[6] = car;
clo117384[7] = cdr;
void* f116432116579 = encode_clo(clo117384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116432116579;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam116744_fptr() // lam116744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116745 = arg_buffer[1];
//reading env and args
void* a116334116594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116332116590 = (decode_clo(env116745))[3];
//not do dummy comment
void* kont116433 = (decode_clo(env116745))[2];
//not do dummy comment
void* cons = (decode_clo(env116745))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont116433;
arg_buffer[3] = a116332116590;
arg_buffer[4] = a116334116594;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116744 = encode_clo(alloc_clo(lam116744_fptr, 0));

void* lam116746_fptr() // lam116746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116747 = arg_buffer[1];
//reading env and args
void* a116333116592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116332116590 = (decode_clo(env116747))[5];
//not do dummy comment
void* append = (decode_clo(env116747))[4];
//not do dummy comment
void* kont116433 = (decode_clo(env116747))[3];
//not do dummy comment
void* lst2 = (decode_clo(env116747))[2];
//not do dummy comment
void* cons = (decode_clo(env116747))[1];

//creating new closure instance
void** clo117386 = alloc_clo(lam116744_fptr, 3);

//setting env list
clo117386[1] = cons;
clo117386[2] = kont116433;
clo117386[3] = a116332116590;
void* f116434116593 = encode_clo(clo117386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f116434116593;
arg_buffer[3] = a116333116592;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116746 = encode_clo(alloc_clo(lam116746_fptr, 0));

void* lam116748_fptr() // lam116748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116749 = arg_buffer[1];
//reading env and args
void* a116332116590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116749))[6];
//not do dummy comment
void* append = (decode_clo(env116749))[5];
//not do dummy comment
void* kont116433 = (decode_clo(env116749))[4];
//not do dummy comment
void* lst2 = (decode_clo(env116749))[3];
//not do dummy comment
void* lst1 = (decode_clo(env116749))[2];
//not do dummy comment
void* cons = (decode_clo(env116749))[1];

//creating new closure instance
void** clo117388 = alloc_clo(lam116746_fptr, 5);

//setting env list
clo117388[1] = cons;
clo117388[2] = lst2;
clo117388[3] = kont116433;
clo117388[4] = append;
clo117388[5] = a116332116590;
void* f116435116591 = encode_clo(clo117388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116435116591;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116748 = encode_clo(alloc_clo(lam116748_fptr, 0));

void* lam116750_fptr() // lam116750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116751 = arg_buffer[1];
//reading env and args
void* a116331116588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env116751))[7];
//not do dummy comment
void* append = (decode_clo(env116751))[6];
//not do dummy comment
void* kont116433 = (decode_clo(env116751))[5];
//not do dummy comment
void* lst2 = (decode_clo(env116751))[4];
//not do dummy comment
void* cons = (decode_clo(env116751))[3];
//not do dummy comment
void* lst1 = (decode_clo(env116751))[2];
//not do dummy comment
void* car = (decode_clo(env116751))[1];

//if-clause
bool if_guard117389 = is_true(a116331116588);
if(if_guard117389)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116433);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116433))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117391 = alloc_clo(lam116748_fptr, 6);

//setting env list
clo117391[1] = cons;
clo117391[2] = lst1;
clo117391[3] = lst2;
clo117391[4] = kont116433;
clo117391[5] = append;
clo117391[6] = cdr;
void* f116436116589 = encode_clo(clo117391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116436116589;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam116750 = encode_clo(alloc_clo(lam116750_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116752 = arg_buffer[1];
//reading env and args
void* kont116433 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117393 = alloc_clo(lam116750_fptr, 7);

//setting env list
clo117393[1] = car;
clo117393[2] = lst1;
clo117393[3] = cons;
clo117393[4] = lst2;
clo117393[5] = kont116433;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo117393[6] = append;
clo117393[7] = cdr;
void* f116437116587 = encode_clo(clo117393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116437116587;
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
void* _116753 = arg_buffer[1];
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

void* kont116438116595 = prim_car(lst);
void* lst116596 = prim_cdr(lst);
void* x116335116597 = apply_prim_hash(lst116596);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116438116595);
arg_buffer[2] = x116335116597;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116438116595))[0]);
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
void* _116754 = arg_buffer[1];
//reading env and args
void* kont116440 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x116336116598 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116440);
arg_buffer[2] = x116336116598;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116440))[0]);
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
void* _116755 = arg_buffer[1];
//reading env and args
void* kont116441 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x116337116599 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116441);
arg_buffer[2] = x116337116599;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116441))[0]);
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
void* _116756 = arg_buffer[1];
//reading env and args
void* kont116442 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x116338116600 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116442);
arg_buffer[2] = x116338116600;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116442))[0]);
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
void* _116757 = arg_buffer[1];
//reading env and args
void* kont116443 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x116339116601 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116443);
arg_buffer[2] = x116339116601;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116443))[0]);
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
void* _116764 = arg_buffer[1];
//reading env and args
void* kont116444 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar117394 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117394, "1", 10);
void* a116340116602 = encode_mpz(mpzvar117394);
mpz_t* mpzvar117395 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117395, "2", 10);
void* a116341116603 = encode_mpz(mpzvar117395);
mpz_t* mpzvar117396 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117396, "3", 10);
void* a116342116604 = encode_mpz(mpzvar117396);
mpz_t* mpzvar117397 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117397, "4", 10);
void* a116343116605 = encode_mpz(mpzvar117397);
mpz_t* mpzvar117398 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117398, "5", 10);
void* a116344116606 = encode_mpz(mpzvar117398);
mpz_t* mpzvar117399 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117399, "100", 10);
void* a116345116607 = encode_mpz(mpzvar117399);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60_u61);
arg_buffer[2] = kont116444;
arg_buffer[3] = a116340116602;
arg_buffer[4] = a116341116603;
arg_buffer[5] = a116342116604;
arg_buffer[6] = a116343116605;
arg_buffer[7] = a116344116606;
arg_buffer[8] = a116345116607;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam116765_fptr() // lam116765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env116766 = arg_buffer[1];
//reading env and args
void* x116346116609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116445 = (decode_clo(env116766))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116445);
arg_buffer[2] = x116346116609;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116445))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam116765 = encode_clo(alloc_clo(lam116765_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _116767 = arg_buffer[1];
//reading env and args
void* kont116445 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo117401 = alloc_clo(lam116765_fptr, 1);

//setting env list
clo117401[1] = kont116445;
void* f116446116608 = encode_clo(clo117401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f116446116608;
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

