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
void* _42731 = arg_buffer[1];
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

void* kont4243742554 = prim_car(lst);
void* lst42555 = prim_cdr(lst);
void* x4233742556 = apply_prim__u43(lst42555);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4243742554);
arg_buffer[2] = x4233742556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4243742554))[0]);
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
void* _42732 = arg_buffer[1];
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

void* kont4243942557 = prim_car(lst);
void* lst42558 = prim_cdr(lst);
void* x4233842559 = apply_prim_max(lst42558);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4243942557);
arg_buffer[2] = x4233842559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4243942557))[0]);
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
void* _42733 = arg_buffer[1];
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

void* kont4244142560 = prim_car(lst);
void* lst42561 = prim_cdr(lst);
void* x4233942562 = apply_prim__u45(lst42561);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4244142560);
arg_buffer[2] = x4233942562;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4244142560))[0]);
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
void* _42734 = arg_buffer[1];
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

void* kont4244342563 = prim_car(lst);
void* lst42564 = prim_cdr(lst);
void* x4234042565 = apply_prim__u42(lst42564);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4244342563);
arg_buffer[2] = x4234042565;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4244342563))[0]);
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
void* _42735 = arg_buffer[1];
//reading env and args
void* kont42445 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4234142566 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42445);
arg_buffer[2] = x4234142566;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42445))[0]);
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
void* _42736 = arg_buffer[1];
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

void* kont4244642567 = prim_car(lst);
void* lst42568 = prim_cdr(lst);
void* x4234242569 = apply_prim__u47(lst42568);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4244642567);
arg_buffer[2] = x4234242569;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4244642567))[0]);
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
void* _42737 = arg_buffer[1];
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

void* kont4244842570 = prim_car(lst);
void* lst42571 = prim_cdr(lst);
void* x4234342572 = apply_prim__u61(lst42571);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4244842570);
arg_buffer[2] = x4234342572;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4244842570))[0]);
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
void* _42738 = arg_buffer[1];
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

void* kont4245042573 = prim_car(lst);
void* lst42574 = prim_cdr(lst);
void* x4234442575 = apply_prim__u62(lst42574);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4245042573);
arg_buffer[2] = x4234442575;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4245042573))[0]);
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
void* _42739 = arg_buffer[1];
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

void* kont4245242576 = prim_car(lst);
void* lst42577 = prim_cdr(lst);
void* x4234542578 = apply_prim__u60(lst42577);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4245242576);
arg_buffer[2] = x4234542578;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4245242576))[0]);
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
void* _42740 = arg_buffer[1];
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

void* kont4245442579 = prim_car(lst);
void* lst42580 = prim_cdr(lst);
void* x4234642581 = apply_prim__u60_u61(lst42580);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4245442579);
arg_buffer[2] = x4234642581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4245442579))[0]);
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
void* _42741 = arg_buffer[1];
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

void* kont4245642582 = prim_car(lst);
void* lst42583 = prim_cdr(lst);
void* x4234742584 = apply_prim__u62_u61(lst42583);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4245642582);
arg_buffer[2] = x4234742584;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4245642582))[0]);
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
void* _42742 = arg_buffer[1];
//reading env and args
void* kont42458 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4234842585 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42458);
arg_buffer[2] = x4234842585;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42458))[0]);
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
void* _42743 = arg_buffer[1];
//reading env and args
void* kont42459 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4234942586 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42459);
arg_buffer[2] = x4234942586;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42459))[0]);
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
void* _42744 = arg_buffer[1];
//reading env and args
void* kont42460 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4235042587 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42460);
arg_buffer[2] = x4235042587;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42460))[0]);
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
void* _42745 = arg_buffer[1];
//reading env and args
void* kont42461 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4235142588 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42461);
arg_buffer[2] = x4235142588;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42461))[0]);
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
void* _42746 = arg_buffer[1];
//reading env and args
void* kont42462 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4235242589 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42462);
arg_buffer[2] = x4235242589;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42462))[0]);
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
void* _42747 = arg_buffer[1];
//reading env and args
void* kont42463 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4235342590 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42463);
arg_buffer[2] = x4235342590;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42463))[0]);
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
void* _42748 = arg_buffer[1];
//reading env and args
void* kont42464 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4235442591 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42464);
arg_buffer[2] = x4235442591;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42464))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam42749_fptr() // lam42749 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42750 = arg_buffer[1];
//reading env and args
void* a4235742595 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env42750))[3];
//not do dummy comment
void* a4235542592 = (decode_clo(env42750))[2];
//not do dummy comment
void* kont42465 = (decode_clo(env42750))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42465;
arg_buffer[3] = a4235542592;
arg_buffer[4] = a4235742595;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42749 = encode_clo(alloc_clo(lam42749_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42753 = arg_buffer[1];
//reading env and args
void* kont42465 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42899 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42899, "0", 10);
void* a4235542592 = encode_mpz(mpzvar42899);
mpz_t* mpzvar42900 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42900, "2", 10);
void* a4235642593 = encode_mpz(mpzvar42900);

//creating new closure instance
void** clo42902 = alloc_clo(lam42749_fptr, 3);

//setting env list
clo42902[1] = kont42465;
clo42902[2] = a4235542592;
clo42902[3] = equal_u63;
void* f4246642594 = encode_clo(clo42902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4246642594;
arg_buffer[3] = x;
arg_buffer[4] = a4235642593;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam42754_fptr() // lam42754 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42755 = arg_buffer[1];
//reading env and args
void* a4236042599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env42755))[3];
//not do dummy comment
void* kont42467 = (decode_clo(env42755))[2];
//not do dummy comment
void* a4235842596 = (decode_clo(env42755))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42467;
arg_buffer[3] = a4235842596;
arg_buffer[4] = a4236042599;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42754 = encode_clo(alloc_clo(lam42754_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42758 = arg_buffer[1];
//reading env and args
void* kont42467 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42903 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42903, "1", 10);
void* a4235842596 = encode_mpz(mpzvar42903);
mpz_t* mpzvar42904 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42904, "2", 10);
void* a4235942597 = encode_mpz(mpzvar42904);

//creating new closure instance
void** clo42906 = alloc_clo(lam42754_fptr, 3);

//setting env list
clo42906[1] = a4235842596;
clo42906[2] = kont42467;
clo42906[3] = equal_u63;
void* f4246842598 = encode_clo(clo42906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4246842598;
arg_buffer[3] = x;
arg_buffer[4] = a4235942597;
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
void* _42759 = arg_buffer[1];
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

void* kont4246942600 = prim_car(x);
void* x42601 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4246942600);
arg_buffer[2] = x42601;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4246942600))[0]);
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
void* _42760 = arg_buffer[1];
//reading env and args
void* kont42471 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4236142602 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42471);
arg_buffer[2] = x4236142602;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42471))[0]);
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
void* _42761 = arg_buffer[1];
//reading env and args
void* kont42472 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4236242603 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42472);
arg_buffer[2] = x4236242603;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42472))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam42764_fptr() // lam42764 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42765 = arg_buffer[1];
//reading env and args
void* a4236842613 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42473 = (decode_clo(env42765))[3];
//not do dummy comment
void* x = (decode_clo(env42765))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42765))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont42473;
arg_buffer[3] = x;
arg_buffer[4] = a4236842613;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42764 = encode_clo(alloc_clo(lam42764_fptr, 0));

