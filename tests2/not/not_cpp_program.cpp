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
void* _49665 = arg_buffer[1];
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

void* kont4939549499 = prim_car(lst);
void* lst49500 = prim_cdr(lst);
void* x4930649501 = apply_prim__u43(lst49500);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4939549499);
arg_buffer[2] = x4930649501;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4939549499))[0]);
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
void* _49666 = arg_buffer[1];
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

void* kont4939749502 = prim_car(lst);
void* lst49503 = prim_cdr(lst);
void* x4930749504 = apply_prim__u45(lst49503);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4939749502);
arg_buffer[2] = x4930749504;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4939749502))[0]);
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
void* _49667 = arg_buffer[1];
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

void* kont4939949505 = prim_car(lst);
void* lst49506 = prim_cdr(lst);
void* x4930849507 = apply_prim__u42(lst49506);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4939949505);
arg_buffer[2] = x4930849507;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4939949505))[0]);
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
void* _49668 = arg_buffer[1];
//reading env and args
void* kont49401 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4930949508 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49401);
arg_buffer[2] = x4930949508;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49401))[0]);
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
void* _49669 = arg_buffer[1];
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

void* kont4940249509 = prim_car(lst);
void* lst49510 = prim_cdr(lst);
void* x4931049511 = apply_prim__u47(lst49510);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4940249509);
arg_buffer[2] = x4931049511;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4940249509))[0]);
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
void* _49670 = arg_buffer[1];
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

void* kont4940449512 = prim_car(lst);
void* lst49513 = prim_cdr(lst);
void* x4931149514 = apply_prim__u61(lst49513);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4940449512);
arg_buffer[2] = x4931149514;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4940449512))[0]);
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
void* _49671 = arg_buffer[1];
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

void* kont4940649515 = prim_car(lst);
void* lst49516 = prim_cdr(lst);
void* x4931249517 = apply_prim__u62(lst49516);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4940649515);
arg_buffer[2] = x4931249517;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4940649515))[0]);
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
void* _49672 = arg_buffer[1];
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

void* kont4940849518 = prim_car(lst);
void* lst49519 = prim_cdr(lst);
void* x4931349520 = apply_prim__u60(lst49519);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4940849518);
arg_buffer[2] = x4931349520;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4940849518))[0]);
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
void* _49673 = arg_buffer[1];
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

void* kont4941049521 = prim_car(lst);
void* lst49522 = prim_cdr(lst);
void* x4931449523 = apply_prim__u60_u61(lst49522);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4941049521);
arg_buffer[2] = x4931449523;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4941049521))[0]);
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
void* _49674 = arg_buffer[1];
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

void* kont4941249524 = prim_car(lst);
void* lst49525 = prim_cdr(lst);
void* x4931549526 = apply_prim__u62_u61(lst49525);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4941249524);
arg_buffer[2] = x4931549526;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4941249524))[0]);
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
void* _49675 = arg_buffer[1];
//reading env and args
void* kont49414 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4931649527 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49414);
arg_buffer[2] = x4931649527;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49414))[0]);
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
void* _49676 = arg_buffer[1];
//reading env and args
void* kont49415 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4931749528 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49415);
arg_buffer[2] = x4931749528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49415))[0]);
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
void* _49677 = arg_buffer[1];
//reading env and args
void* kont49416 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4931849529 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49416);
arg_buffer[2] = x4931849529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49416))[0]);
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
void* _49678 = arg_buffer[1];
//reading env and args
void* kont49417 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4931949530 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49417);
arg_buffer[2] = x4931949530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49417))[0]);
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
void* _49679 = arg_buffer[1];
//reading env and args
void* kont49418 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4932049531 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49418);
arg_buffer[2] = x4932049531;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49418))[0]);
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
void* _49680 = arg_buffer[1];
//reading env and args
void* kont49419 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4932149532 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49419);
arg_buffer[2] = x4932149532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49419))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam49681_fptr() // lam49681 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49682 = arg_buffer[1];
//reading env and args
void* a4932449536 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env49682))[3];
//not do dummy comment
void* kont49420 = (decode_clo(env49682))[2];
//not do dummy comment
void* a4932249533 = (decode_clo(env49682))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont49420;
arg_buffer[3] = a4932249533;
arg_buffer[4] = a4932449536;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49681 = encode_clo(alloc_clo(lam49681_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49685 = arg_buffer[1];
//reading env and args
void* kont49420 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar49822 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49822, "0", 10);
void* a4932249533 = encode_mpz(mpzvar49822);
mpz_t* mpzvar49823 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49823, "2", 10);
void* a4932349534 = encode_mpz(mpzvar49823);

//creating new closure instance
void** clo49825 = alloc_clo(lam49681_fptr, 3);

//setting env list
clo49825[1] = a4932249533;
clo49825[2] = kont49420;
clo49825[3] = equal_u63;
void* f4942149535 = encode_clo(clo49825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4942149535;
arg_buffer[3] = x;
arg_buffer[4] = a4932349534;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam49686_fptr() // lam49686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49687 = arg_buffer[1];
//reading env and args
void* a4932749540 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49422 = (decode_clo(env49687))[3];
//not do dummy comment
void* a4932549537 = (decode_clo(env49687))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env49687))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont49422;
arg_buffer[3] = a4932549537;
arg_buffer[4] = a4932749540;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49686 = encode_clo(alloc_clo(lam49686_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49690 = arg_buffer[1];
//reading env and args
void* kont49422 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar49826 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49826, "1", 10);
void* a4932549537 = encode_mpz(mpzvar49826);
mpz_t* mpzvar49827 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49827, "2", 10);
void* a4932649538 = encode_mpz(mpzvar49827);

//creating new closure instance
void** clo49829 = alloc_clo(lam49686_fptr, 3);

//setting env list
clo49829[1] = equal_u63;
clo49829[2] = a4932549537;
clo49829[3] = kont49422;
void* f4942349539 = encode_clo(clo49829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4942349539;
arg_buffer[3] = x;
arg_buffer[4] = a4932649538;
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
void* _49691 = arg_buffer[1];
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

void* kont4942449541 = prim_car(x);
void* x49542 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4942449541);
arg_buffer[2] = x49542;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4942449541))[0]);
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
void* _49692 = arg_buffer[1];
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

void* kont4942649543 = prim_car(lst);
void* lst49544 = prim_cdr(lst);
void* x4932849545 = apply_prim_and(lst49544);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4942649543);
arg_buffer[2] = x4932849545;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4942649543))[0]);
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
void* _49693 = arg_buffer[1];
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

