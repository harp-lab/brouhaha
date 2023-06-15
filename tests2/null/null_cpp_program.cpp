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
void* _47688 = arg_buffer[1];
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

void* kont4743047530 = prim_car(lst);
void* lst47531 = prim_cdr(lst);
void* x4734547532 = apply_prim__u43(lst47531);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4743047530);
arg_buffer[2] = x4734547532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4743047530))[0]);
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
void* _47689 = arg_buffer[1];
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

void* kont4743247533 = prim_car(lst);
void* lst47534 = prim_cdr(lst);
void* x4734647535 = apply_prim__u45(lst47534);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4743247533);
arg_buffer[2] = x4734647535;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4743247533))[0]);
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
void* _47690 = arg_buffer[1];
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

void* kont4743447536 = prim_car(lst);
void* lst47537 = prim_cdr(lst);
void* x4734747538 = apply_prim__u42(lst47537);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4743447536);
arg_buffer[2] = x4734747538;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4743447536))[0]);
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
void* _47691 = arg_buffer[1];
//reading env and args
void* kont47436 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4734847539 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47436);
arg_buffer[2] = x4734847539;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47436))[0]);
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
void* _47692 = arg_buffer[1];
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

void* kont4743747540 = prim_car(lst);
void* lst47541 = prim_cdr(lst);
void* x4734947542 = apply_prim__u47(lst47541);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4743747540);
arg_buffer[2] = x4734947542;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4743747540))[0]);
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
void* _47693 = arg_buffer[1];
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

void* kont4743947543 = prim_car(lst);
void* lst47544 = prim_cdr(lst);
void* x4735047545 = apply_prim__u61(lst47544);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4743947543);
arg_buffer[2] = x4735047545;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4743947543))[0]);
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
void* _47694 = arg_buffer[1];
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

void* kont4744147546 = prim_car(lst);
void* lst47547 = prim_cdr(lst);
void* x4735147548 = apply_prim__u62(lst47547);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4744147546);
arg_buffer[2] = x4735147548;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4744147546))[0]);
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
void* _47695 = arg_buffer[1];
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

void* kont4744347549 = prim_car(lst);
void* lst47550 = prim_cdr(lst);
void* x4735247551 = apply_prim__u60(lst47550);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4744347549);
arg_buffer[2] = x4735247551;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4744347549))[0]);
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
void* _47696 = arg_buffer[1];
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

void* kont4744547552 = prim_car(lst);
void* lst47553 = prim_cdr(lst);
void* x4735347554 = apply_prim__u60_u61(lst47553);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4744547552);
arg_buffer[2] = x4735347554;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4744547552))[0]);
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
void* _47697 = arg_buffer[1];
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

void* kont4744747555 = prim_car(lst);
void* lst47556 = prim_cdr(lst);
void* x4735447557 = apply_prim__u62_u61(lst47556);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4744747555);
arg_buffer[2] = x4735447557;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4744747555))[0]);
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
void* _47698 = arg_buffer[1];
//reading env and args
void* kont47449 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4735547558 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47449);
arg_buffer[2] = x4735547558;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47449))[0]);
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
void* _47699 = arg_buffer[1];
//reading env and args
void* kont47450 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4735647559 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47450);
arg_buffer[2] = x4735647559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47450))[0]);
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
void* _47700 = arg_buffer[1];
//reading env and args
void* kont47451 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4735747560 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47451);
arg_buffer[2] = x4735747560;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47451))[0]);
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
void* _47701 = arg_buffer[1];
//reading env and args
void* kont47452 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4735847561 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47452);
arg_buffer[2] = x4735847561;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47452))[0]);
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
void* _47702 = arg_buffer[1];
//reading env and args
void* kont47453 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4735947562 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47453);
arg_buffer[2] = x4735947562;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47453))[0]);
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
void* _47703 = arg_buffer[1];
//reading env and args
void* kont47454 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4736047563 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47454);
arg_buffer[2] = x4736047563;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47454))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam47704_fptr() // lam47704 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47705 = arg_buffer[1];
//reading env and args
void* a4736347567 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env47705))[3];
//not do dummy comment
void* a4736147564 = (decode_clo(env47705))[2];
//not do dummy comment
void* kont47455 = (decode_clo(env47705))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont47455;
arg_buffer[3] = a4736147564;
arg_buffer[4] = a4736347567;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47704 = encode_clo(alloc_clo(lam47704_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47708 = arg_buffer[1];
//reading env and args
void* kont47455 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar48141 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48141, "0", 10);
void* a4736147564 = encode_mpz(mpzvar48141);
mpz_t* mpzvar48142 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48142, "2", 10);
void* a4736247565 = encode_mpz(mpzvar48142);

//creating new closure instance
void** clo48144 = alloc_clo(lam47704_fptr, 3);

//setting env list
clo48144[1] = kont47455;
clo48144[2] = a4736147564;
clo48144[3] = equal_u63;
void* f4745647566 = encode_clo(clo48144);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4745647566;
arg_buffer[3] = x;
arg_buffer[4] = a4736247565;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam47709_fptr() // lam47709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47710 = arg_buffer[1];
//reading env and args
void* a4736647571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47457 = (decode_clo(env47710))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env47710))[2];
//not do dummy comment
void* a4736447568 = (decode_clo(env47710))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont47457;
arg_buffer[3] = a4736447568;
arg_buffer[4] = a4736647571;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47709 = encode_clo(alloc_clo(lam47709_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47713 = arg_buffer[1];
//reading env and args
void* kont47457 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar48145 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48145, "1", 10);
void* a4736447568 = encode_mpz(mpzvar48145);
mpz_t* mpzvar48146 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48146, "2", 10);
void* a4736547569 = encode_mpz(mpzvar48146);

//creating new closure instance
void** clo48148 = alloc_clo(lam47709_fptr, 3);

//setting env list
clo48148[1] = a4736447568;
clo48148[2] = equal_u63;
clo48148[3] = kont47457;
void* f4745847570 = encode_clo(clo48148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4745847570;
arg_buffer[3] = x;
arg_buffer[4] = a4736547569;
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
void* _47714 = arg_buffer[1];
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

void* kont4745947572 = prim_car(x);
void* x47573 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4745947572);
arg_buffer[2] = x47573;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4745947572))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam47717_fptr() // lam47717 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47718 = arg_buffer[1];
//reading env and args
void* a4737247583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47461 = (decode_clo(env47718))[3];
//not do dummy comment
void* x = (decode_clo(env47718))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47718))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont47461;
arg_buffer[3] = x;
arg_buffer[4] = a4737247583;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47717 = encode_clo(alloc_clo(lam47717_fptr, 0));