void* lam42766_fptr() // lam42766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42767 = arg_buffer[1];
//reading env and args
void* a4236642610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42767))[5];
//not do dummy comment
void* kont42473 = (decode_clo(env42767))[4];
//not do dummy comment
void* lst = (decode_clo(env42767))[3];
//not do dummy comment
void* x = (decode_clo(env42767))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42767))[1];

//if-clause
bool if_guard42907 = is_true(a4236642610);
if(if_guard42907)
{
void* x4236742611 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42473);
arg_buffer[2] = x4236742611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42473))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42909 = alloc_clo(lam42764_fptr, 3);

//setting env list
clo42909[1] = member_u63;
clo42909[2] = x;
clo42909[3] = kont42473;
void* f4247442612 = encode_clo(clo42909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4247442612;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42766 = encode_clo(alloc_clo(lam42766_fptr, 0));

void* lam42768_fptr() // lam42768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42769 = arg_buffer[1];
//reading env and args
void* a4236542608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42769))[6];
//not do dummy comment
void* kont42473 = (decode_clo(env42769))[5];
//not do dummy comment
void* lst = (decode_clo(env42769))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env42769))[3];
//not do dummy comment
void* x = (decode_clo(env42769))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42769))[1];

//creating new closure instance
void** clo42911 = alloc_clo(lam42766_fptr, 5);

//setting env list
clo42911[1] = member_u63;
clo42911[2] = x;
clo42911[3] = lst;
clo42911[4] = kont42473;
clo42911[5] = cdr;
void* f4247542609 = encode_clo(clo42911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4247542609;
arg_buffer[3] = a4236542608;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42768 = encode_clo(alloc_clo(lam42768_fptr, 0));

void* lam42770_fptr() // lam42770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42771 = arg_buffer[1];
//reading env and args
void* a4236342605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42771))[7];
//not do dummy comment
void* kont42473 = (decode_clo(env42771))[6];
//not do dummy comment
void* lst = (decode_clo(env42771))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env42771))[4];
//not do dummy comment
void* x = (decode_clo(env42771))[3];
//not do dummy comment
void* car = (decode_clo(env42771))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42771))[1];

//if-clause
bool if_guard42912 = is_true(a4236342605);
if(if_guard42912)
{
void* x4236442606 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42473);
arg_buffer[2] = x4236442606;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42473))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42914 = alloc_clo(lam42768_fptr, 6);

//setting env list
clo42914[1] = member_u63;
clo42914[2] = x;
clo42914[3] = equal_u63;
clo42914[4] = lst;
clo42914[5] = kont42473;
clo42914[6] = cdr;
void* f4247642607 = encode_clo(clo42914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4247642607;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42770 = encode_clo(alloc_clo(lam42770_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42772 = arg_buffer[1];
//reading env and args
void* kont42473 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42916 = alloc_clo(lam42770_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo42916[1] = member_u63;
clo42916[2] = car;
clo42916[3] = x;
clo42916[4] = equal_u63;
clo42916[5] = lst;
clo42916[6] = kont42473;
clo42916[7] = cdr;
void* f4247742604 = encode_clo(clo42916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4247742604;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam42773_fptr() // lam42773 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42774 = arg_buffer[1];
//reading env and args
void* a4237242621 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4237142619 = (decode_clo(env42774))[4];
//not do dummy comment
void* kont42478 = (decode_clo(env42774))[3];
//not do dummy comment
void* fun = (decode_clo(env42774))[2];
//not do dummy comment
void* foldl = (decode_clo(env42774))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont42478;
arg_buffer[3] = fun;
arg_buffer[4] = a4237142619;
arg_buffer[5] = a4237242621;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42773 = encode_clo(alloc_clo(lam42773_fptr, 0));

void* lam42775_fptr() // lam42775 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42776 = arg_buffer[1];
//reading env and args
void* a4237142619 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42776))[5];
//not do dummy comment
void* lst = (decode_clo(env42776))[4];
//not do dummy comment
void* kont42478 = (decode_clo(env42776))[3];
//not do dummy comment
void* fun = (decode_clo(env42776))[2];
//not do dummy comment
void* foldl = (decode_clo(env42776))[1];

//creating new closure instance
void** clo42918 = alloc_clo(lam42773_fptr, 4);

//setting env list
clo42918[1] = foldl;
clo42918[2] = fun;
clo42918[3] = kont42478;
clo42918[4] = a4237142619;
void* f4247942620 = encode_clo(clo42918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4247942620;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42775 = encode_clo(alloc_clo(lam42775_fptr, 0));

void* lam42777_fptr() // lam42777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42778 = arg_buffer[1];
//reading env and args
void* a4237042617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42778))[6];
//not do dummy comment
void* lst = (decode_clo(env42778))[5];
//not do dummy comment
void* kont42478 = (decode_clo(env42778))[4];
//not do dummy comment
void* fun = (decode_clo(env42778))[3];
//not do dummy comment
void* acc = (decode_clo(env42778))[2];
//not do dummy comment
void* foldl = (decode_clo(env42778))[1];

//creating new closure instance
void** clo42920 = alloc_clo(lam42775_fptr, 5);

//setting env list
clo42920[1] = foldl;
clo42920[2] = fun;
clo42920[3] = kont42478;
clo42920[4] = lst;
clo42920[5] = cdr;
void* f4248042618 = encode_clo(clo42920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4248042618;
arg_buffer[3] = a4237042617;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42777 = encode_clo(alloc_clo(lam42777_fptr, 0));

void* lam42779_fptr() // lam42779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42780 = arg_buffer[1];
//reading env and args
void* a4236942615 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42780))[7];
//not do dummy comment
void* lst = (decode_clo(env42780))[6];
//not do dummy comment
void* kont42478 = (decode_clo(env42780))[5];
//not do dummy comment
void* fun = (decode_clo(env42780))[4];
//not do dummy comment
void* acc = (decode_clo(env42780))[3];
//not do dummy comment
void* car = (decode_clo(env42780))[2];
//not do dummy comment
void* foldl = (decode_clo(env42780))[1];

//if-clause
bool if_guard42921 = is_true(a4236942615);
if(if_guard42921)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42478);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42478))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42923 = alloc_clo(lam42777_fptr, 6);