void* kont4942849546 = prim_car(lst);
void* lst49547 = prim_cdr(lst);
void* x4932949548 = apply_prim_or(lst49547);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4942849546);
arg_buffer[2] = x4932949548;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4942849546))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam49696_fptr() // lam49696 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49697 = arg_buffer[1];
//reading env and args
void* a4933549558 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49430 = (decode_clo(env49697))[3];
//not do dummy comment
void* x = (decode_clo(env49697))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49697))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont49430;
arg_buffer[3] = x;
arg_buffer[4] = a4933549558;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49696 = encode_clo(alloc_clo(lam49696_fptr, 0));

void* lam49698_fptr() // lam49698 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49699 = arg_buffer[1];
//reading env and args
void* a4933349555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49699))[5];
//not do dummy comment
void* lst = (decode_clo(env49699))[4];
//not do dummy comment
void* kont49430 = (decode_clo(env49699))[3];
//not do dummy comment
void* x = (decode_clo(env49699))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49699))[1];

//if-clause
bool if_guard49830 = is_true(a4933349555);
if(if_guard49830)
{
void* x4933449556 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49430);
arg_buffer[2] = x4933449556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49430))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49832 = alloc_clo(lam49696_fptr, 3);

//setting env list
clo49832[1] = member_u63;
clo49832[2] = x;
clo49832[3] = kont49430;
void* f4943149557 = encode_clo(clo49832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4943149557;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49698 = encode_clo(alloc_clo(lam49698_fptr, 0));

void* lam49700_fptr() // lam49700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49701 = arg_buffer[1];
//reading env and args
void* a4933249553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49701))[6];
//not do dummy comment
void* lst = (decode_clo(env49701))[5];
//not do dummy comment
void* x = (decode_clo(env49701))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env49701))[3];
//not do dummy comment
void* kont49430 = (decode_clo(env49701))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env49701))[1];

//creating new closure instance
void** clo49834 = alloc_clo(lam49698_fptr, 5);

//setting env list
clo49834[1] = member_u63;
clo49834[2] = x;
clo49834[3] = kont49430;
clo49834[4] = lst;
clo49834[5] = cdr;
void* f4943249554 = encode_clo(clo49834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4943249554;
arg_buffer[3] = a4933249553;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49700 = encode_clo(alloc_clo(lam49700_fptr, 0));

void* lam49702_fptr() // lam49702 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49703 = arg_buffer[1];
//reading env and args
void* a4933049550 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49703))[7];
//not do dummy comment
void* lst = (decode_clo(env49703))[6];
//not do dummy comment
void* x = (decode_clo(env49703))[5];
//not do dummy comment
void* car = (decode_clo(env49703))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env49703))[3];
//not do dummy comment
void* kont49430 = (decode_clo(env49703))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env49703))[1];

//if-clause
bool if_guard49835 = is_true(a4933049550);
if(if_guard49835)
{
void* x4933149551 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49430);
arg_buffer[2] = x4933149551;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49430))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49837 = alloc_clo(lam49700_fptr, 6);

//setting env list
clo49837[1] = equal_u63;
clo49837[2] = kont49430;
clo49837[3] = member_u63;
clo49837[4] = x;
clo49837[5] = lst;
clo49837[6] = cdr;
void* f4943349552 = encode_clo(clo49837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4943349552;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49702 = encode_clo(alloc_clo(lam49702_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49704 = arg_buffer[1];
//reading env and args
void* kont49430 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49839 = alloc_clo(lam49702_fptr, 7);

//setting env list
clo49839[1] = equal_u63;
clo49839[2] = kont49430;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo49839[3] = member_u63;
clo49839[4] = car;
clo49839[5] = x;
clo49839[6] = lst;
clo49839[7] = cdr;
void* f4943449549 = encode_clo(clo49839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4943449549;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam49705_fptr() // lam49705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49706 = arg_buffer[1];
//reading env and args
void* a4933949566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env49706))[4];
//not do dummy comment
void* kont49435 = (decode_clo(env49706))[3];
//not do dummy comment
void* a4933849564 = (decode_clo(env49706))[2];
//not do dummy comment
void* foldl = (decode_clo(env49706))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont49435;
arg_buffer[3] = fun;
arg_buffer[4] = a4933849564;
arg_buffer[5] = a4933949566;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49705 = encode_clo(alloc_clo(lam49705_fptr, 0));

void* lam49707_fptr() // lam49707 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49708 = arg_buffer[1];
//reading env and args
void* a4933849564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49708))[5];
//not do dummy comment
void* lst = (decode_clo(env49708))[4];
//not do dummy comment
void* fun = (decode_clo(env49708))[3];
//not do dummy comment
void* kont49435 = (decode_clo(env49708))[2];
//not do dummy comment
void* foldl = (decode_clo(env49708))[1];

//creating new closure instance
void** clo49841 = alloc_clo(lam49705_fptr, 4);

//setting env list
clo49841[1] = foldl;
clo49841[2] = a4933849564;
clo49841[3] = kont49435;
clo49841[4] = fun;
void* f4943649565 = encode_clo(clo49841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4943649565;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49707 = encode_clo(alloc_clo(lam49707_fptr, 0));

void* lam49709_fptr() // lam49709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49710 = arg_buffer[1];
//reading env and args
void* a4933749562 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49710))[6];
//not do dummy comment
void* lst = (decode_clo(env49710))[5];
//not do dummy comment
void* fun = (decode_clo(env49710))[4];
//not do dummy comment
void* acc = (decode_clo(env49710))[3];
//not do dummy comment
void* kont49435 = (decode_clo(env49710))[2];
//not do dummy comment
void* foldl = (decode_clo(env49710))[1];

//creating new closure instance
void** clo49843 = alloc_clo(lam49707_fptr, 5);

//setting env list
clo49843[1] = foldl;
clo49843[2] = kont49435;
clo49843[3] = fun;
clo49843[4] = lst;
clo49843[5] = cdr;
void* f4943749563 = encode_clo(clo49843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4943749563;
arg_buffer[3] = a4933749562;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49709 = encode_clo(alloc_clo(lam49709_fptr, 0));

void* lam49711_fptr() // lam49711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49712 = arg_buffer[1];
//reading env and args
void* a4933649560 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49712))[7];
//not do dummy comment
void* lst = (decode_clo(env49712))[6];
//not do dummy comment
void* fun = (decode_clo(env49712))[5];
//not do dummy comment
void* acc = (decode_clo(env49712))[4];
//not do dummy comment
void* foldl = (decode_clo(env49712))[3];
//not do dummy comment
void* kont49435 = (decode_clo(env49712))[2];
//not do dummy comment
void* car = (decode_clo(env49712))[1];

