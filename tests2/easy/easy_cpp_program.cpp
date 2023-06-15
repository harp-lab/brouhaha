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
void* _10701 = arg_buffer[1];
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

void* kont1043710538 = prim_car(lst);
void* lst10539 = prim_cdr(lst);
void* x1034810540 = apply_prim__u43(lst10539);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1043710538);
arg_buffer[2] = x1034810540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1043710538))[0]);
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
void* _10702 = arg_buffer[1];
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

void* kont1043910541 = prim_car(lst);
void* lst10542 = prim_cdr(lst);
void* x1034910543 = apply_prim__u45(lst10542);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1043910541);
arg_buffer[2] = x1034910543;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1043910541))[0]);
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
void* _10703 = arg_buffer[1];
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

void* kont1044110544 = prim_car(lst);
void* lst10545 = prim_cdr(lst);
void* x1035010546 = apply_prim__u42(lst10545);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1044110544);
arg_buffer[2] = x1035010546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1044110544))[0]);
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
void* _10704 = arg_buffer[1];
//reading env and args
void* kont10443 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1035110547 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10443);
arg_buffer[2] = x1035110547;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10443))[0]);
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
void* _10705 = arg_buffer[1];
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

void* kont1044410548 = prim_car(lst);
void* lst10549 = prim_cdr(lst);
void* x1035210550 = apply_prim__u47(lst10549);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1044410548);
arg_buffer[2] = x1035210550;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1044410548))[0]);
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
void* _10706 = arg_buffer[1];
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

void* kont1044610551 = prim_car(lst);
void* lst10552 = prim_cdr(lst);
void* x1035310553 = apply_prim__u61(lst10552);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1044610551);
arg_buffer[2] = x1035310553;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1044610551))[0]);
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
void* _10707 = arg_buffer[1];
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

void* kont1044810554 = prim_car(lst);
void* lst10555 = prim_cdr(lst);
void* x1035410556 = apply_prim__u62(lst10555);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1044810554);
arg_buffer[2] = x1035410556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1044810554))[0]);
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
void* _10708 = arg_buffer[1];
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

void* kont1045010557 = prim_car(lst);
void* lst10558 = prim_cdr(lst);
void* x1035510559 = apply_prim__u60(lst10558);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1045010557);
arg_buffer[2] = x1035510559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1045010557))[0]);
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
void* _10709 = arg_buffer[1];
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

void* kont1045210560 = prim_car(lst);
void* lst10561 = prim_cdr(lst);
void* x1035610562 = apply_prim__u60_u61(lst10561);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1045210560);
arg_buffer[2] = x1035610562;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1045210560))[0]);
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
void* _10710 = arg_buffer[1];
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

void* kont1045410563 = prim_car(lst);
void* lst10564 = prim_cdr(lst);
void* x1035710565 = apply_prim__u62_u61(lst10564);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1045410563);
arg_buffer[2] = x1035710565;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1045410563))[0]);
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
void* _10711 = arg_buffer[1];
//reading env and args
void* kont10456 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1035810566 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10456);
arg_buffer[2] = x1035810566;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10456))[0]);
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
void* _10712 = arg_buffer[1];
//reading env and args
void* kont10457 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1035910567 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10457);
arg_buffer[2] = x1035910567;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10457))[0]);
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
void* _10713 = arg_buffer[1];
//reading env and args
void* kont10458 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1036010568 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10458);
arg_buffer[2] = x1036010568;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10458))[0]);
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
void* _10714 = arg_buffer[1];
//reading env and args
void* kont10459 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1036110569 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10459);
arg_buffer[2] = x1036110569;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10459))[0]);
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
void* _10715 = arg_buffer[1];
//reading env and args
void* kont10460 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1036210570 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10460);
arg_buffer[2] = x1036210570;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10460))[0]);
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
void* _10716 = arg_buffer[1];
//reading env and args
void* kont10461 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1036310571 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10461);
arg_buffer[2] = x1036310571;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10461))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam10717_fptr() // lam10717 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10718 = arg_buffer[1];
//reading env and args
void* a1036610575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env10718))[3];
//not do dummy comment
void* a1036410572 = (decode_clo(env10718))[2];
//not do dummy comment
void* kont10462 = (decode_clo(env10718))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10462;
arg_buffer[3] = a1036410572;
arg_buffer[4] = a1036610575;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10717 = encode_clo(alloc_clo(lam10717_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10721 = arg_buffer[1];
//reading env and args
void* kont10462 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar11867 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11867, "0", 10);
void* a1036410572 = encode_mpz(mpzvar11867);
mpz_t* mpzvar11868 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11868, "2", 10);
void* a1036510573 = encode_mpz(mpzvar11868);

//creating new closure instance
void** clo11870 = alloc_clo(lam10717_fptr, 3);

//setting env list
clo11870[1] = kont10462;
clo11870[2] = a1036410572;
clo11870[3] = equal_u63;
void* f1046310574 = encode_clo(clo11870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1046310574;
arg_buffer[3] = x;
arg_buffer[4] = a1036510573;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam10722_fptr() // lam10722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10723 = arg_buffer[1];
//reading env and args
void* a1036910579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env10723))[3];
//not do dummy comment
void* a1036710576 = (decode_clo(env10723))[2];
//not do dummy comment
void* kont10464 = (decode_clo(env10723))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10464;
arg_buffer[3] = a1036710576;
arg_buffer[4] = a1036910579;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10722 = encode_clo(alloc_clo(lam10722_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10726 = arg_buffer[1];
//reading env and args
void* kont10464 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar11871 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11871, "1", 10);
void* a1036710576 = encode_mpz(mpzvar11871);
mpz_t* mpzvar11872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11872, "2", 10);
void* a1036810577 = encode_mpz(mpzvar11872);

//creating new closure instance
void** clo11874 = alloc_clo(lam10722_fptr, 3);

//setting env list
clo11874[1] = kont10464;
clo11874[2] = a1036710576;
clo11874[3] = equal_u63;
void* f1046510578 = encode_clo(clo11874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1046510578;
arg_buffer[3] = x;
arg_buffer[4] = a1036810577;
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
void* _10727 = arg_buffer[1];
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

void* kont1046610580 = prim_car(x);
void* x10581 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1046610580);
arg_buffer[2] = x10581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1046610580))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam10730_fptr() // lam10730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10731 = arg_buffer[1];
//reading env and args
void* a1037510591 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10468 = (decode_clo(env10731))[3];
//not do dummy comment
void* x = (decode_clo(env10731))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10731))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont10468;
arg_buffer[3] = x;
arg_buffer[4] = a1037510591;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10730 = encode_clo(alloc_clo(lam10730_fptr, 0));

