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
void* _123699 = arg_buffer[1];
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

void* kont123434123535 = prim_car(lst);
void* lst123536 = prim_cdr(lst);
void* x123344123537 = apply_prim__u43(lst123536);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123434123535);
arg_buffer[2] = x123344123537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123434123535))[0]);
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
void* _123700 = arg_buffer[1];
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

void* kont123436123538 = prim_car(lst);
void* lst123539 = prim_cdr(lst);
void* x123345123540 = apply_prim__u45(lst123539);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123436123538);
arg_buffer[2] = x123345123540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123436123538))[0]);
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
void* _123701 = arg_buffer[1];
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

void* kont123438123541 = prim_car(lst);
void* lst123542 = prim_cdr(lst);
void* x123346123543 = apply_prim__u42(lst123542);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123438123541);
arg_buffer[2] = x123346123543;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123438123541))[0]);
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
void* _123702 = arg_buffer[1];
//reading env and args
void* kont123440 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x123347123544 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123440);
arg_buffer[2] = x123347123544;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123440))[0]);
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
void* _123703 = arg_buffer[1];
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

void* kont123441123545 = prim_car(lst);
void* lst123546 = prim_cdr(lst);
void* x123348123547 = apply_prim__u47(lst123546);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123441123545);
arg_buffer[2] = x123348123547;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123441123545))[0]);
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
void* _123704 = arg_buffer[1];
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

void* kont123443123548 = prim_car(lst);
void* lst123549 = prim_cdr(lst);
void* x123349123550 = apply_prim__u61(lst123549);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123443123548);
arg_buffer[2] = x123349123550;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123443123548))[0]);
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
void* _123705 = arg_buffer[1];
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

void* kont123445123551 = prim_car(lst);
void* lst123552 = prim_cdr(lst);
void* x123350123553 = apply_prim__u62(lst123552);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123445123551);
arg_buffer[2] = x123350123553;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123445123551))[0]);
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
void* _123706 = arg_buffer[1];
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

void* kont123447123554 = prim_car(lst);
void* lst123555 = prim_cdr(lst);
void* x123351123556 = apply_prim__u60(lst123555);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123447123554);
arg_buffer[2] = x123351123556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123447123554))[0]);
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
void* _123707 = arg_buffer[1];
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

void* kont123449123557 = prim_car(lst);
void* lst123558 = prim_cdr(lst);
void* x123352123559 = apply_prim__u60_u61(lst123558);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123449123557);
arg_buffer[2] = x123352123559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123449123557))[0]);
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
void* _123708 = arg_buffer[1];
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

void* kont123451123560 = prim_car(lst);
void* lst123561 = prim_cdr(lst);
void* x123353123562 = apply_prim__u62_u61(lst123561);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123451123560);
arg_buffer[2] = x123353123562;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123451123560))[0]);
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
void* _123709 = arg_buffer[1];
//reading env and args
void* kont123453 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x123354123563 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123453);
arg_buffer[2] = x123354123563;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123453))[0]);
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
void* _123710 = arg_buffer[1];
//reading env and args
void* kont123454 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x123355123564 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123454);
arg_buffer[2] = x123355123564;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123454))[0]);
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
void* _123711 = arg_buffer[1];
//reading env and args
void* kont123455 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x123356123565 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123455);
arg_buffer[2] = x123356123565;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123455))[0]);
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
void* _123712 = arg_buffer[1];
//reading env and args
void* kont123456 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x123357123566 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123456);
arg_buffer[2] = x123357123566;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123456))[0]);
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
void* _123713 = arg_buffer[1];
//reading env and args
void* kont123457 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x123358123567 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123457);
arg_buffer[2] = x123358123567;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123457))[0]);
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
void* _123714 = arg_buffer[1];
//reading env and args
void* kont123458 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x123359123568 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123458);
arg_buffer[2] = x123359123568;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123458))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam123715_fptr() // lam123715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123716 = arg_buffer[1];
//reading env and args
void* a123362123572 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123459 = (decode_clo(env123716))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env123716))[2];
//not do dummy comment
void* a123360123569 = (decode_clo(env123716))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont123459;
arg_buffer[3] = a123360123569;
arg_buffer[4] = a123362123572;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123715 = encode_clo(alloc_clo(lam123715_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123719 = arg_buffer[1];
//reading env and args
void* kont123459 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar131778 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131778, "0", 10);
void* a123360123569 = encode_mpz(mpzvar131778);
mpz_t* mpzvar131779 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131779, "2", 10);
void* a123361123570 = encode_mpz(mpzvar131779);

//creating new closure instance
void** clo131781 = alloc_clo(lam123715_fptr, 3);

//setting env list
clo131781[1] = a123360123569;
clo131781[2] = equal_u63;
clo131781[3] = kont123459;
void* f123460123571 = encode_clo(clo131781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f123460123571;
arg_buffer[3] = x;
arg_buffer[4] = a123361123570;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam123720_fptr() // lam123720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123721 = arg_buffer[1];
//reading env and args
void* a123365123576 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env123721))[3];
//not do dummy comment
void* kont123461 = (decode_clo(env123721))[2];
//not do dummy comment
void* a123363123573 = (decode_clo(env123721))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont123461;
arg_buffer[3] = a123363123573;
arg_buffer[4] = a123365123576;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123720 = encode_clo(alloc_clo(lam123720_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123724 = arg_buffer[1];
//reading env and args
void* kont123461 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar131782 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131782, "1", 10);
void* a123363123573 = encode_mpz(mpzvar131782);
mpz_t* mpzvar131783 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131783, "2", 10);
void* a123364123574 = encode_mpz(mpzvar131783);

//creating new closure instance
void** clo131785 = alloc_clo(lam123720_fptr, 3);

//setting env list
clo131785[1] = a123363123573;
clo131785[2] = kont123461;
clo131785[3] = equal_u63;
void* f123462123575 = encode_clo(clo131785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f123462123575;
arg_buffer[3] = x;
arg_buffer[4] = a123364123574;
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
void* _123725 = arg_buffer[1];
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

void* kont123463123577 = prim_car(x);
void* x123578 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123463123577);
arg_buffer[2] = x123578;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123463123577))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam123728_fptr() // lam123728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123729 = arg_buffer[1];
//reading env and args
void* a123371123588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123465 = (decode_clo(env123729))[3];
//not do dummy comment
void* x = (decode_clo(env123729))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env123729))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont123465;
arg_buffer[3] = x;
arg_buffer[4] = a123371123588;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123728 = encode_clo(alloc_clo(lam123728_fptr, 0));

