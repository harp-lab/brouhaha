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
void* _59671 = arg_buffer[1];
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

void* kont5940859508 = prim_car(lst);
void* lst59509 = prim_cdr(lst);
void* x5931859510 = apply_prim__u43(lst59509);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5940859508);
arg_buffer[2] = x5931859510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5940859508))[0]);
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
void* _59672 = arg_buffer[1];
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

void* kont5941059511 = prim_car(lst);
void* lst59512 = prim_cdr(lst);
void* x5931959513 = apply_prim__u45(lst59512);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5941059511);
arg_buffer[2] = x5931959513;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5941059511))[0]);
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
void* _59673 = arg_buffer[1];
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

void* kont5941259514 = prim_car(lst);
void* lst59515 = prim_cdr(lst);
void* x5932059516 = apply_prim__u42(lst59515);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5941259514);
arg_buffer[2] = x5932059516;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5941259514))[0]);
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
void* _59674 = arg_buffer[1];
//reading env and args
void* kont59414 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5932159517 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59414);
arg_buffer[2] = x5932159517;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59414))[0]);
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
void* _59675 = arg_buffer[1];
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

void* kont5941559518 = prim_car(lst);
void* lst59519 = prim_cdr(lst);
void* x5932259520 = apply_prim__u47(lst59519);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5941559518);
arg_buffer[2] = x5932259520;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5941559518))[0]);
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
void* _59676 = arg_buffer[1];
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

void* kont5941759521 = prim_car(lst);
void* lst59522 = prim_cdr(lst);
void* x5932359523 = apply_prim__u61(lst59522);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5941759521);
arg_buffer[2] = x5932359523;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5941759521))[0]);
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
void* _59677 = arg_buffer[1];
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

void* kont5941959524 = prim_car(lst);
void* lst59525 = prim_cdr(lst);
void* x5932459526 = apply_prim__u62(lst59525);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5941959524);
arg_buffer[2] = x5932459526;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5941959524))[0]);
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
void* _59678 = arg_buffer[1];
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

void* kont5942159527 = prim_car(lst);
void* lst59528 = prim_cdr(lst);
void* x5932559529 = apply_prim__u60(lst59528);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5942159527);
arg_buffer[2] = x5932559529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5942159527))[0]);
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
void* _59679 = arg_buffer[1];
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

void* kont5942359530 = prim_car(lst);
void* lst59531 = prim_cdr(lst);
void* x5932659532 = apply_prim__u60_u61(lst59531);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5942359530);
arg_buffer[2] = x5932659532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5942359530))[0]);
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
void* _59680 = arg_buffer[1];
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

void* kont5942559533 = prim_car(lst);
void* lst59534 = prim_cdr(lst);
void* x5932759535 = apply_prim__u62_u61(lst59534);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5942559533);
arg_buffer[2] = x5932759535;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5942559533))[0]);
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
void* _59681 = arg_buffer[1];
//reading env and args
void* kont59427 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5932859536 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59427);
arg_buffer[2] = x5932859536;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59427))[0]);
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
void* _59682 = arg_buffer[1];
//reading env and args
void* kont59428 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5932959537 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59428);
arg_buffer[2] = x5932959537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59428))[0]);
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
void* _59683 = arg_buffer[1];
//reading env and args
void* kont59429 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5933059538 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59429);
arg_buffer[2] = x5933059538;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59429))[0]);
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
void* _59684 = arg_buffer[1];
//reading env and args
void* kont59430 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5933159539 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59430);
arg_buffer[2] = x5933159539;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59430))[0]);
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
void* _59685 = arg_buffer[1];
//reading env and args
void* kont59431 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5933259540 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59431);
arg_buffer[2] = x5933259540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59431))[0]);
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
void* _59686 = arg_buffer[1];
//reading env and args
void* kont59432 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5933359541 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59432);
arg_buffer[2] = x5933359541;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59432))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam59687_fptr() // lam59687 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59688 = arg_buffer[1];
//reading env and args
void* a5933659545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59433 = (decode_clo(env59688))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env59688))[2];
//not do dummy comment
void* a5933459542 = (decode_clo(env59688))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont59433;
arg_buffer[3] = a5933459542;
arg_buffer[4] = a5933659545;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59687 = encode_clo(alloc_clo(lam59687_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59691 = arg_buffer[1];
//reading env and args
void* kont59433 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar60369 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60369, "0", 10);
void* a5933459542 = encode_mpz(mpzvar60369);
mpz_t* mpzvar60370 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60370, "2", 10);
void* a5933559543 = encode_mpz(mpzvar60370);

//creating new closure instance
void** clo60372 = alloc_clo(lam59687_fptr, 3);

//setting env list
clo60372[1] = a5933459542;
clo60372[2] = equal_u63;
clo60372[3] = kont59433;
void* f5943459544 = encode_clo(clo60372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5943459544;
arg_buffer[3] = x;
arg_buffer[4] = a5933559543;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam59692_fptr() // lam59692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59693 = arg_buffer[1];
//reading env and args
void* a5933959549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5933759546 = (decode_clo(env59693))[3];
//not do dummy comment
void* kont59435 = (decode_clo(env59693))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env59693))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont59435;
arg_buffer[3] = a5933759546;
arg_buffer[4] = a5933959549;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59692 = encode_clo(alloc_clo(lam59692_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59696 = arg_buffer[1];
//reading env and args
void* kont59435 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar60373 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60373, "1", 10);
void* a5933759546 = encode_mpz(mpzvar60373);
mpz_t* mpzvar60374 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60374, "2", 10);
void* a5933859547 = encode_mpz(mpzvar60374);

//creating new closure instance
void** clo60376 = alloc_clo(lam59692_fptr, 3);

//setting env list
clo60376[1] = equal_u63;
clo60376[2] = kont59435;
clo60376[3] = a5933759546;
void* f5943659548 = encode_clo(clo60376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5943659548;
arg_buffer[3] = x;
arg_buffer[4] = a5933859547;
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
void* _59697 = arg_buffer[1];
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

void* kont5943759550 = prim_car(x);
void* x59551 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5943759550);
arg_buffer[2] = x59551;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5943759550))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam59700_fptr() // lam59700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59701 = arg_buffer[1];
//reading env and args
void* a5934559561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59439 = (decode_clo(env59701))[3];
//not do dummy comment
void* x = (decode_clo(env59701))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59701))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont59439;
arg_buffer[3] = x;
arg_buffer[4] = a5934559561;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59700 = encode_clo(alloc_clo(lam59700_fptr, 0));