void* lam10732_fptr() // lam10732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10733 = arg_buffer[1];
//reading env and args
void* a1037310588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10733))[5];
//not do dummy comment
void* kont10468 = (decode_clo(env10733))[4];
//not do dummy comment
void* lst = (decode_clo(env10733))[3];
//not do dummy comment
void* x = (decode_clo(env10733))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10733))[1];

//if-clause
bool if_guard11875 = is_true(a1037310588);
if(if_guard11875)
{
void* x1037410589 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10468);
arg_buffer[2] = x1037410589;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10468))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11877 = alloc_clo(lam10730_fptr, 3);

//setting env list
clo11877[1] = member_u63;
clo11877[2] = x;
clo11877[3] = kont10468;
void* f1046910590 = encode_clo(clo11877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1046910590;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10732 = encode_clo(alloc_clo(lam10732_fptr, 0));

void* lam10734_fptr() // lam10734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10735 = arg_buffer[1];
//reading env and args
void* a1037210586 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10735))[6];
//not do dummy comment
void* kont10468 = (decode_clo(env10735))[5];
//not do dummy comment
void* lst = (decode_clo(env10735))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env10735))[3];
//not do dummy comment
void* x = (decode_clo(env10735))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10735))[1];

//creating new closure instance
void** clo11879 = alloc_clo(lam10732_fptr, 5);

//setting env list
clo11879[1] = member_u63;
clo11879[2] = x;
clo11879[3] = lst;
clo11879[4] = kont10468;
clo11879[5] = cdr;
void* f1047010587 = encode_clo(clo11879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1047010587;
arg_buffer[3] = a1037210586;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10734 = encode_clo(alloc_clo(lam10734_fptr, 0));

void* lam10736_fptr() // lam10736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10737 = arg_buffer[1];
//reading env and args
void* a1037010583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10737))[7];
//not do dummy comment
void* kont10468 = (decode_clo(env10737))[6];
//not do dummy comment
void* lst = (decode_clo(env10737))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env10737))[4];
//not do dummy comment
void* x = (decode_clo(env10737))[3];
//not do dummy comment
void* car = (decode_clo(env10737))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10737))[1];

//if-clause
bool if_guard11880 = is_true(a1037010583);
if(if_guard11880)
{
void* x1037110584 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10468);
arg_buffer[2] = x1037110584;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10468))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11882 = alloc_clo(lam10734_fptr, 6);

//setting env list
clo11882[1] = member_u63;
clo11882[2] = x;
clo11882[3] = equal_u63;
clo11882[4] = lst;
clo11882[5] = kont10468;
clo11882[6] = cdr;
void* f1047110585 = encode_clo(clo11882);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1047110585;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10736 = encode_clo(alloc_clo(lam10736_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10738 = arg_buffer[1];
//reading env and args
void* kont10468 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11884 = alloc_clo(lam10736_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo11884[1] = member_u63;
clo11884[2] = car;
clo11884[3] = x;
clo11884[4] = equal_u63;
clo11884[5] = lst;
clo11884[6] = kont10468;
clo11884[7] = cdr;
void* f1047210582 = encode_clo(clo11884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1047210582;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam10739_fptr() // lam10739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10740 = arg_buffer[1];
//reading env and args
void* a1037910599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1037810597 = (decode_clo(env10740))[4];
//not do dummy comment
void* kont10473 = (decode_clo(env10740))[3];
//not do dummy comment
void* fun = (decode_clo(env10740))[2];
//not do dummy comment
void* foldl = (decode_clo(env10740))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont10473;
arg_buffer[3] = fun;
arg_buffer[4] = a1037810597;
arg_buffer[5] = a1037910599;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10739 = encode_clo(alloc_clo(lam10739_fptr, 0));

void* lam10741_fptr() // lam10741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10742 = arg_buffer[1];
//reading env and args
void* a1037810597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10742))[5];
//not do dummy comment
void* lst = (decode_clo(env10742))[4];
//not do dummy comment
void* kont10473 = (decode_clo(env10742))[3];
//not do dummy comment
void* fun = (decode_clo(env10742))[2];
//not do dummy comment
void* foldl = (decode_clo(env10742))[1];

//creating new closure instance
void** clo11886 = alloc_clo(lam10739_fptr, 4);

//setting env list
clo11886[1] = foldl;
clo11886[2] = fun;
clo11886[3] = kont10473;
clo11886[4] = a1037810597;
void* f1047410598 = encode_clo(clo11886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1047410598;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10741 = encode_clo(alloc_clo(lam10741_fptr, 0));

void* lam10743_fptr() // lam10743 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10744 = arg_buffer[1];
//reading env and args
void* a1037710595 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10744))[6];
//not do dummy comment
void* lst = (decode_clo(env10744))[5];
//not do dummy comment
void* kont10473 = (decode_clo(env10744))[4];
//not do dummy comment
void* fun = (decode_clo(env10744))[3];
//not do dummy comment
void* acc = (decode_clo(env10744))[2];
//not do dummy comment
void* foldl = (decode_clo(env10744))[1];

//creating new closure instance
void** clo11888 = alloc_clo(lam10741_fptr, 5);

//setting env list
clo11888[1] = foldl;
clo11888[2] = fun;
clo11888[3] = kont10473;
clo11888[4] = lst;
clo11888[5] = cdr;
void* f1047510596 = encode_clo(clo11888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1047510596;
arg_buffer[3] = a1037710595;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10743 = encode_clo(alloc_clo(lam10743_fptr, 0));

void* lam10745_fptr() // lam10745 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10746 = arg_buffer[1];
//reading env and args
void* a1037610593 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10746))[7];
//not do dummy comment
void* lst = (decode_clo(env10746))[6];
//not do dummy comment
void* kont10473 = (decode_clo(env10746))[5];
//not do dummy comment
void* fun = (decode_clo(env10746))[4];
//not do dummy comment
void* acc = (decode_clo(env10746))[3];
//not do dummy comment
void* car = (decode_clo(env10746))[2];
//not do dummy comment
void* foldl = (decode_clo(env10746))[1];

//if-clause
bool if_guard11889 = is_true(a1037610593);
if(if_guard11889)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10473);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10473))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11891 = alloc_clo(lam10743_fptr, 6);

