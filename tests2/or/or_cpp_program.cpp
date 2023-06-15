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
void* _48632 = arg_buffer[1];
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

void* kont4836248464 = prim_car(lst);
void* lst48465 = prim_cdr(lst);
void* x4826948466 = apply_prim__u43(lst48465);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4836248464);
arg_buffer[2] = x4826948466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4836248464))[0]);
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
void* _48633 = arg_buffer[1];
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

void* kont4836448467 = prim_car(lst);
void* lst48468 = prim_cdr(lst);
void* x4827048469 = apply_prim__u45(lst48468);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4836448467);
arg_buffer[2] = x4827048469;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4836448467))[0]);
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
void* _48634 = arg_buffer[1];
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

void* kont4836648470 = prim_car(lst);
void* lst48471 = prim_cdr(lst);
void* x4827148472 = apply_prim__u42(lst48471);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4836648470);
arg_buffer[2] = x4827148472;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4836648470))[0]);
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
void* _48635 = arg_buffer[1];
//reading env and args
void* kont48368 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4827248473 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48368);
arg_buffer[2] = x4827248473;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48368))[0]);
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
void* _48636 = arg_buffer[1];
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

void* kont4836948474 = prim_car(lst);
void* lst48475 = prim_cdr(lst);
void* x4827348476 = apply_prim__u47(lst48475);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4836948474);
arg_buffer[2] = x4827348476;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4836948474))[0]);
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
void* _48637 = arg_buffer[1];
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

void* kont4837148477 = prim_car(lst);
void* lst48478 = prim_cdr(lst);
void* x4827448479 = apply_prim__u61(lst48478);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4837148477);
arg_buffer[2] = x4827448479;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4837148477))[0]);
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
void* _48638 = arg_buffer[1];
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

void* kont4837348480 = prim_car(lst);
void* lst48481 = prim_cdr(lst);
void* x4827548482 = apply_prim__u62(lst48481);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4837348480);
arg_buffer[2] = x4827548482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4837348480))[0]);
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
void* _48639 = arg_buffer[1];
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

void* kont4837548483 = prim_car(lst);
void* lst48484 = prim_cdr(lst);
void* x4827648485 = apply_prim__u60(lst48484);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4837548483);
arg_buffer[2] = x4827648485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4837548483))[0]);
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
void* _48640 = arg_buffer[1];
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

void* kont4837748486 = prim_car(lst);
void* lst48487 = prim_cdr(lst);
void* x4827748488 = apply_prim__u60_u61(lst48487);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4837748486);
arg_buffer[2] = x4827748488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4837748486))[0]);
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
void* _48641 = arg_buffer[1];
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

void* kont4837948489 = prim_car(lst);
void* lst48490 = prim_cdr(lst);
void* x4827848491 = apply_prim__u62_u61(lst48490);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4837948489);
arg_buffer[2] = x4827848491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4837948489))[0]);
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
void* _48642 = arg_buffer[1];
//reading env and args
void* kont48381 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4827948492 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48381);
arg_buffer[2] = x4827948492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48381))[0]);
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
void* _48643 = arg_buffer[1];
//reading env and args
void* kont48382 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4828048493 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48382);
arg_buffer[2] = x4828048493;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48382))[0]);
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
void* _48644 = arg_buffer[1];
//reading env and args
void* kont48383 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4828148494 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48383);
arg_buffer[2] = x4828148494;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48383))[0]);
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
void* _48645 = arg_buffer[1];
//reading env and args
void* kont48384 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4828248495 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48384);
arg_buffer[2] = x4828248495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48384))[0]);
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
void* _48646 = arg_buffer[1];
//reading env and args
void* kont48385 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4828348496 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48385);
arg_buffer[2] = x4828348496;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48385))[0]);
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
void* _48647 = arg_buffer[1];
//reading env and args
void* kont48386 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4828448497 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48386);
arg_buffer[2] = x4828448497;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48386))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam48648_fptr() // lam48648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48649 = arg_buffer[1];
//reading env and args
void* a4828748501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env48649))[3];
//not do dummy comment
void* a4828548498 = (decode_clo(env48649))[2];
//not do dummy comment
void* kont48387 = (decode_clo(env48649))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont48387;
arg_buffer[3] = a4828548498;
arg_buffer[4] = a4828748501;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48648 = encode_clo(alloc_clo(lam48648_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48652 = arg_buffer[1];
//reading env and args
void* kont48387 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50295 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50295, "0", 10);
void* a4828548498 = encode_mpz(mpzvar50295);
mpz_t* mpzvar50296 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50296, "2", 10);
void* a4828648499 = encode_mpz(mpzvar50296);

//creating new closure instance
void** clo50298 = alloc_clo(lam48648_fptr, 3);

//setting env list
clo50298[1] = kont48387;
clo50298[2] = a4828548498;
clo50298[3] = equal_u63;
void* f4838848500 = encode_clo(clo50298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4838848500;
arg_buffer[3] = x;
arg_buffer[4] = a4828648499;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam48653_fptr() // lam48653 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48654 = arg_buffer[1];
//reading env and args
void* a4829048505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48389 = (decode_clo(env48654))[3];
//not do dummy comment
void* a4828848502 = (decode_clo(env48654))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env48654))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont48389;
arg_buffer[3] = a4828848502;
arg_buffer[4] = a4829048505;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48653 = encode_clo(alloc_clo(lam48653_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48657 = arg_buffer[1];
//reading env and args
void* kont48389 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50299 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50299, "1", 10);
void* a4828848502 = encode_mpz(mpzvar50299);
mpz_t* mpzvar50300 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50300, "2", 10);
void* a4828948503 = encode_mpz(mpzvar50300);

//creating new closure instance
void** clo50302 = alloc_clo(lam48653_fptr, 3);

//setting env list
clo50302[1] = equal_u63;
clo50302[2] = a4828848502;
clo50302[3] = kont48389;
void* f4839048504 = encode_clo(clo50302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4839048504;
arg_buffer[3] = x;
arg_buffer[4] = a4828948503;
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
void* _48658 = arg_buffer[1];
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

void* kont4839148506 = prim_car(x);
void* x48507 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4839148506);
arg_buffer[2] = x48507;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4839148506))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam48661_fptr() // lam48661 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48662 = arg_buffer[1];
//reading env and args
void* a4829648517 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48393 = (decode_clo(env48662))[3];
//not do dummy comment
void* x = (decode_clo(env48662))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48662))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont48393;
arg_buffer[3] = x;
arg_buffer[4] = a4829648517;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48661 = encode_clo(alloc_clo(lam48661_fptr, 0));

void* lam48663_fptr() // lam48663 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48664 = arg_buffer[1];
//reading env and args
void* a4829448514 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48664))[5];
//not do dummy comment
void* x = (decode_clo(env48664))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env48664))[3];
//not do dummy comment
void* lst = (decode_clo(env48664))[2];
//not do dummy comment
void* kont48393 = (decode_clo(env48664))[1];

