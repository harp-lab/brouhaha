#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void* _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10730 = arg_buffer[1];
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

void* kont1043410551 = prim_car(lst);
void* lst10552 = prim_cdr(lst);
void* x1033210553 = apply_prim__u43(lst10552);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1043410551);
arg_buffer[2] = x1033210553;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1043410551))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10731 = arg_buffer[1];
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

void* kont1043610554 = prim_car(lst);
void* lst10555 = prim_cdr(lst);
void* x1033310556 = apply_prim_max(lst10555);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1043610554);
arg_buffer[2] = x1033310556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1043610554))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10732 = arg_buffer[1];
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

void* kont1043810557 = prim_car(lst);
void* lst10558 = prim_cdr(lst);
void* x1033410559 = apply_prim__u45(lst10558);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1043810557);
arg_buffer[2] = x1033410559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1043810557))[0]);
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
void* _10733 = arg_buffer[1];
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

void* kont1044010560 = prim_car(lst);
void* lst10561 = prim_cdr(lst);
void* x1033510562 = apply_prim__u42(lst10561);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1044010560);
arg_buffer[2] = x1033510562;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1044010560))[0]);
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
void* _10734 = arg_buffer[1];
//reading env and args
void* kont10442 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1033610563 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10442);
arg_buffer[2] = x1033610563;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10442))[0]);
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
void* _10735 = arg_buffer[1];
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

void* kont1044310564 = prim_car(lst);
void* lst10565 = prim_cdr(lst);
void* x1033710566 = apply_prim__u47(lst10565);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1044310564);
arg_buffer[2] = x1033710566;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1044310564))[0]);
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
void* _10736 = arg_buffer[1];
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

void* kont1044510567 = prim_car(lst);
void* lst10568 = prim_cdr(lst);
void* x1033810569 = apply_prim__u61(lst10568);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1044510567);
arg_buffer[2] = x1033810569;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1044510567))[0]);
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
void* _10737 = arg_buffer[1];
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

void* kont1044710570 = prim_car(lst);
void* lst10571 = prim_cdr(lst);
void* x1033910572 = apply_prim__u62(lst10571);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1044710570);
arg_buffer[2] = x1033910572;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1044710570))[0]);
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
void* _10738 = arg_buffer[1];
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

void* kont1044910573 = prim_car(lst);
void* lst10574 = prim_cdr(lst);
void* x1034010575 = apply_prim__u60(lst10574);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1044910573);
arg_buffer[2] = x1034010575;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1044910573))[0]);
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
void* _10739 = arg_buffer[1];
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

void* kont1045110576 = prim_car(lst);
void* lst10577 = prim_cdr(lst);
void* x1034110578 = apply_prim__u60_u61(lst10577);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1045110576);
arg_buffer[2] = x1034110578;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1045110576))[0]);
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
void* _10740 = arg_buffer[1];
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

void* kont1045310579 = prim_car(lst);
void* lst10580 = prim_cdr(lst);
void* x1034210581 = apply_prim__u62_u61(lst10580);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1045310579);
arg_buffer[2] = x1034210581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1045310579))[0]);
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
void* _10741 = arg_buffer[1];
//reading env and args
void* kont10455 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1034310582 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10455);
arg_buffer[2] = x1034310582;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10455))[0]);
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
void* _10742 = arg_buffer[1];
//reading env and args
void* kont10456 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1034410583 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10456);
arg_buffer[2] = x1034410583;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10456))[0]);
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
void* _10743 = arg_buffer[1];
//reading env and args
void* kont10457 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1034510584 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10457);
arg_buffer[2] = x1034510584;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10457))[0]);
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
void* _10744 = arg_buffer[1];
//reading env and args
void* kont10458 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1034610585 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10458);
arg_buffer[2] = x1034610585;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10458))[0]);
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
void* _10745 = arg_buffer[1];
//reading env and args
void* kont10459 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1034710586 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10459);
arg_buffer[2] = x1034710586;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10459))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10746 = arg_buffer[1];
//reading env and args
void* kont10460 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1034810587 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10460);
arg_buffer[2] = x1034810587;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10460))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs = encode_clo(alloc_clo(abs_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10747 = arg_buffer[1];
//reading env and args
void* kont10461 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1034910588 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10461);
arg_buffer[2] = x1034910588;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10461))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam10748_fptr() // lam10748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10749 = arg_buffer[1];
//reading env and args
void* a1035210592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1035010589 = (decode_clo(env10749))[3];
//not do dummy comment
void* kont10462 = (decode_clo(env10749))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env10749))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10462;
arg_buffer[3] = a1035010589;
arg_buffer[4] = a1035210592;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10748 = encode_clo(alloc_clo(lam10748_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10752 = arg_buffer[1];
//reading env and args
void* kont10462 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10900 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10900, "0", 10);
void* a1035010589 = encode_mpz(mpzvar10900);
mpz_t* mpzvar10901 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10901, "2", 10);
void* a1035110590 = encode_mpz(mpzvar10901);

//creating new closure instance
void** clo10903 = alloc_clo(lam10748_fptr, 3);

//setting env list
clo10903[1] = equal_u63;
clo10903[2] = kont10462;
clo10903[3] = a1035010589;
void* f1046310591 = encode_clo(clo10903);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1046310591;
arg_buffer[3] = x;
arg_buffer[4] = a1035110590;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam10753_fptr() // lam10753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10754 = arg_buffer[1];
//reading env and args
void* a1035510596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10464 = (decode_clo(env10754))[3];
//not do dummy comment
void* a1035310593 = (decode_clo(env10754))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env10754))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont10464;
arg_buffer[3] = a1035310593;
arg_buffer[4] = a1035510596;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10753 = encode_clo(alloc_clo(lam10753_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10757 = arg_buffer[1];
//reading env and args
void* kont10464 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar10904 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10904, "1", 10);
void* a1035310593 = encode_mpz(mpzvar10904);
mpz_t* mpzvar10905 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10905, "2", 10);
void* a1035410594 = encode_mpz(mpzvar10905);

//creating new closure instance
void** clo10907 = alloc_clo(lam10753_fptr, 3);