//if-clause
bool if_guard49844 = is_true(a4933649560);
if(if_guard49844)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49435);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49435))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49846 = alloc_clo(lam49709_fptr, 6);

//setting env list
clo49846[1] = foldl;
clo49846[2] = kont49435;
clo49846[3] = acc;
clo49846[4] = fun;
clo49846[5] = lst;
clo49846[6] = cdr;
void* f4943849561 = encode_clo(clo49846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4943849561;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49711 = encode_clo(alloc_clo(lam49711_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49713 = arg_buffer[1];
//reading env and args
void* kont49435 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49848 = alloc_clo(lam49711_fptr, 7);

//setting env list
clo49848[1] = car;
clo49848[2] = kont49435;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo49848[3] = foldl;
clo49848[4] = acc;
clo49848[5] = fun;
clo49848[6] = lst;
clo49848[7] = cdr;
void* f4943949559 = encode_clo(clo49848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4943949559;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam49714_fptr() // lam49714 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49715 = arg_buffer[1];
//reading env and args
void* a4934349574 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49440 = (decode_clo(env49715))[3];
//not do dummy comment
void* a4934149570 = (decode_clo(env49715))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49715))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont49440;
arg_buffer[3] = a4934149570;
arg_buffer[4] = a4934349574;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49714 = encode_clo(alloc_clo(lam49714_fptr, 0));

void* lam49716_fptr() // lam49716 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49717 = arg_buffer[1];
//reading env and args
void* a4934249572 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49440 = (decode_clo(env49717))[5];
//not do dummy comment
void* a4934149570 = (decode_clo(env49717))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49717))[3];
//not do dummy comment
void* lst2 = (decode_clo(env49717))[2];
//not do dummy comment
void* cons = (decode_clo(env49717))[1];

//creating new closure instance
void** clo49850 = alloc_clo(lam49714_fptr, 3);

//setting env list
clo49850[1] = reverse_u45helper;
clo49850[2] = a4934149570;
clo49850[3] = kont49440;
void* f4944149573 = encode_clo(clo49850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4944149573;
arg_buffer[3] = a4934249572;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49716 = encode_clo(alloc_clo(lam49716_fptr, 0));

void* lam49718_fptr() // lam49718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49719 = arg_buffer[1];
//reading env and args
void* a4934149570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49440 = (decode_clo(env49719))[6];
//not do dummy comment
void* lst = (decode_clo(env49719))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49719))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49719))[3];
//not do dummy comment
void* car = (decode_clo(env49719))[2];
//not do dummy comment
void* cons = (decode_clo(env49719))[1];

//creating new closure instance
void** clo49852 = alloc_clo(lam49716_fptr, 5);

//setting env list
clo49852[1] = cons;
clo49852[2] = lst2;
clo49852[3] = reverse_u45helper;
clo49852[4] = a4934149570;
clo49852[5] = kont49440;
void* f4944249571 = encode_clo(clo49852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4944249571;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49718 = encode_clo(alloc_clo(lam49718_fptr, 0));

void* lam49720_fptr() // lam49720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49721 = arg_buffer[1];
//reading env and args
void* a4934049568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49721))[7];
//not do dummy comment
void* kont49440 = (decode_clo(env49721))[6];
//not do dummy comment
void* lst = (decode_clo(env49721))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49721))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49721))[3];
//not do dummy comment
void* car = (decode_clo(env49721))[2];
//not do dummy comment
void* cons = (decode_clo(env49721))[1];

//if-clause
bool if_guard49853 = is_true(a4934049568);
if(if_guard49853)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49440);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49440))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49855 = alloc_clo(lam49718_fptr, 6);

//setting env list
clo49855[1] = cons;
clo49855[2] = car;
clo49855[3] = lst2;
clo49855[4] = reverse_u45helper;
clo49855[5] = lst;
clo49855[6] = kont49440;
void* f4944349569 = encode_clo(clo49855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4944349569;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49720 = encode_clo(alloc_clo(lam49720_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49722 = arg_buffer[1];
//reading env and args
void* kont49440 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49857 = alloc_clo(lam49720_fptr, 7);

//setting env list
clo49857[1] = cons;
clo49857[2] = car;
clo49857[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo49857[4] = reverse_u45helper;
clo49857[5] = lst;
clo49857[6] = kont49440;
clo49857[7] = cdr;
void* f4944449567 = encode_clo(clo49857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4944449567;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam49723_fptr() // lam49723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49724 = arg_buffer[1];
//reading env and args
void* a4934449576 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49724))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49724))[2];
//not do dummy comment
void* kont49445 = (decode_clo(env49724))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont49445;
arg_buffer[3] = lst;
arg_buffer[4] = a4934449576;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49723 = encode_clo(alloc_clo(lam49723_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49725 = arg_buffer[1];
//reading env and args
void* kont49445 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49859 = alloc_clo(lam49723_fptr, 3);

//setting env list
clo49859[1] = kont49445;
clo49859[2] = reverse_u45helper;
clo49859[3] = lst;
void* f4944649575 = encode_clo(clo49859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4944649575;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam49726_fptr() // lam49726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49727 = arg_buffer[1];
//reading env and args
void* x4934749581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49447 = (decode_clo(env49727))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49447);
arg_buffer[2] = x4934749581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49447))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49726 = encode_clo(alloc_clo(lam49726_fptr, 0));

void* lam49728_fptr() // lam49728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49729 = arg_buffer[1];
//reading env and args
void* a4935249590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4934849583 = (decode_clo(env49729))[4];
//not do dummy comment
void* a4935049586 = (decode_clo(env49729))[3];
//not do dummy comment
void* kont49447 = (decode_clo(env49729))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env49729))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont49447;
arg_buffer[3] = a4934849583;
arg_buffer[4] = a4935049586;
arg_buffer[5] = a4935249590;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49728 = encode_clo(alloc_clo(lam49728_fptr, 0));

void* lam49730_fptr() // lam49730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49731 = arg_buffer[1];
//reading env and args
void* a4935149588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4934849583 = (decode_clo(env49731))[6];
//not do dummy comment
void* a4935049586 = (decode_clo(env49731))[5];
//not do dummy comment
void* kont49447 = (decode_clo(env49731))[4];
//not do dummy comment
void* cons = (decode_clo(env49731))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env49731))[2];
//not do dummy comment
void* lst2 = (decode_clo(env49731))[1];

//creating new closure instance
void** clo49861 = alloc_clo(lam49728_fptr, 4);

