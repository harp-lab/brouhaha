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
void* _84730 = arg_buffer[1];
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

void* kont8446984569 = prim_car(lst);
void* lst84570 = prim_cdr(lst);
void* x8438184571 = apply_prim__u43(lst84570);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8446984569);
arg_buffer[2] = x8438184571;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446984569))[0]);
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
void* _84731 = arg_buffer[1];
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

void* kont8447184572 = prim_car(lst);
void* lst84573 = prim_cdr(lst);
void* x8438284574 = apply_prim__u45(lst84573);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447184572);
arg_buffer[2] = x8438284574;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447184572))[0]);
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
void* _84732 = arg_buffer[1];
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

void* kont8447384575 = prim_car(lst);
void* lst84576 = prim_cdr(lst);
void* x8438384577 = apply_prim__u42(lst84576);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447384575);
arg_buffer[2] = x8438384577;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447384575))[0]);
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
void* _84733 = arg_buffer[1];
//reading env and args
void* kont84475 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8438484578 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84475);
arg_buffer[2] = x8438484578;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84475))[0]);
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
void* _84734 = arg_buffer[1];
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

void* kont8447684579 = prim_car(lst);
void* lst84580 = prim_cdr(lst);
void* x8438584581 = apply_prim__u47(lst84580);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447684579);
arg_buffer[2] = x8438584581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447684579))[0]);
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
void* _84735 = arg_buffer[1];
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

void* kont8447884582 = prim_car(lst);
void* lst84583 = prim_cdr(lst);
void* x8438684584 = apply_prim__u61(lst84583);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447884582);
arg_buffer[2] = x8438684584;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447884582))[0]);
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
void* _84736 = arg_buffer[1];
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

void* kont8448084585 = prim_car(lst);
void* lst84586 = prim_cdr(lst);
void* x8438784587 = apply_prim__u62(lst84586);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448084585);
arg_buffer[2] = x8438784587;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448084585))[0]);
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
void* _84737 = arg_buffer[1];
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

void* kont8448284588 = prim_car(lst);
void* lst84589 = prim_cdr(lst);
void* x8438884590 = apply_prim__u60(lst84589);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448284588);
arg_buffer[2] = x8438884590;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448284588))[0]);
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
void* _84738 = arg_buffer[1];
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

void* kont8448484591 = prim_car(lst);
void* lst84592 = prim_cdr(lst);
void* x8438984593 = apply_prim__u60_u61(lst84592);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448484591);
arg_buffer[2] = x8438984593;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448484591))[0]);
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
void* _84739 = arg_buffer[1];
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

void* kont8448684594 = prim_car(lst);
void* lst84595 = prim_cdr(lst);
void* x8439084596 = apply_prim__u62_u61(lst84595);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448684594);
arg_buffer[2] = x8439084596;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448684594))[0]);
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
void* _84740 = arg_buffer[1];
//reading env and args
void* kont84488 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8439184597 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84488);
arg_buffer[2] = x8439184597;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84488))[0]);
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
void* _84741 = arg_buffer[1];
//reading env and args
void* kont84489 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8439284598 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84489);
arg_buffer[2] = x8439284598;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84489))[0]);
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
void* _84742 = arg_buffer[1];
//reading env and args
void* kont84490 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8439384599 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84490);
arg_buffer[2] = x8439384599;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84490))[0]);
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
void* _84743 = arg_buffer[1];
//reading env and args
void* kont84491 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8439484600 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84491);
arg_buffer[2] = x8439484600;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84491))[0]);
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
void* _84744 = arg_buffer[1];
//reading env and args
void* kont84492 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8439584601 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84492);
arg_buffer[2] = x8439584601;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84492))[0]);
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
void* _84745 = arg_buffer[1];
//reading env and args
void* kont84493 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8439684602 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84493);
arg_buffer[2] = x8439684602;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84493))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam84746_fptr() // lam84746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84747 = arg_buffer[1];
//reading env and args
void* a8439984606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env84747))[3];
//not do dummy comment
void* a8439784603 = (decode_clo(env84747))[2];
//not do dummy comment
void* kont84494 = (decode_clo(env84747))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont84494;
arg_buffer[3] = a8439784603;
arg_buffer[4] = a8439984606;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84746 = encode_clo(alloc_clo(lam84746_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84750 = arg_buffer[1];
//reading env and args
void* kont84494 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar85426 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85426, "0", 10);
void* a8439784603 = encode_mpz(mpzvar85426);
mpz_t* mpzvar85427 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85427, "2", 10);
void* a8439884604 = encode_mpz(mpzvar85427);

//creating new closure instance
void** clo85429 = alloc_clo(lam84746_fptr, 3);

//setting env list
clo85429[1] = kont84494;
clo85429[2] = a8439784603;
clo85429[3] = equal_u63;
void* f8449584605 = encode_clo(clo85429);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8449584605;
arg_buffer[3] = x;
arg_buffer[4] = a8439884604;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam84751_fptr() // lam84751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84752 = arg_buffer[1];
//reading env and args
void* a8440284610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env84752))[3];
//not do dummy comment
void* a8440084607 = (decode_clo(env84752))[2];
//not do dummy comment
void* kont84496 = (decode_clo(env84752))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont84496;
arg_buffer[3] = a8440084607;
arg_buffer[4] = a8440284610;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84751 = encode_clo(alloc_clo(lam84751_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84755 = arg_buffer[1];
//reading env and args
void* kont84496 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar85430 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85430, "1", 10);
void* a8440084607 = encode_mpz(mpzvar85430);
mpz_t* mpzvar85431 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85431, "2", 10);
void* a8440184608 = encode_mpz(mpzvar85431);

//creating new closure instance
void** clo85433 = alloc_clo(lam84751_fptr, 3);

//setting env list
clo85433[1] = kont84496;
clo85433[2] = a8440084607;
clo85433[3] = equal_u63;
void* f8449784609 = encode_clo(clo85433);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8449784609;
arg_buffer[3] = x;
arg_buffer[4] = a8440184608;
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
void* _84756 = arg_buffer[1];
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

void* kont8449884611 = prim_car(x);
void* x84612 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8449884611);
arg_buffer[2] = x84612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449884611))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam84759_fptr() // lam84759 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84760 = arg_buffer[1];
//reading env and args
void* a8440884622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84500 = (decode_clo(env84760))[3];
//not do dummy comment
void* x = (decode_clo(env84760))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env84760))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont84500;
arg_buffer[3] = x;
arg_buffer[4] = a8440884622;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84759 = encode_clo(alloc_clo(lam84759_fptr, 0));

