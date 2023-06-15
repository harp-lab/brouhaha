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
void* _38702 = arg_buffer[1];
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

void* kont3843638537 = prim_car(lst);
void* lst38538 = prim_cdr(lst);
void* x3834538539 = apply_prim__u43(lst38538);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3843638537);
arg_buffer[2] = x3834538539;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3843638537))[0]);
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
void* _38703 = arg_buffer[1];
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

void* kont3843838540 = prim_car(lst);
void* lst38541 = prim_cdr(lst);
void* x3834638542 = apply_prim__u45(lst38541);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3843838540);
arg_buffer[2] = x3834638542;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3843838540))[0]);
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
void* _38704 = arg_buffer[1];
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

void* kont3844038543 = prim_car(lst);
void* lst38544 = prim_cdr(lst);
void* x3834738545 = apply_prim__u42(lst38544);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3844038543);
arg_buffer[2] = x3834738545;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3844038543))[0]);
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
void* _38705 = arg_buffer[1];
//reading env and args
void* kont38442 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3834838546 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38442);
arg_buffer[2] = x3834838546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38442))[0]);
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
void* _38706 = arg_buffer[1];
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

void* kont3844338547 = prim_car(lst);
void* lst38548 = prim_cdr(lst);
void* x3834938549 = apply_prim__u47(lst38548);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3844338547);
arg_buffer[2] = x3834938549;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3844338547))[0]);
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
void* _38707 = arg_buffer[1];
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

void* kont3844538550 = prim_car(lst);
void* lst38551 = prim_cdr(lst);
void* x3835038552 = apply_prim__u61(lst38551);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3844538550);
arg_buffer[2] = x3835038552;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3844538550))[0]);
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
void* _38708 = arg_buffer[1];
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

void* kont3844738553 = prim_car(lst);
void* lst38554 = prim_cdr(lst);
void* x3835138555 = apply_prim__u62(lst38554);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3844738553);
arg_buffer[2] = x3835138555;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3844738553))[0]);
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
void* _38709 = arg_buffer[1];
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

void* kont3844938556 = prim_car(lst);
void* lst38557 = prim_cdr(lst);
void* x3835238558 = apply_prim__u60(lst38557);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3844938556);
arg_buffer[2] = x3835238558;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3844938556))[0]);
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
void* _38710 = arg_buffer[1];
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

void* kont3845138559 = prim_car(lst);
void* lst38560 = prim_cdr(lst);
void* x3835338561 = apply_prim__u60_u61(lst38560);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3845138559);
arg_buffer[2] = x3835338561;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3845138559))[0]);
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
void* _38711 = arg_buffer[1];
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

void* kont3845338562 = prim_car(lst);
void* lst38563 = prim_cdr(lst);
void* x3835438564 = apply_prim__u62_u61(lst38563);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3845338562);
arg_buffer[2] = x3835438564;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3845338562))[0]);
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
void* _38712 = arg_buffer[1];
//reading env and args
void* kont38455 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3835538565 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38455);
arg_buffer[2] = x3835538565;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38455))[0]);
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
void* _38713 = arg_buffer[1];
//reading env and args
void* kont38456 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3835638566 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38456);
arg_buffer[2] = x3835638566;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38456))[0]);
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
void* _38714 = arg_buffer[1];
//reading env and args
void* kont38457 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3835738567 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38457);
arg_buffer[2] = x3835738567;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38457))[0]);
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
void* _38715 = arg_buffer[1];
//reading env and args
void* kont38458 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3835838568 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38458);
arg_buffer[2] = x3835838568;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38458))[0]);
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
void* _38716 = arg_buffer[1];
//reading env and args
void* kont38459 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3835938569 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38459);
arg_buffer[2] = x3835938569;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38459))[0]);
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
void* _38717 = arg_buffer[1];
//reading env and args
void* kont38460 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3836038570 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38460);
arg_buffer[2] = x3836038570;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38460))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam38718_fptr() // lam38718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38719 = arg_buffer[1];
//reading env and args
void* a3836338574 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3836138571 = (decode_clo(env38719))[3];
//not do dummy comment
void* kont38461 = (decode_clo(env38719))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env38719))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont38461;
arg_buffer[3] = a3836138571;
arg_buffer[4] = a3836338574;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38718 = encode_clo(alloc_clo(lam38718_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38722 = arg_buffer[1];
//reading env and args
void* kont38461 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar39702 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39702, "0", 10);
void* a3836138571 = encode_mpz(mpzvar39702);
mpz_t* mpzvar39703 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39703, "2", 10);
void* a3836238572 = encode_mpz(mpzvar39703);

//creating new closure instance
void** clo39705 = alloc_clo(lam38718_fptr, 3);

//setting env list
clo39705[1] = equal_u63;
clo39705[2] = kont38461;
clo39705[3] = a3836138571;
void* f3846238573 = encode_clo(clo39705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3846238573;
arg_buffer[3] = x;
arg_buffer[4] = a3836238572;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam38723_fptr() // lam38723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38724 = arg_buffer[1];
//reading env and args
void* a3836638578 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env38724))[3];
//not do dummy comment
void* kont38463 = (decode_clo(env38724))[2];
//not do dummy comment
void* a3836438575 = (decode_clo(env38724))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont38463;
arg_buffer[3] = a3836438575;
arg_buffer[4] = a3836638578;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38723 = encode_clo(alloc_clo(lam38723_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38727 = arg_buffer[1];
//reading env and args
void* kont38463 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar39706 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39706, "1", 10);
void* a3836438575 = encode_mpz(mpzvar39706);
mpz_t* mpzvar39707 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39707, "2", 10);
void* a3836538576 = encode_mpz(mpzvar39707);

//creating new closure instance
void** clo39709 = alloc_clo(lam38723_fptr, 3);

//setting env list
clo39709[1] = a3836438575;
clo39709[2] = kont38463;
clo39709[3] = equal_u63;
void* f3846438577 = encode_clo(clo39709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3846438577;
arg_buffer[3] = x;
arg_buffer[4] = a3836538576;
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
void* _38728 = arg_buffer[1];
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

void* kont3846538579 = prim_car(x);
void* x38580 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3846538579);
arg_buffer[2] = x38580;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3846538579))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam38731_fptr() // lam38731 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38732 = arg_buffer[1];
//reading env and args
void* a3837238590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38467 = (decode_clo(env38732))[3];
//not do dummy comment
void* x = (decode_clo(env38732))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env38732))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont38467;
arg_buffer[3] = x;
arg_buffer[4] = a3837238590;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38731 = encode_clo(alloc_clo(lam38731_fptr, 0));