//setting env list
clo42923[1] = foldl;
clo42923[2] = acc;
clo42923[3] = fun;
clo42923[4] = kont42478;
clo42923[5] = lst;
clo42923[6] = cdr;
void* f4248142616 = encode_clo(clo42923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4248142616;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42779 = encode_clo(alloc_clo(lam42779_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42781 = arg_buffer[1];
//reading env and args
void* kont42478 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42925 = alloc_clo(lam42779_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo42925[1] = foldl;
clo42925[2] = car;
clo42925[3] = acc;
clo42925[4] = fun;
clo42925[5] = kont42478;
clo42925[6] = lst;
clo42925[7] = cdr;
void* f4248242614 = encode_clo(clo42925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4248242614;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam42782_fptr() // lam42782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42783 = arg_buffer[1];
//reading env and args
void* a4237642629 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42783))[3];
//not do dummy comment
void* a4237442625 = (decode_clo(env42783))[2];
//not do dummy comment
void* kont42483 = (decode_clo(env42783))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42483;
arg_buffer[3] = a4237442625;
arg_buffer[4] = a4237642629;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42782 = encode_clo(alloc_clo(lam42782_fptr, 0));

void* lam42784_fptr() // lam42784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42785 = arg_buffer[1];
//reading env and args
void* a4237542627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42785))[5];
//not do dummy comment
void* a4237442625 = (decode_clo(env42785))[4];
//not do dummy comment
void* cons = (decode_clo(env42785))[3];
//not do dummy comment
void* lst2 = (decode_clo(env42785))[2];
//not do dummy comment
void* kont42483 = (decode_clo(env42785))[1];

//creating new closure instance
void** clo42927 = alloc_clo(lam42782_fptr, 3);

//setting env list
clo42927[1] = kont42483;
clo42927[2] = a4237442625;
clo42927[3] = reverse_u45helper;
void* f4248442628 = encode_clo(clo42927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4248442628;
arg_buffer[3] = a4237542627;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42784 = encode_clo(alloc_clo(lam42784_fptr, 0));

void* lam42786_fptr() // lam42786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42787 = arg_buffer[1];
//reading env and args
void* a4237442625 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42787))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42787))[5];
//not do dummy comment
void* car = (decode_clo(env42787))[4];
//not do dummy comment
void* cons = (decode_clo(env42787))[3];
//not do dummy comment
void* lst2 = (decode_clo(env42787))[2];
//not do dummy comment
void* kont42483 = (decode_clo(env42787))[1];

//creating new closure instance
void** clo42929 = alloc_clo(lam42784_fptr, 5);

//setting env list
clo42929[1] = kont42483;
clo42929[2] = lst2;
clo42929[3] = cons;
clo42929[4] = a4237442625;
clo42929[5] = reverse_u45helper;
void* f4248542626 = encode_clo(clo42929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4248542626;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42786 = encode_clo(alloc_clo(lam42786_fptr, 0));

void* lam42788_fptr() // lam42788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42789 = arg_buffer[1];
//reading env and args
void* a4237342623 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42789))[7];
//not do dummy comment
void* lst = (decode_clo(env42789))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42789))[5];
//not do dummy comment
void* car = (decode_clo(env42789))[4];
//not do dummy comment
void* cons = (decode_clo(env42789))[3];
//not do dummy comment
void* lst2 = (decode_clo(env42789))[2];
//not do dummy comment
void* kont42483 = (decode_clo(env42789))[1];

//if-clause
bool if_guard42930 = is_true(a4237342623);
if(if_guard42930)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42483);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42483))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42932 = alloc_clo(lam42786_fptr, 6);

//setting env list
clo42932[1] = kont42483;
clo42932[2] = lst2;
clo42932[3] = cons;
clo42932[4] = car;
clo42932[5] = reverse_u45helper;
clo42932[6] = lst;
void* f4248642624 = encode_clo(clo42932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4248642624;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42788 = encode_clo(alloc_clo(lam42788_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42790 = arg_buffer[1];
//reading env and args
void* kont42483 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42934 = alloc_clo(lam42788_fptr, 7);

//setting env list
clo42934[1] = kont42483;
clo42934[2] = lst2;
clo42934[3] = cons;
clo42934[4] = car;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo42934[5] = reverse_u45helper;
clo42934[6] = lst;
clo42934[7] = cdr;
void* f4248742622 = encode_clo(clo42934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4248742622;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam42791_fptr() // lam42791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42792 = arg_buffer[1];
//reading env and args
void* a4237742631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42488 = (decode_clo(env42792))[3];
//not do dummy comment
void* lst = (decode_clo(env42792))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42792))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42488;
arg_buffer[3] = lst;
arg_buffer[4] = a4237742631;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42791 = encode_clo(alloc_clo(lam42791_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42793 = arg_buffer[1];
//reading env and args
void* kont42488 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42936 = alloc_clo(lam42791_fptr, 3);

//setting env list
clo42936[1] = reverse_u45helper;
clo42936[2] = lst;
clo42936[3] = kont42488;
void* f4248942630 = encode_clo(clo42936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4248942630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam42794_fptr() // lam42794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42795 = arg_buffer[1];
//reading env and args
void* x4238042636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42490 = (decode_clo(env42795))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42490);
arg_buffer[2] = x4238042636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42490))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42794 = encode_clo(alloc_clo(lam42794_fptr, 0));

void* lam42796_fptr() // lam42796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42797 = arg_buffer[1];
//reading env and args
void* a4238542645 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42490 = (decode_clo(env42797))[4];
//not do dummy comment
void* a4238142638 = (decode_clo(env42797))[3];
//not do dummy comment
void* a4238342641 = (decode_clo(env42797))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env42797))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42490;
arg_buffer[3] = a4238142638;
arg_buffer[4] = a4238342641;
arg_buffer[5] = a4238542645;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42796 = encode_clo(alloc_clo(lam42796_fptr, 0));

void* lam42798_fptr() // lam42798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42799 = arg_buffer[1];
//reading env and args
void* a4238442643 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42490 = (decode_clo(env42799))[6];
//not do dummy comment
void* a4238142638 = (decode_clo(env42799))[5];
//not do dummy comment
void* a4238342641 = (decode_clo(env42799))[4];
//not do dummy comment
void* cons = (decode_clo(env42799))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42799))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42799))[1];

//creating new closure instance
void** clo42938 = alloc_clo(lam42796_fptr, 4);

