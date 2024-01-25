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
void* _env8690 = arg_buffer[1];
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

void* kont8688 = prim_car(lst);
void* lst8691 = prim_cdr(lst);
void* x8689 = apply_prim__u43(lst8691);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8688);
arg_buffer[2] = x8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
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
void* _env8694 = arg_buffer[1];
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

void* kont8692 = prim_car(lst);
void* lst8695 = prim_cdr(lst);
void* x8693 = apply_prim__u45(lst8695);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8692);
arg_buffer[2] = x8693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8692))[0]);
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
void* _env8698 = arg_buffer[1];
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

void* kont8696 = prim_car(lst);
void* lst8699 = prim_cdr(lst);
void* x8697 = apply_prim__u42(lst8699);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8696);
arg_buffer[2] = x8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8696))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void* _u47_fptr() // / 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8702 = arg_buffer[1];
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

void* kont8700 = prim_car(lst);
void* lst8703 = prim_cdr(lst);
void* x8701 = apply_prim__u47(lst8703);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8700);
arg_buffer[2] = x8701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8700))[0]);
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
void* _env8706 = arg_buffer[1];
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

void* kont8704 = prim_car(lst);
void* lst8707 = prim_cdr(lst);
void* x8705 = apply_prim__u61(lst8707);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8704);
arg_buffer[2] = x8705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
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
void* _env8710 = arg_buffer[1];
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

void* kont8708 = prim_car(lst);
void* lst8711 = prim_cdr(lst);
void* x8709 = apply_prim__u62(lst8711);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8708);
arg_buffer[2] = x8709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
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
void* _env8714 = arg_buffer[1];
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

void* kont8712 = prim_car(lst);
void* lst8715 = prim_cdr(lst);
void* x8713 = apply_prim__u60(lst8715);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8712);
arg_buffer[2] = x8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
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
void* _env8718 = arg_buffer[1];
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

void* kont8716 = prim_car(lst);
void* lst8719 = prim_cdr(lst);
void* x8717 = apply_prim__u60_u61(lst8719);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8716);
arg_buffer[2] = x8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
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
void* _env8722 = arg_buffer[1];
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

void* kont8720 = prim_car(lst);
void* lst8723 = prim_cdr(lst);
void* x8721 = apply_prim__u62_u61(lst8723);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8720);
arg_buffer[2] = x8721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void* modulo_fptr() // modulo 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8726 = arg_buffer[1];
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

void* kont8724 = prim_car(lst);
void* lst8727 = prim_cdr(lst);
void* x8725 = apply_prim_modulo(lst8727);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8724);
arg_buffer[2] = x8725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void* null_u63_fptr() // null? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8730 = arg_buffer[1];
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

void* kont8728 = prim_car(lst);
void* lst8731 = prim_cdr(lst);
void* x8729 = apply_prim_null_u63(lst8731);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8728);
arg_buffer[2] = x8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void* equal_u63_fptr() // equal? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8734 = arg_buffer[1];
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

void* kont8732 = prim_car(lst);
void* lst8735 = prim_cdr(lst);
void* x8733 = apply_prim_equal_u63(lst8735);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8732);
arg_buffer[2] = x8733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
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
void* _8526 = arg_buffer[1];
//reading env and args
void* kont8435 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* xy8343 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8435);
arg_buffer[2] = xy8343;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
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
void* _8527 = arg_buffer[1];
//reading env and args
void* kont8436 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* xy8344 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8436);
arg_buffer[2] = xy8344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8436))[0]);
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
void* _8528 = arg_buffer[1];
//reading env and args
void* kont8437 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8345 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8437);
arg_buffer[2] = xy8345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8437))[0]);
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
void* _8529 = arg_buffer[1];
//reading env and args
void* kont8438 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8346 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8438);
arg_buffer[2] = xy8346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8438))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam8530_fptr() // lam8530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8531))[3];
//not do dummy comment
void* kont8439 = (decode_clo(env8531))[2];
//not do dummy comment
void* a8347 = (decode_clo(env8531))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8439);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
function_ptr();
return nullptr;
}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8534 = arg_buffer[1];
//reading env and args
void* kont8439 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8736 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8736, "0", 10);
void* a8347 = encode_mpz(mpzvar8736);
mpz_t* mpzvar8737 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8737, "2", 10);
void* a8348 = encode_mpz(mpzvar8737);

//creating new closure instance
void** clo8739 = alloc_clo(lam8530_fptr, 3);

//setting env list
clo8739[1] = a8347;
clo8739[2] = kont8439;
clo8739[3] = equal_u63;
void* f8440 = encode_clo(clo8739);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8350 = (decode_clo(env8536))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8536))[2];
//not do dummy comment
void* kont8441 = (decode_clo(env8536))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8350, a8352);
arg_buffer[1]=reinterpret_cast<void*>(kont8441);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8441))[0]);
function_ptr();
return nullptr;
}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8539 = arg_buffer[1];
//reading env and args
void* kont8441 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8740 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8740, "1", 10);
void* a8350 = encode_mpz(mpzvar8740);
mpz_t* mpzvar8741 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8741, "2", 10);
void* a8351 = encode_mpz(mpzvar8741);

//creating new closure instance
void** clo8743 = alloc_clo(lam8535_fptr, 3);

//setting env list
clo8743[1] = kont8441;
clo8743[2] = equal_u63;
clo8743[3] = a8350;
void* f8442 = encode_clo(clo8743);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8351);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
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
void* _8540 = arg_buffer[1];
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

void* kont8443 = prim_car(x);
void* x8525 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8443);
arg_buffer[2] = x8525;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
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
void* _8541 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* xy8353 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8444);
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
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
void* _8542 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* xy8354 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8445);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam8545_fptr() // lam8545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8546 = arg_buffer[1];
//reading env and args
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8446 = (decode_clo(env8546))[3];
//not do dummy comment
void* x = (decode_clo(env8546))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8546))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8446;
arg_buffer[3] = x;
arg_buffer[4] = a8360;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void* lam8547_fptr() // lam8547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8548))[5];
//not do dummy comment
void* x = (decode_clo(env8548))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8548))[3];
//not do dummy comment
void* kont8446 = (decode_clo(env8548))[2];
//not do dummy comment
void* cdr = (decode_clo(env8548))[1];