//setting env list
clo49861[1] = take_u45helper;
clo49861[2] = kont49447;
clo49861[3] = a4935049586;
clo49861[4] = a4934849583;
void* f4944949589 = encode_clo(clo49861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4944949589;
arg_buffer[3] = a4935149588;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49730 = encode_clo(alloc_clo(lam49730_fptr, 0));

void* lam49732_fptr() // lam49732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49733 = arg_buffer[1];
//reading env and args
void* a4935049586 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4934849583 = (decode_clo(env49733))[7];
//not do dummy comment
void* lst = (decode_clo(env49733))[6];
//not do dummy comment
void* kont49447 = (decode_clo(env49733))[5];
//not do dummy comment
void* car = (decode_clo(env49733))[4];
//not do dummy comment
void* cons = (decode_clo(env49733))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env49733))[2];
//not do dummy comment
void* lst2 = (decode_clo(env49733))[1];

//creating new closure instance
void** clo49863 = alloc_clo(lam49730_fptr, 6);

//setting env list
clo49863[1] = lst2;
clo49863[2] = take_u45helper;
clo49863[3] = cons;
clo49863[4] = kont49447;
clo49863[5] = a4935049586;
clo49863[6] = a4934849583;
void* f4945049587 = encode_clo(clo49863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4945049587;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49732 = encode_clo(alloc_clo(lam49732_fptr, 0));

void* lam49735_fptr() // lam49735 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49736 = arg_buffer[1];
//reading env and args
void* a4934849583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49736))[8];
//not do dummy comment
void* kont49447 = (decode_clo(env49736))[7];
//not do dummy comment
void* cons = (decode_clo(env49736))[6];
//not do dummy comment
void* _u45 = (decode_clo(env49736))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env49736))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49736))[3];
//not do dummy comment
void* n = (decode_clo(env49736))[2];
//not do dummy comment
void* car = (decode_clo(env49736))[1];
mpz_t* mpzvar49864 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49864, "1", 10);
void* a4934949584 = encode_mpz(mpzvar49864);

//creating new closure instance
void** clo49866 = alloc_clo(lam49732_fptr, 7);

//setting env list
clo49866[1] = lst2;
clo49866[2] = take_u45helper;
clo49866[3] = cons;
clo49866[4] = car;
clo49866[5] = kont49447;
clo49866[6] = lst;
clo49866[7] = a4934849583;
void* f4945149585 = encode_clo(clo49866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4945149585;
arg_buffer[3] = n;
arg_buffer[4] = a4934949584;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49735 = encode_clo(alloc_clo(lam49735_fptr, 0));

void* lam49737_fptr() // lam49737 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49738 = arg_buffer[1];
//reading env and args
void* a4934649579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49738))[10];
//not do dummy comment
void* lst = (decode_clo(env49738))[9];
//not do dummy comment
void* reverse = (decode_clo(env49738))[8];
//not do dummy comment
void* kont49447 = (decode_clo(env49738))[7];
//not do dummy comment
void* cons = (decode_clo(env49738))[6];
//not do dummy comment
void* _u45 = (decode_clo(env49738))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env49738))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49738))[3];
//not do dummy comment
void* n = (decode_clo(env49738))[2];
//not do dummy comment
void* car = (decode_clo(env49738))[1];

//if-clause
bool if_guard49867 = is_true(a4934649579);
if(if_guard49867)
{

//creating new closure instance
void** clo49869 = alloc_clo(lam49726_fptr, 1);

//setting env list
clo49869[1] = kont49447;
void* f4944849580 = encode_clo(clo49869);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4944849580;
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
void** clo49871 = alloc_clo(lam49735_fptr, 8);

//setting env list
clo49871[1] = car;
clo49871[2] = n;
clo49871[3] = lst2;
clo49871[4] = take_u45helper;
clo49871[5] = _u45;
clo49871[6] = cons;
clo49871[7] = kont49447;
clo49871[8] = lst;
void* f4945249582 = encode_clo(clo49871);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4945249582;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49737 = encode_clo(alloc_clo(lam49737_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49740 = arg_buffer[1];
//reading env and args
void* kont49447 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar49872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49872, "0", 10);
void* a4934549577 = encode_mpz(mpzvar49872);

//creating new closure instance
void** clo49874 = alloc_clo(lam49737_fptr, 10);

//setting env list
clo49874[1] = car;
clo49874[2] = n;
clo49874[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo49874[4] = take_u45helper;
clo49874[5] = _u45;
clo49874[6] = cons;
clo49874[7] = kont49447;
clo49874[8] = reverse;
clo49874[9] = lst;
clo49874[10] = cdr;
void* f4945349578 = encode_clo(clo49874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4945349578;
arg_buffer[3] = n;
arg_buffer[4] = a4934549577;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam49741_fptr() // lam49741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49742 = arg_buffer[1];
//reading env and args
void* a4935349592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49454 = (decode_clo(env49742))[4];
//not do dummy comment
void* lst = (decode_clo(env49742))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env49742))[2];
//not do dummy comment
void* n = (decode_clo(env49742))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont49454;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4935349592;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49741 = encode_clo(alloc_clo(lam49741_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49743 = arg_buffer[1];
//reading env and args
void* kont49454 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49876 = alloc_clo(lam49741_fptr, 4);

//setting env list
clo49876[1] = n;
clo49876[2] = take_u45helper;
clo49876[3] = lst;
clo49876[4] = kont49454;
void* f4945549591 = encode_clo(clo49876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4945549591;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam49745_fptr() // lam49745 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49746 = arg_buffer[1];
//reading env and args
void* a4935849600 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49456 = (decode_clo(env49746))[3];
//not do dummy comment
void* _u43 = (decode_clo(env49746))[2];
//not do dummy comment
void* a4935649596 = (decode_clo(env49746))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont49456;
arg_buffer[3] = a4935649596;
arg_buffer[4] = a4935849600;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49745 = encode_clo(alloc_clo(lam49745_fptr, 0));

void* lam49747_fptr() // lam49747 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49748 = arg_buffer[1];
//reading env and args
void* a4935749598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49456 = (decode_clo(env49748))[4];
//not do dummy comment
void* length = (decode_clo(env49748))[3];
//not do dummy comment
void* _u43 = (decode_clo(env49748))[2];
//not do dummy comment
void* a4935649596 = (decode_clo(env49748))[1];

//creating new closure instance
void** clo49878 = alloc_clo(lam49745_fptr, 3);

//setting env list
clo49878[1] = a4935649596;
clo49878[2] = _u43;
clo49878[3] = kont49456;
void* f4945749599 = encode_clo(clo49878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4945749599;
arg_buffer[3] = a4935749598;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49747 = encode_clo(alloc_clo(lam49747_fptr, 0));

void* lam49750_fptr() // lam49750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49751 = arg_buffer[1];
//reading env and args
void* a4935449594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49751))[5];
//not do dummy comment
void* kont49456 = (decode_clo(env49751))[4];
//not do dummy comment
void* lst = (decode_clo(env49751))[3];
//not do dummy comment
void* length = (decode_clo(env49751))[2];
//not do dummy comment
void* _u43 = (decode_clo(env49751))[1];

//if-clause
bool if_guard49879 = is_true(a4935449594);
if(if_guard49879)
{
mpz_t* mpzvar49880 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49880, "0", 10);
void* x4935549595 = encode_mpz(mpzvar49880);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49456);
arg_buffer[2] = x4935549595;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49456))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar49881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49881, "1", 10);
void* a4935649596 = encode_mpz(mpzvar49881);