void* lam47719_fptr() // lam47719 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47720 = arg_buffer[1];
//reading env and args
void* a4737047580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47720))[5];
//not do dummy comment
void* x = (decode_clo(env47720))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env47720))[3];
//not do dummy comment
void* lst = (decode_clo(env47720))[2];
//not do dummy comment
void* kont47461 = (decode_clo(env47720))[1];

//if-clause
bool if_guard48149 = is_true(a4737047580);
if(if_guard48149)
{
void* x4737147581 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47461);
arg_buffer[2] = x4737147581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47461))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48151 = alloc_clo(lam47717_fptr, 3);

//setting env list
clo48151[1] = member_u63;
clo48151[2] = x;
clo48151[3] = kont47461;
void* f4746247582 = encode_clo(clo48151);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4746247582;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47719 = encode_clo(alloc_clo(lam47719_fptr, 0));

void* lam47721_fptr() // lam47721 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47722 = arg_buffer[1];
//reading env and args
void* a4736947578 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47722))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env47722))[5];
//not do dummy comment
void* x = (decode_clo(env47722))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env47722))[3];
//not do dummy comment
void* lst = (decode_clo(env47722))[2];
//not do dummy comment
void* kont47461 = (decode_clo(env47722))[1];

//creating new closure instance
void** clo48153 = alloc_clo(lam47719_fptr, 5);

//setting env list
clo48153[1] = kont47461;
clo48153[2] = lst;
clo48153[3] = member_u63;
clo48153[4] = x;
clo48153[5] = cdr;
void* f4746347579 = encode_clo(clo48153);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4746347579;
arg_buffer[3] = a4736947578;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47721 = encode_clo(alloc_clo(lam47721_fptr, 0));

void* lam47723_fptr() // lam47723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47724 = arg_buffer[1];
//reading env and args
void* a4736747575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47724))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env47724))[6];
//not do dummy comment
void* x = (decode_clo(env47724))[5];
//not do dummy comment
void* car = (decode_clo(env47724))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env47724))[3];
//not do dummy comment
void* lst = (decode_clo(env47724))[2];
//not do dummy comment
void* kont47461 = (decode_clo(env47724))[1];

//if-clause
bool if_guard48154 = is_true(a4736747575);
if(if_guard48154)
{
void* x4736847576 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47461);
arg_buffer[2] = x4736847576;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47461))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48156 = alloc_clo(lam47721_fptr, 6);

//setting env list
clo48156[1] = kont47461;
clo48156[2] = lst;
clo48156[3] = member_u63;
clo48156[4] = x;
clo48156[5] = equal_u63;
clo48156[6] = cdr;
void* f4746447577 = encode_clo(clo48156);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4746447577;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47723 = encode_clo(alloc_clo(lam47723_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47725 = arg_buffer[1];
//reading env and args
void* kont47461 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48158 = alloc_clo(lam47723_fptr, 7);

//setting env list
clo48158[1] = kont47461;
clo48158[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo48158[3] = member_u63;
clo48158[4] = car;
clo48158[5] = x;
clo48158[6] = equal_u63;
clo48158[7] = cdr;
void* f4746547574 = encode_clo(clo48158);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4746547574;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam47726_fptr() // lam47726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47727 = arg_buffer[1];
//reading env and args
void* a4737647591 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4737547589 = (decode_clo(env47727))[4];
//not do dummy comment
void* kont47466 = (decode_clo(env47727))[3];
//not do dummy comment
void* fun = (decode_clo(env47727))[2];
//not do dummy comment
void* foldl = (decode_clo(env47727))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont47466;
arg_buffer[3] = fun;
arg_buffer[4] = a4737547589;
arg_buffer[5] = a4737647591;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47726 = encode_clo(alloc_clo(lam47726_fptr, 0));

void* lam47728_fptr() // lam47728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47729 = arg_buffer[1];
//reading env and args
void* a4737547589 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47729))[5];
//not do dummy comment
void* lst = (decode_clo(env47729))[4];
//not do dummy comment
void* kont47466 = (decode_clo(env47729))[3];
//not do dummy comment
void* fun = (decode_clo(env47729))[2];
//not do dummy comment
void* foldl = (decode_clo(env47729))[1];

//creating new closure instance
void** clo48160 = alloc_clo(lam47726_fptr, 4);

//setting env list
clo48160[1] = foldl;
clo48160[2] = fun;
clo48160[3] = kont47466;
clo48160[4] = a4737547589;
void* f4746747590 = encode_clo(clo48160);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4746747590;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47728 = encode_clo(alloc_clo(lam47728_fptr, 0));

void* lam47730_fptr() // lam47730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47731 = arg_buffer[1];
//reading env and args
void* a4737447587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47731))[6];
//not do dummy comment
void* lst = (decode_clo(env47731))[5];
//not do dummy comment
void* kont47466 = (decode_clo(env47731))[4];
//not do dummy comment
void* fun = (decode_clo(env47731))[3];
//not do dummy comment
void* acc = (decode_clo(env47731))[2];
//not do dummy comment
void* foldl = (decode_clo(env47731))[1];

//creating new closure instance
void** clo48162 = alloc_clo(lam47728_fptr, 5);

//setting env list
clo48162[1] = foldl;
clo48162[2] = fun;
clo48162[3] = kont47466;
clo48162[4] = lst;
clo48162[5] = cdr;
void* f4746847588 = encode_clo(clo48162);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4746847588;
arg_buffer[3] = a4737447587;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47730 = encode_clo(alloc_clo(lam47730_fptr, 0));

void* lam47732_fptr() // lam47732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47733 = arg_buffer[1];
//reading env and args
void* a4737347585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47733))[7];
//not do dummy comment
void* lst = (decode_clo(env47733))[6];
//not do dummy comment
void* kont47466 = (decode_clo(env47733))[5];
//not do dummy comment
void* fun = (decode_clo(env47733))[4];
//not do dummy comment
void* acc = (decode_clo(env47733))[3];
//not do dummy comment
void* car = (decode_clo(env47733))[2];
//not do dummy comment
void* foldl = (decode_clo(env47733))[1];

//if-clause
bool if_guard48163 = is_true(a4737347585);
if(if_guard48163)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47466);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47466))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48165 = alloc_clo(lam47730_fptr, 6);