//setting env list
clo42938[1] = take_u45helper;
clo42938[2] = a4238342641;
clo42938[3] = a4238142638;
clo42938[4] = kont42490;
void* f4249242644 = encode_clo(clo42938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4249242644;
arg_buffer[3] = a4238442643;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42798 = encode_clo(alloc_clo(lam42798_fptr, 0));

void* lam42800_fptr() // lam42800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42801 = arg_buffer[1];
//reading env and args
void* a4238342641 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42490 = (decode_clo(env42801))[7];
//not do dummy comment
void* lst = (decode_clo(env42801))[6];
//not do dummy comment
void* a4238142638 = (decode_clo(env42801))[5];
//not do dummy comment
void* car = (decode_clo(env42801))[4];
//not do dummy comment
void* cons = (decode_clo(env42801))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42801))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42801))[1];

//creating new closure instance
void** clo42940 = alloc_clo(lam42798_fptr, 6);

//setting env list
clo42940[1] = lst2;
clo42940[2] = take_u45helper;
clo42940[3] = cons;
clo42940[4] = a4238342641;
clo42940[5] = a4238142638;
clo42940[6] = kont42490;
void* f4249342642 = encode_clo(clo42940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4249342642;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42800 = encode_clo(alloc_clo(lam42800_fptr, 0));

void* lam42803_fptr() // lam42803 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42804 = arg_buffer[1];
//reading env and args
void* a4238142638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42490 = (decode_clo(env42804))[8];
//not do dummy comment
void* lst = (decode_clo(env42804))[7];
//not do dummy comment
void* cons = (decode_clo(env42804))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42804))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42804))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42804))[3];
//not do dummy comment
void* n = (decode_clo(env42804))[2];
//not do dummy comment
void* car = (decode_clo(env42804))[1];
mpz_t* mpzvar42941 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42941, "1", 10);
void* a4238242639 = encode_mpz(mpzvar42941);

//creating new closure instance
void** clo42943 = alloc_clo(lam42800_fptr, 7);

//setting env list
clo42943[1] = lst2;
clo42943[2] = take_u45helper;
clo42943[3] = cons;
clo42943[4] = car;
clo42943[5] = a4238142638;
clo42943[6] = lst;
clo42943[7] = kont42490;
void* f4249442640 = encode_clo(clo42943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4249442640;
arg_buffer[3] = n;
arg_buffer[4] = a4238242639;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42803 = encode_clo(alloc_clo(lam42803_fptr, 0));

void* lam42805_fptr() // lam42805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42806 = arg_buffer[1];
//reading env and args
void* a4237942634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42806))[10];
//not do dummy comment
void* kont42490 = (decode_clo(env42806))[9];
//not do dummy comment
void* lst = (decode_clo(env42806))[8];
//not do dummy comment
void* reverse = (decode_clo(env42806))[7];
//not do dummy comment
void* cons = (decode_clo(env42806))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42806))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42806))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42806))[3];
//not do dummy comment
void* n = (decode_clo(env42806))[2];
//not do dummy comment
void* car = (decode_clo(env42806))[1];

//if-clause
bool if_guard42944 = is_true(a4237942634);
if(if_guard42944)
{

//creating new closure instance
void** clo42946 = alloc_clo(lam42794_fptr, 1);

//setting env list
clo42946[1] = kont42490;
void* f4249142635 = encode_clo(clo42946);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4249142635;
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
void** clo42948 = alloc_clo(lam42803_fptr, 8);

//setting env list
clo42948[1] = car;
clo42948[2] = n;
clo42948[3] = lst2;
clo42948[4] = take_u45helper;
clo42948[5] = _u45;
clo42948[6] = cons;
clo42948[7] = lst;
clo42948[8] = kont42490;
void* f4249542637 = encode_clo(clo42948);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4249542637;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42805 = encode_clo(alloc_clo(lam42805_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42808 = arg_buffer[1];
//reading env and args
void* kont42490 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar42949 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42949, "0", 10);
void* a4237842632 = encode_mpz(mpzvar42949);

//creating new closure instance
void** clo42951 = alloc_clo(lam42805_fptr, 10);

//setting env list
clo42951[1] = car;
clo42951[2] = n;
clo42951[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo42951[4] = take_u45helper;
clo42951[5] = _u45;
clo42951[6] = cons;
clo42951[7] = reverse;
clo42951[8] = lst;
clo42951[9] = kont42490;
clo42951[10] = cdr;
void* f4249642633 = encode_clo(clo42951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4249642633;
arg_buffer[3] = n;
arg_buffer[4] = a4237842632;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam42809_fptr() // lam42809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42810 = arg_buffer[1];
//reading env and args
void* a4238642647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42810))[4];
//not do dummy comment
void* kont42497 = (decode_clo(env42810))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42810))[2];
//not do dummy comment
void* n = (decode_clo(env42810))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42497;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4238642647;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42809 = encode_clo(alloc_clo(lam42809_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42811 = arg_buffer[1];
//reading env and args
void* kont42497 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42953 = alloc_clo(lam42809_fptr, 4);

//setting env list
clo42953[1] = n;
clo42953[2] = take_u45helper;
clo42953[3] = kont42497;
clo42953[4] = lst;
void* f4249842646 = encode_clo(clo42953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4249842646;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam42813_fptr() // lam42813 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42814 = arg_buffer[1];
//reading env and args
void* a4239142655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4238942651 = (decode_clo(env42814))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42814))[2];
//not do dummy comment
void* kont42499 = (decode_clo(env42814))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont42499;
arg_buffer[3] = a4238942651;
arg_buffer[4] = a4239142655;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42813 = encode_clo(alloc_clo(lam42813_fptr, 0));

void* lam42815_fptr() // lam42815 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42816 = arg_buffer[1];
//reading env and args
void* a4239042653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4238942651 = (decode_clo(env42816))[4];
//not do dummy comment
void* length = (decode_clo(env42816))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42816))[2];
//not do dummy comment
void* kont42499 = (decode_clo(env42816))[1];

//creating new closure instance
void** clo42955 = alloc_clo(lam42813_fptr, 3);

//setting env list
clo42955[1] = kont42499;
clo42955[2] = _u43;
clo42955[3] = a4238942651;
void* f4250042654 = encode_clo(clo42955);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4250042654;
arg_buffer[3] = a4239042653;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42815 = encode_clo(alloc_clo(lam42815_fptr, 0));

void* lam42818_fptr() // lam42818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42819 = arg_buffer[1];
//reading env and args
void* a4238742649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42819))[5];
//not do dummy comment
void* lst = (decode_clo(env42819))[4];
//not do dummy comment
void* length = (decode_clo(env42819))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42819))[2];
//not do dummy comment
void* kont42499 = (decode_clo(env42819))[1];

//if-clause
bool if_guard42956 = is_true(a4238742649);
if(if_guard42956)
{
mpz_t* mpzvar42957 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42957, "0", 10);
void* x4238842650 = encode_mpz(mpzvar42957);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42499);
arg_buffer[2] = x4238842650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42499))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar42958 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42958, "1", 10);
void* a4238942651 = encode_mpz(mpzvar42958);