//setting env list
clo10907[1] = equal_u63;
clo10907[2] = a1035310593;
clo10907[3] = kont10464;
void* f1046510595 = encode_clo(clo10907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1046510595;
arg_buffer[3] = x;
arg_buffer[4] = a1035410594;
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
void* _10758 = arg_buffer[1];
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

void* kont1046610597 = prim_car(x);
void* x10598 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1046610597);
arg_buffer[2] = x10598;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1046610597))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10759 = arg_buffer[1];
//reading env and args
void* kont10468 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1035610599 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10468);
arg_buffer[2] = x1035610599;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10468))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10760 = arg_buffer[1];
//reading env and args
void* kont10469 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1035710600 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10469);
arg_buffer[2] = x1035710600;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10469))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam10763_fptr() // lam10763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10764 = arg_buffer[1];
//reading env and args
void* a1036310610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10470 = (decode_clo(env10764))[3];
//not do dummy comment
void* x = (decode_clo(env10764))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10764))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont10470;
arg_buffer[3] = x;
arg_buffer[4] = a1036310610;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10763 = encode_clo(alloc_clo(lam10763_fptr, 0));

void* lam10765_fptr() // lam10765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10766 = arg_buffer[1];
//reading env and args
void* a1036110607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10766))[5];
//not do dummy comment
void* lst = (decode_clo(env10766))[4];
//not do dummy comment
void* kont10470 = (decode_clo(env10766))[3];
//not do dummy comment
void* x = (decode_clo(env10766))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10766))[1];

//if-clause
bool if_guard10908 = is_true(a1036110607);
if(if_guard10908)
{
void* x1036210608 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10470);
arg_buffer[2] = x1036210608;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10470))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10910 = alloc_clo(lam10763_fptr, 3);

//setting env list
clo10910[1] = member_u63;
clo10910[2] = x;
clo10910[3] = kont10470;
void* f1047110609 = encode_clo(clo10910);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1047110609;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10765 = encode_clo(alloc_clo(lam10765_fptr, 0));

void* lam10767_fptr() // lam10767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10768 = arg_buffer[1];
//reading env and args
void* a1036010605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10768))[6];
//not do dummy comment
void* lst = (decode_clo(env10768))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env10768))[4];
//not do dummy comment
void* kont10470 = (decode_clo(env10768))[3];
//not do dummy comment
void* x = (decode_clo(env10768))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10768))[1];

//creating new closure instance
void** clo10912 = alloc_clo(lam10765_fptr, 5);

//setting env list
clo10912[1] = member_u63;
clo10912[2] = x;
clo10912[3] = kont10470;
clo10912[4] = lst;
clo10912[5] = cdr;
void* f1047210606 = encode_clo(clo10912);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1047210606;
arg_buffer[3] = a1036010605;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10767 = encode_clo(alloc_clo(lam10767_fptr, 0));

void* lam10769_fptr() // lam10769 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10770 = arg_buffer[1];
//reading env and args
void* a1035810602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10770))[7];
//not do dummy comment
void* lst = (decode_clo(env10770))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env10770))[5];
//not do dummy comment
void* kont10470 = (decode_clo(env10770))[4];
//not do dummy comment
void* x = (decode_clo(env10770))[3];
//not do dummy comment
void* car = (decode_clo(env10770))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env10770))[1];

//if-clause
bool if_guard10913 = is_true(a1035810602);
if(if_guard10913)
{
void* x1035910603 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10470);
arg_buffer[2] = x1035910603;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10470))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10915 = alloc_clo(lam10767_fptr, 6);

//setting env list
clo10915[1] = member_u63;
clo10915[2] = x;
clo10915[3] = kont10470;
clo10915[4] = equal_u63;
clo10915[5] = lst;
clo10915[6] = cdr;
void* f1047310604 = encode_clo(clo10915);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1047310604;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10769 = encode_clo(alloc_clo(lam10769_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10771 = arg_buffer[1];
//reading env and args
void* kont10470 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10917 = alloc_clo(lam10769_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo10917[1] = member_u63;
clo10917[2] = car;
clo10917[3] = x;
clo10917[4] = kont10470;
clo10917[5] = equal_u63;
clo10917[6] = lst;
clo10917[7] = cdr;
void* f1047410601 = encode_clo(clo10917);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1047410601;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam10772_fptr() // lam10772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10773 = arg_buffer[1];
//reading env and args
void* a1036710618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env10773))[4];
//not do dummy comment
void* a1036610616 = (decode_clo(env10773))[3];
//not do dummy comment
void* foldl = (decode_clo(env10773))[2];
//not do dummy comment
void* kont10475 = (decode_clo(env10773))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont10475;
arg_buffer[3] = fun;
arg_buffer[4] = a1036610616;
arg_buffer[5] = a1036710618;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10772 = encode_clo(alloc_clo(lam10772_fptr, 0));

void* lam10774_fptr() // lam10774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10775 = arg_buffer[1];
//reading env and args
void* a1036610616 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10775))[5];
//not do dummy comment
void* lst = (decode_clo(env10775))[4];
//not do dummy comment
void* fun = (decode_clo(env10775))[3];
//not do dummy comment
void* foldl = (decode_clo(env10775))[2];
//not do dummy comment
void* kont10475 = (decode_clo(env10775))[1];

//creating new closure instance
void** clo10919 = alloc_clo(lam10772_fptr, 4);

//setting env list
clo10919[1] = kont10475;
clo10919[2] = foldl;
clo10919[3] = a1036610616;
clo10919[4] = fun;
void* f1047610617 = encode_clo(clo10919);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1047610617;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10774 = encode_clo(alloc_clo(lam10774_fptr, 0));

void* lam10776_fptr() // lam10776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10777 = arg_buffer[1];
//reading env and args
void* a1036510614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10777))[6];
//not do dummy comment
void* lst = (decode_clo(env10777))[5];
//not do dummy comment
void* fun = (decode_clo(env10777))[4];
//not do dummy comment
void* acc = (decode_clo(env10777))[3];
//not do dummy comment
void* foldl = (decode_clo(env10777))[2];
//not do dummy comment
void* kont10475 = (decode_clo(env10777))[1];

//creating new closure instance
void** clo10921 = alloc_clo(lam10774_fptr, 5);

//setting env list
clo10921[1] = kont10475;
clo10921[2] = foldl;
clo10921[3] = fun;
clo10921[4] = lst;
clo10921[5] = cdr;
void* f1047710615 = encode_clo(clo10921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1047710615;
arg_buffer[3] = a1036510614;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10776 = encode_clo(alloc_clo(lam10776_fptr, 0));

void* lam10778_fptr() // lam10778 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10779 = arg_buffer[1];
//reading env and args
void* a1036410612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10779))[7];
//not do dummy comment
void* lst = (decode_clo(env10779))[6];
//not do dummy comment
void* fun = (decode_clo(env10779))[5];
//not do dummy comment
void* acc = (decode_clo(env10779))[4];
//not do dummy comment
void* car = (decode_clo(env10779))[3];
//not do dummy comment
void* foldl = (decode_clo(env10779))[2];
//not do dummy comment
void* kont10475 = (decode_clo(env10779))[1];