void* lam38733_fptr() // lam38733 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38734 = arg_buffer[1];
//reading env and args
void* a3837038587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38734))[5];
//not do dummy comment
void* lst = (decode_clo(env38734))[4];
//not do dummy comment
void* kont38467 = (decode_clo(env38734))[3];
//not do dummy comment
void* x = (decode_clo(env38734))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env38734))[1];

//if-clause
bool if_guard39710 = is_true(a3837038587);
if(if_guard39710)
{
void* x3837138588 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38467);
arg_buffer[2] = x3837138588;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38467))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39712 = alloc_clo(lam38731_fptr, 3);

//setting env list
clo39712[1] = member_u63;
clo39712[2] = x;
clo39712[3] = kont38467;
void* f3846838589 = encode_clo(clo39712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3846838589;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38733 = encode_clo(alloc_clo(lam38733_fptr, 0));

void* lam38735_fptr() // lam38735 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38736 = arg_buffer[1];
//reading env and args
void* a3836938585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38736))[6];
//not do dummy comment
void* lst = (decode_clo(env38736))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env38736))[4];
//not do dummy comment
void* kont38467 = (decode_clo(env38736))[3];
//not do dummy comment
void* x = (decode_clo(env38736))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env38736))[1];

//creating new closure instance
void** clo39714 = alloc_clo(lam38733_fptr, 5);

//setting env list
clo39714[1] = member_u63;
clo39714[2] = x;
clo39714[3] = kont38467;
clo39714[4] = lst;
clo39714[5] = cdr;
void* f3846938586 = encode_clo(clo39714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3846938586;
arg_buffer[3] = a3836938585;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38735 = encode_clo(alloc_clo(lam38735_fptr, 0));

void* lam38737_fptr() // lam38737 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38738 = arg_buffer[1];
//reading env and args
void* a3836738582 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38738))[7];
//not do dummy comment
void* lst = (decode_clo(env38738))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env38738))[5];
//not do dummy comment
void* kont38467 = (decode_clo(env38738))[4];
//not do dummy comment
void* x = (decode_clo(env38738))[3];
//not do dummy comment
void* car = (decode_clo(env38738))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env38738))[1];

//if-clause
bool if_guard39715 = is_true(a3836738582);
if(if_guard39715)
{
void* x3836838583 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38467);
arg_buffer[2] = x3836838583;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38467))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39717 = alloc_clo(lam38735_fptr, 6);

//setting env list
clo39717[1] = member_u63;
clo39717[2] = x;
clo39717[3] = kont38467;
clo39717[4] = equal_u63;
clo39717[5] = lst;
clo39717[6] = cdr;
void* f3847038584 = encode_clo(clo39717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3847038584;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38737 = encode_clo(alloc_clo(lam38737_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38739 = arg_buffer[1];
//reading env and args
void* kont38467 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39719 = alloc_clo(lam38737_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo39719[1] = member_u63;
clo39719[2] = car;
clo39719[3] = x;
clo39719[4] = kont38467;
clo39719[5] = equal_u63;
clo39719[6] = lst;
clo39719[7] = cdr;
void* f3847138581 = encode_clo(clo39719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3847138581;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam38740_fptr() // lam38740 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38741 = arg_buffer[1];
//reading env and args
void* a3837638598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3837538596 = (decode_clo(env38741))[4];
//not do dummy comment
void* fun = (decode_clo(env38741))[3];
//not do dummy comment
void* kont38472 = (decode_clo(env38741))[2];
//not do dummy comment
void* foldl = (decode_clo(env38741))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont38472;
arg_buffer[3] = fun;
arg_buffer[4] = a3837538596;
arg_buffer[5] = a3837638598;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38740 = encode_clo(alloc_clo(lam38740_fptr, 0));

void* lam38742_fptr() // lam38742 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38743 = arg_buffer[1];
//reading env and args
void* a3837538596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38743))[5];
//not do dummy comment
void* lst = (decode_clo(env38743))[4];
//not do dummy comment
void* fun = (decode_clo(env38743))[3];
//not do dummy comment
void* kont38472 = (decode_clo(env38743))[2];
//not do dummy comment
void* foldl = (decode_clo(env38743))[1];

//creating new closure instance
void** clo39721 = alloc_clo(lam38740_fptr, 4);

//setting env list
clo39721[1] = foldl;
clo39721[2] = kont38472;
clo39721[3] = fun;
clo39721[4] = a3837538596;
void* f3847338597 = encode_clo(clo39721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3847338597;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38742 = encode_clo(alloc_clo(lam38742_fptr, 0));

void* lam38744_fptr() // lam38744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38745 = arg_buffer[1];
//reading env and args
void* a3837438594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38745))[6];
//not do dummy comment
void* lst = (decode_clo(env38745))[5];
//not do dummy comment
void* fun = (decode_clo(env38745))[4];
//not do dummy comment
void* acc = (decode_clo(env38745))[3];
//not do dummy comment
void* kont38472 = (decode_clo(env38745))[2];
//not do dummy comment
void* foldl = (decode_clo(env38745))[1];

//creating new closure instance
void** clo39723 = alloc_clo(lam38742_fptr, 5);

//setting env list
clo39723[1] = foldl;
clo39723[2] = kont38472;
clo39723[3] = fun;
clo39723[4] = lst;
clo39723[5] = cdr;
void* f3847438595 = encode_clo(clo39723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3847438595;
arg_buffer[3] = a3837438594;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38744 = encode_clo(alloc_clo(lam38744_fptr, 0));

void* lam38746_fptr() // lam38746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38747 = arg_buffer[1];
//reading env and args
void* a3837338592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38747))[7];
//not do dummy comment
void* lst = (decode_clo(env38747))[6];
//not do dummy comment
void* fun = (decode_clo(env38747))[5];
//not do dummy comment
void* acc = (decode_clo(env38747))[4];
//not do dummy comment
void* car = (decode_clo(env38747))[3];
//not do dummy comment
void* kont38472 = (decode_clo(env38747))[2];
//not do dummy comment
void* foldl = (decode_clo(env38747))[1];

//if-clause
bool if_guard39724 = is_true(a3837338592);
if(if_guard39724)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38472);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38472))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39726 = alloc_clo(lam38744_fptr, 6);