//if-clause
bool if_guard50303 = is_true(a4829448514);
if(if_guard50303)
{
void* x4829548515 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48393);
arg_buffer[2] = x4829548515;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48393))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50305 = alloc_clo(lam48661_fptr, 3);

//setting env list
clo50305[1] = member_u63;
clo50305[2] = x;
clo50305[3] = kont48393;
void* f4839448516 = encode_clo(clo50305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4839448516;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48663 = encode_clo(alloc_clo(lam48663_fptr, 0));

void* lam48665_fptr() // lam48665 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48666 = arg_buffer[1];
//reading env and args
void* a4829348512 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48666))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env48666))[5];
//not do dummy comment
void* x = (decode_clo(env48666))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env48666))[3];
//not do dummy comment
void* lst = (decode_clo(env48666))[2];
//not do dummy comment
void* kont48393 = (decode_clo(env48666))[1];

//creating new closure instance
void** clo50307 = alloc_clo(lam48663_fptr, 5);

//setting env list
clo50307[1] = kont48393;
clo50307[2] = lst;
clo50307[3] = member_u63;
clo50307[4] = x;
clo50307[5] = cdr;
void* f4839548513 = encode_clo(clo50307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4839548513;
arg_buffer[3] = a4829348512;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48665 = encode_clo(alloc_clo(lam48665_fptr, 0));

void* lam48667_fptr() // lam48667 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48668 = arg_buffer[1];
//reading env and args
void* a4829148509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48668))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env48668))[6];
//not do dummy comment
void* x = (decode_clo(env48668))[5];
//not do dummy comment
void* car = (decode_clo(env48668))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env48668))[3];
//not do dummy comment
void* lst = (decode_clo(env48668))[2];
//not do dummy comment
void* kont48393 = (decode_clo(env48668))[1];

//if-clause
bool if_guard50308 = is_true(a4829148509);
if(if_guard50308)
{
void* x4829248510 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48393);
arg_buffer[2] = x4829248510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48393))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50310 = alloc_clo(lam48665_fptr, 6);

//setting env list
clo50310[1] = kont48393;
clo50310[2] = lst;
clo50310[3] = member_u63;
clo50310[4] = x;
clo50310[5] = equal_u63;
clo50310[6] = cdr;
void* f4839648511 = encode_clo(clo50310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4839648511;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48667 = encode_clo(alloc_clo(lam48667_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48669 = arg_buffer[1];
//reading env and args
void* kont48393 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50312 = alloc_clo(lam48667_fptr, 7);

//setting env list
clo50312[1] = kont48393;
clo50312[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo50312[3] = member_u63;
clo50312[4] = car;
clo50312[5] = x;
clo50312[6] = equal_u63;
clo50312[7] = cdr;
void* f4839748508 = encode_clo(clo50312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4839748508;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam48670_fptr() // lam48670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48671 = arg_buffer[1];
//reading env and args
void* a4830048525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4829948523 = (decode_clo(env48671))[4];
//not do dummy comment
void* kont48398 = (decode_clo(env48671))[3];
//not do dummy comment
void* fun = (decode_clo(env48671))[2];
//not do dummy comment
void* foldl = (decode_clo(env48671))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont48398;
arg_buffer[3] = fun;
arg_buffer[4] = a4829948523;
arg_buffer[5] = a4830048525;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48670 = encode_clo(alloc_clo(lam48670_fptr, 0));

void* lam48672_fptr() // lam48672 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48673 = arg_buffer[1];
//reading env and args
void* a4829948523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48673))[5];
//not do dummy comment
void* lst = (decode_clo(env48673))[4];
//not do dummy comment
void* kont48398 = (decode_clo(env48673))[3];
//not do dummy comment
void* fun = (decode_clo(env48673))[2];
//not do dummy comment
void* foldl = (decode_clo(env48673))[1];

//creating new closure instance
void** clo50314 = alloc_clo(lam48670_fptr, 4);

//setting env list
clo50314[1] = foldl;
clo50314[2] = fun;
clo50314[3] = kont48398;
clo50314[4] = a4829948523;
void* f4839948524 = encode_clo(clo50314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4839948524;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48672 = encode_clo(alloc_clo(lam48672_fptr, 0));

void* lam48674_fptr() // lam48674 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48675 = arg_buffer[1];
//reading env and args
void* a4829848521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48675))[6];
//not do dummy comment
void* lst = (decode_clo(env48675))[5];
//not do dummy comment
void* kont48398 = (decode_clo(env48675))[4];
//not do dummy comment
void* fun = (decode_clo(env48675))[3];
//not do dummy comment
void* acc = (decode_clo(env48675))[2];
//not do dummy comment
void* foldl = (decode_clo(env48675))[1];

//creating new closure instance
void** clo50316 = alloc_clo(lam48672_fptr, 5);

//setting env list
clo50316[1] = foldl;
clo50316[2] = fun;
clo50316[3] = kont48398;
clo50316[4] = lst;
clo50316[5] = cdr;
void* f4840048522 = encode_clo(clo50316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4840048522;
arg_buffer[3] = a4829848521;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48674 = encode_clo(alloc_clo(lam48674_fptr, 0));

void* lam48676_fptr() // lam48676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48677 = arg_buffer[1];
//reading env and args
void* a4829748519 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48677))[7];
//not do dummy comment
void* lst = (decode_clo(env48677))[6];
//not do dummy comment
void* kont48398 = (decode_clo(env48677))[5];
//not do dummy comment
void* fun = (decode_clo(env48677))[4];
//not do dummy comment
void* acc = (decode_clo(env48677))[3];
//not do dummy comment
void* car = (decode_clo(env48677))[2];
//not do dummy comment
void* foldl = (decode_clo(env48677))[1];

//if-clause
bool if_guard50317 = is_true(a4829748519);
if(if_guard50317)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48398);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48398))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50319 = alloc_clo(lam48674_fptr, 6);