void* lam123730_fptr() // lam123730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123731 = arg_buffer[1];
//reading env and args
void* a123369123585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env123731))[5];
//not do dummy comment
void* x = (decode_clo(env123731))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env123731))[3];
//not do dummy comment
void* kont123465 = (decode_clo(env123731))[2];
//not do dummy comment
void* cdr = (decode_clo(env123731))[1];

//if-clause
bool if_guard131786 = is_true(a123369123585);
if(if_guard131786)
{
void* x123370123586 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123465);
arg_buffer[2] = x123370123586;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123465))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo131788 = alloc_clo(lam123728_fptr, 3);

//setting env list
clo131788[1] = member_u63;
clo131788[2] = x;
clo131788[3] = kont123465;
void* f123466123587 = encode_clo(clo131788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123466123587;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123730 = encode_clo(alloc_clo(lam123730_fptr, 0));

void* lam123732_fptr() // lam123732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123733 = arg_buffer[1];
//reading env and args
void* a123368123583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env123733))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env123733))[5];
//not do dummy comment
void* x = (decode_clo(env123733))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env123733))[3];
//not do dummy comment
void* kont123465 = (decode_clo(env123733))[2];
//not do dummy comment
void* cdr = (decode_clo(env123733))[1];

//creating new closure instance
void** clo131790 = alloc_clo(lam123730_fptr, 5);

//setting env list
clo131790[1] = cdr;
clo131790[2] = kont123465;
clo131790[3] = member_u63;
clo131790[4] = x;
clo131790[5] = lst;
void* f123467123584 = encode_clo(clo131790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f123467123584;
arg_buffer[3] = a123368123583;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123732 = encode_clo(alloc_clo(lam123732_fptr, 0));

void* lam123734_fptr() // lam123734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123735 = arg_buffer[1];
//reading env and args
void* a123366123580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env123735))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env123735))[6];
//not do dummy comment
void* x = (decode_clo(env123735))[5];
//not do dummy comment
void* car = (decode_clo(env123735))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env123735))[3];
//not do dummy comment
void* kont123465 = (decode_clo(env123735))[2];
//not do dummy comment
void* cdr = (decode_clo(env123735))[1];

//if-clause
bool if_guard131791 = is_true(a123366123580);
if(if_guard131791)
{
void* x123367123581 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123465);
arg_buffer[2] = x123367123581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123465))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo131793 = alloc_clo(lam123732_fptr, 6);

//setting env list
clo131793[1] = cdr;
clo131793[2] = kont123465;
clo131793[3] = member_u63;
clo131793[4] = x;
clo131793[5] = equal_u63;
clo131793[6] = lst;
void* f123468123582 = encode_clo(clo131793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f123468123582;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123734 = encode_clo(alloc_clo(lam123734_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123736 = arg_buffer[1];
//reading env and args
void* kont123465 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo131795 = alloc_clo(lam123734_fptr, 7);

//setting env list
clo131795[1] = cdr;
clo131795[2] = kont123465;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo131795[3] = member_u63;
clo131795[4] = car;
clo131795[5] = x;
clo131795[6] = equal_u63;
clo131795[7] = lst;
void* f123469123579 = encode_clo(clo131795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f123469123579;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam123737_fptr() // lam123737 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123738 = arg_buffer[1];
//reading env and args
void* a123375123596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a123374123594 = (decode_clo(env123738))[4];
//not do dummy comment
void* kont123470 = (decode_clo(env123738))[3];
//not do dummy comment
void* fun = (decode_clo(env123738))[2];
//not do dummy comment
void* foldl = (decode_clo(env123738))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont123470;
arg_buffer[3] = fun;
arg_buffer[4] = a123374123594;
arg_buffer[5] = a123375123596;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123737 = encode_clo(alloc_clo(lam123737_fptr, 0));

void* lam123739_fptr() // lam123739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123740 = arg_buffer[1];
//reading env and args
void* a123374123594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123740))[5];
//not do dummy comment
void* lst = (decode_clo(env123740))[4];
//not do dummy comment
void* kont123470 = (decode_clo(env123740))[3];
//not do dummy comment
void* fun = (decode_clo(env123740))[2];
//not do dummy comment
void* foldl = (decode_clo(env123740))[1];

//creating new closure instance
void** clo131797 = alloc_clo(lam123737_fptr, 4);

//setting env list
clo131797[1] = foldl;
clo131797[2] = fun;
clo131797[3] = kont123470;
clo131797[4] = a123374123594;
void* f123471123595 = encode_clo(clo131797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123471123595;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123739 = encode_clo(alloc_clo(lam123739_fptr, 0));

void* lam123741_fptr() // lam123741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123742 = arg_buffer[1];
//reading env and args
void* a123373123592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123742))[6];
//not do dummy comment
void* lst = (decode_clo(env123742))[5];
//not do dummy comment
void* kont123470 = (decode_clo(env123742))[4];
//not do dummy comment
void* fun = (decode_clo(env123742))[3];
//not do dummy comment
void* acc = (decode_clo(env123742))[2];
//not do dummy comment
void* foldl = (decode_clo(env123742))[1];

//creating new closure instance
void** clo131799 = alloc_clo(lam123739_fptr, 5);

//setting env list
clo131799[1] = foldl;
clo131799[2] = fun;
clo131799[3] = kont123470;
clo131799[4] = lst;
clo131799[5] = cdr;
void* f123472123593 = encode_clo(clo131799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f123472123593;
arg_buffer[3] = a123373123592;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123741 = encode_clo(alloc_clo(lam123741_fptr, 0));

void* lam123743_fptr() // lam123743 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123744 = arg_buffer[1];
//reading env and args
void* a123372123590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123744))[7];
//not do dummy comment
void* lst = (decode_clo(env123744))[6];
//not do dummy comment
void* kont123470 = (decode_clo(env123744))[5];
//not do dummy comment
void* fun = (decode_clo(env123744))[4];
//not do dummy comment
void* acc = (decode_clo(env123744))[3];
//not do dummy comment
void* car = (decode_clo(env123744))[2];
//not do dummy comment
void* foldl = (decode_clo(env123744))[1];

//if-clause
bool if_guard131800 = is_true(a123372123590);
if(if_guard131800)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123470);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123470))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo131802 = alloc_clo(lam123741_fptr, 6);