//setting env list
clo39726[1] = foldl;
clo39726[2] = kont38472;
clo39726[3] = acc;
clo39726[4] = fun;
clo39726[5] = lst;
clo39726[6] = cdr;
void* f3847538593 = encode_clo(clo39726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3847538593;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38746 = encode_clo(alloc_clo(lam38746_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38748 = arg_buffer[1];
//reading env and args
void* kont38472 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo39728 = alloc_clo(lam38746_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo39728[1] = foldl;
clo39728[2] = kont38472;
clo39728[3] = car;
clo39728[4] = acc;
clo39728[5] = fun;
clo39728[6] = lst;
clo39728[7] = cdr;
void* f3847638591 = encode_clo(clo39728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3847638591;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam38749_fptr() // lam38749 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38750 = arg_buffer[1];
//reading env and args
void* a3838038606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3837838602 = (decode_clo(env38750))[3];
//not do dummy comment
void* kont38477 = (decode_clo(env38750))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38750))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont38477;
arg_buffer[3] = a3837838602;
arg_buffer[4] = a3838038606;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38749 = encode_clo(alloc_clo(lam38749_fptr, 0));

void* lam38751_fptr() // lam38751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38752 = arg_buffer[1];
//reading env and args
void* a3837938604 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3837838602 = (decode_clo(env38752))[5];
//not do dummy comment
void* kont38477 = (decode_clo(env38752))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38752))[3];
//not do dummy comment
void* lst2 = (decode_clo(env38752))[2];
//not do dummy comment
void* cons = (decode_clo(env38752))[1];

//creating new closure instance
void** clo39730 = alloc_clo(lam38749_fptr, 3);

//setting env list
clo39730[1] = reverse_u45helper;
clo39730[2] = kont38477;
clo39730[3] = a3837838602;
void* f3847838605 = encode_clo(clo39730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3847838605;
arg_buffer[3] = a3837938604;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38751 = encode_clo(alloc_clo(lam38751_fptr, 0));

void* lam38753_fptr() // lam38753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38754 = arg_buffer[1];
//reading env and args
void* a3837838602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38477 = (decode_clo(env38754))[6];
//not do dummy comment
void* lst = (decode_clo(env38754))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38754))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38754))[3];
//not do dummy comment
void* car = (decode_clo(env38754))[2];
//not do dummy comment
void* cons = (decode_clo(env38754))[1];

//creating new closure instance
void** clo39732 = alloc_clo(lam38751_fptr, 5);

//setting env list
clo39732[1] = cons;
clo39732[2] = lst2;
clo39732[3] = reverse_u45helper;
clo39732[4] = kont38477;
clo39732[5] = a3837838602;
void* f3847938603 = encode_clo(clo39732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3847938603;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38753 = encode_clo(alloc_clo(lam38753_fptr, 0));

void* lam38755_fptr() // lam38755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38756 = arg_buffer[1];
//reading env and args
void* a3837738600 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38756))[7];
//not do dummy comment
void* kont38477 = (decode_clo(env38756))[6];
//not do dummy comment
void* lst = (decode_clo(env38756))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38756))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38756))[3];
//not do dummy comment
void* car = (decode_clo(env38756))[2];
//not do dummy comment
void* cons = (decode_clo(env38756))[1];

//if-clause
bool if_guard39733 = is_true(a3837738600);
if(if_guard39733)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38477);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38477))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39735 = alloc_clo(lam38753_fptr, 6);

//setting env list
clo39735[1] = cons;
clo39735[2] = car;
clo39735[3] = lst2;
clo39735[4] = reverse_u45helper;
clo39735[5] = lst;
clo39735[6] = kont38477;
void* f3848038601 = encode_clo(clo39735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3848038601;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38755 = encode_clo(alloc_clo(lam38755_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38757 = arg_buffer[1];
//reading env and args
void* kont38477 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39737 = alloc_clo(lam38755_fptr, 7);

//setting env list
clo39737[1] = cons;
clo39737[2] = car;
clo39737[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo39737[4] = reverse_u45helper;
clo39737[5] = lst;
clo39737[6] = kont38477;
clo39737[7] = cdr;
void* f3848138599 = encode_clo(clo39737);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3848138599;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam38758_fptr() // lam38758 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38759 = arg_buffer[1];
//reading env and args
void* a3838138608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38759))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38759))[2];
//not do dummy comment
void* kont38482 = (decode_clo(env38759))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont38482;
arg_buffer[3] = lst;
arg_buffer[4] = a3838138608;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38758 = encode_clo(alloc_clo(lam38758_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38760 = arg_buffer[1];
//reading env and args
void* kont38482 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo39739 = alloc_clo(lam38758_fptr, 3);

//setting env list
clo39739[1] = kont38482;
clo39739[2] = reverse_u45helper;
clo39739[3] = lst;
void* f3848338607 = encode_clo(clo39739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3848338607;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam38761_fptr() // lam38761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38762 = arg_buffer[1];
//reading env and args
void* x3838438613 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38484 = (decode_clo(env38762))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38484);
arg_buffer[2] = x3838438613;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38484))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38761 = encode_clo(alloc_clo(lam38761_fptr, 0));

void* lam38763_fptr() // lam38763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38764 = arg_buffer[1];
//reading env and args
void* a3838938622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3838738618 = (decode_clo(env38764))[4];
//not do dummy comment
void* kont38484 = (decode_clo(env38764))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env38764))[2];
//not do dummy comment
void* a3838538615 = (decode_clo(env38764))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont38484;
arg_buffer[3] = a3838538615;
arg_buffer[4] = a3838738618;
arg_buffer[5] = a3838938622;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38763 = encode_clo(alloc_clo(lam38763_fptr, 0));

void* lam38765_fptr() // lam38765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38766 = arg_buffer[1];
//reading env and args
void* a3838838620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3838738618 = (decode_clo(env38766))[6];
//not do dummy comment
void* kont38484 = (decode_clo(env38766))[5];
//not do dummy comment
void* a3838538615 = (decode_clo(env38766))[4];
//not do dummy comment
void* cons = (decode_clo(env38766))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env38766))[2];
//not do dummy comment
void* lst2 = (decode_clo(env38766))[1];

//creating new closure instance
void** clo39741 = alloc_clo(lam38763_fptr, 4);

//setting env list
clo39741[1] = a3838538615;
clo39741[2] = take_u45helper;
clo39741[3] = kont38484;
clo39741[4] = a3838738618;
void* f3848638621 = encode_clo(clo39741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3848638621;
arg_buffer[3] = a3838838620;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38765 = encode_clo(alloc_clo(lam38765_fptr, 0));

void* lam38767_fptr() // lam38767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38768 = arg_buffer[1];
//reading env and args
void* a3838738618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38768))[7];
//not do dummy comment
void* kont38484 = (decode_clo(env38768))[6];
//not do dummy comment
void* cons = (decode_clo(env38768))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env38768))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38768))[3];
//not do dummy comment
void* a3838538615 = (decode_clo(env38768))[2];
//not do dummy comment
void* car = (decode_clo(env38768))[1];

//creating new closure instance
void** clo39743 = alloc_clo(lam38765_fptr, 6);