//if-clause
bool if_guard8744 = is_true(a8358);
if(if_guard8744)
{
void* xy8359 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8446);
arg_buffer[2] = xy8359;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8746 = alloc_clo(lam8545_fptr, 3);

//setting env list
clo8746[1] = member_u63;
clo8746[2] = x;
clo8746[3] = kont8446;
void* f8447 = encode_clo(clo8746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8447;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void* lam8549_fptr() // lam8549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8550 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8550))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8550))[5];
//not do dummy comment
void* x = (decode_clo(env8550))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8550))[3];
//not do dummy comment
void* kont8446 = (decode_clo(env8550))[2];
//not do dummy comment
void* cdr = (decode_clo(env8550))[1];

//creating new closure instance
void** clo8748 = alloc_clo(lam8547_fptr, 5);

//setting env list
clo8748[1] = cdr;
clo8748[2] = kont8446;
clo8748[3] = member_u63;
clo8748[4] = x;
clo8748[5] = lst;
void* f8448 = encode_clo(clo8748);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8357, x);
arg_buffer[1]=reinterpret_cast<void*>(f8448);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
function_ptr();
return nullptr;
}

void* lam8549 = encode_clo(alloc_clo(lam8549_fptr, 0));

void* lam8551_fptr() // lam8551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8552 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8552))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env8552))[6];
//not do dummy comment
void* x = (decode_clo(env8552))[5];
//not do dummy comment
void* car = (decode_clo(env8552))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8552))[3];
//not do dummy comment
void* kont8446 = (decode_clo(env8552))[2];
//not do dummy comment
void* cdr = (decode_clo(env8552))[1];

//if-clause
bool if_guard8749 = is_true(a8355);
if(if_guard8749)
{
void* xy8356 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8446);
arg_buffer[2] = xy8356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8751 = alloc_clo(lam8549_fptr, 6);

//setting env list
clo8751[1] = cdr;
clo8751[2] = kont8446;
clo8751[3] = member_u63;
clo8751[4] = x;
clo8751[5] = equal_u63;
clo8751[6] = lst;
void* f8449 = encode_clo(clo8751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8449;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8553 = arg_buffer[1];
//reading env and args
void* kont8446 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8753 = alloc_clo(lam8551_fptr, 7);

//setting env list
clo8753[1] = cdr;
clo8753[2] = kont8446;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8753[3] = member_u63;
clo8753[4] = car;
clo8753[5] = x;
clo8753[6] = equal_u63;
clo8753[7] = lst;
void* f8450 = encode_clo(clo8753);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8554_fptr() // lam8554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8555 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8555))[4];
//not do dummy comment
void* fun = (decode_clo(env8555))[3];
//not do dummy comment
void* a8363 = (decode_clo(env8555))[2];
//not do dummy comment
void* foldl = (decode_clo(env8555))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8451;
arg_buffer[3] = fun;
arg_buffer[4] = a8363;
arg_buffer[5] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8554 = encode_clo(alloc_clo(lam8554_fptr, 0));

void* lam8556_fptr() // lam8556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8557 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8557))[5];
//not do dummy comment
void* lst = (decode_clo(env8557))[4];
//not do dummy comment
void* kont8451 = (decode_clo(env8557))[3];
//not do dummy comment
void* fun = (decode_clo(env8557))[2];
//not do dummy comment
void* foldl = (decode_clo(env8557))[1];

//creating new closure instance
void** clo8755 = alloc_clo(lam8554_fptr, 4);

//setting env list
clo8755[1] = foldl;
clo8755[2] = a8363;
clo8755[3] = fun;
clo8755[4] = kont8451;
void* f8452 = encode_clo(clo8755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8452;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8556 = encode_clo(alloc_clo(lam8556_fptr, 0));

void* lam8558_fptr() // lam8558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8559 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8559))[6];
//not do dummy comment
void* lst = (decode_clo(env8559))[5];
//not do dummy comment
void* kont8451 = (decode_clo(env8559))[4];
//not do dummy comment
void* fun = (decode_clo(env8559))[3];
//not do dummy comment
void* acc = (decode_clo(env8559))[2];
//not do dummy comment
void* foldl = (decode_clo(env8559))[1];

//creating new closure instance
void** clo8757 = alloc_clo(lam8556_fptr, 5);

//setting env list
clo8757[1] = foldl;
clo8757[2] = fun;
clo8757[3] = kont8451;
clo8757[4] = lst;
clo8757[5] = cdr;
void* f8453 = encode_clo(clo8757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8453;
arg_buffer[3] = a8362;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8558 = encode_clo(alloc_clo(lam8558_fptr, 0));

void* lam8560_fptr() // lam8560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8561 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8561))[7];
//not do dummy comment
void* lst = (decode_clo(env8561))[6];
//not do dummy comment
void* kont8451 = (decode_clo(env8561))[5];
//not do dummy comment
void* fun = (decode_clo(env8561))[4];
//not do dummy comment
void* acc = (decode_clo(env8561))[3];
//not do dummy comment
void* car = (decode_clo(env8561))[2];
//not do dummy comment
void* foldl = (decode_clo(env8561))[1];

//if-clause
bool if_guard8758 = is_true(a8361);
if(if_guard8758)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8451);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8760 = alloc_clo(lam8558_fptr, 6);

//setting env list
clo8760[1] = foldl;
clo8760[2] = acc;
clo8760[3] = fun;
clo8760[4] = kont8451;
clo8760[5] = lst;
clo8760[6] = cdr;
void* f8454 = encode_clo(clo8760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8562 = arg_buffer[1];
//reading env and args
void* kont8451 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8762 = alloc_clo(lam8560_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8762[1] = foldl;
clo8762[2] = car;
clo8762[3] = acc;
clo8762[4] = fun;
clo8762[5] = kont8451;
clo8762[6] = lst;
clo8762[7] = cdr;
void* f8455 = encode_clo(clo8762);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8455);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8563_fptr() // lam8563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8564 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8366 = (decode_clo(env8564))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8564))[2];
//not do dummy comment
void* kont8456 = (decode_clo(env8564))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8456;
arg_buffer[3] = a8366;
arg_buffer[4] = a8368;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8563 = encode_clo(alloc_clo(lam8563_fptr, 0));

void* lam8565_fptr() // lam8565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8366 = (decode_clo(env8566))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8566))[4];
//not do dummy comment
void* kont8456 = (decode_clo(env8566))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8566))[2];
//not do dummy comment
void* cons = (decode_clo(env8566))[1];

//creating new closure instance
void** clo8764 = alloc_clo(lam8563_fptr, 3);

//setting env list
clo8764[1] = kont8456;
clo8764[2] = reverse_u45helper;
clo8764[3] = a8366;
void* f8457 = encode_clo(clo8764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8457;
arg_buffer[3] = a8367;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void* lam8567_fptr() // lam8567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8568 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8568))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8568))[5];
//not do dummy comment
void* kont8456 = (decode_clo(env8568))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8568))[3];
//not do dummy comment
void* car = (decode_clo(env8568))[2];
//not do dummy comment
void* cons = (decode_clo(env8568))[1];