//setting env list
clo131802[1] = foldl;
clo131802[2] = acc;
clo131802[3] = fun;
clo131802[4] = kont123470;
clo131802[5] = lst;
clo131802[6] = cdr;
void* f123473123591 = encode_clo(clo131802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f123473123591;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123743 = encode_clo(alloc_clo(lam123743_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123745 = arg_buffer[1];
//reading env and args
void* kont123470 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo131804 = alloc_clo(lam123743_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo131804[1] = foldl;
clo131804[2] = car;
clo131804[3] = acc;
clo131804[4] = fun;
clo131804[5] = kont123470;
clo131804[6] = lst;
clo131804[7] = cdr;
void* f123474123589 = encode_clo(clo131804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f123474123589;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam123746_fptr() // lam123746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123747 = arg_buffer[1];
//reading env and args
void* a123379123604 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123475 = (decode_clo(env123747))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env123747))[2];
//not do dummy comment
void* a123377123600 = (decode_clo(env123747))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont123475;
arg_buffer[3] = a123377123600;
arg_buffer[4] = a123379123604;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123746 = encode_clo(alloc_clo(lam123746_fptr, 0));

void* lam123748_fptr() // lam123748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123749 = arg_buffer[1];
//reading env and args
void* a123378123602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123475 = (decode_clo(env123749))[5];
//not do dummy comment
void* lst2 = (decode_clo(env123749))[4];
//not do dummy comment
void* cons = (decode_clo(env123749))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env123749))[2];
//not do dummy comment
void* a123377123600 = (decode_clo(env123749))[1];

//creating new closure instance
void** clo131806 = alloc_clo(lam123746_fptr, 3);

//setting env list
clo131806[1] = a123377123600;
clo131806[2] = reverse_u45helper;
clo131806[3] = kont123475;
void* f123476123603 = encode_clo(clo131806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f123476123603;
arg_buffer[3] = a123378123602;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123748 = encode_clo(alloc_clo(lam123748_fptr, 0));

void* lam123750_fptr() // lam123750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123751 = arg_buffer[1];
//reading env and args
void* a123377123600 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env123751))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env123751))[5];
//not do dummy comment
void* kont123475 = (decode_clo(env123751))[4];
//not do dummy comment
void* lst2 = (decode_clo(env123751))[3];
//not do dummy comment
void* car = (decode_clo(env123751))[2];
//not do dummy comment
void* cons = (decode_clo(env123751))[1];

//creating new closure instance
void** clo131808 = alloc_clo(lam123748_fptr, 5);

//setting env list
clo131808[1] = a123377123600;
clo131808[2] = reverse_u45helper;
clo131808[3] = cons;
clo131808[4] = lst2;
clo131808[5] = kont123475;
void* f123477123601 = encode_clo(clo131808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f123477123601;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123750 = encode_clo(alloc_clo(lam123750_fptr, 0));

void* lam123752_fptr() // lam123752 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123753 = arg_buffer[1];
//reading env and args
void* a123376123598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123753))[7];
//not do dummy comment
void* lst = (decode_clo(env123753))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env123753))[5];
//not do dummy comment
void* kont123475 = (decode_clo(env123753))[4];
//not do dummy comment
void* lst2 = (decode_clo(env123753))[3];
//not do dummy comment
void* car = (decode_clo(env123753))[2];
//not do dummy comment
void* cons = (decode_clo(env123753))[1];

//if-clause
bool if_guard131809 = is_true(a123376123598);
if(if_guard131809)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123475);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123475))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo131811 = alloc_clo(lam123750_fptr, 6);

//setting env list
clo131811[1] = cons;
clo131811[2] = car;
clo131811[3] = lst2;
clo131811[4] = kont123475;
clo131811[5] = reverse_u45helper;
clo131811[6] = lst;
void* f123478123599 = encode_clo(clo131811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123478123599;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123752 = encode_clo(alloc_clo(lam123752_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123754 = arg_buffer[1];
//reading env and args
void* kont123475 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo131813 = alloc_clo(lam123752_fptr, 7);

//setting env list
clo131813[1] = cons;
clo131813[2] = car;
clo131813[3] = lst2;
clo131813[4] = kont123475;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo131813[5] = reverse_u45helper;
clo131813[6] = lst;
clo131813[7] = cdr;
void* f123479123597 = encode_clo(clo131813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f123479123597;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam123755_fptr() // lam123755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123756 = arg_buffer[1];
//reading env and args
void* a123380123606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env123756))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env123756))[2];
//not do dummy comment
void* kont123480 = (decode_clo(env123756))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont123480;
arg_buffer[3] = lst;
arg_buffer[4] = a123380123606;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123755 = encode_clo(alloc_clo(lam123755_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123757 = arg_buffer[1];
//reading env and args
void* kont123480 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo131815 = alloc_clo(lam123755_fptr, 3);

//setting env list
clo131815[1] = kont123480;
clo131815[2] = reverse_u45helper;
clo131815[3] = lst;
void* f123481123605 = encode_clo(clo131815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f123481123605;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam123758_fptr() // lam123758 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123759 = arg_buffer[1];
//reading env and args
void* x123383123611 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123482 = (decode_clo(env123759))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123482);
arg_buffer[2] = x123383123611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123482))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123758 = encode_clo(alloc_clo(lam123758_fptr, 0));

void* lam123760_fptr() // lam123760 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123761 = arg_buffer[1];
//reading env and args
void* a123388123620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123482 = (decode_clo(env123761))[4];
//not do dummy comment
void* a123384123613 = (decode_clo(env123761))[3];
//not do dummy comment
void* a123386123616 = (decode_clo(env123761))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env123761))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont123482;
arg_buffer[3] = a123384123613;
arg_buffer[4] = a123386123616;
arg_buffer[5] = a123388123620;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123760 = encode_clo(alloc_clo(lam123760_fptr, 0));

void* lam123762_fptr() // lam123762 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123763 = arg_buffer[1];
//reading env and args
void* a123387123618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123482 = (decode_clo(env123763))[6];
//not do dummy comment
void* a123384123613 = (decode_clo(env123763))[5];
//not do dummy comment
void* a123386123616 = (decode_clo(env123763))[4];
//not do dummy comment
void* cons = (decode_clo(env123763))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env123763))[2];
//not do dummy comment
void* lst2 = (decode_clo(env123763))[1];

//creating new closure instance
void** clo131817 = alloc_clo(lam123760_fptr, 4);

//setting env list
clo131817[1] = take_u45helper;
clo131817[2] = a123386123616;
clo131817[3] = a123384123613;
clo131817[4] = kont123482;
void* f123484123619 = encode_clo(clo131817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f123484123619;
arg_buffer[3] = a123387123618;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123762 = encode_clo(alloc_clo(lam123762_fptr, 0));

void* lam123764_fptr() // lam123764 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123765 = arg_buffer[1];
//reading env and args
void* a123386123616 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123482 = (decode_clo(env123765))[7];
//not do dummy comment
void* car = (decode_clo(env123765))[6];
//not do dummy comment
void* cons = (decode_clo(env123765))[5];
//not do dummy comment
void* lst = (decode_clo(env123765))[4];
//not do dummy comment
void* a123384123613 = (decode_clo(env123765))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env123765))[2];
//not do dummy comment
void* lst2 = (decode_clo(env123765))[1];

