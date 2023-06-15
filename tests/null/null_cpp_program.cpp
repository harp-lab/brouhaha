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
void* _96683 = arg_buffer[1];
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

void* kont9642596525 = prim_car(lst);
void* lst96526 = prim_cdr(lst);
void* x9634096527 = apply_prim__u43(lst96526);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9642596525);
arg_buffer[2] = x9634096527;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9642596525))[0]);
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
void* _96684 = arg_buffer[1];
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

void* kont9642796528 = prim_car(lst);
void* lst96529 = prim_cdr(lst);
void* x9634196530 = apply_prim__u45(lst96529);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9642796528);
arg_buffer[2] = x9634196530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9642796528))[0]);
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
void* _96685 = arg_buffer[1];
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

void* kont9642996531 = prim_car(lst);
void* lst96532 = prim_cdr(lst);
void* x9634296533 = apply_prim__u42(lst96532);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9642996531);
arg_buffer[2] = x9634296533;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9642996531))[0]);
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
void* _96686 = arg_buffer[1];
//reading env and args
void* kont96431 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9634396534 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96431);
arg_buffer[2] = x9634396534;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96431))[0]);
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
void* _96687 = arg_buffer[1];
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

void* kont9643296535 = prim_car(lst);
void* lst96536 = prim_cdr(lst);
void* x9634496537 = apply_prim__u47(lst96536);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9643296535);
arg_buffer[2] = x9634496537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9643296535))[0]);
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
void* _96688 = arg_buffer[1];
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

void* kont9643496538 = prim_car(lst);
void* lst96539 = prim_cdr(lst);
void* x9634596540 = apply_prim__u61(lst96539);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9643496538);
arg_buffer[2] = x9634596540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9643496538))[0]);
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
void* _96689 = arg_buffer[1];
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

void* kont9643696541 = prim_car(lst);
void* lst96542 = prim_cdr(lst);
void* x9634696543 = apply_prim__u62(lst96542);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9643696541);
arg_buffer[2] = x9634696543;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9643696541))[0]);
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
void* _96690 = arg_buffer[1];
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

void* kont9643896544 = prim_car(lst);
void* lst96545 = prim_cdr(lst);
void* x9634796546 = apply_prim__u60(lst96545);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9643896544);
arg_buffer[2] = x9634796546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9643896544))[0]);
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
void* _96691 = arg_buffer[1];
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

void* kont9644096547 = prim_car(lst);
void* lst96548 = prim_cdr(lst);
void* x9634896549 = apply_prim__u60_u61(lst96548);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9644096547);
arg_buffer[2] = x9634896549;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9644096547))[0]);
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
void* _96692 = arg_buffer[1];
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

void* kont9644296550 = prim_car(lst);
void* lst96551 = prim_cdr(lst);
void* x9634996552 = apply_prim__u62_u61(lst96551);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9644296550);
arg_buffer[2] = x9634996552;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9644296550))[0]);
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
void* _96693 = arg_buffer[1];
//reading env and args
void* kont96444 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x9635096553 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96444);
arg_buffer[2] = x9635096553;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96444))[0]);
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
void* _96694 = arg_buffer[1];
//reading env and args
void* kont96445 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9635196554 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96445);
arg_buffer[2] = x9635196554;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96445))[0]);
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
void* _96695 = arg_buffer[1];
//reading env and args
void* kont96446 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9635296555 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96446);
arg_buffer[2] = x9635296555;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96446))[0]);
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
void* _96696 = arg_buffer[1];
//reading env and args
void* kont96447 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9635396556 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96447);
arg_buffer[2] = x9635396556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96447))[0]);
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
void* _96697 = arg_buffer[1];
//reading env and args
void* kont96448 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9635496557 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96448);
arg_buffer[2] = x9635496557;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96448))[0]);
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
void* _96698 = arg_buffer[1];
//reading env and args
void* kont96449 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9635596558 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96449);
arg_buffer[2] = x9635596558;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96449))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam96699_fptr() // lam96699 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96700 = arg_buffer[1];
//reading env and args
void* a9635896562 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96450 = (decode_clo(env96700))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env96700))[2];
//not do dummy comment
void* a9635696559 = (decode_clo(env96700))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont96450;
arg_buffer[3] = a9635696559;
arg_buffer[4] = a9635896562;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96699 = encode_clo(alloc_clo(lam96699_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96703 = arg_buffer[1];
//reading env and args
void* kont96450 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar97136 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97136, "0", 10);
void* a9635696559 = encode_mpz(mpzvar97136);
mpz_t* mpzvar97137 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97137, "2", 10);
void* a9635796560 = encode_mpz(mpzvar97137);

//creating new closure instance
void** clo97139 = alloc_clo(lam96699_fptr, 3);

//setting env list
clo97139[1] = a9635696559;
clo97139[2] = equal_u63;
clo97139[3] = kont96450;
void* f9645196561 = encode_clo(clo97139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9645196561;
arg_buffer[3] = x;
arg_buffer[4] = a9635796560;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam96704_fptr() // lam96704 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96705 = arg_buffer[1];
//reading env and args
void* a9636196566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9635996563 = (decode_clo(env96705))[3];
//not do dummy comment
void* kont96452 = (decode_clo(env96705))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env96705))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont96452;
arg_buffer[3] = a9635996563;
arg_buffer[4] = a9636196566;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96704 = encode_clo(alloc_clo(lam96704_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96708 = arg_buffer[1];
//reading env and args
void* kont96452 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar97140 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97140, "1", 10);
void* a9635996563 = encode_mpz(mpzvar97140);
mpz_t* mpzvar97141 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97141, "2", 10);
void* a9636096564 = encode_mpz(mpzvar97141);

//creating new closure instance
void** clo97143 = alloc_clo(lam96704_fptr, 3);

//setting env list
clo97143[1] = equal_u63;
clo97143[2] = kont96452;
clo97143[3] = a9635996563;
void* f9645396565 = encode_clo(clo97143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9645396565;
arg_buffer[3] = x;
arg_buffer[4] = a9636096564;
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
void* _96709 = arg_buffer[1];
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

void* kont9645496567 = prim_car(x);
void* x96568 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9645496567);
arg_buffer[2] = x96568;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9645496567))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam96712_fptr() // lam96712 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96713 = arg_buffer[1];
//reading env and args
void* a9636796578 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96456 = (decode_clo(env96713))[3];
//not do dummy comment
void* x = (decode_clo(env96713))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env96713))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont96456;
arg_buffer[3] = x;
arg_buffer[4] = a9636796578;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96712 = encode_clo(alloc_clo(lam96712_fptr, 0));