//setting env list
clo48165[1] = foldl;
clo48165[2] = acc;
clo48165[3] = fun;
clo48165[4] = kont47466;
clo48165[5] = lst;
clo48165[6] = cdr;
void* f4746947586 = encode_clo(clo48165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4746947586;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47732 = encode_clo(alloc_clo(lam47732_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47734 = arg_buffer[1];
//reading env and args
void* kont47466 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo48167 = alloc_clo(lam47732_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo48167[1] = foldl;
clo48167[2] = car;
clo48167[3] = acc;
clo48167[4] = fun;
clo48167[5] = kont47466;
clo48167[6] = lst;
clo48167[7] = cdr;
void* f4747047584 = encode_clo(clo48167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4747047584;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam47735_fptr() // lam47735 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47736 = arg_buffer[1];
//reading env and args
void* a4738047599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47736))[3];
//not do dummy comment
void* a4737847595 = (decode_clo(env47736))[2];
//not do dummy comment
void* kont47471 = (decode_clo(env47736))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont47471;
arg_buffer[3] = a4737847595;
arg_buffer[4] = a4738047599;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47735 = encode_clo(alloc_clo(lam47735_fptr, 0));

void* lam47737_fptr() // lam47737 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47738 = arg_buffer[1];
//reading env and args
void* a4737947597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47738))[5];
//not do dummy comment
void* a4737847595 = (decode_clo(env47738))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47738))[3];
//not do dummy comment
void* cons = (decode_clo(env47738))[2];
//not do dummy comment
void* kont47471 = (decode_clo(env47738))[1];

//creating new closure instance
void** clo48169 = alloc_clo(lam47735_fptr, 3);

//setting env list
clo48169[1] = kont47471;
clo48169[2] = a4737847595;
clo48169[3] = reverse_u45helper;
void* f4747247598 = encode_clo(clo48169);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4747247598;
arg_buffer[3] = a4737947597;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47737 = encode_clo(alloc_clo(lam47737_fptr, 0));

void* lam47739_fptr() // lam47739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47740 = arg_buffer[1];
//reading env and args
void* a4737847595 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47740))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47740))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47740))[4];
//not do dummy comment
void* car = (decode_clo(env47740))[3];
//not do dummy comment
void* cons = (decode_clo(env47740))[2];
//not do dummy comment
void* kont47471 = (decode_clo(env47740))[1];

//creating new closure instance
void** clo48171 = alloc_clo(lam47737_fptr, 5);

//setting env list
clo48171[1] = kont47471;
clo48171[2] = cons;
clo48171[3] = lst2;
clo48171[4] = a4737847595;
clo48171[5] = reverse_u45helper;
void* f4747347596 = encode_clo(clo48171);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4747347596;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47739 = encode_clo(alloc_clo(lam47739_fptr, 0));

void* lam47741_fptr() // lam47741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47742 = arg_buffer[1];
//reading env and args
void* a4737747593 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47742))[7];
//not do dummy comment
void* lst = (decode_clo(env47742))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47742))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47742))[4];
//not do dummy comment
void* car = (decode_clo(env47742))[3];
//not do dummy comment
void* cons = (decode_clo(env47742))[2];
//not do dummy comment
void* kont47471 = (decode_clo(env47742))[1];

//if-clause
bool if_guard48172 = is_true(a4737747593);
if(if_guard48172)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47471);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47471))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48174 = alloc_clo(lam47739_fptr, 6);

//setting env list
clo48174[1] = kont47471;
clo48174[2] = cons;
clo48174[3] = car;
clo48174[4] = lst2;
clo48174[5] = reverse_u45helper;
clo48174[6] = lst;
void* f4747447594 = encode_clo(clo48174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4747447594;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47741 = encode_clo(alloc_clo(lam47741_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47743 = arg_buffer[1];
//reading env and args
void* kont47471 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48176 = alloc_clo(lam47741_fptr, 7);

//setting env list
clo48176[1] = kont47471;
clo48176[2] = cons;
clo48176[3] = car;
clo48176[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo48176[5] = reverse_u45helper;
clo48176[6] = lst;
clo48176[7] = cdr;
void* f4747547592 = encode_clo(clo48176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4747547592;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam47744_fptr() // lam47744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47745 = arg_buffer[1];
//reading env and args
void* a4738147601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47476 = (decode_clo(env47745))[3];
//not do dummy comment
void* lst = (decode_clo(env47745))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47745))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont47476;
arg_buffer[3] = lst;
arg_buffer[4] = a4738147601;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47744 = encode_clo(alloc_clo(lam47744_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47746 = arg_buffer[1];
//reading env and args
void* kont47476 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo48178 = alloc_clo(lam47744_fptr, 3);

//setting env list
clo48178[1] = reverse_u45helper;
clo48178[2] = lst;
clo48178[3] = kont47476;
void* f4747747600 = encode_clo(clo48178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4747747600;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam47747_fptr() // lam47747 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47748 = arg_buffer[1];
//reading env and args
void* x4738447606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47478 = (decode_clo(env47748))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47478);
arg_buffer[2] = x4738447606;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47478))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47747 = encode_clo(alloc_clo(lam47747_fptr, 0));

void* lam47749_fptr() // lam47749 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47750 = arg_buffer[1];
//reading env and args
void* a4738947615 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47478 = (decode_clo(env47750))[4];
//not do dummy comment
void* a4738547608 = (decode_clo(env47750))[3];
//not do dummy comment
void* a4738747611 = (decode_clo(env47750))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env47750))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont47478;
arg_buffer[3] = a4738547608;
arg_buffer[4] = a4738747611;
arg_buffer[5] = a4738947615;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47749 = encode_clo(alloc_clo(lam47749_fptr, 0));

void* lam47751_fptr() // lam47751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47752 = arg_buffer[1];
//reading env and args
void* a4738847613 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47478 = (decode_clo(env47752))[6];
//not do dummy comment
void* a4738547608 = (decode_clo(env47752))[5];
//not do dummy comment
void* a4738747611 = (decode_clo(env47752))[4];
//not do dummy comment
void* cons = (decode_clo(env47752))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47752))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47752))[1];

//creating new closure instance
void** clo48180 = alloc_clo(lam47749_fptr, 4);