//creating new closure instance
void** clo131819 = alloc_clo(lam123762_fptr, 6);

//setting env list
clo131819[1] = lst2;
clo131819[2] = take_u45helper;
clo131819[3] = cons;
clo131819[4] = a123386123616;
clo131819[5] = a123384123613;
clo131819[6] = kont123482;
void* f123485123617 = encode_clo(clo131819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f123485123617;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123764 = encode_clo(alloc_clo(lam123764_fptr, 0));

void* lam123767_fptr() // lam123767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123768 = arg_buffer[1];
//reading env and args
void* a123384123613 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123482 = (decode_clo(env123768))[8];
//not do dummy comment
void* lst = (decode_clo(env123768))[7];
//not do dummy comment
void* cons = (decode_clo(env123768))[6];
//not do dummy comment
void* _u45 = (decode_clo(env123768))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env123768))[4];
//not do dummy comment
void* lst2 = (decode_clo(env123768))[3];
//not do dummy comment
void* n = (decode_clo(env123768))[2];
//not do dummy comment
void* car = (decode_clo(env123768))[1];
mpz_t* mpzvar131820 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131820, "1", 10);
void* a123385123614 = encode_mpz(mpzvar131820);

//creating new closure instance
void** clo131822 = alloc_clo(lam123764_fptr, 7);

//setting env list
clo131822[1] = lst2;
clo131822[2] = take_u45helper;
clo131822[3] = a123384123613;
clo131822[4] = lst;
clo131822[5] = cons;
clo131822[6] = car;
clo131822[7] = kont123482;
void* f123486123615 = encode_clo(clo131822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f123486123615;
arg_buffer[3] = n;
arg_buffer[4] = a123385123614;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123767 = encode_clo(alloc_clo(lam123767_fptr, 0));

void* lam123769_fptr() // lam123769 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123770 = arg_buffer[1];
//reading env and args
void* a123382123609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123770))[10];
//not do dummy comment
void* kont123482 = (decode_clo(env123770))[9];
//not do dummy comment
void* lst = (decode_clo(env123770))[8];
//not do dummy comment
void* reverse = (decode_clo(env123770))[7];
//not do dummy comment
void* cons = (decode_clo(env123770))[6];
//not do dummy comment
void* _u45 = (decode_clo(env123770))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env123770))[4];
//not do dummy comment
void* lst2 = (decode_clo(env123770))[3];
//not do dummy comment
void* n = (decode_clo(env123770))[2];
//not do dummy comment
void* car = (decode_clo(env123770))[1];

//if-clause
bool if_guard131823 = is_true(a123382123609);
if(if_guard131823)
{

//creating new closure instance
void** clo131825 = alloc_clo(lam123758_fptr, 1);

//setting env list
clo131825[1] = kont123482;
void* f123483123610 = encode_clo(clo131825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f123483123610;
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
void** clo131827 = alloc_clo(lam123767_fptr, 8);

//setting env list
clo131827[1] = car;
clo131827[2] = n;
clo131827[3] = lst2;
clo131827[4] = take_u45helper;
clo131827[5] = _u45;
clo131827[6] = cons;
clo131827[7] = lst;
clo131827[8] = kont123482;
void* f123487123612 = encode_clo(clo131827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123487123612;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123769 = encode_clo(alloc_clo(lam123769_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123772 = arg_buffer[1];
//reading env and args
void* kont123482 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar131828 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131828, "0", 10);
void* a123381123607 = encode_mpz(mpzvar131828);

//creating new closure instance
void** clo131830 = alloc_clo(lam123769_fptr, 10);

//setting env list
clo131830[1] = car;
clo131830[2] = n;
clo131830[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo131830[4] = take_u45helper;
clo131830[5] = _u45;
clo131830[6] = cons;
clo131830[7] = reverse;
clo131830[8] = lst;
clo131830[9] = kont123482;
clo131830[10] = cdr;
void* f123488123608 = encode_clo(clo131830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f123488123608;
arg_buffer[3] = n;
arg_buffer[4] = a123381123607;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam123773_fptr() // lam123773 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123774 = arg_buffer[1];
//reading env and args
void* a123389123622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env123774))[4];
//not do dummy comment
void* kont123489 = (decode_clo(env123774))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env123774))[2];
//not do dummy comment
void* n = (decode_clo(env123774))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont123489;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a123389123622;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123773 = encode_clo(alloc_clo(lam123773_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123775 = arg_buffer[1];
//reading env and args
void* kont123489 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo131832 = alloc_clo(lam123773_fptr, 4);

//setting env list
clo131832[1] = n;
clo131832[2] = take_u45helper;
clo131832[3] = kont123489;
clo131832[4] = lst;
void* f123490123621 = encode_clo(clo131832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f123490123621;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam123777_fptr() // lam123777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123778 = arg_buffer[1];
//reading env and args
void* a123394123630 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a123392123626 = (decode_clo(env123778))[3];
//not do dummy comment
void* _u43 = (decode_clo(env123778))[2];
//not do dummy comment
void* kont123491 = (decode_clo(env123778))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont123491;
arg_buffer[3] = a123392123626;
arg_buffer[4] = a123394123630;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123777 = encode_clo(alloc_clo(lam123777_fptr, 0));

void* lam123779_fptr() // lam123779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123780 = arg_buffer[1];
//reading env and args
void* a123393123628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a123392123626 = (decode_clo(env123780))[4];
//not do dummy comment
void* length = (decode_clo(env123780))[3];
//not do dummy comment
void* _u43 = (decode_clo(env123780))[2];
//not do dummy comment
void* kont123491 = (decode_clo(env123780))[1];

//creating new closure instance
void** clo131834 = alloc_clo(lam123777_fptr, 3);

//setting env list
clo131834[1] = kont123491;
clo131834[2] = _u43;
clo131834[3] = a123392123626;
void* f123492123629 = encode_clo(clo131834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f123492123629;
arg_buffer[3] = a123393123628;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123779 = encode_clo(alloc_clo(lam123779_fptr, 0));

void* lam123782_fptr() // lam123782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123783 = arg_buffer[1];
//reading env and args
void* a123390123624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123783))[5];
//not do dummy comment
void* lst = (decode_clo(env123783))[4];
//not do dummy comment
void* length = (decode_clo(env123783))[3];
//not do dummy comment
void* _u43 = (decode_clo(env123783))[2];
//not do dummy comment
void* kont123491 = (decode_clo(env123783))[1];

//if-clause
bool if_guard131835 = is_true(a123390123624);
if(if_guard131835)
{
mpz_t* mpzvar131836 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131836, "0", 10);
void* x123391123625 = encode_mpz(mpzvar131836);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123491);
arg_buffer[2] = x123391123625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123491))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar131837 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131837, "1", 10);
void* a123392123626 = encode_mpz(mpzvar131837);

