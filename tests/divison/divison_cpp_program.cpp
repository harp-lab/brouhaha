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
void* _28661 = arg_buffer[1];
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

void* kont2840128501 = prim_car(lst);
void* lst28502 = prim_cdr(lst);
void* x2831428503 = apply_prim__u43(lst28502);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2840128501);
arg_buffer[2] = x2831428503;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2840128501))[0]);
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
void* _28662 = arg_buffer[1];
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

void* kont2840328504 = prim_car(lst);
void* lst28505 = prim_cdr(lst);
void* x2831528506 = apply_prim__u45(lst28505);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2840328504);
arg_buffer[2] = x2831528506;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2840328504))[0]);
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
void* _28663 = arg_buffer[1];
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

void* kont2840528507 = prim_car(lst);
void* lst28508 = prim_cdr(lst);
void* x2831628509 = apply_prim__u42(lst28508);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2840528507);
arg_buffer[2] = x2831628509;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2840528507))[0]);
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
void* _28664 = arg_buffer[1];
//reading env and args
void* kont28407 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2831728510 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28407);
arg_buffer[2] = x2831728510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28407))[0]);
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
void* _28665 = arg_buffer[1];
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

void* kont2840828511 = prim_car(lst);
void* lst28512 = prim_cdr(lst);
void* x2831828513 = apply_prim__u47(lst28512);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2840828511);
arg_buffer[2] = x2831828513;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2840828511))[0]);
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
void* _28666 = arg_buffer[1];
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

void* kont2841028514 = prim_car(lst);
void* lst28515 = prim_cdr(lst);
void* x2831928516 = apply_prim__u61(lst28515);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2841028514);
arg_buffer[2] = x2831928516;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2841028514))[0]);
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
void* _28667 = arg_buffer[1];
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

void* kont2841228517 = prim_car(lst);
void* lst28518 = prim_cdr(lst);
void* x2832028519 = apply_prim__u62(lst28518);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2841228517);
arg_buffer[2] = x2832028519;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2841228517))[0]);
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
void* _28668 = arg_buffer[1];
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

void* kont2841428520 = prim_car(lst);
void* lst28521 = prim_cdr(lst);
void* x2832128522 = apply_prim__u60(lst28521);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2841428520);
arg_buffer[2] = x2832128522;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2841428520))[0]);
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
void* _28669 = arg_buffer[1];
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

void* kont2841628523 = prim_car(lst);
void* lst28524 = prim_cdr(lst);
void* x2832228525 = apply_prim__u60_u61(lst28524);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2841628523);
arg_buffer[2] = x2832228525;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2841628523))[0]);
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
void* _28670 = arg_buffer[1];
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

void* kont2841828526 = prim_car(lst);
void* lst28527 = prim_cdr(lst);
void* x2832328528 = apply_prim__u62_u61(lst28527);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2841828526);
arg_buffer[2] = x2832328528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2841828526))[0]);
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
void* _28671 = arg_buffer[1];
//reading env and args
void* kont28420 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2832428529 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28420);
arg_buffer[2] = x2832428529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28420))[0]);
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
void* _28672 = arg_buffer[1];
//reading env and args
void* kont28421 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2832528530 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28421);
arg_buffer[2] = x2832528530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28421))[0]);
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
void* _28673 = arg_buffer[1];
//reading env and args
void* kont28422 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2832628531 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28422);
arg_buffer[2] = x2832628531;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28422))[0]);
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
void* _28674 = arg_buffer[1];
//reading env and args
void* kont28423 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2832728532 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28423);
arg_buffer[2] = x2832728532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28423))[0]);
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
void* _28675 = arg_buffer[1];
//reading env and args
void* kont28424 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2832828533 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28424);
arg_buffer[2] = x2832828533;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28424))[0]);
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
void* _28676 = arg_buffer[1];
//reading env and args
void* kont28425 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2832928534 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28425);
arg_buffer[2] = x2832928534;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28425))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam28677_fptr() // lam28677 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28678 = arg_buffer[1];
//reading env and args
void* a2833228538 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28426 = (decode_clo(env28678))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env28678))[2];
//not do dummy comment
void* a2833028535 = (decode_clo(env28678))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont28426;
arg_buffer[3] = a2833028535;
arg_buffer[4] = a2833228538;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28677 = encode_clo(alloc_clo(lam28677_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28681 = arg_buffer[1];
//reading env and args
void* kont28426 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29356 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29356, "0", 10);
void* a2833028535 = encode_mpz(mpzvar29356);
mpz_t* mpzvar29357 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29357, "2", 10);
void* a2833128536 = encode_mpz(mpzvar29357);

//creating new closure instance
void** clo29359 = alloc_clo(lam28677_fptr, 3);

//setting env list
clo29359[1] = a2833028535;
clo29359[2] = equal_u63;
clo29359[3] = kont28426;
void* f2842728537 = encode_clo(clo29359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2842728537;
arg_buffer[3] = x;
arg_buffer[4] = a2833128536;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam28682_fptr() // lam28682 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28683 = arg_buffer[1];
//reading env and args
void* a2833528542 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2833328539 = (decode_clo(env28683))[3];
//not do dummy comment
void* kont28428 = (decode_clo(env28683))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env28683))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont28428;
arg_buffer[3] = a2833328539;
arg_buffer[4] = a2833528542;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28682 = encode_clo(alloc_clo(lam28682_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28686 = arg_buffer[1];
//reading env and args
void* kont28428 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29360 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29360, "1", 10);
void* a2833328539 = encode_mpz(mpzvar29360);
mpz_t* mpzvar29361 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29361, "2", 10);
void* a2833428540 = encode_mpz(mpzvar29361);

//creating new closure instance
void** clo29363 = alloc_clo(lam28682_fptr, 3);

//setting env list
clo29363[1] = equal_u63;
clo29363[2] = kont28428;
clo29363[3] = a2833328539;
void* f2842928541 = encode_clo(clo29363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2842928541;
arg_buffer[3] = x;
arg_buffer[4] = a2833428540;
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
void* _28687 = arg_buffer[1];
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

void* kont2843028543 = prim_car(x);
void* x28544 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2843028543);
arg_buffer[2] = x28544;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2843028543))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam28690_fptr() // lam28690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28691 = arg_buffer[1];
//reading env and args
void* a2834128554 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28432 = (decode_clo(env28691))[3];
//not do dummy comment
void* x = (decode_clo(env28691))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28691))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont28432;
arg_buffer[3] = x;
arg_buffer[4] = a2834128554;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28690 = encode_clo(alloc_clo(lam28690_fptr, 0));