//if-clause
bool if_guard10922 = is_true(a1036410612);
if(if_guard10922)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10475);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10475))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10924 = alloc_clo(lam10776_fptr, 6);

//setting env list
clo10924[1] = kont10475;
clo10924[2] = foldl;
clo10924[3] = acc;
clo10924[4] = fun;
clo10924[5] = lst;
clo10924[6] = cdr;
void* f1047810613 = encode_clo(clo10924);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1047810613;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10778 = encode_clo(alloc_clo(lam10778_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10780 = arg_buffer[1];
//reading env and args
void* kont10475 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo10926 = alloc_clo(lam10778_fptr, 7);

//setting env list
clo10926[1] = kont10475;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo10926[2] = foldl;
clo10926[3] = car;
clo10926[4] = acc;
clo10926[5] = fun;
clo10926[6] = lst;
clo10926[7] = cdr;
void* f1047910611 = encode_clo(clo10926);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1047910611;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam10781_fptr() // lam10781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10782 = arg_buffer[1];
//reading env and args
void* a1037110626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1036910622 = (decode_clo(env10782))[3];
//not do dummy comment
void* kont10480 = (decode_clo(env10782))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10782))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10480;
arg_buffer[3] = a1036910622;
arg_buffer[4] = a1037110626;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10781 = encode_clo(alloc_clo(lam10781_fptr, 0));

void* lam10783_fptr() // lam10783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10784 = arg_buffer[1];
//reading env and args
void* a1037010624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1036910622 = (decode_clo(env10784))[5];
//not do dummy comment
void* kont10480 = (decode_clo(env10784))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10784))[3];
//not do dummy comment
void* lst2 = (decode_clo(env10784))[2];
//not do dummy comment
void* cons = (decode_clo(env10784))[1];

//creating new closure instance
void** clo10928 = alloc_clo(lam10781_fptr, 3);

//setting env list
clo10928[1] = reverse_u45helper;
clo10928[2] = kont10480;
clo10928[3] = a1036910622;
void* f1048110625 = encode_clo(clo10928);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1048110625;
arg_buffer[3] = a1037010624;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10783 = encode_clo(alloc_clo(lam10783_fptr, 0));

void* lam10785_fptr() // lam10785 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10786 = arg_buffer[1];
//reading env and args
void* a1036910622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10480 = (decode_clo(env10786))[6];
//not do dummy comment
void* lst = (decode_clo(env10786))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10786))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10786))[3];
//not do dummy comment
void* car = (decode_clo(env10786))[2];
//not do dummy comment
void* cons = (decode_clo(env10786))[1];

//creating new closure instance
void** clo10930 = alloc_clo(lam10783_fptr, 5);

//setting env list
clo10930[1] = cons;
clo10930[2] = lst2;
clo10930[3] = reverse_u45helper;
clo10930[4] = kont10480;
clo10930[5] = a1036910622;
void* f1048210623 = encode_clo(clo10930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1048210623;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10785 = encode_clo(alloc_clo(lam10785_fptr, 0));

void* lam10787_fptr() // lam10787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10788 = arg_buffer[1];
//reading env and args
void* a1036810620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10788))[7];
//not do dummy comment
void* kont10480 = (decode_clo(env10788))[6];
//not do dummy comment
void* lst = (decode_clo(env10788))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10788))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10788))[3];
//not do dummy comment
void* car = (decode_clo(env10788))[2];
//not do dummy comment
void* cons = (decode_clo(env10788))[1];

//if-clause
bool if_guard10931 = is_true(a1036810620);
if(if_guard10931)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10480);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10480))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo10933 = alloc_clo(lam10785_fptr, 6);

//setting env list
clo10933[1] = cons;
clo10933[2] = car;
clo10933[3] = lst2;
clo10933[4] = reverse_u45helper;
clo10933[5] = lst;
clo10933[6] = kont10480;
void* f1048310621 = encode_clo(clo10933);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1048310621;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10787 = encode_clo(alloc_clo(lam10787_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10789 = arg_buffer[1];
//reading env and args
void* kont10480 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10935 = alloc_clo(lam10787_fptr, 7);

//setting env list
clo10935[1] = cons;
clo10935[2] = car;
clo10935[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo10935[4] = reverse_u45helper;
clo10935[5] = lst;
clo10935[6] = kont10480;
clo10935[7] = cdr;
void* f1048410619 = encode_clo(clo10935);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1048410619;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam10790_fptr() // lam10790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10791 = arg_buffer[1];
//reading env and args
void* a1037210628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env10791))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env10791))[2];
//not do dummy comment
void* kont10485 = (decode_clo(env10791))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont10485;
arg_buffer[3] = lst;
arg_buffer[4] = a1037210628;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10790 = encode_clo(alloc_clo(lam10790_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10792 = arg_buffer[1];
//reading env and args
void* kont10485 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10937 = alloc_clo(lam10790_fptr, 3);

//setting env list
clo10937[1] = kont10485;
clo10937[2] = reverse_u45helper;
clo10937[3] = lst;
void* f1048610627 = encode_clo(clo10937);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1048610627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam10793_fptr() // lam10793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10794 = arg_buffer[1];
//reading env and args
void* x1037510633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10487 = (decode_clo(env10794))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10487);
arg_buffer[2] = x1037510633;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10487))[0]);
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
void* a1038010642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1037810638 = (decode_clo(env10796))[4];
//not do dummy comment
void* kont10487 = (decode_clo(env10796))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env10796))[2];
//not do dummy comment
void* a1037610635 = (decode_clo(env10796))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10487;
arg_buffer[3] = a1037610635;
arg_buffer[4] = a1037810638;
arg_buffer[5] = a1038010642;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a1037910640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1037810638 = (decode_clo(env10798))[6];
//not do dummy comment
void* kont10487 = (decode_clo(env10798))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env10798))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10798))[3];
//not do dummy comment
void* cons = (decode_clo(env10798))[2];
//not do dummy comment
void* a1037610635 = (decode_clo(env10798))[1];

//creating new closure instance
void** clo10939 = alloc_clo(lam10795_fptr, 4);

//setting env list
clo10939[1] = a1037610635;
clo10939[2] = take_u45helper;
clo10939[3] = kont10487;
clo10939[4] = a1037810638;
void* f1048910641 = encode_clo(clo10939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1048910641;
arg_buffer[3] = a1037910640;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10797 = encode_clo(alloc_clo(lam10797_fptr, 0));

void* lam10799_fptr() // lam10799 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10800 = arg_buffer[1];
//reading env and args
void* a1037810638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env10800))[7];
//not do dummy comment
void* kont10487 = (decode_clo(env10800))[6];
//not do dummy comment
void* car = (decode_clo(env10800))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env10800))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10800))[3];
//not do dummy comment
void* cons = (decode_clo(env10800))[2];
//not do dummy comment
void* a1037610635 = (decode_clo(env10800))[1];