//creating new closure instance
void** clo42960 = alloc_clo(lam42815_fptr, 4);

//setting env list
clo42960[1] = kont42499;
clo42960[2] = _u43;
clo42960[3] = length;
clo42960[4] = a4238942651;
void* f4250142652 = encode_clo(clo42960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4250142652;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42818 = encode_clo(alloc_clo(lam42818_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42820 = arg_buffer[1];
//reading env and args
void* kont42499 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42962 = alloc_clo(lam42818_fptr, 5);

//setting env list
clo42962[1] = kont42499;
clo42962[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo42962[3] = length;
clo42962[4] = lst;
clo42962[5] = cdr;
void* f4250242648 = encode_clo(clo42962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4250242648;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam42821_fptr() // lam42821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42822 = arg_buffer[1];
//reading env and args
void* x4239342659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42503 = (decode_clo(env42822))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42503);
arg_buffer[2] = x4239342659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42503))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42821 = encode_clo(alloc_clo(lam42821_fptr, 0));

void* lam42823_fptr() // lam42823 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42824 = arg_buffer[1];
//reading env and args
void* a4239742667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env42824))[3];
//not do dummy comment
void* kont42503 = (decode_clo(env42824))[2];
//not do dummy comment
void* a4239542663 = (decode_clo(env42824))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42503;
arg_buffer[3] = a4239542663;
arg_buffer[4] = a4239742667;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42823 = encode_clo(alloc_clo(lam42823_fptr, 0));

void* lam42825_fptr() // lam42825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42826 = arg_buffer[1];
//reading env and args
void* a4239642665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env42826))[5];
//not do dummy comment
void* proc = (decode_clo(env42826))[4];
//not do dummy comment
void* cons = (decode_clo(env42826))[3];
//not do dummy comment
void* kont42503 = (decode_clo(env42826))[2];
//not do dummy comment
void* a4239542663 = (decode_clo(env42826))[1];

//creating new closure instance
void** clo42964 = alloc_clo(lam42823_fptr, 3);

//setting env list
clo42964[1] = a4239542663;
clo42964[2] = kont42503;
clo42964[3] = cons;
void* f4250542666 = encode_clo(clo42964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4250542666;
arg_buffer[3] = proc;
arg_buffer[4] = a4239642665;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42825 = encode_clo(alloc_clo(lam42825_fptr, 0));

void* lam42827_fptr() // lam42827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42828 = arg_buffer[1];
//reading env and args
void* a4239542663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42828))[6];
//not do dummy comment
void* map = (decode_clo(env42828))[5];
//not do dummy comment
void* proc = (decode_clo(env42828))[4];
//not do dummy comment
void* cons = (decode_clo(env42828))[3];
//not do dummy comment
void* kont42503 = (decode_clo(env42828))[2];
//not do dummy comment
void* cdr = (decode_clo(env42828))[1];

//creating new closure instance
void** clo42966 = alloc_clo(lam42825_fptr, 5);

//setting env list
clo42966[1] = a4239542663;
clo42966[2] = kont42503;
clo42966[3] = cons;
clo42966[4] = proc;
clo42966[5] = map;
void* f4250642664 = encode_clo(clo42966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4250642664;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42827 = encode_clo(alloc_clo(lam42827_fptr, 0));

void* lam42829_fptr() // lam42829 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42830 = arg_buffer[1];
//reading env and args
void* a4239442661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42830))[6];
//not do dummy comment
void* map = (decode_clo(env42830))[5];
//not do dummy comment
void* proc = (decode_clo(env42830))[4];
//not do dummy comment
void* cons = (decode_clo(env42830))[3];
//not do dummy comment
void* kont42503 = (decode_clo(env42830))[2];
//not do dummy comment
void* cdr = (decode_clo(env42830))[1];

//creating new closure instance
void** clo42968 = alloc_clo(lam42827_fptr, 6);

//setting env list
clo42968[1] = cdr;
clo42968[2] = kont42503;
clo42968[3] = cons;
clo42968[4] = proc;
clo42968[5] = map;
clo42968[6] = lst;
void* f4250742662 = encode_clo(clo42968);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4250742662;
arg_buffer[3] = a4239442661;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42829 = encode_clo(alloc_clo(lam42829_fptr, 0));

void* lam42831_fptr() // lam42831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42832 = arg_buffer[1];
//reading env and args
void* a4239242657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42832))[8];
//not do dummy comment
void* map = (decode_clo(env42832))[7];
//not do dummy comment
void* proc = (decode_clo(env42832))[6];
//not do dummy comment
void* car = (decode_clo(env42832))[5];
//not do dummy comment
void* cons = (decode_clo(env42832))[4];
//not do dummy comment
void* kont42503 = (decode_clo(env42832))[3];
//not do dummy comment
void* list = (decode_clo(env42832))[2];
//not do dummy comment
void* cdr = (decode_clo(env42832))[1];