void* lam84761_fptr() // lam84761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84762 = arg_buffer[1];
//reading env and args
void* a8440684619 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84762))[5];
//not do dummy comment
void* kont84500 = (decode_clo(env84762))[4];
//not do dummy comment
void* lst = (decode_clo(env84762))[3];
//not do dummy comment
void* x = (decode_clo(env84762))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env84762))[1];

//if-clause
bool if_guard85434 = is_true(a8440684619);
if(if_guard85434)
{
void* x8440784620 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84500);
arg_buffer[2] = x8440784620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84500))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85436 = alloc_clo(lam84759_fptr, 3);

//setting env list
clo85436[1] = member_u63;
clo85436[2] = x;
clo85436[3] = kont84500;
void* f8450184621 = encode_clo(clo85436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8450184621;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84761 = encode_clo(alloc_clo(lam84761_fptr, 0));

void* lam84763_fptr() // lam84763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84764 = arg_buffer[1];
//reading env and args
void* a8440584617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84764))[6];
//not do dummy comment
void* kont84500 = (decode_clo(env84764))[5];
//not do dummy comment
void* lst = (decode_clo(env84764))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env84764))[3];
//not do dummy comment
void* x = (decode_clo(env84764))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env84764))[1];

//creating new closure instance
void** clo85438 = alloc_clo(lam84761_fptr, 5);

//setting env list
clo85438[1] = member_u63;
clo85438[2] = x;
clo85438[3] = lst;
clo85438[4] = kont84500;
clo85438[5] = cdr;
void* f8450284618 = encode_clo(clo85438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8450284618;
arg_buffer[3] = a8440584617;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84763 = encode_clo(alloc_clo(lam84763_fptr, 0));

void* lam84765_fptr() // lam84765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84766 = arg_buffer[1];
//reading env and args
void* a8440384614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84766))[7];
//not do dummy comment
void* kont84500 = (decode_clo(env84766))[6];
//not do dummy comment
void* lst = (decode_clo(env84766))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env84766))[4];
//not do dummy comment
void* x = (decode_clo(env84766))[3];
//not do dummy comment
void* car = (decode_clo(env84766))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env84766))[1];

//if-clause
bool if_guard85439 = is_true(a8440384614);
if(if_guard85439)
{
void* x8440484615 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84500);
arg_buffer[2] = x8440484615;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84500))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85441 = alloc_clo(lam84763_fptr, 6);

//setting env list
clo85441[1] = member_u63;
clo85441[2] = x;
clo85441[3] = equal_u63;
clo85441[4] = lst;
clo85441[5] = kont84500;
clo85441[6] = cdr;
void* f8450384616 = encode_clo(clo85441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8450384616;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84765 = encode_clo(alloc_clo(lam84765_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84767 = arg_buffer[1];
//reading env and args
void* kont84500 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85443 = alloc_clo(lam84765_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo85443[1] = member_u63;
clo85443[2] = car;
clo85443[3] = x;
clo85443[4] = equal_u63;
clo85443[5] = lst;
clo85443[6] = kont84500;
clo85443[7] = cdr;
void* f8450484613 = encode_clo(clo85443);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8450484613;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam84768_fptr() // lam84768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84769 = arg_buffer[1];
//reading env and args
void* a8441284630 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8441184628 = (decode_clo(env84769))[4];
//not do dummy comment
void* kont84505 = (decode_clo(env84769))[3];
//not do dummy comment
void* fun = (decode_clo(env84769))[2];
//not do dummy comment
void* foldl = (decode_clo(env84769))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont84505;
arg_buffer[3] = fun;
arg_buffer[4] = a8441184628;
arg_buffer[5] = a8441284630;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84768 = encode_clo(alloc_clo(lam84768_fptr, 0));

void* lam84770_fptr() // lam84770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84771 = arg_buffer[1];
//reading env and args
void* a8441184628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84771))[5];
//not do dummy comment
void* lst = (decode_clo(env84771))[4];
//not do dummy comment
void* kont84505 = (decode_clo(env84771))[3];
//not do dummy comment
void* fun = (decode_clo(env84771))[2];
//not do dummy comment
void* foldl = (decode_clo(env84771))[1];

//creating new closure instance
void** clo85445 = alloc_clo(lam84768_fptr, 4);

//setting env list
clo85445[1] = foldl;
clo85445[2] = fun;
clo85445[3] = kont84505;
clo85445[4] = a8441184628;
void* f8450684629 = encode_clo(clo85445);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8450684629;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84770 = encode_clo(alloc_clo(lam84770_fptr, 0));

void* lam84772_fptr() // lam84772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84773 = arg_buffer[1];
//reading env and args
void* a8441084626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84773))[6];
//not do dummy comment
void* lst = (decode_clo(env84773))[5];
//not do dummy comment
void* kont84505 = (decode_clo(env84773))[4];
//not do dummy comment
void* fun = (decode_clo(env84773))[3];
//not do dummy comment
void* acc = (decode_clo(env84773))[2];
//not do dummy comment
void* foldl = (decode_clo(env84773))[1];

//creating new closure instance
void** clo85447 = alloc_clo(lam84770_fptr, 5);

//setting env list
clo85447[1] = foldl;
clo85447[2] = fun;
clo85447[3] = kont84505;
clo85447[4] = lst;
clo85447[5] = cdr;
void* f8450784627 = encode_clo(clo85447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8450784627;
arg_buffer[3] = a8441084626;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84772 = encode_clo(alloc_clo(lam84772_fptr, 0));

void* lam84774_fptr() // lam84774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84775 = arg_buffer[1];
//reading env and args
void* a8440984624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84775))[7];
//not do dummy comment
void* lst = (decode_clo(env84775))[6];
//not do dummy comment
void* kont84505 = (decode_clo(env84775))[5];
//not do dummy comment
void* fun = (decode_clo(env84775))[4];
//not do dummy comment
void* acc = (decode_clo(env84775))[3];
//not do dummy comment
void* car = (decode_clo(env84775))[2];
//not do dummy comment
void* foldl = (decode_clo(env84775))[1];

//if-clause
bool if_guard85448 = is_true(a8440984624);
if(if_guard85448)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84505);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84505))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85450 = alloc_clo(lam84772_fptr, 6);