//creating new closure instance
void** clo131839 = alloc_clo(lam123779_fptr, 4);

//setting env list
clo131839[1] = kont123491;
clo131839[2] = _u43;
clo131839[3] = length;
clo131839[4] = a123392123626;
void* f123493123627 = encode_clo(clo131839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123493123627;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123782 = encode_clo(alloc_clo(lam123782_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123784 = arg_buffer[1];
//reading env and args
void* kont123491 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo131841 = alloc_clo(lam123782_fptr, 5);

//setting env list
clo131841[1] = kont123491;
clo131841[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo131841[3] = length;
clo131841[4] = lst;
clo131841[5] = cdr;
void* f123494123623 = encode_clo(clo131841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f123494123623;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam123785_fptr() // lam123785 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123786 = arg_buffer[1];
//reading env and args
void* x123396123634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123495 = (decode_clo(env123786))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123495);
arg_buffer[2] = x123396123634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123495))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123785 = encode_clo(alloc_clo(lam123785_fptr, 0));

void* lam123787_fptr() // lam123787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123788 = arg_buffer[1];
//reading env and args
void* a123400123642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a123398123638 = (decode_clo(env123788))[3];
//not do dummy comment
void* cons = (decode_clo(env123788))[2];
//not do dummy comment
void* kont123495 = (decode_clo(env123788))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont123495;
arg_buffer[3] = a123398123638;
arg_buffer[4] = a123400123642;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123787 = encode_clo(alloc_clo(lam123787_fptr, 0));

void* lam123789_fptr() // lam123789 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123790 = arg_buffer[1];
//reading env and args
void* a123399123640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env123790))[5];
//not do dummy comment
void* proc = (decode_clo(env123790))[4];
//not do dummy comment
void* a123398123638 = (decode_clo(env123790))[3];
//not do dummy comment
void* cons = (decode_clo(env123790))[2];
//not do dummy comment
void* kont123495 = (decode_clo(env123790))[1];

//creating new closure instance
void** clo131843 = alloc_clo(lam123787_fptr, 3);

//setting env list
clo131843[1] = kont123495;
clo131843[2] = cons;
clo131843[3] = a123398123638;
void* f123497123641 = encode_clo(clo131843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f123497123641;
arg_buffer[3] = proc;
arg_buffer[4] = a123399123640;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123789 = encode_clo(alloc_clo(lam123789_fptr, 0));

void* lam123791_fptr() // lam123791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123792 = arg_buffer[1];
//reading env and args
void* a123398123638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123792))[6];
//not do dummy comment
void* lst = (decode_clo(env123792))[5];
//not do dummy comment
void* map = (decode_clo(env123792))[4];
//not do dummy comment
void* proc = (decode_clo(env123792))[3];
//not do dummy comment
void* cons = (decode_clo(env123792))[2];
//not do dummy comment
void* kont123495 = (decode_clo(env123792))[1];

//creating new closure instance
void** clo131845 = alloc_clo(lam123789_fptr, 5);

//setting env list
clo131845[1] = kont123495;
clo131845[2] = cons;
clo131845[3] = a123398123638;
clo131845[4] = proc;
clo131845[5] = map;
void* f123498123639 = encode_clo(clo131845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123498123639;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123791 = encode_clo(alloc_clo(lam123791_fptr, 0));

void* lam123793_fptr() // lam123793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123794 = arg_buffer[1];
//reading env and args
void* a123397123636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123794))[6];
//not do dummy comment
void* lst = (decode_clo(env123794))[5];
//not do dummy comment
void* map = (decode_clo(env123794))[4];
//not do dummy comment
void* proc = (decode_clo(env123794))[3];
//not do dummy comment
void* cons = (decode_clo(env123794))[2];
//not do dummy comment
void* kont123495 = (decode_clo(env123794))[1];

//creating new closure instance
void** clo131847 = alloc_clo(lam123791_fptr, 6);

//setting env list
clo131847[1] = kont123495;
clo131847[2] = cons;
clo131847[3] = proc;
clo131847[4] = map;
clo131847[5] = lst;
clo131847[6] = cdr;
void* f123499123637 = encode_clo(clo131847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f123499123637;
arg_buffer[3] = a123397123636;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123793 = encode_clo(alloc_clo(lam123793_fptr, 0));

void* lam123795_fptr() // lam123795 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123796 = arg_buffer[1];
//reading env and args
void* a123395123632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env123796))[8];
//not do dummy comment
void* map = (decode_clo(env123796))[7];
//not do dummy comment
void* proc = (decode_clo(env123796))[6];
//not do dummy comment
void* car = (decode_clo(env123796))[5];
//not do dummy comment
void* list = (decode_clo(env123796))[4];
//not do dummy comment
void* cdr = (decode_clo(env123796))[3];
//not do dummy comment
void* cons = (decode_clo(env123796))[2];
//not do dummy comment
void* kont123495 = (decode_clo(env123796))[1];