//if-clause
bool if_guard42969 = is_true(a4239242657);
if(if_guard42969)
{

//creating new closure instance
void** clo42971 = alloc_clo(lam42821_fptr, 1);

//setting env list
clo42971[1] = kont42503;
void* f4250442658 = encode_clo(clo42971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4250442658;
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
void** clo42973 = alloc_clo(lam42829_fptr, 6);

//setting env list
clo42973[1] = cdr;
clo42973[2] = kont42503;
clo42973[3] = cons;
clo42973[4] = proc;
clo42973[5] = map;
clo42973[6] = lst;
void* f4250842660 = encode_clo(clo42973);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4250842660;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42831 = encode_clo(alloc_clo(lam42831_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42833 = arg_buffer[1];
//reading env and args
void* kont42503 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42975 = alloc_clo(lam42831_fptr, 8);

//setting env list
clo42975[1] = cdr;
clo42975[2] = list;
clo42975[3] = kont42503;
clo42975[4] = cons;
clo42975[5] = car;
clo42975[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo42975[7] = map;
clo42975[8] = lst;
void* f4250942656 = encode_clo(clo42975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4250942656;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam42834_fptr() // lam42834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42835 = arg_buffer[1];
//reading env and args
void* x4239942671 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42510 = (decode_clo(env42835))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42510);
arg_buffer[2] = x4239942671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42510))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42834 = encode_clo(alloc_clo(lam42834_fptr, 0));

void* lam42836_fptr() // lam42836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42837 = arg_buffer[1];
//reading env and args
void* a4240442681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42510 = (decode_clo(env42837))[3];
//not do dummy comment
void* cons = (decode_clo(env42837))[2];
//not do dummy comment
void* a4240242677 = (decode_clo(env42837))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42510;
arg_buffer[3] = a4240242677;
arg_buffer[4] = a4240442681;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42836 = encode_clo(alloc_clo(lam42836_fptr, 0));

void* lam42838_fptr() // lam42838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42839 = arg_buffer[1];
//reading env and args
void* a4240342679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* filter = (decode_clo(env42839))[5];
//not do dummy comment
void* kont42510 = (decode_clo(env42839))[4];
//not do dummy comment
void* op = (decode_clo(env42839))[3];
//not do dummy comment
void* cons = (decode_clo(env42839))[2];
//not do dummy comment
void* a4240242677 = (decode_clo(env42839))[1];

//creating new closure instance
void** clo42977 = alloc_clo(lam42836_fptr, 3);

//setting env list
clo42977[1] = a4240242677;
clo42977[2] = cons;
clo42977[3] = kont42510;
void* f4251242680 = encode_clo(clo42977);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4251242680;
arg_buffer[3] = op;
arg_buffer[4] = a4240342679;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42838 = encode_clo(alloc_clo(lam42838_fptr, 0));

void* lam42840_fptr() // lam42840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42841 = arg_buffer[1];
//reading env and args
void* a4240242677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42841))[6];
//not do dummy comment
void* lst = (decode_clo(env42841))[5];
//not do dummy comment
void* filter = (decode_clo(env42841))[4];
//not do dummy comment
void* cons = (decode_clo(env42841))[3];
//not do dummy comment
void* kont42510 = (decode_clo(env42841))[2];
//not do dummy comment
void* op = (decode_clo(env42841))[1];

//creating new closure instance
void** clo42979 = alloc_clo(lam42838_fptr, 5);

//setting env list
clo42979[1] = a4240242677;
clo42979[2] = cons;
clo42979[3] = op;
clo42979[4] = kont42510;
clo42979[5] = filter;
void* f4251342678 = encode_clo(clo42979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4251342678;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42840 = encode_clo(alloc_clo(lam42840_fptr, 0));

void* lam42842_fptr() // lam42842 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42843 = arg_buffer[1];
//reading env and args
void* a4240542683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* filter = (decode_clo(env42843))[3];
//not do dummy comment
void* kont42510 = (decode_clo(env42843))[2];
//not do dummy comment
void* op = (decode_clo(env42843))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont42510;
arg_buffer[3] = op;
arg_buffer[4] = a4240542683;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42842 = encode_clo(alloc_clo(lam42842_fptr, 0));

void* lam42844_fptr() // lam42844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42845 = arg_buffer[1];
//reading env and args
void* a4240142675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42845))[7];
//not do dummy comment
void* lst = (decode_clo(env42845))[6];
//not do dummy comment
void* cons = (decode_clo(env42845))[5];
//not do dummy comment
void* kont42510 = (decode_clo(env42845))[4];
//not do dummy comment
void* op = (decode_clo(env42845))[3];
//not do dummy comment
void* filter = (decode_clo(env42845))[2];
//not do dummy comment
void* car = (decode_clo(env42845))[1];

//if-clause
bool if_guard42980 = is_true(a4240142675);
if(if_guard42980)
{

//creating new closure instance
void** clo42982 = alloc_clo(lam42840_fptr, 6);

//setting env list
clo42982[1] = op;
clo42982[2] = kont42510;
clo42982[3] = cons;
clo42982[4] = filter;
clo42982[5] = lst;
clo42982[6] = cdr;
void* f4251442676 = encode_clo(clo42982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4251442676;
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
void** clo42984 = alloc_clo(lam42842_fptr, 3);

//setting env list
clo42984[1] = op;
clo42984[2] = kont42510;
clo42984[3] = filter;
void* f4251542682 = encode_clo(clo42984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4251542682;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42844 = encode_clo(alloc_clo(lam42844_fptr, 0));

void* lam42846_fptr() // lam42846 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42847 = arg_buffer[1];
//reading env and args
void* a4240042673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42847))[7];
//not do dummy comment
void* lst = (decode_clo(env42847))[6];
//not do dummy comment
void* cons = (decode_clo(env42847))[5];
//not do dummy comment
void* kont42510 = (decode_clo(env42847))[4];
//not do dummy comment
void* op = (decode_clo(env42847))[3];
//not do dummy comment
void* filter = (decode_clo(env42847))[2];
//not do dummy comment
void* car = (decode_clo(env42847))[1];

//creating new closure instance
void** clo42986 = alloc_clo(lam42844_fptr, 7);

//setting env list
clo42986[1] = car;
clo42986[2] = filter;
clo42986[3] = op;
clo42986[4] = kont42510;
clo42986[5] = cons;
clo42986[6] = lst;
clo42986[7] = cdr;
void* f4251642674 = encode_clo(clo42986);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4251642674;
arg_buffer[3] = a4240042673;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42846 = encode_clo(alloc_clo(lam42846_fptr, 0));

void* lam42848_fptr() // lam42848 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42849 = arg_buffer[1];
//reading env and args
void* a4239842669 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42849))[8];
//not do dummy comment
void* cons = (decode_clo(env42849))[7];
//not do dummy comment
void* list = (decode_clo(env42849))[6];
//not do dummy comment
void* cdr = (decode_clo(env42849))[5];
//not do dummy comment
void* kont42510 = (decode_clo(env42849))[4];
//not do dummy comment
void* op = (decode_clo(env42849))[3];
//not do dummy comment
void* filter = (decode_clo(env42849))[2];
//not do dummy comment
void* car = (decode_clo(env42849))[1];