//creating new closure instance
void** clo8766 = alloc_clo(lam8565_fptr, 5);

//setting env list
clo8766[1] = cons;
clo8766[2] = lst2;
clo8766[3] = kont8456;
clo8766[4] = reverse_u45helper;
clo8766[5] = a8366;
void* f8458 = encode_clo(clo8766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8567 = encode_clo(alloc_clo(lam8567_fptr, 0));

void* lam8569_fptr() // lam8569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8570 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8570))[7];
//not do dummy comment
void* lst = (decode_clo(env8570))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8570))[5];
//not do dummy comment
void* kont8456 = (decode_clo(env8570))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8570))[3];
//not do dummy comment
void* car = (decode_clo(env8570))[2];
//not do dummy comment
void* cons = (decode_clo(env8570))[1];

//if-clause
bool if_guard8767 = is_true(a8365);
if(if_guard8767)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8456);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8769 = alloc_clo(lam8567_fptr, 6);

//setting env list
clo8769[1] = cons;
clo8769[2] = car;
clo8769[3] = lst2;
clo8769[4] = kont8456;
clo8769[5] = reverse_u45helper;
clo8769[6] = lst;
void* f8459 = encode_clo(clo8769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8459;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8571 = arg_buffer[1];
//reading env and args
void* kont8456 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8771 = alloc_clo(lam8569_fptr, 7);

//setting env list
clo8771[1] = cons;
clo8771[2] = car;
clo8771[3] = lst2;
clo8771[4] = kont8456;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8771[5] = reverse_u45helper;
clo8771[6] = lst;
clo8771[7] = cdr;
void* f8460 = encode_clo(clo8771);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8460);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8572_fptr() // lam8572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8573 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8573))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8573))[2];
//not do dummy comment
void* kont8461 = (decode_clo(env8573))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8461;
arg_buffer[3] = lst;
arg_buffer[4] = a8369;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8574 = arg_buffer[1];
//reading env and args
void* kont8461 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8773 = alloc_clo(lam8572_fptr, 3);

//setting env list
clo8773[1] = kont8461;
clo8773[2] = reverse_u45helper;
clo8773[3] = lst;
void* f8462 = encode_clo(clo8773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8575_fptr() // lam8575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* xy8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8463 = (decode_clo(env8576))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8463);
arg_buffer[2] = xy8372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8463))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void* lam8577_fptr() // lam8577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8578 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8463 = (decode_clo(env8578))[4];
//not do dummy comment
void* a8373 = (decode_clo(env8578))[3];
//not do dummy comment
void* a8375 = (decode_clo(env8578))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8578))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8463;
arg_buffer[3] = a8373;
arg_buffer[4] = a8375;
arg_buffer[5] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

void* lam8579_fptr() // lam8579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8580 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8463 = (decode_clo(env8580))[6];
//not do dummy comment
void* a8373 = (decode_clo(env8580))[5];
//not do dummy comment
void* a8375 = (decode_clo(env8580))[4];
//not do dummy comment
void* cons = (decode_clo(env8580))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8580))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8580))[1];

//creating new closure instance
void** clo8775 = alloc_clo(lam8577_fptr, 4);

//setting env list
clo8775[1] = take_u45helper;
clo8775[2] = a8375;
clo8775[3] = a8373;
clo8775[4] = kont8463;
void* f8465 = encode_clo(clo8775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8465;
arg_buffer[3] = a8376;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void* lam8581_fptr() // lam8581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8463 = (decode_clo(env8582))[7];
//not do dummy comment
void* lst = (decode_clo(env8582))[6];
//not do dummy comment
void* a8373 = (decode_clo(env8582))[5];
//not do dummy comment
void* car = (decode_clo(env8582))[4];
//not do dummy comment
void* cons = (decode_clo(env8582))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8582))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8582))[1];

//creating new closure instance
void** clo8777 = alloc_clo(lam8579_fptr, 6);

//setting env list
clo8777[1] = lst2;
clo8777[2] = take_u45helper;
clo8777[3] = cons;
clo8777[4] = a8375;
clo8777[5] = a8373;
clo8777[6] = kont8463;
void* f8466 = encode_clo(clo8777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8466;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void* lam8584_fptr() // lam8584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8585 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8463 = (decode_clo(env8585))[8];
//not do dummy comment
void* lst = (decode_clo(env8585))[7];
//not do dummy comment
void* cons = (decode_clo(env8585))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8585))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8585))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8585))[3];
//not do dummy comment
void* n = (decode_clo(env8585))[2];
//not do dummy comment
void* car = (decode_clo(env8585))[1];
mpz_t* mpzvar8778 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8778, "1", 10);
void* a8374 = encode_mpz(mpzvar8778);

//creating new closure instance
void** clo8780 = alloc_clo(lam8581_fptr, 7);

//setting env list
clo8780[1] = lst2;
clo8780[2] = take_u45helper;
clo8780[3] = cons;
clo8780[4] = car;
clo8780[5] = a8373;
clo8780[6] = lst;
clo8780[7] = kont8463;
void* f8467 = encode_clo(clo8780);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8374);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

void* lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void* lam8586_fptr() // lam8586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8587))[10];
//not do dummy comment
void* kont8463 = (decode_clo(env8587))[9];
//not do dummy comment
void* lst = (decode_clo(env8587))[8];
//not do dummy comment
void* reverse = (decode_clo(env8587))[7];
//not do dummy comment
void* cons = (decode_clo(env8587))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8587))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8587))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8587))[3];
//not do dummy comment
void* n = (decode_clo(env8587))[2];
//not do dummy comment
void* car = (decode_clo(env8587))[1];

//if-clause
bool if_guard8781 = is_true(a8371);
if(if_guard8781)
{

//creating new closure instance
void** clo8783 = alloc_clo(lam8575_fptr, 1);

//setting env list
clo8783[1] = kont8463;
void* f8464 = encode_clo(clo8783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8464;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8785 = alloc_clo(lam8584_fptr, 8);

//setting env list
clo8785[1] = car;
clo8785[2] = n;
clo8785[3] = lst2;
clo8785[4] = take_u45helper;
clo8785[5] = _u45;
clo8785[6] = cons;
clo8785[7] = lst;
clo8785[8] = kont8463;
void* f8468 = encode_clo(clo8785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8468;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8589 = arg_buffer[1];
//reading env and args
void* kont8463 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8786 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8786, "0", 10);
void* a8370 = encode_mpz(mpzvar8786);

//creating new closure instance
void** clo8788 = alloc_clo(lam8586_fptr, 10);

//setting env list
clo8788[1] = car;
clo8788[2] = n;
clo8788[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8788[4] = take_u45helper;
clo8788[5] = _u45;
clo8788[6] = cons;
clo8788[7] = reverse;
clo8788[8] = lst;
clo8788[9] = kont8463;
clo8788[10] = cdr;
void* f8469 = encode_clo(clo8788);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8370);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8590_fptr() // lam8590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8591 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8591))[4];
//not do dummy comment
void* kont8470 = (decode_clo(env8591))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8591))[2];
//not do dummy comment
void* n = (decode_clo(env8591))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8470;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8378;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8592 = arg_buffer[1];
//reading env and args
void* kont8470 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8790 = alloc_clo(lam8590_fptr, 4);

//setting env list
clo8790[1] = n;
clo8790[2] = take_u45helper;
clo8790[3] = kont8470;
clo8790[4] = lst;
void* f8471 = encode_clo(clo8790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8471;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8594_fptr() // lam8594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8595 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8595))[3];
//not do dummy comment
void* kont8472 = (decode_clo(env8595))[2];
//not do dummy comment
void* a8381 = (decode_clo(env8595))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8381, a8383);
arg_buffer[1]=reinterpret_cast<void*>(kont8472);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8472))[0]);
function_ptr();
return nullptr;
}

void* lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void* lam8596_fptr() // lam8596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8597 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8597))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8597))[3];
//not do dummy comment
void* kont8472 = (decode_clo(env8597))[2];
//not do dummy comment
void* a8381 = (decode_clo(env8597))[1];

//creating new closure instance
void** clo8792 = alloc_clo(lam8594_fptr, 3);

//setting env list
clo8792[1] = a8381;
clo8792[2] = kont8472;
clo8792[3] = _u43;
void* f8473 = encode_clo(clo8792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8473;
arg_buffer[3] = a8382;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void* lam8599_fptr() // lam8599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8600 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8600))[5];
//not do dummy comment
void* lst = (decode_clo(env8600))[4];
//not do dummy comment
void* length = (decode_clo(env8600))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8600))[2];
//not do dummy comment
void* kont8472 = (decode_clo(env8600))[1];

//if-clause
bool if_guard8793 = is_true(a8379);
if(if_guard8793)
{
mpz_t* mpzvar8794 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8794, "0", 10);
void* xy8380 = encode_mpz(mpzvar8794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8472);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8472))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8795 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8795, "1", 10);
void* a8381 = encode_mpz(mpzvar8795);

//creating new closure instance
void** clo8797 = alloc_clo(lam8596_fptr, 4);

//setting env list
clo8797[1] = a8381;
clo8797[2] = kont8472;
clo8797[3] = _u43;
clo8797[4] = length;
void* f8474 = encode_clo(clo8797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8474;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8601 = arg_buffer[1];
//reading env and args
void* kont8472 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8799 = alloc_clo(lam8599_fptr, 5);

//setting env list
clo8799[1] = kont8472;
clo8799[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8799[3] = length;
clo8799[4] = lst;
clo8799[5] = cdr;
void* f8475 = encode_clo(clo8799);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8602_fptr() // lam8602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8603 = arg_buffer[1];
//reading env and args
void* xy8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8476 = (decode_clo(env8603))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8476);
arg_buffer[2] = xy8385;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8476))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8602 = encode_clo(alloc_clo(lam8602_fptr, 0));

void* lam8604_fptr() // lam8604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8605 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8387 = (decode_clo(env8605))[3];
//not do dummy comment
void* cons = (decode_clo(env8605))[2];
//not do dummy comment
void* kont8476 = (decode_clo(env8605))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8476;
arg_buffer[3] = a8387;
arg_buffer[4] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void* lam8606_fptr() // lam8606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8607 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env8607))[5];
//not do dummy comment
void* map = (decode_clo(env8607))[4];
//not do dummy comment
void* a8387 = (decode_clo(env8607))[3];
//not do dummy comment
void* cons = (decode_clo(env8607))[2];
//not do dummy comment
void* kont8476 = (decode_clo(env8607))[1];

//creating new closure instance
void** clo8801 = alloc_clo(lam8604_fptr, 3);

//setting env list
clo8801[1] = kont8476;
clo8801[2] = cons;
clo8801[3] = a8387;
void* f8478 = encode_clo(clo8801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8478;
arg_buffer[3] = proc;
arg_buffer[4] = a8388;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8606 = encode_clo(alloc_clo(lam8606_fptr, 0));

void* lam8608_fptr() // lam8608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8609 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8609))[6];
//not do dummy comment
void* lst = (decode_clo(env8609))[5];
//not do dummy comment
void* map = (decode_clo(env8609))[4];
//not do dummy comment
void* proc = (decode_clo(env8609))[3];
//not do dummy comment
void* cons = (decode_clo(env8609))[2];
//not do dummy comment
void* kont8476 = (decode_clo(env8609))[1];

//creating new closure instance
void** clo8803 = alloc_clo(lam8606_fptr, 5);

//setting env list
clo8803[1] = kont8476;
clo8803[2] = cons;
clo8803[3] = a8387;
clo8803[4] = map;
clo8803[5] = proc;
void* f8479 = encode_clo(clo8803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8479;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void* lam8610_fptr() // lam8610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8611 = arg_buffer[1];
//reading env and args
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8611))[6];
//not do dummy comment
void* lst = (decode_clo(env8611))[5];
//not do dummy comment
void* map = (decode_clo(env8611))[4];
//not do dummy comment
void* proc = (decode_clo(env8611))[3];
//not do dummy comment
void* cons = (decode_clo(env8611))[2];
//not do dummy comment
void* kont8476 = (decode_clo(env8611))[1];

