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
void* _45793 = arg_buffer[1];
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

void* kont4552245626 = prim_car(lst);
void* lst45627 = prim_cdr(lst);
void* x4543245628 = apply_prim__u43(lst45627);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4552245626);
arg_buffer[2] = x4543245628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4552245626))[0]);
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
void* _45794 = arg_buffer[1];
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

void* kont4552445629 = prim_car(lst);
void* lst45630 = prim_cdr(lst);
void* x4543345631 = apply_prim__u45(lst45630);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4552445629);
arg_buffer[2] = x4543345631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4552445629))[0]);
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
void* _45795 = arg_buffer[1];
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

void* kont4552645632 = prim_car(lst);
void* lst45633 = prim_cdr(lst);
void* x4543445634 = apply_prim__u42(lst45633);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4552645632);
arg_buffer[2] = x4543445634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4552645632))[0]);
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
void* _45796 = arg_buffer[1];
//reading env and args
void* kont45528 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4543545635 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45528);
arg_buffer[2] = x4543545635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45528))[0]);
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
void* _45797 = arg_buffer[1];
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

void* kont4552945636 = prim_car(lst);
void* lst45637 = prim_cdr(lst);
void* x4543645638 = apply_prim__u47(lst45637);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4552945636);
arg_buffer[2] = x4543645638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4552945636))[0]);
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
void* _45798 = arg_buffer[1];
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

void* kont4553145639 = prim_car(lst);
void* lst45640 = prim_cdr(lst);
void* x4543745641 = apply_prim__u61(lst45640);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4553145639);
arg_buffer[2] = x4543745641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4553145639))[0]);
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
void* _45799 = arg_buffer[1];
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

void* kont4553345642 = prim_car(lst);
void* lst45643 = prim_cdr(lst);
void* x4543845644 = apply_prim__u62(lst45643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4553345642);
arg_buffer[2] = x4543845644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4553345642))[0]);
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
void* _45800 = arg_buffer[1];
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

void* kont4553545645 = prim_car(lst);
void* lst45646 = prim_cdr(lst);
void* x4543945647 = apply_prim__u60(lst45646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4553545645);
arg_buffer[2] = x4543945647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4553545645))[0]);
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
void* _45801 = arg_buffer[1];
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

void* kont4553745648 = prim_car(lst);
void* lst45649 = prim_cdr(lst);
void* x4544045650 = apply_prim__u60_u61(lst45649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4553745648);
arg_buffer[2] = x4544045650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4553745648))[0]);
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
void* _45802 = arg_buffer[1];
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

void* kont4553945651 = prim_car(lst);
void* lst45652 = prim_cdr(lst);
void* x4544145653 = apply_prim__u62_u61(lst45652);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4553945651);
arg_buffer[2] = x4544145653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4553945651))[0]);
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
void* _45803 = arg_buffer[1];
//reading env and args
void* kont45541 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4544245654 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45541);
arg_buffer[2] = x4544245654;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45541))[0]);
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
void* _45804 = arg_buffer[1];
//reading env and args
void* kont45542 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4544345655 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45542);
arg_buffer[2] = x4544345655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45542))[0]);
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
void* _45805 = arg_buffer[1];
//reading env and args
void* kont45543 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4544445656 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45543);
arg_buffer[2] = x4544445656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45543))[0]);
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
void* _45806 = arg_buffer[1];
//reading env and args
void* kont45544 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4544545657 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45544);
arg_buffer[2] = x4544545657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45544))[0]);
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
void* _45807 = arg_buffer[1];
//reading env and args
void* kont45545 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4544645658 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45545);
arg_buffer[2] = x4544645658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45545))[0]);
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
void* _45808 = arg_buffer[1];
//reading env and args
void* kont45546 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4544745659 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45546);
arg_buffer[2] = x4544745659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45546))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam45809_fptr() // lam45809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45810 = arg_buffer[1];
//reading env and args
void* a4545045663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env45810))[3];
//not do dummy comment
void* kont45547 = (decode_clo(env45810))[2];
//not do dummy comment
void* a4544845660 = (decode_clo(env45810))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45547;
arg_buffer[3] = a4544845660;
arg_buffer[4] = a4545045663;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45809 = encode_clo(alloc_clo(lam45809_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45813 = arg_buffer[1];
//reading env and args
void* kont45547 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46491 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46491, "0", 10);
void* a4544845660 = encode_mpz(mpzvar46491);
mpz_t* mpzvar46492 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46492, "2", 10);
void* a4544945661 = encode_mpz(mpzvar46492);

//creating new closure instance
void** clo46494 = alloc_clo(lam45809_fptr, 3);

//setting env list
clo46494[1] = a4544845660;
clo46494[2] = kont45547;
clo46494[3] = equal_u63;
void* f4554845662 = encode_clo(clo46494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4554845662;
arg_buffer[3] = x;
arg_buffer[4] = a4544945661;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam45814_fptr() // lam45814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45815 = arg_buffer[1];
//reading env and args
void* a4545345667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4545145664 = (decode_clo(env45815))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env45815))[2];
//not do dummy comment
void* kont45549 = (decode_clo(env45815))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45549;
arg_buffer[3] = a4545145664;
arg_buffer[4] = a4545345667;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45814 = encode_clo(alloc_clo(lam45814_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45818 = arg_buffer[1];
//reading env and args
void* kont45549 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46495 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46495, "1", 10);
void* a4545145664 = encode_mpz(mpzvar46495);
mpz_t* mpzvar46496 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46496, "2", 10);
void* a4545245665 = encode_mpz(mpzvar46496);

//creating new closure instance
void** clo46498 = alloc_clo(lam45814_fptr, 3);

//setting env list
clo46498[1] = kont45549;
clo46498[2] = equal_u63;
clo46498[3] = a4545145664;
void* f4555045666 = encode_clo(clo46498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4555045666;
arg_buffer[3] = x;
arg_buffer[4] = a4545245665;
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
void* _45819 = arg_buffer[1];
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

void* kont4555145668 = prim_car(x);
void* x45669 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4555145668);
arg_buffer[2] = x45669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4555145668))[0]);
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
void* _45820 = arg_buffer[1];
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

void* kont4555345670 = prim_car(lst);
void* lst45671 = prim_cdr(lst);
void* x4545445672 = apply_prim_and(lst45671);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4555345670);
arg_buffer[2] = x4545445672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4555345670))[0]);
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
void* _45821 = arg_buffer[1];
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