//setting env list
clo11891[1] = foldl;
clo11891[2] = acc;
clo11891[3] = fun;
clo11891[4] = kont10473;
clo11891[5] = lst;
clo11891[6] = cdr;
void* f1047610594 = encode_clo(clo11891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1047610594;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10745 = encode_clo(alloc_clo(lam10745_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10747 = arg_buffer[1];
//reading env and args
void* kont10473 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo11893 = alloc_clo(lam10745_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo11893[1] = foldl;
clo11893[2] = car;
clo11893[3] = acc;
clo11893[4] = fun;
clo11893[5] = kont10473;
clo11893[6] = lst;
clo11893[7] = cdr;
void* f1047710592 = encode_clo(clo11893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1047710592;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam10748_fptr() // lam10748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10749 = arg_buffer[1];
//reading env and args
void* a1038310607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10749))[3];
//not do dummy comment
void* a1038110603 = (decode_clo(env10749))[2];
//not do dummy comment
void* kont10478 = (decode_clo(env10749))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10478;
arg_buffer[3] = a1038110603;
arg_buffer[4] = a1038310607;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10748 = encode_clo(alloc_clo(lam10748_fptr, 0));

void* lam10750_fptr() // lam10750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10751 = arg_buffer[1];
//reading env and args
void* a1038210605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10751))[5];
//not do dummy comment
void* a1038110603 = (decode_clo(env10751))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10751))[3];
//not do dummy comment
void* kont10478 = (decode_clo(env10751))[2];
//not do dummy comment
void* cons = (decode_clo(env10751))[1];

//creating new closure instance
void** clo11895 = alloc_clo(lam10748_fptr, 3);

//setting env list
clo11895[1] = kont10478;
clo11895[2] = a1038110603;
clo11895[3] = reverse_u45helper;
void* f1047910606 = encode_clo(clo11895);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1047910606;
arg_buffer[3] = a1038210605;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10750 = encode_clo(alloc_clo(lam10750_fptr, 0));

void* lam10752_fptr() // lam10752 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10753 = arg_buffer[1];
//reading env and args
void* a1038110603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env10753))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10753))[5];
//not do dummy comment
void* lst2 = (decode_clo(env10753))[4];
//not do dummy comment
void* cons = (decode_clo(env10753))[3];
//not do dummy comment
void* kont10478 = (decode_clo(env10753))[2];
//not do dummy comment
void* car = (decode_clo(env10753))[1];

//creating new closure instance
void** clo11897 = alloc_clo(lam10750_fptr, 5);

//setting env list
clo11897[1] = cons;
clo11897[2] = kont10478;
clo11897[3] = lst2;
clo11897[4] = a1038110603;
clo11897[5] = reverse_u45helper;
void* f1048010604 = encode_clo(clo11897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1048010604;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10752 = encode_clo(alloc_clo(lam10752_fptr, 0));

void* lam10754_fptr() // lam10754 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10755 = arg_buffer[1];
//reading env and args
void* a1038010601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10755))[7];
//not do dummy comment
void* lst = (decode_clo(env10755))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10755))[5];
//not do dummy comment
void* lst2 = (decode_clo(env10755))[4];
//not do dummy comment
void* cons = (decode_clo(env10755))[3];
//not do dummy comment
void* kont10478 = (decode_clo(env10755))[2];
//not do dummy comment
void* car = (decode_clo(env10755))[1];

//if-clause
bool if_guard11898 = is_true(a1038010601);
if(if_guard11898)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10478);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10478))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11900 = alloc_clo(lam10752_fptr, 6);

//setting env list
clo11900[1] = car;
clo11900[2] = kont10478;
clo11900[3] = cons;
clo11900[4] = lst2;
clo11900[5] = reverse_u45helper;
clo11900[6] = lst;
void* f1048110602 = encode_clo(clo11900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1048110602;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10754 = encode_clo(alloc_clo(lam10754_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10756 = arg_buffer[1];
//reading env and args
void* kont10478 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11902 = alloc_clo(lam10754_fptr, 7);

//setting env list
clo11902[1] = car;
clo11902[2] = kont10478;
clo11902[3] = cons;
clo11902[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo11902[5] = reverse_u45helper;
clo11902[6] = lst;
clo11902[7] = cdr;
void* f1048210600 = encode_clo(clo11902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1048210600;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam10757_fptr() // lam10757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10758 = arg_buffer[1];
//reading env and args
void* a1038410609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10483 = (decode_clo(env10758))[3];
//not do dummy comment
void* lst = (decode_clo(env10758))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10758))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10483;
arg_buffer[3] = lst;
arg_buffer[4] = a1038410609;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10757 = encode_clo(alloc_clo(lam10757_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10759 = arg_buffer[1];
//reading env and args
void* kont10483 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo11904 = alloc_clo(lam10757_fptr, 3);

//setting env list
clo11904[1] = reverse_u45helper;
clo11904[2] = lst;
clo11904[3] = kont10483;
void* f1048410608 = encode_clo(clo11904);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1048410608;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam10760_fptr() // lam10760 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10761 = arg_buffer[1];
//reading env and args
void* x1038710614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10485 = (decode_clo(env10761))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10485);
arg_buffer[2] = x1038710614;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10485))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10760 = encode_clo(alloc_clo(lam10760_fptr, 0));

void* lam10762_fptr() // lam10762 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10763 = arg_buffer[1];
//reading env and args
void* a1039210623 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10485 = (decode_clo(env10763))[4];
//not do dummy comment
void* a1038810616 = (decode_clo(env10763))[3];
//not do dummy comment
void* a1039010619 = (decode_clo(env10763))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env10763))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10485;
arg_buffer[3] = a1038810616;
arg_buffer[4] = a1039010619;
arg_buffer[5] = a1039210623;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10762 = encode_clo(alloc_clo(lam10762_fptr, 0));

void* lam10764_fptr() // lam10764 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10765 = arg_buffer[1];
//reading env and args
void* a1039110621 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10485 = (decode_clo(env10765))[6];
//not do dummy comment
void* a1038810616 = (decode_clo(env10765))[5];
//not do dummy comment
void* a1039010619 = (decode_clo(env10765))[4];
//not do dummy comment
void* cons = (decode_clo(env10765))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env10765))[2];
//not do dummy comment
void* lst2 = (decode_clo(env10765))[1];

//creating new closure instance
void** clo11906 = alloc_clo(lam10762_fptr, 4);

//setting env list
clo11906[1] = take_u45helper;
clo11906[2] = a1039010619;
clo11906[3] = a1038810616;
clo11906[4] = kont10485;
void* f1048710622 = encode_clo(clo11906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1048710622;
arg_buffer[3] = a1039110621;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10764 = encode_clo(alloc_clo(lam10764_fptr, 0));

void* lam10766_fptr() // lam10766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10767 = arg_buffer[1];
//reading env and args
void* a1039010619 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1038810616 = (decode_clo(env10767))[7];
//not do dummy comment
void* car = (decode_clo(env10767))[6];
//not do dummy comment
void* cons = (decode_clo(env10767))[5];
//not do dummy comment
void* lst = (decode_clo(env10767))[4];
//not do dummy comment
void* kont10485 = (decode_clo(env10767))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env10767))[2];
//not do dummy comment
void* lst2 = (decode_clo(env10767))[1];