//creating new closure instance
void** clo49883 = alloc_clo(lam49747_fptr, 4);

//setting env list
clo49883[1] = a4935649596;
clo49883[2] = _u43;
clo49883[3] = length;
clo49883[4] = kont49456;
void* f4945849597 = encode_clo(clo49883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4945849597;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49750 = encode_clo(alloc_clo(lam49750_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49752 = arg_buffer[1];
//reading env and args
void* kont49456 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49885 = alloc_clo(lam49750_fptr, 5);

//setting env list
clo49885[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo49885[2] = length;
clo49885[3] = lst;
clo49885[4] = kont49456;
clo49885[5] = cdr;
void* f4945949593 = encode_clo(clo49885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4945949593;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam49753_fptr() // lam49753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49754 = arg_buffer[1];
//reading env and args
void* x4936049604 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49460 = (decode_clo(env49754))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49460);
arg_buffer[2] = x4936049604;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49460))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49753 = encode_clo(alloc_clo(lam49753_fptr, 0));

void* lam49755_fptr() // lam49755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49756 = arg_buffer[1];
//reading env and args
void* a4936449612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49460 = (decode_clo(env49756))[3];
//not do dummy comment
void* a4936249608 = (decode_clo(env49756))[2];
//not do dummy comment
void* cons = (decode_clo(env49756))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont49460;
arg_buffer[3] = a4936249608;
arg_buffer[4] = a4936449612;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49755 = encode_clo(alloc_clo(lam49755_fptr, 0));

void* lam49757_fptr() // lam49757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49758 = arg_buffer[1];
//reading env and args
void* a4936349610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env49758))[5];
//not do dummy comment
void* kont49460 = (decode_clo(env49758))[4];
//not do dummy comment
void* a4936249608 = (decode_clo(env49758))[3];
//not do dummy comment
void* proc = (decode_clo(env49758))[2];
//not do dummy comment
void* cons = (decode_clo(env49758))[1];

//creating new closure instance
void** clo49887 = alloc_clo(lam49755_fptr, 3);

//setting env list
clo49887[1] = cons;
clo49887[2] = a4936249608;
clo49887[3] = kont49460;
void* f4946249611 = encode_clo(clo49887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4946249611;
arg_buffer[3] = proc;
arg_buffer[4] = a4936349610;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49757 = encode_clo(alloc_clo(lam49757_fptr, 0));

void* lam49759_fptr() // lam49759 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49760 = arg_buffer[1];
//reading env and args
void* a4936249608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49760))[6];
//not do dummy comment
void* lst = (decode_clo(env49760))[5];
//not do dummy comment
void* map = (decode_clo(env49760))[4];
//not do dummy comment
void* kont49460 = (decode_clo(env49760))[3];
//not do dummy comment
void* proc = (decode_clo(env49760))[2];
//not do dummy comment
void* cons = (decode_clo(env49760))[1];

//creating new closure instance
void** clo49889 = alloc_clo(lam49757_fptr, 5);

//setting env list
clo49889[1] = cons;
clo49889[2] = proc;
clo49889[3] = a4936249608;
clo49889[4] = kont49460;
clo49889[5] = map;
void* f4946349609 = encode_clo(clo49889);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4946349609;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49759 = encode_clo(alloc_clo(lam49759_fptr, 0));

void* lam49761_fptr() // lam49761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49762 = arg_buffer[1];
//reading env and args
void* a4936149606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49762))[6];
//not do dummy comment
void* lst = (decode_clo(env49762))[5];
//not do dummy comment
void* map = (decode_clo(env49762))[4];
//not do dummy comment
void* kont49460 = (decode_clo(env49762))[3];
//not do dummy comment
void* proc = (decode_clo(env49762))[2];
//not do dummy comment
void* cons = (decode_clo(env49762))[1];

//creating new closure instance
void** clo49891 = alloc_clo(lam49759_fptr, 6);

//setting env list
clo49891[1] = cons;
clo49891[2] = proc;
clo49891[3] = kont49460;
clo49891[4] = map;
clo49891[5] = lst;
clo49891[6] = cdr;
void* f4946449607 = encode_clo(clo49891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4946449607;
arg_buffer[3] = a4936149606;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49761 = encode_clo(alloc_clo(lam49761_fptr, 0));

void* lam49763_fptr() // lam49763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49764 = arg_buffer[1];
//reading env and args
void* a4935949602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49764))[8];
//not do dummy comment
void* map = (decode_clo(env49764))[7];
//not do dummy comment
void* kont49460 = (decode_clo(env49764))[6];
//not do dummy comment
void* proc = (decode_clo(env49764))[5];
//not do dummy comment
void* car = (decode_clo(env49764))[4];
//not do dummy comment
void* cons = (decode_clo(env49764))[3];
//not do dummy comment
void* list = (decode_clo(env49764))[2];
//not do dummy comment
void* cdr = (decode_clo(env49764))[1];

