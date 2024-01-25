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
void* _env8675 = arg_buffer[1];
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

void* kont8673 = prim_car(lst);
void* lst8676 = prim_cdr(lst);
void* x8674 = apply_prim__u43(lst8676);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8673);
arg_buffer[2] = x8674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8673))[0]);
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
void* _env8679 = arg_buffer[1];
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

void* kont8677 = prim_car(lst);
void* lst8680 = prim_cdr(lst);
void* x8678 = apply_prim__u45(lst8680);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8677);
arg_buffer[2] = x8678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8677))[0]);
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
void* _env8683 = arg_buffer[1];
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

void* kont8681 = prim_car(lst);
void* lst8684 = prim_cdr(lst);
void* x8682 = apply_prim__u42(lst8684);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8681);
arg_buffer[2] = x8682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8681))[0]);
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
void* _env8687 = arg_buffer[1];
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

void* kont8685 = prim_car(lst);
void* lst8688 = prim_cdr(lst);
void* x8686 = apply_prim__u47(lst8688);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8685);
arg_buffer[2] = x8686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8685))[0]);
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
void* _env8691 = arg_buffer[1];
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

void* kont8689 = prim_car(lst);
void* lst8692 = prim_cdr(lst);
void* x8690 = apply_prim__u61(lst8692);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8689);
arg_buffer[2] = x8690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8689))[0]);
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
void* _env8695 = arg_buffer[1];
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

void* kont8693 = prim_car(lst);
void* lst8696 = prim_cdr(lst);
void* x8694 = apply_prim__u62(lst8696);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8693);
arg_buffer[2] = x8694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8693))[0]);
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
void* _env8699 = arg_buffer[1];
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

void* kont8697 = prim_car(lst);
void* lst8700 = prim_cdr(lst);
void* x8698 = apply_prim__u60(lst8700);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8697);
arg_buffer[2] = x8698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8697))[0]);
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
void* _env8703 = arg_buffer[1];
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

void* kont8701 = prim_car(lst);
void* lst8704 = prim_cdr(lst);
void* x8702 = apply_prim__u60_u61(lst8704);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8701);
arg_buffer[2] = x8702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8701))[0]);
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
void* _env8707 = arg_buffer[1];
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

void* kont8705 = prim_car(lst);
void* lst8708 = prim_cdr(lst);
void* x8706 = apply_prim__u62_u61(lst8708);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8705);
arg_buffer[2] = x8706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8705))[0]);
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
void* _env8711 = arg_buffer[1];
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

void* kont8709 = prim_car(lst);
void* lst8712 = prim_cdr(lst);
void* x8710 = apply_prim_modulo(lst8712);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8709);
arg_buffer[2] = x8710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8709))[0]);
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
void* _env8715 = arg_buffer[1];
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

void* kont8713 = prim_car(lst);
void* lst8716 = prim_cdr(lst);
void* x8714 = apply_prim_null_u63(lst8716);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8713);
arg_buffer[2] = x8714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8713))[0]);
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
void* _env8719 = arg_buffer[1];
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

void* kont8717 = prim_car(lst);
void* lst8720 = prim_cdr(lst);
void* x8718 = apply_prim_equal_u63(lst8720);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8717);
arg_buffer[2] = x8718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8717))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void* eq_u63_fptr() // eq? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8723 = arg_buffer[1];
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

void* kont8721 = prim_car(lst);
void* lst8724 = prim_cdr(lst);
void* x8722 = apply_prim_eq_u63(lst8724);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8721);
arg_buffer[2] = x8722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8721))[0]);
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
void* _8519 = arg_buffer[1];
//reading env and args
void* kont8430 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* xy8344 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8430);
arg_buffer[2] = xy8344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
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
void* _8520 = arg_buffer[1];
//reading env and args
void* kont8431 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8345 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8431);
arg_buffer[2] = xy8345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8431))[0]);
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
void* _8521 = arg_buffer[1];
//reading env and args
void* kont8432 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8346 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8432);
arg_buffer[2] = xy8346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8432))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam8522_fptr() // lam8522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8523 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8347 = (decode_clo(env8523))[3];
//not do dummy comment
void* kont8433 = (decode_clo(env8523))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8523))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8433);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8433))[0]);
function_ptr();
return nullptr;
}

void* lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8526 = arg_buffer[1];
//reading env and args
void* kont8433 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8725 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8725, "0", 10);
void* a8347 = encode_mpz(mpzvar8725);
mpz_t* mpzvar8726 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8726, "2", 10);
void* a8348 = encode_mpz(mpzvar8726);

//creating new closure instance
void** clo8728 = alloc_clo(lam8522_fptr, 3);

//setting env list
clo8728[1] = equal_u63;
clo8728[2] = kont8433;
clo8728[3] = a8347;
void* f8434 = encode_clo(clo8728);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8527_fptr() // lam8527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8528 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8350 = (decode_clo(env8528))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8528))[2];
//not do dummy comment
void* kont8435 = (decode_clo(env8528))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8350, a8352);
arg_buffer[1]=reinterpret_cast<void*>(kont8435);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
function_ptr();
return nullptr;
}

void* lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8531 = arg_buffer[1];
//reading env and args
void* kont8435 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8729 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8729, "1", 10);
void* a8350 = encode_mpz(mpzvar8729);
mpz_t* mpzvar8730 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8730, "2", 10);
void* a8351 = encode_mpz(mpzvar8730);

//creating new closure instance
void** clo8732 = alloc_clo(lam8527_fptr, 3);

//setting env list
clo8732[1] = kont8435;
clo8732[2] = equal_u63;
clo8732[3] = a8350;
void* f8436 = encode_clo(clo8732);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8351);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
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
void* _8532 = arg_buffer[1];
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