//setting env list
clo85450[1] = foldl;
clo85450[2] = acc;
clo85450[3] = fun;
clo85450[4] = kont84505;
clo85450[5] = lst;
clo85450[6] = cdr;
void* f8450884625 = encode_clo(clo85450);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8450884625;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84774 = encode_clo(alloc_clo(lam84774_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84776 = arg_buffer[1];
//reading env and args
void* kont84505 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo85452 = alloc_clo(lam84774_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo85452[1] = foldl;
clo85452[2] = car;
clo85452[3] = acc;
clo85452[4] = fun;
clo85452[5] = kont84505;
clo85452[6] = lst;
clo85452[7] = cdr;
void* f8450984623 = encode_clo(clo85452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8450984623;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam84777_fptr() // lam84777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84778 = arg_buffer[1];
//reading env and args
void* a8441684638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env84778))[3];
//not do dummy comment
void* a8441484634 = (decode_clo(env84778))[2];
//not do dummy comment
void* kont84510 = (decode_clo(env84778))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont84510;
arg_buffer[3] = a8441484634;
arg_buffer[4] = a8441684638;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84777 = encode_clo(alloc_clo(lam84777_fptr, 0));

void* lam84779_fptr() // lam84779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84780 = arg_buffer[1];
//reading env and args
void* a8441584636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env84780))[5];
//not do dummy comment
void* a8441484634 = (decode_clo(env84780))[4];
//not do dummy comment
void* lst2 = (decode_clo(env84780))[3];
//not do dummy comment
void* kont84510 = (decode_clo(env84780))[2];
//not do dummy comment
void* cons = (decode_clo(env84780))[1];

//creating new closure instance
void** clo85454 = alloc_clo(lam84777_fptr, 3);

//setting env list
clo85454[1] = kont84510;
clo85454[2] = a8441484634;
clo85454[3] = reverse_u45helper;
void* f8451184637 = encode_clo(clo85454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8451184637;
arg_buffer[3] = a8441584636;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84779 = encode_clo(alloc_clo(lam84779_fptr, 0));

void* lam84781_fptr() // lam84781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84782 = arg_buffer[1];
//reading env and args
void* a8441484634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env84782))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env84782))[5];
//not do dummy comment
void* lst2 = (decode_clo(env84782))[4];
//not do dummy comment
void* cons = (decode_clo(env84782))[3];
//not do dummy comment
void* car = (decode_clo(env84782))[2];
//not do dummy comment
void* kont84510 = (decode_clo(env84782))[1];

//creating new closure instance
void** clo85456 = alloc_clo(lam84779_fptr, 5);

//setting env list
clo85456[1] = cons;
clo85456[2] = kont84510;
clo85456[3] = lst2;
clo85456[4] = a8441484634;
clo85456[5] = reverse_u45helper;
void* f8451284635 = encode_clo(clo85456);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8451284635;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84781 = encode_clo(alloc_clo(lam84781_fptr, 0));

void* lam84783_fptr() // lam84783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84784 = arg_buffer[1];
//reading env and args
void* a8441384632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84784))[7];
//not do dummy comment
void* lst = (decode_clo(env84784))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env84784))[5];
//not do dummy comment
void* lst2 = (decode_clo(env84784))[4];
//not do dummy comment
void* cons = (decode_clo(env84784))[3];
//not do dummy comment
void* car = (decode_clo(env84784))[2];
//not do dummy comment
void* kont84510 = (decode_clo(env84784))[1];

//if-clause
bool if_guard85457 = is_true(a8441384632);
if(if_guard85457)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84510);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84510))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85459 = alloc_clo(lam84781_fptr, 6);

//setting env list
clo85459[1] = kont84510;
clo85459[2] = car;
clo85459[3] = cons;
clo85459[4] = lst2;
clo85459[5] = reverse_u45helper;
clo85459[6] = lst;
void* f8451384633 = encode_clo(clo85459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8451384633;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84783 = encode_clo(alloc_clo(lam84783_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84785 = arg_buffer[1];
//reading env and args
void* kont84510 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85461 = alloc_clo(lam84783_fptr, 7);

//setting env list
clo85461[1] = kont84510;
clo85461[2] = car;
clo85461[3] = cons;
clo85461[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo85461[5] = reverse_u45helper;
clo85461[6] = lst;
clo85461[7] = cdr;
void* f8451484631 = encode_clo(clo85461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8451484631;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam84786_fptr() // lam84786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84787 = arg_buffer[1];
//reading env and args
void* a8441784640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84515 = (decode_clo(env84787))[3];
//not do dummy comment
void* lst = (decode_clo(env84787))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env84787))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont84515;
arg_buffer[3] = lst;
arg_buffer[4] = a8441784640;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84786 = encode_clo(alloc_clo(lam84786_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84788 = arg_buffer[1];
//reading env and args
void* kont84515 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo85463 = alloc_clo(lam84786_fptr, 3);

//setting env list
clo85463[1] = reverse_u45helper;
clo85463[2] = lst;
clo85463[3] = kont84515;
void* f8451684639 = encode_clo(clo85463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8451684639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam84789_fptr() // lam84789 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84790 = arg_buffer[1];
//reading env and args
void* x8442084645 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84517 = (decode_clo(env84790))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84517);
arg_buffer[2] = x8442084645;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84517))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84789 = encode_clo(alloc_clo(lam84789_fptr, 0));

void* lam84791_fptr() // lam84791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84792 = arg_buffer[1];
//reading env and args
void* a8442584654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84517 = (decode_clo(env84792))[4];
//not do dummy comment
void* a8442184647 = (decode_clo(env84792))[3];
//not do dummy comment
void* a8442384650 = (decode_clo(env84792))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env84792))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont84517;
arg_buffer[3] = a8442184647;
arg_buffer[4] = a8442384650;
arg_buffer[5] = a8442584654;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84791 = encode_clo(alloc_clo(lam84791_fptr, 0));

void* lam84793_fptr() // lam84793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84794 = arg_buffer[1];
//reading env and args
void* a8442484652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84517 = (decode_clo(env84794))[6];
//not do dummy comment
void* a8442184647 = (decode_clo(env84794))[5];
//not do dummy comment
void* a8442384650 = (decode_clo(env84794))[4];
//not do dummy comment
void* cons = (decode_clo(env84794))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env84794))[2];
//not do dummy comment
void* lst2 = (decode_clo(env84794))[1];

//creating new closure instance
void** clo85465 = alloc_clo(lam84791_fptr, 4);

//setting env list
clo85465[1] = take_u45helper;
clo85465[2] = a8442384650;
clo85465[3] = a8442184647;
clo85465[4] = kont84517;
void* f8451984653 = encode_clo(clo85465);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8451984653;
arg_buffer[3] = a8442484652;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84793 = encode_clo(alloc_clo(lam84793_fptr, 0));