//creating new closure instance
void** clo11908 = alloc_clo(lam10764_fptr, 6);

//setting env list
clo11908[1] = lst2;
clo11908[2] = take_u45helper;
clo11908[3] = cons;
clo11908[4] = a1039010619;
clo11908[5] = a1038810616;
clo11908[6] = kont10485;
void* f1048810620 = encode_clo(clo11908);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1048810620;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10766 = encode_clo(alloc_clo(lam10766_fptr, 0));

void* lam10769_fptr() // lam10769 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10770 = arg_buffer[1];
//reading env and args
void* a1038810616 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env10770))[8];
//not do dummy comment
void* _u45 = (decode_clo(env10770))[7];
//not do dummy comment
void* lst = (decode_clo(env10770))[6];
//not do dummy comment
void* kont10485 = (decode_clo(env10770))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env10770))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10770))[3];
//not do dummy comment
void* n = (decode_clo(env10770))[2];
//not do dummy comment
void* car = (decode_clo(env10770))[1];
mpz_t* mpzvar11909 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11909, "1", 10);
void* a1038910617 = encode_mpz(mpzvar11909);

//creating new closure instance
void** clo11911 = alloc_clo(lam10766_fptr, 7);

//setting env list
clo11911[1] = lst2;
clo11911[2] = take_u45helper;
clo11911[3] = kont10485;
clo11911[4] = lst;
clo11911[5] = cons;
clo11911[6] = car;
clo11911[7] = a1038810616;
void* f1048910618 = encode_clo(clo11911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1048910618;
arg_buffer[3] = n;
arg_buffer[4] = a1038910617;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10769 = encode_clo(alloc_clo(lam10769_fptr, 0));

void* lam10771_fptr() // lam10771 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10772 = arg_buffer[1];
//reading env and args
void* a1038610612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10772))[10];
//not do dummy comment
void* reverse = (decode_clo(env10772))[9];
//not do dummy comment
void* cons = (decode_clo(env10772))[8];
//not do dummy comment
void* _u45 = (decode_clo(env10772))[7];
//not do dummy comment
void* lst = (decode_clo(env10772))[6];
//not do dummy comment
void* kont10485 = (decode_clo(env10772))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env10772))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10772))[3];
//not do dummy comment
void* n = (decode_clo(env10772))[2];
//not do dummy comment
void* car = (decode_clo(env10772))[1];

//if-clause
bool if_guard11912 = is_true(a1038610612);
if(if_guard11912)
{

//creating new closure instance
void** clo11914 = alloc_clo(lam10760_fptr, 1);

//setting env list
clo11914[1] = kont10485;
void* f1048610613 = encode_clo(clo11914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1048610613;
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
void** clo11916 = alloc_clo(lam10769_fptr, 8);

//setting env list
clo11916[1] = car;
clo11916[2] = n;
clo11916[3] = lst2;
clo11916[4] = take_u45helper;
clo11916[5] = kont10485;
clo11916[6] = lst;
clo11916[7] = _u45;
clo11916[8] = cons;
void* f1049010615 = encode_clo(clo11916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1049010615;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10771 = encode_clo(alloc_clo(lam10771_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10774 = arg_buffer[1];
//reading env and args
void* kont10485 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar11917 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11917, "0", 10);
void* a1038510610 = encode_mpz(mpzvar11917);

//creating new closure instance
void** clo11919 = alloc_clo(lam10771_fptr, 10);

//setting env list
clo11919[1] = car;
clo11919[2] = n;
clo11919[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo11919[4] = take_u45helper;
clo11919[5] = kont10485;
clo11919[6] = lst;
clo11919[7] = _u45;
clo11919[8] = cons;
clo11919[9] = reverse;
clo11919[10] = cdr;
void* f1049110611 = encode_clo(clo11919);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1049110611;
arg_buffer[3] = n;
arg_buffer[4] = a1038510610;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam10775_fptr() // lam10775 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10776 = arg_buffer[1];
//reading env and args
void* a1039310625 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env10776))[4];
//not do dummy comment
void* kont10492 = (decode_clo(env10776))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env10776))[2];
//not do dummy comment
void* n = (decode_clo(env10776))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10492;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1039310625;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10775 = encode_clo(alloc_clo(lam10775_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10777 = arg_buffer[1];
//reading env and args
void* kont10492 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11921 = alloc_clo(lam10775_fptr, 4);

//setting env list
clo11921[1] = n;
clo11921[2] = take_u45helper;
clo11921[3] = kont10492;
clo11921[4] = lst;
void* f1049310624 = encode_clo(clo11921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1049310624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam10779_fptr() // lam10779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10780 = arg_buffer[1];
//reading env and args
void* a1039810633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1039610629 = (decode_clo(env10780))[3];
//not do dummy comment
void* _u43 = (decode_clo(env10780))[2];
//not do dummy comment
void* kont10494 = (decode_clo(env10780))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont10494;
arg_buffer[3] = a1039610629;
arg_buffer[4] = a1039810633;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10779 = encode_clo(alloc_clo(lam10779_fptr, 0));

void* lam10781_fptr() // lam10781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10782 = arg_buffer[1];
//reading env and args
void* a1039710631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1039610629 = (decode_clo(env10782))[4];
//not do dummy comment
void* length = (decode_clo(env10782))[3];
//not do dummy comment
void* _u43 = (decode_clo(env10782))[2];
//not do dummy comment
void* kont10494 = (decode_clo(env10782))[1];

//creating new closure instance
void** clo11923 = alloc_clo(lam10779_fptr, 3);

//setting env list
clo11923[1] = kont10494;
clo11923[2] = _u43;
clo11923[3] = a1039610629;
void* f1049510632 = encode_clo(clo11923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1049510632;
arg_buffer[3] = a1039710631;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10781 = encode_clo(alloc_clo(lam10781_fptr, 0));

void* lam10784_fptr() // lam10784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10785 = arg_buffer[1];
//reading env and args
void* a1039410627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10785))[5];
//not do dummy comment
void* lst = (decode_clo(env10785))[4];
//not do dummy comment
void* length = (decode_clo(env10785))[3];
//not do dummy comment
void* _u43 = (decode_clo(env10785))[2];
//not do dummy comment
void* kont10494 = (decode_clo(env10785))[1];

//if-clause
bool if_guard11924 = is_true(a1039410627);
if(if_guard11924)
{
mpz_t* mpzvar11925 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11925, "0", 10);
void* x1039510628 = encode_mpz(mpzvar11925);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10494);
arg_buffer[2] = x1039510628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10494))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar11926 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11926, "1", 10);
void* a1039610629 = encode_mpz(mpzvar11926);