void* lam59702_fptr() // lam59702 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59703 = arg_buffer[1];
//reading env and args
void* a5934359558 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59703))[5];
//not do dummy comment
void* lst = (decode_clo(env59703))[4];
//not do dummy comment
void* kont59439 = (decode_clo(env59703))[3];
//not do dummy comment
void* x = (decode_clo(env59703))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59703))[1];

//if-clause
bool if_guard60377 = is_true(a5934359558);
if(if_guard60377)
{
void* x5934459559 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59439);
arg_buffer[2] = x5934459559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59439))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60379 = alloc_clo(lam59700_fptr, 3);

//setting env list
clo60379[1] = member_u63;
clo60379[2] = x;
clo60379[3] = kont59439;
void* f5944059560 = encode_clo(clo60379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5944059560;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59702 = encode_clo(alloc_clo(lam59702_fptr, 0));

void* lam59704_fptr() // lam59704 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59705 = arg_buffer[1];
//reading env and args
void* a5934259556 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59705))[6];
//not do dummy comment
void* lst = (decode_clo(env59705))[5];
//not do dummy comment
void* kont59439 = (decode_clo(env59705))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env59705))[3];
//not do dummy comment
void* x = (decode_clo(env59705))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59705))[1];

//creating new closure instance
void** clo60381 = alloc_clo(lam59702_fptr, 5);

//setting env list
clo60381[1] = member_u63;
clo60381[2] = x;
clo60381[3] = kont59439;
clo60381[4] = lst;
clo60381[5] = cdr;
void* f5944159557 = encode_clo(clo60381);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5944159557;
arg_buffer[3] = a5934259556;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59704 = encode_clo(alloc_clo(lam59704_fptr, 0));

void* lam59706_fptr() // lam59706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59707 = arg_buffer[1];
//reading env and args
void* a5934059553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59707))[7];
//not do dummy comment
void* lst = (decode_clo(env59707))[6];
//not do dummy comment
void* kont59439 = (decode_clo(env59707))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env59707))[4];
//not do dummy comment
void* x = (decode_clo(env59707))[3];
//not do dummy comment
void* car = (decode_clo(env59707))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59707))[1];

//if-clause
bool if_guard60382 = is_true(a5934059553);
if(if_guard60382)
{
void* x5934159554 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59439);
arg_buffer[2] = x5934159554;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59439))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60384 = alloc_clo(lam59704_fptr, 6);

//setting env list
clo60384[1] = member_u63;
clo60384[2] = x;
clo60384[3] = equal_u63;
clo60384[4] = kont59439;
clo60384[5] = lst;
clo60384[6] = cdr;
void* f5944259555 = encode_clo(clo60384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5944259555;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59706 = encode_clo(alloc_clo(lam59706_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59708 = arg_buffer[1];
//reading env and args
void* kont59439 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60386 = alloc_clo(lam59706_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo60386[1] = member_u63;
clo60386[2] = car;
clo60386[3] = x;
clo60386[4] = equal_u63;
clo60386[5] = kont59439;
clo60386[6] = lst;
clo60386[7] = cdr;
void* f5944359552 = encode_clo(clo60386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5944359552;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam59709_fptr() // lam59709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59710 = arg_buffer[1];
//reading env and args
void* a5934959569 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5934859567 = (decode_clo(env59710))[4];
//not do dummy comment
void* fun = (decode_clo(env59710))[3];
//not do dummy comment
void* kont59444 = (decode_clo(env59710))[2];
//not do dummy comment
void* foldl = (decode_clo(env59710))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont59444;
arg_buffer[3] = fun;
arg_buffer[4] = a5934859567;
arg_buffer[5] = a5934959569;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59709 = encode_clo(alloc_clo(lam59709_fptr, 0));

void* lam59711_fptr() // lam59711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59712 = arg_buffer[1];
//reading env and args
void* a5934859567 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59712))[5];
//not do dummy comment
void* lst = (decode_clo(env59712))[4];
//not do dummy comment
void* fun = (decode_clo(env59712))[3];
//not do dummy comment
void* kont59444 = (decode_clo(env59712))[2];
//not do dummy comment
void* foldl = (decode_clo(env59712))[1];

//creating new closure instance
void** clo60388 = alloc_clo(lam59709_fptr, 4);

//setting env list
clo60388[1] = foldl;
clo60388[2] = kont59444;
clo60388[3] = fun;
clo60388[4] = a5934859567;
void* f5944559568 = encode_clo(clo60388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5944559568;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59711 = encode_clo(alloc_clo(lam59711_fptr, 0));

void* lam59713_fptr() // lam59713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59714 = arg_buffer[1];
//reading env and args
void* a5934759565 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59714))[6];
//not do dummy comment
void* lst = (decode_clo(env59714))[5];
//not do dummy comment
void* fun = (decode_clo(env59714))[4];
//not do dummy comment
void* foldl = (decode_clo(env59714))[3];
//not do dummy comment
void* kont59444 = (decode_clo(env59714))[2];
//not do dummy comment
void* acc = (decode_clo(env59714))[1];

//creating new closure instance
void** clo60390 = alloc_clo(lam59711_fptr, 5);

//setting env list
clo60390[1] = foldl;
clo60390[2] = kont59444;
clo60390[3] = fun;
clo60390[4] = lst;
clo60390[5] = cdr;
void* f5944659566 = encode_clo(clo60390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5944659566;
arg_buffer[3] = a5934759565;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59713 = encode_clo(alloc_clo(lam59713_fptr, 0));

void* lam59715_fptr() // lam59715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59716 = arg_buffer[1];
//reading env and args
void* a5934659563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59716))[7];
//not do dummy comment
void* lst = (decode_clo(env59716))[6];
//not do dummy comment
void* fun = (decode_clo(env59716))[5];
//not do dummy comment
void* car = (decode_clo(env59716))[4];
//not do dummy comment
void* foldl = (decode_clo(env59716))[3];
//not do dummy comment
void* kont59444 = (decode_clo(env59716))[2];
//not do dummy comment
void* acc = (decode_clo(env59716))[1];

//if-clause
bool if_guard60391 = is_true(a5934659563);
if(if_guard60391)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59444);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59444))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60393 = alloc_clo(lam59713_fptr, 6);