//setting env list
clo39743[1] = lst2;
clo39743[2] = take_u45helper;
clo39743[3] = cons;
clo39743[4] = a3838538615;
clo39743[5] = kont38484;
clo39743[6] = a3838738618;
void* f3848738619 = encode_clo(clo39743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3848738619;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38767 = encode_clo(alloc_clo(lam38767_fptr, 0));

void* lam38770_fptr() // lam38770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38771 = arg_buffer[1];
//reading env and args
void* a3838538615 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38771))[8];
//not do dummy comment
void* kont38484 = (decode_clo(env38771))[7];
//not do dummy comment
void* cons = (decode_clo(env38771))[6];
//not do dummy comment
void* _u45 = (decode_clo(env38771))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env38771))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38771))[3];
//not do dummy comment
void* n = (decode_clo(env38771))[2];
//not do dummy comment
void* car = (decode_clo(env38771))[1];
mpz_t* mpzvar39744 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39744, "1", 10);
void* a3838638616 = encode_mpz(mpzvar39744);

//creating new closure instance
void** clo39746 = alloc_clo(lam38767_fptr, 7);

//setting env list
clo39746[1] = car;
clo39746[2] = a3838538615;
clo39746[3] = lst2;
clo39746[4] = take_u45helper;
clo39746[5] = cons;
clo39746[6] = kont38484;
clo39746[7] = lst;
void* f3848838617 = encode_clo(clo39746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3848838617;
arg_buffer[3] = n;
arg_buffer[4] = a3838638616;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38770 = encode_clo(alloc_clo(lam38770_fptr, 0));

void* lam38772_fptr() // lam38772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38773 = arg_buffer[1];
//reading env and args
void* a3838338611 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38773))[10];
//not do dummy comment
void* lst = (decode_clo(env38773))[9];
//not do dummy comment
void* reverse = (decode_clo(env38773))[8];
//not do dummy comment
void* kont38484 = (decode_clo(env38773))[7];
//not do dummy comment
void* cons = (decode_clo(env38773))[6];
//not do dummy comment
void* _u45 = (decode_clo(env38773))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env38773))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38773))[3];
//not do dummy comment
void* n = (decode_clo(env38773))[2];
//not do dummy comment
void* car = (decode_clo(env38773))[1];

//if-clause
bool if_guard39747 = is_true(a3838338611);
if(if_guard39747)
{

//creating new closure instance
void** clo39749 = alloc_clo(lam38761_fptr, 1);

//setting env list
clo39749[1] = kont38484;
void* f3848538612 = encode_clo(clo39749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3848538612;
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
void** clo39751 = alloc_clo(lam38770_fptr, 8);

//setting env list
clo39751[1] = car;
clo39751[2] = n;
clo39751[3] = lst2;
clo39751[4] = take_u45helper;
clo39751[5] = _u45;
clo39751[6] = cons;
clo39751[7] = kont38484;
clo39751[8] = lst;
void* f3848938614 = encode_clo(clo39751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3848938614;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38772 = encode_clo(alloc_clo(lam38772_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38775 = arg_buffer[1];
//reading env and args
void* kont38484 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar39752 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39752, "0", 10);
void* a3838238609 = encode_mpz(mpzvar39752);

//creating new closure instance
void** clo39754 = alloc_clo(lam38772_fptr, 10);

//setting env list
clo39754[1] = car;
clo39754[2] = n;
clo39754[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo39754[4] = take_u45helper;
clo39754[5] = _u45;
clo39754[6] = cons;
clo39754[7] = kont38484;
clo39754[8] = reverse;
clo39754[9] = lst;
clo39754[10] = cdr;
void* f3849038610 = encode_clo(clo39754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3849038610;
arg_buffer[3] = n;
arg_buffer[4] = a3838238609;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam38776_fptr() // lam38776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38777 = arg_buffer[1];
//reading env and args
void* a3839038624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38491 = (decode_clo(env38777))[4];
//not do dummy comment
void* lst = (decode_clo(env38777))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env38777))[2];
//not do dummy comment
void* n = (decode_clo(env38777))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont38491;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3839038624;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38776 = encode_clo(alloc_clo(lam38776_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38778 = arg_buffer[1];
//reading env and args
void* kont38491 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39756 = alloc_clo(lam38776_fptr, 4);

//setting env list
clo39756[1] = n;
clo39756[2] = take_u45helper;
clo39756[3] = lst;
clo39756[4] = kont38491;
void* f3849238623 = encode_clo(clo39756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3849238623;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam38780_fptr() // lam38780 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38781 = arg_buffer[1];
//reading env and args
void* a3839538632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38493 = (decode_clo(env38781))[3];
//not do dummy comment
void* _u43 = (decode_clo(env38781))[2];
//not do dummy comment
void* a3839338628 = (decode_clo(env38781))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont38493;
arg_buffer[3] = a3839338628;
arg_buffer[4] = a3839538632;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38780 = encode_clo(alloc_clo(lam38780_fptr, 0));

void* lam38782_fptr() // lam38782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38783 = arg_buffer[1];
//reading env and args
void* a3839438630 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38493 = (decode_clo(env38783))[4];
//not do dummy comment
void* length = (decode_clo(env38783))[3];
//not do dummy comment
void* _u43 = (decode_clo(env38783))[2];
//not do dummy comment
void* a3839338628 = (decode_clo(env38783))[1];

//creating new closure instance
void** clo39758 = alloc_clo(lam38780_fptr, 3);

//setting env list
clo39758[1] = a3839338628;
clo39758[2] = _u43;
clo39758[3] = kont38493;
void* f3849438631 = encode_clo(clo39758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3849438631;
arg_buffer[3] = a3839438630;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38782 = encode_clo(alloc_clo(lam38782_fptr, 0));

void* lam38785_fptr() // lam38785 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38786 = arg_buffer[1];
//reading env and args
void* a3839138626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38786))[5];
//not do dummy comment
void* kont38493 = (decode_clo(env38786))[4];
//not do dummy comment
void* lst = (decode_clo(env38786))[3];
//not do dummy comment
void* length = (decode_clo(env38786))[2];
//not do dummy comment
void* _u43 = (decode_clo(env38786))[1];

//if-clause
bool if_guard39759 = is_true(a3839138626);
if(if_guard39759)
{
mpz_t* mpzvar39760 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39760, "0", 10);
void* x3839238627 = encode_mpz(mpzvar39760);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38493);
arg_buffer[2] = x3839238627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38493))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar39761 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39761, "1", 10);
void* a3839338628 = encode_mpz(mpzvar39761);

//creating new closure instance
void** clo39763 = alloc_clo(lam38782_fptr, 4);

//setting env list
clo39763[1] = a3839338628;
clo39763[2] = _u43;
clo39763[3] = length;
clo39763[4] = kont38493;
void* f3849538629 = encode_clo(clo39763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3849538629;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38785 = encode_clo(alloc_clo(lam38785_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38787 = arg_buffer[1];
//reading env and args
void* kont38493 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo39765 = alloc_clo(lam38785_fptr, 5);

//setting env list
clo39765[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo39765[2] = length;
clo39765[3] = lst;
clo39765[4] = kont38493;
clo39765[5] = cdr;
void* f3849638625 = encode_clo(clo39765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3849638625;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam38788_fptr() // lam38788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38789 = arg_buffer[1];
//reading env and args
void* x3839738636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38497 = (decode_clo(env38789))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38497);
arg_buffer[2] = x3839738636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38497))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38788 = encode_clo(alloc_clo(lam38788_fptr, 0));

void* lam38790_fptr() // lam38790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38791 = arg_buffer[1];
//reading env and args
void* a3840138644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3839938640 = (decode_clo(env38791))[3];
//not do dummy comment
void* kont38497 = (decode_clo(env38791))[2];
//not do dummy comment
void* cons = (decode_clo(env38791))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont38497;
arg_buffer[3] = a3839938640;
arg_buffer[4] = a3840138644;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38790 = encode_clo(alloc_clo(lam38790_fptr, 0));

void* lam38792_fptr() // lam38792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38793 = arg_buffer[1];
//reading env and args
void* a3840038642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env38793))[5];
//not do dummy comment
void* a3839938640 = (decode_clo(env38793))[4];
//not do dummy comment
void* kont38497 = (decode_clo(env38793))[3];
//not do dummy comment
void* proc = (decode_clo(env38793))[2];
//not do dummy comment
void* cons = (decode_clo(env38793))[1];

//creating new closure instance
void** clo39767 = alloc_clo(lam38790_fptr, 3);

//setting env list
clo39767[1] = cons;
clo39767[2] = kont38497;
clo39767[3] = a3839938640;
void* f3849938643 = encode_clo(clo39767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3849938643;
arg_buffer[3] = proc;
arg_buffer[4] = a3840038642;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38792 = encode_clo(alloc_clo(lam38792_fptr, 0));

void* lam38794_fptr() // lam38794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38795 = arg_buffer[1];
//reading env and args
void* a3839938640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38795))[6];
//not do dummy comment
void* lst = (decode_clo(env38795))[5];
//not do dummy comment
void* map = (decode_clo(env38795))[4];
//not do dummy comment
void* kont38497 = (decode_clo(env38795))[3];
//not do dummy comment
void* proc = (decode_clo(env38795))[2];
//not do dummy comment
void* cons = (decode_clo(env38795))[1];

//creating new closure instance
void** clo39769 = alloc_clo(lam38792_fptr, 5);

//setting env list
clo39769[1] = cons;
clo39769[2] = proc;
clo39769[3] = kont38497;
clo39769[4] = a3839938640;
clo39769[5] = map;
void* f3850038641 = encode_clo(clo39769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3850038641;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38794 = encode_clo(alloc_clo(lam38794_fptr, 0));

void* lam38796_fptr() // lam38796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38797 = arg_buffer[1];
//reading env and args
void* a3839838638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38797))[6];
//not do dummy comment
void* lst = (decode_clo(env38797))[5];
//not do dummy comment
void* map = (decode_clo(env38797))[4];
//not do dummy comment
void* kont38497 = (decode_clo(env38797))[3];
//not do dummy comment
void* proc = (decode_clo(env38797))[2];
//not do dummy comment
void* cons = (decode_clo(env38797))[1];