void* lam28692_fptr() // lam28692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28693 = arg_buffer[1];
//reading env and args
void* a2833928551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28693))[5];
//not do dummy comment
void* lst = (decode_clo(env28693))[4];
//not do dummy comment
void* kont28432 = (decode_clo(env28693))[3];
//not do dummy comment
void* x = (decode_clo(env28693))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28693))[1];

//if-clause
bool if_guard29364 = is_true(a2833928551);
if(if_guard29364)
{
void* x2834028552 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28432);
arg_buffer[2] = x2834028552;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28432))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29366 = alloc_clo(lam28690_fptr, 3);

//setting env list
clo29366[1] = member_u63;
clo29366[2] = x;
clo29366[3] = kont28432;
void* f2843328553 = encode_clo(clo29366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2843328553;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28692 = encode_clo(alloc_clo(lam28692_fptr, 0));

void* lam28694_fptr() // lam28694 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28695 = arg_buffer[1];
//reading env and args
void* a2833828549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28695))[6];
//not do dummy comment
void* lst = (decode_clo(env28695))[5];
//not do dummy comment
void* kont28432 = (decode_clo(env28695))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env28695))[3];
//not do dummy comment
void* x = (decode_clo(env28695))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28695))[1];

//creating new closure instance
void** clo29368 = alloc_clo(lam28692_fptr, 5);

//setting env list
clo29368[1] = member_u63;
clo29368[2] = x;
clo29368[3] = kont28432;
clo29368[4] = lst;
clo29368[5] = cdr;
void* f2843428550 = encode_clo(clo29368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2843428550;
arg_buffer[3] = a2833828549;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28694 = encode_clo(alloc_clo(lam28694_fptr, 0));

void* lam28696_fptr() // lam28696 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28697 = arg_buffer[1];
//reading env and args
void* a2833628546 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28697))[7];
//not do dummy comment
void* lst = (decode_clo(env28697))[6];
//not do dummy comment
void* kont28432 = (decode_clo(env28697))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env28697))[4];
//not do dummy comment
void* x = (decode_clo(env28697))[3];
//not do dummy comment
void* car = (decode_clo(env28697))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28697))[1];

//if-clause
bool if_guard29369 = is_true(a2833628546);
if(if_guard29369)
{
void* x2833728547 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28432);
arg_buffer[2] = x2833728547;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28432))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29371 = alloc_clo(lam28694_fptr, 6);

//setting env list
clo29371[1] = member_u63;
clo29371[2] = x;
clo29371[3] = equal_u63;
clo29371[4] = kont28432;
clo29371[5] = lst;
clo29371[6] = cdr;
void* f2843528548 = encode_clo(clo29371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2843528548;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28696 = encode_clo(alloc_clo(lam28696_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28698 = arg_buffer[1];
//reading env and args
void* kont28432 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29373 = alloc_clo(lam28696_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo29373[1] = member_u63;
clo29373[2] = car;
clo29373[3] = x;
clo29373[4] = equal_u63;
clo29373[5] = kont28432;
clo29373[6] = lst;
clo29373[7] = cdr;
void* f2843628545 = encode_clo(clo29373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2843628545;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam28699_fptr() // lam28699 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28700 = arg_buffer[1];
//reading env and args
void* a2834528562 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2834428560 = (decode_clo(env28700))[4];
//not do dummy comment
void* fun = (decode_clo(env28700))[3];
//not do dummy comment
void* kont28437 = (decode_clo(env28700))[2];
//not do dummy comment
void* foldl = (decode_clo(env28700))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont28437;
arg_buffer[3] = fun;
arg_buffer[4] = a2834428560;
arg_buffer[5] = a2834528562;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28699 = encode_clo(alloc_clo(lam28699_fptr, 0));

void* lam28701_fptr() // lam28701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28702 = arg_buffer[1];
//reading env and args
void* a2834428560 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28702))[5];
//not do dummy comment
void* lst = (decode_clo(env28702))[4];
//not do dummy comment
void* fun = (decode_clo(env28702))[3];
//not do dummy comment
void* kont28437 = (decode_clo(env28702))[2];
//not do dummy comment
void* foldl = (decode_clo(env28702))[1];

//creating new closure instance
void** clo29375 = alloc_clo(lam28699_fptr, 4);

//setting env list
clo29375[1] = foldl;
clo29375[2] = kont28437;
clo29375[3] = fun;
clo29375[4] = a2834428560;
void* f2843828561 = encode_clo(clo29375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2843828561;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28701 = encode_clo(alloc_clo(lam28701_fptr, 0));

void* lam28703_fptr() // lam28703 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28704 = arg_buffer[1];
//reading env and args
void* a2834328558 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28704))[6];
//not do dummy comment
void* lst = (decode_clo(env28704))[5];
//not do dummy comment
void* fun = (decode_clo(env28704))[4];
//not do dummy comment
void* foldl = (decode_clo(env28704))[3];
//not do dummy comment
void* acc = (decode_clo(env28704))[2];
//not do dummy comment
void* kont28437 = (decode_clo(env28704))[1];

//creating new closure instance
void** clo29377 = alloc_clo(lam28701_fptr, 5);

//setting env list
clo29377[1] = foldl;
clo29377[2] = kont28437;
clo29377[3] = fun;
clo29377[4] = lst;
clo29377[5] = cdr;
void* f2843928559 = encode_clo(clo29377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2843928559;
arg_buffer[3] = a2834328558;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28703 = encode_clo(alloc_clo(lam28703_fptr, 0));

void* lam28705_fptr() // lam28705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28706 = arg_buffer[1];
//reading env and args
void* a2834228556 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28706))[7];
//not do dummy comment
void* lst = (decode_clo(env28706))[6];
//not do dummy comment
void* fun = (decode_clo(env28706))[5];
//not do dummy comment
void* car = (decode_clo(env28706))[4];
//not do dummy comment
void* foldl = (decode_clo(env28706))[3];
//not do dummy comment
void* acc = (decode_clo(env28706))[2];
//not do dummy comment
void* kont28437 = (decode_clo(env28706))[1];

//if-clause
bool if_guard29378 = is_true(a2834228556);
if(if_guard29378)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28437);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28437))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29380 = alloc_clo(lam28703_fptr, 6);