//setting env list
clo60393[1] = acc;
clo60393[2] = kont59444;
clo60393[3] = foldl;
clo60393[4] = fun;
clo60393[5] = lst;
clo60393[6] = cdr;
void* f5944759564 = encode_clo(clo60393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5944759564;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59715 = encode_clo(alloc_clo(lam59715_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59717 = arg_buffer[1];
//reading env and args
void* kont59444 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo60395 = alloc_clo(lam59715_fptr, 7);

//setting env list
clo60395[1] = acc;
clo60395[2] = kont59444;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo60395[3] = foldl;
clo60395[4] = car;
clo60395[5] = fun;
clo60395[6] = lst;
clo60395[7] = cdr;
void* f5944859562 = encode_clo(clo60395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5944859562;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam59718_fptr() // lam59718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59719 = arg_buffer[1];
//reading env and args
void* a5935359577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59449 = (decode_clo(env59719))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59719))[2];
//not do dummy comment
void* a5935159573 = (decode_clo(env59719))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont59449;
arg_buffer[3] = a5935159573;
arg_buffer[4] = a5935359577;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59718 = encode_clo(alloc_clo(lam59718_fptr, 0));

void* lam59720_fptr() // lam59720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59721 = arg_buffer[1];
//reading env and args
void* a5935259575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59449 = (decode_clo(env59721))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59721))[4];
//not do dummy comment
void* cons = (decode_clo(env59721))[3];
//not do dummy comment
void* a5935159573 = (decode_clo(env59721))[2];
//not do dummy comment
void* lst2 = (decode_clo(env59721))[1];

//creating new closure instance
void** clo60397 = alloc_clo(lam59718_fptr, 3);

//setting env list
clo60397[1] = a5935159573;
clo60397[2] = reverse_u45helper;
clo60397[3] = kont59449;
void* f5945059576 = encode_clo(clo60397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5945059576;
arg_buffer[3] = a5935259575;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59720 = encode_clo(alloc_clo(lam59720_fptr, 0));

void* lam59722_fptr() // lam59722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59723 = arg_buffer[1];
//reading env and args
void* a5935159573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59449 = (decode_clo(env59723))[6];
//not do dummy comment
void* lst = (decode_clo(env59723))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59723))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59723))[3];
//not do dummy comment
void* car = (decode_clo(env59723))[2];
//not do dummy comment
void* cons = (decode_clo(env59723))[1];

//creating new closure instance
void** clo60399 = alloc_clo(lam59720_fptr, 5);

//setting env list
clo60399[1] = lst2;
clo60399[2] = a5935159573;
clo60399[3] = cons;
clo60399[4] = reverse_u45helper;
clo60399[5] = kont59449;
void* f5945159574 = encode_clo(clo60399);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5945159574;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59722 = encode_clo(alloc_clo(lam59722_fptr, 0));

void* lam59724_fptr() // lam59724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59725 = arg_buffer[1];
//reading env and args
void* a5935059571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59725))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59725))[6];
//not do dummy comment
void* lst2 = (decode_clo(env59725))[5];
//not do dummy comment
void* car = (decode_clo(env59725))[4];
//not do dummy comment
void* cons = (decode_clo(env59725))[3];
//not do dummy comment
void* kont59449 = (decode_clo(env59725))[2];
//not do dummy comment
void* cdr = (decode_clo(env59725))[1];

//if-clause
bool if_guard60400 = is_true(a5935059571);
if(if_guard60400)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59449);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59449))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60402 = alloc_clo(lam59722_fptr, 6);

//setting env list
clo60402[1] = cons;
clo60402[2] = car;
clo60402[3] = lst2;
clo60402[4] = reverse_u45helper;
clo60402[5] = lst;
clo60402[6] = kont59449;
void* f5945259572 = encode_clo(clo60402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5945259572;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59724 = encode_clo(alloc_clo(lam59724_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59726 = arg_buffer[1];
//reading env and args
void* kont59449 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60404 = alloc_clo(lam59724_fptr, 7);

//setting env list
clo60404[1] = cdr;
clo60404[2] = kont59449;
clo60404[3] = cons;
clo60404[4] = car;
clo60404[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo60404[6] = reverse_u45helper;
clo60404[7] = lst;
void* f5945359570 = encode_clo(clo60404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5945359570;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam59727_fptr() // lam59727 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59728 = arg_buffer[1];
//reading env and args
void* a5935459579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59728))[3];
//not do dummy comment
void* kont59454 = (decode_clo(env59728))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59728))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont59454;
arg_buffer[3] = lst;
arg_buffer[4] = a5935459579;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59727 = encode_clo(alloc_clo(lam59727_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59729 = arg_buffer[1];
//reading env and args
void* kont59454 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo60406 = alloc_clo(lam59727_fptr, 3);

//setting env list
clo60406[1] = reverse_u45helper;
clo60406[2] = kont59454;
clo60406[3] = lst;
void* f5945559578 = encode_clo(clo60406);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5945559578;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam59730_fptr() // lam59730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59731 = arg_buffer[1];
//reading env and args
void* x5935759584 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59456 = (decode_clo(env59731))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59456);
arg_buffer[2] = x5935759584;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59456))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59730 = encode_clo(alloc_clo(lam59730_fptr, 0));

void* lam59732_fptr() // lam59732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59733 = arg_buffer[1];
//reading env and args
void* a5936259593 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59456 = (decode_clo(env59733))[4];
//not do dummy comment
void* a5935859586 = (decode_clo(env59733))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env59733))[2];
//not do dummy comment
void* a5936059589 = (decode_clo(env59733))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont59456;
arg_buffer[3] = a5935859586;
arg_buffer[4] = a5936059589;
arg_buffer[5] = a5936259593;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59732 = encode_clo(alloc_clo(lam59732_fptr, 0));

void* lam59734_fptr() // lam59734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59735 = arg_buffer[1];
//reading env and args
void* a5936159591 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59456 = (decode_clo(env59735))[6];
//not do dummy comment
void* a5935859586 = (decode_clo(env59735))[5];
//not do dummy comment
void* cons = (decode_clo(env59735))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env59735))[3];
//not do dummy comment
void* a5936059589 = (decode_clo(env59735))[2];
//not do dummy comment
void* lst2 = (decode_clo(env59735))[1];

//creating new closure instance
void** clo60408 = alloc_clo(lam59732_fptr, 4);

//setting env list
clo60408[1] = a5936059589;
clo60408[2] = take_u45helper;
clo60408[3] = a5935859586;
clo60408[4] = kont59456;
void* f5945859592 = encode_clo(clo60408);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5945859592;
arg_buffer[3] = a5936159591;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59734 = encode_clo(alloc_clo(lam59734_fptr, 0));

void* lam59736_fptr() // lam59736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59737 = arg_buffer[1];
//reading env and args
void* a5936059589 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59737))[7];
//not do dummy comment
void* kont59456 = (decode_clo(env59737))[6];
//not do dummy comment
void* a5935859586 = (decode_clo(env59737))[5];
//not do dummy comment
void* car = (decode_clo(env59737))[4];
//not do dummy comment
void* cons = (decode_clo(env59737))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env59737))[2];
//not do dummy comment
void* lst2 = (decode_clo(env59737))[1];