void* kont4555545673 = prim_car(lst);
void* lst45674 = prim_cdr(lst);
void* x4545545675 = apply_prim_or(lst45674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4555545673);
arg_buffer[2] = x4545545675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4555545673))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam45824_fptr() // lam45824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45825 = arg_buffer[1];
//reading env and args
void* a4546145685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45557 = (decode_clo(env45825))[3];
//not do dummy comment
void* x = (decode_clo(env45825))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env45825))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont45557;
arg_buffer[3] = x;
arg_buffer[4] = a4546145685;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45824 = encode_clo(alloc_clo(lam45824_fptr, 0));

void* lam45826_fptr() // lam45826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45827 = arg_buffer[1];
//reading env and args
void* a4545945682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45827))[5];
//not do dummy comment
void* lst = (decode_clo(env45827))[4];
//not do dummy comment
void* kont45557 = (decode_clo(env45827))[3];
//not do dummy comment
void* x = (decode_clo(env45827))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env45827))[1];

//if-clause
bool if_guard46499 = is_true(a4545945682);
if(if_guard46499)
{
void* x4546045683 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45557);
arg_buffer[2] = x4546045683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45557))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46501 = alloc_clo(lam45824_fptr, 3);

//setting env list
clo46501[1] = member_u63;
clo46501[2] = x;
clo46501[3] = kont45557;
void* f4555845684 = encode_clo(clo46501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4555845684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45826 = encode_clo(alloc_clo(lam45826_fptr, 0));

void* lam45828_fptr() // lam45828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45829 = arg_buffer[1];
//reading env and args
void* a4545845680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45829))[6];
//not do dummy comment
void* lst = (decode_clo(env45829))[5];
//not do dummy comment
void* kont45557 = (decode_clo(env45829))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env45829))[3];
//not do dummy comment
void* x = (decode_clo(env45829))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env45829))[1];

//creating new closure instance
void** clo46503 = alloc_clo(lam45826_fptr, 5);

//setting env list
clo46503[1] = member_u63;
clo46503[2] = x;
clo46503[3] = kont45557;
clo46503[4] = lst;
clo46503[5] = cdr;
void* f4555945681 = encode_clo(clo46503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4555945681;
arg_buffer[3] = a4545845680;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45828 = encode_clo(alloc_clo(lam45828_fptr, 0));

void* lam45830_fptr() // lam45830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45831 = arg_buffer[1];
//reading env and args
void* a4545645677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45831))[7];
//not do dummy comment
void* lst = (decode_clo(env45831))[6];
//not do dummy comment
void* kont45557 = (decode_clo(env45831))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env45831))[4];
//not do dummy comment
void* x = (decode_clo(env45831))[3];
//not do dummy comment
void* car = (decode_clo(env45831))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env45831))[1];

//if-clause
bool if_guard46504 = is_true(a4545645677);
if(if_guard46504)
{
void* x4545745678 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45557);
arg_buffer[2] = x4545745678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45557))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46506 = alloc_clo(lam45828_fptr, 6);

//setting env list
clo46506[1] = member_u63;
clo46506[2] = x;
clo46506[3] = equal_u63;
clo46506[4] = kont45557;
clo46506[5] = lst;
clo46506[6] = cdr;
void* f4556045679 = encode_clo(clo46506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4556045679;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45830 = encode_clo(alloc_clo(lam45830_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45832 = arg_buffer[1];
//reading env and args
void* kont45557 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46508 = alloc_clo(lam45830_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo46508[1] = member_u63;
clo46508[2] = car;
clo46508[3] = x;
clo46508[4] = equal_u63;
clo46508[5] = kont45557;
clo46508[6] = lst;
clo46508[7] = cdr;
void* f4556145676 = encode_clo(clo46508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4556145676;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam45833_fptr() // lam45833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45834 = arg_buffer[1];
//reading env and args
void* a4546545693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env45834))[4];
//not do dummy comment
void* kont45562 = (decode_clo(env45834))[3];
//not do dummy comment
void* a4546445691 = (decode_clo(env45834))[2];
//not do dummy comment
void* foldl = (decode_clo(env45834))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont45562;
arg_buffer[3] = fun;
arg_buffer[4] = a4546445691;
arg_buffer[5] = a4546545693;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45833 = encode_clo(alloc_clo(lam45833_fptr, 0));

void* lam45835_fptr() // lam45835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45836 = arg_buffer[1];
//reading env and args
void* a4546445691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45836))[5];
//not do dummy comment
void* lst = (decode_clo(env45836))[4];
//not do dummy comment
void* fun = (decode_clo(env45836))[3];
//not do dummy comment
void* kont45562 = (decode_clo(env45836))[2];
//not do dummy comment
void* foldl = (decode_clo(env45836))[1];

//creating new closure instance
void** clo46510 = alloc_clo(lam45833_fptr, 4);

//setting env list
clo46510[1] = foldl;
clo46510[2] = a4546445691;
clo46510[3] = kont45562;
clo46510[4] = fun;
void* f4556345692 = encode_clo(clo46510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4556345692;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45835 = encode_clo(alloc_clo(lam45835_fptr, 0));

void* lam45837_fptr() // lam45837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45838 = arg_buffer[1];
//reading env and args
void* a4546345689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45838))[6];
//not do dummy comment
void* lst = (decode_clo(env45838))[5];
//not do dummy comment
void* fun = (decode_clo(env45838))[4];
//not do dummy comment
void* acc = (decode_clo(env45838))[3];
//not do dummy comment
void* kont45562 = (decode_clo(env45838))[2];
//not do dummy comment
void* foldl = (decode_clo(env45838))[1];

//creating new closure instance
void** clo46512 = alloc_clo(lam45835_fptr, 5);

//setting env list
clo46512[1] = foldl;
clo46512[2] = kont45562;
clo46512[3] = fun;
clo46512[4] = lst;
clo46512[5] = cdr;
void* f4556445690 = encode_clo(clo46512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4556445690;
arg_buffer[3] = a4546345689;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45837 = encode_clo(alloc_clo(lam45837_fptr, 0));

void* lam45839_fptr() // lam45839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45840 = arg_buffer[1];
//reading env and args
void* a4546245687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45840))[7];
//not do dummy comment
void* lst = (decode_clo(env45840))[6];
//not do dummy comment
void* fun = (decode_clo(env45840))[5];
//not do dummy comment
void* acc = (decode_clo(env45840))[4];
//not do dummy comment
void* kont45562 = (decode_clo(env45840))[3];
//not do dummy comment
void* car = (decode_clo(env45840))[2];
//not do dummy comment
void* foldl = (decode_clo(env45840))[1];

//if-clause
bool if_guard46513 = is_true(a4546245687);
if(if_guard46513)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45562);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45562))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46515 = alloc_clo(lam45837_fptr, 6);