//setting env list
clo50319[1] = foldl;
clo50319[2] = acc;
clo50319[3] = fun;
clo50319[4] = kont48398;
clo50319[5] = lst;
clo50319[6] = cdr;
void* f4840148520 = encode_clo(clo50319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4840148520;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48676 = encode_clo(alloc_clo(lam48676_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48678 = arg_buffer[1];
//reading env and args
void* kont48398 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo50321 = alloc_clo(lam48676_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo50321[1] = foldl;
clo50321[2] = car;
clo50321[3] = acc;
clo50321[4] = fun;
clo50321[5] = kont48398;
clo50321[6] = lst;
clo50321[7] = cdr;
void* f4840248518 = encode_clo(clo50321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4840248518;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam48679_fptr() // lam48679 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48680 = arg_buffer[1];
//reading env and args
void* a4830448533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48680))[3];
//not do dummy comment
void* a4830248529 = (decode_clo(env48680))[2];
//not do dummy comment
void* kont48403 = (decode_clo(env48680))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont48403;
arg_buffer[3] = a4830248529;
arg_buffer[4] = a4830448533;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48679 = encode_clo(alloc_clo(lam48679_fptr, 0));

void* lam48681_fptr() // lam48681 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48682 = arg_buffer[1];
//reading env and args
void* a4830348531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48682))[5];
//not do dummy comment
void* a4830248529 = (decode_clo(env48682))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48682))[3];
//not do dummy comment
void* cons = (decode_clo(env48682))[2];
//not do dummy comment
void* kont48403 = (decode_clo(env48682))[1];

//creating new closure instance
void** clo50323 = alloc_clo(lam48679_fptr, 3);

//setting env list
clo50323[1] = kont48403;
clo50323[2] = a4830248529;
clo50323[3] = reverse_u45helper;
void* f4840448532 = encode_clo(clo50323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4840448532;
arg_buffer[3] = a4830348531;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48681 = encode_clo(alloc_clo(lam48681_fptr, 0));

void* lam48683_fptr() // lam48683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48684 = arg_buffer[1];
//reading env and args
void* a4830248529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48684))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48684))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48684))[4];
//not do dummy comment
void* car = (decode_clo(env48684))[3];
//not do dummy comment
void* cons = (decode_clo(env48684))[2];
//not do dummy comment
void* kont48403 = (decode_clo(env48684))[1];

//creating new closure instance
void** clo50325 = alloc_clo(lam48681_fptr, 5);

//setting env list
clo50325[1] = kont48403;
clo50325[2] = cons;
clo50325[3] = lst2;
clo50325[4] = a4830248529;
clo50325[5] = reverse_u45helper;
void* f4840548530 = encode_clo(clo50325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4840548530;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48683 = encode_clo(alloc_clo(lam48683_fptr, 0));

void* lam48685_fptr() // lam48685 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48686 = arg_buffer[1];
//reading env and args
void* a4830148527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48686))[7];
//not do dummy comment
void* lst = (decode_clo(env48686))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48686))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48686))[4];
//not do dummy comment
void* car = (decode_clo(env48686))[3];
//not do dummy comment
void* cons = (decode_clo(env48686))[2];
//not do dummy comment
void* kont48403 = (decode_clo(env48686))[1];

//if-clause
bool if_guard50326 = is_true(a4830148527);
if(if_guard50326)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48403);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48403))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50328 = alloc_clo(lam48683_fptr, 6);

//setting env list
clo50328[1] = kont48403;
clo50328[2] = cons;
clo50328[3] = car;
clo50328[4] = lst2;
clo50328[5] = reverse_u45helper;
clo50328[6] = lst;
void* f4840648528 = encode_clo(clo50328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4840648528;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48685 = encode_clo(alloc_clo(lam48685_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48687 = arg_buffer[1];
//reading env and args
void* kont48403 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50330 = alloc_clo(lam48685_fptr, 7);

//setting env list
clo50330[1] = kont48403;
clo50330[2] = cons;
clo50330[3] = car;
clo50330[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo50330[5] = reverse_u45helper;
clo50330[6] = lst;
clo50330[7] = cdr;
void* f4840748526 = encode_clo(clo50330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4840748526;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam48688_fptr() // lam48688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48689 = arg_buffer[1];
//reading env and args
void* a4830548535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48408 = (decode_clo(env48689))[3];
//not do dummy comment
void* lst = (decode_clo(env48689))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48689))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont48408;
arg_buffer[3] = lst;
arg_buffer[4] = a4830548535;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48688 = encode_clo(alloc_clo(lam48688_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48690 = arg_buffer[1];
//reading env and args
void* kont48408 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50332 = alloc_clo(lam48688_fptr, 3);

//setting env list
clo50332[1] = reverse_u45helper;
clo50332[2] = lst;
clo50332[3] = kont48408;
void* f4840948534 = encode_clo(clo50332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4840948534;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam48691_fptr() // lam48691 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48692 = arg_buffer[1];
//reading env and args
void* x4830848540 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48410 = (decode_clo(env48692))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48410);
arg_buffer[2] = x4830848540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48410))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48691 = encode_clo(alloc_clo(lam48691_fptr, 0));

void* lam48693_fptr() // lam48693 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48694 = arg_buffer[1];
//reading env and args
void* a4831348549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48410 = (decode_clo(env48694))[4];
//not do dummy comment
void* a4830948542 = (decode_clo(env48694))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48694))[2];
//not do dummy comment
void* a4831148545 = (decode_clo(env48694))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont48410;
arg_buffer[3] = a4830948542;
arg_buffer[4] = a4831148545;
arg_buffer[5] = a4831348549;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48693 = encode_clo(alloc_clo(lam48693_fptr, 0));

void* lam48695_fptr() // lam48695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48696 = arg_buffer[1];
//reading env and args
void* a4831248547 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48410 = (decode_clo(env48696))[6];
//not do dummy comment
void* a4830948542 = (decode_clo(env48696))[5];
//not do dummy comment
void* cons = (decode_clo(env48696))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env48696))[3];
//not do dummy comment
void* a4831148545 = (decode_clo(env48696))[2];
//not do dummy comment
void* lst2 = (decode_clo(env48696))[1];

//creating new closure instance
void** clo50334 = alloc_clo(lam48693_fptr, 4);

//setting env list
clo50334[1] = a4831148545;
clo50334[2] = take_u45helper;
clo50334[3] = a4830948542;
clo50334[4] = kont48410;
void* f4841248548 = encode_clo(clo50334);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4841248548;
arg_buffer[3] = a4831248547;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48695 = encode_clo(alloc_clo(lam48695_fptr, 0));

void* lam48697_fptr() // lam48697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48698 = arg_buffer[1];
//reading env and args
void* a4831148545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48698))[7];
//not do dummy comment
void* kont48410 = (decode_clo(env48698))[6];
//not do dummy comment
void* a4830948542 = (decode_clo(env48698))[5];
//not do dummy comment
void* car = (decode_clo(env48698))[4];
//not do dummy comment
void* cons = (decode_clo(env48698))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48698))[2];
//not do dummy comment
void* lst2 = (decode_clo(env48698))[1];

//creating new closure instance
void** clo50336 = alloc_clo(lam48695_fptr, 6);

//setting env list
clo50336[1] = lst2;
clo50336[2] = a4831148545;
clo50336[3] = take_u45helper;
clo50336[4] = cons;
clo50336[5] = a4830948542;
clo50336[6] = kont48410;
void* f4841348546 = encode_clo(clo50336);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4841348546;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48697 = encode_clo(alloc_clo(lam48697_fptr, 0));