//creating new closure instance
void** clo39771 = alloc_clo(lam38794_fptr, 6);

//setting env list
clo39771[1] = cons;
clo39771[2] = proc;
clo39771[3] = kont38497;
clo39771[4] = map;
clo39771[5] = lst;
clo39771[6] = cdr;
void* f3850138639 = encode_clo(clo39771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3850138639;
arg_buffer[3] = a3839838638;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38796 = encode_clo(alloc_clo(lam38796_fptr, 0));

void* lam38798_fptr() // lam38798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38799 = arg_buffer[1];
//reading env and args
void* a3839638634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38799))[8];
//not do dummy comment
void* map = (decode_clo(env38799))[7];
//not do dummy comment
void* kont38497 = (decode_clo(env38799))[6];
//not do dummy comment
void* proc = (decode_clo(env38799))[5];
//not do dummy comment
void* car = (decode_clo(env38799))[4];
//not do dummy comment
void* cons = (decode_clo(env38799))[3];
//not do dummy comment
void* list = (decode_clo(env38799))[2];
//not do dummy comment
void* cdr = (decode_clo(env38799))[1];

//if-clause
bool if_guard39772 = is_true(a3839638634);
if(if_guard39772)
{

//creating new closure instance
void** clo39774 = alloc_clo(lam38788_fptr, 1);

//setting env list
clo39774[1] = kont38497;
void* f3849838635 = encode_clo(clo39774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3849838635;
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
void** clo39776 = alloc_clo(lam38796_fptr, 6);

//setting env list
clo39776[1] = cons;
clo39776[2] = proc;
clo39776[3] = kont38497;
clo39776[4] = map;
clo39776[5] = lst;
clo39776[6] = cdr;
void* f3850238637 = encode_clo(clo39776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3850238637;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38798 = encode_clo(alloc_clo(lam38798_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38800 = arg_buffer[1];
//reading env and args
void* kont38497 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39778 = alloc_clo(lam38798_fptr, 8);

//setting env list
clo39778[1] = cdr;
clo39778[2] = list;
clo39778[3] = cons;
clo39778[4] = car;
clo39778[5] = proc;
clo39778[6] = kont38497;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo39778[7] = map;
clo39778[8] = lst;
void* f3850338633 = encode_clo(clo39778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3850338633;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam38801_fptr() // lam38801 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38802 = arg_buffer[1];
//reading env and args
void* x3840338648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38504 = (decode_clo(env38802))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38504);
arg_buffer[2] = x3840338648;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38504))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38801 = encode_clo(alloc_clo(lam38801_fptr, 0));

void* lam38803_fptr() // lam38803 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38804 = arg_buffer[1];
//reading env and args
void* a3840838658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3840638654 = (decode_clo(env38804))[3];
//not do dummy comment
void* cons = (decode_clo(env38804))[2];
//not do dummy comment
void* kont38504 = (decode_clo(env38804))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont38504;
arg_buffer[3] = a3840638654;
arg_buffer[4] = a3840838658;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38803 = encode_clo(alloc_clo(lam38803_fptr, 0));

void* lam38805_fptr() // lam38805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38806 = arg_buffer[1];
//reading env and args
void* a3840738656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3840638654 = (decode_clo(env38806))[5];
//not do dummy comment
void* op = (decode_clo(env38806))[4];
//not do dummy comment
void* filter = (decode_clo(env38806))[3];
//not do dummy comment
void* cons = (decode_clo(env38806))[2];
//not do dummy comment
void* kont38504 = (decode_clo(env38806))[1];

//creating new closure instance
void** clo39780 = alloc_clo(lam38803_fptr, 3);

//setting env list
clo39780[1] = kont38504;
clo39780[2] = cons;
clo39780[3] = a3840638654;
void* f3850638657 = encode_clo(clo39780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3850638657;
arg_buffer[3] = op;
arg_buffer[4] = a3840738656;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38805 = encode_clo(alloc_clo(lam38805_fptr, 0));

void* lam38807_fptr() // lam38807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38808 = arg_buffer[1];
//reading env and args
void* a3840638654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38808))[6];
//not do dummy comment
void* lst = (decode_clo(env38808))[5];
//not do dummy comment
void* op = (decode_clo(env38808))[4];
//not do dummy comment
void* filter = (decode_clo(env38808))[3];
//not do dummy comment
void* cons = (decode_clo(env38808))[2];
//not do dummy comment
void* kont38504 = (decode_clo(env38808))[1];

//creating new closure instance
void** clo39782 = alloc_clo(lam38805_fptr, 5);

//setting env list
clo39782[1] = kont38504;
clo39782[2] = cons;
clo39782[3] = filter;
clo39782[4] = op;
clo39782[5] = a3840638654;
void* f3850738655 = encode_clo(clo39782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3850738655;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38807 = encode_clo(alloc_clo(lam38807_fptr, 0));

void* lam38809_fptr() // lam38809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38810 = arg_buffer[1];
//reading env and args
void* a3840938660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env38810))[3];
//not do dummy comment
void* filter = (decode_clo(env38810))[2];
//not do dummy comment
void* kont38504 = (decode_clo(env38810))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont38504;
arg_buffer[3] = op;
arg_buffer[4] = a3840938660;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38809 = encode_clo(alloc_clo(lam38809_fptr, 0));

void* lam38811_fptr() // lam38811 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38812 = arg_buffer[1];
//reading env and args
void* a3840538652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38812))[7];
//not do dummy comment
void* lst = (decode_clo(env38812))[6];
//not do dummy comment
void* op = (decode_clo(env38812))[5];
//not do dummy comment
void* filter = (decode_clo(env38812))[4];
//not do dummy comment
void* car = (decode_clo(env38812))[3];
//not do dummy comment
void* cons = (decode_clo(env38812))[2];
//not do dummy comment
void* kont38504 = (decode_clo(env38812))[1];