//setting env list
clo46515[1] = foldl;
clo46515[2] = kont45562;
clo46515[3] = acc;
clo46515[4] = fun;
clo46515[5] = lst;
clo46515[6] = cdr;
void* f4556545688 = encode_clo(clo46515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4556545688;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45839 = encode_clo(alloc_clo(lam45839_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45841 = arg_buffer[1];
//reading env and args
void* kont45562 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46517 = alloc_clo(lam45839_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo46517[1] = foldl;
clo46517[2] = car;
clo46517[3] = kont45562;
clo46517[4] = acc;
clo46517[5] = fun;
clo46517[6] = lst;
clo46517[7] = cdr;
void* f4556645686 = encode_clo(clo46517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4556645686;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam45842_fptr() // lam45842 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45843 = arg_buffer[1];
//reading env and args
void* a4546945701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45567 = (decode_clo(env45843))[3];
//not do dummy comment
void* a4546745697 = (decode_clo(env45843))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45843))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45567;
arg_buffer[3] = a4546745697;
arg_buffer[4] = a4546945701;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45842 = encode_clo(alloc_clo(lam45842_fptr, 0));

void* lam45844_fptr() // lam45844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45845 = arg_buffer[1];
//reading env and args
void* a4546845699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45567 = (decode_clo(env45845))[5];
//not do dummy comment
void* a4546745697 = (decode_clo(env45845))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45845))[3];
//not do dummy comment
void* lst2 = (decode_clo(env45845))[2];
//not do dummy comment
void* cons = (decode_clo(env45845))[1];

//creating new closure instance
void** clo46519 = alloc_clo(lam45842_fptr, 3);

//setting env list
clo46519[1] = reverse_u45helper;
clo46519[2] = a4546745697;
clo46519[3] = kont45567;
void* f4556845700 = encode_clo(clo46519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4556845700;
arg_buffer[3] = a4546845699;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45844 = encode_clo(alloc_clo(lam45844_fptr, 0));

void* lam45846_fptr() // lam45846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45847 = arg_buffer[1];
//reading env and args
void* a4546745697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45567 = (decode_clo(env45847))[6];
//not do dummy comment
void* lst = (decode_clo(env45847))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45847))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45847))[3];
//not do dummy comment
void* car = (decode_clo(env45847))[2];
//not do dummy comment
void* cons = (decode_clo(env45847))[1];

//creating new closure instance
void** clo46521 = alloc_clo(lam45844_fptr, 5);

//setting env list
clo46521[1] = cons;
clo46521[2] = lst2;
clo46521[3] = reverse_u45helper;
clo46521[4] = a4546745697;
clo46521[5] = kont45567;
void* f4556945698 = encode_clo(clo46521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4556945698;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45846 = encode_clo(alloc_clo(lam45846_fptr, 0));

void* lam45848_fptr() // lam45848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45849 = arg_buffer[1];
//reading env and args
void* a4546645695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45849))[7];
//not do dummy comment
void* kont45567 = (decode_clo(env45849))[6];
//not do dummy comment
void* lst = (decode_clo(env45849))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45849))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45849))[3];
//not do dummy comment
void* car = (decode_clo(env45849))[2];
//not do dummy comment
void* cons = (decode_clo(env45849))[1];

//if-clause
bool if_guard46522 = is_true(a4546645695);
if(if_guard46522)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45567);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45567))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46524 = alloc_clo(lam45846_fptr, 6);

//setting env list
clo46524[1] = cons;
clo46524[2] = car;
clo46524[3] = lst2;
clo46524[4] = reverse_u45helper;
clo46524[5] = lst;
clo46524[6] = kont45567;
void* f4557045696 = encode_clo(clo46524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4557045696;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45848 = encode_clo(alloc_clo(lam45848_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45850 = arg_buffer[1];
//reading env and args
void* kont45567 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46526 = alloc_clo(lam45848_fptr, 7);

//setting env list
clo46526[1] = cons;
clo46526[2] = car;
clo46526[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo46526[4] = reverse_u45helper;
clo46526[5] = lst;
clo46526[6] = kont45567;
clo46526[7] = cdr;
void* f4557145694 = encode_clo(clo46526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4557145694;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam45851_fptr() // lam45851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45852 = arg_buffer[1];
//reading env and args
void* a4547045703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45852))[3];
//not do dummy comment
void* kont45572 = (decode_clo(env45852))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45852))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45572;
arg_buffer[3] = lst;
arg_buffer[4] = a4547045703;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45851 = encode_clo(alloc_clo(lam45851_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45853 = arg_buffer[1];
//reading env and args
void* kont45572 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46528 = alloc_clo(lam45851_fptr, 3);

//setting env list
clo46528[1] = reverse_u45helper;
clo46528[2] = kont45572;
clo46528[3] = lst;
void* f4557345702 = encode_clo(clo46528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4557345702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam45854_fptr() // lam45854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45855 = arg_buffer[1];
//reading env and args
void* x4547345708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45574 = (decode_clo(env45855))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45574);
arg_buffer[2] = x4547345708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45574))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45854 = encode_clo(alloc_clo(lam45854_fptr, 0));

void* lam45856_fptr() // lam45856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45857 = arg_buffer[1];
//reading env and args
void* a4547845717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4547445710 = (decode_clo(env45857))[4];
//not do dummy comment
void* a4547645713 = (decode_clo(env45857))[3];
//not do dummy comment
void* kont45574 = (decode_clo(env45857))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env45857))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45574;
arg_buffer[3] = a4547445710;
arg_buffer[4] = a4547645713;
arg_buffer[5] = a4547845717;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45856 = encode_clo(alloc_clo(lam45856_fptr, 0));

void* lam45858_fptr() // lam45858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45859 = arg_buffer[1];
//reading env and args
void* a4547745715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4547445710 = (decode_clo(env45859))[6];
//not do dummy comment
void* a4547645713 = (decode_clo(env45859))[5];
//not do dummy comment
void* kont45574 = (decode_clo(env45859))[4];
//not do dummy comment
void* cons = (decode_clo(env45859))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45859))[2];
//not do dummy comment
void* lst2 = (decode_clo(env45859))[1];

//creating new closure instance
void** clo46530 = alloc_clo(lam45856_fptr, 4);