void* kont8437 = prim_car(x);
void* x8518 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8437);
arg_buffer[2] = x8518;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8437))[0]);
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
void* _8533 = arg_buffer[1];
//reading env and args
void* kont8438 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* xy8353 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8438);
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8438))[0]);
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
void* _8534 = arg_buffer[1];
//reading env and args
void* kont8439 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* xy8354 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8439);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam8537_fptr() // lam8537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8538 = arg_buffer[1];
//reading env and args
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env8538))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env8538))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8538))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8440;
arg_buffer[3] = x;
arg_buffer[4] = a8360;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8537 = encode_clo(alloc_clo(lam8537_fptr, 0));

void* lam8539_fptr() // lam8539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8540))[5];
//not do dummy comment
void* lst = (decode_clo(env8540))[4];
//not do dummy comment
void* x = (decode_clo(env8540))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env8540))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8540))[1];

//if-clause
bool if_guard8733 = is_true(a8358);
if(if_guard8733)
{
void* xy8359 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[2] = xy8359;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8735 = alloc_clo(lam8537_fptr, 3);

//setting env list
clo8735[1] = kont8440;
clo8735[2] = member_u63;
clo8735[3] = x;
void* f8441 = encode_clo(clo8735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8441;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void* lam8541_fptr() // lam8541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8542 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8542))[6];
//not do dummy comment
void* lst = (decode_clo(env8542))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8542))[4];
//not do dummy comment
void* x = (decode_clo(env8542))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env8542))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8542))[1];

//creating new closure instance
void** clo8737 = alloc_clo(lam8539_fptr, 5);

//setting env list
clo8737[1] = kont8440;
clo8737[2] = member_u63;
clo8737[3] = x;
clo8737[4] = lst;
clo8737[5] = cdr;
void* f8442 = encode_clo(clo8737);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8357, x);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

void* lam8541 = encode_clo(alloc_clo(lam8541_fptr, 0));

void* lam8543_fptr() // lam8543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8544))[7];
//not do dummy comment
void* lst = (decode_clo(env8544))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8544))[5];
//not do dummy comment
void* x = (decode_clo(env8544))[4];
//not do dummy comment
void* car = (decode_clo(env8544))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env8544))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8544))[1];

//if-clause
bool if_guard8738 = is_true(a8355);
if(if_guard8738)
{
void* xy8356 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[2] = xy8356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8740 = alloc_clo(lam8541_fptr, 6);

//setting env list
clo8740[1] = kont8440;
clo8740[2] = member_u63;
clo8740[3] = x;
clo8740[4] = equal_u63;
clo8740[5] = lst;
clo8740[6] = cdr;
void* f8443 = encode_clo(clo8740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8443;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8543 = encode_clo(alloc_clo(lam8543_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8545 = arg_buffer[1];
//reading env and args
void* kont8440 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8742 = alloc_clo(lam8543_fptr, 7);

//setting env list
clo8742[1] = kont8440;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8742[2] = member_u63;
clo8742[3] = car;
clo8742[4] = x;
clo8742[5] = equal_u63;
clo8742[6] = lst;
clo8742[7] = cdr;
void* f8444 = encode_clo(clo8742);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8546_fptr() // lam8546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8547 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8363 = (decode_clo(env8547))[4];
//not do dummy comment
void* kont8445 = (decode_clo(env8547))[3];
//not do dummy comment
void* fun = (decode_clo(env8547))[2];
//not do dummy comment
void* foldl = (decode_clo(env8547))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8445;
arg_buffer[3] = fun;
arg_buffer[4] = a8363;
arg_buffer[5] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8546 = encode_clo(alloc_clo(lam8546_fptr, 0));

void* lam8548_fptr() // lam8548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8549))[5];
//not do dummy comment
void* fun = (decode_clo(env8549))[4];
//not do dummy comment
void* foldl = (decode_clo(env8549))[3];
//not do dummy comment
void* lst = (decode_clo(env8549))[2];
//not do dummy comment
void* kont8445 = (decode_clo(env8549))[1];

//creating new closure instance
void** clo8744 = alloc_clo(lam8546_fptr, 4);

//setting env list
clo8744[1] = foldl;
clo8744[2] = fun;
clo8744[3] = kont8445;
clo8744[4] = a8363;
void* f8446 = encode_clo(clo8744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8551))[6];
//not do dummy comment
void* fun = (decode_clo(env8551))[5];
//not do dummy comment
void* acc = (decode_clo(env8551))[4];
//not do dummy comment
void* foldl = (decode_clo(env8551))[3];
//not do dummy comment
void* lst = (decode_clo(env8551))[2];
//not do dummy comment
void* kont8445 = (decode_clo(env8551))[1];

//creating new closure instance
void** clo8746 = alloc_clo(lam8548_fptr, 5);

//setting env list
clo8746[1] = kont8445;
clo8746[2] = lst;
clo8746[3] = foldl;
clo8746[4] = fun;
clo8746[5] = cdr;
void* f8447 = encode_clo(clo8746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8447;
arg_buffer[3] = a8362;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void* lam8552_fptr() // lam8552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8553 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8553))[7];
//not do dummy comment
void* fun = (decode_clo(env8553))[6];
//not do dummy comment
void* acc = (decode_clo(env8553))[5];
//not do dummy comment
void* car = (decode_clo(env8553))[4];
//not do dummy comment
void* foldl = (decode_clo(env8553))[3];
//not do dummy comment
void* lst = (decode_clo(env8553))[2];
//not do dummy comment
void* kont8445 = (decode_clo(env8553))[1];

//if-clause
bool if_guard8747 = is_true(a8361);
if(if_guard8747)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8445);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8749 = alloc_clo(lam8550_fptr, 6);

//setting env list
clo8749[1] = kont8445;
clo8749[2] = lst;
clo8749[3] = foldl;
clo8749[4] = acc;
clo8749[5] = fun;
clo8749[6] = cdr;
void* f8448 = encode_clo(clo8749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8554 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8751 = alloc_clo(lam8552_fptr, 7);

//setting env list
clo8751[1] = kont8445;
clo8751[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8751[3] = foldl;
clo8751[4] = car;
clo8751[5] = acc;
clo8751[6] = fun;
clo8751[7] = cdr;
void* f8449 = encode_clo(clo8751);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8555_fptr() // lam8555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8366 = (decode_clo(env8556))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8556))[2];
//not do dummy comment
void* kont8450 = (decode_clo(env8556))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8450;
arg_buffer[3] = a8366;
arg_buffer[4] = a8368;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void* lam8557_fptr() // lam8557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8558 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8366 = (decode_clo(env8558))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8558))[4];
//not do dummy comment
void* kont8450 = (decode_clo(env8558))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8558))[2];
//not do dummy comment
void* cons = (decode_clo(env8558))[1];

//creating new closure instance
void** clo8753 = alloc_clo(lam8555_fptr, 3);

//setting env list
clo8753[1] = kont8450;
clo8753[2] = reverse_u45helper;
clo8753[3] = a8366;
void* f8451 = encode_clo(clo8753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8451;
arg_buffer[3] = a8367;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void* lam8559_fptr() // lam8559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8560 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8560))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8560))[5];
//not do dummy comment
void* kont8450 = (decode_clo(env8560))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8560))[3];
//not do dummy comment
void* car = (decode_clo(env8560))[2];
//not do dummy comment
void* cons = (decode_clo(env8560))[1];

//creating new closure instance
void** clo8755 = alloc_clo(lam8557_fptr, 5);

//setting env list
clo8755[1] = cons;
clo8755[2] = lst2;
clo8755[3] = kont8450;
clo8755[4] = reverse_u45helper;
clo8755[5] = a8366;
void* f8452 = encode_clo(clo8755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8452;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void* lam8561_fptr() // lam8561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8562 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8562))[7];
//not do dummy comment
void* lst = (decode_clo(env8562))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8562))[5];
//not do dummy comment
void* kont8450 = (decode_clo(env8562))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8562))[3];
//not do dummy comment
void* car = (decode_clo(env8562))[2];
//not do dummy comment
void* cons = (decode_clo(env8562))[1];