void* lam84795_fptr() // lam84795 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84796 = arg_buffer[1];
//reading env and args
void* a8442384650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8442184647 = (decode_clo(env84796))[7];
//not do dummy comment
void* car = (decode_clo(env84796))[6];
//not do dummy comment
void* cons = (decode_clo(env84796))[5];
//not do dummy comment
void* lst = (decode_clo(env84796))[4];
//not do dummy comment
void* kont84517 = (decode_clo(env84796))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env84796))[2];
//not do dummy comment
void* lst2 = (decode_clo(env84796))[1];

//creating new closure instance
void** clo85467 = alloc_clo(lam84793_fptr, 6);

//setting env list
clo85467[1] = lst2;
clo85467[2] = take_u45helper;
clo85467[3] = cons;
clo85467[4] = a8442384650;
clo85467[5] = a8442184647;
clo85467[6] = kont84517;
void* f8452084651 = encode_clo(clo85467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8452084651;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84795 = encode_clo(alloc_clo(lam84795_fptr, 0));

void* lam84798_fptr() // lam84798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84799 = arg_buffer[1];
//reading env and args
void* a8442184647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env84799))[8];
//not do dummy comment
void* _u45 = (decode_clo(env84799))[7];
//not do dummy comment
void* lst = (decode_clo(env84799))[6];
//not do dummy comment
void* kont84517 = (decode_clo(env84799))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env84799))[4];
//not do dummy comment
void* lst2 = (decode_clo(env84799))[3];
//not do dummy comment
void* n = (decode_clo(env84799))[2];
//not do dummy comment
void* car = (decode_clo(env84799))[1];
mpz_t* mpzvar85468 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85468, "1", 10);
void* a8442284648 = encode_mpz(mpzvar85468);

//creating new closure instance
void** clo85470 = alloc_clo(lam84795_fptr, 7);

//setting env list
clo85470[1] = lst2;
clo85470[2] = take_u45helper;
clo85470[3] = kont84517;
clo85470[4] = lst;
clo85470[5] = cons;
clo85470[6] = car;
clo85470[7] = a8442184647;
void* f8452184649 = encode_clo(clo85470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8452184649;
arg_buffer[3] = n;
arg_buffer[4] = a8442284648;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84798 = encode_clo(alloc_clo(lam84798_fptr, 0));

void* lam84800_fptr() // lam84800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84801 = arg_buffer[1];
//reading env and args
void* a8441984643 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84801))[10];
//not do dummy comment
void* reverse = (decode_clo(env84801))[9];
//not do dummy comment
void* cons = (decode_clo(env84801))[8];
//not do dummy comment
void* _u45 = (decode_clo(env84801))[7];
//not do dummy comment
void* lst = (decode_clo(env84801))[6];
//not do dummy comment
void* kont84517 = (decode_clo(env84801))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env84801))[4];
//not do dummy comment
void* lst2 = (decode_clo(env84801))[3];
//not do dummy comment
void* n = (decode_clo(env84801))[2];
//not do dummy comment
void* car = (decode_clo(env84801))[1];

//if-clause
bool if_guard85471 = is_true(a8441984643);
if(if_guard85471)
{

//creating new closure instance
void** clo85473 = alloc_clo(lam84789_fptr, 1);

//setting env list
clo85473[1] = kont84517;
void* f8451884644 = encode_clo(clo85473);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8451884644;
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
void** clo85475 = alloc_clo(lam84798_fptr, 8);

//setting env list
clo85475[1] = car;
clo85475[2] = n;
clo85475[3] = lst2;
clo85475[4] = take_u45helper;
clo85475[5] = kont84517;
clo85475[6] = lst;
clo85475[7] = _u45;
clo85475[8] = cons;
void* f8452284646 = encode_clo(clo85475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8452284646;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84800 = encode_clo(alloc_clo(lam84800_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84803 = arg_buffer[1];
//reading env and args
void* kont84517 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar85476 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85476, "0", 10);
void* a8441884641 = encode_mpz(mpzvar85476);

//creating new closure instance
void** clo85478 = alloc_clo(lam84800_fptr, 10);

//setting env list
clo85478[1] = car;
clo85478[2] = n;
clo85478[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo85478[4] = take_u45helper;
clo85478[5] = kont84517;
clo85478[6] = lst;
clo85478[7] = _u45;
clo85478[8] = cons;
clo85478[9] = reverse;
clo85478[10] = cdr;
void* f8452384642 = encode_clo(clo85478);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8452384642;
arg_buffer[3] = n;
arg_buffer[4] = a8441884641;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam84804_fptr() // lam84804 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84805 = arg_buffer[1];
//reading env and args
void* a8442684656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env84805))[4];
//not do dummy comment
void* kont84524 = (decode_clo(env84805))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env84805))[2];
//not do dummy comment
void* n = (decode_clo(env84805))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont84524;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8442684656;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84804 = encode_clo(alloc_clo(lam84804_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84806 = arg_buffer[1];
//reading env and args
void* kont84524 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85480 = alloc_clo(lam84804_fptr, 4);

//setting env list
clo85480[1] = n;
clo85480[2] = take_u45helper;
clo85480[3] = kont84524;
clo85480[4] = lst;
void* f8452584655 = encode_clo(clo85480);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8452584655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam84808_fptr() // lam84808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84809 = arg_buffer[1];
//reading env and args
void* a8443184664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8442984660 = (decode_clo(env84809))[3];
//not do dummy comment
void* _u43 = (decode_clo(env84809))[2];
//not do dummy comment
void* kont84526 = (decode_clo(env84809))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont84526;
arg_buffer[3] = a8442984660;
arg_buffer[4] = a8443184664;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84808 = encode_clo(alloc_clo(lam84808_fptr, 0));

void* lam84810_fptr() // lam84810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84811 = arg_buffer[1];
//reading env and args
void* a8443084662 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8442984660 = (decode_clo(env84811))[4];
//not do dummy comment
void* length = (decode_clo(env84811))[3];
//not do dummy comment
void* _u43 = (decode_clo(env84811))[2];
//not do dummy comment
void* kont84526 = (decode_clo(env84811))[1];

//creating new closure instance
void** clo85482 = alloc_clo(lam84808_fptr, 3);

//setting env list
clo85482[1] = kont84526;
clo85482[2] = _u43;
clo85482[3] = a8442984660;
void* f8452784663 = encode_clo(clo85482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8452784663;
arg_buffer[3] = a8443084662;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84810 = encode_clo(alloc_clo(lam84810_fptr, 0));

void* lam84813_fptr() // lam84813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84814 = arg_buffer[1];
//reading env and args
void* a8442784658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84814))[5];
//not do dummy comment
void* lst = (decode_clo(env84814))[4];
//not do dummy comment
void* length = (decode_clo(env84814))[3];
//not do dummy comment
void* _u43 = (decode_clo(env84814))[2];
//not do dummy comment
void* kont84526 = (decode_clo(env84814))[1];

//if-clause
bool if_guard85483 = is_true(a8442784658);
if(if_guard85483)
{
mpz_t* mpzvar85484 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85484, "0", 10);
void* x8442884659 = encode_mpz(mpzvar85484);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84526);
arg_buffer[2] = x8442884659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84526))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar85485 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85485, "1", 10);
void* a8442984660 = encode_mpz(mpzvar85485);