//setting env list
clo46530[1] = take_u45helper;
clo46530[2] = kont45574;
clo46530[3] = a4547645713;
clo46530[4] = a4547445710;
void* f4557645716 = encode_clo(clo46530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4557645716;
arg_buffer[3] = a4547745715;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45858 = encode_clo(alloc_clo(lam45858_fptr, 0));

void* lam45860_fptr() // lam45860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45861 = arg_buffer[1];
//reading env and args
void* a4547645713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4547445710 = (decode_clo(env45861))[7];
//not do dummy comment
void* lst = (decode_clo(env45861))[6];
//not do dummy comment
void* kont45574 = (decode_clo(env45861))[5];
//not do dummy comment
void* car = (decode_clo(env45861))[4];
//not do dummy comment
void* cons = (decode_clo(env45861))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45861))[2];
//not do dummy comment
void* lst2 = (decode_clo(env45861))[1];

//creating new closure instance
void** clo46532 = alloc_clo(lam45858_fptr, 6);

//setting env list
clo46532[1] = lst2;
clo46532[2] = take_u45helper;
clo46532[3] = cons;
clo46532[4] = kont45574;
clo46532[5] = a4547645713;
clo46532[6] = a4547445710;
void* f4557745714 = encode_clo(clo46532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4557745714;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45860 = encode_clo(alloc_clo(lam45860_fptr, 0));

void* lam45863_fptr() // lam45863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45864 = arg_buffer[1];
//reading env and args
void* a4547445710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45864))[8];
//not do dummy comment
void* kont45574 = (decode_clo(env45864))[7];
//not do dummy comment
void* cons = (decode_clo(env45864))[6];
//not do dummy comment
void* _u45 = (decode_clo(env45864))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env45864))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45864))[3];
//not do dummy comment
void* n = (decode_clo(env45864))[2];
//not do dummy comment
void* car = (decode_clo(env45864))[1];
mpz_t* mpzvar46533 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46533, "1", 10);
void* a4547545711 = encode_mpz(mpzvar46533);

//creating new closure instance
void** clo46535 = alloc_clo(lam45860_fptr, 7);

//setting env list
clo46535[1] = lst2;
clo46535[2] = take_u45helper;
clo46535[3] = cons;
clo46535[4] = car;
clo46535[5] = kont45574;
clo46535[6] = lst;
clo46535[7] = a4547445710;
void* f4557845712 = encode_clo(clo46535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4557845712;
arg_buffer[3] = n;
arg_buffer[4] = a4547545711;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45863 = encode_clo(alloc_clo(lam45863_fptr, 0));

void* lam45865_fptr() // lam45865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45866 = arg_buffer[1];
//reading env and args
void* a4547245706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45866))[10];
//not do dummy comment
void* lst = (decode_clo(env45866))[9];
//not do dummy comment
void* reverse = (decode_clo(env45866))[8];
//not do dummy comment
void* kont45574 = (decode_clo(env45866))[7];
//not do dummy comment
void* cons = (decode_clo(env45866))[6];
//not do dummy comment
void* _u45 = (decode_clo(env45866))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env45866))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45866))[3];
//not do dummy comment
void* n = (decode_clo(env45866))[2];
//not do dummy comment
void* car = (decode_clo(env45866))[1];

//if-clause
bool if_guard46536 = is_true(a4547245706);
if(if_guard46536)
{

//creating new closure instance
void** clo46538 = alloc_clo(lam45854_fptr, 1);

//setting env list
clo46538[1] = kont45574;
void* f4557545707 = encode_clo(clo46538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4557545707;
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
void** clo46540 = alloc_clo(lam45863_fptr, 8);

//setting env list
clo46540[1] = car;
clo46540[2] = n;
clo46540[3] = lst2;
clo46540[4] = take_u45helper;
clo46540[5] = _u45;
clo46540[6] = cons;
clo46540[7] = kont45574;
clo46540[8] = lst;
void* f4557945709 = encode_clo(clo46540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4557945709;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45865 = encode_clo(alloc_clo(lam45865_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45868 = arg_buffer[1];
//reading env and args
void* kont45574 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar46541 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46541, "0", 10);
void* a4547145704 = encode_mpz(mpzvar46541);

//creating new closure instance
void** clo46543 = alloc_clo(lam45865_fptr, 10);

//setting env list
clo46543[1] = car;
clo46543[2] = n;
clo46543[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo46543[4] = take_u45helper;
clo46543[5] = _u45;
clo46543[6] = cons;
clo46543[7] = kont45574;
clo46543[8] = reverse;
clo46543[9] = lst;
clo46543[10] = cdr;
void* f4558045705 = encode_clo(clo46543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4558045705;
arg_buffer[3] = n;
arg_buffer[4] = a4547145704;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam45869_fptr() // lam45869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45870 = arg_buffer[1];
//reading env and args
void* a4547945719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45870))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env45870))[3];
//not do dummy comment
void* n = (decode_clo(env45870))[2];
//not do dummy comment
void* kont45581 = (decode_clo(env45870))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45581;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4547945719;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45869 = encode_clo(alloc_clo(lam45869_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45871 = arg_buffer[1];
//reading env and args
void* kont45581 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46545 = alloc_clo(lam45869_fptr, 4);

//setting env list
clo46545[1] = kont45581;
clo46545[2] = n;
clo46545[3] = take_u45helper;
clo46545[4] = lst;
void* f4558245718 = encode_clo(clo46545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4558245718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam45873_fptr() // lam45873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45874 = arg_buffer[1];
//reading env and args
void* a4548445727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45583 = (decode_clo(env45874))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45874))[2];
//not do dummy comment
void* a4548245723 = (decode_clo(env45874))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont45583;
arg_buffer[3] = a4548245723;
arg_buffer[4] = a4548445727;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45873 = encode_clo(alloc_clo(lam45873_fptr, 0));

void* lam45875_fptr() // lam45875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45876 = arg_buffer[1];
//reading env and args
void* a4548345725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45583 = (decode_clo(env45876))[4];
//not do dummy comment
void* length = (decode_clo(env45876))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45876))[2];
//not do dummy comment
void* a4548245723 = (decode_clo(env45876))[1];

//creating new closure instance
void** clo46547 = alloc_clo(lam45873_fptr, 3);

//setting env list
clo46547[1] = a4548245723;
clo46547[2] = _u43;
clo46547[3] = kont45583;
void* f4558445726 = encode_clo(clo46547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4558445726;
arg_buffer[3] = a4548345725;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45875 = encode_clo(alloc_clo(lam45875_fptr, 0));

void* lam45878_fptr() // lam45878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45879 = arg_buffer[1];
//reading env and args
void* a4548045721 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45879))[5];
//not do dummy comment
void* kont45583 = (decode_clo(env45879))[4];
//not do dummy comment
void* lst = (decode_clo(env45879))[3];
//not do dummy comment
void* length = (decode_clo(env45879))[2];
//not do dummy comment
void* _u43 = (decode_clo(env45879))[1];