//creating new closure instance
void** clo60410 = alloc_clo(lam59734_fptr, 6);

//setting env list
clo60410[1] = lst2;
clo60410[2] = a5936059589;
clo60410[3] = take_u45helper;
clo60410[4] = cons;
clo60410[5] = a5935859586;
clo60410[6] = kont59456;
void* f5945959590 = encode_clo(clo60410);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5945959590;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59736 = encode_clo(alloc_clo(lam59736_fptr, 0));

void* lam59739_fptr() // lam59739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59740 = arg_buffer[1];
//reading env and args
void* a5935859586 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59740))[8];
//not do dummy comment
void* kont59456 = (decode_clo(env59740))[7];
//not do dummy comment
void* cons = (decode_clo(env59740))[6];
//not do dummy comment
void* _u45 = (decode_clo(env59740))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env59740))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59740))[3];
//not do dummy comment
void* n = (decode_clo(env59740))[2];
//not do dummy comment
void* car = (decode_clo(env59740))[1];
mpz_t* mpzvar60411 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60411, "1", 10);
void* a5935959587 = encode_mpz(mpzvar60411);

//creating new closure instance
void** clo60413 = alloc_clo(lam59736_fptr, 7);

//setting env list
clo60413[1] = lst2;
clo60413[2] = take_u45helper;
clo60413[3] = cons;
clo60413[4] = car;
clo60413[5] = a5935859586;
clo60413[6] = kont59456;
clo60413[7] = lst;
void* f5946059588 = encode_clo(clo60413);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5946059588;
arg_buffer[3] = n;
arg_buffer[4] = a5935959587;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59739 = encode_clo(alloc_clo(lam59739_fptr, 0));

void* lam59741_fptr() // lam59741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59742 = arg_buffer[1];
//reading env and args
void* a5935659582 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59742))[10];
//not do dummy comment
void* lst = (decode_clo(env59742))[9];
//not do dummy comment
void* cons = (decode_clo(env59742))[8];
//not do dummy comment
void* _u45 = (decode_clo(env59742))[7];
//not do dummy comment
void* kont59456 = (decode_clo(env59742))[6];
//not do dummy comment
void* reverse = (decode_clo(env59742))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env59742))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59742))[3];
//not do dummy comment
void* n = (decode_clo(env59742))[2];
//not do dummy comment
void* car = (decode_clo(env59742))[1];

//if-clause
bool if_guard60414 = is_true(a5935659582);
if(if_guard60414)
{

//creating new closure instance
void** clo60416 = alloc_clo(lam59730_fptr, 1);

//setting env list
clo60416[1] = kont59456;
void* f5945759583 = encode_clo(clo60416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5945759583;
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
void** clo60418 = alloc_clo(lam59739_fptr, 8);

//setting env list
clo60418[1] = car;
clo60418[2] = n;
clo60418[3] = lst2;
clo60418[4] = take_u45helper;
clo60418[5] = _u45;
clo60418[6] = cons;
clo60418[7] = kont59456;
clo60418[8] = lst;
void* f5946159585 = encode_clo(clo60418);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5946159585;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59741 = encode_clo(alloc_clo(lam59741_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59744 = arg_buffer[1];
//reading env and args
void* kont59456 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar60419 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60419, "0", 10);
void* a5935559580 = encode_mpz(mpzvar60419);

//creating new closure instance
void** clo60421 = alloc_clo(lam59741_fptr, 10);

//setting env list
clo60421[1] = car;
clo60421[2] = n;
clo60421[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo60421[4] = take_u45helper;
clo60421[5] = reverse;
clo60421[6] = kont59456;
clo60421[7] = _u45;
clo60421[8] = cons;
clo60421[9] = lst;
clo60421[10] = cdr;
void* f5946259581 = encode_clo(clo60421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5946259581;
arg_buffer[3] = n;
arg_buffer[4] = a5935559580;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam59745_fptr() // lam59745 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59746 = arg_buffer[1];
//reading env and args
void* a5936359595 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59746))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env59746))[3];
//not do dummy comment
void* n = (decode_clo(env59746))[2];
//not do dummy comment
void* kont59463 = (decode_clo(env59746))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont59463;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5936359595;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59745 = encode_clo(alloc_clo(lam59745_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59747 = arg_buffer[1];
//reading env and args
void* kont59463 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60423 = alloc_clo(lam59745_fptr, 4);

//setting env list
clo60423[1] = kont59463;
clo60423[2] = n;
clo60423[3] = take_u45helper;
clo60423[4] = lst;
void* f5946459594 = encode_clo(clo60423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5946459594;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam59749_fptr() // lam59749 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59750 = arg_buffer[1];
//reading env and args
void* a5936859603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59465 = (decode_clo(env59750))[3];
//not do dummy comment
void* a5936659599 = (decode_clo(env59750))[2];
//not do dummy comment
void* _u43 = (decode_clo(env59750))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont59465;
arg_buffer[3] = a5936659599;
arg_buffer[4] = a5936859603;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59749 = encode_clo(alloc_clo(lam59749_fptr, 0));

void* lam59751_fptr() // lam59751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59752 = arg_buffer[1];
//reading env and args
void* a5936759601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59465 = (decode_clo(env59752))[4];
//not do dummy comment
void* length = (decode_clo(env59752))[3];
//not do dummy comment
void* a5936659599 = (decode_clo(env59752))[2];
//not do dummy comment
void* _u43 = (decode_clo(env59752))[1];

//creating new closure instance
void** clo60425 = alloc_clo(lam59749_fptr, 3);

//setting env list
clo60425[1] = _u43;
clo60425[2] = a5936659599;
clo60425[3] = kont59465;
void* f5946659602 = encode_clo(clo60425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5946659602;
arg_buffer[3] = a5936759601;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59751 = encode_clo(alloc_clo(lam59751_fptr, 0));

void* lam59754_fptr() // lam59754 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59755 = arg_buffer[1];
//reading env and args
void* a5936459597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59755))[5];
//not do dummy comment
void* length = (decode_clo(env59755))[4];
//not do dummy comment
void* _u43 = (decode_clo(env59755))[3];
//not do dummy comment
void* kont59465 = (decode_clo(env59755))[2];
//not do dummy comment
void* cdr = (decode_clo(env59755))[1];

//if-clause
bool if_guard60426 = is_true(a5936459597);
if(if_guard60426)
{
mpz_t* mpzvar60427 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60427, "0", 10);
void* x5936559598 = encode_mpz(mpzvar60427);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59465);
arg_buffer[2] = x5936559598;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59465))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar60428 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60428, "1", 10);
void* a5936659599 = encode_mpz(mpzvar60428);