//if-clause
bool if_guard49892 = is_true(a4935949602);
if(if_guard49892)
{

//creating new closure instance
void** clo49894 = alloc_clo(lam49753_fptr, 1);

//setting env list
clo49894[1] = kont49460;
void* f4946149603 = encode_clo(clo49894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4946149603;
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
void** clo49896 = alloc_clo(lam49761_fptr, 6);

//setting env list
clo49896[1] = cons;
clo49896[2] = proc;
clo49896[3] = kont49460;
clo49896[4] = map;
clo49896[5] = lst;
clo49896[6] = cdr;
void* f4946549605 = encode_clo(clo49896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4946549605;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49763 = encode_clo(alloc_clo(lam49763_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49765 = arg_buffer[1];
//reading env and args
void* kont49460 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49898 = alloc_clo(lam49763_fptr, 8);

//setting env list
clo49898[1] = cdr;
clo49898[2] = list;
clo49898[3] = cons;
clo49898[4] = car;
clo49898[5] = proc;
clo49898[6] = kont49460;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo49898[7] = map;
clo49898[8] = lst;
void* f4946649601 = encode_clo(clo49898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4946649601;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam49766_fptr() // lam49766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49767 = arg_buffer[1];
//reading env and args
void* x4936649616 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49467 = (decode_clo(env49767))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49467);
arg_buffer[2] = x4936649616;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49467))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49766 = encode_clo(alloc_clo(lam49766_fptr, 0));

void* lam49768_fptr() // lam49768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49769 = arg_buffer[1];
//reading env and args
void* a4937149626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4936949622 = (decode_clo(env49769))[3];
//not do dummy comment
void* kont49467 = (decode_clo(env49769))[2];
//not do dummy comment
void* cons = (decode_clo(env49769))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont49467;
arg_buffer[3] = a4936949622;
arg_buffer[4] = a4937149626;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49768 = encode_clo(alloc_clo(lam49768_fptr, 0));

void* lam49770_fptr() // lam49770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49771 = arg_buffer[1];
//reading env and args
void* a4937049624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env49771))[5];
//not do dummy comment
void* a4936949622 = (decode_clo(env49771))[4];
//not do dummy comment
void* cons = (decode_clo(env49771))[3];
//not do dummy comment
void* filter = (decode_clo(env49771))[2];
//not do dummy comment
void* kont49467 = (decode_clo(env49771))[1];

//creating new closure instance
void** clo49900 = alloc_clo(lam49768_fptr, 3);

//setting env list
clo49900[1] = cons;
clo49900[2] = kont49467;
clo49900[3] = a4936949622;
void* f4946949625 = encode_clo(clo49900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4946949625;
arg_buffer[3] = op;
arg_buffer[4] = a4937049624;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49770 = encode_clo(alloc_clo(lam49770_fptr, 0));

void* lam49772_fptr() // lam49772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49773 = arg_buffer[1];
//reading env and args
void* a4936949622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49773))[6];
//not do dummy comment
void* lst = (decode_clo(env49773))[5];
//not do dummy comment
void* op = (decode_clo(env49773))[4];
//not do dummy comment
void* cons = (decode_clo(env49773))[3];
//not do dummy comment
void* filter = (decode_clo(env49773))[2];
//not do dummy comment
void* kont49467 = (decode_clo(env49773))[1];

//creating new closure instance
void** clo49902 = alloc_clo(lam49770_fptr, 5);

//setting env list
clo49902[1] = kont49467;
clo49902[2] = filter;
clo49902[3] = cons;
clo49902[4] = a4936949622;
clo49902[5] = op;
void* f4947049623 = encode_clo(clo49902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4947049623;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49772 = encode_clo(alloc_clo(lam49772_fptr, 0));

void* lam49774_fptr() // lam49774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49775 = arg_buffer[1];
//reading env and args
void* a4937249628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env49775))[3];
//not do dummy comment
void* filter = (decode_clo(env49775))[2];
//not do dummy comment
void* kont49467 = (decode_clo(env49775))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont49467;
arg_buffer[3] = op;
arg_buffer[4] = a4937249628;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49774 = encode_clo(alloc_clo(lam49774_fptr, 0));

void* lam49776_fptr() // lam49776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49777 = arg_buffer[1];
//reading env and args
void* a4936849620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49777))[7];
//not do dummy comment
void* lst = (decode_clo(env49777))[6];
//not do dummy comment
void* op = (decode_clo(env49777))[5];
//not do dummy comment
void* cons = (decode_clo(env49777))[4];
//not do dummy comment
void* car = (decode_clo(env49777))[3];
//not do dummy comment
void* filter = (decode_clo(env49777))[2];
//not do dummy comment
void* kont49467 = (decode_clo(env49777))[1];

//if-clause
bool if_guard49903 = is_true(a4936849620);
if(if_guard49903)
{

//creating new closure instance
void** clo49905 = alloc_clo(lam49772_fptr, 6);

//setting env list
clo49905[1] = kont49467;
clo49905[2] = filter;
clo49905[3] = cons;
clo49905[4] = op;
clo49905[5] = lst;
clo49905[6] = cdr;
void* f4947149621 = encode_clo(clo49905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4947149621;
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
void** clo49907 = alloc_clo(lam49774_fptr, 3);

//setting env list
clo49907[1] = kont49467;
clo49907[2] = filter;
clo49907[3] = op;
void* f4947249627 = encode_clo(clo49907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4947249627;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49776 = encode_clo(alloc_clo(lam49776_fptr, 0));

void* lam49778_fptr() // lam49778 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49779 = arg_buffer[1];
//reading env and args
void* a4936749618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49779))[7];
//not do dummy comment
void* lst = (decode_clo(env49779))[6];
//not do dummy comment
void* op = (decode_clo(env49779))[5];
//not do dummy comment
void* cons = (decode_clo(env49779))[4];
//not do dummy comment
void* car = (decode_clo(env49779))[3];
//not do dummy comment
void* filter = (decode_clo(env49779))[2];
//not do dummy comment
void* kont49467 = (decode_clo(env49779))[1];

//creating new closure instance
void** clo49909 = alloc_clo(lam49776_fptr, 7);

//setting env list
clo49909[1] = kont49467;
clo49909[2] = filter;
clo49909[3] = car;
clo49909[4] = cons;
clo49909[5] = op;
clo49909[6] = lst;
clo49909[7] = cdr;
void* f4947349619 = encode_clo(clo49909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4947349619;
arg_buffer[3] = a4936749618;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49778 = encode_clo(alloc_clo(lam49778_fptr, 0));

void* lam49780_fptr() // lam49780 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49781 = arg_buffer[1];
//reading env and args
void* a4936549614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49781))[8];
//not do dummy comment
void* op = (decode_clo(env49781))[7];
//not do dummy comment
void* cons = (decode_clo(env49781))[6];
//not do dummy comment
void* list = (decode_clo(env49781))[5];
//not do dummy comment
void* cdr = (decode_clo(env49781))[4];
//not do dummy comment
void* car = (decode_clo(env49781))[3];
//not do dummy comment
void* filter = (decode_clo(env49781))[2];
//not do dummy comment
void* kont49467 = (decode_clo(env49781))[1];