void* lam48700_fptr() // lam48700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48701 = arg_buffer[1];
//reading env and args
void* a4830948542 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48701))[8];
//not do dummy comment
void* kont48410 = (decode_clo(env48701))[7];
//not do dummy comment
void* cons = (decode_clo(env48701))[6];
//not do dummy comment
void* _u45 = (decode_clo(env48701))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48701))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48701))[3];
//not do dummy comment
void* n = (decode_clo(env48701))[2];
//not do dummy comment
void* car = (decode_clo(env48701))[1];
mpz_t* mpzvar50337 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50337, "1", 10);
void* a4831048543 = encode_mpz(mpzvar50337);

//creating new closure instance
void** clo50339 = alloc_clo(lam48697_fptr, 7);

//setting env list
clo50339[1] = lst2;
clo50339[2] = take_u45helper;
clo50339[3] = cons;
clo50339[4] = car;
clo50339[5] = a4830948542;
clo50339[6] = kont48410;
clo50339[7] = lst;
void* f4841448544 = encode_clo(clo50339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4841448544;
arg_buffer[3] = n;
arg_buffer[4] = a4831048543;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48700 = encode_clo(alloc_clo(lam48700_fptr, 0));

void* lam48702_fptr() // lam48702 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48703 = arg_buffer[1];
//reading env and args
void* a4830748538 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48703))[10];
//not do dummy comment
void* lst = (decode_clo(env48703))[9];
//not do dummy comment
void* kont48410 = (decode_clo(env48703))[8];
//not do dummy comment
void* reverse = (decode_clo(env48703))[7];
//not do dummy comment
void* cons = (decode_clo(env48703))[6];
//not do dummy comment
void* _u45 = (decode_clo(env48703))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48703))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48703))[3];
//not do dummy comment
void* n = (decode_clo(env48703))[2];
//not do dummy comment
void* car = (decode_clo(env48703))[1];

//if-clause
bool if_guard50340 = is_true(a4830748538);
if(if_guard50340)
{

//creating new closure instance
void** clo50342 = alloc_clo(lam48691_fptr, 1);

//setting env list
clo50342[1] = kont48410;
void* f4841148539 = encode_clo(clo50342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4841148539;
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
void** clo50344 = alloc_clo(lam48700_fptr, 8);

//setting env list
clo50344[1] = car;
clo50344[2] = n;
clo50344[3] = lst2;
clo50344[4] = take_u45helper;
clo50344[5] = _u45;
clo50344[6] = cons;
clo50344[7] = kont48410;
clo50344[8] = lst;
void* f4841548541 = encode_clo(clo50344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4841548541;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48702 = encode_clo(alloc_clo(lam48702_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48705 = arg_buffer[1];
//reading env and args
void* kont48410 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar50345 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50345, "0", 10);
void* a4830648536 = encode_mpz(mpzvar50345);

//creating new closure instance
void** clo50347 = alloc_clo(lam48702_fptr, 10);

//setting env list
clo50347[1] = car;
clo50347[2] = n;
clo50347[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo50347[4] = take_u45helper;
clo50347[5] = _u45;
clo50347[6] = cons;
clo50347[7] = reverse;
clo50347[8] = kont48410;
clo50347[9] = lst;
clo50347[10] = cdr;
void* f4841648537 = encode_clo(clo50347);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4841648537;
arg_buffer[3] = n;
arg_buffer[4] = a4830648536;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam48706_fptr() // lam48706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48707 = arg_buffer[1];
//reading env and args
void* a4831448551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48707))[4];
//not do dummy comment
void* n = (decode_clo(env48707))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48707))[2];
//not do dummy comment
void* kont48417 = (decode_clo(env48707))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont48417;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4831448551;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48706 = encode_clo(alloc_clo(lam48706_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48708 = arg_buffer[1];
//reading env and args
void* kont48417 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50349 = alloc_clo(lam48706_fptr, 4);

//setting env list
clo50349[1] = kont48417;
clo50349[2] = take_u45helper;
clo50349[3] = n;
clo50349[4] = lst;
void* f4841848550 = encode_clo(clo50349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4841848550;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam48710_fptr() // lam48710 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48711 = arg_buffer[1];
//reading env and args
void* a4831948559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4831748555 = (decode_clo(env48711))[3];
//not do dummy comment
void* _u43 = (decode_clo(env48711))[2];
//not do dummy comment
void* kont48419 = (decode_clo(env48711))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont48419;
arg_buffer[3] = a4831748555;
arg_buffer[4] = a4831948559;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48710 = encode_clo(alloc_clo(lam48710_fptr, 0));

void* lam48712_fptr() // lam48712 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48713 = arg_buffer[1];
//reading env and args
void* a4831848557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env48713))[4];
//not do dummy comment
void* a4831748555 = (decode_clo(env48713))[3];
//not do dummy comment
void* _u43 = (decode_clo(env48713))[2];
//not do dummy comment
void* kont48419 = (decode_clo(env48713))[1];

//creating new closure instance
void** clo50351 = alloc_clo(lam48710_fptr, 3);

//setting env list
clo50351[1] = kont48419;
clo50351[2] = _u43;
clo50351[3] = a4831748555;
void* f4842048558 = encode_clo(clo50351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4842048558;
arg_buffer[3] = a4831848557;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48712 = encode_clo(alloc_clo(lam48712_fptr, 0));

void* lam48715_fptr() // lam48715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48716 = arg_buffer[1];
//reading env and args
void* a4831548553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48716))[5];
//not do dummy comment
void* lst = (decode_clo(env48716))[4];
//not do dummy comment
void* length = (decode_clo(env48716))[3];
//not do dummy comment
void* _u43 = (decode_clo(env48716))[2];
//not do dummy comment
void* kont48419 = (decode_clo(env48716))[1];

//if-clause
bool if_guard50352 = is_true(a4831548553);
if(if_guard50352)
{
mpz_t* mpzvar50353 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50353, "0", 10);
void* x4831648554 = encode_mpz(mpzvar50353);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48419);
arg_buffer[2] = x4831648554;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48419))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar50354 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50354, "1", 10);
void* a4831748555 = encode_mpz(mpzvar50354);

//creating new closure instance
void** clo50356 = alloc_clo(lam48712_fptr, 4);