void* lam96714_fptr() // lam96714 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96715 = arg_buffer[1];
//reading env and args
void* a9636596575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96715))[5];
//not do dummy comment
void* lst = (decode_clo(env96715))[4];
//not do dummy comment
void* kont96456 = (decode_clo(env96715))[3];
//not do dummy comment
void* x = (decode_clo(env96715))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env96715))[1];

//if-clause
bool if_guard97144 = is_true(a9636596575);
if(if_guard97144)
{
void* x9636696576 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96456);
arg_buffer[2] = x9636696576;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96456))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo97146 = alloc_clo(lam96712_fptr, 3);

//setting env list
clo97146[1] = member_u63;
clo97146[2] = x;
clo97146[3] = kont96456;
void* f9645796577 = encode_clo(clo97146);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9645796577;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96714 = encode_clo(alloc_clo(lam96714_fptr, 0));

void* lam96716_fptr() // lam96716 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96717 = arg_buffer[1];
//reading env and args
void* a9636496573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96717))[6];
//not do dummy comment
void* lst = (decode_clo(env96717))[5];
//not do dummy comment
void* kont96456 = (decode_clo(env96717))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env96717))[3];
//not do dummy comment
void* x = (decode_clo(env96717))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env96717))[1];

//creating new closure instance
void** clo97148 = alloc_clo(lam96714_fptr, 5);

//setting env list
clo97148[1] = member_u63;
clo97148[2] = x;
clo97148[3] = kont96456;
clo97148[4] = lst;
clo97148[5] = cdr;
void* f9645896574 = encode_clo(clo97148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9645896574;
arg_buffer[3] = a9636496573;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96716 = encode_clo(alloc_clo(lam96716_fptr, 0));

void* lam96718_fptr() // lam96718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96719 = arg_buffer[1];
//reading env and args
void* a9636296570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96719))[7];
//not do dummy comment
void* lst = (decode_clo(env96719))[6];
//not do dummy comment
void* kont96456 = (decode_clo(env96719))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env96719))[4];
//not do dummy comment
void* x = (decode_clo(env96719))[3];
//not do dummy comment
void* car = (decode_clo(env96719))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env96719))[1];

//if-clause
bool if_guard97149 = is_true(a9636296570);
if(if_guard97149)
{
void* x9636396571 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96456);
arg_buffer[2] = x9636396571;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96456))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo97151 = alloc_clo(lam96716_fptr, 6);

//setting env list
clo97151[1] = member_u63;
clo97151[2] = x;
clo97151[3] = equal_u63;
clo97151[4] = kont96456;
clo97151[5] = lst;
clo97151[6] = cdr;
void* f9645996572 = encode_clo(clo97151);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9645996572;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96718 = encode_clo(alloc_clo(lam96718_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96720 = arg_buffer[1];
//reading env and args
void* kont96456 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo97153 = alloc_clo(lam96718_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo97153[1] = member_u63;
clo97153[2] = car;
clo97153[3] = x;
clo97153[4] = equal_u63;
clo97153[5] = kont96456;
clo97153[6] = lst;
clo97153[7] = cdr;
void* f9646096569 = encode_clo(clo97153);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9646096569;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam96721_fptr() // lam96721 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96722 = arg_buffer[1];
//reading env and args
void* a9637196586 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9637096584 = (decode_clo(env96722))[4];
//not do dummy comment
void* fun = (decode_clo(env96722))[3];
//not do dummy comment
void* kont96461 = (decode_clo(env96722))[2];
//not do dummy comment
void* foldl = (decode_clo(env96722))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont96461;
arg_buffer[3] = fun;
arg_buffer[4] = a9637096584;
arg_buffer[5] = a9637196586;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96721 = encode_clo(alloc_clo(lam96721_fptr, 0));

void* lam96723_fptr() // lam96723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96724 = arg_buffer[1];
//reading env and args
void* a9637096584 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96724))[5];
//not do dummy comment
void* lst = (decode_clo(env96724))[4];
//not do dummy comment
void* fun = (decode_clo(env96724))[3];
//not do dummy comment
void* kont96461 = (decode_clo(env96724))[2];
//not do dummy comment
void* foldl = (decode_clo(env96724))[1];

//creating new closure instance
void** clo97155 = alloc_clo(lam96721_fptr, 4);

//setting env list
clo97155[1] = foldl;
clo97155[2] = kont96461;
clo97155[3] = fun;
clo97155[4] = a9637096584;
void* f9646296585 = encode_clo(clo97155);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9646296585;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96723 = encode_clo(alloc_clo(lam96723_fptr, 0));

void* lam96725_fptr() // lam96725 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96726 = arg_buffer[1];
//reading env and args
void* a9636996582 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96726))[6];
//not do dummy comment
void* lst = (decode_clo(env96726))[5];
//not do dummy comment
void* fun = (decode_clo(env96726))[4];
//not do dummy comment
void* acc = (decode_clo(env96726))[3];
//not do dummy comment
void* kont96461 = (decode_clo(env96726))[2];
//not do dummy comment
void* foldl = (decode_clo(env96726))[1];

//creating new closure instance
void** clo97157 = alloc_clo(lam96723_fptr, 5);

//setting env list
clo97157[1] = foldl;
clo97157[2] = kont96461;
clo97157[3] = fun;
clo97157[4] = lst;
clo97157[5] = cdr;
void* f9646396583 = encode_clo(clo97157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f9646396583;
arg_buffer[3] = a9636996582;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96725 = encode_clo(alloc_clo(lam96725_fptr, 0));

void* lam96727_fptr() // lam96727 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96728 = arg_buffer[1];
//reading env and args
void* a9636896580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96728))[7];
//not do dummy comment
void* lst = (decode_clo(env96728))[6];
//not do dummy comment
void* fun = (decode_clo(env96728))[5];
//not do dummy comment
void* acc = (decode_clo(env96728))[4];
//not do dummy comment
void* kont96461 = (decode_clo(env96728))[3];
//not do dummy comment
void* car = (decode_clo(env96728))[2];
//not do dummy comment
void* foldl = (decode_clo(env96728))[1];

//if-clause
bool if_guard97158 = is_true(a9636896580);
if(if_guard97158)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96461);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96461))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo97160 = alloc_clo(lam96725_fptr, 6);