//creating new closure instance
void** clo60430 = alloc_clo(lam59751_fptr, 4);

//setting env list
clo60430[1] = _u43;
clo60430[2] = a5936659599;
clo60430[3] = length;
clo60430[4] = kont59465;
void* f5946759600 = encode_clo(clo60430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5946759600;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59754 = encode_clo(alloc_clo(lam59754_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59756 = arg_buffer[1];
//reading env and args
void* kont59465 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo60432 = alloc_clo(lam59754_fptr, 5);

//setting env list
clo60432[1] = cdr;
clo60432[2] = kont59465;
clo60432[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo60432[4] = length;
clo60432[5] = lst;
void* f5946859596 = encode_clo(clo60432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5946859596;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam59757_fptr() // lam59757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59758 = arg_buffer[1];
//reading env and args
void* x5937059607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59469 = (decode_clo(env59758))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59469);
arg_buffer[2] = x5937059607;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59469))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59757 = encode_clo(alloc_clo(lam59757_fptr, 0));

void* lam59759_fptr() // lam59759 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59760 = arg_buffer[1];
//reading env and args
void* a5937459615 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5937259611 = (decode_clo(env59760))[3];
//not do dummy comment
void* kont59469 = (decode_clo(env59760))[2];
//not do dummy comment
void* cons = (decode_clo(env59760))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont59469;
arg_buffer[3] = a5937259611;
arg_buffer[4] = a5937459615;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59759 = encode_clo(alloc_clo(lam59759_fptr, 0));

void* lam59761_fptr() // lam59761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59762 = arg_buffer[1];
//reading env and args
void* a5937359613 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5937259611 = (decode_clo(env59762))[5];
//not do dummy comment
void* kont59469 = (decode_clo(env59762))[4];
//not do dummy comment
void* map = (decode_clo(env59762))[3];
//not do dummy comment
void* proc = (decode_clo(env59762))[2];
//not do dummy comment
void* cons = (decode_clo(env59762))[1];

//creating new closure instance
void** clo60434 = alloc_clo(lam59759_fptr, 3);

//setting env list
clo60434[1] = cons;
clo60434[2] = kont59469;
clo60434[3] = a5937259611;
void* f5947159614 = encode_clo(clo60434);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5947159614;
arg_buffer[3] = proc;
arg_buffer[4] = a5937359613;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59761 = encode_clo(alloc_clo(lam59761_fptr, 0));

void* lam59763_fptr() // lam59763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59764 = arg_buffer[1];
//reading env and args
void* a5937259611 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59764))[6];
//not do dummy comment
void* map = (decode_clo(env59764))[5];
//not do dummy comment
void* proc = (decode_clo(env59764))[4];
//not do dummy comment
void* cons = (decode_clo(env59764))[3];
//not do dummy comment
void* lst = (decode_clo(env59764))[2];
//not do dummy comment
void* kont59469 = (decode_clo(env59764))[1];

//creating new closure instance
void** clo60436 = alloc_clo(lam59761_fptr, 5);

//setting env list
clo60436[1] = cons;
clo60436[2] = proc;
clo60436[3] = map;
clo60436[4] = kont59469;
clo60436[5] = a5937259611;
void* f5947259612 = encode_clo(clo60436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5947259612;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59763 = encode_clo(alloc_clo(lam59763_fptr, 0));

void* lam59765_fptr() // lam59765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59766 = arg_buffer[1];
//reading env and args
void* a5937159609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59766))[6];
//not do dummy comment
void* map = (decode_clo(env59766))[5];
//not do dummy comment
void* proc = (decode_clo(env59766))[4];
//not do dummy comment
void* cons = (decode_clo(env59766))[3];
//not do dummy comment
void* lst = (decode_clo(env59766))[2];
//not do dummy comment
void* kont59469 = (decode_clo(env59766))[1];

//creating new closure instance
void** clo60438 = alloc_clo(lam59763_fptr, 6);

//setting env list
clo60438[1] = kont59469;
clo60438[2] = lst;
clo60438[3] = cons;
clo60438[4] = proc;
clo60438[5] = map;
clo60438[6] = cdr;
void* f5947359610 = encode_clo(clo60438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5947359610;
arg_buffer[3] = a5937159609;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59765 = encode_clo(alloc_clo(lam59765_fptr, 0));

void* lam59767_fptr() // lam59767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59768 = arg_buffer[1];
//reading env and args
void* a5936959605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env59768))[8];
//not do dummy comment
void* proc = (decode_clo(env59768))[7];
//not do dummy comment
void* car = (decode_clo(env59768))[6];
//not do dummy comment
void* cons = (decode_clo(env59768))[5];
//not do dummy comment
void* list = (decode_clo(env59768))[4];
//not do dummy comment
void* cdr = (decode_clo(env59768))[3];
//not do dummy comment
void* lst = (decode_clo(env59768))[2];
//not do dummy comment
void* kont59469 = (decode_clo(env59768))[1];