//if-clause
bool if_guard8756 = is_true(a8365);
if(if_guard8756)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8450);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8450))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8758 = alloc_clo(lam8559_fptr, 6);

//setting env list
clo8758[1] = cons;
clo8758[2] = car;
clo8758[3] = lst2;
clo8758[4] = kont8450;
clo8758[5] = reverse_u45helper;
clo8758[6] = lst;
void* f8453 = encode_clo(clo8758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8453;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8563 = arg_buffer[1];
//reading env and args
void* kont8450 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8760 = alloc_clo(lam8561_fptr, 7);

//setting env list
clo8760[1] = cons;
clo8760[2] = car;
clo8760[3] = lst2;
clo8760[4] = kont8450;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8760[5] = reverse_u45helper;
clo8760[6] = lst;
clo8760[7] = cdr;
void* f8454 = encode_clo(clo8760);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8454);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8564_fptr() // lam8564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8565 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8565))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8565))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8565))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8455;
arg_buffer[3] = lst;
arg_buffer[4] = a8369;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8566 = arg_buffer[1];
//reading env and args
void* kont8455 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8762 = alloc_clo(lam8564_fptr, 3);

//setting env list
clo8762[1] = kont8455;
clo8762[2] = reverse_u45helper;
clo8762[3] = lst;
void* f8456 = encode_clo(clo8762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8567_fptr() // lam8567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8568 = arg_buffer[1];
//reading env and args
void* xy8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8568))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8457);
arg_buffer[2] = xy8372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8570))[4];
//not do dummy comment
void* a8375 = (decode_clo(env8570))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8570))[2];
//not do dummy comment
void* a8373 = (decode_clo(env8570))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8457;
arg_buffer[3] = a8373;
arg_buffer[4] = a8375;
arg_buffer[5] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void* lam8571_fptr() // lam8571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8572 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8572))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env8572))[5];
//not do dummy comment
void* a8373 = (decode_clo(env8572))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8572))[3];
//not do dummy comment
void* cons = (decode_clo(env8572))[2];
//not do dummy comment
void* a8375 = (decode_clo(env8572))[1];

//creating new closure instance
void** clo8764 = alloc_clo(lam8569_fptr, 4);

//setting env list
clo8764[1] = a8373;
clo8764[2] = take_u45helper;
clo8764[3] = a8375;
clo8764[4] = kont8457;
void* f8459 = encode_clo(clo8764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8459;
arg_buffer[3] = a8376;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void* lam8573_fptr() // lam8573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8574 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8574))[7];
//not do dummy comment
void* lst = (decode_clo(env8574))[6];
//not do dummy comment
void* car = (decode_clo(env8574))[5];
//not do dummy comment
void* cons = (decode_clo(env8574))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8574))[3];
//not do dummy comment
void* a8373 = (decode_clo(env8574))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8574))[1];

//creating new closure instance
void** clo8766 = alloc_clo(lam8571_fptr, 6);

//setting env list
clo8766[1] = a8375;
clo8766[2] = cons;
clo8766[3] = lst2;
clo8766[4] = a8373;
clo8766[5] = take_u45helper;
clo8766[6] = kont8457;
void* f8460 = encode_clo(clo8766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8460;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void* lam8576_fptr() // lam8576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8577 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8577))[8];
//not do dummy comment
void* lst = (decode_clo(env8577))[7];
//not do dummy comment
void* cons = (decode_clo(env8577))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8577))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8577))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8577))[3];
//not do dummy comment
void* n = (decode_clo(env8577))[2];
//not do dummy comment
void* car = (decode_clo(env8577))[1];
mpz_t* mpzvar8767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8767, "1", 10);
void* a8374 = encode_mpz(mpzvar8767);