//setting env list
clo97160[1] = foldl;
clo97160[2] = kont96461;
clo97160[3] = acc;
clo97160[4] = fun;
clo97160[5] = lst;
clo97160[6] = cdr;
void* f9646496581 = encode_clo(clo97160);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9646496581;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96727 = encode_clo(alloc_clo(lam96727_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96729 = arg_buffer[1];
//reading env and args
void* kont96461 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo97162 = alloc_clo(lam96727_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo97162[1] = foldl;
clo97162[2] = car;
clo97162[3] = kont96461;
clo97162[4] = acc;
clo97162[5] = fun;
clo97162[6] = lst;
clo97162[7] = cdr;
void* f9646596579 = encode_clo(clo97162);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9646596579;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam96730_fptr() // lam96730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96731 = arg_buffer[1];
//reading env and args
void* a9637596594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96466 = (decode_clo(env96731))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96731))[2];
//not do dummy comment
void* a9637396590 = (decode_clo(env96731))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont96466;
arg_buffer[3] = a9637396590;
arg_buffer[4] = a9637596594;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96730 = encode_clo(alloc_clo(lam96730_fptr, 0));

void* lam96732_fptr() // lam96732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96733 = arg_buffer[1];
//reading env and args
void* a9637496592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96466 = (decode_clo(env96733))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96733))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96733))[3];
//not do dummy comment
void* a9637396590 = (decode_clo(env96733))[2];
//not do dummy comment
void* cons = (decode_clo(env96733))[1];

//creating new closure instance
void** clo97164 = alloc_clo(lam96730_fptr, 3);

//setting env list
clo97164[1] = a9637396590;
clo97164[2] = reverse_u45helper;
clo97164[3] = kont96466;
void* f9646796593 = encode_clo(clo97164);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9646796593;
arg_buffer[3] = a9637496592;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96732 = encode_clo(alloc_clo(lam96732_fptr, 0));

void* lam96734_fptr() // lam96734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96735 = arg_buffer[1];
//reading env and args
void* a9637396590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96466 = (decode_clo(env96735))[6];
//not do dummy comment
void* lst = (decode_clo(env96735))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96735))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96735))[3];
//not do dummy comment
void* car = (decode_clo(env96735))[2];
//not do dummy comment
void* cons = (decode_clo(env96735))[1];

//creating new closure instance
void** clo97166 = alloc_clo(lam96732_fptr, 5);

//setting env list
clo97166[1] = cons;
clo97166[2] = a9637396590;
clo97166[3] = lst2;
clo97166[4] = reverse_u45helper;
clo97166[5] = kont96466;
void* f9646896591 = encode_clo(clo97166);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9646896591;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96734 = encode_clo(alloc_clo(lam96734_fptr, 0));

void* lam96736_fptr() // lam96736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96737 = arg_buffer[1];
//reading env and args
void* a9637296588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96737))[7];
//not do dummy comment
void* kont96466 = (decode_clo(env96737))[6];
//not do dummy comment
void* lst = (decode_clo(env96737))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96737))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96737))[3];
//not do dummy comment
void* car = (decode_clo(env96737))[2];
//not do dummy comment
void* cons = (decode_clo(env96737))[1];

//if-clause
bool if_guard97167 = is_true(a9637296588);
if(if_guard97167)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96466);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96466))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo97169 = alloc_clo(lam96734_fptr, 6);

//setting env list
clo97169[1] = cons;
clo97169[2] = car;
clo97169[3] = lst2;
clo97169[4] = reverse_u45helper;
clo97169[5] = lst;
clo97169[6] = kont96466;
void* f9646996589 = encode_clo(clo97169);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9646996589;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96736 = encode_clo(alloc_clo(lam96736_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96738 = arg_buffer[1];
//reading env and args
void* kont96466 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo97171 = alloc_clo(lam96736_fptr, 7);

//setting env list
clo97171[1] = cons;
clo97171[2] = car;
clo97171[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo97171[4] = reverse_u45helper;
clo97171[5] = lst;
clo97171[6] = kont96466;
clo97171[7] = cdr;
void* f9647096587 = encode_clo(clo97171);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9647096587;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam96739_fptr() // lam96739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96740 = arg_buffer[1];
//reading env and args
void* a9637696596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env96740))[3];
//not do dummy comment
void* kont96471 = (decode_clo(env96740))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env96740))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont96471;
arg_buffer[3] = lst;
arg_buffer[4] = a9637696596;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96739 = encode_clo(alloc_clo(lam96739_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96741 = arg_buffer[1];
//reading env and args
void* kont96471 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo97173 = alloc_clo(lam96739_fptr, 3);

//setting env list
clo97173[1] = reverse_u45helper;
clo97173[2] = kont96471;
clo97173[3] = lst;
void* f9647296595 = encode_clo(clo97173);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9647296595;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam96742_fptr() // lam96742 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96743 = arg_buffer[1];
//reading env and args
void* x9637996601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96473 = (decode_clo(env96743))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96473);
arg_buffer[2] = x9637996601;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96473))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96742 = encode_clo(alloc_clo(lam96742_fptr, 0));

void* lam96744_fptr() // lam96744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96745 = arg_buffer[1];
//reading env and args
void* a9638496610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96473 = (decode_clo(env96745))[4];
//not do dummy comment
void* a9638096603 = (decode_clo(env96745))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env96745))[2];
//not do dummy comment
void* a9638296606 = (decode_clo(env96745))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont96473;
arg_buffer[3] = a9638096603;
arg_buffer[4] = a9638296606;
arg_buffer[5] = a9638496610;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96744 = encode_clo(alloc_clo(lam96744_fptr, 0));

void* lam96746_fptr() // lam96746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96747 = arg_buffer[1];
//reading env and args
void* a9638396608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96473 = (decode_clo(env96747))[6];
//not do dummy comment
void* a9638096603 = (decode_clo(env96747))[5];
//not do dummy comment
void* a9638296606 = (decode_clo(env96747))[4];
//not do dummy comment
void* cons = (decode_clo(env96747))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env96747))[2];
//not do dummy comment
void* lst2 = (decode_clo(env96747))[1];

//creating new closure instance
void** clo97175 = alloc_clo(lam96744_fptr, 4);

//setting env list
clo97175[1] = a9638296606;
clo97175[2] = take_u45helper;
clo97175[3] = a9638096603;
clo97175[4] = kont96473;
void* f9647596609 = encode_clo(clo97175);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9647596609;
arg_buffer[3] = a9638396608;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96746 = encode_clo(alloc_clo(lam96746_fptr, 0));