//setting env list
clo48180[1] = take_u45helper;
clo48180[2] = a4738747611;
clo48180[3] = a4738547608;
clo48180[4] = kont47478;
void* f4748047614 = encode_clo(clo48180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4748047614;
arg_buffer[3] = a4738847613;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47751 = encode_clo(alloc_clo(lam47751_fptr, 0));

void* lam47753_fptr() // lam47753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47754 = arg_buffer[1];
//reading env and args
void* a4738747611 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47754))[7];
//not do dummy comment
void* kont47478 = (decode_clo(env47754))[6];
//not do dummy comment
void* a4738547608 = (decode_clo(env47754))[5];
//not do dummy comment
void* car = (decode_clo(env47754))[4];
//not do dummy comment
void* cons = (decode_clo(env47754))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47754))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47754))[1];

//creating new closure instance
void** clo48182 = alloc_clo(lam47751_fptr, 6);

//setting env list
clo48182[1] = lst2;
clo48182[2] = take_u45helper;
clo48182[3] = cons;
clo48182[4] = a4738747611;
clo48182[5] = a4738547608;
clo48182[6] = kont47478;
void* f4748147612 = encode_clo(clo48182);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4748147612;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47753 = encode_clo(alloc_clo(lam47753_fptr, 0));

void* lam47756_fptr() // lam47756 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47757 = arg_buffer[1];
//reading env and args
void* a4738547608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47757))[8];
//not do dummy comment
void* kont47478 = (decode_clo(env47757))[7];
//not do dummy comment
void* cons = (decode_clo(env47757))[6];
//not do dummy comment
void* _u45 = (decode_clo(env47757))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env47757))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47757))[3];
//not do dummy comment
void* n = (decode_clo(env47757))[2];
//not do dummy comment
void* car = (decode_clo(env47757))[1];
mpz_t* mpzvar48183 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48183, "1", 10);
void* a4738647609 = encode_mpz(mpzvar48183);

//creating new closure instance
void** clo48185 = alloc_clo(lam47753_fptr, 7);

//setting env list
clo48185[1] = lst2;
clo48185[2] = take_u45helper;
clo48185[3] = cons;
clo48185[4] = car;
clo48185[5] = a4738547608;
clo48185[6] = kont47478;
clo48185[7] = lst;
void* f4748247610 = encode_clo(clo48185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4748247610;
arg_buffer[3] = n;
arg_buffer[4] = a4738647609;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47756 = encode_clo(alloc_clo(lam47756_fptr, 0));

void* lam47758_fptr() // lam47758 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47759 = arg_buffer[1];
//reading env and args
void* a4738347604 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47759))[10];
//not do dummy comment
void* lst = (decode_clo(env47759))[9];
//not do dummy comment
void* kont47478 = (decode_clo(env47759))[8];
//not do dummy comment
void* reverse = (decode_clo(env47759))[7];
//not do dummy comment
void* cons = (decode_clo(env47759))[6];
//not do dummy comment
void* _u45 = (decode_clo(env47759))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env47759))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47759))[3];
//not do dummy comment
void* n = (decode_clo(env47759))[2];
//not do dummy comment
void* car = (decode_clo(env47759))[1];

//if-clause
bool if_guard48186 = is_true(a4738347604);
if(if_guard48186)
{

//creating new closure instance
void** clo48188 = alloc_clo(lam47747_fptr, 1);

//setting env list
clo48188[1] = kont47478;
void* f4747947605 = encode_clo(clo48188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4747947605;
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
void** clo48190 = alloc_clo(lam47756_fptr, 8);

//setting env list
clo48190[1] = car;
clo48190[2] = n;
clo48190[3] = lst2;
clo48190[4] = take_u45helper;
clo48190[5] = _u45;
clo48190[6] = cons;
clo48190[7] = kont47478;
clo48190[8] = lst;
void* f4748347607 = encode_clo(clo48190);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4748347607;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47758 = encode_clo(alloc_clo(lam47758_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47761 = arg_buffer[1];
//reading env and args
void* kont47478 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar48191 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48191, "0", 10);
void* a4738247602 = encode_mpz(mpzvar48191);

//creating new closure instance
void** clo48193 = alloc_clo(lam47758_fptr, 10);

//setting env list
clo48193[1] = car;
clo48193[2] = n;
clo48193[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo48193[4] = take_u45helper;
clo48193[5] = _u45;
clo48193[6] = cons;
clo48193[7] = reverse;
clo48193[8] = kont47478;
clo48193[9] = lst;
clo48193[10] = cdr;
void* f4748447603 = encode_clo(clo48193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4748447603;
arg_buffer[3] = n;
arg_buffer[4] = a4738247602;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam47762_fptr() // lam47762 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47763 = arg_buffer[1];
//reading env and args
void* a4739047617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47763))[4];
//not do dummy comment
void* n = (decode_clo(env47763))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47763))[2];
//not do dummy comment
void* kont47485 = (decode_clo(env47763))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont47485;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4739047617;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47762 = encode_clo(alloc_clo(lam47762_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47764 = arg_buffer[1];
//reading env and args
void* kont47485 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48195 = alloc_clo(lam47762_fptr, 4);

//setting env list
clo48195[1] = kont47485;
clo48195[2] = take_u45helper;
clo48195[3] = n;
clo48195[4] = lst;
void* f4748647616 = encode_clo(clo48195);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4748647616;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam47766_fptr() // lam47766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47767 = arg_buffer[1];
//reading env and args
void* a4739547625 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4739347621 = (decode_clo(env47767))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47767))[2];
//not do dummy comment
void* kont47487 = (decode_clo(env47767))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont47487;
arg_buffer[3] = a4739347621;
arg_buffer[4] = a4739547625;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47766 = encode_clo(alloc_clo(lam47766_fptr, 0));

void* lam47768_fptr() // lam47768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47769 = arg_buffer[1];
//reading env and args
void* a4739447623 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4739347621 = (decode_clo(env47769))[4];
//not do dummy comment
void* length = (decode_clo(env47769))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47769))[2];
//not do dummy comment
void* kont47487 = (decode_clo(env47769))[1];

//creating new closure instance
void** clo48197 = alloc_clo(lam47766_fptr, 3);

//setting env list
clo48197[1] = kont47487;
clo48197[2] = _u43;
clo48197[3] = a4739347621;
void* f4748847624 = encode_clo(clo48197);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4748847624;
arg_buffer[3] = a4739447623;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47768 = encode_clo(alloc_clo(lam47768_fptr, 0));