//setting env list
clo50356[1] = kont48419;
clo50356[2] = _u43;
clo50356[3] = a4831748555;
clo50356[4] = length;
void* f4842148556 = encode_clo(clo50356);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4842148556;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48715 = encode_clo(alloc_clo(lam48715_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48717 = arg_buffer[1];
//reading env and args
void* kont48419 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50358 = alloc_clo(lam48715_fptr, 5);

//setting env list
clo50358[1] = kont48419;
clo50358[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo50358[3] = length;
clo50358[4] = lst;
clo50358[5] = cdr;
void* f4842248552 = encode_clo(clo50358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4842248552;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam48718_fptr() // lam48718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48719 = arg_buffer[1];
//reading env and args
void* x4832148563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48423 = (decode_clo(env48719))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48423);
arg_buffer[2] = x4832148563;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48423))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48718 = encode_clo(alloc_clo(lam48718_fptr, 0));

void* lam48720_fptr() // lam48720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48721 = arg_buffer[1];
//reading env and args
void* a4832548571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env48721))[3];
//not do dummy comment
void* a4832348567 = (decode_clo(env48721))[2];
//not do dummy comment
void* kont48423 = (decode_clo(env48721))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48423;
arg_buffer[3] = a4832348567;
arg_buffer[4] = a4832548571;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48720 = encode_clo(alloc_clo(lam48720_fptr, 0));

void* lam48722_fptr() // lam48722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48723 = arg_buffer[1];
//reading env and args
void* a4832448569 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env48723))[5];
//not do dummy comment
void* proc = (decode_clo(env48723))[4];
//not do dummy comment
void* cons = (decode_clo(env48723))[3];
//not do dummy comment
void* a4832348567 = (decode_clo(env48723))[2];
//not do dummy comment
void* kont48423 = (decode_clo(env48723))[1];

//creating new closure instance
void** clo50360 = alloc_clo(lam48720_fptr, 3);

//setting env list
clo50360[1] = kont48423;
clo50360[2] = a4832348567;
clo50360[3] = cons;
void* f4842548570 = encode_clo(clo50360);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4842548570;
arg_buffer[3] = proc;
arg_buffer[4] = a4832448569;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48722 = encode_clo(alloc_clo(lam48722_fptr, 0));

void* lam48724_fptr() // lam48724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48725 = arg_buffer[1];
//reading env and args
void* a4832348567 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48725))[6];
//not do dummy comment
void* kont48423 = (decode_clo(env48725))[5];
//not do dummy comment
void* lst = (decode_clo(env48725))[4];
//not do dummy comment
void* map = (decode_clo(env48725))[3];
//not do dummy comment
void* proc = (decode_clo(env48725))[2];
//not do dummy comment
void* cons = (decode_clo(env48725))[1];

//creating new closure instance
void** clo50362 = alloc_clo(lam48722_fptr, 5);

//setting env list
clo50362[1] = kont48423;
clo50362[2] = a4832348567;
clo50362[3] = cons;
clo50362[4] = proc;
clo50362[5] = map;
void* f4842648568 = encode_clo(clo50362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4842648568;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48724 = encode_clo(alloc_clo(lam48724_fptr, 0));

void* lam48726_fptr() // lam48726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48727 = arg_buffer[1];
//reading env and args
void* a4832248565 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48727))[6];
//not do dummy comment
void* kont48423 = (decode_clo(env48727))[5];
//not do dummy comment
void* lst = (decode_clo(env48727))[4];
//not do dummy comment
void* map = (decode_clo(env48727))[3];
//not do dummy comment
void* proc = (decode_clo(env48727))[2];
//not do dummy comment
void* cons = (decode_clo(env48727))[1];

//creating new closure instance
void** clo50364 = alloc_clo(lam48724_fptr, 6);