//if-clause
bool if_guard39783 = is_true(a3840538652);
if(if_guard39783)
{

//creating new closure instance
void** clo39785 = alloc_clo(lam38807_fptr, 6);

//setting env list
clo39785[1] = kont38504;
clo39785[2] = cons;
clo39785[3] = filter;
clo39785[4] = op;
clo39785[5] = lst;
clo39785[6] = cdr;
void* f3850838653 = encode_clo(clo39785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3850838653;
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
void** clo39787 = alloc_clo(lam38809_fptr, 3);

//setting env list
clo39787[1] = kont38504;
clo39787[2] = filter;
clo39787[3] = op;
void* f3850938659 = encode_clo(clo39787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3850938659;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38811 = encode_clo(alloc_clo(lam38811_fptr, 0));

void* lam38813_fptr() // lam38813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38814 = arg_buffer[1];
//reading env and args
void* a3840438650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38814))[7];
//not do dummy comment
void* lst = (decode_clo(env38814))[6];
//not do dummy comment
void* op = (decode_clo(env38814))[5];
//not do dummy comment
void* filter = (decode_clo(env38814))[4];
//not do dummy comment
void* car = (decode_clo(env38814))[3];
//not do dummy comment
void* cons = (decode_clo(env38814))[2];
//not do dummy comment
void* kont38504 = (decode_clo(env38814))[1];

//creating new closure instance
void** clo39789 = alloc_clo(lam38811_fptr, 7);

//setting env list
clo39789[1] = kont38504;
clo39789[2] = cons;
clo39789[3] = car;
clo39789[4] = filter;
clo39789[5] = op;
clo39789[6] = lst;
clo39789[7] = cdr;
void* f3851038651 = encode_clo(clo39789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3851038651;
arg_buffer[3] = a3840438650;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38813 = encode_clo(alloc_clo(lam38813_fptr, 0));

void* lam38815_fptr() // lam38815 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38816 = arg_buffer[1];
//reading env and args
void* a3840238646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38816))[8];
//not do dummy comment
void* op = (decode_clo(env38816))[7];
//not do dummy comment
void* list = (decode_clo(env38816))[6];
//not do dummy comment
void* cdr = (decode_clo(env38816))[5];
//not do dummy comment
void* filter = (decode_clo(env38816))[4];
//not do dummy comment
void* car = (decode_clo(env38816))[3];
//not do dummy comment
void* cons = (decode_clo(env38816))[2];
//not do dummy comment
void* kont38504 = (decode_clo(env38816))[1];