void* lam47771_fptr() // lam47771 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47772 = arg_buffer[1];
//reading env and args
void* a4739147619 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47772))[5];
//not do dummy comment
void* lst = (decode_clo(env47772))[4];
//not do dummy comment
void* length = (decode_clo(env47772))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47772))[2];
//not do dummy comment
void* kont47487 = (decode_clo(env47772))[1];

//if-clause
bool if_guard48198 = is_true(a4739147619);
if(if_guard48198)
{
mpz_t* mpzvar48199 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48199, "0", 10);
void* x4739247620 = encode_mpz(mpzvar48199);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47487);
arg_buffer[2] = x4739247620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47487))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar48200 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48200, "1", 10);
void* a4739347621 = encode_mpz(mpzvar48200);

//creating new closure instance
void** clo48202 = alloc_clo(lam47768_fptr, 4);

//setting env list
clo48202[1] = kont47487;
clo48202[2] = _u43;
clo48202[3] = length;
clo48202[4] = a4739347621;
void* f4748947622 = encode_clo(clo48202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4748947622;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47771 = encode_clo(alloc_clo(lam47771_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47773 = arg_buffer[1];
//reading env and args
void* kont47487 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo48204 = alloc_clo(lam47771_fptr, 5);

//setting env list
clo48204[1] = kont47487;
clo48204[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo48204[3] = length;
clo48204[4] = lst;
clo48204[5] = cdr;
void* f4749047618 = encode_clo(clo48204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4749047618;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam47774_fptr() // lam47774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47775 = arg_buffer[1];
//reading env and args
void* x4739747629 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47491 = (decode_clo(env47775))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47491);
arg_buffer[2] = x4739747629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47491))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47774 = encode_clo(alloc_clo(lam47774_fptr, 0));

void* lam47776_fptr() // lam47776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47777 = arg_buffer[1];
//reading env and args
void* a4740147637 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4739947633 = (decode_clo(env47777))[3];
//not do dummy comment
void* kont47491 = (decode_clo(env47777))[2];
//not do dummy comment
void* cons = (decode_clo(env47777))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont47491;
arg_buffer[3] = a4739947633;
arg_buffer[4] = a4740147637;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47776 = encode_clo(alloc_clo(lam47776_fptr, 0));

void* lam47778_fptr() // lam47778 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47779 = arg_buffer[1];
//reading env and args
void* a4740047635 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4739947633 = (decode_clo(env47779))[5];
//not do dummy comment
void* kont47491 = (decode_clo(env47779))[4];
//not do dummy comment
void* map = (decode_clo(env47779))[3];
//not do dummy comment
void* proc = (decode_clo(env47779))[2];
//not do dummy comment
void* cons = (decode_clo(env47779))[1];

//creating new closure instance
void** clo48206 = alloc_clo(lam47776_fptr, 3);

//setting env list
clo48206[1] = cons;
clo48206[2] = kont47491;
clo48206[3] = a4739947633;
void* f4749347636 = encode_clo(clo48206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4749347636;
arg_buffer[3] = proc;
arg_buffer[4] = a4740047635;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47778 = encode_clo(alloc_clo(lam47778_fptr, 0));

void* lam47780_fptr() // lam47780 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47781 = arg_buffer[1];
//reading env and args
void* a4739947633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47781))[6];
//not do dummy comment
void* kont47491 = (decode_clo(env47781))[5];
//not do dummy comment
void* lst = (decode_clo(env47781))[4];
//not do dummy comment
void* map = (decode_clo(env47781))[3];
//not do dummy comment
void* proc = (decode_clo(env47781))[2];
//not do dummy comment
void* cons = (decode_clo(env47781))[1];

//creating new closure instance
void** clo48208 = alloc_clo(lam47778_fptr, 5);

//setting env list
clo48208[1] = cons;
clo48208[2] = proc;
clo48208[3] = map;
clo48208[4] = kont47491;
clo48208[5] = a4739947633;
void* f4749447634 = encode_clo(clo48208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4749447634;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47780 = encode_clo(alloc_clo(lam47780_fptr, 0));

void* lam47782_fptr() // lam47782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47783 = arg_buffer[1];
//reading env and args
void* a4739847631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47783))[6];
//not do dummy comment
void* kont47491 = (decode_clo(env47783))[5];
//not do dummy comment
void* lst = (decode_clo(env47783))[4];
//not do dummy comment
void* map = (decode_clo(env47783))[3];
//not do dummy comment
void* proc = (decode_clo(env47783))[2];
//not do dummy comment
void* cons = (decode_clo(env47783))[1];

//creating new closure instance
void** clo48210 = alloc_clo(lam47780_fptr, 6);