//creating new closure instance
void** clo10941 = alloc_clo(lam10797_fptr, 6);

//setting env list
clo10941[1] = a1037610635;
clo10941[2] = cons;
clo10941[3] = lst2;
clo10941[4] = take_u45helper;
clo10941[5] = kont10487;
clo10941[6] = a1037810638;
void* f1049010639 = encode_clo(clo10941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1049010639;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10799 = encode_clo(alloc_clo(lam10799_fptr, 0));

void* lam10802_fptr() // lam10802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10803 = arg_buffer[1];
//reading env and args
void* a1037610635 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env10803))[8];
//not do dummy comment
void* kont10487 = (decode_clo(env10803))[7];
//not do dummy comment
void* cons = (decode_clo(env10803))[6];
//not do dummy comment
void* _u45 = (decode_clo(env10803))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env10803))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10803))[3];
//not do dummy comment
void* n = (decode_clo(env10803))[2];
//not do dummy comment
void* car = (decode_clo(env10803))[1];
mpz_t* mpzvar10942 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10942, "1", 10);
void* a1037710636 = encode_mpz(mpzvar10942);

//creating new closure instance
void** clo10944 = alloc_clo(lam10799_fptr, 7);

//setting env list
clo10944[1] = a1037610635;
clo10944[2] = cons;
clo10944[3] = lst2;
clo10944[4] = take_u45helper;
clo10944[5] = car;
clo10944[6] = kont10487;
clo10944[7] = lst;
void* f1049110637 = encode_clo(clo10944);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1049110637;
arg_buffer[3] = n;
arg_buffer[4] = a1037710636;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a1037410631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10805))[10];
//not do dummy comment
void* lst = (decode_clo(env10805))[9];
//not do dummy comment
void* reverse = (decode_clo(env10805))[8];
//not do dummy comment
void* kont10487 = (decode_clo(env10805))[7];
//not do dummy comment
void* cons = (decode_clo(env10805))[6];
//not do dummy comment
void* _u45 = (decode_clo(env10805))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env10805))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10805))[3];
//not do dummy comment
void* n = (decode_clo(env10805))[2];
//not do dummy comment
void* car = (decode_clo(env10805))[1];

//if-clause
bool if_guard10945 = is_true(a1037410631);
if(if_guard10945)
{

//creating new closure instance
void** clo10947 = alloc_clo(lam10793_fptr, 1);

//setting env list
clo10947[1] = kont10487;
void* f1048810632 = encode_clo(clo10947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1048810632;
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
void** clo10949 = alloc_clo(lam10802_fptr, 8);

//setting env list
clo10949[1] = car;
clo10949[2] = n;
clo10949[3] = lst2;
clo10949[4] = take_u45helper;
clo10949[5] = _u45;
clo10949[6] = cons;
clo10949[7] = kont10487;
clo10949[8] = lst;
void* f1049210634 = encode_clo(clo10949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1049210634;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10804 = encode_clo(alloc_clo(lam10804_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10807 = arg_buffer[1];
//reading env and args
void* kont10487 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar10950 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10950, "0", 10);
void* a1037310629 = encode_mpz(mpzvar10950);

//creating new closure instance
void** clo10952 = alloc_clo(lam10804_fptr, 10);

//setting env list
clo10952[1] = car;
clo10952[2] = n;
clo10952[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo10952[4] = take_u45helper;
clo10952[5] = _u45;
clo10952[6] = cons;
clo10952[7] = kont10487;
clo10952[8] = reverse;
clo10952[9] = lst;
clo10952[10] = cdr;
void* f1049310630 = encode_clo(clo10952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1049310630;
arg_buffer[3] = n;
arg_buffer[4] = a1037310629;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam10808_fptr() // lam10808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10809 = arg_buffer[1];
//reading env and args
void* a1038110644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10494 = (decode_clo(env10809))[4];
//not do dummy comment
void* lst = (decode_clo(env10809))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env10809))[2];
//not do dummy comment
void* n = (decode_clo(env10809))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont10494;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1038110644;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10808 = encode_clo(alloc_clo(lam10808_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10810 = arg_buffer[1];
//reading env and args
void* kont10494 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10954 = alloc_clo(lam10808_fptr, 4);

//setting env list
clo10954[1] = n;
clo10954[2] = take_u45helper;
clo10954[3] = lst;
clo10954[4] = kont10494;
void* f1049510643 = encode_clo(clo10954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1049510643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam10812_fptr() // lam10812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10813 = arg_buffer[1];
//reading env and args
void* a1038610652 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10496 = (decode_clo(env10813))[3];
//not do dummy comment
void* _u43 = (decode_clo(env10813))[2];
//not do dummy comment
void* a1038410648 = (decode_clo(env10813))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont10496;
arg_buffer[3] = a1038410648;
arg_buffer[4] = a1038610652;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
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
void* a1038510650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10496 = (decode_clo(env10815))[4];
//not do dummy comment
void* length = (decode_clo(env10815))[3];
//not do dummy comment
void* _u43 = (decode_clo(env10815))[2];
//not do dummy comment
void* a1038410648 = (decode_clo(env10815))[1];

//creating new closure instance
void** clo10956 = alloc_clo(lam10812_fptr, 3);

//setting env list
clo10956[1] = a1038410648;
clo10956[2] = _u43;
clo10956[3] = kont10496;
void* f1049710651 = encode_clo(clo10956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1049710651;
arg_buffer[3] = a1038510650;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10814 = encode_clo(alloc_clo(lam10814_fptr, 0));

void* lam10817_fptr() // lam10817 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10818 = arg_buffer[1];
//reading env and args
void* a1038210646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10818))[5];
//not do dummy comment
void* kont10496 = (decode_clo(env10818))[4];
//not do dummy comment
void* lst = (decode_clo(env10818))[3];
//not do dummy comment
void* length = (decode_clo(env10818))[2];
//not do dummy comment
void* _u43 = (decode_clo(env10818))[1];

//if-clause
bool if_guard10957 = is_true(a1038210646);
if(if_guard10957)
{
mpz_t* mpzvar10958 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10958, "0", 10);
void* x1038310647 = encode_mpz(mpzvar10958);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10496);
arg_buffer[2] = x1038310647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10496))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar10959 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10959, "1", 10);
void* a1038410648 = encode_mpz(mpzvar10959);

//creating new closure instance
void** clo10961 = alloc_clo(lam10814_fptr, 4);

//setting env list
clo10961[1] = a1038410648;
clo10961[2] = _u43;
clo10961[3] = length;
clo10961[4] = kont10496;
void* f1049810649 = encode_clo(clo10961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1049810649;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10817 = encode_clo(alloc_clo(lam10817_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10819 = arg_buffer[1];
//reading env and args
void* kont10496 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo10963 = alloc_clo(lam10817_fptr, 5);

//setting env list
clo10963[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo10963[2] = length;
clo10963[3] = lst;
clo10963[4] = kont10496;
clo10963[5] = cdr;
void* f1049910645 = encode_clo(clo10963);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1049910645;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam10820_fptr() // lam10820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10821 = arg_buffer[1];
//reading env and args
void* x1038810656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10500 = (decode_clo(env10821))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10500);
arg_buffer[2] = x1038810656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10500))[0]);
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
void* a1039210664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env10823))[3];
//not do dummy comment
void* kont10500 = (decode_clo(env10823))[2];
//not do dummy comment
void* a1039010660 = (decode_clo(env10823))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10500;
arg_buffer[3] = a1039010660;
arg_buffer[4] = a1039210664;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10822 = encode_clo(alloc_clo(lam10822_fptr, 0));