//if-clause
bool if_guard39790 = is_true(a3840238646);
if(if_guard39790)
{

//creating new closure instance
void** clo39792 = alloc_clo(lam38801_fptr, 1);

//setting env list
clo39792[1] = kont38504;
void* f3850538647 = encode_clo(clo39792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3850538647;
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
void** clo39794 = alloc_clo(lam38813_fptr, 7);

//setting env list
clo39794[1] = kont38504;
clo39794[2] = cons;
clo39794[3] = car;
clo39794[4] = filter;
clo39794[5] = op;
clo39794[6] = lst;
clo39794[7] = cdr;
void* f3851138649 = encode_clo(clo39794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3851138649;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38815 = encode_clo(alloc_clo(lam38815_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38817 = arg_buffer[1];
//reading env and args
void* kont38504 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39796 = alloc_clo(lam38815_fptr, 8);

//setting env list
clo39796[1] = kont38504;
clo39796[2] = cons;
clo39796[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo39796[4] = filter;
clo39796[5] = cdr;
clo39796[6] = list;
clo39796[7] = op;
clo39796[8] = lst;
void* f3851238645 = encode_clo(clo39796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3851238645;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam38818_fptr() // lam38818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38819 = arg_buffer[1];
//reading env and args
void* a3841438668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env38819))[3];
//not do dummy comment
void* kont38513 = (decode_clo(env38819))[2];
//not do dummy comment
void* a3841238665 = (decode_clo(env38819))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont38513;
arg_buffer[3] = a3841238665;
arg_buffer[4] = a3841438668;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38818 = encode_clo(alloc_clo(lam38818_fptr, 0));

void* lam38821_fptr() // lam38821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38822 = arg_buffer[1];
//reading env and args
void* a3841238665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env38822))[4];
//not do dummy comment
void* kont38513 = (decode_clo(env38822))[3];
//not do dummy comment
void* n = (decode_clo(env38822))[2];
//not do dummy comment
void* _u45 = (decode_clo(env38822))[1];
mpz_t* mpzvar39797 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39797, "1", 10);
void* a3841338666 = encode_mpz(mpzvar39797);

//creating new closure instance
void** clo39799 = alloc_clo(lam38818_fptr, 3);

//setting env list
clo39799[1] = a3841238665;
clo39799[2] = kont38513;
clo39799[3] = drop;
void* f3851438667 = encode_clo(clo39799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3851438667;
arg_buffer[3] = n;
arg_buffer[4] = a3841338666;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38821 = encode_clo(alloc_clo(lam38821_fptr, 0));

void* lam38823_fptr() // lam38823 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38824 = arg_buffer[1];
//reading env and args
void* a3841138663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38824))[6];
//not do dummy comment
void* kont38513 = (decode_clo(env38824))[5];
//not do dummy comment
void* n = (decode_clo(env38824))[4];
//not do dummy comment
void* _u45 = (decode_clo(env38824))[3];
//not do dummy comment
void* lst = (decode_clo(env38824))[2];
//not do dummy comment
void* drop = (decode_clo(env38824))[1];

//if-clause
bool if_guard39800 = is_true(a3841138663);
if(if_guard39800)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38513);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38513))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39802 = alloc_clo(lam38821_fptr, 4);

//setting env list
clo39802[1] = _u45;
clo39802[2] = n;
clo39802[3] = kont38513;
clo39802[4] = drop;
void* f3851538664 = encode_clo(clo39802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3851538664;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38823 = encode_clo(alloc_clo(lam38823_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38826 = arg_buffer[1];
//reading env and args
void* kont38513 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar39803 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39803, "0", 10);
void* a3841038661 = encode_mpz(mpzvar39803);

//creating new closure instance
void** clo39805 = alloc_clo(lam38823_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo39805[1] = drop;
clo39805[2] = lst;
clo39805[3] = _u45;
clo39805[4] = n;
clo39805[5] = kont38513;
clo39805[6] = cdr;
void* f3851638662 = encode_clo(clo39805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3851638662;
arg_buffer[3] = n;
arg_buffer[4] = a3841038661;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam38827_fptr() // lam38827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38828 = arg_buffer[1];
//reading env and args
void* a3841838676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3841638672 = (decode_clo(env38828))[3];
//not do dummy comment
void* proc = (decode_clo(env38828))[2];
//not do dummy comment
void* kont38517 = (decode_clo(env38828))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont38517;
arg_buffer[3] = a3841638672;
arg_buffer[4] = a3841838676;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38827 = encode_clo(alloc_clo(lam38827_fptr, 0));

void* lam38829_fptr() // lam38829 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38830 = arg_buffer[1];
//reading env and args
void* a3841738674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env38830))[5];
//not do dummy comment
void* a3841638672 = (decode_clo(env38830))[4];
//not do dummy comment
void* proc = (decode_clo(env38830))[3];
//not do dummy comment
void* acc = (decode_clo(env38830))[2];
//not do dummy comment
void* kont38517 = (decode_clo(env38830))[1];

//creating new closure instance
void** clo39807 = alloc_clo(lam38827_fptr, 3);

//setting env list
clo39807[1] = kont38517;
clo39807[2] = proc;
clo39807[3] = a3841638672;
void* f3851838675 = encode_clo(clo39807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3851838675;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3841738674;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38829 = encode_clo(alloc_clo(lam38829_fptr, 0));

void* lam38831_fptr() // lam38831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38832 = arg_buffer[1];
//reading env and args
void* a3841638672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38832))[6];
//not do dummy comment
void* foldr = (decode_clo(env38832))[5];
//not do dummy comment
void* lst = (decode_clo(env38832))[4];
//not do dummy comment
void* proc = (decode_clo(env38832))[3];
//not do dummy comment
void* acc = (decode_clo(env38832))[2];
//not do dummy comment
void* kont38517 = (decode_clo(env38832))[1];

//creating new closure instance
void** clo39809 = alloc_clo(lam38829_fptr, 5);

//setting env list
clo39809[1] = kont38517;
clo39809[2] = acc;
clo39809[3] = proc;
clo39809[4] = a3841638672;
clo39809[5] = foldr;
void* f3851938673 = encode_clo(clo39809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3851938673;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38831 = encode_clo(alloc_clo(lam38831_fptr, 0));

void* lam38833_fptr() // lam38833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38834 = arg_buffer[1];
//reading env and args
void* a3841538670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38834))[7];
//not do dummy comment
void* car = (decode_clo(env38834))[6];
//not do dummy comment
void* foldr = (decode_clo(env38834))[5];
//not do dummy comment
void* lst = (decode_clo(env38834))[4];
//not do dummy comment
void* proc = (decode_clo(env38834))[3];
//not do dummy comment
void* acc = (decode_clo(env38834))[2];
//not do dummy comment
void* kont38517 = (decode_clo(env38834))[1];

//if-clause
bool if_guard39810 = is_true(a3841538670);
if(if_guard39810)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38517);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38517))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39812 = alloc_clo(lam38831_fptr, 6);