//setting env list
clo29380[1] = kont28437;
clo29380[2] = acc;
clo29380[3] = foldl;
clo29380[4] = fun;
clo29380[5] = lst;
clo29380[6] = cdr;
void* f2844028557 = encode_clo(clo29380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2844028557;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28705 = encode_clo(alloc_clo(lam28705_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28707 = arg_buffer[1];
//reading env and args
void* kont28437 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29382 = alloc_clo(lam28705_fptr, 7);

//setting env list
clo29382[1] = kont28437;
clo29382[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo29382[3] = foldl;
clo29382[4] = car;
clo29382[5] = fun;
clo29382[6] = lst;
clo29382[7] = cdr;
void* f2844128555 = encode_clo(clo29382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2844128555;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam28708_fptr() // lam28708 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28709 = arg_buffer[1];
//reading env and args
void* a2834928570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28442 = (decode_clo(env28709))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28709))[2];
//not do dummy comment
void* a2834728566 = (decode_clo(env28709))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont28442;
arg_buffer[3] = a2834728566;
arg_buffer[4] = a2834928570;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28708 = encode_clo(alloc_clo(lam28708_fptr, 0));

void* lam28710_fptr() // lam28710 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28711 = arg_buffer[1];
//reading env and args
void* a2834828568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28442 = (decode_clo(env28711))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28711))[4];
//not do dummy comment
void* cons = (decode_clo(env28711))[3];
//not do dummy comment
void* a2834728566 = (decode_clo(env28711))[2];
//not do dummy comment
void* lst2 = (decode_clo(env28711))[1];

//creating new closure instance
void** clo29384 = alloc_clo(lam28708_fptr, 3);

//setting env list
clo29384[1] = a2834728566;
clo29384[2] = reverse_u45helper;
clo29384[3] = kont28442;
void* f2844328569 = encode_clo(clo29384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2844328569;
arg_buffer[3] = a2834828568;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28710 = encode_clo(alloc_clo(lam28710_fptr, 0));

void* lam28712_fptr() // lam28712 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28713 = arg_buffer[1];
//reading env and args
void* a2834728566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28442 = (decode_clo(env28713))[6];
//not do dummy comment
void* lst = (decode_clo(env28713))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28713))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28713))[3];
//not do dummy comment
void* car = (decode_clo(env28713))[2];
//not do dummy comment
void* cons = (decode_clo(env28713))[1];

//creating new closure instance
void** clo29386 = alloc_clo(lam28710_fptr, 5);

//setting env list
clo29386[1] = lst2;
clo29386[2] = a2834728566;
clo29386[3] = cons;
clo29386[4] = reverse_u45helper;
clo29386[5] = kont28442;
void* f2844428567 = encode_clo(clo29386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2844428567;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28712 = encode_clo(alloc_clo(lam28712_fptr, 0));

void* lam28714_fptr() // lam28714 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28715 = arg_buffer[1];
//reading env and args
void* a2834628564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28715))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28715))[6];
//not do dummy comment
void* lst2 = (decode_clo(env28715))[5];
//not do dummy comment
void* car = (decode_clo(env28715))[4];
//not do dummy comment
void* cons = (decode_clo(env28715))[3];
//not do dummy comment
void* kont28442 = (decode_clo(env28715))[2];
//not do dummy comment
void* cdr = (decode_clo(env28715))[1];

//if-clause
bool if_guard29387 = is_true(a2834628564);
if(if_guard29387)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28442);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28442))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29389 = alloc_clo(lam28712_fptr, 6);

//setting env list
clo29389[1] = cons;
clo29389[2] = car;
clo29389[3] = lst2;
clo29389[4] = reverse_u45helper;
clo29389[5] = lst;
clo29389[6] = kont28442;
void* f2844528565 = encode_clo(clo29389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2844528565;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28714 = encode_clo(alloc_clo(lam28714_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28716 = arg_buffer[1];
//reading env and args
void* kont28442 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29391 = alloc_clo(lam28714_fptr, 7);

//setting env list
clo29391[1] = cdr;
clo29391[2] = kont28442;
clo29391[3] = cons;
clo29391[4] = car;
clo29391[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo29391[6] = reverse_u45helper;
clo29391[7] = lst;
void* f2844628563 = encode_clo(clo29391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2844628563;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam28717_fptr() // lam28717 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28718 = arg_buffer[1];
//reading env and args
void* a2835028572 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28718))[3];
//not do dummy comment
void* kont28447 = (decode_clo(env28718))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28718))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont28447;
arg_buffer[3] = lst;
arg_buffer[4] = a2835028572;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28717 = encode_clo(alloc_clo(lam28717_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28719 = arg_buffer[1];
//reading env and args
void* kont28447 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29393 = alloc_clo(lam28717_fptr, 3);

//setting env list
clo29393[1] = reverse_u45helper;
clo29393[2] = kont28447;
clo29393[3] = lst;
void* f2844828571 = encode_clo(clo29393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2844828571;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam28720_fptr() // lam28720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28721 = arg_buffer[1];
//reading env and args
void* x2835328577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28449 = (decode_clo(env28721))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28449);
arg_buffer[2] = x2835328577;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28449))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28720 = encode_clo(alloc_clo(lam28720_fptr, 0));

void* lam28722_fptr() // lam28722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28723 = arg_buffer[1];
//reading env and args
void* a2835828586 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28449 = (decode_clo(env28723))[4];
//not do dummy comment
void* a2835428579 = (decode_clo(env28723))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env28723))[2];
//not do dummy comment
void* a2835628582 = (decode_clo(env28723))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont28449;
arg_buffer[3] = a2835428579;
arg_buffer[4] = a2835628582;
arg_buffer[5] = a2835828586;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28722 = encode_clo(alloc_clo(lam28722_fptr, 0));

void* lam28724_fptr() // lam28724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28725 = arg_buffer[1];
//reading env and args
void* a2835728584 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28449 = (decode_clo(env28725))[6];
//not do dummy comment
void* a2835428579 = (decode_clo(env28725))[5];
//not do dummy comment
void* cons = (decode_clo(env28725))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env28725))[3];
//not do dummy comment
void* a2835628582 = (decode_clo(env28725))[2];
//not do dummy comment
void* lst2 = (decode_clo(env28725))[1];

//creating new closure instance
void** clo29395 = alloc_clo(lam28722_fptr, 4);

//setting env list
clo29395[1] = a2835628582;
clo29395[2] = take_u45helper;
clo29395[3] = a2835428579;
clo29395[4] = kont28449;
void* f2845128585 = encode_clo(clo29395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2845128585;
arg_buffer[3] = a2835728584;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28724 = encode_clo(alloc_clo(lam28724_fptr, 0));

void* lam28726_fptr() // lam28726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28727 = arg_buffer[1];
//reading env and args
void* a2835628582 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28727))[7];
//not do dummy comment
void* kont28449 = (decode_clo(env28727))[6];
//not do dummy comment
void* a2835428579 = (decode_clo(env28727))[5];
//not do dummy comment
void* car = (decode_clo(env28727))[4];
//not do dummy comment
void* cons = (decode_clo(env28727))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env28727))[2];
//not do dummy comment
void* lst2 = (decode_clo(env28727))[1];