//if-clause
bool if_guard49910 = is_true(a4936549614);
if(if_guard49910)
{

//creating new closure instance
void** clo49912 = alloc_clo(lam49766_fptr, 1);

//setting env list
clo49912[1] = kont49467;
void* f4946849615 = encode_clo(clo49912);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4946849615;
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
void** clo49914 = alloc_clo(lam49778_fptr, 7);

//setting env list
clo49914[1] = kont49467;
clo49914[2] = filter;
clo49914[3] = car;
clo49914[4] = cons;
clo49914[5] = op;
clo49914[6] = lst;
clo49914[7] = cdr;
void* f4947449617 = encode_clo(clo49914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4947449617;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49780 = encode_clo(alloc_clo(lam49780_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49782 = arg_buffer[1];
//reading env and args
void* kont49467 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49916 = alloc_clo(lam49780_fptr, 8);

//setting env list
clo49916[1] = kont49467;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo49916[2] = filter;
clo49916[3] = car;
clo49916[4] = cdr;
clo49916[5] = list;
clo49916[6] = cons;
clo49916[7] = op;
clo49916[8] = lst;
void* f4947549613 = encode_clo(clo49916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4947549613;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam49783_fptr() // lam49783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49784 = arg_buffer[1];
//reading env and args
void* a4937749636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4937549633 = (decode_clo(env49784))[3];
//not do dummy comment
void* drop = (decode_clo(env49784))[2];
//not do dummy comment
void* kont49476 = (decode_clo(env49784))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont49476;
arg_buffer[3] = a4937549633;
arg_buffer[4] = a4937749636;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49783 = encode_clo(alloc_clo(lam49783_fptr, 0));

void* lam49786_fptr() // lam49786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49787 = arg_buffer[1];
//reading env and args
void* a4937549633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env49787))[4];
//not do dummy comment
void* kont49476 = (decode_clo(env49787))[3];
//not do dummy comment
void* n = (decode_clo(env49787))[2];
//not do dummy comment
void* _u45 = (decode_clo(env49787))[1];
mpz_t* mpzvar49917 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49917, "1", 10);
void* a4937649634 = encode_mpz(mpzvar49917);

//creating new closure instance
void** clo49919 = alloc_clo(lam49783_fptr, 3);

//setting env list
clo49919[1] = kont49476;
clo49919[2] = drop;
clo49919[3] = a4937549633;
void* f4947749635 = encode_clo(clo49919);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4947749635;
arg_buffer[3] = n;
arg_buffer[4] = a4937649634;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49786 = encode_clo(alloc_clo(lam49786_fptr, 0));

void* lam49788_fptr() // lam49788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49789 = arg_buffer[1];
//reading env and args
void* a4937449631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49789))[6];
//not do dummy comment
void* kont49476 = (decode_clo(env49789))[5];
//not do dummy comment
void* n = (decode_clo(env49789))[4];
//not do dummy comment
void* _u45 = (decode_clo(env49789))[3];
//not do dummy comment
void* lst = (decode_clo(env49789))[2];
//not do dummy comment
void* drop = (decode_clo(env49789))[1];

//if-clause
bool if_guard49920 = is_true(a4937449631);
if(if_guard49920)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49476);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49476))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49922 = alloc_clo(lam49786_fptr, 4);

//setting env list
clo49922[1] = _u45;
clo49922[2] = n;
clo49922[3] = kont49476;
clo49922[4] = drop;
void* f4947849632 = encode_clo(clo49922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4947849632;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49788 = encode_clo(alloc_clo(lam49788_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49791 = arg_buffer[1];
//reading env and args
void* kont49476 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar49923 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49923, "0", 10);
void* a4937349629 = encode_mpz(mpzvar49923);

//creating new closure instance
void** clo49925 = alloc_clo(lam49788_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo49925[1] = drop;
clo49925[2] = lst;
clo49925[3] = _u45;
clo49925[4] = n;
clo49925[5] = kont49476;
clo49925[6] = cdr;
void* f4947949630 = encode_clo(clo49925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4947949630;
arg_buffer[3] = n;
arg_buffer[4] = a4937349629;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam49792_fptr() // lam49792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49793 = arg_buffer[1];
//reading env and args
void* a4938149644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env49793))[3];
//not do dummy comment
void* a4937949640 = (decode_clo(env49793))[2];
//not do dummy comment
void* kont49480 = (decode_clo(env49793))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont49480;
arg_buffer[3] = a4937949640;
arg_buffer[4] = a4938149644;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49792 = encode_clo(alloc_clo(lam49792_fptr, 0));

void* lam49794_fptr() // lam49794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49795 = arg_buffer[1];
//reading env and args
void* a4938049642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env49795))[5];
//not do dummy comment
void* a4937949640 = (decode_clo(env49795))[4];
//not do dummy comment
void* kont49480 = (decode_clo(env49795))[3];
//not do dummy comment
void* proc = (decode_clo(env49795))[2];
//not do dummy comment
void* acc = (decode_clo(env49795))[1];

//creating new closure instance
void** clo49927 = alloc_clo(lam49792_fptr, 3);

//setting env list
clo49927[1] = kont49480;
clo49927[2] = a4937949640;
clo49927[3] = proc;
void* f4948149643 = encode_clo(clo49927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4948149643;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4938049642;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49794 = encode_clo(alloc_clo(lam49794_fptr, 0));

void* lam49796_fptr() // lam49796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49797 = arg_buffer[1];
//reading env and args
void* a4937949640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49797))[6];
//not do dummy comment
void* kont49480 = (decode_clo(env49797))[5];
//not do dummy comment
void* foldr = (decode_clo(env49797))[4];
//not do dummy comment
void* lst = (decode_clo(env49797))[3];
//not do dummy comment
void* proc = (decode_clo(env49797))[2];
//not do dummy comment
void* acc = (decode_clo(env49797))[1];

//creating new closure instance
void** clo49929 = alloc_clo(lam49794_fptr, 5);

//setting env list
clo49929[1] = acc;
clo49929[2] = proc;
clo49929[3] = kont49480;
clo49929[4] = a4937949640;
clo49929[5] = foldr;
void* f4948249641 = encode_clo(clo49929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4948249641;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49796 = encode_clo(alloc_clo(lam49796_fptr, 0));

void* lam49798_fptr() // lam49798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49799 = arg_buffer[1];
//reading env and args
void* a4937849638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49799))[7];
//not do dummy comment
void* kont49480 = (decode_clo(env49799))[6];
//not do dummy comment
void* car = (decode_clo(env49799))[5];
//not do dummy comment
void* foldr = (decode_clo(env49799))[4];
//not do dummy comment
void* lst = (decode_clo(env49799))[3];
//not do dummy comment
void* proc = (decode_clo(env49799))[2];
//not do dummy comment
void* acc = (decode_clo(env49799))[1];