//setting env list
clo39812[1] = kont38517;
clo39812[2] = acc;
clo39812[3] = proc;
clo39812[4] = lst;
clo39812[5] = foldr;
clo39812[6] = cdr;
void* f3852038671 = encode_clo(clo39812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3852038671;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38833 = encode_clo(alloc_clo(lam38833_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38835 = arg_buffer[1];
//reading env and args
void* kont38517 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo39814 = alloc_clo(lam38833_fptr, 7);

//setting env list
clo39814[1] = kont38517;
clo39814[2] = acc;
clo39814[3] = proc;
clo39814[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo39814[5] = foldr;
clo39814[6] = car;
clo39814[7] = cdr;
void* f3852138669 = encode_clo(clo39814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3852138669;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam38836_fptr() // lam38836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38837 = arg_buffer[1];
//reading env and args
void* a3842238684 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38522 = (decode_clo(env38837))[3];
//not do dummy comment
void* cons = (decode_clo(env38837))[2];
//not do dummy comment
void* a3842038680 = (decode_clo(env38837))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont38522;
arg_buffer[3] = a3842038680;
arg_buffer[4] = a3842238684;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38836 = encode_clo(alloc_clo(lam38836_fptr, 0));

void* lam38838_fptr() // lam38838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38839 = arg_buffer[1];
//reading env and args
void* a3842138682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38522 = (decode_clo(env38839))[5];
//not do dummy comment
void* append = (decode_clo(env38839))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38839))[3];
//not do dummy comment
void* cons = (decode_clo(env38839))[2];
//not do dummy comment
void* a3842038680 = (decode_clo(env38839))[1];

//creating new closure instance
void** clo39816 = alloc_clo(lam38836_fptr, 3);

//setting env list
clo39816[1] = a3842038680;
clo39816[2] = cons;
clo39816[3] = kont38522;
void* f3852338683 = encode_clo(clo39816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3852338683;
arg_buffer[3] = a3842138682;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38838 = encode_clo(alloc_clo(lam38838_fptr, 0));

void* lam38840_fptr() // lam38840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38841 = arg_buffer[1];
//reading env and args
void* a3842038680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env38841))[6];
//not do dummy comment
void* lst2 = (decode_clo(env38841))[5];
//not do dummy comment
void* lst1 = (decode_clo(env38841))[4];
//not do dummy comment
void* cons = (decode_clo(env38841))[3];
//not do dummy comment
void* kont38522 = (decode_clo(env38841))[2];
//not do dummy comment
void* cdr = (decode_clo(env38841))[1];

//creating new closure instance
void** clo39818 = alloc_clo(lam38838_fptr, 5);

//setting env list
clo39818[1] = a3842038680;
clo39818[2] = cons;
clo39818[3] = lst2;
clo39818[4] = append;
clo39818[5] = kont38522;
void* f3852438681 = encode_clo(clo39818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3852438681;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38840 = encode_clo(alloc_clo(lam38840_fptr, 0));

void* lam38842_fptr() // lam38842 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38843 = arg_buffer[1];
//reading env and args
void* a3841938678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env38843))[7];
//not do dummy comment
void* lst2 = (decode_clo(env38843))[6];
//not do dummy comment
void* cons = (decode_clo(env38843))[5];
//not do dummy comment
void* kont38522 = (decode_clo(env38843))[4];
//not do dummy comment
void* cdr = (decode_clo(env38843))[3];
//not do dummy comment
void* lst1 = (decode_clo(env38843))[2];
//not do dummy comment
void* car = (decode_clo(env38843))[1];

//if-clause
bool if_guard39819 = is_true(a3841938678);
if(if_guard39819)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38522);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38522))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39821 = alloc_clo(lam38840_fptr, 6);

//setting env list
clo39821[1] = cdr;
clo39821[2] = kont38522;
clo39821[3] = cons;
clo39821[4] = lst1;
clo39821[5] = lst2;
clo39821[6] = append;
void* f3852538679 = encode_clo(clo39821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3852538679;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38842 = encode_clo(alloc_clo(lam38842_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38844 = arg_buffer[1];
//reading env and args
void* kont38522 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39823 = alloc_clo(lam38842_fptr, 7);

//setting env list
clo39823[1] = car;
clo39823[2] = lst1;
clo39823[3] = cdr;
clo39823[4] = kont38522;
clo39823[5] = cons;
clo39823[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo39823[7] = append;
void* f3852638677 = encode_clo(clo39823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3852638677;
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
void* _38845 = arg_buffer[1];
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

void* kont3852738685 = prim_car(lst);
void* lst38686 = prim_cdr(lst);
void* x3842338687 = apply_prim_hash(lst38686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3852738685);
arg_buffer[2] = x3842338687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3852738685))[0]);
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
void* _38846 = arg_buffer[1];
//reading env and args
void* kont38529 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3842438688 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38529);
arg_buffer[2] = x3842438688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38529))[0]);
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
void* _38847 = arg_buffer[1];
//reading env and args
void* kont38530 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3842538689 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38530);
arg_buffer[2] = x3842538689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38530))[0]);
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
void* _38848 = arg_buffer[1];
//reading env and args
void* kont38531 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3842638690 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38531);
arg_buffer[2] = x3842638690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38531))[0]);
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
void* _38849 = arg_buffer[1];
//reading env and args
void* kont38532 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3842738691 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38532);
arg_buffer[2] = x3842738691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38532))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam38850_fptr() // lam38850 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38851 = arg_buffer[1];
//reading env and args
void* a3843438699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45count = (decode_clo(env38851))[2];
//not do dummy comment
void* kont38533 = (decode_clo(env38851))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45count);
arg_buffer[2] = kont38533;
arg_buffer[3] = a3843438699;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38850 = encode_clo(alloc_clo(lam38850_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38858 = arg_buffer[1];
//reading env and args
void* kont38533 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar39824 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39824, "100", 10);
void* a3842838692 = encode_mpz(mpzvar39824);
mpz_t* mpzvar39825 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39825, "80", 10);
void* a3842938693 = encode_mpz(mpzvar39825);
mpz_t* mpzvar39826 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39826, "10", 10);
void* a3843038694 = encode_mpz(mpzvar39826);
mpz_t* mpzvar39827 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39827, "2", 10);
void* a3843138695 = encode_mpz(mpzvar39827);
mpz_t* mpzvar39828 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39828, "25", 10);
void* a3843238696 = encode_mpz(mpzvar39828);
mpz_t* mpzvar39829 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39829, "30", 10);
void* a3843338697 = encode_mpz(mpzvar39829);

//creating new closure instance
void** clo39831 = alloc_clo(lam38850_fptr, 2);

//setting env list
clo39831[1] = kont38533;
clo39831[2] = hash_u45count;
void* f3853438698 = encode_clo(clo39831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f3853438698;
arg_buffer[3] = a3842838692;
arg_buffer[4] = a3842938693;
arg_buffer[5] = a3843038694;
arg_buffer[6] = a3843138695;
arg_buffer[7] = a3843238696;
arg_buffer[8] = a3843338697;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam38859_fptr() // lam38859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38860 = arg_buffer[1];
//reading env and args
void* x3843538701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont38535 = (decode_clo(env38860))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont38535);
arg_buffer[2] = x3843538701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont38535))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38859 = encode_clo(alloc_clo(lam38859_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38861 = arg_buffer[1];
//reading env and args
void* kont38535 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo39833 = alloc_clo(lam38859_fptr, 1);

//setting env list
clo39833[1] = kont38535;
void* f3853638700 = encode_clo(clo39833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f3853638700;
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