//if-clause
bool if_guard131848 = is_true(a123395123632);
if(if_guard131848)
{

//creating new closure instance
void** clo131850 = alloc_clo(lam123785_fptr, 1);

//setting env list
clo131850[1] = kont123495;
void* f123496123633 = encode_clo(clo131850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f123496123633;
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
void** clo131852 = alloc_clo(lam123793_fptr, 6);

//setting env list
clo131852[1] = kont123495;
clo131852[2] = cons;
clo131852[3] = proc;
clo131852[4] = map;
clo131852[5] = lst;
clo131852[6] = cdr;
void* f123500123635 = encode_clo(clo131852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f123500123635;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123795 = encode_clo(alloc_clo(lam123795_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123797 = arg_buffer[1];
//reading env and args
void* kont123495 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo131854 = alloc_clo(lam123795_fptr, 8);

//setting env list
clo131854[1] = kont123495;
clo131854[2] = cons;
clo131854[3] = cdr;
clo131854[4] = list;
clo131854[5] = car;
clo131854[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo131854[7] = map;
clo131854[8] = lst;
void* f123501123631 = encode_clo(clo131854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f123501123631;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam123798_fptr() // lam123798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123799 = arg_buffer[1];
//reading env and args
void* x123402123646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123502 = (decode_clo(env123799))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123502);
arg_buffer[2] = x123402123646;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123502))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123798 = encode_clo(alloc_clo(lam123798_fptr, 0));

void* lam123800_fptr() // lam123800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123801 = arg_buffer[1];
//reading env and args
void* a123407123656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123502 = (decode_clo(env123801))[3];
//not do dummy comment
void* a123405123652 = (decode_clo(env123801))[2];
//not do dummy comment
void* cons = (decode_clo(env123801))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont123502;
arg_buffer[3] = a123405123652;
arg_buffer[4] = a123407123656;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123800 = encode_clo(alloc_clo(lam123800_fptr, 0));

void* lam123802_fptr() // lam123802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123803 = arg_buffer[1];
//reading env and args
void* a123406123654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123502 = (decode_clo(env123803))[5];
//not do dummy comment
void* op = (decode_clo(env123803))[4];
//not do dummy comment
void* a123405123652 = (decode_clo(env123803))[3];
//not do dummy comment
void* filter = (decode_clo(env123803))[2];
//not do dummy comment
void* cons = (decode_clo(env123803))[1];

//creating new closure instance
void** clo131856 = alloc_clo(lam123800_fptr, 3);

//setting env list
clo131856[1] = cons;
clo131856[2] = a123405123652;
clo131856[3] = kont123502;
void* f123504123655 = encode_clo(clo131856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f123504123655;
arg_buffer[3] = op;
arg_buffer[4] = a123406123654;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123802 = encode_clo(alloc_clo(lam123802_fptr, 0));

void* lam123804_fptr() // lam123804 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123805 = arg_buffer[1];
//reading env and args
void* a123405123652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123805))[6];
//not do dummy comment
void* lst = (decode_clo(env123805))[5];
//not do dummy comment
void* kont123502 = (decode_clo(env123805))[4];
//not do dummy comment
void* op = (decode_clo(env123805))[3];
//not do dummy comment
void* filter = (decode_clo(env123805))[2];
//not do dummy comment
void* cons = (decode_clo(env123805))[1];

//creating new closure instance
void** clo131858 = alloc_clo(lam123802_fptr, 5);

//setting env list
clo131858[1] = cons;
clo131858[2] = filter;
clo131858[3] = a123405123652;
clo131858[4] = op;
clo131858[5] = kont123502;
void* f123505123653 = encode_clo(clo131858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123505123653;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123804 = encode_clo(alloc_clo(lam123804_fptr, 0));

void* lam123806_fptr() // lam123806 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123807 = arg_buffer[1];
//reading env and args
void* a123408123658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123502 = (decode_clo(env123807))[3];
//not do dummy comment
void* op = (decode_clo(env123807))[2];
//not do dummy comment
void* filter = (decode_clo(env123807))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont123502;
arg_buffer[3] = op;
arg_buffer[4] = a123408123658;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123806 = encode_clo(alloc_clo(lam123806_fptr, 0));

void* lam123808_fptr() // lam123808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123809 = arg_buffer[1];
//reading env and args
void* a123404123650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123809))[7];
//not do dummy comment
void* lst = (decode_clo(env123809))[6];
//not do dummy comment
void* kont123502 = (decode_clo(env123809))[5];
//not do dummy comment
void* op = (decode_clo(env123809))[4];
//not do dummy comment
void* cons = (decode_clo(env123809))[3];
//not do dummy comment
void* filter = (decode_clo(env123809))[2];
//not do dummy comment
void* car = (decode_clo(env123809))[1];

//if-clause
bool if_guard131859 = is_true(a123404123650);
if(if_guard131859)
{

//creating new closure instance
void** clo131861 = alloc_clo(lam123804_fptr, 6);

//setting env list
clo131861[1] = cons;
clo131861[2] = filter;
clo131861[3] = op;
clo131861[4] = kont123502;
clo131861[5] = lst;
clo131861[6] = cdr;
void* f123506123651 = encode_clo(clo131861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f123506123651;
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
void** clo131863 = alloc_clo(lam123806_fptr, 3);

//setting env list
clo131863[1] = filter;
clo131863[2] = op;
clo131863[3] = kont123502;
void* f123507123657 = encode_clo(clo131863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123507123657;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123808 = encode_clo(alloc_clo(lam123808_fptr, 0));

void* lam123810_fptr() // lam123810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123811 = arg_buffer[1];
//reading env and args
void* a123403123648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123811))[7];
//not do dummy comment
void* lst = (decode_clo(env123811))[6];
//not do dummy comment
void* kont123502 = (decode_clo(env123811))[5];
//not do dummy comment
void* op = (decode_clo(env123811))[4];
//not do dummy comment
void* cons = (decode_clo(env123811))[3];
//not do dummy comment
void* filter = (decode_clo(env123811))[2];
//not do dummy comment
void* car = (decode_clo(env123811))[1];

//creating new closure instance
void** clo131865 = alloc_clo(lam123808_fptr, 7);

//setting env list
clo131865[1] = car;
clo131865[2] = filter;
clo131865[3] = cons;
clo131865[4] = op;
clo131865[5] = kont123502;
clo131865[6] = lst;
clo131865[7] = cdr;
void* f123508123649 = encode_clo(clo131865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f123508123649;
arg_buffer[3] = a123403123648;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123810 = encode_clo(alloc_clo(lam123810_fptr, 0));

void* lam123812_fptr() // lam123812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123813 = arg_buffer[1];
//reading env and args
void* a123401123644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env123813))[8];
//not do dummy comment
void* kont123502 = (decode_clo(env123813))[7];
//not do dummy comment
void* op = (decode_clo(env123813))[6];
//not do dummy comment
void* cons = (decode_clo(env123813))[5];
//not do dummy comment
void* list = (decode_clo(env123813))[4];
//not do dummy comment
void* cdr = (decode_clo(env123813))[3];
//not do dummy comment
void* filter = (decode_clo(env123813))[2];
//not do dummy comment
void* car = (decode_clo(env123813))[1];

//if-clause
bool if_guard131866 = is_true(a123401123644);
if(if_guard131866)
{

//creating new closure instance
void** clo131868 = alloc_clo(lam123798_fptr, 1);

//setting env list
clo131868[1] = kont123502;
void* f123503123645 = encode_clo(clo131868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f123503123645;
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
void** clo131870 = alloc_clo(lam123810_fptr, 7);

//setting env list
clo131870[1] = car;
clo131870[2] = filter;
clo131870[3] = cons;
clo131870[4] = op;
clo131870[5] = kont123502;
clo131870[6] = lst;
clo131870[7] = cdr;
void* f123509123647 = encode_clo(clo131870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f123509123647;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123812 = encode_clo(alloc_clo(lam123812_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123814 = arg_buffer[1];
//reading env and args
void* kont123502 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo131872 = alloc_clo(lam123812_fptr, 8);

//setting env list
clo131872[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo131872[2] = filter;
clo131872[3] = cdr;
clo131872[4] = list;
clo131872[5] = cons;
clo131872[6] = op;
clo131872[7] = kont123502;
clo131872[8] = lst;
void* f123510123643 = encode_clo(clo131872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f123510123643;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam123815_fptr() // lam123815 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123816 = arg_buffer[1];
//reading env and args
void* a123413123666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env123816))[3];
//not do dummy comment
void* a123411123663 = (decode_clo(env123816))[2];
//not do dummy comment
void* kont123511 = (decode_clo(env123816))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont123511;
arg_buffer[3] = a123411123663;
arg_buffer[4] = a123413123666;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123815 = encode_clo(alloc_clo(lam123815_fptr, 0));

void* lam123818_fptr() // lam123818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123819 = arg_buffer[1];
//reading env and args
void* a123411123663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env123819))[4];
//not do dummy comment
void* n = (decode_clo(env123819))[3];
//not do dummy comment
void* kont123511 = (decode_clo(env123819))[2];
//not do dummy comment
void* _u45 = (decode_clo(env123819))[1];
mpz_t* mpzvar131873 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131873, "1", 10);
void* a123412123664 = encode_mpz(mpzvar131873);

//creating new closure instance
void** clo131875 = alloc_clo(lam123815_fptr, 3);

//setting env list
clo131875[1] = kont123511;
clo131875[2] = a123411123663;
clo131875[3] = drop;
void* f123512123665 = encode_clo(clo131875);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f123512123665;
arg_buffer[3] = n;
arg_buffer[4] = a123412123664;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123818 = encode_clo(alloc_clo(lam123818_fptr, 0));

void* lam123820_fptr() // lam123820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123821 = arg_buffer[1];
//reading env and args
void* a123410123661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123821))[6];
//not do dummy comment
void* n = (decode_clo(env123821))[5];
//not do dummy comment
void* kont123511 = (decode_clo(env123821))[4];
//not do dummy comment
void* _u45 = (decode_clo(env123821))[3];
//not do dummy comment
void* lst = (decode_clo(env123821))[2];
//not do dummy comment
void* drop = (decode_clo(env123821))[1];

//if-clause
bool if_guard131876 = is_true(a123410123661);
if(if_guard131876)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123511);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123511))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo131878 = alloc_clo(lam123818_fptr, 4);