//creating new closure instance
void** clo11928 = alloc_clo(lam10781_fptr, 4);

//setting env list
clo11928[1] = kont10494;
clo11928[2] = _u43;
clo11928[3] = length;
clo11928[4] = a1039610629;
void* f1049610630 = encode_clo(clo11928);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1049610630;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10784 = encode_clo(alloc_clo(lam10784_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10786 = arg_buffer[1];
//reading env and args
void* kont10494 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo11930 = alloc_clo(lam10784_fptr, 5);

//setting env list
clo11930[1] = kont10494;
clo11930[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo11930[3] = length;
clo11930[4] = lst;
clo11930[5] = cdr;
void* f1049710626 = encode_clo(clo11930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1049710626;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam10787_fptr() // lam10787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10788 = arg_buffer[1];
//reading env and args
void* x1040010637 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10498 = (decode_clo(env10788))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10498);
arg_buffer[2] = x1040010637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10498))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10787 = encode_clo(alloc_clo(lam10787_fptr, 0));

void* lam10789_fptr() // lam10789 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10790 = arg_buffer[1];
//reading env and args
void* a1040410645 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1040210641 = (decode_clo(env10790))[3];
//not do dummy comment
void* kont10498 = (decode_clo(env10790))[2];
//not do dummy comment
void* cons = (decode_clo(env10790))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10498;
arg_buffer[3] = a1040210641;
arg_buffer[4] = a1040410645;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10789 = encode_clo(alloc_clo(lam10789_fptr, 0));

void* lam10791_fptr() // lam10791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10792 = arg_buffer[1];
//reading env and args
void* a1040310643 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1040210641 = (decode_clo(env10792))[5];
//not do dummy comment
void* kont10498 = (decode_clo(env10792))[4];
//not do dummy comment
void* map = (decode_clo(env10792))[3];
//not do dummy comment
void* proc = (decode_clo(env10792))[2];
//not do dummy comment
void* cons = (decode_clo(env10792))[1];

//creating new closure instance
void** clo11932 = alloc_clo(lam10789_fptr, 3);

//setting env list
clo11932[1] = cons;
clo11932[2] = kont10498;
clo11932[3] = a1040210641;
void* f1050010644 = encode_clo(clo11932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1050010644;
arg_buffer[3] = proc;
arg_buffer[4] = a1040310643;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10791 = encode_clo(alloc_clo(lam10791_fptr, 0));

void* lam10793_fptr() // lam10793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10794 = arg_buffer[1];
//reading env and args
void* a1040210641 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10794))[6];
//not do dummy comment
void* kont10498 = (decode_clo(env10794))[5];
//not do dummy comment
void* lst = (decode_clo(env10794))[4];
//not do dummy comment
void* map = (decode_clo(env10794))[3];
//not do dummy comment
void* proc = (decode_clo(env10794))[2];
//not do dummy comment
void* cons = (decode_clo(env10794))[1];

//creating new closure instance
void** clo11934 = alloc_clo(lam10791_fptr, 5);

//setting env list
clo11934[1] = cons;
clo11934[2] = proc;
clo11934[3] = map;
clo11934[4] = kont10498;
clo11934[5] = a1040210641;
void* f1050110642 = encode_clo(clo11934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1050110642;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10793 = encode_clo(alloc_clo(lam10793_fptr, 0));

void* lam10795_fptr() // lam10795 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10796 = arg_buffer[1];
//reading env and args
void* a1040110639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10796))[6];
//not do dummy comment
void* kont10498 = (decode_clo(env10796))[5];
//not do dummy comment
void* lst = (decode_clo(env10796))[4];
//not do dummy comment
void* map = (decode_clo(env10796))[3];
//not do dummy comment
void* proc = (decode_clo(env10796))[2];
//not do dummy comment
void* cons = (decode_clo(env10796))[1];

//creating new closure instance
void** clo11936 = alloc_clo(lam10793_fptr, 6);