//creating new closure instance
void** clo85487 = alloc_clo(lam84810_fptr, 4);

//setting env list
clo85487[1] = kont84526;
clo85487[2] = _u43;
clo85487[3] = length;
clo85487[4] = a8442984660;
void* f8452884661 = encode_clo(clo85487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8452884661;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84813 = encode_clo(alloc_clo(lam84813_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84815 = arg_buffer[1];
//reading env and args
void* kont84526 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo85489 = alloc_clo(lam84813_fptr, 5);

//setting env list
clo85489[1] = kont84526;
clo85489[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo85489[3] = length;
clo85489[4] = lst;
clo85489[5] = cdr;
void* f8452984657 = encode_clo(clo85489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8452984657;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam84816_fptr() // lam84816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84817 = arg_buffer[1];
//reading env and args
void* x8443384668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84530 = (decode_clo(env84817))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84530);
arg_buffer[2] = x8443384668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84530))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84816 = encode_clo(alloc_clo(lam84816_fptr, 0));

void* lam84818_fptr() // lam84818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84819 = arg_buffer[1];
//reading env and args
void* a8443784676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84530 = (decode_clo(env84819))[3];
//not do dummy comment
void* cons = (decode_clo(env84819))[2];
//not do dummy comment
void* a8443584672 = (decode_clo(env84819))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont84530;
arg_buffer[3] = a8443584672;
arg_buffer[4] = a8443784676;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84818 = encode_clo(alloc_clo(lam84818_fptr, 0));

void* lam84820_fptr() // lam84820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84821 = arg_buffer[1];
//reading env and args
void* a8443684674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84530 = (decode_clo(env84821))[5];
//not do dummy comment
void* map = (decode_clo(env84821))[4];
//not do dummy comment
void* proc = (decode_clo(env84821))[3];
//not do dummy comment
void* cons = (decode_clo(env84821))[2];
//not do dummy comment
void* a8443584672 = (decode_clo(env84821))[1];

//creating new closure instance
void** clo85491 = alloc_clo(lam84818_fptr, 3);

//setting env list
clo85491[1] = a8443584672;
clo85491[2] = cons;
clo85491[3] = kont84530;
void* f8453284675 = encode_clo(clo85491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8453284675;
arg_buffer[3] = proc;
arg_buffer[4] = a8443684674;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84820 = encode_clo(alloc_clo(lam84820_fptr, 0));

void* lam84822_fptr() // lam84822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84823 = arg_buffer[1];
//reading env and args
void* a8443584672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84823))[6];
//not do dummy comment
void* kont84530 = (decode_clo(env84823))[5];
//not do dummy comment
void* lst = (decode_clo(env84823))[4];
//not do dummy comment
void* map = (decode_clo(env84823))[3];
//not do dummy comment
void* proc = (decode_clo(env84823))[2];
//not do dummy comment
void* cons = (decode_clo(env84823))[1];

//creating new closure instance
void** clo85493 = alloc_clo(lam84820_fptr, 5);

//setting env list
clo85493[1] = a8443584672;
clo85493[2] = cons;
clo85493[3] = proc;
clo85493[4] = map;
clo85493[5] = kont84530;
void* f8453384673 = encode_clo(clo85493);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8453384673;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84822 = encode_clo(alloc_clo(lam84822_fptr, 0));

void* lam84824_fptr() // lam84824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84825 = arg_buffer[1];
//reading env and args
void* a8443484670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84825))[6];
//not do dummy comment
void* kont84530 = (decode_clo(env84825))[5];
//not do dummy comment
void* lst = (decode_clo(env84825))[4];
//not do dummy comment
void* map = (decode_clo(env84825))[3];
//not do dummy comment
void* proc = (decode_clo(env84825))[2];
//not do dummy comment
void* cons = (decode_clo(env84825))[1];

//creating new closure instance
void** clo85495 = alloc_clo(lam84822_fptr, 6);