//setting env list
clo48210[1] = cons;
clo48210[2] = proc;
clo48210[3] = map;
clo48210[4] = lst;
clo48210[5] = kont47491;
clo48210[6] = cdr;
void* f4749547632 = encode_clo(clo48210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4749547632;
arg_buffer[3] = a4739847631;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47782 = encode_clo(alloc_clo(lam47782_fptr, 0));

void* lam47784_fptr() // lam47784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47785 = arg_buffer[1];
//reading env and args
void* a4739647627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47491 = (decode_clo(env47785))[8];
//not do dummy comment
void* lst = (decode_clo(env47785))[7];
//not do dummy comment
void* map = (decode_clo(env47785))[6];
//not do dummy comment
void* proc = (decode_clo(env47785))[5];
//not do dummy comment
void* car = (decode_clo(env47785))[4];
//not do dummy comment
void* cons = (decode_clo(env47785))[3];
//not do dummy comment
void* list = (decode_clo(env47785))[2];
//not do dummy comment
void* cdr = (decode_clo(env47785))[1];

//if-clause
bool if_guard48211 = is_true(a4739647627);
if(if_guard48211)
{

//creating new closure instance
void** clo48213 = alloc_clo(lam47774_fptr, 1);

//setting env list
clo48213[1] = kont47491;
void* f4749247628 = encode_clo(clo48213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4749247628;
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
void** clo48215 = alloc_clo(lam47782_fptr, 6);

//setting env list
clo48215[1] = cons;
clo48215[2] = proc;
clo48215[3] = map;
clo48215[4] = lst;
clo48215[5] = kont47491;
clo48215[6] = cdr;
void* f4749647630 = encode_clo(clo48215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4749647630;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47784 = encode_clo(alloc_clo(lam47784_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47786 = arg_buffer[1];
//reading env and args
void* kont47491 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48217 = alloc_clo(lam47784_fptr, 8);

//setting env list
clo48217[1] = cdr;
clo48217[2] = list;
clo48217[3] = cons;
clo48217[4] = car;
clo48217[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo48217[6] = map;
clo48217[7] = lst;
clo48217[8] = kont47491;
void* f4749747626 = encode_clo(clo48217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4749747626;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam47787_fptr() // lam47787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47788 = arg_buffer[1];
//reading env and args
void* x4740347641 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47498 = (decode_clo(env47788))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47498);
arg_buffer[2] = x4740347641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47498))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47787 = encode_clo(alloc_clo(lam47787_fptr, 0));

void* lam47789_fptr() // lam47789 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47790 = arg_buffer[1];
//reading env and args
void* a4740847651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47498 = (decode_clo(env47790))[3];
//not do dummy comment
void* cons = (decode_clo(env47790))[2];
//not do dummy comment
void* a4740647647 = (decode_clo(env47790))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont47498;
arg_buffer[3] = a4740647647;
arg_buffer[4] = a4740847651;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47789 = encode_clo(alloc_clo(lam47789_fptr, 0));

void* lam47791_fptr() // lam47791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47792 = arg_buffer[1];
//reading env and args
void* a4740747649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env47792))[5];
//not do dummy comment
void* kont47498 = (decode_clo(env47792))[4];
//not do dummy comment
void* filter = (decode_clo(env47792))[3];
//not do dummy comment
void* cons = (decode_clo(env47792))[2];
//not do dummy comment
void* a4740647647 = (decode_clo(env47792))[1];

//creating new closure instance
void** clo48219 = alloc_clo(lam47789_fptr, 3);

//setting env list
clo48219[1] = a4740647647;
clo48219[2] = cons;
clo48219[3] = kont47498;
void* f4750047650 = encode_clo(clo48219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4750047650;
arg_buffer[3] = op;
arg_buffer[4] = a4740747649;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47791 = encode_clo(alloc_clo(lam47791_fptr, 0));

void* lam47793_fptr() // lam47793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47794 = arg_buffer[1];
//reading env and args
void* a4740647647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47794))[6];
//not do dummy comment
void* lst = (decode_clo(env47794))[5];
//not do dummy comment
void* op = (decode_clo(env47794))[4];
//not do dummy comment
void* kont47498 = (decode_clo(env47794))[3];
//not do dummy comment
void* filter = (decode_clo(env47794))[2];
//not do dummy comment
void* cons = (decode_clo(env47794))[1];

//creating new closure instance
void** clo48221 = alloc_clo(lam47791_fptr, 5);

//setting env list
clo48221[1] = a4740647647;
clo48221[2] = cons;
clo48221[3] = filter;
clo48221[4] = kont47498;
clo48221[5] = op;
void* f4750147648 = encode_clo(clo48221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4750147648;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47793 = encode_clo(alloc_clo(lam47793_fptr, 0));

void* lam47795_fptr() // lam47795 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47796 = arg_buffer[1];
//reading env and args
void* a4740947653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env47796))[3];
//not do dummy comment
void* kont47498 = (decode_clo(env47796))[2];
//not do dummy comment
void* filter = (decode_clo(env47796))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont47498;
arg_buffer[3] = op;
arg_buffer[4] = a4740947653;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47795 = encode_clo(alloc_clo(lam47795_fptr, 0));

void* lam47797_fptr() // lam47797 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47798 = arg_buffer[1];
//reading env and args
void* a4740547645 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47798))[7];
//not do dummy comment
void* lst = (decode_clo(env47798))[6];
//not do dummy comment
void* op = (decode_clo(env47798))[5];
//not do dummy comment
void* kont47498 = (decode_clo(env47798))[4];
//not do dummy comment
void* cons = (decode_clo(env47798))[3];
//not do dummy comment
void* filter = (decode_clo(env47798))[2];
//not do dummy comment
void* car = (decode_clo(env47798))[1];

//if-clause
bool if_guard48222 = is_true(a4740547645);
if(if_guard48222)
{

//creating new closure instance
void** clo48224 = alloc_clo(lam47793_fptr, 6);

//setting env list
clo48224[1] = cons;
clo48224[2] = filter;
clo48224[3] = kont47498;
clo48224[4] = op;
clo48224[5] = lst;
clo48224[6] = cdr;
void* f4750247646 = encode_clo(clo48224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4750247646;
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
void** clo48226 = alloc_clo(lam47795_fptr, 3);

//setting env list
clo48226[1] = filter;
clo48226[2] = kont47498;
clo48226[3] = op;
void* f4750347652 = encode_clo(clo48226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4750347652;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47797 = encode_clo(alloc_clo(lam47797_fptr, 0));

void* lam47799_fptr() // lam47799 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47800 = arg_buffer[1];
//reading env and args
void* a4740447643 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47800))[7];
//not do dummy comment
void* lst = (decode_clo(env47800))[6];
//not do dummy comment
void* op = (decode_clo(env47800))[5];
//not do dummy comment
void* kont47498 = (decode_clo(env47800))[4];
//not do dummy comment
void* cons = (decode_clo(env47800))[3];
//not do dummy comment
void* filter = (decode_clo(env47800))[2];
//not do dummy comment
void* car = (decode_clo(env47800))[1];

//creating new closure instance
void** clo48228 = alloc_clo(lam47797_fptr, 7);

//setting env list
clo48228[1] = car;
clo48228[2] = filter;
clo48228[3] = cons;
clo48228[4] = kont47498;
clo48228[5] = op;
clo48228[6] = lst;
clo48228[7] = cdr;
void* f4750447644 = encode_clo(clo48228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4750447644;
arg_buffer[3] = a4740447643;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47799 = encode_clo(alloc_clo(lam47799_fptr, 0));

void* lam47801_fptr() // lam47801 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47802 = arg_buffer[1];
//reading env and args
void* a4740247639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47802))[8];
//not do dummy comment
void* op = (decode_clo(env47802))[7];
//not do dummy comment
void* kont47498 = (decode_clo(env47802))[6];
//not do dummy comment
void* cons = (decode_clo(env47802))[5];
//not do dummy comment
void* list = (decode_clo(env47802))[4];
//not do dummy comment
void* cdr = (decode_clo(env47802))[3];
//not do dummy comment
void* filter = (decode_clo(env47802))[2];
//not do dummy comment
void* car = (decode_clo(env47802))[1];