//setting env list
clo11936[1] = cons;
clo11936[2] = proc;
clo11936[3] = map;
clo11936[4] = lst;
clo11936[5] = kont10498;
clo11936[6] = cdr;
void* f1050210640 = encode_clo(clo11936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1050210640;
arg_buffer[3] = a1040110639;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10795 = encode_clo(alloc_clo(lam10795_fptr, 0));

void* lam10797_fptr() // lam10797 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10798 = arg_buffer[1];
//reading env and args
void* a1039910635 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10498 = (decode_clo(env10798))[8];
//not do dummy comment
void* lst = (decode_clo(env10798))[7];
//not do dummy comment
void* map = (decode_clo(env10798))[6];
//not do dummy comment
void* proc = (decode_clo(env10798))[5];
//not do dummy comment
void* car = (decode_clo(env10798))[4];
//not do dummy comment
void* cons = (decode_clo(env10798))[3];
//not do dummy comment
void* list = (decode_clo(env10798))[2];
//not do dummy comment
void* cdr = (decode_clo(env10798))[1];

//if-clause
bool if_guard11937 = is_true(a1039910635);
if(if_guard11937)
{

//creating new closure instance
void** clo11939 = alloc_clo(lam10787_fptr, 1);

//setting env list
clo11939[1] = kont10498;
void* f1049910636 = encode_clo(clo11939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1049910636;
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
void** clo11941 = alloc_clo(lam10795_fptr, 6);

//setting env list
clo11941[1] = cons;
clo11941[2] = proc;
clo11941[3] = map;
clo11941[4] = lst;
clo11941[5] = kont10498;
clo11941[6] = cdr;
void* f1050310638 = encode_clo(clo11941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1050310638;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10797 = encode_clo(alloc_clo(lam10797_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10799 = arg_buffer[1];
//reading env and args
void* kont10498 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11943 = alloc_clo(lam10797_fptr, 8);

//setting env list
clo11943[1] = cdr;
clo11943[2] = list;
clo11943[3] = cons;
clo11943[4] = car;
clo11943[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo11943[6] = map;
clo11943[7] = lst;
clo11943[8] = kont10498;
void* f1050410634 = encode_clo(clo11943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1050410634;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam10800_fptr() // lam10800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10801 = arg_buffer[1];
//reading env and args
void* x1040610649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10505 = (decode_clo(env10801))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10505);
arg_buffer[2] = x1040610649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10505))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10800 = encode_clo(alloc_clo(lam10800_fptr, 0));

void* lam10802_fptr() // lam10802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10803 = arg_buffer[1];
//reading env and args
void* a1041110659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10505 = (decode_clo(env10803))[3];
//not do dummy comment
void* cons = (decode_clo(env10803))[2];
//not do dummy comment
void* a1040910655 = (decode_clo(env10803))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10505;
arg_buffer[3] = a1040910655;
arg_buffer[4] = a1041110659;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10802 = encode_clo(alloc_clo(lam10802_fptr, 0));

void* lam10804_fptr() // lam10804 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10805 = arg_buffer[1];
//reading env and args
void* a1041010657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env10805))[5];
//not do dummy comment
void* kont10505 = (decode_clo(env10805))[4];
//not do dummy comment
void* filter = (decode_clo(env10805))[3];
//not do dummy comment
void* cons = (decode_clo(env10805))[2];
//not do dummy comment
void* a1040910655 = (decode_clo(env10805))[1];

//creating new closure instance
void** clo11945 = alloc_clo(lam10802_fptr, 3);

//setting env list
clo11945[1] = a1040910655;
clo11945[2] = cons;
clo11945[3] = kont10505;
void* f1050710658 = encode_clo(clo11945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1050710658;
arg_buffer[3] = op;
arg_buffer[4] = a1041010657;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10804 = encode_clo(alloc_clo(lam10804_fptr, 0));

void* lam10806_fptr() // lam10806 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10807 = arg_buffer[1];
//reading env and args
void* a1040910655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10807))[6];
//not do dummy comment
void* lst = (decode_clo(env10807))[5];
//not do dummy comment
void* op = (decode_clo(env10807))[4];
//not do dummy comment
void* kont10505 = (decode_clo(env10807))[3];
//not do dummy comment
void* filter = (decode_clo(env10807))[2];
//not do dummy comment
void* cons = (decode_clo(env10807))[1];

//creating new closure instance
void** clo11947 = alloc_clo(lam10804_fptr, 5);

//setting env list
clo11947[1] = a1040910655;
clo11947[2] = cons;
clo11947[3] = filter;
clo11947[4] = kont10505;
clo11947[5] = op;
void* f1050810656 = encode_clo(clo11947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1050810656;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10806 = encode_clo(alloc_clo(lam10806_fptr, 0));

void* lam10808_fptr() // lam10808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10809 = arg_buffer[1];
//reading env and args
void* a1041210661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env10809))[3];
//not do dummy comment
void* kont10505 = (decode_clo(env10809))[2];
//not do dummy comment
void* filter = (decode_clo(env10809))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont10505;
arg_buffer[3] = op;
arg_buffer[4] = a1041210661;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10808 = encode_clo(alloc_clo(lam10808_fptr, 0));

void* lam10810_fptr() // lam10810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10811 = arg_buffer[1];
//reading env and args
void* a1040810653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10811))[7];
//not do dummy comment
void* lst = (decode_clo(env10811))[6];
//not do dummy comment
void* op = (decode_clo(env10811))[5];
//not do dummy comment
void* kont10505 = (decode_clo(env10811))[4];
//not do dummy comment
void* cons = (decode_clo(env10811))[3];
//not do dummy comment
void* filter = (decode_clo(env10811))[2];
//not do dummy comment
void* car = (decode_clo(env10811))[1];

//if-clause
bool if_guard11948 = is_true(a1040810653);
if(if_guard11948)
{

//creating new closure instance
void** clo11950 = alloc_clo(lam10806_fptr, 6);

//setting env list
clo11950[1] = cons;
clo11950[2] = filter;
clo11950[3] = kont10505;
clo11950[4] = op;
clo11950[5] = lst;
clo11950[6] = cdr;
void* f1050910654 = encode_clo(clo11950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1050910654;
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
void** clo11952 = alloc_clo(lam10808_fptr, 3);

//setting env list
clo11952[1] = filter;
clo11952[2] = kont10505;
clo11952[3] = op;
void* f1051010660 = encode_clo(clo11952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1051010660;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10810 = encode_clo(alloc_clo(lam10810_fptr, 0));

void* lam10812_fptr() // lam10812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10813 = arg_buffer[1];
//reading env and args
void* a1040710651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10813))[7];
//not do dummy comment
void* lst = (decode_clo(env10813))[6];
//not do dummy comment
void* op = (decode_clo(env10813))[5];
//not do dummy comment
void* kont10505 = (decode_clo(env10813))[4];
//not do dummy comment
void* cons = (decode_clo(env10813))[3];
//not do dummy comment
void* filter = (decode_clo(env10813))[2];
//not do dummy comment
void* car = (decode_clo(env10813))[1];

//creating new closure instance
void** clo11954 = alloc_clo(lam10810_fptr, 7);

//setting env list
clo11954[1] = car;
clo11954[2] = filter;
clo11954[3] = cons;
clo11954[4] = kont10505;
clo11954[5] = op;
clo11954[6] = lst;
clo11954[7] = cdr;
void* f1051110652 = encode_clo(clo11954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1051110652;
arg_buffer[3] = a1040710651;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10812 = encode_clo(alloc_clo(lam10812_fptr, 0));

void* lam10814_fptr() // lam10814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10815 = arg_buffer[1];
//reading env and args
void* a1040510647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env10815))[8];
//not do dummy comment
void* op = (decode_clo(env10815))[7];
//not do dummy comment
void* kont10505 = (decode_clo(env10815))[6];
//not do dummy comment
void* cons = (decode_clo(env10815))[5];
//not do dummy comment
void* list = (decode_clo(env10815))[4];
//not do dummy comment
void* cdr = (decode_clo(env10815))[3];
//not do dummy comment
void* filter = (decode_clo(env10815))[2];
//not do dummy comment
void* car = (decode_clo(env10815))[1];