//if-clause
bool if_guard60439 = is_true(a5936959605);
if(if_guard60439)
{

//creating new closure instance
void** clo60441 = alloc_clo(lam59757_fptr, 1);

//setting env list
clo60441[1] = kont59469;
void* f5947059606 = encode_clo(clo60441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5947059606;
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
void** clo60443 = alloc_clo(lam59765_fptr, 6);

//setting env list
clo60443[1] = kont59469;
clo60443[2] = lst;
clo60443[3] = cons;
clo60443[4] = proc;
clo60443[5] = map;
clo60443[6] = cdr;
void* f5947459608 = encode_clo(clo60443);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5947459608;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59767 = encode_clo(alloc_clo(lam59767_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59769 = arg_buffer[1];
//reading env and args
void* kont59469 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60445 = alloc_clo(lam59767_fptr, 8);

//setting env list
clo60445[1] = kont59469;
clo60445[2] = lst;
clo60445[3] = cdr;
clo60445[4] = list;
clo60445[5] = cons;
clo60445[6] = car;
clo60445[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo60445[8] = map;
void* f5947559604 = encode_clo(clo60445);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5947559604;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam59770_fptr() // lam59770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59771 = arg_buffer[1];
//reading env and args
void* x5937659619 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59476 = (decode_clo(env59771))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59476);
arg_buffer[2] = x5937659619;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59476))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59770 = encode_clo(alloc_clo(lam59770_fptr, 0));

void* lam59772_fptr() // lam59772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59773 = arg_buffer[1];
//reading env and args
void* a5938159629 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5937959625 = (decode_clo(env59773))[3];
//not do dummy comment
void* kont59476 = (decode_clo(env59773))[2];
//not do dummy comment
void* cons = (decode_clo(env59773))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont59476;
arg_buffer[3] = a5937959625;
arg_buffer[4] = a5938159629;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59772 = encode_clo(alloc_clo(lam59772_fptr, 0));

void* lam59774_fptr() // lam59774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59775 = arg_buffer[1];
//reading env and args
void* a5938059627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5937959625 = (decode_clo(env59775))[5];
//not do dummy comment
void* op = (decode_clo(env59775))[4];
//not do dummy comment
void* kont59476 = (decode_clo(env59775))[3];
//not do dummy comment
void* filter = (decode_clo(env59775))[2];
//not do dummy comment
void* cons = (decode_clo(env59775))[1];

//creating new closure instance
void** clo60447 = alloc_clo(lam59772_fptr, 3);

//setting env list
clo60447[1] = cons;
clo60447[2] = kont59476;
clo60447[3] = a5937959625;
void* f5947859628 = encode_clo(clo60447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5947859628;
arg_buffer[3] = op;
arg_buffer[4] = a5938059627;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59774 = encode_clo(alloc_clo(lam59774_fptr, 0));

void* lam59776_fptr() // lam59776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59777 = arg_buffer[1];
//reading env and args
void* a5937959625 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59777))[6];
//not do dummy comment
void* lst = (decode_clo(env59777))[5];
//not do dummy comment
void* op = (decode_clo(env59777))[4];
//not do dummy comment
void* kont59476 = (decode_clo(env59777))[3];
//not do dummy comment
void* filter = (decode_clo(env59777))[2];
//not do dummy comment
void* cons = (decode_clo(env59777))[1];

//creating new closure instance
void** clo60449 = alloc_clo(lam59774_fptr, 5);

//setting env list
clo60449[1] = cons;
clo60449[2] = filter;
clo60449[3] = kont59476;
clo60449[4] = op;
clo60449[5] = a5937959625;
void* f5947959626 = encode_clo(clo60449);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5947959626;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59776 = encode_clo(alloc_clo(lam59776_fptr, 0));

void* lam59778_fptr() // lam59778 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59779 = arg_buffer[1];
//reading env and args
void* a5938259631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env59779))[3];
//not do dummy comment
void* kont59476 = (decode_clo(env59779))[2];
//not do dummy comment
void* filter = (decode_clo(env59779))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont59476;
arg_buffer[3] = op;
arg_buffer[4] = a5938259631;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59778 = encode_clo(alloc_clo(lam59778_fptr, 0));

void* lam59780_fptr() // lam59780 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59781 = arg_buffer[1];
//reading env and args
void* a5937859623 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59781))[7];
//not do dummy comment
void* lst = (decode_clo(env59781))[6];
//not do dummy comment
void* op = (decode_clo(env59781))[5];
//not do dummy comment
void* kont59476 = (decode_clo(env59781))[4];
//not do dummy comment
void* cons = (decode_clo(env59781))[3];
//not do dummy comment
void* filter = (decode_clo(env59781))[2];
//not do dummy comment
void* car = (decode_clo(env59781))[1];

//if-clause
bool if_guard60450 = is_true(a5937859623);
if(if_guard60450)
{

//creating new closure instance
void** clo60452 = alloc_clo(lam59776_fptr, 6);

//setting env list
clo60452[1] = cons;
clo60452[2] = filter;
clo60452[3] = kont59476;
clo60452[4] = op;
clo60452[5] = lst;
clo60452[6] = cdr;
void* f5948059624 = encode_clo(clo60452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5948059624;
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
void** clo60454 = alloc_clo(lam59778_fptr, 3);

//setting env list
clo60454[1] = filter;
clo60454[2] = kont59476;
clo60454[3] = op;
void* f5948159630 = encode_clo(clo60454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5948159630;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59780 = encode_clo(alloc_clo(lam59780_fptr, 0));

void* lam59782_fptr() // lam59782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59783 = arg_buffer[1];
//reading env and args
void* a5937759621 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59783))[7];
//not do dummy comment
void* lst = (decode_clo(env59783))[6];
//not do dummy comment
void* op = (decode_clo(env59783))[5];
//not do dummy comment
void* kont59476 = (decode_clo(env59783))[4];
//not do dummy comment
void* cons = (decode_clo(env59783))[3];
//not do dummy comment
void* filter = (decode_clo(env59783))[2];
//not do dummy comment
void* car = (decode_clo(env59783))[1];

//creating new closure instance
void** clo60456 = alloc_clo(lam59780_fptr, 7);

//setting env list
clo60456[1] = car;
clo60456[2] = filter;
clo60456[3] = cons;
clo60456[4] = kont59476;
clo60456[5] = op;
clo60456[6] = lst;
clo60456[7] = cdr;
void* f5948259622 = encode_clo(clo60456);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5948259622;
arg_buffer[3] = a5937759621;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59782 = encode_clo(alloc_clo(lam59782_fptr, 0));

void* lam59784_fptr() // lam59784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59785 = arg_buffer[1];
//reading env and args
void* a5937559617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59785))[8];
//not do dummy comment
void* op = (decode_clo(env59785))[7];
//not do dummy comment
void* kont59476 = (decode_clo(env59785))[6];
//not do dummy comment
void* cons = (decode_clo(env59785))[5];
//not do dummy comment
void* list = (decode_clo(env59785))[4];
//not do dummy comment
void* cdr = (decode_clo(env59785))[3];
//not do dummy comment
void* filter = (decode_clo(env59785))[2];
//not do dummy comment
void* car = (decode_clo(env59785))[1];