//if-clause
bool if_guard46548 = is_true(a4548045721);
if(if_guard46548)
{
mpz_t* mpzvar46549 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46549, "0", 10);
void* x4548145722 = encode_mpz(mpzvar46549);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45583);
arg_buffer[2] = x4548145722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45583))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar46550 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46550, "1", 10);
void* a4548245723 = encode_mpz(mpzvar46550);

//creating new closure instance
void** clo46552 = alloc_clo(lam45875_fptr, 4);

//setting env list
clo46552[1] = a4548245723;
clo46552[2] = _u43;
clo46552[3] = length;
clo46552[4] = kont45583;
void* f4558545724 = encode_clo(clo46552);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4558545724;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45878 = encode_clo(alloc_clo(lam45878_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45880 = arg_buffer[1];
//reading env and args
void* kont45583 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46554 = alloc_clo(lam45878_fptr, 5);

//setting env list
clo46554[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo46554[2] = length;
clo46554[3] = lst;
clo46554[4] = kont45583;
clo46554[5] = cdr;
void* f4558645720 = encode_clo(clo46554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4558645720;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam45881_fptr() // lam45881 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45882 = arg_buffer[1];
//reading env and args
void* x4548645731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45587 = (decode_clo(env45882))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45587);
arg_buffer[2] = x4548645731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45587))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45881 = encode_clo(alloc_clo(lam45881_fptr, 0));

void* lam45883_fptr() // lam45883 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45884 = arg_buffer[1];
//reading env and args
void* a4549045739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45587 = (decode_clo(env45884))[3];
//not do dummy comment
void* a4548845735 = (decode_clo(env45884))[2];
//not do dummy comment
void* cons = (decode_clo(env45884))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45587;
arg_buffer[3] = a4548845735;
arg_buffer[4] = a4549045739;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45883 = encode_clo(alloc_clo(lam45883_fptr, 0));

void* lam45885_fptr() // lam45885 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45886 = arg_buffer[1];
//reading env and args
void* a4548945737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4548845735 = (decode_clo(env45886))[5];
//not do dummy comment
void* proc = (decode_clo(env45886))[4];
//not do dummy comment
void* cons = (decode_clo(env45886))[3];
//not do dummy comment
void* map = (decode_clo(env45886))[2];
//not do dummy comment
void* kont45587 = (decode_clo(env45886))[1];

//creating new closure instance
void** clo46556 = alloc_clo(lam45883_fptr, 3);

//setting env list
clo46556[1] = cons;
clo46556[2] = a4548845735;
clo46556[3] = kont45587;
void* f4558945738 = encode_clo(clo46556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4558945738;
arg_buffer[3] = proc;
arg_buffer[4] = a4548945737;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45885 = encode_clo(alloc_clo(lam45885_fptr, 0));

void* lam45887_fptr() // lam45887 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45888 = arg_buffer[1];
//reading env and args
void* a4548845735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45888))[6];
//not do dummy comment
void* lst = (decode_clo(env45888))[5];
//not do dummy comment
void* proc = (decode_clo(env45888))[4];
//not do dummy comment
void* cons = (decode_clo(env45888))[3];
//not do dummy comment
void* map = (decode_clo(env45888))[2];
//not do dummy comment
void* kont45587 = (decode_clo(env45888))[1];

//creating new closure instance
void** clo46558 = alloc_clo(lam45885_fptr, 5);

//setting env list
clo46558[1] = kont45587;
clo46558[2] = map;
clo46558[3] = cons;
clo46558[4] = proc;
clo46558[5] = a4548845735;
void* f4559045736 = encode_clo(clo46558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4559045736;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45887 = encode_clo(alloc_clo(lam45887_fptr, 0));

void* lam45889_fptr() // lam45889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45890 = arg_buffer[1];
//reading env and args
void* a4548745733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45890))[6];
//not do dummy comment
void* lst = (decode_clo(env45890))[5];
//not do dummy comment
void* proc = (decode_clo(env45890))[4];
//not do dummy comment
void* cons = (decode_clo(env45890))[3];
//not do dummy comment
void* map = (decode_clo(env45890))[2];
//not do dummy comment
void* kont45587 = (decode_clo(env45890))[1];

//creating new closure instance
void** clo46560 = alloc_clo(lam45887_fptr, 6);

//setting env list
clo46560[1] = kont45587;
clo46560[2] = map;
clo46560[3] = cons;
clo46560[4] = proc;
clo46560[5] = lst;
clo46560[6] = cdr;
void* f4559145734 = encode_clo(clo46560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4559145734;
arg_buffer[3] = a4548745733;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45889 = encode_clo(alloc_clo(lam45889_fptr, 0));

void* lam45891_fptr() // lam45891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45892 = arg_buffer[1];
//reading env and args
void* a4548545729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45892))[8];
//not do dummy comment
void* proc = (decode_clo(env45892))[7];
//not do dummy comment
void* car = (decode_clo(env45892))[6];
//not do dummy comment
void* cons = (decode_clo(env45892))[5];
//not do dummy comment
void* list = (decode_clo(env45892))[4];
//not do dummy comment
void* cdr = (decode_clo(env45892))[3];
//not do dummy comment
void* map = (decode_clo(env45892))[2];
//not do dummy comment
void* kont45587 = (decode_clo(env45892))[1];