//if-clause
bool if_guard11955 = is_true(a1040510647);
if(if_guard11955)
{

//creating new closure instance
void** clo11957 = alloc_clo(lam10800_fptr, 1);

//setting env list
clo11957[1] = kont10505;
void* f1050610648 = encode_clo(clo11957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1050610648;
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
void** clo11959 = alloc_clo(lam10812_fptr, 7);

//setting env list
clo11959[1] = car;
clo11959[2] = filter;
clo11959[3] = cons;
clo11959[4] = kont10505;
clo11959[5] = op;
clo11959[6] = lst;
clo11959[7] = cdr;
void* f1051210650 = encode_clo(clo11959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1051210650;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10814 = encode_clo(alloc_clo(lam10814_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10816 = arg_buffer[1];
//reading env and args
void* kont10505 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11961 = alloc_clo(lam10814_fptr, 8);

//setting env list
clo11961[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo11961[2] = filter;
clo11961[3] = cdr;
clo11961[4] = list;
clo11961[5] = cons;
clo11961[6] = kont10505;
clo11961[7] = op;
clo11961[8] = lst;
void* f1051310646 = encode_clo(clo11961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1051310646;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam10817_fptr() // lam10817 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10818 = arg_buffer[1];
//reading env and args
void* a1041710669 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10514 = (decode_clo(env10818))[3];
//not do dummy comment
void* drop = (decode_clo(env10818))[2];
//not do dummy comment
void* a1041510666 = (decode_clo(env10818))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont10514;
arg_buffer[3] = a1041510666;
arg_buffer[4] = a1041710669;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10817 = encode_clo(alloc_clo(lam10817_fptr, 0));

void* lam10820_fptr() // lam10820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10821 = arg_buffer[1];
//reading env and args
void* a1041510666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10514 = (decode_clo(env10821))[4];
//not do dummy comment
void* drop = (decode_clo(env10821))[3];
//not do dummy comment
void* n = (decode_clo(env10821))[2];
//not do dummy comment
void* _u45 = (decode_clo(env10821))[1];
mpz_t* mpzvar11962 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11962, "1", 10);
void* a1041610667 = encode_mpz(mpzvar11962);

//creating new closure instance
void** clo11964 = alloc_clo(lam10817_fptr, 3);

//setting env list
clo11964[1] = a1041510666;
clo11964[2] = drop;
clo11964[3] = kont10514;
void* f1051510668 = encode_clo(clo11964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1051510668;
arg_buffer[3] = n;
arg_buffer[4] = a1041610667;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10820 = encode_clo(alloc_clo(lam10820_fptr, 0));

void* lam10822_fptr() // lam10822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10823 = arg_buffer[1];
//reading env and args
void* a1041410664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10823))[6];
//not do dummy comment
void* kont10514 = (decode_clo(env10823))[5];
//not do dummy comment
void* n = (decode_clo(env10823))[4];
//not do dummy comment
void* _u45 = (decode_clo(env10823))[3];
//not do dummy comment
void* lst = (decode_clo(env10823))[2];
//not do dummy comment
void* drop = (decode_clo(env10823))[1];

//if-clause
bool if_guard11965 = is_true(a1041410664);
if(if_guard11965)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10514);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10514))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11967 = alloc_clo(lam10820_fptr, 4);

//setting env list
clo11967[1] = _u45;
clo11967[2] = n;
clo11967[3] = drop;
clo11967[4] = kont10514;
void* f1051610665 = encode_clo(clo11967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1051610665;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10822 = encode_clo(alloc_clo(lam10822_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10825 = arg_buffer[1];
//reading env and args
void* kont10514 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar11968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11968, "0", 10);
void* a1041310662 = encode_mpz(mpzvar11968);

//creating new closure instance
void** clo11970 = alloc_clo(lam10822_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo11970[1] = drop;
clo11970[2] = lst;
clo11970[3] = _u45;
clo11970[4] = n;
clo11970[5] = kont10514;
clo11970[6] = cdr;
void* f1051710663 = encode_clo(clo11970);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1051710663;
arg_buffer[3] = n;
arg_buffer[4] = a1041310662;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam10826_fptr() // lam10826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10827 = arg_buffer[1];
//reading env and args
void* a1042110677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1041910673 = (decode_clo(env10827))[3];
//not do dummy comment
void* kont10518 = (decode_clo(env10827))[2];
//not do dummy comment
void* proc = (decode_clo(env10827))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont10518;
arg_buffer[3] = a1041910673;
arg_buffer[4] = a1042110677;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10826 = encode_clo(alloc_clo(lam10826_fptr, 0));

void* lam10828_fptr() // lam10828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10829 = arg_buffer[1];
//reading env and args
void* a1042010675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1041910673 = (decode_clo(env10829))[5];
//not do dummy comment
void* foldr = (decode_clo(env10829))[4];
//not do dummy comment
void* kont10518 = (decode_clo(env10829))[3];
//not do dummy comment
void* proc = (decode_clo(env10829))[2];
//not do dummy comment
void* acc = (decode_clo(env10829))[1];

//creating new closure instance
void** clo11972 = alloc_clo(lam10826_fptr, 3);

//setting env list
clo11972[1] = proc;
clo11972[2] = kont10518;
clo11972[3] = a1041910673;
void* f1051910676 = encode_clo(clo11972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1051910676;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1042010675;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10828 = encode_clo(alloc_clo(lam10828_fptr, 0));

void* lam10830_fptr() // lam10830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10831 = arg_buffer[1];
//reading env and args
void* a1041910673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10831))[6];
//not do dummy comment
void* kont10518 = (decode_clo(env10831))[5];
//not do dummy comment
void* foldr = (decode_clo(env10831))[4];
//not do dummy comment
void* lst = (decode_clo(env10831))[3];
//not do dummy comment
void* proc = (decode_clo(env10831))[2];
//not do dummy comment
void* acc = (decode_clo(env10831))[1];

//creating new closure instance
void** clo11974 = alloc_clo(lam10828_fptr, 5);

//setting env list
clo11974[1] = acc;
clo11974[2] = proc;
clo11974[3] = kont10518;
clo11974[4] = foldr;
clo11974[5] = a1041910673;
void* f1052010674 = encode_clo(clo11974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1052010674;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10830 = encode_clo(alloc_clo(lam10830_fptr, 0));

void* lam10832_fptr() // lam10832 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10833 = arg_buffer[1];
//reading env and args
void* a1041810671 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10833))[7];
//not do dummy comment
void* kont10518 = (decode_clo(env10833))[6];
//not do dummy comment
void* car = (decode_clo(env10833))[5];
//not do dummy comment
void* foldr = (decode_clo(env10833))[4];
//not do dummy comment
void* lst = (decode_clo(env10833))[3];
//not do dummy comment
void* proc = (decode_clo(env10833))[2];
//not do dummy comment
void* acc = (decode_clo(env10833))[1];

//if-clause
bool if_guard11975 = is_true(a1041810671);
if(if_guard11975)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10518);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10518))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11977 = alloc_clo(lam10830_fptr, 6);