//setting env list
clo85495[1] = cons;
clo85495[2] = proc;
clo85495[3] = map;
clo85495[4] = lst;
clo85495[5] = kont84530;
clo85495[6] = cdr;
void* f8453484671 = encode_clo(clo85495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8453484671;
arg_buffer[3] = a8443484670;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84824 = encode_clo(alloc_clo(lam84824_fptr, 0));

void* lam84826_fptr() // lam84826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84827 = arg_buffer[1];
//reading env and args
void* a8443284666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84530 = (decode_clo(env84827))[8];
//not do dummy comment
void* lst = (decode_clo(env84827))[7];
//not do dummy comment
void* map = (decode_clo(env84827))[6];
//not do dummy comment
void* proc = (decode_clo(env84827))[5];
//not do dummy comment
void* car = (decode_clo(env84827))[4];
//not do dummy comment
void* cons = (decode_clo(env84827))[3];
//not do dummy comment
void* list = (decode_clo(env84827))[2];
//not do dummy comment
void* cdr = (decode_clo(env84827))[1];

//if-clause
bool if_guard85496 = is_true(a8443284666);
if(if_guard85496)
{

//creating new closure instance
void** clo85498 = alloc_clo(lam84816_fptr, 1);

//setting env list
clo85498[1] = kont84530;
void* f8453184667 = encode_clo(clo85498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8453184667;
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
void** clo85500 = alloc_clo(lam84824_fptr, 6);

//setting env list
clo85500[1] = cons;
clo85500[2] = proc;
clo85500[3] = map;
clo85500[4] = lst;
clo85500[5] = kont84530;
clo85500[6] = cdr;
void* f8453584669 = encode_clo(clo85500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8453584669;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84826 = encode_clo(alloc_clo(lam84826_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84828 = arg_buffer[1];
//reading env and args
void* kont84530 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85502 = alloc_clo(lam84826_fptr, 8);

//setting env list
clo85502[1] = cdr;
clo85502[2] = list;
clo85502[3] = cons;
clo85502[4] = car;
clo85502[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo85502[6] = map;
clo85502[7] = lst;
clo85502[8] = kont84530;
void* f8453684665 = encode_clo(clo85502);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8453684665;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam84829_fptr() // lam84829 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84830 = arg_buffer[1];
//reading env and args
void* x8443984680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84537 = (decode_clo(env84830))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84537);
arg_buffer[2] = x8443984680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84537))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84829 = encode_clo(alloc_clo(lam84829_fptr, 0));

void* lam84831_fptr() // lam84831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84832 = arg_buffer[1];
//reading env and args
void* a8444484690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84537 = (decode_clo(env84832))[3];
//not do dummy comment
void* a8444284686 = (decode_clo(env84832))[2];
//not do dummy comment
void* cons = (decode_clo(env84832))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont84537;
arg_buffer[3] = a8444284686;
arg_buffer[4] = a8444484690;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84831 = encode_clo(alloc_clo(lam84831_fptr, 0));

void* lam84833_fptr() // lam84833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84834 = arg_buffer[1];
//reading env and args
void* a8444384688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env84834))[5];
//not do dummy comment
void* kont84537 = (decode_clo(env84834))[4];
//not do dummy comment
void* cons = (decode_clo(env84834))[3];
//not do dummy comment
void* filter = (decode_clo(env84834))[2];
//not do dummy comment
void* a8444284686 = (decode_clo(env84834))[1];

//creating new closure instance
void** clo85504 = alloc_clo(lam84831_fptr, 3);

//setting env list
clo85504[1] = cons;
clo85504[2] = a8444284686;
clo85504[3] = kont84537;
void* f8453984689 = encode_clo(clo85504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8453984689;
arg_buffer[3] = op;
arg_buffer[4] = a8444384688;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84833 = encode_clo(alloc_clo(lam84833_fptr, 0));

void* lam84835_fptr() // lam84835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84836 = arg_buffer[1];
//reading env and args
void* a8444284686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84836))[6];
//not do dummy comment
void* lst = (decode_clo(env84836))[5];
//not do dummy comment
void* op = (decode_clo(env84836))[4];
//not do dummy comment
void* kont84537 = (decode_clo(env84836))[3];
//not do dummy comment
void* filter = (decode_clo(env84836))[2];
//not do dummy comment
void* cons = (decode_clo(env84836))[1];

//creating new closure instance
void** clo85506 = alloc_clo(lam84833_fptr, 5);

//setting env list
clo85506[1] = a8444284686;
clo85506[2] = filter;
clo85506[3] = cons;
clo85506[4] = kont84537;
clo85506[5] = op;
void* f8454084687 = encode_clo(clo85506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8454084687;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84835 = encode_clo(alloc_clo(lam84835_fptr, 0));

void* lam84837_fptr() // lam84837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84838 = arg_buffer[1];
//reading env and args
void* a8444584692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env84838))[3];
//not do dummy comment
void* kont84537 = (decode_clo(env84838))[2];
//not do dummy comment
void* filter = (decode_clo(env84838))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont84537;
arg_buffer[3] = op;
arg_buffer[4] = a8444584692;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84837 = encode_clo(alloc_clo(lam84837_fptr, 0));

void* lam84839_fptr() // lam84839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84840 = arg_buffer[1];
//reading env and args
void* a8444184684 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84840))[7];
//not do dummy comment
void* lst = (decode_clo(env84840))[6];
//not do dummy comment
void* op = (decode_clo(env84840))[5];
//not do dummy comment
void* kont84537 = (decode_clo(env84840))[4];
//not do dummy comment
void* cons = (decode_clo(env84840))[3];
//not do dummy comment
void* filter = (decode_clo(env84840))[2];
//not do dummy comment
void* car = (decode_clo(env84840))[1];

//if-clause
bool if_guard85507 = is_true(a8444184684);
if(if_guard85507)
{

//creating new closure instance
void** clo85509 = alloc_clo(lam84835_fptr, 6);

//setting env list
clo85509[1] = cons;
clo85509[2] = filter;
clo85509[3] = kont84537;
clo85509[4] = op;
clo85509[5] = lst;
clo85509[6] = cdr;
void* f8454184685 = encode_clo(clo85509);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8454184685;
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
void** clo85511 = alloc_clo(lam84837_fptr, 3);

//setting env list
clo85511[1] = filter;
clo85511[2] = kont84537;
clo85511[3] = op;
void* f8454284691 = encode_clo(clo85511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8454284691;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84839 = encode_clo(alloc_clo(lam84839_fptr, 0));

void* lam84841_fptr() // lam84841 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84842 = arg_buffer[1];
//reading env and args
void* a8444084682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84842))[7];
//not do dummy comment
void* lst = (decode_clo(env84842))[6];
//not do dummy comment
void* op = (decode_clo(env84842))[5];
//not do dummy comment
void* kont84537 = (decode_clo(env84842))[4];
//not do dummy comment
void* cons = (decode_clo(env84842))[3];
//not do dummy comment
void* filter = (decode_clo(env84842))[2];
//not do dummy comment
void* car = (decode_clo(env84842))[1];

//creating new closure instance
void** clo85513 = alloc_clo(lam84839_fptr, 7);

//setting env list
clo85513[1] = car;
clo85513[2] = filter;
clo85513[3] = cons;
clo85513[4] = kont84537;
clo85513[5] = op;
clo85513[6] = lst;
clo85513[7] = cdr;
void* f8454384683 = encode_clo(clo85513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8454384683;
arg_buffer[3] = a8444084682;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84841 = encode_clo(alloc_clo(lam84841_fptr, 0));

void* lam84843_fptr() // lam84843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84844 = arg_buffer[1];
//reading env and args
void* a8443884678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env84844))[8];
//not do dummy comment
void* op = (decode_clo(env84844))[7];
//not do dummy comment
void* kont84537 = (decode_clo(env84844))[6];
//not do dummy comment
void* cons = (decode_clo(env84844))[5];
//not do dummy comment
void* list = (decode_clo(env84844))[4];
//not do dummy comment
void* cdr = (decode_clo(env84844))[3];
//not do dummy comment
void* filter = (decode_clo(env84844))[2];
//not do dummy comment
void* car = (decode_clo(env84844))[1];