//if-clause
bool if_guard46561 = is_true(a4548545729);
if(if_guard46561)
{

//creating new closure instance
void** clo46563 = alloc_clo(lam45881_fptr, 1);

//setting env list
clo46563[1] = kont45587;
void* f4558845730 = encode_clo(clo46563);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4558845730;
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
void** clo46565 = alloc_clo(lam45889_fptr, 6);

//setting env list
clo46565[1] = kont45587;
clo46565[2] = map;
clo46565[3] = cons;
clo46565[4] = proc;
clo46565[5] = lst;
clo46565[6] = cdr;
void* f4559245732 = encode_clo(clo46565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4559245732;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45891 = encode_clo(alloc_clo(lam45891_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45893 = arg_buffer[1];
//reading env and args
void* kont45587 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46567 = alloc_clo(lam45891_fptr, 8);

//setting env list
clo46567[1] = kont45587;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo46567[2] = map;
clo46567[3] = cdr;
clo46567[4] = list;
clo46567[5] = cons;
clo46567[6] = car;
clo46567[7] = proc;
clo46567[8] = lst;
void* f4559345728 = encode_clo(clo46567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4559345728;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam45894_fptr() // lam45894 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45895 = arg_buffer[1];
//reading env and args
void* x4549245743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45594 = (decode_clo(env45895))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45594);
arg_buffer[2] = x4549245743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45594))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45894 = encode_clo(alloc_clo(lam45894_fptr, 0));

void* lam45896_fptr() // lam45896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45897 = arg_buffer[1];
//reading env and args
void* a4549745753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4549545749 = (decode_clo(env45897))[3];
//not do dummy comment
void* kont45594 = (decode_clo(env45897))[2];
//not do dummy comment
void* cons = (decode_clo(env45897))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45594;
arg_buffer[3] = a4549545749;
arg_buffer[4] = a4549745753;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45896 = encode_clo(alloc_clo(lam45896_fptr, 0));

void* lam45898_fptr() // lam45898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45899 = arg_buffer[1];
//reading env and args
void* a4549645751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45594 = (decode_clo(env45899))[5];
//not do dummy comment
void* filter = (decode_clo(env45899))[4];
//not do dummy comment
void* cons = (decode_clo(env45899))[3];
//not do dummy comment
void* a4549545749 = (decode_clo(env45899))[2];
//not do dummy comment
void* op = (decode_clo(env45899))[1];

//creating new closure instance
void** clo46569 = alloc_clo(lam45896_fptr, 3);

//setting env list
clo46569[1] = cons;
clo46569[2] = kont45594;
clo46569[3] = a4549545749;
void* f4559645752 = encode_clo(clo46569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4559645752;
arg_buffer[3] = op;
arg_buffer[4] = a4549645751;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45898 = encode_clo(alloc_clo(lam45898_fptr, 0));

void* lam45900_fptr() // lam45900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45901 = arg_buffer[1];
//reading env and args
void* a4549545749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45901))[6];
//not do dummy comment
void* lst = (decode_clo(env45901))[5];
//not do dummy comment
void* op = (decode_clo(env45901))[4];
//not do dummy comment
void* kont45594 = (decode_clo(env45901))[3];
//not do dummy comment
void* filter = (decode_clo(env45901))[2];
//not do dummy comment
void* cons = (decode_clo(env45901))[1];

//creating new closure instance
void** clo46571 = alloc_clo(lam45898_fptr, 5);

//setting env list
clo46571[1] = op;
clo46571[2] = a4549545749;
clo46571[3] = cons;
clo46571[4] = filter;
clo46571[5] = kont45594;
void* f4559745750 = encode_clo(clo46571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4559745750;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45900 = encode_clo(alloc_clo(lam45900_fptr, 0));

void* lam45902_fptr() // lam45902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45903 = arg_buffer[1];
//reading env and args
void* a4549845755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env45903))[3];
//not do dummy comment
void* kont45594 = (decode_clo(env45903))[2];
//not do dummy comment
void* filter = (decode_clo(env45903))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont45594;
arg_buffer[3] = op;
arg_buffer[4] = a4549845755;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45902 = encode_clo(alloc_clo(lam45902_fptr, 0));

void* lam45904_fptr() // lam45904 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45905 = arg_buffer[1];
//reading env and args
void* a4549445747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45905))[7];
//not do dummy comment
void* lst = (decode_clo(env45905))[6];
//not do dummy comment
void* op = (decode_clo(env45905))[5];
//not do dummy comment
void* kont45594 = (decode_clo(env45905))[4];
//not do dummy comment
void* cons = (decode_clo(env45905))[3];
//not do dummy comment
void* filter = (decode_clo(env45905))[2];
//not do dummy comment
void* car = (decode_clo(env45905))[1];

//if-clause
bool if_guard46572 = is_true(a4549445747);
if(if_guard46572)
{

//creating new closure instance
void** clo46574 = alloc_clo(lam45900_fptr, 6);

//setting env list
clo46574[1] = cons;
clo46574[2] = filter;
clo46574[3] = kont45594;
clo46574[4] = op;
clo46574[5] = lst;
clo46574[6] = cdr;
void* f4559845748 = encode_clo(clo46574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4559845748;
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
void** clo46576 = alloc_clo(lam45902_fptr, 3);

//setting env list
clo46576[1] = filter;
clo46576[2] = kont45594;
clo46576[3] = op;
void* f4559945754 = encode_clo(clo46576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4559945754;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45904 = encode_clo(alloc_clo(lam45904_fptr, 0));

void* lam45906_fptr() // lam45906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45907 = arg_buffer[1];
//reading env and args
void* a4549345745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45907))[7];
//not do dummy comment
void* lst = (decode_clo(env45907))[6];
//not do dummy comment
void* op = (decode_clo(env45907))[5];
//not do dummy comment
void* kont45594 = (decode_clo(env45907))[4];
//not do dummy comment
void* cons = (decode_clo(env45907))[3];
//not do dummy comment
void* filter = (decode_clo(env45907))[2];
//not do dummy comment
void* car = (decode_clo(env45907))[1];

//creating new closure instance
void** clo46578 = alloc_clo(lam45904_fptr, 7);

//setting env list
clo46578[1] = car;
clo46578[2] = filter;
clo46578[3] = cons;
clo46578[4] = kont45594;
clo46578[5] = op;
clo46578[6] = lst;
clo46578[7] = cdr;
void* f4560045746 = encode_clo(clo46578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4560045746;
arg_buffer[3] = a4549345745;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45906 = encode_clo(alloc_clo(lam45906_fptr, 0));

void* lam45908_fptr() // lam45908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45909 = arg_buffer[1];
//reading env and args
void* a4549145741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45909))[8];
//not do dummy comment
void* op = (decode_clo(env45909))[7];
//not do dummy comment
void* kont45594 = (decode_clo(env45909))[6];
//not do dummy comment
void* cons = (decode_clo(env45909))[5];
//not do dummy comment
void* list = (decode_clo(env45909))[4];
//not do dummy comment
void* cdr = (decode_clo(env45909))[3];
//not do dummy comment
void* filter = (decode_clo(env45909))[2];
//not do dummy comment
void* car = (decode_clo(env45909))[1];