//creating new closure instance
void** clo8805 = alloc_clo(lam8608_fptr, 6);

//setting env list
clo8805[1] = kont8476;
clo8805[2] = cons;
clo8805[3] = proc;
clo8805[4] = map;
clo8805[5] = lst;
clo8805[6] = cdr;
void* f8480 = encode_clo(clo8805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8480;
arg_buffer[3] = a8386;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8610 = encode_clo(alloc_clo(lam8610_fptr, 0));

void* lam8612_fptr() // lam8612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8613 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8613))[8];
//not do dummy comment
void* map = (decode_clo(env8613))[7];
//not do dummy comment
void* proc = (decode_clo(env8613))[6];
//not do dummy comment
void* car = (decode_clo(env8613))[5];
//not do dummy comment
void* list = (decode_clo(env8613))[4];
//not do dummy comment
void* cdr = (decode_clo(env8613))[3];
//not do dummy comment
void* cons = (decode_clo(env8613))[2];
//not do dummy comment
void* kont8476 = (decode_clo(env8613))[1];

//if-clause
bool if_guard8806 = is_true(a8384);
if(if_guard8806)
{

//creating new closure instance
void** clo8808 = alloc_clo(lam8602_fptr, 1);

//setting env list
clo8808[1] = kont8476;
void* f8477 = encode_clo(clo8808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8477;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8810 = alloc_clo(lam8610_fptr, 6);

//setting env list
clo8810[1] = kont8476;
clo8810[2] = cons;
clo8810[3] = proc;
clo8810[4] = map;
clo8810[5] = lst;
clo8810[6] = cdr;
void* f8481 = encode_clo(clo8810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8481;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8614 = arg_buffer[1];
//reading env and args
void* kont8476 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8812 = alloc_clo(lam8612_fptr, 8);

//setting env list
clo8812[1] = kont8476;
clo8812[2] = cons;
clo8812[3] = cdr;
clo8812[4] = list;
clo8812[5] = car;
clo8812[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8812[7] = map;
clo8812[8] = lst;
void* f8482 = encode_clo(clo8812);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8615_fptr() // lam8615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8616 = arg_buffer[1];
//reading env and args
void* xy8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8483 = (decode_clo(env8616))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8483);
arg_buffer[2] = xy8391;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8615 = encode_clo(alloc_clo(lam8615_fptr, 0));

void* lam8617_fptr() // lam8617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8618 = arg_buffer[1];
//reading env and args
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8483 = (decode_clo(env8618))[3];
//not do dummy comment
void* a8394 = (decode_clo(env8618))[2];
//not do dummy comment
void* cons = (decode_clo(env8618))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8483;
arg_buffer[3] = a8394;
arg_buffer[4] = a8396;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void* lam8619_fptr() // lam8619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8620 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8483 = (decode_clo(env8620))[5];
//not do dummy comment
void* op = (decode_clo(env8620))[4];
//not do dummy comment
void* a8394 = (decode_clo(env8620))[3];
//not do dummy comment
void* filter = (decode_clo(env8620))[2];
//not do dummy comment
void* cons = (decode_clo(env8620))[1];

//creating new closure instance
void** clo8814 = alloc_clo(lam8617_fptr, 3);

//setting env list
clo8814[1] = cons;
clo8814[2] = a8394;
clo8814[3] = kont8483;
void* f8485 = encode_clo(clo8814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8485;
arg_buffer[3] = op;
arg_buffer[4] = a8395;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8619 = encode_clo(alloc_clo(lam8619_fptr, 0));

void* lam8621_fptr() // lam8621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8622 = arg_buffer[1];
//reading env and args
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8622))[6];
//not do dummy comment
void* lst = (decode_clo(env8622))[5];
//not do dummy comment
void* kont8483 = (decode_clo(env8622))[4];
//not do dummy comment
void* op = (decode_clo(env8622))[3];
//not do dummy comment
void* filter = (decode_clo(env8622))[2];
//not do dummy comment
void* cons = (decode_clo(env8622))[1];

//creating new closure instance
void** clo8816 = alloc_clo(lam8619_fptr, 5);

//setting env list
clo8816[1] = cons;
clo8816[2] = filter;
clo8816[3] = a8394;
clo8816[4] = op;
clo8816[5] = kont8483;
void* f8486 = encode_clo(clo8816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8486;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void* lam8623_fptr() // lam8623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8624 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8483 = (decode_clo(env8624))[3];
//not do dummy comment
void* op = (decode_clo(env8624))[2];
//not do dummy comment
void* filter = (decode_clo(env8624))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8483;
arg_buffer[3] = op;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void* lam8625_fptr() // lam8625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8626 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8626))[7];
//not do dummy comment
void* lst = (decode_clo(env8626))[6];
//not do dummy comment
void* kont8483 = (decode_clo(env8626))[5];
//not do dummy comment
void* op = (decode_clo(env8626))[4];
//not do dummy comment
void* cons = (decode_clo(env8626))[3];
//not do dummy comment
void* filter = (decode_clo(env8626))[2];
//not do dummy comment
void* car = (decode_clo(env8626))[1];

//if-clause
bool if_guard8817 = is_true(a8393);
if(if_guard8817)
{

//creating new closure instance
void** clo8819 = alloc_clo(lam8621_fptr, 6);

//setting env list
clo8819[1] = cons;
clo8819[2] = filter;
clo8819[3] = op;
clo8819[4] = kont8483;
clo8819[5] = lst;
clo8819[6] = cdr;
void* f8487 = encode_clo(clo8819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8487;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8821 = alloc_clo(lam8623_fptr, 3);

//setting env list
clo8821[1] = filter;
clo8821[2] = op;
clo8821[3] = kont8483;
void* f8488 = encode_clo(clo8821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8488;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8625 = encode_clo(alloc_clo(lam8625_fptr, 0));

void* lam8627_fptr() // lam8627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8628 = arg_buffer[1];
//reading env and args
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8628))[7];
//not do dummy comment
void* lst = (decode_clo(env8628))[6];
//not do dummy comment
void* kont8483 = (decode_clo(env8628))[5];
//not do dummy comment
void* op = (decode_clo(env8628))[4];
//not do dummy comment
void* cons = (decode_clo(env8628))[3];
//not do dummy comment
void* filter = (decode_clo(env8628))[2];
//not do dummy comment
void* car = (decode_clo(env8628))[1];

//creating new closure instance
void** clo8823 = alloc_clo(lam8625_fptr, 7);

//setting env list
clo8823[1] = car;
clo8823[2] = filter;
clo8823[3] = cons;
clo8823[4] = op;
clo8823[5] = kont8483;
clo8823[6] = lst;
clo8823[7] = cdr;
void* f8489 = encode_clo(clo8823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8489;
arg_buffer[3] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void* lam8629_fptr() // lam8629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8630 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8630))[8];
//not do dummy comment
void* kont8483 = (decode_clo(env8630))[7];
//not do dummy comment
void* op = (decode_clo(env8630))[6];
//not do dummy comment
void* cons = (decode_clo(env8630))[5];
//not do dummy comment
void* list = (decode_clo(env8630))[4];
//not do dummy comment
void* cdr = (decode_clo(env8630))[3];
//not do dummy comment
void* filter = (decode_clo(env8630))[2];
//not do dummy comment
void* car = (decode_clo(env8630))[1];

//if-clause
bool if_guard8824 = is_true(a8390);
if(if_guard8824)
{

//creating new closure instance
void** clo8826 = alloc_clo(lam8615_fptr, 1);

//setting env list
clo8826[1] = kont8483;
void* f8484 = encode_clo(clo8826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8484;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8828 = alloc_clo(lam8627_fptr, 7);

//setting env list
clo8828[1] = car;
clo8828[2] = filter;
clo8828[3] = cons;
clo8828[4] = op;
clo8828[5] = kont8483;
clo8828[6] = lst;
clo8828[7] = cdr;
void* f8490 = encode_clo(clo8828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8490;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8629 = encode_clo(alloc_clo(lam8629_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8631 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8830 = alloc_clo(lam8629_fptr, 8);

//setting env list
clo8830[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8830[2] = filter;
clo8830[3] = cdr;
clo8830[4] = list;
clo8830[5] = cons;
clo8830[6] = op;
clo8830[7] = kont8483;
clo8830[8] = lst;
void* f8491 = encode_clo(clo8830);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8491);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8491))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8632_fptr() // lam8632 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8633 = arg_buffer[1];
//reading env and args
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8400 = (decode_clo(env8633))[3];
//not do dummy comment
void* drop = (decode_clo(env8633))[2];
//not do dummy comment
void* kont8492 = (decode_clo(env8633))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8492;
arg_buffer[3] = a8400;
arg_buffer[4] = a8402;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8632 = encode_clo(alloc_clo(lam8632_fptr, 0));

void* lam8635_fptr() // lam8635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8636 = arg_buffer[1];
//reading env and args
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8636))[4];
//not do dummy comment
void* n = (decode_clo(env8636))[3];
//not do dummy comment
void* kont8492 = (decode_clo(env8636))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8636))[1];
mpz_t* mpzvar8831 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8831, "1", 10);
void* a8401 = encode_mpz(mpzvar8831);

//creating new closure instance
void** clo8833 = alloc_clo(lam8632_fptr, 3);

//setting env list
clo8833[1] = kont8492;
clo8833[2] = drop;
clo8833[3] = a8400;
void* f8493 = encode_clo(clo8833);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8401);
arg_buffer[1]=reinterpret_cast<void*>(f8493);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8493))[0]);
function_ptr();
return nullptr;
}