void* lam10824_fptr() // lam10824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10825 = arg_buffer[1];
//reading env and args
void* a1039110662 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env10825))[5];
//not do dummy comment
void* proc = (decode_clo(env10825))[4];
//not do dummy comment
void* cons = (decode_clo(env10825))[3];
//not do dummy comment
void* kont10500 = (decode_clo(env10825))[2];
//not do dummy comment
void* a1039010660 = (decode_clo(env10825))[1];

//creating new closure instance
void** clo10965 = alloc_clo(lam10822_fptr, 3);

//setting env list
clo10965[1] = a1039010660;
clo10965[2] = kont10500;
clo10965[3] = cons;
void* f1050210663 = encode_clo(clo10965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1050210663;
arg_buffer[3] = proc;
arg_buffer[4] = a1039110662;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10824 = encode_clo(alloc_clo(lam10824_fptr, 0));

void* lam10826_fptr() // lam10826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10827 = arg_buffer[1];
//reading env and args
void* a1039010660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10827))[6];
//not do dummy comment
void* lst = (decode_clo(env10827))[5];
//not do dummy comment
void* map = (decode_clo(env10827))[4];
//not do dummy comment
void* kont10500 = (decode_clo(env10827))[3];
//not do dummy comment
void* proc = (decode_clo(env10827))[2];
//not do dummy comment
void* cons = (decode_clo(env10827))[1];

//creating new closure instance
void** clo10967 = alloc_clo(lam10824_fptr, 5);

//setting env list
clo10967[1] = a1039010660;
clo10967[2] = kont10500;
clo10967[3] = cons;
clo10967[4] = proc;
clo10967[5] = map;
void* f1050310661 = encode_clo(clo10967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1050310661;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a1038910658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10829))[6];
//not do dummy comment
void* lst = (decode_clo(env10829))[5];
//not do dummy comment
void* map = (decode_clo(env10829))[4];
//not do dummy comment
void* kont10500 = (decode_clo(env10829))[3];
//not do dummy comment
void* proc = (decode_clo(env10829))[2];
//not do dummy comment
void* cons = (decode_clo(env10829))[1];

//creating new closure instance
void** clo10969 = alloc_clo(lam10826_fptr, 6);

//setting env list
clo10969[1] = cons;
clo10969[2] = proc;
clo10969[3] = kont10500;
clo10969[4] = map;
clo10969[5] = lst;
clo10969[6] = cdr;
void* f1050410659 = encode_clo(clo10969);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1050410659;
arg_buffer[3] = a1038910658;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a1038710654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env10831))[8];
//not do dummy comment
void* map = (decode_clo(env10831))[7];
//not do dummy comment
void* kont10500 = (decode_clo(env10831))[6];
//not do dummy comment
void* proc = (decode_clo(env10831))[5];
//not do dummy comment
void* car = (decode_clo(env10831))[4];
//not do dummy comment
void* cons = (decode_clo(env10831))[3];
//not do dummy comment
void* list = (decode_clo(env10831))[2];
//not do dummy comment
void* cdr = (decode_clo(env10831))[1];

//if-clause
bool if_guard10970 = is_true(a1038710654);
if(if_guard10970)
{

//creating new closure instance
void** clo10972 = alloc_clo(lam10820_fptr, 1);

//setting env list
clo10972[1] = kont10500;
void* f1050110655 = encode_clo(clo10972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1050110655;
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
void** clo10974 = alloc_clo(lam10828_fptr, 6);

//setting env list
clo10974[1] = cons;
clo10974[2] = proc;
clo10974[3] = kont10500;
clo10974[4] = map;
clo10974[5] = lst;
clo10974[6] = cdr;
void* f1050510657 = encode_clo(clo10974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1050510657;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10830 = encode_clo(alloc_clo(lam10830_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10832 = arg_buffer[1];
//reading env and args
void* kont10500 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10976 = alloc_clo(lam10830_fptr, 8);

//setting env list
clo10976[1] = cdr;
clo10976[2] = list;
clo10976[3] = cons;
clo10976[4] = car;
clo10976[5] = proc;
clo10976[6] = kont10500;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo10976[7] = map;
clo10976[8] = lst;
void* f1050610653 = encode_clo(clo10976);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1050610653;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam10833_fptr() // lam10833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10834 = arg_buffer[1];
//reading env and args
void* x1039410668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10507 = (decode_clo(env10834))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10507);
arg_buffer[2] = x1039410668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10507))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10833 = encode_clo(alloc_clo(lam10833_fptr, 0));

void* lam10835_fptr() // lam10835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10836 = arg_buffer[1];
//reading env and args
void* a1039910678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1039710674 = (decode_clo(env10836))[3];
//not do dummy comment
void* kont10507 = (decode_clo(env10836))[2];
//not do dummy comment
void* cons = (decode_clo(env10836))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10507;
arg_buffer[3] = a1039710674;
arg_buffer[4] = a1039910678;
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
void* a1039810676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1039710674 = (decode_clo(env10838))[5];
//not do dummy comment
void* op = (decode_clo(env10838))[4];
//not do dummy comment
void* filter = (decode_clo(env10838))[3];
//not do dummy comment
void* kont10507 = (decode_clo(env10838))[2];
//not do dummy comment
void* cons = (decode_clo(env10838))[1];

//creating new closure instance
void** clo10978 = alloc_clo(lam10835_fptr, 3);

//setting env list
clo10978[1] = cons;
clo10978[2] = kont10507;
clo10978[3] = a1039710674;
void* f1050910677 = encode_clo(clo10978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1050910677;
arg_buffer[3] = op;
arg_buffer[4] = a1039810676;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a1039710674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10840))[6];
//not do dummy comment
void* lst = (decode_clo(env10840))[5];
//not do dummy comment
void* op = (decode_clo(env10840))[4];
//not do dummy comment
void* filter = (decode_clo(env10840))[3];
//not do dummy comment
void* kont10507 = (decode_clo(env10840))[2];
//not do dummy comment
void* cons = (decode_clo(env10840))[1];

//creating new closure instance
void** clo10980 = alloc_clo(lam10837_fptr, 5);

//setting env list
clo10980[1] = cons;
clo10980[2] = kont10507;
clo10980[3] = filter;
clo10980[4] = op;
clo10980[5] = a1039710674;
void* f1051010675 = encode_clo(clo10980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1051010675;
arg_buffer[3] = lst;
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
void* a1040010680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env10842))[3];
//not do dummy comment
void* filter = (decode_clo(env10842))[2];
//not do dummy comment
void* kont10507 = (decode_clo(env10842))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont10507;
arg_buffer[3] = op;
arg_buffer[4] = a1040010680;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10841 = encode_clo(alloc_clo(lam10841_fptr, 0));