//if-clause
bool if_guard60457 = is_true(a5937559617);
if(if_guard60457)
{

//creating new closure instance
void** clo60459 = alloc_clo(lam59770_fptr, 1);

//setting env list
clo60459[1] = kont59476;
void* f5947759618 = encode_clo(clo60459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5947759618;
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
void** clo60461 = alloc_clo(lam59782_fptr, 7);

//setting env list
clo60461[1] = car;
clo60461[2] = filter;
clo60461[3] = cons;
clo60461[4] = kont59476;
clo60461[5] = op;
clo60461[6] = lst;
clo60461[7] = cdr;
void* f5948359620 = encode_clo(clo60461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5948359620;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59784 = encode_clo(alloc_clo(lam59784_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59786 = arg_buffer[1];
//reading env and args
void* kont59476 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60463 = alloc_clo(lam59784_fptr, 8);

//setting env list
clo60463[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo60463[2] = filter;
clo60463[3] = cdr;
clo60463[4] = list;
clo60463[5] = cons;
clo60463[6] = kont59476;
clo60463[7] = op;
clo60463[8] = lst;
void* f5948459616 = encode_clo(clo60463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5948459616;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam59787_fptr() // lam59787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59788 = arg_buffer[1];
//reading env and args
void* a5938759639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5938559636 = (decode_clo(env59788))[3];
//not do dummy comment
void* kont59485 = (decode_clo(env59788))[2];
//not do dummy comment
void* drop = (decode_clo(env59788))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont59485;
arg_buffer[3] = a5938559636;
arg_buffer[4] = a5938759639;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59787 = encode_clo(alloc_clo(lam59787_fptr, 0));

void* lam59790_fptr() // lam59790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59791 = arg_buffer[1];
//reading env and args
void* a5938559636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env59791))[4];
//not do dummy comment
void* _u45 = (decode_clo(env59791))[3];
//not do dummy comment
void* kont59485 = (decode_clo(env59791))[2];
//not do dummy comment
void* drop = (decode_clo(env59791))[1];
mpz_t* mpzvar60464 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60464, "1", 10);
void* a5938659637 = encode_mpz(mpzvar60464);

//creating new closure instance
void** clo60466 = alloc_clo(lam59787_fptr, 3);

//setting env list
clo60466[1] = drop;
clo60466[2] = kont59485;
clo60466[3] = a5938559636;
void* f5948659638 = encode_clo(clo60466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5948659638;
arg_buffer[3] = n;
arg_buffer[4] = a5938659637;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59790 = encode_clo(alloc_clo(lam59790_fptr, 0));

void* lam59792_fptr() // lam59792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59793 = arg_buffer[1];
//reading env and args
void* a5938459634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59793))[6];
//not do dummy comment
void* n = (decode_clo(env59793))[5];
//not do dummy comment
void* _u45 = (decode_clo(env59793))[4];
//not do dummy comment
void* lst = (decode_clo(env59793))[3];
//not do dummy comment
void* kont59485 = (decode_clo(env59793))[2];
//not do dummy comment
void* drop = (decode_clo(env59793))[1];

//if-clause
bool if_guard60467 = is_true(a5938459634);
if(if_guard60467)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59485);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59485))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60469 = alloc_clo(lam59790_fptr, 4);

//setting env list
clo60469[1] = drop;
clo60469[2] = kont59485;
clo60469[3] = _u45;
clo60469[4] = n;
void* f5948759635 = encode_clo(clo60469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5948759635;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59792 = encode_clo(alloc_clo(lam59792_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59795 = arg_buffer[1];
//reading env and args
void* kont59485 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar60470 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60470, "0", 10);
void* a5938359632 = encode_mpz(mpzvar60470);

//creating new closure instance
void** clo60472 = alloc_clo(lam59792_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo60472[1] = drop;
clo60472[2] = kont59485;
clo60472[3] = lst;
clo60472[4] = _u45;
clo60472[5] = n;
clo60472[6] = cdr;
void* f5948859633 = encode_clo(clo60472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5948859633;
arg_buffer[3] = n;
arg_buffer[4] = a5938359632;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam59796_fptr() // lam59796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59797 = arg_buffer[1];
//reading env and args
void* a5939159647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5938959643 = (decode_clo(env59797))[3];
//not do dummy comment
void* kont59489 = (decode_clo(env59797))[2];
//not do dummy comment
void* proc = (decode_clo(env59797))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont59489;
arg_buffer[3] = a5938959643;
arg_buffer[4] = a5939159647;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59796 = encode_clo(alloc_clo(lam59796_fptr, 0));

void* lam59798_fptr() // lam59798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59799 = arg_buffer[1];
//reading env and args
void* a5939059645 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5938959643 = (decode_clo(env59799))[5];
//not do dummy comment
void* foldr = (decode_clo(env59799))[4];
//not do dummy comment
void* kont59489 = (decode_clo(env59799))[3];
//not do dummy comment
void* proc = (decode_clo(env59799))[2];
//not do dummy comment
void* acc = (decode_clo(env59799))[1];

//creating new closure instance
void** clo60474 = alloc_clo(lam59796_fptr, 3);

//setting env list
clo60474[1] = proc;
clo60474[2] = kont59489;
clo60474[3] = a5938959643;
void* f5949059646 = encode_clo(clo60474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5949059646;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5939059645;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59798 = encode_clo(alloc_clo(lam59798_fptr, 0));

void* lam59800_fptr() // lam59800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59801 = arg_buffer[1];
//reading env and args
void* a5938959643 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59801))[6];
//not do dummy comment
void* kont59489 = (decode_clo(env59801))[5];
//not do dummy comment
void* foldr = (decode_clo(env59801))[4];
//not do dummy comment
void* lst = (decode_clo(env59801))[3];
//not do dummy comment
void* proc = (decode_clo(env59801))[2];
//not do dummy comment
void* acc = (decode_clo(env59801))[1];

//creating new closure instance
void** clo60476 = alloc_clo(lam59798_fptr, 5);

//setting env list
clo60476[1] = acc;
clo60476[2] = proc;
clo60476[3] = kont59489;
clo60476[4] = foldr;
clo60476[5] = a5938959643;
void* f5949159644 = encode_clo(clo60476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5949159644;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59800 = encode_clo(alloc_clo(lam59800_fptr, 0));

void* lam59802_fptr() // lam59802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59803 = arg_buffer[1];
//reading env and args
void* a5938859641 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59803))[7];
//not do dummy comment
void* kont59489 = (decode_clo(env59803))[6];
//not do dummy comment
void* car = (decode_clo(env59803))[5];
//not do dummy comment
void* foldr = (decode_clo(env59803))[4];
//not do dummy comment
void* lst = (decode_clo(env59803))[3];
//not do dummy comment
void* proc = (decode_clo(env59803))[2];
//not do dummy comment
void* acc = (decode_clo(env59803))[1];

//if-clause
bool if_guard60477 = is_true(a5938859641);
if(if_guard60477)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59489);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59489))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60479 = alloc_clo(lam59800_fptr, 6);