//setting env list
clo11977[1] = acc;
clo11977[2] = proc;
clo11977[3] = lst;
clo11977[4] = foldr;
clo11977[5] = kont10518;
clo11977[6] = cdr;
void* f1052110672 = encode_clo(clo11977);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1052110672;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10832 = encode_clo(alloc_clo(lam10832_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10834 = arg_buffer[1];
//reading env and args
void* kont10518 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo11979 = alloc_clo(lam10832_fptr, 7);

//setting env list
clo11979[1] = acc;
clo11979[2] = proc;
clo11979[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo11979[4] = foldr;
clo11979[5] = car;
clo11979[6] = kont10518;
clo11979[7] = cdr;
void* f1052210670 = encode_clo(clo11979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1052210670;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam10835_fptr() // lam10835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10836 = arg_buffer[1];
//reading env and args
void* a1042510685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1042310681 = (decode_clo(env10836))[3];
//not do dummy comment
void* kont10523 = (decode_clo(env10836))[2];
//not do dummy comment
void* cons = (decode_clo(env10836))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10523;
arg_buffer[3] = a1042310681;
arg_buffer[4] = a1042510685;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10835 = encode_clo(alloc_clo(lam10835_fptr, 0));

void* lam10837_fptr() // lam10837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10838 = arg_buffer[1];
//reading env and args
void* a1042410683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10523 = (decode_clo(env10838))[5];
//not do dummy comment
void* lst2 = (decode_clo(env10838))[4];
//not do dummy comment
void* cons = (decode_clo(env10838))[3];
//not do dummy comment
void* append = (decode_clo(env10838))[2];
//not do dummy comment
void* a1042310681 = (decode_clo(env10838))[1];

//creating new closure instance
void** clo11981 = alloc_clo(lam10835_fptr, 3);

//setting env list
clo11981[1] = cons;
clo11981[2] = kont10523;
clo11981[3] = a1042310681;
void* f1052410684 = encode_clo(clo11981);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1052410684;
arg_buffer[3] = a1042410683;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10837 = encode_clo(alloc_clo(lam10837_fptr, 0));

void* lam10839_fptr() // lam10839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10840 = arg_buffer[1];
//reading env and args
void* a1042310681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10840))[6];
//not do dummy comment
void* append = (decode_clo(env10840))[5];
//not do dummy comment
void* kont10523 = (decode_clo(env10840))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10840))[3];
//not do dummy comment
void* lst1 = (decode_clo(env10840))[2];
//not do dummy comment
void* cons = (decode_clo(env10840))[1];

//creating new closure instance
void** clo11983 = alloc_clo(lam10837_fptr, 5);

//setting env list
clo11983[1] = a1042310681;
clo11983[2] = append;
clo11983[3] = cons;
clo11983[4] = lst2;
clo11983[5] = kont10523;
void* f1052510682 = encode_clo(clo11983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1052510682;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10839 = encode_clo(alloc_clo(lam10839_fptr, 0));

void* lam10841_fptr() // lam10841 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10842 = arg_buffer[1];
//reading env and args
void* a1042210679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10842))[7];
//not do dummy comment
void* append = (decode_clo(env10842))[6];
//not do dummy comment
void* kont10523 = (decode_clo(env10842))[5];
//not do dummy comment
void* lst2 = (decode_clo(env10842))[4];
//not do dummy comment
void* cons = (decode_clo(env10842))[3];
//not do dummy comment
void* lst1 = (decode_clo(env10842))[2];
//not do dummy comment
void* car = (decode_clo(env10842))[1];

//if-clause
bool if_guard11984 = is_true(a1042210679);
if(if_guard11984)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10523);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10523))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11986 = alloc_clo(lam10839_fptr, 6);

//setting env list
clo11986[1] = cons;
clo11986[2] = lst1;
clo11986[3] = lst2;
clo11986[4] = kont10523;
clo11986[5] = append;
clo11986[6] = cdr;
void* f1052610680 = encode_clo(clo11986);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1052610680;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10841 = encode_clo(alloc_clo(lam10841_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10843 = arg_buffer[1];
//reading env and args
void* kont10523 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11988 = alloc_clo(lam10841_fptr, 7);

//setting env list
clo11988[1] = car;
clo11988[2] = lst1;
clo11988[3] = cons;
clo11988[4] = lst2;
clo11988[5] = kont10523;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo11988[6] = append;
clo11988[7] = cdr;
void* f1052710678 = encode_clo(clo11988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1052710678;
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
void* _10844 = arg_buffer[1];
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

void* kont1052810686 = prim_car(lst);
void* lst10687 = prim_cdr(lst);
void* x1042610688 = apply_prim_hash(lst10687);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1052810686);
arg_buffer[2] = x1042610688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1052810686))[0]);
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
void* _10845 = arg_buffer[1];
//reading env and args
void* kont10530 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1042710689 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10530);
arg_buffer[2] = x1042710689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10530))[0]);
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
void* _10846 = arg_buffer[1];
//reading env and args
void* kont10531 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1042810690 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10531);
arg_buffer[2] = x1042810690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10531))[0]);
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
void* _10847 = arg_buffer[1];
//reading env and args
void* kont10532 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1042910691 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10532);
arg_buffer[2] = x1042910691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10532))[0]);
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
void* _10848 = arg_buffer[1];
//reading env and args
void* kont10533 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1043010692 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10533);
arg_buffer[2] = x1043010692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10533))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam10849_fptr() // lam10849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10850 = arg_buffer[1];
//reading env and args
void* a1043510698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1043110693 = (decode_clo(env10850))[4];
//not do dummy comment
void* _u43 = (decode_clo(env10850))[3];
//not do dummy comment
void* a1043210694 = (decode_clo(env10850))[2];
//not do dummy comment
void* kont10534 = (decode_clo(env10850))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont10534;
arg_buffer[3] = a1043110693;
arg_buffer[4] = a1043210694;
arg_buffer[5] = a1043510698;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10849 = encode_clo(alloc_clo(lam10849_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10855 = arg_buffer[1];
//reading env and args
void* kont10534 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar11989 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11989, "10", 10);
void* a1043110693 = encode_mpz(mpzvar11989);
mpz_t* mpzvar11990 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11990, "3", 10);
void* a1043210694 = encode_mpz(mpzvar11990);
mpz_t* mpzvar11991 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11991, "4", 10);
void* a1043310695 = encode_mpz(mpzvar11991);
mpz_t* mpzvar11992 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11992, "3", 10);
void* a1043410696 = encode_mpz(mpzvar11992);

//creating new closure instance
void** clo11994 = alloc_clo(lam10849_fptr, 4);

//setting env list
clo11994[1] = kont10534;
clo11994[2] = a1043210694;
clo11994[3] = _u43;
clo11994[4] = a1043110693;
void* f1053510697 = encode_clo(clo11994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f1053510697;
arg_buffer[3] = a1043310695;
arg_buffer[4] = a1043410696;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam10856_fptr() // lam10856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10857 = arg_buffer[1];
//reading env and args
void* x1043610700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10536 = (decode_clo(env10857))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10536);
arg_buffer[2] = x1043610700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10536))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10856 = encode_clo(alloc_clo(lam10856_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10858 = arg_buffer[1];
//reading env and args
void* kont10536 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo11996 = alloc_clo(lam10856_fptr, 1);

//setting env list
clo11996[1] = kont10536;
void* f1053710699 = encode_clo(clo11996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1053710699;
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