void* lam8635 = encode_clo(alloc_clo(lam8635_fptr, 0));

void* lam8637_fptr() // lam8637 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8638 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8638))[6];
//not do dummy comment
void* n = (decode_clo(env8638))[5];
//not do dummy comment
void* kont8492 = (decode_clo(env8638))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8638))[3];
//not do dummy comment
void* lst = (decode_clo(env8638))[2];
//not do dummy comment
void* drop = (decode_clo(env8638))[1];

//if-clause
bool if_guard8834 = is_true(a8399);
if(if_guard8834)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8492);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8836 = alloc_clo(lam8635_fptr, 4);

//setting env list
clo8836[1] = _u45;
clo8836[2] = kont8492;
clo8836[3] = n;
clo8836[4] = drop;
void* f8494 = encode_clo(clo8836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8494;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8637 = encode_clo(alloc_clo(lam8637_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8640 = arg_buffer[1];
//reading env and args
void* kont8492 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8837 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8837, "0", 10);
void* a8398 = encode_mpz(mpzvar8837);

//creating new closure instance
void** clo8839 = alloc_clo(lam8637_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8839[1] = drop;
clo8839[2] = lst;
clo8839[3] = _u45;
clo8839[4] = kont8492;
clo8839[5] = n;
clo8839[6] = cdr;
void* f8495 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8398);
arg_buffer[1]=reinterpret_cast<void*>(f8495);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8495))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8641_fptr() // lam8641 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8642 = arg_buffer[1];
//reading env and args
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8496 = (decode_clo(env8642))[3];
//not do dummy comment
void* a8404 = (decode_clo(env8642))[2];
//not do dummy comment
void* proc = (decode_clo(env8642))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8496;
arg_buffer[3] = a8404;
arg_buffer[4] = a8406;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8641 = encode_clo(alloc_clo(lam8641_fptr, 0));

void* lam8643_fptr() // lam8643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8644 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8496 = (decode_clo(env8644))[5];
//not do dummy comment
void* foldr = (decode_clo(env8644))[4];
//not do dummy comment
void* a8404 = (decode_clo(env8644))[3];
//not do dummy comment
void* proc = (decode_clo(env8644))[2];
//not do dummy comment
void* acc = (decode_clo(env8644))[1];