void* lam10843_fptr() // lam10843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10844 = arg_buffer[1];
//reading env and args
void* a1039610672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10844))[7];
//not do dummy comment
void* lst = (decode_clo(env10844))[6];
//not do dummy comment
void* op = (decode_clo(env10844))[5];
//not do dummy comment
void* filter = (decode_clo(env10844))[4];
//not do dummy comment
void* car = (decode_clo(env10844))[3];
//not do dummy comment
void* kont10507 = (decode_clo(env10844))[2];
//not do dummy comment
void* cons = (decode_clo(env10844))[1];

//if-clause
bool if_guard10981 = is_true(a1039610672);
if(if_guard10981)
{

//creating new closure instance
void** clo10983 = alloc_clo(lam10839_fptr, 6);

//setting env list
clo10983[1] = cons;
clo10983[2] = kont10507;
clo10983[3] = filter;
clo10983[4] = op;
clo10983[5] = lst;
clo10983[6] = cdr;
void* f1051110673 = encode_clo(clo10983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1051110673;
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
void** clo10985 = alloc_clo(lam10841_fptr, 3);

//setting env list
clo10985[1] = kont10507;
clo10985[2] = filter;
clo10985[3] = op;
void* f1051210679 = encode_clo(clo10985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1051210679;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10843 = encode_clo(alloc_clo(lam10843_fptr, 0));

void* lam10845_fptr() // lam10845 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10846 = arg_buffer[1];
//reading env and args
void* a1039510670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10846))[7];
//not do dummy comment
void* lst = (decode_clo(env10846))[6];
//not do dummy comment
void* op = (decode_clo(env10846))[5];
//not do dummy comment
void* filter = (decode_clo(env10846))[4];
//not do dummy comment
void* car = (decode_clo(env10846))[3];
//not do dummy comment
void* kont10507 = (decode_clo(env10846))[2];
//not do dummy comment
void* cons = (decode_clo(env10846))[1];

//creating new closure instance
void** clo10987 = alloc_clo(lam10843_fptr, 7);

//setting env list
clo10987[1] = cons;
clo10987[2] = kont10507;
clo10987[3] = car;
clo10987[4] = filter;
clo10987[5] = op;
clo10987[6] = lst;
clo10987[7] = cdr;
void* f1051310671 = encode_clo(clo10987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1051310671;
arg_buffer[3] = a1039510670;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10845 = encode_clo(alloc_clo(lam10845_fptr, 0));

void* lam10847_fptr() // lam10847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10848 = arg_buffer[1];
//reading env and args
void* a1039310666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env10848))[8];
//not do dummy comment
void* op = (decode_clo(env10848))[7];
//not do dummy comment
void* list = (decode_clo(env10848))[6];
//not do dummy comment
void* cdr = (decode_clo(env10848))[5];
//not do dummy comment
void* filter = (decode_clo(env10848))[4];
//not do dummy comment
void* car = (decode_clo(env10848))[3];
//not do dummy comment
void* kont10507 = (decode_clo(env10848))[2];
//not do dummy comment
void* cons = (decode_clo(env10848))[1];

//if-clause
bool if_guard10988 = is_true(a1039310666);
if(if_guard10988)
{

//creating new closure instance
void** clo10990 = alloc_clo(lam10833_fptr, 1);

//setting env list
clo10990[1] = kont10507;
void* f1050810667 = encode_clo(clo10990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1050810667;
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
void** clo10992 = alloc_clo(lam10845_fptr, 7);

//setting env list
clo10992[1] = cons;
clo10992[2] = kont10507;
clo10992[3] = car;
clo10992[4] = filter;
clo10992[5] = op;
clo10992[6] = lst;
clo10992[7] = cdr;
void* f1051410669 = encode_clo(clo10992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1051410669;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10847 = encode_clo(alloc_clo(lam10847_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10849 = arg_buffer[1];
//reading env and args
void* kont10507 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo10994 = alloc_clo(lam10847_fptr, 8);

//setting env list
clo10994[1] = cons;
clo10994[2] = kont10507;
clo10994[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo10994[4] = filter;
clo10994[5] = cdr;
clo10994[6] = list;
clo10994[7] = op;
clo10994[8] = lst;
void* f1051510665 = encode_clo(clo10994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1051510665;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam10850_fptr() // lam10850 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10851 = arg_buffer[1];
//reading env and args
void* a1040510688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1040310685 = (decode_clo(env10851))[3];
//not do dummy comment
void* drop = (decode_clo(env10851))[2];
//not do dummy comment
void* kont10516 = (decode_clo(env10851))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont10516;
arg_buffer[3] = a1040310685;
arg_buffer[4] = a1040510688;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10850 = encode_clo(alloc_clo(lam10850_fptr, 0));

void* lam10853_fptr() // lam10853 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10854 = arg_buffer[1];
//reading env and args
void* a1040310685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env10854))[4];
//not do dummy comment
void* kont10516 = (decode_clo(env10854))[3];
//not do dummy comment
void* n = (decode_clo(env10854))[2];
//not do dummy comment
void* _u45 = (decode_clo(env10854))[1];
mpz_t* mpzvar10995 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar10995, "1", 10);
void* a1040410686 = encode_mpz(mpzvar10995);

//creating new closure instance
void** clo10997 = alloc_clo(lam10850_fptr, 3);

//setting env list
clo10997[1] = kont10516;
clo10997[2] = drop;
clo10997[3] = a1040310685;
void* f1051710687 = encode_clo(clo10997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1051710687;
arg_buffer[3] = n;
arg_buffer[4] = a1040410686;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10853 = encode_clo(alloc_clo(lam10853_fptr, 0));

void* lam10855_fptr() // lam10855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10856 = arg_buffer[1];
//reading env and args
void* a1040210683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10856))[6];
//not do dummy comment
void* kont10516 = (decode_clo(env10856))[5];
//not do dummy comment
void* n = (decode_clo(env10856))[4];
//not do dummy comment
void* _u45 = (decode_clo(env10856))[3];
//not do dummy comment
void* lst = (decode_clo(env10856))[2];
//not do dummy comment
void* drop = (decode_clo(env10856))[1];

//if-clause
bool if_guard10998 = is_true(a1040210683);
if(if_guard10998)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10516);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10516))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11000 = alloc_clo(lam10853_fptr, 4);