//creating new closure instance
void** clo29397 = alloc_clo(lam28724_fptr, 6);

//setting env list
clo29397[1] = lst2;
clo29397[2] = a2835628582;
clo29397[3] = take_u45helper;
clo29397[4] = cons;
clo29397[5] = a2835428579;
clo29397[6] = kont28449;
void* f2845228583 = encode_clo(clo29397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2845228583;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28726 = encode_clo(alloc_clo(lam28726_fptr, 0));

void* lam28729_fptr() // lam28729 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28730 = arg_buffer[1];
//reading env and args
void* a2835428579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28730))[8];
//not do dummy comment
void* kont28449 = (decode_clo(env28730))[7];
//not do dummy comment
void* cons = (decode_clo(env28730))[6];
//not do dummy comment
void* _u45 = (decode_clo(env28730))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env28730))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28730))[3];
//not do dummy comment
void* n = (decode_clo(env28730))[2];
//not do dummy comment
void* car = (decode_clo(env28730))[1];
mpz_t* mpzvar29398 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29398, "1", 10);
void* a2835528580 = encode_mpz(mpzvar29398);

//creating new closure instance
void** clo29400 = alloc_clo(lam28726_fptr, 7);

//setting env list
clo29400[1] = lst2;
clo29400[2] = take_u45helper;
clo29400[3] = cons;
clo29400[4] = car;
clo29400[5] = a2835428579;
clo29400[6] = kont28449;
clo29400[7] = lst;
void* f2845328581 = encode_clo(clo29400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2845328581;
arg_buffer[3] = n;
arg_buffer[4] = a2835528580;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28729 = encode_clo(alloc_clo(lam28729_fptr, 0));

void* lam28731_fptr() // lam28731 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28732 = arg_buffer[1];
//reading env and args
void* a2835228575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28732))[10];
//not do dummy comment
void* lst = (decode_clo(env28732))[9];
//not do dummy comment
void* cons = (decode_clo(env28732))[8];
//not do dummy comment
void* _u45 = (decode_clo(env28732))[7];
//not do dummy comment
void* kont28449 = (decode_clo(env28732))[6];
//not do dummy comment
void* reverse = (decode_clo(env28732))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env28732))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28732))[3];
//not do dummy comment
void* n = (decode_clo(env28732))[2];
//not do dummy comment
void* car = (decode_clo(env28732))[1];

//if-clause
bool if_guard29401 = is_true(a2835228575);
if(if_guard29401)
{

//creating new closure instance
void** clo29403 = alloc_clo(lam28720_fptr, 1);

//setting env list
clo29403[1] = kont28449;
void* f2845028576 = encode_clo(clo29403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2845028576;
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
void** clo29405 = alloc_clo(lam28729_fptr, 8);

//setting env list
clo29405[1] = car;
clo29405[2] = n;
clo29405[3] = lst2;
clo29405[4] = take_u45helper;
clo29405[5] = _u45;
clo29405[6] = cons;
clo29405[7] = kont28449;
clo29405[8] = lst;
void* f2845428578 = encode_clo(clo29405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2845428578;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28731 = encode_clo(alloc_clo(lam28731_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28734 = arg_buffer[1];
//reading env and args
void* kont28449 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar29406 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29406, "0", 10);
void* a2835128573 = encode_mpz(mpzvar29406);

//creating new closure instance
void** clo29408 = alloc_clo(lam28731_fptr, 10);

//setting env list
clo29408[1] = car;
clo29408[2] = n;
clo29408[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo29408[4] = take_u45helper;
clo29408[5] = reverse;
clo29408[6] = kont28449;
clo29408[7] = _u45;
clo29408[8] = cons;
clo29408[9] = lst;
clo29408[10] = cdr;
void* f2845528574 = encode_clo(clo29408);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2845528574;
arg_buffer[3] = n;
arg_buffer[4] = a2835128573;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam28735_fptr() // lam28735 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28736 = arg_buffer[1];
//reading env and args
void* a2835928588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28736))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env28736))[3];
//not do dummy comment
void* n = (decode_clo(env28736))[2];
//not do dummy comment
void* kont28456 = (decode_clo(env28736))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont28456;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2835928588;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28735 = encode_clo(alloc_clo(lam28735_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28737 = arg_buffer[1];
//reading env and args
void* kont28456 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29410 = alloc_clo(lam28735_fptr, 4);

//setting env list
clo29410[1] = kont28456;
clo29410[2] = n;
clo29410[3] = take_u45helper;
clo29410[4] = lst;
void* f2845728587 = encode_clo(clo29410);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2845728587;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam28739_fptr() // lam28739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28740 = arg_buffer[1];
//reading env and args
void* a2836428596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28458 = (decode_clo(env28740))[3];
//not do dummy comment
void* a2836228592 = (decode_clo(env28740))[2];
//not do dummy comment
void* _u43 = (decode_clo(env28740))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont28458;
arg_buffer[3] = a2836228592;
arg_buffer[4] = a2836428596;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28739 = encode_clo(alloc_clo(lam28739_fptr, 0));

void* lam28741_fptr() // lam28741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28742 = arg_buffer[1];
//reading env and args
void* a2836328594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28458 = (decode_clo(env28742))[4];
//not do dummy comment
void* length = (decode_clo(env28742))[3];
//not do dummy comment
void* a2836228592 = (decode_clo(env28742))[2];
//not do dummy comment
void* _u43 = (decode_clo(env28742))[1];

//creating new closure instance
void** clo29412 = alloc_clo(lam28739_fptr, 3);

//setting env list
clo29412[1] = _u43;
clo29412[2] = a2836228592;
clo29412[3] = kont28458;
void* f2845928595 = encode_clo(clo29412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2845928595;
arg_buffer[3] = a2836328594;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28741 = encode_clo(alloc_clo(lam28741_fptr, 0));

void* lam28744_fptr() // lam28744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28745 = arg_buffer[1];
//reading env and args
void* a2836028590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28745))[5];
//not do dummy comment
void* length = (decode_clo(env28745))[4];
//not do dummy comment
void* _u43 = (decode_clo(env28745))[3];
//not do dummy comment
void* kont28458 = (decode_clo(env28745))[2];
//not do dummy comment
void* cdr = (decode_clo(env28745))[1];

//if-clause
bool if_guard29413 = is_true(a2836028590);
if(if_guard29413)
{
mpz_t* mpzvar29414 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29414, "0", 10);
void* x2836128591 = encode_mpz(mpzvar29414);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28458);
arg_buffer[2] = x2836128591;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28458))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar29415 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29415, "1", 10);
void* a2836228592 = encode_mpz(mpzvar29415);