//if-clause
bool if_guard85514 = is_true(a8443884678);
if(if_guard85514)
{

//creating new closure instance
void** clo85516 = alloc_clo(lam84829_fptr, 1);

//setting env list
clo85516[1] = kont84537;
void* f8453884679 = encode_clo(clo85516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8453884679;
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
void** clo85518 = alloc_clo(lam84841_fptr, 7);

//setting env list
clo85518[1] = car;
clo85518[2] = filter;
clo85518[3] = cons;
clo85518[4] = kont84537;
clo85518[5] = op;
clo85518[6] = lst;
clo85518[7] = cdr;
void* f8454484681 = encode_clo(clo85518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8454484681;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84843 = encode_clo(alloc_clo(lam84843_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84845 = arg_buffer[1];
//reading env and args
void* kont84537 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85520 = alloc_clo(lam84843_fptr, 8);

//setting env list
clo85520[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo85520[2] = filter;
clo85520[3] = cdr;
clo85520[4] = list;
clo85520[5] = cons;
clo85520[6] = kont84537;
clo85520[7] = op;
clo85520[8] = lst;
void* f8454584677 = encode_clo(clo85520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8454584677;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam84846_fptr() // lam84846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84847 = arg_buffer[1];
//reading env and args
void* a8445084700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84546 = (decode_clo(env84847))[3];
//not do dummy comment
void* drop = (decode_clo(env84847))[2];
//not do dummy comment
void* a8444884697 = (decode_clo(env84847))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont84546;
arg_buffer[3] = a8444884697;
arg_buffer[4] = a8445084700;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84846 = encode_clo(alloc_clo(lam84846_fptr, 0));

void* lam84849_fptr() // lam84849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84850 = arg_buffer[1];
//reading env and args
void* a8444884697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84546 = (decode_clo(env84850))[4];
//not do dummy comment
void* drop = (decode_clo(env84850))[3];
//not do dummy comment
void* n = (decode_clo(env84850))[2];
//not do dummy comment
void* _u45 = (decode_clo(env84850))[1];
mpz_t* mpzvar85521 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85521, "1", 10);
void* a8444984698 = encode_mpz(mpzvar85521);

//creating new closure instance
void** clo85523 = alloc_clo(lam84846_fptr, 3);

//setting env list
clo85523[1] = a8444884697;
clo85523[2] = drop;
clo85523[3] = kont84546;
void* f8454784699 = encode_clo(clo85523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8454784699;
arg_buffer[3] = n;
arg_buffer[4] = a8444984698;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84849 = encode_clo(alloc_clo(lam84849_fptr, 0));

void* lam84851_fptr() // lam84851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84852 = arg_buffer[1];
//reading env and args
void* a8444784695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84852))[6];
//not do dummy comment
void* kont84546 = (decode_clo(env84852))[5];
//not do dummy comment
void* n = (decode_clo(env84852))[4];
//not do dummy comment
void* _u45 = (decode_clo(env84852))[3];
//not do dummy comment
void* lst = (decode_clo(env84852))[2];
//not do dummy comment
void* drop = (decode_clo(env84852))[1];

//if-clause
bool if_guard85524 = is_true(a8444784695);
if(if_guard85524)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84546);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84546))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85526 = alloc_clo(lam84849_fptr, 4);

//setting env list
clo85526[1] = _u45;
clo85526[2] = n;
clo85526[3] = drop;
clo85526[4] = kont84546;
void* f8454884696 = encode_clo(clo85526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8454884696;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84851 = encode_clo(alloc_clo(lam84851_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84854 = arg_buffer[1];
//reading env and args
void* kont84546 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar85527 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85527, "0", 10);
void* a8444684693 = encode_mpz(mpzvar85527);

//creating new closure instance
void** clo85529 = alloc_clo(lam84851_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo85529[1] = drop;
clo85529[2] = lst;
clo85529[3] = _u45;
clo85529[4] = n;
clo85529[5] = kont84546;
clo85529[6] = cdr;
void* f8454984694 = encode_clo(clo85529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8454984694;
arg_buffer[3] = n;
arg_buffer[4] = a8444684693;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam84855_fptr() // lam84855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84856 = arg_buffer[1];
//reading env and args
void* a8445484708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84550 = (decode_clo(env84856))[3];
//not do dummy comment
void* proc = (decode_clo(env84856))[2];
//not do dummy comment
void* a8445284704 = (decode_clo(env84856))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont84550;
arg_buffer[3] = a8445284704;
arg_buffer[4] = a8445484708;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84855 = encode_clo(alloc_clo(lam84855_fptr, 0));

void* lam84857_fptr() // lam84857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84858 = arg_buffer[1];
//reading env and args
void* a8445384706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env84858))[5];
//not do dummy comment
void* kont84550 = (decode_clo(env84858))[4];
//not do dummy comment
void* a8445284704 = (decode_clo(env84858))[3];
//not do dummy comment
void* proc = (decode_clo(env84858))[2];
//not do dummy comment
void* acc = (decode_clo(env84858))[1];

//creating new closure instance
void** clo85531 = alloc_clo(lam84855_fptr, 3);

//setting env list
clo85531[1] = a8445284704;
clo85531[2] = proc;
clo85531[3] = kont84550;
void* f8455184707 = encode_clo(clo85531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8455184707;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8445384706;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84857 = encode_clo(alloc_clo(lam84857_fptr, 0));

void* lam84859_fptr() // lam84859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84860 = arg_buffer[1];
//reading env and args
void* a8445284704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84860))[6];
//not do dummy comment
void* kont84550 = (decode_clo(env84860))[5];
//not do dummy comment
void* foldr = (decode_clo(env84860))[4];
//not do dummy comment
void* lst = (decode_clo(env84860))[3];
//not do dummy comment
void* proc = (decode_clo(env84860))[2];
//not do dummy comment
void* acc = (decode_clo(env84860))[1];

//creating new closure instance
void** clo85533 = alloc_clo(lam84857_fptr, 5);

//setting env list
clo85533[1] = acc;
clo85533[2] = proc;
clo85533[3] = a8445284704;
clo85533[4] = kont84550;
clo85533[5] = foldr;
void* f8455284705 = encode_clo(clo85533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8455284705;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84859 = encode_clo(alloc_clo(lam84859_fptr, 0));

void* lam84861_fptr() // lam84861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84862 = arg_buffer[1];
//reading env and args
void* a8445184702 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84862))[7];
//not do dummy comment
void* kont84550 = (decode_clo(env84862))[6];
//not do dummy comment
void* car = (decode_clo(env84862))[5];
//not do dummy comment
void* foldr = (decode_clo(env84862))[4];
//not do dummy comment
void* lst = (decode_clo(env84862))[3];
//not do dummy comment
void* proc = (decode_clo(env84862))[2];
//not do dummy comment
void* acc = (decode_clo(env84862))[1];

//if-clause
bool if_guard85534 = is_true(a8445184702);
if(if_guard85534)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84550);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84550))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85536 = alloc_clo(lam84859_fptr, 6);