//creating new closure instance
void** clo8841 = alloc_clo(lam8641_fptr, 3);

//setting env list
clo8841[1] = proc;
clo8841[2] = a8404;
clo8841[3] = kont8496;
void* f8497 = encode_clo(clo8841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8497;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8405;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8643 = encode_clo(alloc_clo(lam8643_fptr, 0));

void* lam8645_fptr() // lam8645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8646 = arg_buffer[1];
//reading env and args
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8646))[6];
//not do dummy comment
void* kont8496 = (decode_clo(env8646))[5];
//not do dummy comment
void* foldr = (decode_clo(env8646))[4];
//not do dummy comment
void* lst = (decode_clo(env8646))[3];
//not do dummy comment
void* proc = (decode_clo(env8646))[2];
//not do dummy comment
void* acc = (decode_clo(env8646))[1];

//creating new closure instance
void** clo8843 = alloc_clo(lam8643_fptr, 5);

//setting env list
clo8843[1] = acc;
clo8843[2] = proc;
clo8843[3] = a8404;
clo8843[4] = foldr;
clo8843[5] = kont8496;
void* f8498 = encode_clo(clo8843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8498;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8645 = encode_clo(alloc_clo(lam8645_fptr, 0));

void* lam8647_fptr() // lam8647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8648 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8648))[7];
//not do dummy comment
void* kont8496 = (decode_clo(env8648))[6];
//not do dummy comment
void* car = (decode_clo(env8648))[5];
//not do dummy comment
void* foldr = (decode_clo(env8648))[4];
//not do dummy comment
void* lst = (decode_clo(env8648))[3];
//not do dummy comment
void* proc = (decode_clo(env8648))[2];
//not do dummy comment
void* acc = (decode_clo(env8648))[1];

//if-clause
bool if_guard8844 = is_true(a8403);
if(if_guard8844)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8496);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8496))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8846 = alloc_clo(lam8645_fptr, 6);

//setting env list
clo8846[1] = acc;
clo8846[2] = proc;
clo8846[3] = lst;
clo8846[4] = foldr;
clo8846[5] = kont8496;
clo8846[6] = cdr;
void* f8499 = encode_clo(clo8846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8499;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8647 = encode_clo(alloc_clo(lam8647_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8649 = arg_buffer[1];
//reading env and args
void* kont8496 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8848 = alloc_clo(lam8647_fptr, 7);

//setting env list
clo8848[1] = acc;
clo8848[2] = proc;
clo8848[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8848[4] = foldr;
clo8848[5] = car;
clo8848[6] = kont8496;
clo8848[7] = cdr;
void* f8500 = encode_clo(clo8848);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8500);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8500))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8650_fptr() // lam8650 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8651 = arg_buffer[1];
//reading env and args
void* a8410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8501 = (decode_clo(env8651))[3];
//not do dummy comment
void* a8408 = (decode_clo(env8651))[2];
//not do dummy comment
void* cons = (decode_clo(env8651))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8501;
arg_buffer[3] = a8408;
arg_buffer[4] = a8410;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8650 = encode_clo(alloc_clo(lam8650_fptr, 0));

void* lam8652_fptr() // lam8652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8653 = arg_buffer[1];
//reading env and args
void* a8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8501 = (decode_clo(env8653))[5];
//not do dummy comment
void* append = (decode_clo(env8653))[4];
//not do dummy comment
void* a8408 = (decode_clo(env8653))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8653))[2];
//not do dummy comment
void* cons = (decode_clo(env8653))[1];

//creating new closure instance
void** clo8850 = alloc_clo(lam8650_fptr, 3);

//setting env list
clo8850[1] = cons;
clo8850[2] = a8408;
clo8850[3] = kont8501;
void* f8502 = encode_clo(clo8850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8502;
arg_buffer[3] = a8409;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8652 = encode_clo(alloc_clo(lam8652_fptr, 0));

void* lam8654_fptr() // lam8654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8655 = arg_buffer[1];
//reading env and args
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8655))[6];
//not do dummy comment
void* kont8501 = (decode_clo(env8655))[5];
//not do dummy comment
void* append = (decode_clo(env8655))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8655))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8655))[2];
//not do dummy comment
void* cons = (decode_clo(env8655))[1];

//creating new closure instance
void** clo8852 = alloc_clo(lam8652_fptr, 5);

//setting env list
clo8852[1] = cons;
clo8852[2] = lst2;
clo8852[3] = a8408;
clo8852[4] = append;
clo8852[5] = kont8501;
void* f8503 = encode_clo(clo8852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8503;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8654 = encode_clo(alloc_clo(lam8654_fptr, 0));

void* lam8656_fptr() // lam8656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8657 = arg_buffer[1];
//reading env and args
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8657))[7];
//not do dummy comment
void* kont8501 = (decode_clo(env8657))[6];
//not do dummy comment
void* append = (decode_clo(env8657))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8657))[4];
//not do dummy comment
void* cons = (decode_clo(env8657))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8657))[2];
//not do dummy comment
void* car = (decode_clo(env8657))[1];

//if-clause
bool if_guard8853 = is_true(a8407);
if(if_guard8853)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8501);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8501))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8855 = alloc_clo(lam8654_fptr, 6);

//setting env list
clo8855[1] = cons;
clo8855[2] = lst1;
clo8855[3] = lst2;
clo8855[4] = append;
clo8855[5] = kont8501;
clo8855[6] = cdr;
void* f8504 = encode_clo(clo8855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8504;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8656 = encode_clo(alloc_clo(lam8656_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8658 = arg_buffer[1];
//reading env and args
void* kont8501 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8857 = alloc_clo(lam8656_fptr, 7);

//setting env list
clo8857[1] = car;
clo8857[2] = lst1;
clo8857[3] = cons;
clo8857[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8857[5] = append;
clo8857[6] = kont8501;
clo8857[7] = cdr;
void* f8505 = encode_clo(clo8857);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8505);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8505))[0]);
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
void* _env8860 = arg_buffer[1];
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