//creating new closure instance
void** clo29417 = alloc_clo(lam28741_fptr, 4);

//setting env list
clo29417[1] = _u43;
clo29417[2] = a2836228592;
clo29417[3] = length;
clo29417[4] = kont28458;
void* f2846028593 = encode_clo(clo29417);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2846028593;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28744 = encode_clo(alloc_clo(lam28744_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28746 = arg_buffer[1];
//reading env and args
void* kont28458 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29419 = alloc_clo(lam28744_fptr, 5);

//setting env list
clo29419[1] = cdr;
clo29419[2] = kont28458;
clo29419[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo29419[4] = length;
clo29419[5] = lst;
void* f2846128589 = encode_clo(clo29419);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2846128589;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam28747_fptr() // lam28747 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28748 = arg_buffer[1];
//reading env and args
void* x2836628600 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28462 = (decode_clo(env28748))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28462);
arg_buffer[2] = x2836628600;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28462))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28747 = encode_clo(alloc_clo(lam28747_fptr, 0));

void* lam28749_fptr() // lam28749 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28750 = arg_buffer[1];
//reading env and args
void* a2837028608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2836828604 = (decode_clo(env28750))[3];
//not do dummy comment
void* kont28462 = (decode_clo(env28750))[2];
//not do dummy comment
void* cons = (decode_clo(env28750))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont28462;
arg_buffer[3] = a2836828604;
arg_buffer[4] = a2837028608;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28749 = encode_clo(alloc_clo(lam28749_fptr, 0));

void* lam28751_fptr() // lam28751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28752 = arg_buffer[1];
//reading env and args
void* a2836928606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2836828604 = (decode_clo(env28752))[5];
//not do dummy comment
void* kont28462 = (decode_clo(env28752))[4];
//not do dummy comment
void* map = (decode_clo(env28752))[3];
//not do dummy comment
void* proc = (decode_clo(env28752))[2];
//not do dummy comment
void* cons = (decode_clo(env28752))[1];

//creating new closure instance
void** clo29421 = alloc_clo(lam28749_fptr, 3);

//setting env list
clo29421[1] = cons;
clo29421[2] = kont28462;
clo29421[3] = a2836828604;
void* f2846428607 = encode_clo(clo29421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2846428607;
arg_buffer[3] = proc;
arg_buffer[4] = a2836928606;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28751 = encode_clo(alloc_clo(lam28751_fptr, 0));

void* lam28753_fptr() // lam28753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28754 = arg_buffer[1];
//reading env and args
void* a2836828604 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28754))[6];
//not do dummy comment
void* map = (decode_clo(env28754))[5];
//not do dummy comment
void* proc = (decode_clo(env28754))[4];
//not do dummy comment
void* cons = (decode_clo(env28754))[3];
//not do dummy comment
void* lst = (decode_clo(env28754))[2];
//not do dummy comment
void* kont28462 = (decode_clo(env28754))[1];

//creating new closure instance
void** clo29423 = alloc_clo(lam28751_fptr, 5);

//setting env list
clo29423[1] = cons;
clo29423[2] = proc;
clo29423[3] = map;
clo29423[4] = kont28462;
clo29423[5] = a2836828604;
void* f2846528605 = encode_clo(clo29423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2846528605;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28753 = encode_clo(alloc_clo(lam28753_fptr, 0));

void* lam28755_fptr() // lam28755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28756 = arg_buffer[1];
//reading env and args
void* a2836728602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28756))[6];
//not do dummy comment
void* map = (decode_clo(env28756))[5];
//not do dummy comment
void* proc = (decode_clo(env28756))[4];
//not do dummy comment
void* cons = (decode_clo(env28756))[3];
//not do dummy comment
void* lst = (decode_clo(env28756))[2];
//not do dummy comment
void* kont28462 = (decode_clo(env28756))[1];

//creating new closure instance
void** clo29425 = alloc_clo(lam28753_fptr, 6);

//setting env list
clo29425[1] = kont28462;
clo29425[2] = lst;
clo29425[3] = cons;
clo29425[4] = proc;
clo29425[5] = map;
clo29425[6] = cdr;
void* f2846628603 = encode_clo(clo29425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2846628603;
arg_buffer[3] = a2836728602;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28755 = encode_clo(alloc_clo(lam28755_fptr, 0));

void* lam28757_fptr() // lam28757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28758 = arg_buffer[1];
//reading env and args
void* a2836528598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env28758))[8];
//not do dummy comment
void* proc = (decode_clo(env28758))[7];
//not do dummy comment
void* car = (decode_clo(env28758))[6];
//not do dummy comment
void* cons = (decode_clo(env28758))[5];
//not do dummy comment
void* list = (decode_clo(env28758))[4];
//not do dummy comment
void* cdr = (decode_clo(env28758))[3];
//not do dummy comment
void* lst = (decode_clo(env28758))[2];
//not do dummy comment
void* kont28462 = (decode_clo(env28758))[1];