//setting env list
clo50364[1] = cons;
clo50364[2] = proc;
clo50364[3] = map;
clo50364[4] = lst;
clo50364[5] = kont48423;
clo50364[6] = cdr;
void* f4842748566 = encode_clo(clo50364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4842748566;
arg_buffer[3] = a4832248565;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48726 = encode_clo(alloc_clo(lam48726_fptr, 0));

void* lam48728_fptr() // lam48728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48729 = arg_buffer[1];
//reading env and args
void* a4832048561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48423 = (decode_clo(env48729))[8];
//not do dummy comment
void* lst = (decode_clo(env48729))[7];
//not do dummy comment
void* map = (decode_clo(env48729))[6];
//not do dummy comment
void* proc = (decode_clo(env48729))[5];
//not do dummy comment
void* car = (decode_clo(env48729))[4];
//not do dummy comment
void* cons = (decode_clo(env48729))[3];
//not do dummy comment
void* list = (decode_clo(env48729))[2];
//not do dummy comment
void* cdr = (decode_clo(env48729))[1];

//if-clause
bool if_guard50365 = is_true(a4832048561);
if(if_guard50365)
{

//creating new closure instance
void** clo50367 = alloc_clo(lam48718_fptr, 1);

//setting env list
clo50367[1] = kont48423;
void* f4842448562 = encode_clo(clo50367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4842448562;
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
void** clo50369 = alloc_clo(lam48726_fptr, 6);

//setting env list
clo50369[1] = cons;
clo50369[2] = proc;
clo50369[3] = map;
clo50369[4] = lst;
clo50369[5] = kont48423;
clo50369[6] = cdr;
void* f4842848564 = encode_clo(clo50369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4842848564;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48728 = encode_clo(alloc_clo(lam48728_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48730 = arg_buffer[1];
//reading env and args
void* kont48423 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50371 = alloc_clo(lam48728_fptr, 8);

//setting env list
clo50371[1] = cdr;
clo50371[2] = list;
clo50371[3] = cons;
clo50371[4] = car;
clo50371[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo50371[6] = map;
clo50371[7] = lst;
clo50371[8] = kont48423;
void* f4842948560 = encode_clo(clo50371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4842948560;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam48731_fptr() // lam48731 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48732 = arg_buffer[1];
//reading env and args
void* x4832748575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48430 = (decode_clo(env48732))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48430);
arg_buffer[2] = x4832748575;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48430))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48731 = encode_clo(alloc_clo(lam48731_fptr, 0));

void* lam48733_fptr() // lam48733 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48734 = arg_buffer[1];
//reading env and args
void* a4833248585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4833048581 = (decode_clo(env48734))[3];
//not do dummy comment
void* kont48430 = (decode_clo(env48734))[2];
//not do dummy comment
void* cons = (decode_clo(env48734))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48430;
arg_buffer[3] = a4833048581;
arg_buffer[4] = a4833248585;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48733 = encode_clo(alloc_clo(lam48733_fptr, 0));

void* lam48735_fptr() // lam48735 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48736 = arg_buffer[1];
//reading env and args
void* a4833148583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4833048581 = (decode_clo(env48736))[5];
//not do dummy comment
void* op = (decode_clo(env48736))[4];
//not do dummy comment
void* kont48430 = (decode_clo(env48736))[3];
//not do dummy comment
void* filter = (decode_clo(env48736))[2];
//not do dummy comment
void* cons = (decode_clo(env48736))[1];

//creating new closure instance
void** clo50373 = alloc_clo(lam48733_fptr, 3);

//setting env list
clo50373[1] = cons;
clo50373[2] = kont48430;
clo50373[3] = a4833048581;
void* f4843248584 = encode_clo(clo50373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4843248584;
arg_buffer[3] = op;
arg_buffer[4] = a4833148583;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48735 = encode_clo(alloc_clo(lam48735_fptr, 0));

void* lam48737_fptr() // lam48737 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48738 = arg_buffer[1];
//reading env and args
void* a4833048581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48738))[6];
//not do dummy comment
void* lst = (decode_clo(env48738))[5];
//not do dummy comment
void* op = (decode_clo(env48738))[4];
//not do dummy comment
void* kont48430 = (decode_clo(env48738))[3];
//not do dummy comment
void* filter = (decode_clo(env48738))[2];
//not do dummy comment
void* cons = (decode_clo(env48738))[1];

//creating new closure instance
void** clo50375 = alloc_clo(lam48735_fptr, 5);

//setting env list
clo50375[1] = cons;
clo50375[2] = filter;
clo50375[3] = kont48430;
clo50375[4] = op;
clo50375[5] = a4833048581;
void* f4843348582 = encode_clo(clo50375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4843348582;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48737 = encode_clo(alloc_clo(lam48737_fptr, 0));

void* lam48739_fptr() // lam48739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48740 = arg_buffer[1];
//reading env and args
void* a4833348587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env48740))[3];
//not do dummy comment
void* kont48430 = (decode_clo(env48740))[2];
//not do dummy comment
void* filter = (decode_clo(env48740))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont48430;
arg_buffer[3] = op;
arg_buffer[4] = a4833348587;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48739 = encode_clo(alloc_clo(lam48739_fptr, 0));

void* lam48741_fptr() // lam48741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48742 = arg_buffer[1];
//reading env and args
void* a4832948579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48742))[7];
//not do dummy comment
void* lst = (decode_clo(env48742))[6];
//not do dummy comment
void* op = (decode_clo(env48742))[5];
//not do dummy comment
void* kont48430 = (decode_clo(env48742))[4];
//not do dummy comment
void* cons = (decode_clo(env48742))[3];
//not do dummy comment
void* filter = (decode_clo(env48742))[2];
//not do dummy comment
void* car = (decode_clo(env48742))[1];

//if-clause
bool if_guard50376 = is_true(a4832948579);
if(if_guard50376)
{

//creating new closure instance
void** clo50378 = alloc_clo(lam48737_fptr, 6);

//setting env list
clo50378[1] = cons;
clo50378[2] = filter;
clo50378[3] = kont48430;
clo50378[4] = op;
clo50378[5] = lst;
clo50378[6] = cdr;
void* f4843448580 = encode_clo(clo50378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4843448580;
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
void** clo50380 = alloc_clo(lam48739_fptr, 3);

//setting env list
clo50380[1] = filter;
clo50380[2] = kont48430;
clo50380[3] = op;
void* f4843548586 = encode_clo(clo50380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4843548586;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48741 = encode_clo(alloc_clo(lam48741_fptr, 0));

void* lam48743_fptr() // lam48743 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48744 = arg_buffer[1];
//reading env and args
void* a4832848577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48744))[7];
//not do dummy comment
void* lst = (decode_clo(env48744))[6];
//not do dummy comment
void* op = (decode_clo(env48744))[5];
//not do dummy comment
void* kont48430 = (decode_clo(env48744))[4];
//not do dummy comment
void* cons = (decode_clo(env48744))[3];
//not do dummy comment
void* filter = (decode_clo(env48744))[2];
//not do dummy comment
void* car = (decode_clo(env48744))[1];

//creating new closure instance
void** clo50382 = alloc_clo(lam48741_fptr, 7);

//setting env list
clo50382[1] = car;
clo50382[2] = filter;
clo50382[3] = cons;
clo50382[4] = kont48430;
clo50382[5] = op;
clo50382[6] = lst;
clo50382[7] = cdr;
void* f4843648578 = encode_clo(clo50382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4843648578;
arg_buffer[3] = a4832848577;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48743 = encode_clo(alloc_clo(lam48743_fptr, 0));

void* lam48745_fptr() // lam48745 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48746 = arg_buffer[1];
//reading env and args
void* a4832648573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48746))[8];
//not do dummy comment
void* op = (decode_clo(env48746))[7];
//not do dummy comment
void* kont48430 = (decode_clo(env48746))[6];
//not do dummy comment
void* cons = (decode_clo(env48746))[5];
//not do dummy comment
void* list = (decode_clo(env48746))[4];
//not do dummy comment
void* cdr = (decode_clo(env48746))[3];
//not do dummy comment
void* filter = (decode_clo(env48746))[2];
//not do dummy comment
void* car = (decode_clo(env48746))[1];

//if-clause
bool if_guard50383 = is_true(a4832648573);
if(if_guard50383)
{

//creating new closure instance
void** clo50385 = alloc_clo(lam48731_fptr, 1);

//setting env list
clo50385[1] = kont48430;
void* f4843148574 = encode_clo(clo50385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4843148574;
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
void** clo50387 = alloc_clo(lam48743_fptr, 7);

//setting env list
clo50387[1] = car;
clo50387[2] = filter;
clo50387[3] = cons;
clo50387[4] = kont48430;
clo50387[5] = op;
clo50387[6] = lst;
clo50387[7] = cdr;
void* f4843748576 = encode_clo(clo50387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4843748576;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48745 = encode_clo(alloc_clo(lam48745_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48747 = arg_buffer[1];
//reading env and args
void* kont48430 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50389 = alloc_clo(lam48745_fptr, 8);

//setting env list
clo50389[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo50389[2] = filter;
clo50389[3] = cdr;
clo50389[4] = list;
clo50389[5] = cons;
clo50389[6] = kont48430;
clo50389[7] = op;
clo50389[8] = lst;
void* f4843848572 = encode_clo(clo50389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4843848572;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam48748_fptr() // lam48748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48749 = arg_buffer[1];
//reading env and args
void* a4833848595 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48439 = (decode_clo(env48749))[3];
//not do dummy comment
void* drop = (decode_clo(env48749))[2];
//not do dummy comment
void* a4833648592 = (decode_clo(env48749))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont48439;
arg_buffer[3] = a4833648592;
arg_buffer[4] = a4833848595;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48748 = encode_clo(alloc_clo(lam48748_fptr, 0));

void* lam48751_fptr() // lam48751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48752 = arg_buffer[1];
//reading env and args
void* a4833648592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48439 = (decode_clo(env48752))[4];
//not do dummy comment
void* drop = (decode_clo(env48752))[3];
//not do dummy comment
void* n = (decode_clo(env48752))[2];
//not do dummy comment
void* _u45 = (decode_clo(env48752))[1];
mpz_t* mpzvar50390 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50390, "1", 10);
void* a4833748593 = encode_mpz(mpzvar50390);

//creating new closure instance
void** clo50392 = alloc_clo(lam48748_fptr, 3);

//setting env list
clo50392[1] = a4833648592;
clo50392[2] = drop;
clo50392[3] = kont48439;
void* f4844048594 = encode_clo(clo50392);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4844048594;
arg_buffer[3] = n;
arg_buffer[4] = a4833748593;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48751 = encode_clo(alloc_clo(lam48751_fptr, 0));

void* lam48753_fptr() // lam48753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48754 = arg_buffer[1];
//reading env and args
void* a4833548590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48754))[6];
//not do dummy comment
void* kont48439 = (decode_clo(env48754))[5];
//not do dummy comment
void* n = (decode_clo(env48754))[4];
//not do dummy comment
void* _u45 = (decode_clo(env48754))[3];
//not do dummy comment
void* lst = (decode_clo(env48754))[2];
//not do dummy comment
void* drop = (decode_clo(env48754))[1];

//if-clause
bool if_guard50393 = is_true(a4833548590);
if(if_guard50393)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48439);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48439))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50395 = alloc_clo(lam48751_fptr, 4);

//setting env list
clo50395[1] = _u45;
clo50395[2] = n;
clo50395[3] = drop;
clo50395[4] = kont48439;
void* f4844148591 = encode_clo(clo50395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4844148591;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48753 = encode_clo(alloc_clo(lam48753_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48756 = arg_buffer[1];
//reading env and args
void* kont48439 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar50396 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50396, "0", 10);
void* a4833448588 = encode_mpz(mpzvar50396);

//creating new closure instance
void** clo50398 = alloc_clo(lam48753_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo50398[1] = drop;
clo50398[2] = lst;
clo50398[3] = _u45;
clo50398[4] = n;
clo50398[5] = kont48439;
clo50398[6] = cdr;
void* f4844248589 = encode_clo(clo50398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4844248589;
arg_buffer[3] = n;
arg_buffer[4] = a4833448588;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam48757_fptr() // lam48757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48758 = arg_buffer[1];
//reading env and args
void* a4834248603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4834048599 = (decode_clo(env48758))[3];
//not do dummy comment
void* kont48443 = (decode_clo(env48758))[2];
//not do dummy comment
void* proc = (decode_clo(env48758))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont48443;
arg_buffer[3] = a4834048599;
arg_buffer[4] = a4834248603;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48757 = encode_clo(alloc_clo(lam48757_fptr, 0));

void* lam48759_fptr() // lam48759 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48760 = arg_buffer[1];
//reading env and args
void* a4834148601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4834048599 = (decode_clo(env48760))[5];
//not do dummy comment
void* foldr = (decode_clo(env48760))[4];
//not do dummy comment
void* kont48443 = (decode_clo(env48760))[3];
//not do dummy comment
void* proc = (decode_clo(env48760))[2];
//not do dummy comment
void* acc = (decode_clo(env48760))[1];

//creating new closure instance
void** clo50400 = alloc_clo(lam48757_fptr, 3);

//setting env list
clo50400[1] = proc;
clo50400[2] = kont48443;
clo50400[3] = a4834048599;
void* f4844448602 = encode_clo(clo50400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4844448602;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4834148601;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48759 = encode_clo(alloc_clo(lam48759_fptr, 0));

void* lam48761_fptr() // lam48761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48762 = arg_buffer[1];
//reading env and args
void* a4834048599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48762))[6];
//not do dummy comment
void* kont48443 = (decode_clo(env48762))[5];
//not do dummy comment
void* foldr = (decode_clo(env48762))[4];
//not do dummy comment
void* lst = (decode_clo(env48762))[3];
//not do dummy comment
void* proc = (decode_clo(env48762))[2];
//not do dummy comment
void* acc = (decode_clo(env48762))[1];

//creating new closure instance
void** clo50402 = alloc_clo(lam48759_fptr, 5);

//setting env list
clo50402[1] = acc;
clo50402[2] = proc;
clo50402[3] = kont48443;
clo50402[4] = foldr;
clo50402[5] = a4834048599;
void* f4844548600 = encode_clo(clo50402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4844548600;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48761 = encode_clo(alloc_clo(lam48761_fptr, 0));

void* lam48763_fptr() // lam48763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48764 = arg_buffer[1];
//reading env and args
void* a4833948597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48764))[7];
//not do dummy comment
void* kont48443 = (decode_clo(env48764))[6];
//not do dummy comment
void* car = (decode_clo(env48764))[5];
//not do dummy comment
void* foldr = (decode_clo(env48764))[4];
//not do dummy comment
void* lst = (decode_clo(env48764))[3];
//not do dummy comment
void* proc = (decode_clo(env48764))[2];
//not do dummy comment
void* acc = (decode_clo(env48764))[1];

//if-clause
bool if_guard50403 = is_true(a4833948597);
if(if_guard50403)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48443);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48443))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50405 = alloc_clo(lam48761_fptr, 6);

//setting env list
clo50405[1] = acc;
clo50405[2] = proc;
clo50405[3] = lst;
clo50405[4] = foldr;
clo50405[5] = kont48443;
clo50405[6] = cdr;
void* f4844648598 = encode_clo(clo50405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4844648598;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48763 = encode_clo(alloc_clo(lam48763_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48765 = arg_buffer[1];
//reading env and args
void* kont48443 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo50407 = alloc_clo(lam48763_fptr, 7);

//setting env list
clo50407[1] = acc;
clo50407[2] = proc;
clo50407[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo50407[4] = foldr;
clo50407[5] = car;
clo50407[6] = kont48443;
clo50407[7] = cdr;
void* f4844748596 = encode_clo(clo50407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4844748596;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam48766_fptr() // lam48766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48767 = arg_buffer[1];
//reading env and args
void* a4834648611 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4834448607 = (decode_clo(env48767))[3];
//not do dummy comment
void* kont48448 = (decode_clo(env48767))[2];
//not do dummy comment
void* cons = (decode_clo(env48767))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48448;
arg_buffer[3] = a4834448607;
arg_buffer[4] = a4834648611;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48766 = encode_clo(alloc_clo(lam48766_fptr, 0));

void* lam48768_fptr() // lam48768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48769 = arg_buffer[1];
//reading env and args
void* a4834548609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env48769))[5];
//not do dummy comment
void* a4834448607 = (decode_clo(env48769))[4];
//not do dummy comment
void* kont48448 = (decode_clo(env48769))[3];
//not do dummy comment
void* lst2 = (decode_clo(env48769))[2];
//not do dummy comment
void* cons = (decode_clo(env48769))[1];

//creating new closure instance
void** clo50409 = alloc_clo(lam48766_fptr, 3);

//setting env list
clo50409[1] = cons;
clo50409[2] = kont48448;
clo50409[3] = a4834448607;
void* f4844948610 = encode_clo(clo50409);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4844948610;
arg_buffer[3] = a4834548609;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48768 = encode_clo(alloc_clo(lam48768_fptr, 0));

void* lam48770_fptr() // lam48770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48771 = arg_buffer[1];
//reading env and args
void* a4834448607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48771))[6];
//not do dummy comment
void* append = (decode_clo(env48771))[5];
//not do dummy comment
void* kont48448 = (decode_clo(env48771))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48771))[3];
//not do dummy comment
void* lst1 = (decode_clo(env48771))[2];
//not do dummy comment
void* cons = (decode_clo(env48771))[1];