//if-clause
bool if_guard46579 = is_true(a4549145741);
if(if_guard46579)
{

//creating new closure instance
void** clo46581 = alloc_clo(lam45894_fptr, 1);

//setting env list
clo46581[1] = kont45594;
void* f4559545742 = encode_clo(clo46581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4559545742;
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
void** clo46583 = alloc_clo(lam45906_fptr, 7);

//setting env list
clo46583[1] = car;
clo46583[2] = filter;
clo46583[3] = cons;
clo46583[4] = kont45594;
clo46583[5] = op;
clo46583[6] = lst;
clo46583[7] = cdr;
void* f4560145744 = encode_clo(clo46583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4560145744;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45908 = encode_clo(alloc_clo(lam45908_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45910 = arg_buffer[1];
//reading env and args
void* kont45594 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46585 = alloc_clo(lam45908_fptr, 8);

//setting env list
clo46585[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo46585[2] = filter;
clo46585[3] = cdr;
clo46585[4] = list;
clo46585[5] = cons;
clo46585[6] = kont45594;
clo46585[7] = op;
clo46585[8] = lst;
void* f4560245740 = encode_clo(clo46585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4560245740;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam45911_fptr() // lam45911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45912 = arg_buffer[1];
//reading env and args
void* a4550345763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4550145760 = (decode_clo(env45912))[3];
//not do dummy comment
void* drop = (decode_clo(env45912))[2];
//not do dummy comment
void* kont45603 = (decode_clo(env45912))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont45603;
arg_buffer[3] = a4550145760;
arg_buffer[4] = a4550345763;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45911 = encode_clo(alloc_clo(lam45911_fptr, 0));

void* lam45914_fptr() // lam45914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45915 = arg_buffer[1];
//reading env and args
void* a4550145760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env45915))[4];
//not do dummy comment
void* kont45603 = (decode_clo(env45915))[3];
//not do dummy comment
void* n = (decode_clo(env45915))[2];
//not do dummy comment
void* _u45 = (decode_clo(env45915))[1];
mpz_t* mpzvar46586 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46586, "1", 10);
void* a4550245761 = encode_mpz(mpzvar46586);

//creating new closure instance
void** clo46588 = alloc_clo(lam45911_fptr, 3);

//setting env list
clo46588[1] = kont45603;
clo46588[2] = drop;
clo46588[3] = a4550145760;
void* f4560445762 = encode_clo(clo46588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4560445762;
arg_buffer[3] = n;
arg_buffer[4] = a4550245761;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45914 = encode_clo(alloc_clo(lam45914_fptr, 0));

void* lam45916_fptr() // lam45916 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45917 = arg_buffer[1];
//reading env and args
void* a4550045758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45917))[6];
//not do dummy comment
void* kont45603 = (decode_clo(env45917))[5];
//not do dummy comment
void* n = (decode_clo(env45917))[4];
//not do dummy comment
void* _u45 = (decode_clo(env45917))[3];
//not do dummy comment
void* lst = (decode_clo(env45917))[2];
//not do dummy comment
void* drop = (decode_clo(env45917))[1];

//if-clause
bool if_guard46589 = is_true(a4550045758);
if(if_guard46589)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45603);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45603))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46591 = alloc_clo(lam45914_fptr, 4);

//setting env list
clo46591[1] = _u45;
clo46591[2] = n;
clo46591[3] = kont45603;
clo46591[4] = drop;
void* f4560545759 = encode_clo(clo46591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4560545759;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45916 = encode_clo(alloc_clo(lam45916_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45919 = arg_buffer[1];
//reading env and args
void* kont45603 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar46592 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46592, "0", 10);
void* a4549945756 = encode_mpz(mpzvar46592);

//creating new closure instance
void** clo46594 = alloc_clo(lam45916_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo46594[1] = drop;
clo46594[2] = lst;
clo46594[3] = _u45;
clo46594[4] = n;
clo46594[5] = kont45603;
clo46594[6] = cdr;
void* f4560645757 = encode_clo(clo46594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4560645757;
arg_buffer[3] = n;
arg_buffer[4] = a4549945756;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam45920_fptr() // lam45920 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45921 = arg_buffer[1];
//reading env and args
void* a4550745771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env45921))[3];
//not do dummy comment
void* a4550545767 = (decode_clo(env45921))[2];
//not do dummy comment
void* kont45607 = (decode_clo(env45921))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont45607;
arg_buffer[3] = a4550545767;
arg_buffer[4] = a4550745771;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45920 = encode_clo(alloc_clo(lam45920_fptr, 0));

void* lam45922_fptr() // lam45922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45923 = arg_buffer[1];
//reading env and args
void* a4550645769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env45923))[5];
//not do dummy comment
void* a4550545767 = (decode_clo(env45923))[4];
//not do dummy comment
void* kont45607 = (decode_clo(env45923))[3];
//not do dummy comment
void* proc = (decode_clo(env45923))[2];
//not do dummy comment
void* acc = (decode_clo(env45923))[1];

//creating new closure instance
void** clo46596 = alloc_clo(lam45920_fptr, 3);

//setting env list
clo46596[1] = kont45607;
clo46596[2] = a4550545767;
clo46596[3] = proc;
void* f4560845770 = encode_clo(clo46596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4560845770;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4550645769;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45922 = encode_clo(alloc_clo(lam45922_fptr, 0));

void* lam45924_fptr() // lam45924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45925 = arg_buffer[1];
//reading env and args
void* a4550545767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45925))[6];
//not do dummy comment
void* kont45607 = (decode_clo(env45925))[5];
//not do dummy comment
void* foldr = (decode_clo(env45925))[4];
//not do dummy comment
void* lst = (decode_clo(env45925))[3];
//not do dummy comment
void* proc = (decode_clo(env45925))[2];
//not do dummy comment
void* acc = (decode_clo(env45925))[1];

//creating new closure instance
void** clo46598 = alloc_clo(lam45922_fptr, 5);

//setting env list
clo46598[1] = acc;
clo46598[2] = proc;
clo46598[3] = kont45607;
clo46598[4] = a4550545767;
clo46598[5] = foldr;
void* f4560945768 = encode_clo(clo46598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4560945768;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45924 = encode_clo(alloc_clo(lam45924_fptr, 0));

void* lam45926_fptr() // lam45926 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45927 = arg_buffer[1];
//reading env and args
void* a4550445765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45927))[7];
//not do dummy comment
void* kont45607 = (decode_clo(env45927))[6];
//not do dummy comment
void* car = (decode_clo(env45927))[5];
//not do dummy comment
void* foldr = (decode_clo(env45927))[4];
//not do dummy comment
void* lst = (decode_clo(env45927))[3];
//not do dummy comment
void* proc = (decode_clo(env45927))[2];
//not do dummy comment
void* acc = (decode_clo(env45927))[1];

//if-clause
bool if_guard46599 = is_true(a4550445765);
if(if_guard46599)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45607);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45607))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46601 = alloc_clo(lam45924_fptr, 6);