void* kont8858 = prim_car(lst);
void* lst8861 = prim_cdr(lst);
void* x8859 = apply_prim_hash(lst8861);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8858);
arg_buffer[2] = x8859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);
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
void* _8659 = arg_buffer[1];
//reading env and args
void* kont8506 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8411 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8506);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8506))[0]);
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
void* _8660 = arg_buffer[1];
//reading env and args
void* kont8507 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* xy8412 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8507);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8507))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void* hash_u45keys_fptr() // hash-keys 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8661 = arg_buffer[1];
//reading env and args
void* kont8508 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8413 = prim_hash_u45keys(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8508);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8508))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void* hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8662 = arg_buffer[1];
//reading env and args
void* kont8509 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8414 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8509);
arg_buffer[2] = xy8414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8509))[0]);
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
void* _8663 = arg_buffer[1];
//reading env and args
void* kont8510 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8415 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8510);
arg_buffer[2] = xy8415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8510))[0]);
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
void* _env8864 = arg_buffer[1];
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

void* kont8862 = prim_car(lst);
void* lst8865 = prim_cdr(lst);
void* x8863 = apply_prim_set(lst8865);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8862);
arg_buffer[2] = x8863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45_u62list_fptr() // set->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8664 = arg_buffer[1];
//reading env and args
void* kont8511 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8416 = prim_set_u45_u62list(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8511);
arg_buffer[2] = xy8416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8511))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void* list_u45_u62set_fptr() // list->set 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8665 = arg_buffer[1];
//reading env and args
void* kont8512 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8417 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8512);
arg_buffer[2] = xy8417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8512))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8666 = arg_buffer[1];
//reading env and args
void* kont8513 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8418 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8513);
arg_buffer[2] = xy8418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8513))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8667 = arg_buffer[1];
//reading env and args
void* kont8514 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8419 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8514);
arg_buffer[2] = xy8419;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8514))[0]);
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
void* _8668 = arg_buffer[1];
//reading env and args
void* kont8515 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8420 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8515);
arg_buffer[2] = xy8420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8515))[0]);
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
void* _8669 = arg_buffer[1];
//reading env and args
void* kont8516 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8421 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8516);
arg_buffer[2] = xy8421;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8516))[0]);
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
void* _8670 = arg_buffer[1];
//reading env and args
void* kont8517 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8422 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8517);
arg_buffer[2] = xy8422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8517))[0]);
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
void* _8671 = arg_buffer[1];
//reading env and args
void* kont8518 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8423 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8518);
arg_buffer[2] = xy8423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8518))[0]);
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
void* _8672 = arg_buffer[1];
//reading env and args
void* kont8519 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8424 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8519);
arg_buffer[2] = xy8424;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8519))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam8673_fptr() // lam8673 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8674 = arg_buffer[1];
//reading env and args
void* a8432 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8674))[4];
//not do dummy comment
void* kont8520 = (decode_clo(env8674))[3];
//not do dummy comment
void* a8426 = (decode_clo(env8674))[2];
//not do dummy comment
void* a8429 = (decode_clo(env8674))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8520;
arg_buffer[3] = a8426;
arg_buffer[4] = a8429;
arg_buffer[5] = a8432;
arg_buffer[0] = reinterpret_cast<void*>(5);
equal_u63_fptr();
return nullptr;
}

void* lam8673 = encode_clo(alloc_clo(lam8673_fptr, 0));

void* lam8677_fptr() // lam8677 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8678 = arg_buffer[1];
//reading env and args
void* a8429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8678))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8678))[3];
//not do dummy comment
void* kont8520 = (decode_clo(env8678))[2];
//not do dummy comment
void* a8426 = (decode_clo(env8678))[1];
mpz_t* mpzvar8866 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8866, "1", 10);
void* a8430 = encode_mpz(mpzvar8866);
mpz_t* mpzvar8867 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8867, "2", 10);
void* a8431 = encode_mpz(mpzvar8867);

//creating new closure instance
void** clo8869 = alloc_clo(lam8673_fptr, 4);

//setting env list
clo8869[1] = a8429;
clo8869[2] = a8426;
clo8869[3] = kont8520;
clo8869[4] = equal_u63;
void* f8521 = encode_clo(clo8869);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8521;
arg_buffer[3] = a8430;
arg_buffer[4] = a8431;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8677 = encode_clo(alloc_clo(lam8677_fptr, 0));

void* lam8681_fptr() // lam8681 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8682 = arg_buffer[1];
//reading env and args
void* a8426 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8682))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8682))[2];
//not do dummy comment
void* kont8520 = (decode_clo(env8682))[1];
mpz_t* mpzvar8870 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8870, "1", 10);
void* a8427 = encode_mpz(mpzvar8870);
mpz_t* mpzvar8871 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8871, "2", 10);
void* a8428 = encode_mpz(mpzvar8871);

//creating new closure instance
void** clo8873 = alloc_clo(lam8677_fptr, 4);

//setting env list
clo8873[1] = a8426;
clo8873[2] = kont8520;
clo8873[3] = equal_u63;
clo8873[4] = list;
void* f8522 = encode_clo(clo8873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8522;
arg_buffer[3] = a8427;
arg_buffer[4] = a8428;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8681 = encode_clo(alloc_clo(lam8681_fptr, 0));

void* equal_u45test_fptr() // equal-test 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8684 = arg_buffer[1];
//reading env and args
void* kont8520 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8874 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8874, "1", 10);
void* a8425 = encode_mpz(mpzvar8874);

//creating new closure instance
void** clo8876 = alloc_clo(lam8681_fptr, 3);

//setting env list
clo8876[1] = kont8520;
clo8876[2] = equal_u63;
clo8876[3] = list;
void* f8523 = encode_clo(clo8876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8523;
arg_buffer[3] = a8425;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* equal_u45test = encode_clo(alloc_clo(equal_u45test_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8687 = arg_buffer[1];
//reading env and args
void* kont8524 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8877 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8877, "1", 10);
void* a8433 = encode_mpz(mpzvar8877);
mpz_t* mpzvar8878 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8878, "1", 10);
void* a8434 = encode_mpz(mpzvar8878);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u45test);
arg_buffer[2] = kont8524;
arg_buffer[3] = a8433;
arg_buffer[4] = a8434;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u45test))[0]);
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