void* lam96748_fptr() // lam96748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96749 = arg_buffer[1];
//reading env and args
void* a9638296606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env96749))[7];
//not do dummy comment
void* kont96473 = (decode_clo(env96749))[6];
//not do dummy comment
void* a9638096603 = (decode_clo(env96749))[5];
//not do dummy comment
void* car = (decode_clo(env96749))[4];
//not do dummy comment
void* cons = (decode_clo(env96749))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env96749))[2];
//not do dummy comment
void* lst2 = (decode_clo(env96749))[1];

//creating new closure instance
void** clo97177 = alloc_clo(lam96746_fptr, 6);

//setting env list
clo97177[1] = lst2;
clo97177[2] = take_u45helper;
clo97177[3] = cons;
clo97177[4] = a9638296606;
clo97177[5] = a9638096603;
clo97177[6] = kont96473;
void* f9647696607 = encode_clo(clo97177);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9647696607;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96748 = encode_clo(alloc_clo(lam96748_fptr, 0));

void* lam96751_fptr() // lam96751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96752 = arg_buffer[1];
//reading env and args
void* a9638096603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env96752))[8];
//not do dummy comment
void* kont96473 = (decode_clo(env96752))[7];
//not do dummy comment
void* cons = (decode_clo(env96752))[6];
//not do dummy comment
void* _u45 = (decode_clo(env96752))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env96752))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96752))[3];
//not do dummy comment
void* n = (decode_clo(env96752))[2];
//not do dummy comment
void* car = (decode_clo(env96752))[1];
mpz_t* mpzvar97178 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97178, "1", 10);
void* a9638196604 = encode_mpz(mpzvar97178);

//creating new closure instance
void** clo97180 = alloc_clo(lam96748_fptr, 7);

//setting env list
clo97180[1] = lst2;
clo97180[2] = take_u45helper;
clo97180[3] = cons;
clo97180[4] = car;
clo97180[5] = a9638096603;
clo97180[6] = kont96473;
clo97180[7] = lst;
void* f9647796605 = encode_clo(clo97180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9647796605;
arg_buffer[3] = n;
arg_buffer[4] = a9638196604;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96751 = encode_clo(alloc_clo(lam96751_fptr, 0));

void* lam96753_fptr() // lam96753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96754 = arg_buffer[1];
//reading env and args
void* a9637896599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96754))[10];
//not do dummy comment
void* lst = (decode_clo(env96754))[9];
//not do dummy comment
void* reverse = (decode_clo(env96754))[8];
//not do dummy comment
void* kont96473 = (decode_clo(env96754))[7];
//not do dummy comment
void* cons = (decode_clo(env96754))[6];
//not do dummy comment
void* _u45 = (decode_clo(env96754))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env96754))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96754))[3];
//not do dummy comment
void* n = (decode_clo(env96754))[2];
//not do dummy comment
void* car = (decode_clo(env96754))[1];

//if-clause
bool if_guard97181 = is_true(a9637896599);
if(if_guard97181)
{

//creating new closure instance
void** clo97183 = alloc_clo(lam96742_fptr, 1);

//setting env list
clo97183[1] = kont96473;
void* f9647496600 = encode_clo(clo97183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f9647496600;
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
void** clo97185 = alloc_clo(lam96751_fptr, 8);

//setting env list
clo97185[1] = car;
clo97185[2] = n;
clo97185[3] = lst2;
clo97185[4] = take_u45helper;
clo97185[5] = _u45;
clo97185[6] = cons;
clo97185[7] = kont96473;
clo97185[8] = lst;
void* f9647896602 = encode_clo(clo97185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9647896602;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96753 = encode_clo(alloc_clo(lam96753_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96756 = arg_buffer[1];
//reading env and args
void* kont96473 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar97186 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97186, "0", 10);
void* a9637796597 = encode_mpz(mpzvar97186);

//creating new closure instance
void** clo97188 = alloc_clo(lam96753_fptr, 10);

//setting env list
clo97188[1] = car;
clo97188[2] = n;
clo97188[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo97188[4] = take_u45helper;
clo97188[5] = _u45;
clo97188[6] = cons;
clo97188[7] = kont96473;
clo97188[8] = reverse;
clo97188[9] = lst;
clo97188[10] = cdr;
void* f9647996598 = encode_clo(clo97188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9647996598;
arg_buffer[3] = n;
arg_buffer[4] = a9637796597;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam96757_fptr() // lam96757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96758 = arg_buffer[1];
//reading env and args
void* a9638596612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env96758))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env96758))[3];
//not do dummy comment
void* n = (decode_clo(env96758))[2];
//not do dummy comment
void* kont96480 = (decode_clo(env96758))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont96480;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a9638596612;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96757 = encode_clo(alloc_clo(lam96757_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96759 = arg_buffer[1];
//reading env and args
void* kont96480 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo97190 = alloc_clo(lam96757_fptr, 4);

//setting env list
clo97190[1] = kont96480;
clo97190[2] = n;
clo97190[3] = take_u45helper;
clo97190[4] = lst;
void* f9648196611 = encode_clo(clo97190);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9648196611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam96761_fptr() // lam96761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96762 = arg_buffer[1];
//reading env and args
void* a9639096620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96482 = (decode_clo(env96762))[3];
//not do dummy comment
void* a9638896616 = (decode_clo(env96762))[2];
//not do dummy comment
void* _u43 = (decode_clo(env96762))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont96482;
arg_buffer[3] = a9638896616;
arg_buffer[4] = a9639096620;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96761 = encode_clo(alloc_clo(lam96761_fptr, 0));

void* lam96763_fptr() // lam96763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96764 = arg_buffer[1];
//reading env and args
void* a9638996618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96482 = (decode_clo(env96764))[4];
//not do dummy comment
void* length = (decode_clo(env96764))[3];
//not do dummy comment
void* a9638896616 = (decode_clo(env96764))[2];
//not do dummy comment
void* _u43 = (decode_clo(env96764))[1];

//creating new closure instance
void** clo97192 = alloc_clo(lam96761_fptr, 3);

//setting env list
clo97192[1] = _u43;
clo97192[2] = a9638896616;
clo97192[3] = kont96482;
void* f9648396619 = encode_clo(clo97192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f9648396619;
arg_buffer[3] = a9638996618;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96763 = encode_clo(alloc_clo(lam96763_fptr, 0));

void* lam96766_fptr() // lam96766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96767 = arg_buffer[1];
//reading env and args
void* a9638696614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96767))[5];
//not do dummy comment
void* kont96482 = (decode_clo(env96767))[4];
//not do dummy comment
void* lst = (decode_clo(env96767))[3];
//not do dummy comment
void* length = (decode_clo(env96767))[2];
//not do dummy comment
void* _u43 = (decode_clo(env96767))[1];

//if-clause
bool if_guard97193 = is_true(a9638696614);
if(if_guard97193)
{
mpz_t* mpzvar97194 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97194, "0", 10);
void* x9638796615 = encode_mpz(mpzvar97194);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96482);
arg_buffer[2] = x9638796615;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96482))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar97195 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97195, "1", 10);
void* a9638896616 = encode_mpz(mpzvar97195);