//creating new closure instance
void** clo50411 = alloc_clo(lam48768_fptr, 5);

//setting env list
clo50411[1] = cons;
clo50411[2] = lst2;
clo50411[3] = kont48448;
clo50411[4] = a4834448607;
clo50411[5] = append;
void* f4845048608 = encode_clo(clo50411);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4845048608;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48770 = encode_clo(alloc_clo(lam48770_fptr, 0));

void* lam48772_fptr() // lam48772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48773 = arg_buffer[1];
//reading env and args
void* a4834348605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48773))[7];
//not do dummy comment
void* append = (decode_clo(env48773))[6];
//not do dummy comment
void* kont48448 = (decode_clo(env48773))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48773))[4];
//not do dummy comment
void* cons = (decode_clo(env48773))[3];
//not do dummy comment
void* lst1 = (decode_clo(env48773))[2];
//not do dummy comment
void* car = (decode_clo(env48773))[1];

//if-clause
bool if_guard50412 = is_true(a4834348605);
if(if_guard50412)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48448);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48448))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50414 = alloc_clo(lam48770_fptr, 6);

//setting env list
clo50414[1] = cons;
clo50414[2] = lst1;
clo50414[3] = lst2;
clo50414[4] = kont48448;
clo50414[5] = append;
clo50414[6] = cdr;
void* f4845148606 = encode_clo(clo50414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4845148606;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48772 = encode_clo(alloc_clo(lam48772_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48774 = arg_buffer[1];
//reading env and args
void* kont48448 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50416 = alloc_clo(lam48772_fptr, 7);

//setting env list
clo50416[1] = car;
clo50416[2] = lst1;
clo50416[3] = cons;
clo50416[4] = lst2;
clo50416[5] = kont48448;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo50416[6] = append;
clo50416[7] = cdr;
void* f4845248604 = encode_clo(clo50416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4845248604;
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
void* _48775 = arg_buffer[1];
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

void* kont4845348612 = prim_car(lst);
void* lst48613 = prim_cdr(lst);
void* x4834748614 = apply_prim_hash(lst48613);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4845348612);
arg_buffer[2] = x4834748614;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4845348612))[0]);
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
void* _48776 = arg_buffer[1];
//reading env and args
void* kont48455 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4834848615 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48455);
arg_buffer[2] = x4834848615;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48455))[0]);
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
void* _48777 = arg_buffer[1];
//reading env and args
void* kont48456 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4834948616 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48456);
arg_buffer[2] = x4834948616;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48456))[0]);
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
void* _48778 = arg_buffer[1];
//reading env and args
void* kont48457 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4835048617 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48457);
arg_buffer[2] = x4835048617;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48457))[0]);
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
void* _48779 = arg_buffer[1];
//reading env and args
void* kont48458 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4835148618 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48458);
arg_buffer[2] = x4835148618;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48458))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam48784_fptr() // lam48784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48785 = arg_buffer[1];
//reading env and args
void* a4835848627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env48785))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env48785))[2];
//not do dummy comment
void* kont48459 = (decode_clo(env48785))[1];