//creating new closure instance
void** clo8769 = alloc_clo(lam8573_fptr, 7);

//setting env list
clo8769[1] = lst2;
clo8769[2] = a8373;
clo8769[3] = take_u45helper;
clo8769[4] = cons;
clo8769[5] = car;
clo8769[6] = lst;
clo8769[7] = kont8457;
void* f8461 = encode_clo(clo8769);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8374);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
function_ptr();
return nullptr;
}

void* lam8576 = encode_clo(alloc_clo(lam8576_fptr, 0));

void* lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8579))[10];
//not do dummy comment
void* reverse = (decode_clo(env8579))[9];
//not do dummy comment
void* cons = (decode_clo(env8579))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8579))[7];
//not do dummy comment
void* kont8457 = (decode_clo(env8579))[6];
//not do dummy comment
void* cdr = (decode_clo(env8579))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8579))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8579))[3];
//not do dummy comment
void* n = (decode_clo(env8579))[2];
//not do dummy comment
void* car = (decode_clo(env8579))[1];

//if-clause
bool if_guard8770 = is_true(a8371);
if(if_guard8770)
{

//creating new closure instance
void** clo8772 = alloc_clo(lam8567_fptr, 1);

//setting env list
clo8772[1] = kont8457;
void* f8458 = encode_clo(clo8772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8458;
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
void** clo8774 = alloc_clo(lam8576_fptr, 8);

//setting env list
clo8774[1] = car;
clo8774[2] = n;
clo8774[3] = lst2;
clo8774[4] = take_u45helper;
clo8774[5] = _u45;
clo8774[6] = cons;
clo8774[7] = lst;
clo8774[8] = kont8457;
void* f8462 = encode_clo(clo8774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8462;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8581 = arg_buffer[1];
//reading env and args
void* kont8457 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8775 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8775, "0", 10);
void* a8370 = encode_mpz(mpzvar8775);

//creating new closure instance
void** clo8777 = alloc_clo(lam8578_fptr, 10);

//setting env list
clo8777[1] = car;
clo8777[2] = n;
clo8777[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8777[4] = take_u45helper;
clo8777[5] = cdr;
clo8777[6] = kont8457;
clo8777[7] = _u45;
clo8777[8] = cons;
clo8777[9] = reverse;
clo8777[10] = lst;
void* f8463 = encode_clo(clo8777);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8370);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8582_fptr() // lam8582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8583 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8583))[4];
//not do dummy comment
void* kont8464 = (decode_clo(env8583))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8583))[2];
//not do dummy comment
void* n = (decode_clo(env8583))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8464;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8378;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8584 = arg_buffer[1];
//reading env and args
void* kont8464 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8779 = alloc_clo(lam8582_fptr, 4);

//setting env list
clo8779[1] = n;
clo8779[2] = take_u45helper;
clo8779[3] = kont8464;
clo8779[4] = lst;
void* f8465 = encode_clo(clo8779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8465;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8586_fptr() // lam8586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8381 = (decode_clo(env8587))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8587))[2];
//not do dummy comment
void* kont8466 = (decode_clo(env8587))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8381, a8383);
arg_buffer[1]=reinterpret_cast<void*>(kont8466);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8466))[0]);
function_ptr();
return nullptr;
}

void* lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void* lam8588_fptr() // lam8588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8589 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8381 = (decode_clo(env8589))[4];
//not do dummy comment
void* length = (decode_clo(env8589))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8589))[2];
//not do dummy comment
void* kont8466 = (decode_clo(env8589))[1];

//creating new closure instance
void** clo8781 = alloc_clo(lam8586_fptr, 3);

//setting env list
clo8781[1] = kont8466;
clo8781[2] = _u43;
clo8781[3] = a8381;
void* f8467 = encode_clo(clo8781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8467;
arg_buffer[3] = a8382;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void* lam8591_fptr() // lam8591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8592 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8592))[5];
//not do dummy comment
void* lst = (decode_clo(env8592))[4];
//not do dummy comment
void* length = (decode_clo(env8592))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8592))[2];
//not do dummy comment
void* kont8466 = (decode_clo(env8592))[1];

//if-clause
bool if_guard8782 = is_true(a8379);
if(if_guard8782)
{
mpz_t* mpzvar8783 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8783, "0", 10);
void* xy8380 = encode_mpz(mpzvar8783);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8466);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8466))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8784 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8784, "1", 10);
void* a8381 = encode_mpz(mpzvar8784);

//creating new closure instance
void** clo8786 = alloc_clo(lam8588_fptr, 4);

//setting env list
clo8786[1] = kont8466;
clo8786[2] = _u43;
clo8786[3] = length;
clo8786[4] = a8381;
void* f8468 = encode_clo(clo8786);



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

void* lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8593 = arg_buffer[1];
//reading env and args
void* kont8466 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8788 = alloc_clo(lam8591_fptr, 5);

//setting env list
clo8788[1] = kont8466;
clo8788[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8788[3] = length;
clo8788[4] = lst;
clo8788[5] = cdr;
void* f8469 = encode_clo(clo8788);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8594_fptr() // lam8594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8595 = arg_buffer[1];
//reading env and args
void* xy8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8470 = (decode_clo(env8595))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8470);
arg_buffer[2] = xy8385;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8470))[0]);
//call next proc using a function pointer
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
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8387 = (decode_clo(env8597))[3];
//not do dummy comment
void* kont8470 = (decode_clo(env8597))[2];
//not do dummy comment
void* cons = (decode_clo(env8597))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8470;
arg_buffer[3] = a8387;
arg_buffer[4] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void* lam8598_fptr() // lam8598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8599 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8599))[5];
//not do dummy comment
void* a8387 = (decode_clo(env8599))[4];
//not do dummy comment
void* proc = (decode_clo(env8599))[3];
//not do dummy comment
void* kont8470 = (decode_clo(env8599))[2];
//not do dummy comment
void* cons = (decode_clo(env8599))[1];