//creating new closure instance
void** clo97197 = alloc_clo(lam96763_fptr, 4);

//setting env list
clo97197[1] = _u43;
clo97197[2] = a9638896616;
clo97197[3] = length;
clo97197[4] = kont96482;
void* f9648496617 = encode_clo(clo97197);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9648496617;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96766 = encode_clo(alloc_clo(lam96766_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96768 = arg_buffer[1];
//reading env and args
void* kont96482 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo97199 = alloc_clo(lam96766_fptr, 5);

//setting env list
clo97199[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo97199[2] = length;
clo97199[3] = lst;
clo97199[4] = kont96482;
clo97199[5] = cdr;
void* f9648596613 = encode_clo(clo97199);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9648596613;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam96769_fptr() // lam96769 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96770 = arg_buffer[1];
//reading env and args
void* x9639296624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96486 = (decode_clo(env96770))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96486);
arg_buffer[2] = x9639296624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96486))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96769 = encode_clo(alloc_clo(lam96769_fptr, 0));

void* lam96771_fptr() // lam96771 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96772 = arg_buffer[1];
//reading env and args
void* a9639696632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9639496628 = (decode_clo(env96772))[3];
//not do dummy comment
void* kont96486 = (decode_clo(env96772))[2];
//not do dummy comment
void* cons = (decode_clo(env96772))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont96486;
arg_buffer[3] = a9639496628;
arg_buffer[4] = a9639696632;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96771 = encode_clo(alloc_clo(lam96771_fptr, 0));

void* lam96773_fptr() // lam96773 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96774 = arg_buffer[1];
//reading env and args
void* a9639596630 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9639496628 = (decode_clo(env96774))[5];
//not do dummy comment
void* proc = (decode_clo(env96774))[4];
//not do dummy comment
void* cons = (decode_clo(env96774))[3];
//not do dummy comment
void* map = (decode_clo(env96774))[2];
//not do dummy comment
void* kont96486 = (decode_clo(env96774))[1];

//creating new closure instance
void** clo97201 = alloc_clo(lam96771_fptr, 3);

//setting env list
clo97201[1] = cons;
clo97201[2] = kont96486;
clo97201[3] = a9639496628;
void* f9648896631 = encode_clo(clo97201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f9648896631;
arg_buffer[3] = proc;
arg_buffer[4] = a9639596630;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96773 = encode_clo(alloc_clo(lam96773_fptr, 0));

void* lam96775_fptr() // lam96775 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96776 = arg_buffer[1];
//reading env and args
void* a9639496628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96776))[6];
//not do dummy comment
void* lst = (decode_clo(env96776))[5];
//not do dummy comment
void* proc = (decode_clo(env96776))[4];
//not do dummy comment
void* cons = (decode_clo(env96776))[3];
//not do dummy comment
void* map = (decode_clo(env96776))[2];
//not do dummy comment
void* kont96486 = (decode_clo(env96776))[1];

//creating new closure instance
void** clo97203 = alloc_clo(lam96773_fptr, 5);

//setting env list
clo97203[1] = kont96486;
clo97203[2] = map;
clo97203[3] = cons;
clo97203[4] = proc;
clo97203[5] = a9639496628;
void* f9648996629 = encode_clo(clo97203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9648996629;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96775 = encode_clo(alloc_clo(lam96775_fptr, 0));

void* lam96777_fptr() // lam96777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96778 = arg_buffer[1];
//reading env and args
void* a9639396626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96778))[6];
//not do dummy comment
void* lst = (decode_clo(env96778))[5];
//not do dummy comment
void* proc = (decode_clo(env96778))[4];
//not do dummy comment
void* cons = (decode_clo(env96778))[3];
//not do dummy comment
void* map = (decode_clo(env96778))[2];
//not do dummy comment
void* kont96486 = (decode_clo(env96778))[1];

//creating new closure instance
void** clo97205 = alloc_clo(lam96775_fptr, 6);

//setting env list
clo97205[1] = kont96486;
clo97205[2] = map;
clo97205[3] = cons;
clo97205[4] = proc;
clo97205[5] = lst;
clo97205[6] = cdr;
void* f9649096627 = encode_clo(clo97205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f9649096627;
arg_buffer[3] = a9639396626;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96777 = encode_clo(alloc_clo(lam96777_fptr, 0));

void* lam96779_fptr() // lam96779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96780 = arg_buffer[1];
//reading env and args
void* a9639196622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env96780))[8];
//not do dummy comment
void* proc = (decode_clo(env96780))[7];
//not do dummy comment
void* car = (decode_clo(env96780))[6];
//not do dummy comment
void* cons = (decode_clo(env96780))[5];
//not do dummy comment
void* list = (decode_clo(env96780))[4];
//not do dummy comment
void* cdr = (decode_clo(env96780))[3];
//not do dummy comment
void* map = (decode_clo(env96780))[2];
//not do dummy comment
void* kont96486 = (decode_clo(env96780))[1];