//if-clause
bool if_guard29426 = is_true(a2836528598);
if(if_guard29426)
{

//creating new closure instance
void** clo29428 = alloc_clo(lam28747_fptr, 1);

//setting env list
clo29428[1] = kont28462;
void* f2846328599 = encode_clo(clo29428);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2846328599;
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
void** clo29430 = alloc_clo(lam28755_fptr, 6);

//setting env list
clo29430[1] = kont28462;
clo29430[2] = lst;
clo29430[3] = cons;
clo29430[4] = proc;
clo29430[5] = map;
clo29430[6] = cdr;
void* f2846728601 = encode_clo(clo29430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2846728601;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28757 = encode_clo(alloc_clo(lam28757_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28759 = arg_buffer[1];
//reading env and args
void* kont28462 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29432 = alloc_clo(lam28757_fptr, 8);

//setting env list
clo29432[1] = kont28462;
clo29432[2] = lst;
clo29432[3] = cdr;
clo29432[4] = list;
clo29432[5] = cons;
clo29432[6] = car;
clo29432[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo29432[8] = map;
void* f2846828597 = encode_clo(clo29432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2846828597;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam28760_fptr() // lam28760 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28761 = arg_buffer[1];
//reading env and args
void* x2837228612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28469 = (decode_clo(env28761))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28469);
arg_buffer[2] = x2837228612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28469))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28760 = encode_clo(alloc_clo(lam28760_fptr, 0));

void* lam28762_fptr() // lam28762 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28763 = arg_buffer[1];
//reading env and args
void* a2837728622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2837528618 = (decode_clo(env28763))[3];
//not do dummy comment
void* kont28469 = (decode_clo(env28763))[2];
//not do dummy comment
void* cons = (decode_clo(env28763))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont28469;
arg_buffer[3] = a2837528618;
arg_buffer[4] = a2837728622;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28762 = encode_clo(alloc_clo(lam28762_fptr, 0));

void* lam28764_fptr() // lam28764 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28765 = arg_buffer[1];
//reading env and args
void* a2837628620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2837528618 = (decode_clo(env28765))[5];
//not do dummy comment
void* op = (decode_clo(env28765))[4];
//not do dummy comment
void* kont28469 = (decode_clo(env28765))[3];
//not do dummy comment
void* filter = (decode_clo(env28765))[2];
//not do dummy comment
void* cons = (decode_clo(env28765))[1];

//creating new closure instance
void** clo29434 = alloc_clo(lam28762_fptr, 3);

//setting env list
clo29434[1] = cons;
clo29434[2] = kont28469;
clo29434[3] = a2837528618;
void* f2847128621 = encode_clo(clo29434);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2847128621;
arg_buffer[3] = op;
arg_buffer[4] = a2837628620;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28764 = encode_clo(alloc_clo(lam28764_fptr, 0));

void* lam28766_fptr() // lam28766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28767 = arg_buffer[1];
//reading env and args
void* a2837528618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28767))[6];
//not do dummy comment
void* lst = (decode_clo(env28767))[5];
//not do dummy comment
void* op = (decode_clo(env28767))[4];
//not do dummy comment
void* kont28469 = (decode_clo(env28767))[3];
//not do dummy comment
void* filter = (decode_clo(env28767))[2];
//not do dummy comment
void* cons = (decode_clo(env28767))[1];

//creating new closure instance
void** clo29436 = alloc_clo(lam28764_fptr, 5);

//setting env list
clo29436[1] = cons;
clo29436[2] = filter;
clo29436[3] = kont28469;
clo29436[4] = op;
clo29436[5] = a2837528618;
void* f2847228619 = encode_clo(clo29436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2847228619;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28766 = encode_clo(alloc_clo(lam28766_fptr, 0));

void* lam28768_fptr() // lam28768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28769 = arg_buffer[1];
//reading env and args
void* a2837828624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env28769))[3];
//not do dummy comment
void* kont28469 = (decode_clo(env28769))[2];
//not do dummy comment
void* filter = (decode_clo(env28769))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont28469;
arg_buffer[3] = op;
arg_buffer[4] = a2837828624;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28768 = encode_clo(alloc_clo(lam28768_fptr, 0));

void* lam28770_fptr() // lam28770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28771 = arg_buffer[1];
//reading env and args
void* a2837428616 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28771))[7];
//not do dummy comment
void* lst = (decode_clo(env28771))[6];
//not do dummy comment
void* op = (decode_clo(env28771))[5];
//not do dummy comment
void* kont28469 = (decode_clo(env28771))[4];
//not do dummy comment
void* cons = (decode_clo(env28771))[3];
//not do dummy comment
void* filter = (decode_clo(env28771))[2];
//not do dummy comment
void* car = (decode_clo(env28771))[1];

//if-clause
bool if_guard29437 = is_true(a2837428616);
if(if_guard29437)
{

//creating new closure instance
void** clo29439 = alloc_clo(lam28766_fptr, 6);

//setting env list
clo29439[1] = cons;
clo29439[2] = filter;
clo29439[3] = kont28469;
clo29439[4] = op;
clo29439[5] = lst;
clo29439[6] = cdr;
void* f2847328617 = encode_clo(clo29439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2847328617;
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
void** clo29441 = alloc_clo(lam28768_fptr, 3);

//setting env list
clo29441[1] = filter;
clo29441[2] = kont28469;
clo29441[3] = op;
void* f2847428623 = encode_clo(clo29441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2847428623;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28770 = encode_clo(alloc_clo(lam28770_fptr, 0));

void* lam28772_fptr() // lam28772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28773 = arg_buffer[1];
//reading env and args
void* a2837328614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28773))[7];
//not do dummy comment
void* lst = (decode_clo(env28773))[6];
//not do dummy comment
void* op = (decode_clo(env28773))[5];
//not do dummy comment
void* kont28469 = (decode_clo(env28773))[4];
//not do dummy comment
void* cons = (decode_clo(env28773))[3];
//not do dummy comment
void* filter = (decode_clo(env28773))[2];
//not do dummy comment
void* car = (decode_clo(env28773))[1];

//creating new closure instance
void** clo29443 = alloc_clo(lam28770_fptr, 7);

//setting env list
clo29443[1] = car;
clo29443[2] = filter;
clo29443[3] = cons;
clo29443[4] = kont28469;
clo29443[5] = op;
clo29443[6] = lst;
clo29443[7] = cdr;
void* f2847528615 = encode_clo(clo29443);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2847528615;
arg_buffer[3] = a2837328614;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28772 = encode_clo(alloc_clo(lam28772_fptr, 0));

void* lam28774_fptr() // lam28774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28775 = arg_buffer[1];
//reading env and args
void* a2837128610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28775))[8];
//not do dummy comment
void* op = (decode_clo(env28775))[7];
//not do dummy comment
void* kont28469 = (decode_clo(env28775))[6];
//not do dummy comment
void* cons = (decode_clo(env28775))[5];
//not do dummy comment
void* list = (decode_clo(env28775))[4];
//not do dummy comment
void* cdr = (decode_clo(env28775))[3];
//not do dummy comment
void* filter = (decode_clo(env28775))[2];
//not do dummy comment
void* car = (decode_clo(env28775))[1];