//creating new closure instance
void** clo8790 = alloc_clo(lam8596_fptr, 3);

//setting env list
clo8790[1] = cons;
clo8790[2] = kont8470;
clo8790[3] = a8387;
void* f8472 = encode_clo(clo8790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8472;
arg_buffer[3] = proc;
arg_buffer[4] = a8388;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8598 = encode_clo(alloc_clo(lam8598_fptr, 0));

void* lam8600_fptr() // lam8600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8601 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8601))[6];
//not do dummy comment
void* lst = (decode_clo(env8601))[5];
//not do dummy comment
void* map = (decode_clo(env8601))[4];
//not do dummy comment
void* proc = (decode_clo(env8601))[3];
//not do dummy comment
void* kont8470 = (decode_clo(env8601))[2];
//not do dummy comment
void* cons = (decode_clo(env8601))[1];

//creating new closure instance
void** clo8792 = alloc_clo(lam8598_fptr, 5);

//setting env list
clo8792[1] = cons;
clo8792[2] = kont8470;
clo8792[3] = proc;
clo8792[4] = a8387;
clo8792[5] = map;
void* f8473 = encode_clo(clo8792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8473;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void* lam8602_fptr() // lam8602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8603 = arg_buffer[1];
//reading env and args
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8603))[6];
//not do dummy comment
void* lst = (decode_clo(env8603))[5];
//not do dummy comment
void* map = (decode_clo(env8603))[4];
//not do dummy comment
void* proc = (decode_clo(env8603))[3];
//not do dummy comment
void* kont8470 = (decode_clo(env8603))[2];
//not do dummy comment
void* cons = (decode_clo(env8603))[1];

//creating new closure instance
void** clo8794 = alloc_clo(lam8600_fptr, 6);

//setting env list
clo8794[1] = cons;
clo8794[2] = kont8470;
clo8794[3] = proc;
clo8794[4] = map;
clo8794[5] = lst;
clo8794[6] = cdr;
void* f8474 = encode_clo(clo8794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8474;
arg_buffer[3] = a8386;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8605))[8];
//not do dummy comment
void* map = (decode_clo(env8605))[7];
//not do dummy comment
void* proc = (decode_clo(env8605))[6];
//not do dummy comment
void* cons = (decode_clo(env8605))[5];
//not do dummy comment
void* list = (decode_clo(env8605))[4];
//not do dummy comment
void* cdr = (decode_clo(env8605))[3];
//not do dummy comment
void* kont8470 = (decode_clo(env8605))[2];
//not do dummy comment
void* car = (decode_clo(env8605))[1];