//if-clause
bool if_guard48229 = is_true(a4740247639);
if(if_guard48229)
{

//creating new closure instance
void** clo48231 = alloc_clo(lam47787_fptr, 1);

//setting env list
clo48231[1] = kont47498;
void* f4749947640 = encode_clo(clo48231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4749947640;
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
void** clo48233 = alloc_clo(lam47799_fptr, 7);

//setting env list
clo48233[1] = car;
clo48233[2] = filter;
clo48233[3] = cons;
clo48233[4] = kont47498;
clo48233[5] = op;
clo48233[6] = lst;
clo48233[7] = cdr;
void* f4750547642 = encode_clo(clo48233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4750547642;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47801 = encode_clo(alloc_clo(lam47801_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47803 = arg_buffer[1];
//reading env and args
void* kont47498 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48235 = alloc_clo(lam47801_fptr, 8);

//setting env list
clo48235[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo48235[2] = filter;
clo48235[3] = cdr;
clo48235[4] = list;
clo48235[5] = cons;
clo48235[6] = kont47498;
clo48235[7] = op;
clo48235[8] = lst;
void* f4750647638 = encode_clo(clo48235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4750647638;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam47804_fptr() // lam47804 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47805 = arg_buffer[1];
//reading env and args
void* a4741447661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47507 = (decode_clo(env47805))[3];
//not do dummy comment
void* drop = (decode_clo(env47805))[2];
//not do dummy comment
void* a4741247658 = (decode_clo(env47805))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont47507;
arg_buffer[3] = a4741247658;
arg_buffer[4] = a4741447661;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47804 = encode_clo(alloc_clo(lam47804_fptr, 0));

void* lam47807_fptr() // lam47807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47808 = arg_buffer[1];
//reading env and args
void* a4741247658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47507 = (decode_clo(env47808))[4];
//not do dummy comment
void* drop = (decode_clo(env47808))[3];
//not do dummy comment
void* n = (decode_clo(env47808))[2];
//not do dummy comment
void* _u45 = (decode_clo(env47808))[1];
mpz_t* mpzvar48236 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48236, "1", 10);
void* a4741347659 = encode_mpz(mpzvar48236);

//creating new closure instance
void** clo48238 = alloc_clo(lam47804_fptr, 3);

//setting env list
clo48238[1] = a4741247658;
clo48238[2] = drop;
clo48238[3] = kont47507;
void* f4750847660 = encode_clo(clo48238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4750847660;
arg_buffer[3] = n;
arg_buffer[4] = a4741347659;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47807 = encode_clo(alloc_clo(lam47807_fptr, 0));

void* lam47809_fptr() // lam47809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47810 = arg_buffer[1];
//reading env and args
void* a4741147656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47810))[6];
//not do dummy comment
void* kont47507 = (decode_clo(env47810))[5];
//not do dummy comment
void* n = (decode_clo(env47810))[4];
//not do dummy comment
void* _u45 = (decode_clo(env47810))[3];
//not do dummy comment
void* lst = (decode_clo(env47810))[2];
//not do dummy comment
void* drop = (decode_clo(env47810))[1];

//if-clause
bool if_guard48239 = is_true(a4741147656);
if(if_guard48239)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47507);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47507))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48241 = alloc_clo(lam47807_fptr, 4);

//setting env list
clo48241[1] = _u45;
clo48241[2] = n;
clo48241[3] = drop;
clo48241[4] = kont47507;
void* f4750947657 = encode_clo(clo48241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4750947657;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47809 = encode_clo(alloc_clo(lam47809_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47812 = arg_buffer[1];
//reading env and args
void* kont47507 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar48242 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48242, "0", 10);
void* a4741047654 = encode_mpz(mpzvar48242);

//creating new closure instance
void** clo48244 = alloc_clo(lam47809_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo48244[1] = drop;
clo48244[2] = lst;
clo48244[3] = _u45;
clo48244[4] = n;
clo48244[5] = kont47507;
clo48244[6] = cdr;
void* f4751047655 = encode_clo(clo48244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4751047655;
arg_buffer[3] = n;
arg_buffer[4] = a4741047654;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam47813_fptr() // lam47813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47814 = arg_buffer[1];
//reading env and args
void* a4741847669 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4741647665 = (decode_clo(env47814))[3];
//not do dummy comment
void* kont47511 = (decode_clo(env47814))[2];
//not do dummy comment
void* proc = (decode_clo(env47814))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont47511;
arg_buffer[3] = a4741647665;
arg_buffer[4] = a4741847669;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47813 = encode_clo(alloc_clo(lam47813_fptr, 0));

void* lam47815_fptr() // lam47815 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47816 = arg_buffer[1];
//reading env and args
void* a4741747667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4741647665 = (decode_clo(env47816))[5];
//not do dummy comment
void* foldr = (decode_clo(env47816))[4];
//not do dummy comment
void* kont47511 = (decode_clo(env47816))[3];
//not do dummy comment
void* proc = (decode_clo(env47816))[2];
//not do dummy comment
void* acc = (decode_clo(env47816))[1];

//creating new closure instance
void** clo48246 = alloc_clo(lam47813_fptr, 3);

//setting env list
clo48246[1] = proc;
clo48246[2] = kont47511;
clo48246[3] = a4741647665;
void* f4751247668 = encode_clo(clo48246);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4751247668;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4741747667;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47815 = encode_clo(alloc_clo(lam47815_fptr, 0));

void* lam47817_fptr() // lam47817 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47818 = arg_buffer[1];
//reading env and args
void* a4741647665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47818))[6];
//not do dummy comment
void* kont47511 = (decode_clo(env47818))[5];
//not do dummy comment
void* foldr = (decode_clo(env47818))[4];
//not do dummy comment
void* lst = (decode_clo(env47818))[3];
//not do dummy comment
void* proc = (decode_clo(env47818))[2];
//not do dummy comment
void* acc = (decode_clo(env47818))[1];

//creating new closure instance
void** clo48248 = alloc_clo(lam47815_fptr, 5);

//setting env list
clo48248[1] = acc;
clo48248[2] = proc;
clo48248[3] = kont47511;
clo48248[4] = foldr;
clo48248[5] = a4741647665;
void* f4751347666 = encode_clo(clo48248);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4751347666;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47817 = encode_clo(alloc_clo(lam47817_fptr, 0));

void* lam47819_fptr() // lam47819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47820 = arg_buffer[1];
//reading env and args
void* a4741547663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47820))[7];
//not do dummy comment
void* kont47511 = (decode_clo(env47820))[6];
//not do dummy comment
void* car = (decode_clo(env47820))[5];
//not do dummy comment
void* foldr = (decode_clo(env47820))[4];
//not do dummy comment
void* lst = (decode_clo(env47820))[3];
//not do dummy comment
void* proc = (decode_clo(env47820))[2];
//not do dummy comment
void* acc = (decode_clo(env47820))[1];

//if-clause
bool if_guard48249 = is_true(a4741547663);
if(if_guard48249)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47511);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47511))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48251 = alloc_clo(lam47817_fptr, 6);