//if-clause
bool if_guard29444 = is_true(a2837128610);
if(if_guard29444)
{

//creating new closure instance
void** clo29446 = alloc_clo(lam28760_fptr, 1);

//setting env list
clo29446[1] = kont28469;
void* f2847028611 = encode_clo(clo29446);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2847028611;
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
void** clo29448 = alloc_clo(lam28772_fptr, 7);

//setting env list
clo29448[1] = car;
clo29448[2] = filter;
clo29448[3] = cons;
clo29448[4] = kont28469;
clo29448[5] = op;
clo29448[6] = lst;
clo29448[7] = cdr;
void* f2847628613 = encode_clo(clo29448);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2847628613;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28774 = encode_clo(alloc_clo(lam28774_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28776 = arg_buffer[1];
//reading env and args
void* kont28469 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29450 = alloc_clo(lam28774_fptr, 8);

//setting env list
clo29450[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo29450[2] = filter;
clo29450[3] = cdr;
clo29450[4] = list;
clo29450[5] = cons;
clo29450[6] = kont28469;
clo29450[7] = op;
clo29450[8] = lst;
void* f2847728609 = encode_clo(clo29450);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2847728609;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam28777_fptr() // lam28777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28778 = arg_buffer[1];
//reading env and args
void* a2838328632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2838128629 = (decode_clo(env28778))[3];
//not do dummy comment
void* kont28478 = (decode_clo(env28778))[2];
//not do dummy comment
void* drop = (decode_clo(env28778))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont28478;
arg_buffer[3] = a2838128629;
arg_buffer[4] = a2838328632;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28777 = encode_clo(alloc_clo(lam28777_fptr, 0));

void* lam28780_fptr() // lam28780 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28781 = arg_buffer[1];
//reading env and args
void* a2838128629 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env28781))[4];
//not do dummy comment
void* _u45 = (decode_clo(env28781))[3];
//not do dummy comment
void* kont28478 = (decode_clo(env28781))[2];
//not do dummy comment
void* drop = (decode_clo(env28781))[1];
mpz_t* mpzvar29451 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29451, "1", 10);
void* a2838228630 = encode_mpz(mpzvar29451);

//creating new closure instance
void** clo29453 = alloc_clo(lam28777_fptr, 3);

//setting env list
clo29453[1] = drop;
clo29453[2] = kont28478;
clo29453[3] = a2838128629;
void* f2847928631 = encode_clo(clo29453);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2847928631;
arg_buffer[3] = n;
arg_buffer[4] = a2838228630;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28780 = encode_clo(alloc_clo(lam28780_fptr, 0));

void* lam28782_fptr() // lam28782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28783 = arg_buffer[1];
//reading env and args
void* a2838028627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28783))[6];
//not do dummy comment
void* n = (decode_clo(env28783))[5];
//not do dummy comment
void* _u45 = (decode_clo(env28783))[4];
//not do dummy comment
void* lst = (decode_clo(env28783))[3];
//not do dummy comment
void* kont28478 = (decode_clo(env28783))[2];
//not do dummy comment
void* drop = (decode_clo(env28783))[1];

//if-clause
bool if_guard29454 = is_true(a2838028627);
if(if_guard29454)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28478);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28478))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29456 = alloc_clo(lam28780_fptr, 4);

//setting env list
clo29456[1] = drop;
clo29456[2] = kont28478;
clo29456[3] = _u45;
clo29456[4] = n;
void* f2848028628 = encode_clo(clo29456);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2848028628;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28782 = encode_clo(alloc_clo(lam28782_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28785 = arg_buffer[1];
//reading env and args
void* kont28478 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar29457 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29457, "0", 10);
void* a2837928625 = encode_mpz(mpzvar29457);

//creating new closure instance
void** clo29459 = alloc_clo(lam28782_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo29459[1] = drop;
clo29459[2] = kont28478;
clo29459[3] = lst;
clo29459[4] = _u45;
clo29459[5] = n;
clo29459[6] = cdr;
void* f2848128626 = encode_clo(clo29459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2848128626;
arg_buffer[3] = n;
arg_buffer[4] = a2837928625;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam28786_fptr() // lam28786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28787 = arg_buffer[1];
//reading env and args
void* a2838728640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2838528636 = (decode_clo(env28787))[3];
//not do dummy comment
void* kont28482 = (decode_clo(env28787))[2];
//not do dummy comment
void* proc = (decode_clo(env28787))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont28482;
arg_buffer[3] = a2838528636;
arg_buffer[4] = a2838728640;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28786 = encode_clo(alloc_clo(lam28786_fptr, 0));

void* lam28788_fptr() // lam28788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28789 = arg_buffer[1];
//reading env and args
void* a2838628638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2838528636 = (decode_clo(env28789))[5];
//not do dummy comment
void* foldr = (decode_clo(env28789))[4];
//not do dummy comment
void* kont28482 = (decode_clo(env28789))[3];
//not do dummy comment
void* proc = (decode_clo(env28789))[2];
//not do dummy comment
void* acc = (decode_clo(env28789))[1];

//creating new closure instance
void** clo29461 = alloc_clo(lam28786_fptr, 3);

//setting env list
clo29461[1] = proc;
clo29461[2] = kont28482;
clo29461[3] = a2838528636;
void* f2848328639 = encode_clo(clo29461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2848328639;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2838628638;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28788 = encode_clo(alloc_clo(lam28788_fptr, 0));

void* lam28790_fptr() // lam28790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28791 = arg_buffer[1];
//reading env and args
void* a2838528636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28791))[6];
//not do dummy comment
void* kont28482 = (decode_clo(env28791))[5];
//not do dummy comment
void* foldr = (decode_clo(env28791))[4];
//not do dummy comment
void* lst = (decode_clo(env28791))[3];
//not do dummy comment
void* proc = (decode_clo(env28791))[2];
//not do dummy comment
void* acc = (decode_clo(env28791))[1];

//creating new closure instance
void** clo29463 = alloc_clo(lam28788_fptr, 5);

//setting env list
clo29463[1] = acc;
clo29463[2] = proc;
clo29463[3] = kont28482;
clo29463[4] = foldr;
clo29463[5] = a2838528636;
void* f2848428637 = encode_clo(clo29463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2848428637;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28790 = encode_clo(alloc_clo(lam28790_fptr, 0));

void* lam28792_fptr() // lam28792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28793 = arg_buffer[1];
//reading env and args
void* a2838428634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28793))[7];
//not do dummy comment
void* kont28482 = (decode_clo(env28793))[6];
//not do dummy comment
void* car = (decode_clo(env28793))[5];
//not do dummy comment
void* foldr = (decode_clo(env28793))[4];
//not do dummy comment
void* lst = (decode_clo(env28793))[3];
//not do dummy comment
void* proc = (decode_clo(env28793))[2];
//not do dummy comment
void* acc = (decode_clo(env28793))[1];

//if-clause
bool if_guard29464 = is_true(a2838428634);
if(if_guard29464)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28482);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28482))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29466 = alloc_clo(lam28790_fptr, 6);