//if-clause
bool if_guard8795 = is_true(a8384);
if(if_guard8795)
{

//creating new closure instance
void** clo8797 = alloc_clo(lam8594_fptr, 1);

//setting env list
clo8797[1] = kont8470;
void* f8471 = encode_clo(clo8797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8471;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8799 = alloc_clo(lam8602_fptr, 6);

//setting env list
clo8799[1] = cons;
clo8799[2] = kont8470;
clo8799[3] = proc;
clo8799[4] = map;
clo8799[5] = lst;
clo8799[6] = cdr;
void* f8475 = encode_clo(clo8799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8475;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8606 = arg_buffer[1];
//reading env and args
void* kont8470 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8801 = alloc_clo(lam8604_fptr, 8);

//setting env list
clo8801[1] = car;
clo8801[2] = kont8470;
clo8801[3] = cdr;
clo8801[4] = list;
clo8801[5] = cons;
clo8801[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8801[7] = map;
clo8801[8] = lst;
void* f8476 = encode_clo(clo8801);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8607_fptr() // lam8607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8608 = arg_buffer[1];
//reading env and args
void* xy8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8477 = (decode_clo(env8608))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8477);
arg_buffer[2] = xy8391;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void* lam8609_fptr() // lam8609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8610 = arg_buffer[1];
//reading env and args
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8394 = (decode_clo(env8610))[3];
//not do dummy comment
void* kont8477 = (decode_clo(env8610))[2];
//not do dummy comment
void* cons = (decode_clo(env8610))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8477;
arg_buffer[3] = a8394;
arg_buffer[4] = a8396;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void* lam8611_fptr() // lam8611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8612 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8394 = (decode_clo(env8612))[5];
//not do dummy comment
void* kont8477 = (decode_clo(env8612))[4];
//not do dummy comment
void* op = (decode_clo(env8612))[3];
//not do dummy comment
void* filter = (decode_clo(env8612))[2];
//not do dummy comment
void* cons = (decode_clo(env8612))[1];

//creating new closure instance
void** clo8803 = alloc_clo(lam8609_fptr, 3);

//setting env list
clo8803[1] = cons;
clo8803[2] = kont8477;
clo8803[3] = a8394;
void* f8479 = encode_clo(clo8803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8479;
arg_buffer[3] = op;
arg_buffer[4] = a8395;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void* lam8613_fptr() // lam8613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8614 = arg_buffer[1];
//reading env and args
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8614))[6];
//not do dummy comment
void* op = (decode_clo(env8614))[5];
//not do dummy comment
void* filter = (decode_clo(env8614))[4];
//not do dummy comment
void* cons = (decode_clo(env8614))[3];
//not do dummy comment
void* lst = (decode_clo(env8614))[2];
//not do dummy comment
void* kont8477 = (decode_clo(env8614))[1];

//creating new closure instance
void** clo8805 = alloc_clo(lam8611_fptr, 5);

//setting env list
clo8805[1] = cons;
clo8805[2] = filter;
clo8805[3] = op;
clo8805[4] = kont8477;
clo8805[5] = a8394;
void* f8480 = encode_clo(clo8805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8480;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8613 = encode_clo(alloc_clo(lam8613_fptr, 0));

void* lam8615_fptr() // lam8615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8616 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8477 = (decode_clo(env8616))[3];
//not do dummy comment
void* op = (decode_clo(env8616))[2];
//not do dummy comment
void* filter = (decode_clo(env8616))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8477;
arg_buffer[3] = op;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8618))[7];
//not do dummy comment
void* op = (decode_clo(env8618))[6];
//not do dummy comment
void* cons = (decode_clo(env8618))[5];
//not do dummy comment
void* lst = (decode_clo(env8618))[4];
//not do dummy comment
void* kont8477 = (decode_clo(env8618))[3];
//not do dummy comment
void* filter = (decode_clo(env8618))[2];
//not do dummy comment
void* car = (decode_clo(env8618))[1];

//if-clause
bool if_guard8806 = is_true(a8393);
if(if_guard8806)
{

//creating new closure instance
void** clo8808 = alloc_clo(lam8613_fptr, 6);

//setting env list
clo8808[1] = kont8477;
clo8808[2] = lst;
clo8808[3] = cons;
clo8808[4] = filter;
clo8808[5] = op;
clo8808[6] = cdr;
void* f8481 = encode_clo(clo8808);



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
else
{

//creating new closure instance
void** clo8810 = alloc_clo(lam8615_fptr, 3);

//setting env list
clo8810[1] = filter;
clo8810[2] = op;
clo8810[3] = kont8477;
void* f8482 = encode_clo(clo8810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8482;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void* lam8619_fptr() // lam8619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8620 = arg_buffer[1];
//reading env and args
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8620))[7];
//not do dummy comment
void* op = (decode_clo(env8620))[6];
//not do dummy comment
void* cons = (decode_clo(env8620))[5];
//not do dummy comment
void* lst = (decode_clo(env8620))[4];
//not do dummy comment
void* kont8477 = (decode_clo(env8620))[3];
//not do dummy comment
void* filter = (decode_clo(env8620))[2];
//not do dummy comment
void* car = (decode_clo(env8620))[1];

//creating new closure instance
void** clo8812 = alloc_clo(lam8617_fptr, 7);

//setting env list
clo8812[1] = car;
clo8812[2] = filter;
clo8812[3] = kont8477;
clo8812[4] = lst;
clo8812[5] = cons;
clo8812[6] = op;
clo8812[7] = cdr;
void* f8483 = encode_clo(clo8812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8483;
arg_buffer[3] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8622))[8];
//not do dummy comment
void* cons = (decode_clo(env8622))[7];
//not do dummy comment
void* list = (decode_clo(env8622))[6];
//not do dummy comment
void* cdr = (decode_clo(env8622))[5];
//not do dummy comment
void* lst = (decode_clo(env8622))[4];
//not do dummy comment
void* kont8477 = (decode_clo(env8622))[3];
//not do dummy comment
void* filter = (decode_clo(env8622))[2];
//not do dummy comment
void* car = (decode_clo(env8622))[1];

//if-clause
bool if_guard8813 = is_true(a8390);
if(if_guard8813)
{

//creating new closure instance
void** clo8815 = alloc_clo(lam8607_fptr, 1);

//setting env list
clo8815[1] = kont8477;
void* f8478 = encode_clo(clo8815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8817 = alloc_clo(lam8619_fptr, 7);

//setting env list
clo8817[1] = car;
clo8817[2] = filter;
clo8817[3] = kont8477;
clo8817[4] = lst;
clo8817[5] = cons;
clo8817[6] = op;
clo8817[7] = cdr;
void* f8484 = encode_clo(clo8817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8623 = arg_buffer[1];
//reading env and args
void* kont8477 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8819 = alloc_clo(lam8621_fptr, 8);

//setting env list
clo8819[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8819[2] = filter;
clo8819[3] = kont8477;
clo8819[4] = lst;
clo8819[5] = cdr;
clo8819[6] = list;
clo8819[7] = cons;
clo8819[8] = op;
void* f8485 = encode_clo(clo8819);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8485);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8485))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8624_fptr() // lam8624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8625 = arg_buffer[1];
//reading env and args
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8625))[3];
//not do dummy comment
void* a8400 = (decode_clo(env8625))[2];
//not do dummy comment
void* kont8486 = (decode_clo(env8625))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8486;
arg_buffer[3] = a8400;
arg_buffer[4] = a8402;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8624 = encode_clo(alloc_clo(lam8624_fptr, 0));

void* lam8627_fptr() // lam8627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8628 = arg_buffer[1];
//reading env and args
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8628))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8628))[3];
//not do dummy comment
void* n = (decode_clo(env8628))[2];
//not do dummy comment
void* kont8486 = (decode_clo(env8628))[1];
mpz_t* mpzvar8820 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8820, "1", 10);
void* a8401 = encode_mpz(mpzvar8820);

//creating new closure instance
void** clo8822 = alloc_clo(lam8624_fptr, 3);

//setting env list
clo8822[1] = kont8486;
clo8822[2] = a8400;
clo8822[3] = drop;
void* f8487 = encode_clo(clo8822);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8401);
arg_buffer[1]=reinterpret_cast<void*>(f8487);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8487))[0]);
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
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8630))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8630))[5];
//not do dummy comment
void* lst = (decode_clo(env8630))[4];
//not do dummy comment
void* drop = (decode_clo(env8630))[3];
//not do dummy comment
void* n = (decode_clo(env8630))[2];
//not do dummy comment
void* kont8486 = (decode_clo(env8630))[1];

//if-clause
bool if_guard8823 = is_true(a8399);
if(if_guard8823)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8486);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8486))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8825 = alloc_clo(lam8627_fptr, 4);

//setting env list
clo8825[1] = kont8486;
clo8825[2] = n;
clo8825[3] = _u45;
clo8825[4] = drop;
void* f8488 = encode_clo(clo8825);



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