//setting env list
clo60479[1] = acc;
clo60479[2] = proc;
clo60479[3] = lst;
clo60479[4] = foldr;
clo60479[5] = kont59489;
clo60479[6] = cdr;
void* f5949259642 = encode_clo(clo60479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5949259642;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59802 = encode_clo(alloc_clo(lam59802_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59804 = arg_buffer[1];
//reading env and args
void* kont59489 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo60481 = alloc_clo(lam59802_fptr, 7);

//setting env list
clo60481[1] = acc;
clo60481[2] = proc;
clo60481[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo60481[4] = foldr;
clo60481[5] = car;
clo60481[6] = kont59489;
clo60481[7] = cdr;
void* f5949359640 = encode_clo(clo60481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5949359640;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam59805_fptr() // lam59805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59806 = arg_buffer[1];
//reading env and args
void* a5939559655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5939359651 = (decode_clo(env59806))[3];
//not do dummy comment
void* kont59494 = (decode_clo(env59806))[2];
//not do dummy comment
void* cons = (decode_clo(env59806))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont59494;
arg_buffer[3] = a5939359651;
arg_buffer[4] = a5939559655;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59805 = encode_clo(alloc_clo(lam59805_fptr, 0));

void* lam59807_fptr() // lam59807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59808 = arg_buffer[1];
//reading env and args
void* a5939459653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env59808))[5];
//not do dummy comment
void* a5939359651 = (decode_clo(env59808))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59808))[3];
//not do dummy comment
void* kont59494 = (decode_clo(env59808))[2];
//not do dummy comment
void* cons = (decode_clo(env59808))[1];

//creating new closure instance
void** clo60483 = alloc_clo(lam59805_fptr, 3);

//setting env list
clo60483[1] = cons;
clo60483[2] = kont59494;
clo60483[3] = a5939359651;
void* f5949559654 = encode_clo(clo60483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5949559654;
arg_buffer[3] = a5939459653;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59807 = encode_clo(alloc_clo(lam59807_fptr, 0));

void* lam59809_fptr() // lam59809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59810 = arg_buffer[1];
//reading env and args
void* a5939359651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59810))[6];
//not do dummy comment
void* append = (decode_clo(env59810))[5];
//not do dummy comment
void* lst2 = (decode_clo(env59810))[4];
//not do dummy comment
void* cons = (decode_clo(env59810))[3];
//not do dummy comment
void* kont59494 = (decode_clo(env59810))[2];
//not do dummy comment
void* lst1 = (decode_clo(env59810))[1];

//creating new closure instance
void** clo60485 = alloc_clo(lam59807_fptr, 5);

//setting env list
clo60485[1] = cons;
clo60485[2] = kont59494;
clo60485[3] = lst2;
clo60485[4] = a5939359651;
clo60485[5] = append;
void* f5949659652 = encode_clo(clo60485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5949659652;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59809 = encode_clo(alloc_clo(lam59809_fptr, 0));

void* lam59811_fptr() // lam59811 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59812 = arg_buffer[1];
//reading env and args
void* a5939259649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59812))[7];
//not do dummy comment
void* append = (decode_clo(env59812))[6];
//not do dummy comment
void* lst2 = (decode_clo(env59812))[5];
//not do dummy comment
void* cons = (decode_clo(env59812))[4];
//not do dummy comment
void* kont59494 = (decode_clo(env59812))[3];
//not do dummy comment
void* lst1 = (decode_clo(env59812))[2];
//not do dummy comment
void* car = (decode_clo(env59812))[1];

//if-clause
bool if_guard60486 = is_true(a5939259649);
if(if_guard60486)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59494);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59494))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60488 = alloc_clo(lam59809_fptr, 6);

//setting env list
clo60488[1] = lst1;
clo60488[2] = kont59494;
clo60488[3] = cons;
clo60488[4] = lst2;
clo60488[5] = append;
clo60488[6] = cdr;
void* f5949759650 = encode_clo(clo60488);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5949759650;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59811 = encode_clo(alloc_clo(lam59811_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59813 = arg_buffer[1];
//reading env and args
void* kont59494 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60490 = alloc_clo(lam59811_fptr, 7);

//setting env list
clo60490[1] = car;
clo60490[2] = lst1;
clo60490[3] = kont59494;
clo60490[4] = cons;
clo60490[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo60490[6] = append;
clo60490[7] = cdr;
void* f5949859648 = encode_clo(clo60490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5949859648;
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
void* _59814 = arg_buffer[1];
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

void* kont5949959656 = prim_car(lst);
void* lst59657 = prim_cdr(lst);
void* x5939659658 = apply_prim_hash(lst59657);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5949959656);
arg_buffer[2] = x5939659658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5949959656))[0]);
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
void* _59815 = arg_buffer[1];
//reading env and args
void* kont59501 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5939759659 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59501);
arg_buffer[2] = x5939759659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59501))[0]);
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
void* _59816 = arg_buffer[1];
//reading env and args
void* kont59502 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5939859660 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59502);
arg_buffer[2] = x5939859660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59502))[0]);
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
void* _59817 = arg_buffer[1];
//reading env and args
void* kont59503 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5939959661 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59503);
arg_buffer[2] = x5939959661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59503))[0]);
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
void* _59818 = arg_buffer[1];
//reading env and args
void* kont59504 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5940059662 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59504);
arg_buffer[2] = x5940059662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59504))[0]);
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
void* _59825 = arg_buffer[1];
//reading env and args
void* kont59505 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar60491 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60491, "1", 10);
void* a5940159663 = encode_mpz(mpzvar60491);
mpz_t* mpzvar60492 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60492, "2", 10);
void* a5940259664 = encode_mpz(mpzvar60492);
mpz_t* mpzvar60493 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60493, "3", 10);
void* a5940359665 = encode_mpz(mpzvar60493);
mpz_t* mpzvar60494 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60494, "4", 10);
void* a5940459666 = encode_mpz(mpzvar60494);
mpz_t* mpzvar60495 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60495, "5", 10);
void* a5940559667 = encode_mpz(mpzvar60495);
mpz_t* mpzvar60496 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60496, "100", 10);
void* a5940659668 = encode_mpz(mpzvar60496);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60_u61);
arg_buffer[2] = kont59505;
arg_buffer[3] = a5940159663;
arg_buffer[4] = a5940259664;
arg_buffer[5] = a5940359665;
arg_buffer[6] = a5940459666;
arg_buffer[7] = a5940559667;
arg_buffer[8] = a5940659668;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam59826_fptr() // lam59826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59827 = arg_buffer[1];
//reading env and args
void* x5940759670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59506 = (decode_clo(env59827))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59506);
arg_buffer[2] = x5940759670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59506))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59826 = encode_clo(alloc_clo(lam59826_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59828 = arg_buffer[1];
//reading env and args
void* kont59506 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo60498 = alloc_clo(lam59826_fptr, 1);

//setting env list
clo60498[1] = kont59506;
void* f5950759669 = encode_clo(clo60498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5950759669;
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