//setting env list
clo131878[1] = _u45;
clo131878[2] = kont123511;
clo131878[3] = n;
clo131878[4] = drop;
void* f123513123662 = encode_clo(clo131878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123513123662;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123820 = encode_clo(alloc_clo(lam123820_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123823 = arg_buffer[1];
//reading env and args
void* kont123511 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar131879 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131879, "0", 10);
void* a123409123659 = encode_mpz(mpzvar131879);

//creating new closure instance
void** clo131881 = alloc_clo(lam123820_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo131881[1] = drop;
clo131881[2] = lst;
clo131881[3] = _u45;
clo131881[4] = kont123511;
clo131881[5] = n;
clo131881[6] = cdr;
void* f123514123660 = encode_clo(clo131881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f123514123660;
arg_buffer[3] = n;
arg_buffer[4] = a123409123659;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam123824_fptr() // lam123824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123825 = arg_buffer[1];
//reading env and args
void* a123417123674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123515 = (decode_clo(env123825))[3];
//not do dummy comment
void* proc = (decode_clo(env123825))[2];
//not do dummy comment
void* a123415123670 = (decode_clo(env123825))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont123515;
arg_buffer[3] = a123415123670;
arg_buffer[4] = a123417123674;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123824 = encode_clo(alloc_clo(lam123824_fptr, 0));

void* lam123826_fptr() // lam123826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123827 = arg_buffer[1];
//reading env and args
void* a123416123672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123515 = (decode_clo(env123827))[5];
//not do dummy comment
void* foldr = (decode_clo(env123827))[4];
//not do dummy comment
void* a123415123670 = (decode_clo(env123827))[3];
//not do dummy comment
void* proc = (decode_clo(env123827))[2];
//not do dummy comment
void* acc = (decode_clo(env123827))[1];

//creating new closure instance
void** clo131883 = alloc_clo(lam123824_fptr, 3);

//setting env list
clo131883[1] = a123415123670;
clo131883[2] = proc;
clo131883[3] = kont123515;
void* f123516123673 = encode_clo(clo131883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f123516123673;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a123416123672;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123826 = encode_clo(alloc_clo(lam123826_fptr, 0));

void* lam123828_fptr() // lam123828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123829 = arg_buffer[1];
//reading env and args
void* a123415123670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123829))[6];
//not do dummy comment
void* kont123515 = (decode_clo(env123829))[5];
//not do dummy comment
void* foldr = (decode_clo(env123829))[4];
//not do dummy comment
void* lst = (decode_clo(env123829))[3];
//not do dummy comment
void* proc = (decode_clo(env123829))[2];
//not do dummy comment
void* acc = (decode_clo(env123829))[1];

//creating new closure instance
void** clo131885 = alloc_clo(lam123826_fptr, 5);

//setting env list
clo131885[1] = acc;
clo131885[2] = proc;
clo131885[3] = a123415123670;
clo131885[4] = foldr;
clo131885[5] = kont123515;
void* f123517123671 = encode_clo(clo131885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123517123671;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123828 = encode_clo(alloc_clo(lam123828_fptr, 0));

void* lam123830_fptr() // lam123830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123831 = arg_buffer[1];
//reading env and args
void* a123414123668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123831))[7];
//not do dummy comment
void* kont123515 = (decode_clo(env123831))[6];
//not do dummy comment
void* car = (decode_clo(env123831))[5];
//not do dummy comment
void* foldr = (decode_clo(env123831))[4];
//not do dummy comment
void* lst = (decode_clo(env123831))[3];
//not do dummy comment
void* proc = (decode_clo(env123831))[2];
//not do dummy comment
void* acc = (decode_clo(env123831))[1];

//if-clause
bool if_guard131886 = is_true(a123414123668);
if(if_guard131886)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123515);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123515))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo131888 = alloc_clo(lam123828_fptr, 6);