void* lam8629 = encode_clo(alloc_clo(lam8629_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8632 = arg_buffer[1];
//reading env and args
void* kont8486 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8826 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8826, "0", 10);
void* a8398 = encode_mpz(mpzvar8826);

//creating new closure instance
void** clo8828 = alloc_clo(lam8629_fptr, 6);

//setting env list
clo8828[1] = kont8486;
clo8828[2] = n;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8828[3] = drop;
clo8828[4] = lst;
clo8828[5] = _u45;
clo8828[6] = cdr;
void* f8489 = encode_clo(clo8828);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8398);
arg_buffer[1]=reinterpret_cast<void*>(f8489);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8489))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8633_fptr() // lam8633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8634 = arg_buffer[1];
//reading env and args
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8490 = (decode_clo(env8634))[3];
//not do dummy comment
void* proc = (decode_clo(env8634))[2];
//not do dummy comment
void* a8404 = (decode_clo(env8634))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8490;
arg_buffer[3] = a8404;
arg_buffer[4] = a8406;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8633 = encode_clo(alloc_clo(lam8633_fptr, 0));

void* lam8635_fptr() // lam8635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8636 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8490 = (decode_clo(env8636))[5];
//not do dummy comment
void* foldr = (decode_clo(env8636))[4];
//not do dummy comment
void* proc = (decode_clo(env8636))[3];
//not do dummy comment
void* acc = (decode_clo(env8636))[2];
//not do dummy comment
void* a8404 = (decode_clo(env8636))[1];

//creating new closure instance
void** clo8830 = alloc_clo(lam8633_fptr, 3);

//setting env list
clo8830[1] = a8404;
clo8830[2] = proc;
clo8830[3] = kont8490;
void* f8491 = encode_clo(clo8830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8491;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8405;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8638))[6];
//not do dummy comment
void* kont8490 = (decode_clo(env8638))[5];
//not do dummy comment
void* foldr = (decode_clo(env8638))[4];
//not do dummy comment
void* lst = (decode_clo(env8638))[3];
//not do dummy comment
void* proc = (decode_clo(env8638))[2];
//not do dummy comment
void* acc = (decode_clo(env8638))[1];

//creating new closure instance
void** clo8832 = alloc_clo(lam8635_fptr, 5);

//setting env list
clo8832[1] = a8404;
clo8832[2] = acc;
clo8832[3] = proc;
clo8832[4] = foldr;
clo8832[5] = kont8490;
void* f8492 = encode_clo(clo8832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8492;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8637 = encode_clo(alloc_clo(lam8637_fptr, 0));

void* lam8639_fptr() // lam8639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8640 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8640))[7];
//not do dummy comment
void* kont8490 = (decode_clo(env8640))[6];
//not do dummy comment
void* car = (decode_clo(env8640))[5];
//not do dummy comment
void* foldr = (decode_clo(env8640))[4];
//not do dummy comment
void* lst = (decode_clo(env8640))[3];
//not do dummy comment
void* proc = (decode_clo(env8640))[2];
//not do dummy comment
void* acc = (decode_clo(env8640))[1];

//if-clause
bool if_guard8833 = is_true(a8403);
if(if_guard8833)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8490);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8490))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8835 = alloc_clo(lam8637_fptr, 6);

//setting env list
clo8835[1] = acc;
clo8835[2] = proc;
clo8835[3] = lst;
clo8835[4] = foldr;
clo8835[5] = kont8490;
clo8835[6] = cdr;
void* f8493 = encode_clo(clo8835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8493;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8639 = encode_clo(alloc_clo(lam8639_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8641 = arg_buffer[1];
//reading env and args
void* kont8490 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8837 = alloc_clo(lam8639_fptr, 7);

//setting env list
clo8837[1] = acc;
clo8837[2] = proc;
clo8837[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8837[4] = foldr;
clo8837[5] = car;
clo8837[6] = kont8490;
clo8837[7] = cdr;
void* f8494 = encode_clo(clo8837);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8494);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8494))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8642_fptr() // lam8642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8643 = arg_buffer[1];
//reading env and args
void* a8410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8495 = (decode_clo(env8643))[3];
//not do dummy comment
void* cons = (decode_clo(env8643))[2];
//not do dummy comment
void* a8408 = (decode_clo(env8643))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8495;
arg_buffer[3] = a8408;
arg_buffer[4] = a8410;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8642 = encode_clo(alloc_clo(lam8642_fptr, 0));

void* lam8644_fptr() // lam8644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8645 = arg_buffer[1];
//reading env and args
void* a8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8495 = (decode_clo(env8645))[5];
//not do dummy comment
void* append = (decode_clo(env8645))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8645))[3];
//not do dummy comment
void* cons = (decode_clo(env8645))[2];
//not do dummy comment
void* a8408 = (decode_clo(env8645))[1];

//creating new closure instance
void** clo8839 = alloc_clo(lam8642_fptr, 3);

//setting env list
clo8839[1] = a8408;
clo8839[2] = cons;
clo8839[3] = kont8495;
void* f8496 = encode_clo(clo8839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8496;
arg_buffer[3] = a8409;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8644 = encode_clo(alloc_clo(lam8644_fptr, 0));

void* lam8646_fptr() // lam8646 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8647 = arg_buffer[1];
//reading env and args
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8647))[6];
//not do dummy comment
void* kont8495 = (decode_clo(env8647))[5];
//not do dummy comment
void* append = (decode_clo(env8647))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8647))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8647))[2];
//not do dummy comment
void* cons = (decode_clo(env8647))[1];

//creating new closure instance
void** clo8841 = alloc_clo(lam8644_fptr, 5);