//setting env list
clo11000[1] = _u45;
clo11000[2] = n;
clo11000[3] = kont10516;
clo11000[4] = drop;
void* f1051810684 = encode_clo(clo11000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1051810684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10855 = encode_clo(alloc_clo(lam10855_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10858 = arg_buffer[1];
//reading env and args
void* kont10516 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar11001 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11001, "0", 10);
void* a1040110681 = encode_mpz(mpzvar11001);

//creating new closure instance
void** clo11003 = alloc_clo(lam10855_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo11003[1] = drop;
clo11003[2] = lst;
clo11003[3] = _u45;
clo11003[4] = n;
clo11003[5] = kont10516;
clo11003[6] = cdr;
void* f1051910682 = encode_clo(clo11003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1051910682;
arg_buffer[3] = n;
arg_buffer[4] = a1040110681;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam10859_fptr() // lam10859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10860 = arg_buffer[1];
//reading env and args
void* a1040910696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1040710692 = (decode_clo(env10860))[3];
//not do dummy comment
void* proc = (decode_clo(env10860))[2];
//not do dummy comment
void* kont10520 = (decode_clo(env10860))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont10520;
arg_buffer[3] = a1040710692;
arg_buffer[4] = a1040910696;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10859 = encode_clo(alloc_clo(lam10859_fptr, 0));

void* lam10861_fptr() // lam10861 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10862 = arg_buffer[1];
//reading env and args
void* a1040810694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env10862))[5];
//not do dummy comment
void* a1040710692 = (decode_clo(env10862))[4];
//not do dummy comment
void* proc = (decode_clo(env10862))[3];
//not do dummy comment
void* kont10520 = (decode_clo(env10862))[2];
//not do dummy comment
void* acc = (decode_clo(env10862))[1];

//creating new closure instance
void** clo11005 = alloc_clo(lam10859_fptr, 3);

//setting env list
clo11005[1] = kont10520;
clo11005[2] = proc;
clo11005[3] = a1040710692;
void* f1052110695 = encode_clo(clo11005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1052110695;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1040810694;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10861 = encode_clo(alloc_clo(lam10861_fptr, 0));

void* lam10863_fptr() // lam10863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10864 = arg_buffer[1];
//reading env and args
void* a1040710692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10864))[6];
//not do dummy comment
void* foldr = (decode_clo(env10864))[5];
//not do dummy comment
void* lst = (decode_clo(env10864))[4];
//not do dummy comment
void* proc = (decode_clo(env10864))[3];
//not do dummy comment
void* kont10520 = (decode_clo(env10864))[2];
//not do dummy comment
void* acc = (decode_clo(env10864))[1];

//creating new closure instance
void** clo11007 = alloc_clo(lam10861_fptr, 5);

//setting env list
clo11007[1] = acc;
clo11007[2] = kont10520;
clo11007[3] = proc;
clo11007[4] = a1040710692;
clo11007[5] = foldr;
void* f1052210693 = encode_clo(clo11007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1052210693;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10863 = encode_clo(alloc_clo(lam10863_fptr, 0));

void* lam10865_fptr() // lam10865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10866 = arg_buffer[1];
//reading env and args
void* a1040610690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env10866))[7];
//not do dummy comment
void* car = (decode_clo(env10866))[6];
//not do dummy comment
void* foldr = (decode_clo(env10866))[5];
//not do dummy comment
void* lst = (decode_clo(env10866))[4];
//not do dummy comment
void* proc = (decode_clo(env10866))[3];
//not do dummy comment
void* kont10520 = (decode_clo(env10866))[2];
//not do dummy comment
void* acc = (decode_clo(env10866))[1];

//if-clause
bool if_guard11008 = is_true(a1040610690);
if(if_guard11008)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10520);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10520))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11010 = alloc_clo(lam10863_fptr, 6);