//if-clause
bool if_guard97206 = is_true(a9639196622);
if(if_guard97206)
{

//creating new closure instance
void** clo97208 = alloc_clo(lam96769_fptr, 1);

//setting env list
clo97208[1] = kont96486;
void* f9648796623 = encode_clo(clo97208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9648796623;
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
void** clo97210 = alloc_clo(lam96777_fptr, 6);

//setting env list
clo97210[1] = kont96486;
clo97210[2] = map;
clo97210[3] = cons;
clo97210[4] = proc;
clo97210[5] = lst;
clo97210[6] = cdr;
void* f9649196625 = encode_clo(clo97210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9649196625;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96779 = encode_clo(alloc_clo(lam96779_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96781 = arg_buffer[1];
//reading env and args
void* kont96486 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo97212 = alloc_clo(lam96779_fptr, 8);

//setting env list
clo97212[1] = kont96486;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo97212[2] = map;
clo97212[3] = cdr;
clo97212[4] = list;
clo97212[5] = cons;
clo97212[6] = car;
clo97212[7] = proc;
clo97212[8] = lst;
void* f9649296621 = encode_clo(clo97212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9649296621;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam96782_fptr() // lam96782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96783 = arg_buffer[1];
//reading env and args
void* x9639896636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96493 = (decode_clo(env96783))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96493);
arg_buffer[2] = x9639896636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96493))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96782 = encode_clo(alloc_clo(lam96782_fptr, 0));

void* lam96784_fptr() // lam96784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96785 = arg_buffer[1];
//reading env and args
void* a9640396646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9640196642 = (decode_clo(env96785))[3];
//not do dummy comment
void* kont96493 = (decode_clo(env96785))[2];
//not do dummy comment
void* cons = (decode_clo(env96785))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont96493;
arg_buffer[3] = a9640196642;
arg_buffer[4] = a9640396646;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96784 = encode_clo(alloc_clo(lam96784_fptr, 0));

void* lam96786_fptr() // lam96786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96787 = arg_buffer[1];
//reading env and args
void* a9640296644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9640196642 = (decode_clo(env96787))[5];
//not do dummy comment
void* op = (decode_clo(env96787))[4];
//not do dummy comment
void* kont96493 = (decode_clo(env96787))[3];
//not do dummy comment
void* filter = (decode_clo(env96787))[2];
//not do dummy comment
void* cons = (decode_clo(env96787))[1];

//creating new closure instance
void** clo97214 = alloc_clo(lam96784_fptr, 3);

//setting env list
clo97214[1] = cons;
clo97214[2] = kont96493;
clo97214[3] = a9640196642;
void* f9649596645 = encode_clo(clo97214);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f9649596645;
arg_buffer[3] = op;
arg_buffer[4] = a9640296644;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96786 = encode_clo(alloc_clo(lam96786_fptr, 0));

void* lam96788_fptr() // lam96788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96789 = arg_buffer[1];
//reading env and args
void* a9640196642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96789))[6];
//not do dummy comment
void* lst = (decode_clo(env96789))[5];
//not do dummy comment
void* op = (decode_clo(env96789))[4];
//not do dummy comment
void* kont96493 = (decode_clo(env96789))[3];
//not do dummy comment
void* filter = (decode_clo(env96789))[2];
//not do dummy comment
void* cons = (decode_clo(env96789))[1];

//creating new closure instance
void** clo97216 = alloc_clo(lam96786_fptr, 5);

//setting env list
clo97216[1] = cons;
clo97216[2] = filter;
clo97216[3] = kont96493;
clo97216[4] = op;
clo97216[5] = a9640196642;
void* f9649696643 = encode_clo(clo97216);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9649696643;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96788 = encode_clo(alloc_clo(lam96788_fptr, 0));

void* lam96790_fptr() // lam96790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96791 = arg_buffer[1];
//reading env and args
void* a9640496648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env96791))[3];
//not do dummy comment
void* kont96493 = (decode_clo(env96791))[2];
//not do dummy comment
void* filter = (decode_clo(env96791))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont96493;
arg_buffer[3] = op;
arg_buffer[4] = a9640496648;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96790 = encode_clo(alloc_clo(lam96790_fptr, 0));

void* lam96792_fptr() // lam96792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96793 = arg_buffer[1];
//reading env and args
void* a9640096640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96793))[7];
//not do dummy comment
void* lst = (decode_clo(env96793))[6];
//not do dummy comment
void* op = (decode_clo(env96793))[5];
//not do dummy comment
void* kont96493 = (decode_clo(env96793))[4];
//not do dummy comment
void* cons = (decode_clo(env96793))[3];
//not do dummy comment
void* filter = (decode_clo(env96793))[2];
//not do dummy comment
void* car = (decode_clo(env96793))[1];

//if-clause
bool if_guard97217 = is_true(a9640096640);
if(if_guard97217)
{

//creating new closure instance
void** clo97219 = alloc_clo(lam96788_fptr, 6);

//setting env list
clo97219[1] = cons;
clo97219[2] = filter;
clo97219[3] = kont96493;
clo97219[4] = op;
clo97219[5] = lst;
clo97219[6] = cdr;
void* f9649796641 = encode_clo(clo97219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9649796641;
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
void** clo97221 = alloc_clo(lam96790_fptr, 3);

//setting env list
clo97221[1] = filter;
clo97221[2] = kont96493;
clo97221[3] = op;
void* f9649896647 = encode_clo(clo97221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9649896647;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96792 = encode_clo(alloc_clo(lam96792_fptr, 0));

void* lam96794_fptr() // lam96794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96795 = arg_buffer[1];
//reading env and args
void* a9639996638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96795))[7];
//not do dummy comment
void* lst = (decode_clo(env96795))[6];
//not do dummy comment
void* op = (decode_clo(env96795))[5];
//not do dummy comment
void* kont96493 = (decode_clo(env96795))[4];
//not do dummy comment
void* cons = (decode_clo(env96795))[3];
//not do dummy comment
void* filter = (decode_clo(env96795))[2];
//not do dummy comment
void* car = (decode_clo(env96795))[1];

//creating new closure instance
void** clo97223 = alloc_clo(lam96792_fptr, 7);

//setting env list
clo97223[1] = car;
clo97223[2] = filter;
clo97223[3] = cons;
clo97223[4] = kont96493;
clo97223[5] = op;
clo97223[6] = lst;
clo97223[7] = cdr;
void* f9649996639 = encode_clo(clo97223);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f9649996639;
arg_buffer[3] = a9639996638;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96794 = encode_clo(alloc_clo(lam96794_fptr, 0));

void* lam96796_fptr() // lam96796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96797 = arg_buffer[1];
//reading env and args
void* a9639796634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env96797))[8];
//not do dummy comment
void* op = (decode_clo(env96797))[7];
//not do dummy comment
void* kont96493 = (decode_clo(env96797))[6];
//not do dummy comment
void* cons = (decode_clo(env96797))[5];
//not do dummy comment
void* list = (decode_clo(env96797))[4];
//not do dummy comment
void* cdr = (decode_clo(env96797))[3];
//not do dummy comment
void* filter = (decode_clo(env96797))[2];
//not do dummy comment
void* car = (decode_clo(env96797))[1];