//setting env list
clo131888[1] = acc;
clo131888[2] = proc;
clo131888[3] = lst;
clo131888[4] = foldr;
clo131888[5] = kont123515;
clo131888[6] = cdr;
void* f123518123669 = encode_clo(clo131888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f123518123669;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123830 = encode_clo(alloc_clo(lam123830_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123832 = arg_buffer[1];
//reading env and args
void* kont123515 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo131890 = alloc_clo(lam123830_fptr, 7);

//setting env list
clo131890[1] = acc;
clo131890[2] = proc;
clo131890[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo131890[4] = foldr;
clo131890[5] = car;
clo131890[6] = kont123515;
clo131890[7] = cdr;
void* f123519123667 = encode_clo(clo131890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f123519123667;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam123833_fptr() // lam123833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123834 = arg_buffer[1];
//reading env and args
void* a123421123682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a123419123678 = (decode_clo(env123834))[3];
//not do dummy comment
void* kont123520 = (decode_clo(env123834))[2];
//not do dummy comment
void* cons = (decode_clo(env123834))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont123520;
arg_buffer[3] = a123419123678;
arg_buffer[4] = a123421123682;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123833 = encode_clo(alloc_clo(lam123833_fptr, 0));

void* lam123835_fptr() // lam123835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123836 = arg_buffer[1];
//reading env and args
void* a123420123680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a123419123678 = (decode_clo(env123836))[5];
//not do dummy comment
void* kont123520 = (decode_clo(env123836))[4];
//not do dummy comment
void* append = (decode_clo(env123836))[3];
//not do dummy comment
void* lst2 = (decode_clo(env123836))[2];
//not do dummy comment
void* cons = (decode_clo(env123836))[1];

//creating new closure instance
void** clo131892 = alloc_clo(lam123833_fptr, 3);

//setting env list
clo131892[1] = cons;
clo131892[2] = kont123520;
clo131892[3] = a123419123678;
void* f123521123681 = encode_clo(clo131892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f123521123681;
arg_buffer[3] = a123420123680;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123835 = encode_clo(alloc_clo(lam123835_fptr, 0));

void* lam123837_fptr() // lam123837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123838 = arg_buffer[1];
//reading env and args
void* a123419123678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123838))[6];
//not do dummy comment
void* kont123520 = (decode_clo(env123838))[5];
//not do dummy comment
void* append = (decode_clo(env123838))[4];
//not do dummy comment
void* lst2 = (decode_clo(env123838))[3];
//not do dummy comment
void* lst1 = (decode_clo(env123838))[2];
//not do dummy comment
void* cons = (decode_clo(env123838))[1];

//creating new closure instance
void** clo131894 = alloc_clo(lam123835_fptr, 5);

//setting env list
clo131894[1] = cons;
clo131894[2] = lst2;
clo131894[3] = append;
clo131894[4] = kont123520;
clo131894[5] = a123419123678;
void* f123522123679 = encode_clo(clo131894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f123522123679;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123837 = encode_clo(alloc_clo(lam123837_fptr, 0));

void* lam123839_fptr() // lam123839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123840 = arg_buffer[1];
//reading env and args
void* a123418123676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env123840))[7];
//not do dummy comment
void* kont123520 = (decode_clo(env123840))[6];
//not do dummy comment
void* append = (decode_clo(env123840))[5];
//not do dummy comment
void* lst2 = (decode_clo(env123840))[4];
//not do dummy comment
void* cons = (decode_clo(env123840))[3];
//not do dummy comment
void* lst1 = (decode_clo(env123840))[2];
//not do dummy comment
void* car = (decode_clo(env123840))[1];

//if-clause
bool if_guard131895 = is_true(a123418123676);
if(if_guard131895)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123520);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123520))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo131897 = alloc_clo(lam123837_fptr, 6);

//setting env list
clo131897[1] = cons;
clo131897[2] = lst1;
clo131897[3] = lst2;
clo131897[4] = append;
clo131897[5] = kont123520;
clo131897[6] = cdr;
void* f123523123677 = encode_clo(clo131897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f123523123677;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam123839 = encode_clo(alloc_clo(lam123839_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123841 = arg_buffer[1];
//reading env and args
void* kont123520 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo131899 = alloc_clo(lam123839_fptr, 7);

//setting env list
clo131899[1] = car;
clo131899[2] = lst1;
clo131899[3] = cons;
clo131899[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo131899[5] = append;
clo131899[6] = kont123520;
clo131899[7] = cdr;
void* f123524123675 = encode_clo(clo131899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f123524123675;
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
void* _123842 = arg_buffer[1];
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

void* kont123525123683 = prim_car(lst);
void* lst123684 = prim_cdr(lst);
void* x123422123685 = apply_prim_hash(lst123684);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123525123683);
arg_buffer[2] = x123422123685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123525123683))[0]);
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
void* _123843 = arg_buffer[1];
//reading env and args
void* kont123527 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x123423123686 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123527);
arg_buffer[2] = x123423123686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123527))[0]);
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
void* _123844 = arg_buffer[1];
//reading env and args
void* kont123528 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x123424123687 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123528);
arg_buffer[2] = x123424123687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123528))[0]);
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
void* _123845 = arg_buffer[1];
//reading env and args
void* kont123529 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x123425123688 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123529);
arg_buffer[2] = x123425123688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123529))[0]);
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
void* _123846 = arg_buffer[1];
//reading env and args
void* kont123530 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x123426123689 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123530);
arg_buffer[2] = x123426123689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123530))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam123848_fptr() // lam123848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123849 = arg_buffer[1];
//reading env and args
void* a123431123695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123531 = (decode_clo(env123849))[2];
//not do dummy comment
void* take = (decode_clo(env123849))[1];
mpz_t* mpzvar131900 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131900, "2", 10);
void* a123432123696 = encode_mpz(mpzvar131900);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take);
arg_buffer[2] = kont123531;
arg_buffer[3] = a123431123695;
arg_buffer[4] = a123432123696;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123848 = encode_clo(alloc_clo(lam123848_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123854 = arg_buffer[1];
//reading env and args
void* kont123531 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar131901 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131901, "1", 10);
void* a123427123690 = encode_mpz(mpzvar131901);
mpz_t* mpzvar131902 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131902, "2", 10);
void* a123428123691 = encode_mpz(mpzvar131902);
mpz_t* mpzvar131903 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131903, "3", 10);
void* a123429123692 = encode_mpz(mpzvar131903);
mpz_t* mpzvar131904 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar131904, "4", 10);
void* a123430123693 = encode_mpz(mpzvar131904);

//creating new closure instance
void** clo131906 = alloc_clo(lam123848_fptr, 2);

//setting env list
clo131906[1] = take;
clo131906[2] = kont123531;
void* f123532123694 = encode_clo(clo131906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f123532123694;
arg_buffer[3] = a123427123690;
arg_buffer[4] = a123428123691;
arg_buffer[5] = a123429123692;
arg_buffer[6] = a123430123693;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam123855_fptr() // lam123855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env123856 = arg_buffer[1];
//reading env and args
void* x123433123698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont123533 = (decode_clo(env123856))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont123533);
arg_buffer[2] = x123433123698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont123533))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam123855 = encode_clo(alloc_clo(lam123855_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _123857 = arg_buffer[1];
//reading env and args
void* kont123533 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo131908 = alloc_clo(lam123855_fptr, 1);

//setting env list
clo131908[1] = kont123533;
void* f123534123697 = encode_clo(clo131908);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f123534123697;
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