//setting env list
clo85536[1] = acc;
clo85536[2] = proc;
clo85536[3] = lst;
clo85536[4] = foldr;
clo85536[5] = kont84550;
clo85536[6] = cdr;
void* f8455384703 = encode_clo(clo85536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8455384703;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84861 = encode_clo(alloc_clo(lam84861_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84863 = arg_buffer[1];
//reading env and args
void* kont84550 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo85538 = alloc_clo(lam84861_fptr, 7);

//setting env list
clo85538[1] = acc;
clo85538[2] = proc;
clo85538[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo85538[4] = foldr;
clo85538[5] = car;
clo85538[6] = kont84550;
clo85538[7] = cdr;
void* f8455484701 = encode_clo(clo85538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8455484701;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam84864_fptr() // lam84864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84865 = arg_buffer[1];
//reading env and args
void* a8445884716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8445684712 = (decode_clo(env84865))[3];
//not do dummy comment
void* kont84555 = (decode_clo(env84865))[2];
//not do dummy comment
void* cons = (decode_clo(env84865))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont84555;
arg_buffer[3] = a8445684712;
arg_buffer[4] = a8445884716;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84864 = encode_clo(alloc_clo(lam84864_fptr, 0));

void* lam84866_fptr() // lam84866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84867 = arg_buffer[1];
//reading env and args
void* a8445784714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8445684712 = (decode_clo(env84867))[5];
//not do dummy comment
void* append = (decode_clo(env84867))[4];
//not do dummy comment
void* kont84555 = (decode_clo(env84867))[3];
//not do dummy comment
void* lst2 = (decode_clo(env84867))[2];
//not do dummy comment
void* cons = (decode_clo(env84867))[1];

//creating new closure instance
void** clo85540 = alloc_clo(lam84864_fptr, 3);

//setting env list
clo85540[1] = cons;
clo85540[2] = kont84555;
clo85540[3] = a8445684712;
void* f8455684715 = encode_clo(clo85540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8455684715;
arg_buffer[3] = a8445784714;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84866 = encode_clo(alloc_clo(lam84866_fptr, 0));

void* lam84868_fptr() // lam84868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84869 = arg_buffer[1];
//reading env and args
void* a8445684712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84869))[6];
//not do dummy comment
void* append = (decode_clo(env84869))[5];
//not do dummy comment
void* kont84555 = (decode_clo(env84869))[4];
//not do dummy comment
void* lst2 = (decode_clo(env84869))[3];
//not do dummy comment
void* lst1 = (decode_clo(env84869))[2];
//not do dummy comment
void* cons = (decode_clo(env84869))[1];

//creating new closure instance
void** clo85542 = alloc_clo(lam84866_fptr, 5);

//setting env list
clo85542[1] = cons;
clo85542[2] = lst2;
clo85542[3] = kont84555;
clo85542[4] = append;
clo85542[5] = a8445684712;
void* f8455784713 = encode_clo(clo85542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8455784713;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84868 = encode_clo(alloc_clo(lam84868_fptr, 0));

void* lam84870_fptr() // lam84870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84871 = arg_buffer[1];
//reading env and args
void* a8445584710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env84871))[7];
//not do dummy comment
void* append = (decode_clo(env84871))[6];
//not do dummy comment
void* kont84555 = (decode_clo(env84871))[5];
//not do dummy comment
void* lst2 = (decode_clo(env84871))[4];
//not do dummy comment
void* cons = (decode_clo(env84871))[3];
//not do dummy comment
void* lst1 = (decode_clo(env84871))[2];
//not do dummy comment
void* car = (decode_clo(env84871))[1];

//if-clause
bool if_guard85543 = is_true(a8445584710);
if(if_guard85543)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84555);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84555))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo85545 = alloc_clo(lam84868_fptr, 6);

//setting env list
clo85545[1] = cons;
clo85545[2] = lst1;
clo85545[3] = lst2;
clo85545[4] = kont84555;
clo85545[5] = append;
clo85545[6] = cdr;
void* f8455884711 = encode_clo(clo85545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8455884711;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam84870 = encode_clo(alloc_clo(lam84870_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84872 = arg_buffer[1];
//reading env and args
void* kont84555 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo85547 = alloc_clo(lam84870_fptr, 7);

//setting env list
clo85547[1] = car;
clo85547[2] = lst1;
clo85547[3] = cons;
clo85547[4] = lst2;
clo85547[5] = kont84555;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo85547[6] = append;
clo85547[7] = cdr;
void* f8455984709 = encode_clo(clo85547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8455984709;
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
void* _84873 = arg_buffer[1];
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

void* kont8456084717 = prim_car(lst);
void* lst84718 = prim_cdr(lst);
void* x8445984719 = apply_prim_hash(lst84718);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8456084717);
arg_buffer[2] = x8445984719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456084717))[0]);
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
void* _84874 = arg_buffer[1];
//reading env and args
void* kont84562 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8446084720 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84562);
arg_buffer[2] = x8446084720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84562))[0]);
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
void* _84875 = arg_buffer[1];
//reading env and args
void* kont84563 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8446184721 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84563);
arg_buffer[2] = x8446184721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84563))[0]);
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
void* _84876 = arg_buffer[1];
//reading env and args
void* kont84564 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8446284722 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84564);
arg_buffer[2] = x8446284722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84564))[0]);
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
void* _84877 = arg_buffer[1];
//reading env and args
void* kont84565 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8446384723 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84565);
arg_buffer[2] = x8446384723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84565))[0]);
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
void* _84882 = arg_buffer[1];
//reading env and args
void* kont84566 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar85548 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar85548, "100.8", 10);
void* a8446484724 = encode_mpf(mpfvar85548);
mpz_t* mpzvar85549 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85549, "80", 10);
void* a8446584725 = encode_mpz(mpzvar85549);
mpz_t* mpzvar85550 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar85550, "10", 10);
void* a8446684726 = encode_mpz(mpzvar85550);
mpf_t* mpfvar85551 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar85551, "2.4", 10);
void* a8446784727 = encode_mpf(mpfvar85551);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = kont84566;
arg_buffer[3] = a8446484724;
arg_buffer[4] = a8446584725;
arg_buffer[5] = a8446684726;
arg_buffer[6] = a8446784727;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam84883_fptr() // lam84883 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env84884 = arg_buffer[1];
//reading env and args
void* x8446884729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont84567 = (decode_clo(env84884))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont84567);
arg_buffer[2] = x8446884729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont84567))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam84883 = encode_clo(alloc_clo(lam84883_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _84885 = arg_buffer[1];
//reading env and args
void* kont84567 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo85553 = alloc_clo(lam84883_fptr, 1);

//setting env list
clo85553[1] = kont84567;
void* f8456884728 = encode_clo(clo85553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8456884728;
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