//if-clause
bool if_guard97224 = is_true(a9639796634);
if(if_guard97224)
{

//creating new closure instance
void** clo97226 = alloc_clo(lam96782_fptr, 1);

//setting env list
clo97226[1] = kont96493;
void* f9649496635 = encode_clo(clo97226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9649496635;
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
void** clo97228 = alloc_clo(lam96794_fptr, 7);

//setting env list
clo97228[1] = car;
clo97228[2] = filter;
clo97228[3] = cons;
clo97228[4] = kont96493;
clo97228[5] = op;
clo97228[6] = lst;
clo97228[7] = cdr;
void* f9650096637 = encode_clo(clo97228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9650096637;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96796 = encode_clo(alloc_clo(lam96796_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96798 = arg_buffer[1];
//reading env and args
void* kont96493 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo97230 = alloc_clo(lam96796_fptr, 8);

//setting env list
clo97230[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo97230[2] = filter;
clo97230[3] = cdr;
clo97230[4] = list;
clo97230[5] = cons;
clo97230[6] = kont96493;
clo97230[7] = op;
clo97230[8] = lst;
void* f9650196633 = encode_clo(clo97230);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9650196633;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam96799_fptr() // lam96799 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96800 = arg_buffer[1];
//reading env and args
void* a9640996656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env96800))[3];
//not do dummy comment
void* kont96502 = (decode_clo(env96800))[2];
//not do dummy comment
void* a9640796653 = (decode_clo(env96800))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont96502;
arg_buffer[3] = a9640796653;
arg_buffer[4] = a9640996656;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96799 = encode_clo(alloc_clo(lam96799_fptr, 0));

void* lam96802_fptr() // lam96802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96803 = arg_buffer[1];
//reading env and args
void* a9640796653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env96803))[4];
//not do dummy comment
void* kont96502 = (decode_clo(env96803))[3];
//not do dummy comment
void* n = (decode_clo(env96803))[2];
//not do dummy comment
void* _u45 = (decode_clo(env96803))[1];
mpz_t* mpzvar97231 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97231, "1", 10);
void* a9640896654 = encode_mpz(mpzvar97231);

//creating new closure instance
void** clo97233 = alloc_clo(lam96799_fptr, 3);

//setting env list
clo97233[1] = a9640796653;
clo97233[2] = kont96502;
clo97233[3] = drop;
void* f9650396655 = encode_clo(clo97233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9650396655;
arg_buffer[3] = n;
arg_buffer[4] = a9640896654;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96802 = encode_clo(alloc_clo(lam96802_fptr, 0));

void* lam96804_fptr() // lam96804 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96805 = arg_buffer[1];
//reading env and args
void* a9640696651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96805))[6];
//not do dummy comment
void* kont96502 = (decode_clo(env96805))[5];
//not do dummy comment
void* n = (decode_clo(env96805))[4];
//not do dummy comment
void* _u45 = (decode_clo(env96805))[3];
//not do dummy comment
void* lst = (decode_clo(env96805))[2];
//not do dummy comment
void* drop = (decode_clo(env96805))[1];

//if-clause
bool if_guard97234 = is_true(a9640696651);
if(if_guard97234)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96502);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96502))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo97236 = alloc_clo(lam96802_fptr, 4);

//setting env list
clo97236[1] = _u45;
clo97236[2] = n;
clo97236[3] = kont96502;
clo97236[4] = drop;
void* f9650496652 = encode_clo(clo97236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9650496652;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96804 = encode_clo(alloc_clo(lam96804_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96807 = arg_buffer[1];
//reading env and args
void* kont96502 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar97237 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97237, "0", 10);
void* a9640596649 = encode_mpz(mpzvar97237);

//creating new closure instance
void** clo97239 = alloc_clo(lam96804_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo97239[1] = drop;
clo97239[2] = lst;
clo97239[3] = _u45;
clo97239[4] = n;
clo97239[5] = kont96502;
clo97239[6] = cdr;
void* f9650596650 = encode_clo(clo97239);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9650596650;
arg_buffer[3] = n;
arg_buffer[4] = a9640596649;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam96808_fptr() // lam96808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96809 = arg_buffer[1];
//reading env and args
void* a9641396664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9641196660 = (decode_clo(env96809))[3];
//not do dummy comment
void* kont96506 = (decode_clo(env96809))[2];
//not do dummy comment
void* proc = (decode_clo(env96809))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont96506;
arg_buffer[3] = a9641196660;
arg_buffer[4] = a9641396664;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96808 = encode_clo(alloc_clo(lam96808_fptr, 0));

void* lam96810_fptr() // lam96810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96811 = arg_buffer[1];
//reading env and args
void* a9641296662 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9641196660 = (decode_clo(env96811))[5];
//not do dummy comment
void* foldr = (decode_clo(env96811))[4];
//not do dummy comment
void* kont96506 = (decode_clo(env96811))[3];
//not do dummy comment
void* proc = (decode_clo(env96811))[2];
//not do dummy comment
void* acc = (decode_clo(env96811))[1];

//creating new closure instance
void** clo97241 = alloc_clo(lam96808_fptr, 3);

//setting env list
clo97241[1] = proc;
clo97241[2] = kont96506;
clo97241[3] = a9641196660;
void* f9650796663 = encode_clo(clo97241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f9650796663;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a9641296662;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96810 = encode_clo(alloc_clo(lam96810_fptr, 0));

void* lam96812_fptr() // lam96812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96813 = arg_buffer[1];
//reading env and args
void* a9641196660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96813))[6];
//not do dummy comment
void* kont96506 = (decode_clo(env96813))[5];
//not do dummy comment
void* foldr = (decode_clo(env96813))[4];
//not do dummy comment
void* lst = (decode_clo(env96813))[3];
//not do dummy comment
void* proc = (decode_clo(env96813))[2];
//not do dummy comment
void* acc = (decode_clo(env96813))[1];

//creating new closure instance
void** clo97243 = alloc_clo(lam96810_fptr, 5);

//setting env list
clo97243[1] = acc;
clo97243[2] = proc;
clo97243[3] = kont96506;
clo97243[4] = foldr;
clo97243[5] = a9641196660;
void* f9650896661 = encode_clo(clo97243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9650896661;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96812 = encode_clo(alloc_clo(lam96812_fptr, 0));

void* lam96814_fptr() // lam96814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96815 = arg_buffer[1];
//reading env and args
void* a9641096658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96815))[7];
//not do dummy comment
void* kont96506 = (decode_clo(env96815))[6];
//not do dummy comment
void* car = (decode_clo(env96815))[5];
//not do dummy comment
void* foldr = (decode_clo(env96815))[4];
//not do dummy comment
void* lst = (decode_clo(env96815))[3];
//not do dummy comment
void* proc = (decode_clo(env96815))[2];
//not do dummy comment
void* acc = (decode_clo(env96815))[1];

//if-clause
bool if_guard97244 = is_true(a9641096658);
if(if_guard97244)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96506);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96506))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo97246 = alloc_clo(lam96812_fptr, 6);