//if-clause
bool if_guard49930 = is_true(a4937849638);
if(if_guard49930)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49480);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49480))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49932 = alloc_clo(lam49796_fptr, 6);

//setting env list
clo49932[1] = acc;
clo49932[2] = proc;
clo49932[3] = lst;
clo49932[4] = foldr;
clo49932[5] = kont49480;
clo49932[6] = cdr;
void* f4948349639 = encode_clo(clo49932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4948349639;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49798 = encode_clo(alloc_clo(lam49798_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49800 = arg_buffer[1];
//reading env and args
void* kont49480 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49934 = alloc_clo(lam49798_fptr, 7);

//setting env list
clo49934[1] = acc;
clo49934[2] = proc;
clo49934[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo49934[4] = foldr;
clo49934[5] = car;
clo49934[6] = kont49480;
clo49934[7] = cdr;
void* f4948449637 = encode_clo(clo49934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4948449637;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam49801_fptr() // lam49801 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49802 = arg_buffer[1];
//reading env and args
void* a4938549652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4938349648 = (decode_clo(env49802))[3];
//not do dummy comment
void* cons = (decode_clo(env49802))[2];
//not do dummy comment
void* kont49485 = (decode_clo(env49802))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont49485;
arg_buffer[3] = a4938349648;
arg_buffer[4] = a4938549652;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49801 = encode_clo(alloc_clo(lam49801_fptr, 0));

void* lam49803_fptr() // lam49803 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49804 = arg_buffer[1];
//reading env and args
void* a4938449650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4938349648 = (decode_clo(env49804))[5];
//not do dummy comment
void* append = (decode_clo(env49804))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49804))[3];
//not do dummy comment
void* cons = (decode_clo(env49804))[2];
//not do dummy comment
void* kont49485 = (decode_clo(env49804))[1];

//creating new closure instance
void** clo49936 = alloc_clo(lam49801_fptr, 3);

//setting env list
clo49936[1] = kont49485;
clo49936[2] = cons;
clo49936[3] = a4938349648;
void* f4948649651 = encode_clo(clo49936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4948649651;
arg_buffer[3] = a4938449650;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49803 = encode_clo(alloc_clo(lam49803_fptr, 0));

void* lam49805_fptr() // lam49805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49806 = arg_buffer[1];
//reading env and args
void* a4938349648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49806))[6];
//not do dummy comment
void* append = (decode_clo(env49806))[5];
//not do dummy comment
void* lst2 = (decode_clo(env49806))[4];
//not do dummy comment
void* lst1 = (decode_clo(env49806))[3];
//not do dummy comment
void* cons = (decode_clo(env49806))[2];
//not do dummy comment
void* kont49485 = (decode_clo(env49806))[1];

//creating new closure instance
void** clo49938 = alloc_clo(lam49803_fptr, 5);

//setting env list
clo49938[1] = kont49485;
clo49938[2] = cons;
clo49938[3] = lst2;
clo49938[4] = append;
clo49938[5] = a4938349648;
void* f4948749649 = encode_clo(clo49938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4948749649;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49805 = encode_clo(alloc_clo(lam49805_fptr, 0));

void* lam49807_fptr() // lam49807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49808 = arg_buffer[1];
//reading env and args
void* a4938249646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49808))[7];
//not do dummy comment
void* append = (decode_clo(env49808))[6];
//not do dummy comment
void* lst2 = (decode_clo(env49808))[5];
//not do dummy comment
void* cons = (decode_clo(env49808))[4];
//not do dummy comment
void* kont49485 = (decode_clo(env49808))[3];
//not do dummy comment
void* lst1 = (decode_clo(env49808))[2];
//not do dummy comment
void* car = (decode_clo(env49808))[1];

//if-clause
bool if_guard49939 = is_true(a4938249646);
if(if_guard49939)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49485);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49485))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49941 = alloc_clo(lam49805_fptr, 6);

//setting env list
clo49941[1] = kont49485;
clo49941[2] = cons;
clo49941[3] = lst1;
clo49941[4] = lst2;
clo49941[5] = append;
clo49941[6] = cdr;
void* f4948849647 = encode_clo(clo49941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4948849647;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49807 = encode_clo(alloc_clo(lam49807_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49809 = arg_buffer[1];
//reading env and args
void* kont49485 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49943 = alloc_clo(lam49807_fptr, 7);

//setting env list
clo49943[1] = car;
clo49943[2] = lst1;
clo49943[3] = kont49485;
clo49943[4] = cons;
clo49943[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo49943[6] = append;
clo49943[7] = cdr;
void* f4948949645 = encode_clo(clo49943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4948949645;
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
void* _49810 = arg_buffer[1];
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

void* kont4949049653 = prim_car(lst);
void* lst49654 = prim_cdr(lst);
void* x4938649655 = apply_prim_hash(lst49654);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4949049653);
arg_buffer[2] = x4938649655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4949049653))[0]);
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
void* _49811 = arg_buffer[1];
//reading env and args
void* kont49492 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4938749656 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49492);
arg_buffer[2] = x4938749656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49492))[0]);
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
void* _49812 = arg_buffer[1];
//reading env and args
void* kont49493 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4938849657 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49493);
arg_buffer[2] = x4938849657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49493))[0]);
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
void* _49813 = arg_buffer[1];
//reading env and args
void* kont49494 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4938949658 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49494);
arg_buffer[2] = x4938949658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49494))[0]);
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
void* _49814 = arg_buffer[1];
//reading env and args
void* kont49495 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4939049659 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49495);
arg_buffer[2] = x4939049659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49495))[0]);
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
void* _49818 = arg_buffer[1];
//reading env and args
void* kont49496 = arg_buffer[2];
//Dummy comment
void* a4939149660 = encode_bool(false);

//if-clause
bool if_guard49944 = is_true(a4939149660);
if(if_guard49944)
{
void* x4939249661 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49496);
arg_buffer[2] = x4939249661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49496))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x4939349662 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49496);
arg_buffer[2] = x4939349662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49496))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam49819_fptr() // lam49819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49820 = arg_buffer[1];
//reading env and args
void* x4939449664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49497 = (decode_clo(env49820))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49497);
arg_buffer[2] = x4939449664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49497))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49819 = encode_clo(alloc_clo(lam49819_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49821 = arg_buffer[1];
//reading env and args
void* kont49497 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo49946 = alloc_clo(lam49819_fptr, 1);

//setting env list
clo49946[1] = kont49497;
void* f4949849663 = encode_clo(clo49946);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4949849663;
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