//if-clause
bool if_guard42987 = is_true(a4239842669);
if(if_guard42987)
{

//creating new closure instance
void** clo42989 = alloc_clo(lam42834_fptr, 1);

//setting env list
clo42989[1] = kont42510;
void* f4251142670 = encode_clo(clo42989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4251142670;
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
void** clo42991 = alloc_clo(lam42846_fptr, 7);

//setting env list
clo42991[1] = car;
clo42991[2] = filter;
clo42991[3] = op;
clo42991[4] = kont42510;
clo42991[5] = cons;
clo42991[6] = lst;
clo42991[7] = cdr;
void* f4251742672 = encode_clo(clo42991);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4251742672;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42848 = encode_clo(alloc_clo(lam42848_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42850 = arg_buffer[1];
//reading env and args
void* kont42510 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42993 = alloc_clo(lam42848_fptr, 8);

//setting env list
clo42993[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo42993[2] = filter;
clo42993[3] = op;
clo42993[4] = kont42510;
clo42993[5] = cdr;
clo42993[6] = list;
clo42993[7] = cons;
clo42993[8] = lst;
void* f4251842668 = encode_clo(clo42993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4251842668;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam42851_fptr() // lam42851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42852 = arg_buffer[1];
//reading env and args
void* a4241042691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42519 = (decode_clo(env42852))[3];
//not do dummy comment
void* drop = (decode_clo(env42852))[2];
//not do dummy comment
void* a4240842688 = (decode_clo(env42852))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont42519;
arg_buffer[3] = a4240842688;
arg_buffer[4] = a4241042691;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42851 = encode_clo(alloc_clo(lam42851_fptr, 0));

void* lam42854_fptr() // lam42854 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42855 = arg_buffer[1];
//reading env and args
void* a4240842688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42519 = (decode_clo(env42855))[4];
//not do dummy comment
void* drop = (decode_clo(env42855))[3];
//not do dummy comment
void* n = (decode_clo(env42855))[2];
//not do dummy comment
void* _u45 = (decode_clo(env42855))[1];
mpz_t* mpzvar42994 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42994, "1", 10);
void* a4240942689 = encode_mpz(mpzvar42994);

//creating new closure instance
void** clo42996 = alloc_clo(lam42851_fptr, 3);

//setting env list
clo42996[1] = a4240842688;
clo42996[2] = drop;
clo42996[3] = kont42519;
void* f4252042690 = encode_clo(clo42996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4252042690;
arg_buffer[3] = n;
arg_buffer[4] = a4240942689;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42854 = encode_clo(alloc_clo(lam42854_fptr, 0));

void* lam42856_fptr() // lam42856 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42857 = arg_buffer[1];
//reading env and args
void* a4240742686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env42857))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42857))[5];
//not do dummy comment
void* kont42519 = (decode_clo(env42857))[4];
//not do dummy comment
void* cdr = (decode_clo(env42857))[3];
//not do dummy comment
void* lst = (decode_clo(env42857))[2];
//not do dummy comment
void* drop = (decode_clo(env42857))[1];

//if-clause
bool if_guard42997 = is_true(a4240742686);
if(if_guard42997)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42519);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42519))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42999 = alloc_clo(lam42854_fptr, 4);

//setting env list
clo42999[1] = _u45;
clo42999[2] = n;
clo42999[3] = drop;
clo42999[4] = kont42519;
void* f4252142687 = encode_clo(clo42999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4252142687;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42856 = encode_clo(alloc_clo(lam42856_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42859 = arg_buffer[1];
//reading env and args
void* kont42519 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar43000 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43000, "0", 10);
void* a4240642684 = encode_mpz(mpzvar43000);

//creating new closure instance
void** clo43002 = alloc_clo(lam42856_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo43002[1] = drop;
clo43002[2] = lst;
clo43002[3] = cdr;
clo43002[4] = kont42519;
clo43002[5] = _u45;
clo43002[6] = n;
void* f4252242685 = encode_clo(clo43002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4252242685;
arg_buffer[3] = n;
arg_buffer[4] = a4240642684;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam42860_fptr() // lam42860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42861 = arg_buffer[1];
//reading env and args
void* a4241442699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4241242695 = (decode_clo(env42861))[3];
//not do dummy comment
void* kont42523 = (decode_clo(env42861))[2];
//not do dummy comment
void* proc = (decode_clo(env42861))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont42523;
arg_buffer[3] = a4241242695;
arg_buffer[4] = a4241442699;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42860 = encode_clo(alloc_clo(lam42860_fptr, 0));

void* lam42862_fptr() // lam42862 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42863 = arg_buffer[1];
//reading env and args
void* a4241342697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4241242695 = (decode_clo(env42863))[5];
//not do dummy comment
void* foldr = (decode_clo(env42863))[4];
//not do dummy comment
void* kont42523 = (decode_clo(env42863))[3];
//not do dummy comment
void* proc = (decode_clo(env42863))[2];
//not do dummy comment
void* acc = (decode_clo(env42863))[1];

//creating new closure instance
void** clo43004 = alloc_clo(lam42860_fptr, 3);

//setting env list
clo43004[1] = proc;
clo43004[2] = kont42523;
clo43004[3] = a4241242695;
void* f4252442698 = encode_clo(clo43004);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4252442698;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4241342697;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42862 = encode_clo(alloc_clo(lam42862_fptr, 0));

void* lam42864_fptr() // lam42864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42865 = arg_buffer[1];
//reading env and args
void* a4241242695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42865))[6];
//not do dummy comment
void* kont42523 = (decode_clo(env42865))[5];
//not do dummy comment
void* foldr = (decode_clo(env42865))[4];
//not do dummy comment
void* lst = (decode_clo(env42865))[3];
//not do dummy comment
void* proc = (decode_clo(env42865))[2];
//not do dummy comment
void* acc = (decode_clo(env42865))[1];

//creating new closure instance
void** clo43006 = alloc_clo(lam42862_fptr, 5);

//setting env list
clo43006[1] = acc;
clo43006[2] = proc;
clo43006[3] = kont42523;
clo43006[4] = foldr;
clo43006[5] = a4241242695;
void* f4252542696 = encode_clo(clo43006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4252542696;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42864 = encode_clo(alloc_clo(lam42864_fptr, 0));

void* lam42866_fptr() // lam42866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42867 = arg_buffer[1];
//reading env and args
void* a4241142693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42867))[7];
//not do dummy comment
void* car = (decode_clo(env42867))[6];
//not do dummy comment
void* kont42523 = (decode_clo(env42867))[5];
//not do dummy comment
void* foldr = (decode_clo(env42867))[4];
//not do dummy comment
void* lst = (decode_clo(env42867))[3];
//not do dummy comment
void* proc = (decode_clo(env42867))[2];
//not do dummy comment
void* acc = (decode_clo(env42867))[1];

//if-clause
bool if_guard43007 = is_true(a4241142693);
if(if_guard43007)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42523);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42523))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43009 = alloc_clo(lam42864_fptr, 6);

//setting env list
clo43009[1] = acc;
clo43009[2] = proc;
clo43009[3] = lst;
clo43009[4] = foldr;
clo43009[5] = kont42523;
clo43009[6] = cdr;
void* f4252642694 = encode_clo(clo43009);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4252642694;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42866 = encode_clo(alloc_clo(lam42866_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42868 = arg_buffer[1];
//reading env and args
void* kont42523 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo43011 = alloc_clo(lam42866_fptr, 7);

//setting env list
clo43011[1] = acc;
clo43011[2] = proc;
clo43011[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo43011[4] = foldr;
clo43011[5] = kont42523;
clo43011[6] = car;
clo43011[7] = cdr;
void* f4252742692 = encode_clo(clo43011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4252742692;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam42869_fptr() // lam42869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42870 = arg_buffer[1];
//reading env and args
void* a4241842707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4241642703 = (decode_clo(env42870))[3];
//not do dummy comment
void* kont42528 = (decode_clo(env42870))[2];
//not do dummy comment
void* cons = (decode_clo(env42870))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42528;
arg_buffer[3] = a4241642703;
arg_buffer[4] = a4241842707;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42869 = encode_clo(alloc_clo(lam42869_fptr, 0));

void* lam42871_fptr() // lam42871 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42872 = arg_buffer[1];
//reading env and args
void* a4241742705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42528 = (decode_clo(env42872))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42872))[4];
//not do dummy comment
void* cons = (decode_clo(env42872))[3];
//not do dummy comment
void* append = (decode_clo(env42872))[2];
//not do dummy comment
void* a4241642703 = (decode_clo(env42872))[1];

//creating new closure instance
void** clo43013 = alloc_clo(lam42869_fptr, 3);

//setting env list
clo43013[1] = cons;
clo43013[2] = kont42528;
clo43013[3] = a4241642703;
void* f4252942706 = encode_clo(clo43013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4252942706;
arg_buffer[3] = a4241742705;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42871 = encode_clo(alloc_clo(lam42871_fptr, 0));

void* lam42873_fptr() // lam42873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42874 = arg_buffer[1];
//reading env and args
void* a4241642703 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42874))[6];
//not do dummy comment
void* append = (decode_clo(env42874))[5];
//not do dummy comment
void* kont42528 = (decode_clo(env42874))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42874))[3];
//not do dummy comment
void* lst1 = (decode_clo(env42874))[2];
//not do dummy comment
void* cons = (decode_clo(env42874))[1];