//setting env list
clo29466[1] = acc;
clo29466[2] = proc;
clo29466[3] = lst;
clo29466[4] = foldr;
clo29466[5] = kont28482;
clo29466[6] = cdr;
void* f2848528635 = encode_clo(clo29466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2848528635;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28792 = encode_clo(alloc_clo(lam28792_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28794 = arg_buffer[1];
//reading env and args
void* kont28482 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29468 = alloc_clo(lam28792_fptr, 7);

//setting env list
clo29468[1] = acc;
clo29468[2] = proc;
clo29468[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo29468[4] = foldr;
clo29468[5] = car;
clo29468[6] = kont28482;
clo29468[7] = cdr;
void* f2848628633 = encode_clo(clo29468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2848628633;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam28795_fptr() // lam28795 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28796 = arg_buffer[1];
//reading env and args
void* a2839128648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2838928644 = (decode_clo(env28796))[3];
//not do dummy comment
void* kont28487 = (decode_clo(env28796))[2];
//not do dummy comment
void* cons = (decode_clo(env28796))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont28487;
arg_buffer[3] = a2838928644;
arg_buffer[4] = a2839128648;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28795 = encode_clo(alloc_clo(lam28795_fptr, 0));

void* lam28797_fptr() // lam28797 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28798 = arg_buffer[1];
//reading env and args
void* a2839028646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env28798))[5];
//not do dummy comment
void* a2838928644 = (decode_clo(env28798))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28798))[3];
//not do dummy comment
void* kont28487 = (decode_clo(env28798))[2];
//not do dummy comment
void* cons = (decode_clo(env28798))[1];

//creating new closure instance
void** clo29470 = alloc_clo(lam28795_fptr, 3);

//setting env list
clo29470[1] = cons;
clo29470[2] = kont28487;
clo29470[3] = a2838928644;
void* f2848828647 = encode_clo(clo29470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2848828647;
arg_buffer[3] = a2839028646;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28797 = encode_clo(alloc_clo(lam28797_fptr, 0));

void* lam28799_fptr() // lam28799 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28800 = arg_buffer[1];
//reading env and args
void* a2838928644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28800))[6];
//not do dummy comment
void* append = (decode_clo(env28800))[5];
//not do dummy comment
void* lst2 = (decode_clo(env28800))[4];
//not do dummy comment
void* cons = (decode_clo(env28800))[3];
//not do dummy comment
void* lst1 = (decode_clo(env28800))[2];
//not do dummy comment
void* kont28487 = (decode_clo(env28800))[1];

//creating new closure instance
void** clo29472 = alloc_clo(lam28797_fptr, 5);

//setting env list
clo29472[1] = cons;
clo29472[2] = kont28487;
clo29472[3] = lst2;
clo29472[4] = a2838928644;
clo29472[5] = append;
void* f2848928645 = encode_clo(clo29472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2848928645;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28799 = encode_clo(alloc_clo(lam28799_fptr, 0));

void* lam28801_fptr() // lam28801 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28802 = arg_buffer[1];
//reading env and args
void* a2838828642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28802))[7];
//not do dummy comment
void* append = (decode_clo(env28802))[6];
//not do dummy comment
void* lst2 = (decode_clo(env28802))[5];
//not do dummy comment
void* cons = (decode_clo(env28802))[4];
//not do dummy comment
void* lst1 = (decode_clo(env28802))[3];
//not do dummy comment
void* kont28487 = (decode_clo(env28802))[2];
//not do dummy comment
void* car = (decode_clo(env28802))[1];

//if-clause
bool if_guard29473 = is_true(a2838828642);
if(if_guard29473)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28487);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28487))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29475 = alloc_clo(lam28799_fptr, 6);

//setting env list
clo29475[1] = kont28487;
clo29475[2] = lst1;
clo29475[3] = cons;
clo29475[4] = lst2;
clo29475[5] = append;
clo29475[6] = cdr;
void* f2849028643 = encode_clo(clo29475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2849028643;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28801 = encode_clo(alloc_clo(lam28801_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28803 = arg_buffer[1];
//reading env and args
void* kont28487 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29477 = alloc_clo(lam28801_fptr, 7);

//setting env list
clo29477[1] = car;
clo29477[2] = kont28487;
clo29477[3] = lst1;
clo29477[4] = cons;
clo29477[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo29477[6] = append;
clo29477[7] = cdr;
void* f2849128641 = encode_clo(clo29477);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2849128641;
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
void* _28804 = arg_buffer[1];
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

void* kont2849228649 = prim_car(lst);
void* lst28650 = prim_cdr(lst);
void* x2839228651 = apply_prim_hash(lst28650);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2849228649);
arg_buffer[2] = x2839228651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2849228649))[0]);
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
void* _28805 = arg_buffer[1];
//reading env and args
void* kont28494 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2839328652 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28494);
arg_buffer[2] = x2839328652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28494))[0]);
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
void* _28806 = arg_buffer[1];
//reading env and args
void* kont28495 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2839428653 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28495);
arg_buffer[2] = x2839428653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28495))[0]);
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
void* _28807 = arg_buffer[1];
//reading env and args
void* kont28496 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2839528654 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28496);
arg_buffer[2] = x2839528654;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28496))[0]);
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
void* _28808 = arg_buffer[1];
//reading env and args
void* kont28497 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2839628655 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28497);
arg_buffer[2] = x2839628655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28497))[0]);
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
void* _28812 = arg_buffer[1];
//reading env and args
void* kont28498 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar29478 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29478, "100", 10);
void* a2839728656 = encode_mpz(mpzvar29478);
mpz_t* mpzvar29479 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29479, "2", 10);
void* a2839828657 = encode_mpz(mpzvar29479);
mpz_t* mpzvar29480 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29480, "12", 10);
void* a2839928658 = encode_mpz(mpzvar29480);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = kont28498;
arg_buffer[3] = a2839728656;
arg_buffer[4] = a2839828657;
arg_buffer[5] = a2839928658;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam28813_fptr() // lam28813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28814 = arg_buffer[1];
//reading env and args
void* x2840028660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28499 = (decode_clo(env28814))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28499);
arg_buffer[2] = x2840028660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28499))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28813 = encode_clo(alloc_clo(lam28813_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28815 = arg_buffer[1];
//reading env and args
void* kont28499 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo29482 = alloc_clo(lam28813_fptr, 1);

//setting env list
clo29482[1] = kont28499;
void* f2850028659 = encode_clo(clo29482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2850028659;
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