//setting env list
clo97246[1] = acc;
clo97246[2] = proc;
clo97246[3] = lst;
clo97246[4] = foldr;
clo97246[5] = kont96506;
clo97246[6] = cdr;
void* f9650996659 = encode_clo(clo97246);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9650996659;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96814 = encode_clo(alloc_clo(lam96814_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96816 = arg_buffer[1];
//reading env and args
void* kont96506 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo97248 = alloc_clo(lam96814_fptr, 7);

//setting env list
clo97248[1] = acc;
clo97248[2] = proc;
clo97248[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo97248[4] = foldr;
clo97248[5] = car;
clo97248[6] = kont96506;
clo97248[7] = cdr;
void* f9651096657 = encode_clo(clo97248);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9651096657;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam96817_fptr() // lam96817 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96818 = arg_buffer[1];
//reading env and args
void* a9641796672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9641596668 = (decode_clo(env96818))[3];
//not do dummy comment
void* cons = (decode_clo(env96818))[2];
//not do dummy comment
void* kont96511 = (decode_clo(env96818))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont96511;
arg_buffer[3] = a9641596668;
arg_buffer[4] = a9641796672;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96817 = encode_clo(alloc_clo(lam96817_fptr, 0));

void* lam96819_fptr() // lam96819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96820 = arg_buffer[1];
//reading env and args
void* a9641696670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env96820))[5];
//not do dummy comment
void* a9641596668 = (decode_clo(env96820))[4];
//not do dummy comment
void* lst2 = (decode_clo(env96820))[3];
//not do dummy comment
void* cons = (decode_clo(env96820))[2];
//not do dummy comment
void* kont96511 = (decode_clo(env96820))[1];

//creating new closure instance
void** clo97250 = alloc_clo(lam96817_fptr, 3);

//setting env list
clo97250[1] = kont96511;
clo97250[2] = cons;
clo97250[3] = a9641596668;
void* f9651296671 = encode_clo(clo97250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f9651296671;
arg_buffer[3] = a9641696670;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96819 = encode_clo(alloc_clo(lam96819_fptr, 0));

void* lam96821_fptr() // lam96821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96822 = arg_buffer[1];
//reading env and args
void* a9641596668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96822))[6];
//not do dummy comment
void* append = (decode_clo(env96822))[5];
//not do dummy comment
void* lst2 = (decode_clo(env96822))[4];
//not do dummy comment
void* lst1 = (decode_clo(env96822))[3];
//not do dummy comment
void* cons = (decode_clo(env96822))[2];
//not do dummy comment
void* kont96511 = (decode_clo(env96822))[1];

//creating new closure instance
void** clo97252 = alloc_clo(lam96819_fptr, 5);

//setting env list
clo97252[1] = kont96511;
clo97252[2] = cons;
clo97252[3] = lst2;
clo97252[4] = a9641596668;
clo97252[5] = append;
void* f9651396669 = encode_clo(clo97252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9651396669;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96821 = encode_clo(alloc_clo(lam96821_fptr, 0));

void* lam96823_fptr() // lam96823 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96824 = arg_buffer[1];
//reading env and args
void* a9641496666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env96824))[7];
//not do dummy comment
void* append = (decode_clo(env96824))[6];
//not do dummy comment
void* lst2 = (decode_clo(env96824))[5];
//not do dummy comment
void* lst1 = (decode_clo(env96824))[4];
//not do dummy comment
void* car = (decode_clo(env96824))[3];
//not do dummy comment
void* cons = (decode_clo(env96824))[2];
//not do dummy comment
void* kont96511 = (decode_clo(env96824))[1];

//if-clause
bool if_guard97253 = is_true(a9641496666);
if(if_guard97253)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96511);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96511))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo97255 = alloc_clo(lam96821_fptr, 6);

//setting env list
clo97255[1] = kont96511;
clo97255[2] = cons;
clo97255[3] = lst1;
clo97255[4] = lst2;
clo97255[5] = append;
clo97255[6] = cdr;
void* f9651496667 = encode_clo(clo97255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9651496667;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam96823 = encode_clo(alloc_clo(lam96823_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96825 = arg_buffer[1];
//reading env and args
void* kont96511 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo97257 = alloc_clo(lam96823_fptr, 7);

//setting env list
clo97257[1] = kont96511;
clo97257[2] = cons;
clo97257[3] = car;
clo97257[4] = lst1;
clo97257[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo97257[6] = append;
clo97257[7] = cdr;
void* f9651596665 = encode_clo(clo97257);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9651596665;
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
void* _96826 = arg_buffer[1];
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

void* kont9651696673 = prim_car(lst);
void* lst96674 = prim_cdr(lst);
void* x9641896675 = apply_prim_hash(lst96674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9651696673);
arg_buffer[2] = x9641896675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9651696673))[0]);
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
void* _96827 = arg_buffer[1];
//reading env and args
void* kont96518 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9641996676 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96518);
arg_buffer[2] = x9641996676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96518))[0]);
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
void* _96828 = arg_buffer[1];
//reading env and args
void* kont96519 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x9642096677 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96519);
arg_buffer[2] = x9642096677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96519))[0]);
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
void* _96829 = arg_buffer[1];
//reading env and args
void* kont96520 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9642196678 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96520);
arg_buffer[2] = x9642196678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96520))[0]);
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
void* _96830 = arg_buffer[1];
//reading env and args
void* kont96521 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x9642296679 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96521);
arg_buffer[2] = x9642296679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96521))[0]);
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
void* _96832 = arg_buffer[1];
//reading env and args
void* kont96522 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar97258 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar97258, "1", 10);
void* a9642396680 = encode_mpz(mpzvar97258);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = kont96522;
arg_buffer[3] = a9642396680;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam96833_fptr() // lam96833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env96834 = arg_buffer[1];
//reading env and args
void* x9642496682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont96523 = (decode_clo(env96834))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont96523);
arg_buffer[2] = x9642496682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont96523))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam96833 = encode_clo(alloc_clo(lam96833_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _96835 = arg_buffer[1];
//reading env and args
void* kont96523 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo97260 = alloc_clo(lam96833_fptr, 1);

//setting env list
clo97260[1] = kont96523;
void* f9652496681 = encode_clo(clo97260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f9652496681;
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