//creating new closure instance
void** clo43015 = alloc_clo(lam42871_fptr, 5);

//setting env list
clo43015[1] = a4241642703;
clo43015[2] = append;
clo43015[3] = cons;
clo43015[4] = lst2;
clo43015[5] = kont42528;
void* f4253042704 = encode_clo(clo43015);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4253042704;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42873 = encode_clo(alloc_clo(lam42873_fptr, 0));

void* lam42875_fptr() // lam42875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42876 = arg_buffer[1];
//reading env and args
void* a4241542701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42876))[7];
//not do dummy comment
void* append = (decode_clo(env42876))[6];
//not do dummy comment
void* kont42528 = (decode_clo(env42876))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42876))[4];
//not do dummy comment
void* cons = (decode_clo(env42876))[3];
//not do dummy comment
void* lst1 = (decode_clo(env42876))[2];
//not do dummy comment
void* car = (decode_clo(env42876))[1];

//if-clause
bool if_guard43016 = is_true(a4241542701);
if(if_guard43016)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42528);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42528))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43018 = alloc_clo(lam42873_fptr, 6);

//setting env list
clo43018[1] = cons;
clo43018[2] = lst1;
clo43018[3] = lst2;
clo43018[4] = kont42528;
clo43018[5] = append;
clo43018[6] = cdr;
void* f4253142702 = encode_clo(clo43018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4253142702;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42875 = encode_clo(alloc_clo(lam42875_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42877 = arg_buffer[1];
//reading env and args
void* kont42528 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43020 = alloc_clo(lam42875_fptr, 7);

//setting env list
clo43020[1] = car;
clo43020[2] = lst1;
clo43020[3] = cons;
clo43020[4] = lst2;
clo43020[5] = kont42528;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo43020[6] = append;
clo43020[7] = cdr;
void* f4253242700 = encode_clo(clo43020);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4253242700;
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
void* _42878 = arg_buffer[1];
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

void* kont4253342708 = prim_car(lst);
void* lst42709 = prim_cdr(lst);
void* x4241942710 = apply_prim_hash(lst42709);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4253342708);
arg_buffer[2] = x4241942710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4253342708))[0]);
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
void* _42879 = arg_buffer[1];
//reading env and args
void* kont42535 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4242042711 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42535);
arg_buffer[2] = x4242042711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42535))[0]);
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
void* _42880 = arg_buffer[1];
//reading env and args
void* kont42536 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4242142712 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42536);
arg_buffer[2] = x4242142712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42536))[0]);
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
void* _42881 = arg_buffer[1];
//reading env and args
void* kont42537 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4242242713 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42537);
arg_buffer[2] = x4242242713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42537))[0]);
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
void* _42882 = arg_buffer[1];
//reading env and args
void* kont42538 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4242342714 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42538);
arg_buffer[2] = x4242342714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42538))[0]);
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
void* _42883 = arg_buffer[1];
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

void* kont4253942715 = prim_car(lst);
void* lst42716 = prim_cdr(lst);
void* x4242442717 = apply_prim_set(lst42716);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4253942715);
arg_buffer[2] = x4242442717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4253942715))[0]);
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
void* _42884 = arg_buffer[1];
//reading env and args
void* kont42541 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4242542718 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42541);
arg_buffer[2] = x4242542718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42541))[0]);
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
void* _42885 = arg_buffer[1];
//reading env and args
void* kont42542 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4242642719 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42542);
arg_buffer[2] = x4242642719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42542))[0]);
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
void* _42886 = arg_buffer[1];
//reading env and args
void* kont42543 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4242742720 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42543);
arg_buffer[2] = x4242742720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42543))[0]);
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
void* _42887 = arg_buffer[1];
//reading env and args
void* kont42544 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4242842721 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42544);
arg_buffer[2] = x4242842721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42544))[0]);
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
void* _42888 = arg_buffer[1];
//reading env and args
void* kont42545 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4242942722 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42545);
arg_buffer[2] = x4242942722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42545))[0]);
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
void* _42889 = arg_buffer[1];
//reading env and args
void* kont42546 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4243042723 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42546);
arg_buffer[2] = x4243042723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42546))[0]);
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
void* _42890 = arg_buffer[1];
//reading env and args
void* kont42547 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x4243142724 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42547);
arg_buffer[2] = x4243142724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42547))[0]);
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
void* _42891 = arg_buffer[1];
//reading env and args
void* kont42548 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x4243242725 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42548);
arg_buffer[2] = x4243242725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42548))[0]);
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
void* _42892 = arg_buffer[1];
//reading env and args
void* kont42549 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x4243342726 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42549);
arg_buffer[2] = x4243342726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42549))[0]);
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
void* _42893 = arg_buffer[1];
//reading env and args
void* kont42550 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4243442727 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42550);
arg_buffer[2] = x4243442727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42550))[0]);
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
void* _42895 = arg_buffer[1];
//reading env and args
void* kont42551 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar43021 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43021, "42", 10);
void* a4243542728 = encode_mpz(mpzvar43021);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(int_u45_u62float);
arg_buffer[2] = kont42551;
arg_buffer[3] = a4243542728;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(int_u45_u62float))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam42896_fptr() // lam42896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42897 = arg_buffer[1];
//reading env and args
void* x4243642730 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42552 = (decode_clo(env42897))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42552);
arg_buffer[2] = x4243642730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42552))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42896 = encode_clo(alloc_clo(lam42896_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42898 = arg_buffer[1];
//reading env and args
void* kont42552 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo43023 = alloc_clo(lam42896_fptr, 1);

//setting env list
clo43023[1] = kont42552;
void* f4255342729 = encode_clo(clo43023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4255342729;
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