//if-clause
bool if_guard50417 = is_true(a4835848627);
if(if_guard50417)
{
mpz_t* mpzvar50418 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50418, "3", 10);
void* a4835948628 = encode_mpz(mpzvar50418);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont48459;
arg_buffer[3] = a4835948628;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar50419 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50419, "2", 10);
void* a4836048629 = encode_mpz(mpzvar50419);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont48459;
arg_buffer[3] = a4836048629;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48784 = encode_clo(alloc_clo(lam48784_fptr, 0));

void* lam48787_fptr() // lam48787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48788 = arg_buffer[1];
//reading env and args
void* a4835448622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env48788))[4];
//not do dummy comment
void* even_u63 = (decode_clo(env48788))[3];
//not do dummy comment
void* kont48459 = (decode_clo(env48788))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env48788))[1];

//if-clause
bool if_guard50420 = is_true(a4835448622);
if(if_guard50420)
{
mpz_t* mpzvar50421 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50421, "1", 10);
void* a4835548623 = encode_mpz(mpzvar50421);
mpz_t* mpzvar50422 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50422, "2", 10);
void* a4835648624 = encode_mpz(mpzvar50422);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont48459;
arg_buffer[3] = a4835548623;
arg_buffer[4] = a4835648624;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar50423 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50423, "3", 10);
void* a4835748625 = encode_mpz(mpzvar50423);

//creating new closure instance
void** clo50425 = alloc_clo(lam48784_fptr, 3);

//setting env list
clo50425[1] = kont48459;
clo50425[2] = even_u63;
clo50425[3] = odd_u63;
void* f4846048626 = encode_clo(clo50425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f4846048626;
arg_buffer[3] = a4835748625;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48787 = encode_clo(alloc_clo(lam48787_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48791 = arg_buffer[1];
//reading env and args
void* kont48459 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar50426 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50426, "1", 10);
void* a4835248619 = encode_mpz(mpzvar50426);
mpz_t* mpzvar50427 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50427, "2", 10);
void* a4835348620 = encode_mpz(mpzvar50427);

//creating new closure instance
void** clo50429 = alloc_clo(lam48787_fptr, 4);

//setting env list
clo50429[1] = equal_u63;
clo50429[2] = kont48459;
clo50429[3] = even_u63;
clo50429[4] = odd_u63;
void* f4846148621 = encode_clo(clo50429);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4846148621;
arg_buffer[3] = a4835248619;
arg_buffer[4] = a4835348620;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam48792_fptr() // lam48792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48793 = arg_buffer[1];
//reading env and args
void* x4836148631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48462 = (decode_clo(env48793))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48462);
arg_buffer[2] = x4836148631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48462))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48792 = encode_clo(alloc_clo(lam48792_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48794 = arg_buffer[1];
//reading env and args
void* kont48462 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo50431 = alloc_clo(lam48792_fptr, 1);

//setting env list
clo50431[1] = kont48462;
void* f4846348630 = encode_clo(clo50431);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4846348630;
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