//setting env list
clo11010[1] = acc;
clo11010[2] = kont10520;
clo11010[3] = proc;
clo11010[4] = lst;
clo11010[5] = foldr;
clo11010[6] = cdr;
void* f1052310691 = encode_clo(clo11010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1052310691;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10865 = encode_clo(alloc_clo(lam10865_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10867 = arg_buffer[1];
//reading env and args
void* kont10520 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo11012 = alloc_clo(lam10865_fptr, 7);

//setting env list
clo11012[1] = acc;
clo11012[2] = kont10520;
clo11012[3] = proc;
clo11012[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo11012[5] = foldr;
clo11012[6] = car;
clo11012[7] = cdr;
void* f1052410689 = encode_clo(clo11012);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1052410689;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam10868_fptr() // lam10868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10869 = arg_buffer[1];
//reading env and args
void* a1041310704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10525 = (decode_clo(env10869))[3];
//not do dummy comment
void* cons = (decode_clo(env10869))[2];
//not do dummy comment
void* a1041110700 = (decode_clo(env10869))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont10525;
arg_buffer[3] = a1041110700;
arg_buffer[4] = a1041310704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10868 = encode_clo(alloc_clo(lam10868_fptr, 0));

void* lam10870_fptr() // lam10870 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10871 = arg_buffer[1];
//reading env and args
void* a1041210702 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10525 = (decode_clo(env10871))[5];
//not do dummy comment
void* append = (decode_clo(env10871))[4];
//not do dummy comment
void* lst2 = (decode_clo(env10871))[3];
//not do dummy comment
void* cons = (decode_clo(env10871))[2];
//not do dummy comment
void* a1041110700 = (decode_clo(env10871))[1];

//creating new closure instance
void** clo11014 = alloc_clo(lam10868_fptr, 3);

//setting env list
clo11014[1] = a1041110700;
clo11014[2] = cons;
clo11014[3] = kont10525;
void* f1052610703 = encode_clo(clo11014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1052610703;
arg_buffer[3] = a1041210702;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10870 = encode_clo(alloc_clo(lam10870_fptr, 0));

void* lam10872_fptr() // lam10872 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10873 = arg_buffer[1];
//reading env and args
void* a1041110700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env10873))[6];
//not do dummy comment
void* lst2 = (decode_clo(env10873))[5];
//not do dummy comment
void* lst1 = (decode_clo(env10873))[4];
//not do dummy comment
void* cons = (decode_clo(env10873))[3];
//not do dummy comment
void* kont10525 = (decode_clo(env10873))[2];
//not do dummy comment
void* cdr = (decode_clo(env10873))[1];

//creating new closure instance
void** clo11016 = alloc_clo(lam10870_fptr, 5);

//setting env list
clo11016[1] = a1041110700;
clo11016[2] = cons;
clo11016[3] = lst2;
clo11016[4] = append;
clo11016[5] = kont10525;
void* f1052710701 = encode_clo(clo11016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1052710701;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10872 = encode_clo(alloc_clo(lam10872_fptr, 0));

void* lam10874_fptr() // lam10874 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10875 = arg_buffer[1];
//reading env and args
void* a1041010698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env10875))[7];
//not do dummy comment
void* lst2 = (decode_clo(env10875))[6];
//not do dummy comment
void* cons = (decode_clo(env10875))[5];
//not do dummy comment
void* kont10525 = (decode_clo(env10875))[4];
//not do dummy comment
void* cdr = (decode_clo(env10875))[3];
//not do dummy comment
void* lst1 = (decode_clo(env10875))[2];
//not do dummy comment
void* car = (decode_clo(env10875))[1];

//if-clause
bool if_guard11017 = is_true(a1041010698);
if(if_guard11017)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10525);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10525))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo11019 = alloc_clo(lam10872_fptr, 6);

//setting env list
clo11019[1] = cdr;
clo11019[2] = kont10525;
clo11019[3] = cons;
clo11019[4] = lst1;
clo11019[5] = lst2;
clo11019[6] = append;
void* f1052810699 = encode_clo(clo11019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1052810699;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam10874 = encode_clo(alloc_clo(lam10874_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10876 = arg_buffer[1];
//reading env and args
void* kont10525 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo11021 = alloc_clo(lam10874_fptr, 7);

//setting env list
clo11021[1] = car;
clo11021[2] = lst1;
clo11021[3] = cdr;
clo11021[4] = kont10525;
clo11021[5] = cons;
clo11021[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo11021[7] = append;
void* f1052910697 = encode_clo(clo11021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1052910697;
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
void* _10877 = arg_buffer[1];
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

void* kont1053010705 = prim_car(lst);
void* lst10706 = prim_cdr(lst);
void* x1041410707 = apply_prim_hash(lst10706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1053010705);
arg_buffer[2] = x1041410707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1053010705))[0]);
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
void* _10878 = arg_buffer[1];
//reading env and args
void* kont10532 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1041510708 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10532);
arg_buffer[2] = x1041510708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10532))[0]);
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
void* _10879 = arg_buffer[1];
//reading env and args
void* kont10533 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1041610709 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10533);
arg_buffer[2] = x1041610709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10533))[0]);
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
void* _10880 = arg_buffer[1];
//reading env and args
void* kont10534 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1041710710 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10534);
arg_buffer[2] = x1041710710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10534))[0]);
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
void* _10881 = arg_buffer[1];
//reading env and args
void* kont10535 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1041810711 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10535);
arg_buffer[2] = x1041810711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10535))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10882 = arg_buffer[1];
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

void* kont1053610712 = prim_car(lst);
void* lst10713 = prim_cdr(lst);
void* x1041910714 = apply_prim_set(lst10713);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1053610712);
arg_buffer[2] = x1041910714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1053610712))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10883 = arg_buffer[1];
//reading env and args
void* kont10538 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1042010715 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10538);
arg_buffer[2] = x1042010715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10538))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10884 = arg_buffer[1];
//reading env and args
void* kont10539 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1042110716 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10539);
arg_buffer[2] = x1042110716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10539))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10885 = arg_buffer[1];
//reading env and args
void* kont10540 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1042210717 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10540);
arg_buffer[2] = x1042210717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10540))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10886 = arg_buffer[1];
//reading env and args
void* kont10541 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1042310718 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10541);
arg_buffer[2] = x1042310718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10541))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10887 = arg_buffer[1];
//reading env and args
void* kont10542 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1042410719 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10542);
arg_buffer[2] = x1042410719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10542))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10888 = arg_buffer[1];
//reading env and args
void* kont10543 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1042510720 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10543);
arg_buffer[2] = x1042510720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10543))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10889 = arg_buffer[1];
//reading env and args
void* kont10544 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x1042610721 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10544);
arg_buffer[2] = x1042610721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10544))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10890 = arg_buffer[1];
//reading env and args
void* kont10545 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x1042710722 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10545);
arg_buffer[2] = x1042710722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10545))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10891 = arg_buffer[1];
//reading env and args
void* kont10546 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x1042810723 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10546);
arg_buffer[2] = x1042810723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10546))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10892 = arg_buffer[1];
//reading env and args
void* kont10547 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1042910724 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10547);
arg_buffer[2] = x1042910724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10547))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10896 = arg_buffer[1];
//reading env and args
void* kont10548 = arg_buffer[2];
//Dummy comment
void* a1043010725 = encode_bool(false);

//if-clause
bool if_guard11022 = is_true(a1043010725);
if(if_guard11022)
{
mpz_t* mpzvar11023 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11023, "1", 10);
void* x1043110726 = encode_mpz(mpzvar11023);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10548);
arg_buffer[2] = x1043110726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10548))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar11024 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar11024, "2", 10);
void* x1043210727 = encode_mpz(mpzvar11024);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10548);
arg_buffer[2] = x1043210727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10548))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam10897_fptr() // lam10897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env10898 = arg_buffer[1];
//reading env and args
void* x1043310729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont10549 = (decode_clo(env10898))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont10549);
arg_buffer[2] = x1043310729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont10549))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam10897 = encode_clo(alloc_clo(lam10897_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _10899 = arg_buffer[1];
//reading env and args
void* kont10549 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo11026 = alloc_clo(lam10897_fptr, 1);

//setting env list
clo11026[1] = kont10549;
void* f1055010728 = encode_clo(clo11026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1055010728;
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