//setting env list
clo8841[1] = a8408;
clo8841[2] = cons;
clo8841[3] = lst2;
clo8841[4] = append;
clo8841[5] = kont8495;
void* f8497 = encode_clo(clo8841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8497;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8646 = encode_clo(alloc_clo(lam8646_fptr, 0));

void* lam8648_fptr() // lam8648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8649 = arg_buffer[1];
//reading env and args
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8649))[7];
//not do dummy comment
void* kont8495 = (decode_clo(env8649))[6];
//not do dummy comment
void* append = (decode_clo(env8649))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8649))[4];
//not do dummy comment
void* cons = (decode_clo(env8649))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8649))[2];
//not do dummy comment
void* car = (decode_clo(env8649))[1];

//if-clause
bool if_guard8842 = is_true(a8407);
if(if_guard8842)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8495);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8495))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8844 = alloc_clo(lam8646_fptr, 6);

//setting env list
clo8844[1] = cons;
clo8844[2] = lst1;
clo8844[3] = lst2;
clo8844[4] = append;
clo8844[5] = kont8495;
clo8844[6] = cdr;
void* f8498 = encode_clo(clo8844);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8498;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8648 = encode_clo(alloc_clo(lam8648_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8650 = arg_buffer[1];
//reading env and args
void* kont8495 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8846 = alloc_clo(lam8648_fptr, 7);

//setting env list
clo8846[1] = car;
clo8846[2] = lst1;
clo8846[3] = cons;
clo8846[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8846[5] = append;
clo8846[6] = kont8495;
clo8846[7] = cdr;
void* f8499 = encode_clo(clo8846);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8499);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8499))[0]);
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
void* _env8849 = arg_buffer[1];
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

void* kont8847 = prim_car(lst);
void* lst8850 = prim_cdr(lst);
void* x8848 = apply_prim_hash(lst8850);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8847);
arg_buffer[2] = x8848;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8847))[0]);
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
void* _8651 = arg_buffer[1];
//reading env and args
void* kont8500 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8411 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8500);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8500))[0]);
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
void* _8652 = arg_buffer[1];
//reading env and args
void* kont8501 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* xy8412 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8501);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8501))[0]);
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
void* _8653 = arg_buffer[1];
//reading env and args
void* kont8502 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8413 = prim_hash_u45keys(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8502);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8502))[0]);
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
void* _8654 = arg_buffer[1];
//reading env and args
void* kont8503 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8414 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8503);
arg_buffer[2] = xy8414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8503))[0]);
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
void* _8655 = arg_buffer[1];
//reading env and args
void* kont8504 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8415 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8504);
arg_buffer[2] = xy8415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8504))[0]);
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
void* _env8853 = arg_buffer[1];
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

void* kont8851 = prim_car(lst);
void* lst8854 = prim_cdr(lst);
void* x8852 = apply_prim_set(lst8854);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8851);
arg_buffer[2] = x8852;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8851))[0]);
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
void* _8656 = arg_buffer[1];
//reading env and args
void* kont8505 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8416 = prim_set_u45_u62list(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8505);
arg_buffer[2] = xy8416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8505))[0]);
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
void* _8657 = arg_buffer[1];
//reading env and args
void* kont8506 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8417 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8506);
arg_buffer[2] = xy8417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8506))[0]);
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
void* _8658 = arg_buffer[1];
//reading env and args
void* kont8507 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8418 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8507);
arg_buffer[2] = xy8418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8507))[0]);
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
void* _8659 = arg_buffer[1];
//reading env and args
void* kont8508 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8419 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8508);
arg_buffer[2] = xy8419;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8508))[0]);
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
void* _8660 = arg_buffer[1];
//reading env and args
void* kont8509 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8420 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8509);
arg_buffer[2] = xy8420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8509))[0]);
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
void* _8661 = arg_buffer[1];
//reading env and args
void* kont8510 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8421 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8510);
arg_buffer[2] = xy8421;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8510))[0]);
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
void* _8662 = arg_buffer[1];
//reading env and args
void* kont8511 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8422 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8511);
arg_buffer[2] = xy8422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8511))[0]);
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
void* _8663 = arg_buffer[1];
//reading env and args
void* kont8512 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8423 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8512);
arg_buffer[2] = xy8423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8512))[0]);
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
void* _8664 = arg_buffer[1];
//reading env and args
void* kont8513 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8424 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8513);
arg_buffer[2] = xy8424;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8513))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam8665_fptr() // lam8665 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8666 = arg_buffer[1];
//reading env and args
void* a8427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* eq_u63 = (decode_clo(env8666))[2];
//not do dummy comment
void* kont8514 = (decode_clo(env8666))[1];
void* cps_u45lst8515 = prim_cons(kont8514, a8427);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(eq_u63);
arg_buffer[2] = cps_u45lst8515;
arg_buffer[0] = reinterpret_cast<void*>(2);
eq_u63_fptr();
return nullptr;
}

void* lam8665 = encode_clo(alloc_clo(lam8665_fptr, 0));

void* eq_u45test_fptr() // eq-test 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8669 = arg_buffer[1];
//reading env and args
void* kont8514 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8855 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8855, "2", 10);
void* a8425 = encode_mpz(mpzvar8855);
mpz_t* mpzvar8856 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8856, "2", 10);
void* a8426 = encode_mpz(mpzvar8856);

//creating new closure instance
void** clo8858 = alloc_clo(lam8665_fptr, 2);

//setting env list
clo8858[1] = kont8514;
clo8858[2] = eq_u63;
void* f8516 = encode_clo(clo8858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8516;
arg_buffer[3] = a8425;
arg_buffer[4] = a8426;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u45test = encode_clo(alloc_clo(eq_u45test_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8672 = arg_buffer[1];
//reading env and args
void* kont8517 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8859 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8859, "1", 10);
void* a8428 = encode_mpz(mpzvar8859);
mpz_t* mpzvar8860 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8860, "1", 10);
void* a8429 = encode_mpz(mpzvar8860);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(eq_u45test);
arg_buffer[2] = kont8517;
arg_buffer[3] = a8428;
arg_buffer[4] = a8429;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(eq_u45test))[0]);
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