//setting env list
clo46601[1] = acc;
clo46601[2] = proc;
clo46601[3] = lst;
clo46601[4] = foldr;
clo46601[5] = kont45607;
clo46601[6] = cdr;
void* f4561045766 = encode_clo(clo46601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4561045766;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45926 = encode_clo(alloc_clo(lam45926_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45928 = arg_buffer[1];
//reading env and args
void* kont45607 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46603 = alloc_clo(lam45926_fptr, 7);

//setting env list
clo46603[1] = acc;
clo46603[2] = proc;
clo46603[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo46603[4] = foldr;
clo46603[5] = car;
clo46603[6] = kont45607;
clo46603[7] = cdr;
void* f4561145764 = encode_clo(clo46603);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4561145764;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam45929_fptr() // lam45929 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45930 = arg_buffer[1];
//reading env and args
void* a4551145779 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4550945775 = (decode_clo(env45930))[3];
//not do dummy comment
void* cons = (decode_clo(env45930))[2];
//not do dummy comment
void* kont45612 = (decode_clo(env45930))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45612;
arg_buffer[3] = a4550945775;
arg_buffer[4] = a4551145779;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45929 = encode_clo(alloc_clo(lam45929_fptr, 0));

void* lam45931_fptr() // lam45931 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45932 = arg_buffer[1];
//reading env and args
void* a4551045777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4550945775 = (decode_clo(env45932))[5];
//not do dummy comment
void* append = (decode_clo(env45932))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45932))[3];
//not do dummy comment
void* cons = (decode_clo(env45932))[2];
//not do dummy comment
void* kont45612 = (decode_clo(env45932))[1];

//creating new closure instance
void** clo46605 = alloc_clo(lam45929_fptr, 3);

//setting env list
clo46605[1] = kont45612;
clo46605[2] = cons;
clo46605[3] = a4550945775;
void* f4561345778 = encode_clo(clo46605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4561345778;
arg_buffer[3] = a4551045777;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45931 = encode_clo(alloc_clo(lam45931_fptr, 0));

void* lam45933_fptr() // lam45933 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45934 = arg_buffer[1];
//reading env and args
void* a4550945775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45934))[6];
//not do dummy comment
void* append = (decode_clo(env45934))[5];
//not do dummy comment
void* lst2 = (decode_clo(env45934))[4];
//not do dummy comment
void* lst1 = (decode_clo(env45934))[3];
//not do dummy comment
void* cons = (decode_clo(env45934))[2];
//not do dummy comment
void* kont45612 = (decode_clo(env45934))[1];

//creating new closure instance
void** clo46607 = alloc_clo(lam45931_fptr, 5);

//setting env list
clo46607[1] = kont45612;
clo46607[2] = cons;
clo46607[3] = lst2;
clo46607[4] = append;
clo46607[5] = a4550945775;
void* f4561445776 = encode_clo(clo46607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4561445776;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45933 = encode_clo(alloc_clo(lam45933_fptr, 0));

void* lam45935_fptr() // lam45935 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45936 = arg_buffer[1];
//reading env and args
void* a4550845773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45936))[7];
//not do dummy comment
void* append = (decode_clo(env45936))[6];
//not do dummy comment
void* lst2 = (decode_clo(env45936))[5];
//not do dummy comment
void* lst1 = (decode_clo(env45936))[4];
//not do dummy comment
void* car = (decode_clo(env45936))[3];
//not do dummy comment
void* cons = (decode_clo(env45936))[2];
//not do dummy comment
void* kont45612 = (decode_clo(env45936))[1];

//if-clause
bool if_guard46608 = is_true(a4550845773);
if(if_guard46608)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45612);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45612))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46610 = alloc_clo(lam45933_fptr, 6);

//setting env list
clo46610[1] = kont45612;
clo46610[2] = cons;
clo46610[3] = lst1;
clo46610[4] = lst2;
clo46610[5] = append;
clo46610[6] = cdr;
void* f4561545774 = encode_clo(clo46610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4561545774;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45935 = encode_clo(alloc_clo(lam45935_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45937 = arg_buffer[1];
//reading env and args
void* kont45612 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46612 = alloc_clo(lam45935_fptr, 7);

//setting env list
clo46612[1] = kont45612;
clo46612[2] = cons;
clo46612[3] = car;
clo46612[4] = lst1;
clo46612[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo46612[6] = append;
clo46612[7] = cdr;
void* f4561645772 = encode_clo(clo46612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4561645772;
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
void* _45938 = arg_buffer[1];
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

void* kont4561745780 = prim_car(lst);
void* lst45781 = prim_cdr(lst);
void* x4551245782 = apply_prim_hash(lst45781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4561745780);
arg_buffer[2] = x4551245782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4561745780))[0]);
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
void* _45939 = arg_buffer[1];
//reading env and args
void* kont45619 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4551345783 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45619);
arg_buffer[2] = x4551345783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45619))[0]);
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
void* _45940 = arg_buffer[1];
//reading env and args
void* kont45620 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4551445784 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45620);
arg_buffer[2] = x4551445784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45620))[0]);
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
void* _45941 = arg_buffer[1];
//reading env and args
void* kont45621 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4551545785 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45621);
arg_buffer[2] = x4551545785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45621))[0]);
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
void* _45942 = arg_buffer[1];
//reading env and args
void* kont45622 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4551645786 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45622);
arg_buffer[2] = x4551645786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45622))[0]);
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
void* _45947 = arg_buffer[1];
//reading env and args
void* kont45623 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar46613 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46613, "100", 10);
void* a4551745787 = encode_mpz(mpzvar46613);
mpz_t* mpzvar46614 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46614, "80", 10);
void* a4551845788 = encode_mpz(mpzvar46614);
mpz_t* mpzvar46615 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46615, "10", 10);
void* a4551945789 = encode_mpz(mpzvar46615);
mpz_t* mpzvar46616 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46616, "2", 10);
void* a4552045790 = encode_mpz(mpzvar46616);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = kont45623;
arg_buffer[3] = a4551745787;
arg_buffer[4] = a4551845788;
arg_buffer[5] = a4551945789;
arg_buffer[6] = a4552045790;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam45948_fptr() // lam45948 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45949 = arg_buffer[1];
//reading env and args
void* x4552145792 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45624 = (decode_clo(env45949))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45624);
arg_buffer[2] = x4552145792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45624))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45948 = encode_clo(alloc_clo(lam45948_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45950 = arg_buffer[1];
//reading env and args
void* kont45624 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo46618 = alloc_clo(lam45948_fptr, 1);

//setting env list
clo46618[1] = kont45624;
void* f4562545791 = encode_clo(clo46618);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4562545791;
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