//setting env list
clo48251[1] = acc;
clo48251[2] = proc;
clo48251[3] = lst;
clo48251[4] = foldr;
clo48251[5] = kont47511;
clo48251[6] = cdr;
void* f4751447664 = encode_clo(clo48251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4751447664;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47819 = encode_clo(alloc_clo(lam47819_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47821 = arg_buffer[1];
//reading env and args
void* kont47511 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo48253 = alloc_clo(lam47819_fptr, 7);

//setting env list
clo48253[1] = acc;
clo48253[2] = proc;
clo48253[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo48253[4] = foldr;
clo48253[5] = car;
clo48253[6] = kont47511;
clo48253[7] = cdr;
void* f4751547662 = encode_clo(clo48253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4751547662;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam47822_fptr() // lam47822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47823 = arg_buffer[1];
//reading env and args
void* a4742247677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4742047673 = (decode_clo(env47823))[3];
//not do dummy comment
void* kont47516 = (decode_clo(env47823))[2];
//not do dummy comment
void* cons = (decode_clo(env47823))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont47516;
arg_buffer[3] = a4742047673;
arg_buffer[4] = a4742247677;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47822 = encode_clo(alloc_clo(lam47822_fptr, 0));

void* lam47824_fptr() // lam47824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47825 = arg_buffer[1];
//reading env and args
void* a4742147675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47516 = (decode_clo(env47825))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47825))[4];
//not do dummy comment
void* cons = (decode_clo(env47825))[3];
//not do dummy comment
void* append = (decode_clo(env47825))[2];
//not do dummy comment
void* a4742047673 = (decode_clo(env47825))[1];

//creating new closure instance
void** clo48255 = alloc_clo(lam47822_fptr, 3);

//setting env list
clo48255[1] = cons;
clo48255[2] = kont47516;
clo48255[3] = a4742047673;
void* f4751747676 = encode_clo(clo48255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4751747676;
arg_buffer[3] = a4742147675;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47824 = encode_clo(alloc_clo(lam47824_fptr, 0));

void* lam47826_fptr() // lam47826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47827 = arg_buffer[1];
//reading env and args
void* a4742047673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47827))[6];
//not do dummy comment
void* append = (decode_clo(env47827))[5];
//not do dummy comment
void* kont47516 = (decode_clo(env47827))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47827))[3];
//not do dummy comment
void* lst1 = (decode_clo(env47827))[2];
//not do dummy comment
void* cons = (decode_clo(env47827))[1];

//creating new closure instance
void** clo48257 = alloc_clo(lam47824_fptr, 5);

//setting env list
clo48257[1] = a4742047673;
clo48257[2] = append;
clo48257[3] = cons;
clo48257[4] = lst2;
clo48257[5] = kont47516;
void* f4751847674 = encode_clo(clo48257);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4751847674;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47826 = encode_clo(alloc_clo(lam47826_fptr, 0));

void* lam47828_fptr() // lam47828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47829 = arg_buffer[1];
//reading env and args
void* a4741947671 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47829))[7];
//not do dummy comment
void* append = (decode_clo(env47829))[6];
//not do dummy comment
void* kont47516 = (decode_clo(env47829))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47829))[4];
//not do dummy comment
void* cons = (decode_clo(env47829))[3];
//not do dummy comment
void* lst1 = (decode_clo(env47829))[2];
//not do dummy comment
void* car = (decode_clo(env47829))[1];

//if-clause
bool if_guard48258 = is_true(a4741947671);
if(if_guard48258)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47516);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47516))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48260 = alloc_clo(lam47826_fptr, 6);

//setting env list
clo48260[1] = cons;
clo48260[2] = lst1;
clo48260[3] = lst2;
clo48260[4] = kont47516;
clo48260[5] = append;
clo48260[6] = cdr;
void* f4751947672 = encode_clo(clo48260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4751947672;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47828 = encode_clo(alloc_clo(lam47828_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47830 = arg_buffer[1];
//reading env and args
void* kont47516 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48262 = alloc_clo(lam47828_fptr, 7);

//setting env list
clo48262[1] = car;
clo48262[2] = lst1;
clo48262[3] = cons;
clo48262[4] = lst2;
clo48262[5] = kont47516;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo48262[6] = append;
clo48262[7] = cdr;
void* f4752047670 = encode_clo(clo48262);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4752047670;
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
void* _47831 = arg_buffer[1];
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

void* kont4752147678 = prim_car(lst);
void* lst47679 = prim_cdr(lst);
void* x4742347680 = apply_prim_hash(lst47679);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4752147678);
arg_buffer[2] = x4742347680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4752147678))[0]);
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
void* _47832 = arg_buffer[1];
//reading env and args
void* kont47523 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4742447681 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47523);
arg_buffer[2] = x4742447681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47523))[0]);
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
void* _47833 = arg_buffer[1];
//reading env and args
void* kont47524 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4742547682 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47524);
arg_buffer[2] = x4742547682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47524))[0]);
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
void* _47834 = arg_buffer[1];
//reading env and args
void* kont47525 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4742647683 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47525);
arg_buffer[2] = x4742647683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47525))[0]);
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
void* _47835 = arg_buffer[1];
//reading env and args
void* kont47526 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4742747684 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47526);
arg_buffer[2] = x4742747684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47526))[0]);
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
void* _47837 = arg_buffer[1];
//reading env and args
void* kont47527 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar48263 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48263, "1", 10);
void* a4742847685 = encode_mpz(mpzvar48263);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = kont47527;
arg_buffer[3] = a4742847685;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam47838_fptr() // lam47838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47839 = arg_buffer[1];
//reading env and args
void* x4742947687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47528 = (decode_clo(env47839))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47528);
arg_buffer[2] = x4742947687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47528))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47838 = encode_clo(alloc_clo(lam47838_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47840 = arg_buffer[1];
//reading env and args
void* kont47528 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo48265 = alloc_clo(lam47838_fptr, 1);

//setting env list
clo48265[1] = kont47528;
void* f4752947686 = encode_clo(clo48265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4752947686;
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

