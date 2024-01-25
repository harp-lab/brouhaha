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
void* _env8661 = arg_buffer[1];
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

void* kont8659 = prim_car(lst);
void* lst8662 = prim_cdr(lst);
void* x8660 = apply_prim__u43(lst8662);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8659);
arg_buffer[2] = x8660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8659))[0]);
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
void* _env8665 = arg_buffer[1];
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

void* kont8663 = prim_car(lst);
void* lst8666 = prim_cdr(lst);
void* x8664 = apply_prim__u45(lst8666);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8663);
arg_buffer[2] = x8664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8663))[0]);
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
void* _env8669 = arg_buffer[1];
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

void* kont8667 = prim_car(lst);
void* lst8670 = prim_cdr(lst);
void* x8668 = apply_prim__u42(lst8670);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8667);
arg_buffer[2] = x8668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8667))[0]);
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
void* _env8673 = arg_buffer[1];
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

void* kont8671 = prim_car(lst);
void* lst8674 = prim_cdr(lst);
void* x8672 = apply_prim__u47(lst8674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8671);
arg_buffer[2] = x8672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8671))[0]);
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
void* _env8677 = arg_buffer[1];
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

void* kont8675 = prim_car(lst);
void* lst8678 = prim_cdr(lst);
void* x8676 = apply_prim__u61(lst8678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8675);
arg_buffer[2] = x8676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8675))[0]);
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
void* _env8681 = arg_buffer[1];
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

void* kont8679 = prim_car(lst);
void* lst8682 = prim_cdr(lst);
void* x8680 = apply_prim__u62(lst8682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8679);
arg_buffer[2] = x8680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8679))[0]);
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
void* _env8685 = arg_buffer[1];
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

void* kont8683 = prim_car(lst);
void* lst8686 = prim_cdr(lst);
void* x8684 = apply_prim__u60(lst8686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683);
arg_buffer[2] = x8684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683))[0]);
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
void* _env8689 = arg_buffer[1];
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

void* kont8687 = prim_car(lst);
void* lst8690 = prim_cdr(lst);
void* x8688 = apply_prim__u60_u61(lst8690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8687);
arg_buffer[2] = x8688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8687))[0]);
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
void* _env8693 = arg_buffer[1];
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

void* kont8691 = prim_car(lst);
void* lst8694 = prim_cdr(lst);
void* x8692 = apply_prim__u62_u61(lst8694);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8691);
arg_buffer[2] = x8692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8691))[0]);
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
void* _env8697 = arg_buffer[1];
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

void* kont8695 = prim_car(lst);
void* lst8698 = prim_cdr(lst);
void* x8696 = apply_prim_modulo(lst8698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8695);
arg_buffer[2] = x8696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8695))[0]);
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
void* _env8701 = arg_buffer[1];
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

void* kont8699 = prim_car(lst);
void* lst8702 = prim_cdr(lst);
void* x8700 = apply_prim_null_u63(lst8702);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8699);
arg_buffer[2] = x8700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8699))[0]);
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
void* _env8705 = arg_buffer[1];
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

void* kont8703 = prim_car(lst);
void* lst8706 = prim_cdr(lst);
void* x8704 = apply_prim_equal_u63(lst8706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8703);
arg_buffer[2] = x8704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8703))[0]);
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
void* _env8709 = arg_buffer[1];
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

void* kont8707 = prim_car(lst);
void* lst8710 = prim_cdr(lst);
void* x8708 = apply_prim_eq_u63(lst8710);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8707);
arg_buffer[2] = x8708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8707))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void* exact_u45floor_fptr() // exact-floor 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8713 = arg_buffer[1];
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

void* kont8711 = prim_car(lst);
void* lst8714 = prim_cdr(lst);
void* x8712 = apply_prim_exact_u45floor(lst8714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8711);
arg_buffer[2] = x8712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void* exact_u45ceiling_fptr() // exact-ceiling 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8717 = arg_buffer[1];
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

void* kont8715 = prim_car(lst);
void* lst8718 = prim_cdr(lst);
void* x8716 = apply_prim_exact_u45ceiling(lst8718);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8715);
arg_buffer[2] = x8716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8715))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void* exact_u45round_fptr() // exact-round 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8721 = arg_buffer[1];
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

void* kont8719 = prim_car(lst);
void* lst8722 = prim_cdr(lst);
void* x8720 = apply_prim_exact_u45round(lst8722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8719);
arg_buffer[2] = x8720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8719))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void* cons_fptr() // cons 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8725 = arg_buffer[1];
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

void* kont8723 = prim_car(lst);
void* lst8726 = prim_cdr(lst);
void* x8724 = apply_prim_cons(lst8726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8723);
arg_buffer[2] = x8724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8723))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void* car_fptr() // car 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8729 = arg_buffer[1];
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

void* kont8727 = prim_car(lst);
void* lst8730 = prim_cdr(lst);
void* x8728 = apply_prim_car(lst8730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8727);
arg_buffer[2] = x8728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8727))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8733 = arg_buffer[1];
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

void* kont8731 = prim_car(lst);
void* lst8734 = prim_cdr(lst);
void* x8732 = apply_prim_cdr(lst8734);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8731);
arg_buffer[2] = x8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8731))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8737 = arg_buffer[1];
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

void* kont8735 = prim_car(lst);
void* lst8738 = prim_cdr(lst);
void* x8736 = apply_prim_float_u45_u62int(lst8738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8735);
arg_buffer[2] = x8736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8735))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* lam8510_fptr() // lam8510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8511 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8511))[3];
//not do dummy comment
void* a8344 = (decode_clo(env8511))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8511))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
function_ptr();
return nullptr;
}

void* lam8510 = encode_clo(alloc_clo(lam8510_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8514 = arg_buffer[1];
//reading env and args
void* kont8424 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8739 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8739, "0", 10);
void* a8344 = encode_mpz(mpzvar8739);
mpz_t* mpzvar8740 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8740, "2", 10);
void* a8345 = encode_mpz(mpzvar8740);

//creating new closure instance
void** clo8742 = alloc_clo(lam8510_fptr, 3);

//setting env list
clo8742[1] = kont8424;
clo8742[2] = a8344;
clo8742[3] = equal_u63;
void* f8425 = encode_clo(clo8742);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8425);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8425))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8515_fptr() // lam8515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8516 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8426 = (decode_clo(env8516))[3];
//not do dummy comment
void* a8347 = (decode_clo(env8516))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8516))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8426);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8426))[0]);
function_ptr();
return nullptr;
}

void* lam8515 = encode_clo(alloc_clo(lam8515_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8519 = arg_buffer[1];
//reading env and args
void* kont8426 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8743 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8743, "1", 10);
void* a8347 = encode_mpz(mpzvar8743);
mpz_t* mpzvar8744 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8744, "2", 10);
void* a8348 = encode_mpz(mpzvar8744);

//creating new closure instance
void** clo8746 = alloc_clo(lam8515_fptr, 3);

//setting env list
clo8746[1] = equal_u63;
clo8746[2] = a8347;
clo8746[3] = kont8426;
void* f8427 = encode_clo(clo8746);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
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
void* _8520 = arg_buffer[1];
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

void* kont8428 = prim_car(x);
void* x8509 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8428);
arg_buffer[2] = x8509;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8521 = arg_buffer[1];
//reading env and args
void* kont8429 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* xy8350 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8429);
arg_buffer[2] = xy8350;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8429))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam8524_fptr() // lam8524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8430 = (decode_clo(env8525))[3];
//not do dummy comment
void* x = (decode_clo(env8525))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8525))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8430;
arg_buffer[3] = x;
arg_buffer[4] = a8356;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8524 = encode_clo(alloc_clo(lam8524_fptr, 0));

void* lam8526_fptr() // lam8526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8527 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8527))[5];
//not do dummy comment
void* lst = (decode_clo(env8527))[4];
//not do dummy comment
void* kont8430 = (decode_clo(env8527))[3];
//not do dummy comment
void* x = (decode_clo(env8527))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8527))[1];

//if-clause
bool if_guard8747 = is_true(a8354);
if(if_guard8747)
{
void* xy8355 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8430);
arg_buffer[2] = xy8355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8749 = alloc_clo(lam8524_fptr, 3);

//setting env list
clo8749[1] = member_u63;
clo8749[2] = x;
clo8749[3] = kont8430;
void* f8431 = encode_clo(clo8749);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

void* lam8528_fptr() // lam8528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8529 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8529))[6];
//not do dummy comment
void* lst = (decode_clo(env8529))[5];
//not do dummy comment
void* kont8430 = (decode_clo(env8529))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8529))[3];
//not do dummy comment
void* x = (decode_clo(env8529))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8529))[1];

//creating new closure instance
void** clo8751 = alloc_clo(lam8526_fptr, 5);

//setting env list
clo8751[1] = member_u63;
clo8751[2] = x;
clo8751[3] = kont8430;
clo8751[4] = lst;
clo8751[5] = cdr;
void* f8432 = encode_clo(clo8751);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8353, x);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
function_ptr();
return nullptr;
}

void* lam8528 = encode_clo(alloc_clo(lam8528_fptr, 0));

void* lam8530_fptr() // lam8530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8531))[7];
//not do dummy comment
void* lst = (decode_clo(env8531))[6];
//not do dummy comment
void* kont8430 = (decode_clo(env8531))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8531))[4];
//not do dummy comment
void* x = (decode_clo(env8531))[3];
//not do dummy comment
void* car = (decode_clo(env8531))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8531))[1];

//if-clause
bool if_guard8752 = is_true(a8351);
if(if_guard8752)
{
void* xy8352 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8430);
arg_buffer[2] = xy8352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8754 = alloc_clo(lam8528_fptr, 6);

//setting env list
clo8754[1] = member_u63;
clo8754[2] = x;
clo8754[3] = equal_u63;
clo8754[4] = kont8430;
clo8754[5] = lst;
clo8754[6] = cdr;
void* f8433 = encode_clo(clo8754);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
function_ptr();
return nullptr;
}

}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8532 = arg_buffer[1];
//reading env and args
void* kont8430 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8756 = alloc_clo(lam8530_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8756[1] = member_u63;
clo8756[2] = car;
clo8756[3] = x;
clo8756[4] = equal_u63;
clo8756[5] = kont8430;
clo8756[6] = lst;
clo8756[7] = cdr;
void* f8434 = encode_clo(clo8756);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8533_fptr() // lam8533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8534 = arg_buffer[1];
//reading env and args
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8435 = (decode_clo(env8534))[4];
//not do dummy comment
void* fun = (decode_clo(env8534))[3];
//not do dummy comment
void* a8359 = (decode_clo(env8534))[2];
//not do dummy comment
void* foldl = (decode_clo(env8534))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8435;
arg_buffer[3] = fun;
arg_buffer[4] = a8359;
arg_buffer[5] = a8360;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8536))[5];
//not do dummy comment
void* lst = (decode_clo(env8536))[4];
//not do dummy comment
void* foldl = (decode_clo(env8536))[3];
//not do dummy comment
void* kont8435 = (decode_clo(env8536))[2];
//not do dummy comment
void* fun = (decode_clo(env8536))[1];

//creating new closure instance
void** clo8758 = alloc_clo(lam8533_fptr, 4);

//setting env list
clo8758[1] = foldl;
clo8758[2] = a8359;
clo8758[3] = fun;
clo8758[4] = kont8435;
void* f8436 = encode_clo(clo8758);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* lam8537_fptr() // lam8537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8538 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8538))[6];
//not do dummy comment
void* lst = (decode_clo(env8538))[5];
//not do dummy comment
void* acc = (decode_clo(env8538))[4];
//not do dummy comment
void* foldl = (decode_clo(env8538))[3];
//not do dummy comment
void* kont8435 = (decode_clo(env8538))[2];
//not do dummy comment
void* fun = (decode_clo(env8538))[1];

//creating new closure instance
void** clo8760 = alloc_clo(lam8535_fptr, 5);

//setting env list
clo8760[1] = fun;
clo8760[2] = kont8435;
clo8760[3] = foldl;
clo8760[4] = lst;
clo8760[5] = cdr;
void* f8437 = encode_clo(clo8760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8437;
arg_buffer[3] = a8358;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8540))[7];
//not do dummy comment
void* lst = (decode_clo(env8540))[6];
//not do dummy comment
void* acc = (decode_clo(env8540))[5];
//not do dummy comment
void* car = (decode_clo(env8540))[4];
//not do dummy comment
void* foldl = (decode_clo(env8540))[3];
//not do dummy comment
void* kont8435 = (decode_clo(env8540))[2];
//not do dummy comment
void* fun = (decode_clo(env8540))[1];

//if-clause
bool if_guard8761 = is_true(a8357);
if(if_guard8761)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8435);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8763 = alloc_clo(lam8537_fptr, 6);

//setting env list
clo8763[1] = fun;
clo8763[2] = kont8435;
clo8763[3] = foldl;
clo8763[4] = acc;
clo8763[5] = lst;
clo8763[6] = cdr;
void* f8438 = encode_clo(clo8763);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
function_ptr();
return nullptr;
}

}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8541 = arg_buffer[1];
//reading env and args
void* kont8435 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8765 = alloc_clo(lam8539_fptr, 7);

//setting env list
clo8765[1] = fun;
clo8765[2] = kont8435;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8765[3] = foldl;
clo8765[4] = car;
clo8765[5] = acc;
clo8765[6] = lst;
clo8765[7] = cdr;
void* f8439 = encode_clo(clo8765);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8542_fptr() // lam8542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8543 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8362 = (decode_clo(env8543))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8543))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8543))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8440;
arg_buffer[3] = a8362;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void* lam8544_fptr() // lam8544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8545 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8362 = (decode_clo(env8545))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8545))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8545))[3];
//not do dummy comment
void* cons = (decode_clo(env8545))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8545))[1];

//creating new closure instance
void** clo8767 = alloc_clo(lam8542_fptr, 3);

//setting env list
clo8767[1] = kont8440;
clo8767[2] = reverse_u45helper;
clo8767[3] = a8362;
void* f8441 = encode_clo(clo8767);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8363, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8441);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
function_ptr();
return nullptr;
}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void* lam8546_fptr() // lam8546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8547 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8547))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8547))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8547))[4];
//not do dummy comment
void* car = (decode_clo(env8547))[3];
//not do dummy comment
void* cons = (decode_clo(env8547))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8547))[1];

//creating new closure instance
void** clo8769 = alloc_clo(lam8544_fptr, 5);

//setting env list
clo8769[1] = kont8440;
clo8769[2] = cons;
clo8769[3] = lst2;
clo8769[4] = reverse_u45helper;
clo8769[5] = a8362;
void* f8442 = encode_clo(clo8769);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8549))[7];
//not do dummy comment
void* lst = (decode_clo(env8549))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8549))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8549))[4];
//not do dummy comment
void* car = (decode_clo(env8549))[3];
//not do dummy comment
void* cons = (decode_clo(env8549))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8549))[1];

//if-clause
bool if_guard8770 = is_true(a8361);
if(if_guard8770)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8772 = alloc_clo(lam8546_fptr, 6);

//setting env list
clo8772[1] = kont8440;
clo8772[2] = cons;
clo8772[3] = car;
clo8772[4] = lst2;
clo8772[5] = reverse_u45helper;
clo8772[6] = lst;
void* f8443 = encode_clo(clo8772);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
function_ptr();
return nullptr;
}

}

void* lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8550 = arg_buffer[1];
//reading env and args
void* kont8440 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8774 = alloc_clo(lam8548_fptr, 7);

//setting env list
clo8774[1] = kont8440;
clo8774[2] = cons;
clo8774[3] = car;
clo8774[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8774[5] = reverse_u45helper;
clo8774[6] = lst;
clo8774[7] = cdr;
void* f8444 = encode_clo(clo8774);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8551_fptr() // lam8551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8552 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8552))[3];
//not do dummy comment
void* lst = (decode_clo(env8552))[2];
//not do dummy comment
void* kont8445 = (decode_clo(env8552))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8445;
arg_buffer[3] = lst;
arg_buffer[4] = a8365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8553 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8776 = alloc_clo(lam8551_fptr, 3);

//setting env list
clo8776[1] = kont8445;
clo8776[2] = lst;
clo8776[3] = reverse_u45helper;
void* f8446 = encode_clo(clo8776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8554_fptr() // lam8554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8555 = arg_buffer[1];
//reading env and args
void* xy8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8447 = (decode_clo(env8555))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[2] = xy8368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
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
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8447 = (decode_clo(env8557))[4];
//not do dummy comment
void* a8369 = (decode_clo(env8557))[3];
//not do dummy comment
void* a8371 = (decode_clo(env8557))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8557))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8447;
arg_buffer[3] = a8369;
arg_buffer[4] = a8371;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8447 = (decode_clo(env8559))[6];
//not do dummy comment
void* a8369 = (decode_clo(env8559))[5];
//not do dummy comment
void* a8371 = (decode_clo(env8559))[4];
//not do dummy comment
void* cons = (decode_clo(env8559))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8559))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8559))[1];

//creating new closure instance
void** clo8778 = alloc_clo(lam8556_fptr, 4);

//setting env list
clo8778[1] = take_u45helper;
clo8778[2] = a8371;
clo8778[3] = a8369;
clo8778[4] = kont8447;
void* f8449 = encode_clo(clo8778);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8372, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8561))[7];
//not do dummy comment
void* kont8447 = (decode_clo(env8561))[6];
//not do dummy comment
void* a8369 = (decode_clo(env8561))[5];
//not do dummy comment
void* car = (decode_clo(env8561))[4];
//not do dummy comment
void* cons = (decode_clo(env8561))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8561))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8561))[1];

//creating new closure instance
void** clo8780 = alloc_clo(lam8558_fptr, 6);

//setting env list
clo8780[1] = lst2;
clo8780[2] = take_u45helper;
clo8780[3] = cons;
clo8780[4] = a8371;
clo8780[5] = a8369;
clo8780[6] = kont8447;
void* f8450 = encode_clo(clo8780);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

void* lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void* lam8563_fptr() // lam8563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8564 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8564))[8];
//not do dummy comment
void* kont8447 = (decode_clo(env8564))[7];
//not do dummy comment
void* cons = (decode_clo(env8564))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8564))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8564))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8564))[3];
//not do dummy comment
void* n = (decode_clo(env8564))[2];
//not do dummy comment
void* car = (decode_clo(env8564))[1];
mpz_t* mpzvar8781 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8781, "1", 10);
void* a8370 = encode_mpz(mpzvar8781);

//creating new closure instance
void** clo8783 = alloc_clo(lam8560_fptr, 7);

//setting env list
clo8783[1] = lst2;
clo8783[2] = take_u45helper;
clo8783[3] = cons;
clo8783[4] = car;
clo8783[5] = a8369;
clo8783[6] = kont8447;
clo8783[7] = lst;
void* f8451 = encode_clo(clo8783);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8370);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
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
void* cdr = (decode_clo(env8566))[10];
//not do dummy comment
void* lst = (decode_clo(env8566))[9];
//not do dummy comment
void* kont8447 = (decode_clo(env8566))[8];
//not do dummy comment
void* reverse = (decode_clo(env8566))[7];
//not do dummy comment
void* cons = (decode_clo(env8566))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8566))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8566))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8566))[3];
//not do dummy comment
void* n = (decode_clo(env8566))[2];
//not do dummy comment
void* car = (decode_clo(env8566))[1];

//if-clause
bool if_guard8784 = is_true(a8367);
if(if_guard8784)
{

//creating new closure instance
void** clo8786 = alloc_clo(lam8554_fptr, 1);

//setting env list
clo8786[1] = kont8447;
void* f8448 = encode_clo(clo8786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8448;
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
void** clo8788 = alloc_clo(lam8563_fptr, 8);

//setting env list
clo8788[1] = car;
clo8788[2] = n;
clo8788[3] = lst2;
clo8788[4] = take_u45helper;
clo8788[5] = _u45;
clo8788[6] = cons;
clo8788[7] = kont8447;
clo8788[8] = lst;
void* f8452 = encode_clo(clo8788);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8452);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8452))[0]);
function_ptr();
return nullptr;
}

}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8568 = arg_buffer[1];
//reading env and args
void* kont8447 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8789 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8789, "0", 10);
void* a8366 = encode_mpz(mpzvar8789);

//creating new closure instance
void** clo8791 = alloc_clo(lam8565_fptr, 10);

//setting env list
clo8791[1] = car;
clo8791[2] = n;
clo8791[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8791[4] = take_u45helper;
clo8791[5] = _u45;
clo8791[6] = cons;
clo8791[7] = reverse;
clo8791[8] = kont8447;
clo8791[9] = lst;
clo8791[10] = cdr;
void* f8453 = encode_clo(clo8791);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8366);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8569_fptr() // lam8569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8570 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8570))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8570))[3];
//not do dummy comment
void* kont8454 = (decode_clo(env8570))[2];
//not do dummy comment
void* n = (decode_clo(env8570))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8454;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8374;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8571 = arg_buffer[1];
//reading env and args
void* kont8454 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8793 = alloc_clo(lam8569_fptr, 4);

//setting env list
clo8793[1] = n;
clo8793[2] = kont8454;
clo8793[3] = take_u45helper;
clo8793[4] = lst;
void* f8455 = encode_clo(clo8793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8455;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8573_fptr() // lam8573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8574 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8377 = (decode_clo(env8574))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8574))[2];
//not do dummy comment
void* kont8456 = (decode_clo(env8574))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8377, a8379);
arg_buffer[1]=reinterpret_cast<void*>(kont8456);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
function_ptr();
return nullptr;
}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void* lam8575_fptr() // lam8575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8377 = (decode_clo(env8576))[4];
//not do dummy comment
void* length = (decode_clo(env8576))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8576))[2];
//not do dummy comment
void* kont8456 = (decode_clo(env8576))[1];

//creating new closure instance
void** clo8795 = alloc_clo(lam8573_fptr, 3);

//setting env list
clo8795[1] = kont8456;
clo8795[2] = _u43;
clo8795[3] = a8377;
void* f8457 = encode_clo(clo8795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8457;
arg_buffer[3] = a8378;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void* lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8579))[5];
//not do dummy comment
void* lst = (decode_clo(env8579))[4];
//not do dummy comment
void* length = (decode_clo(env8579))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8579))[2];
//not do dummy comment
void* kont8456 = (decode_clo(env8579))[1];

//if-clause
bool if_guard8796 = is_true(a8375);
if(if_guard8796)
{
mpz_t* mpzvar8797 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8797, "0", 10);
void* xy8376 = encode_mpz(mpzvar8797);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8456);
arg_buffer[2] = xy8376;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8798 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8798, "1", 10);
void* a8377 = encode_mpz(mpzvar8798);

//creating new closure instance
void** clo8800 = alloc_clo(lam8575_fptr, 4);

//setting env list
clo8800[1] = kont8456;
clo8800[2] = _u43;
clo8800[3] = length;
clo8800[4] = a8377;
void* f8458 = encode_clo(clo8800);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
return nullptr;
}

}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8580 = arg_buffer[1];
//reading env and args
void* kont8456 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8802 = alloc_clo(lam8578_fptr, 5);

//setting env list
clo8802[1] = kont8456;
clo8802[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8802[3] = length;
clo8802[4] = lst;
clo8802[5] = cdr;
void* f8459 = encode_clo(clo8802);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8581_fptr() // lam8581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* xy8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8460 = (decode_clo(env8582))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8460);
arg_buffer[2] = xy8381;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8460))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void* lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8460 = (decode_clo(env8584))[3];
//not do dummy comment
void* a8383 = (decode_clo(env8584))[2];
//not do dummy comment
void* cons = (decode_clo(env8584))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8383, a8385);
arg_buffer[1]=reinterpret_cast<void*>(kont8460);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8460))[0]);
function_ptr();
return nullptr;
}

void* lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void* lam8585_fptr() // lam8585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8586 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8460 = (decode_clo(env8586))[5];
//not do dummy comment
void* map = (decode_clo(env8586))[4];
//not do dummy comment
void* a8383 = (decode_clo(env8586))[3];
//not do dummy comment
void* proc = (decode_clo(env8586))[2];
//not do dummy comment
void* cons = (decode_clo(env8586))[1];

//creating new closure instance
void** clo8804 = alloc_clo(lam8583_fptr, 3);

//setting env list
clo8804[1] = cons;
clo8804[2] = a8383;
clo8804[3] = kont8460;
void* f8462 = encode_clo(clo8804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8462;
arg_buffer[3] = proc;
arg_buffer[4] = a8384;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void* lam8587_fptr() // lam8587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8588 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8588))[6];
//not do dummy comment
void* kont8460 = (decode_clo(env8588))[5];
//not do dummy comment
void* lst = (decode_clo(env8588))[4];
//not do dummy comment
void* map = (decode_clo(env8588))[3];
//not do dummy comment
void* proc = (decode_clo(env8588))[2];
//not do dummy comment
void* cons = (decode_clo(env8588))[1];

//creating new closure instance
void** clo8806 = alloc_clo(lam8585_fptr, 5);

//setting env list
clo8806[1] = cons;
clo8806[2] = proc;
clo8806[3] = a8383;
clo8806[4] = map;
clo8806[5] = kont8460;
void* f8463 = encode_clo(clo8806);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
function_ptr();
return nullptr;
}

void* lam8587 = encode_clo(alloc_clo(lam8587_fptr, 0));

void* lam8589_fptr() // lam8589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8590 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8590))[6];
//not do dummy comment
void* kont8460 = (decode_clo(env8590))[5];
//not do dummy comment
void* lst = (decode_clo(env8590))[4];
//not do dummy comment
void* map = (decode_clo(env8590))[3];
//not do dummy comment
void* proc = (decode_clo(env8590))[2];
//not do dummy comment
void* cons = (decode_clo(env8590))[1];

//creating new closure instance
void** clo8808 = alloc_clo(lam8587_fptr, 6);

//setting env list
clo8808[1] = cons;
clo8808[2] = proc;
clo8808[3] = map;
clo8808[4] = lst;
clo8808[5] = kont8460;
clo8808[6] = cdr;
void* f8464 = encode_clo(clo8808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8464;
arg_buffer[3] = a8382;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void* lam8591_fptr() // lam8591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8592 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8460 = (decode_clo(env8592))[8];
//not do dummy comment
void* lst = (decode_clo(env8592))[7];
//not do dummy comment
void* map = (decode_clo(env8592))[6];
//not do dummy comment
void* proc = (decode_clo(env8592))[5];
//not do dummy comment
void* car = (decode_clo(env8592))[4];
//not do dummy comment
void* cons = (decode_clo(env8592))[3];
//not do dummy comment
void* list = (decode_clo(env8592))[2];
//not do dummy comment
void* cdr = (decode_clo(env8592))[1];

//if-clause
bool if_guard8809 = is_true(a8380);
if(if_guard8809)
{

//creating new closure instance
void** clo8811 = alloc_clo(lam8581_fptr, 1);

//setting env list
clo8811[1] = kont8460;
void* f8461 = encode_clo(clo8811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8461;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8813 = alloc_clo(lam8589_fptr, 6);

//setting env list
clo8813[1] = cons;
clo8813[2] = proc;
clo8813[3] = map;
clo8813[4] = lst;
clo8813[5] = kont8460;
clo8813[6] = cdr;
void* f8465 = encode_clo(clo8813);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
function_ptr();
return nullptr;
}

}

void* lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8593 = arg_buffer[1];
//reading env and args
void* kont8460 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8815 = alloc_clo(lam8591_fptr, 8);

//setting env list
clo8815[1] = cdr;
clo8815[2] = list;
clo8815[3] = cons;
clo8815[4] = car;
clo8815[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8815[6] = map;
clo8815[7] = lst;
clo8815[8] = kont8460;
void* f8466 = encode_clo(clo8815);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8594_fptr() // lam8594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8595 = arg_buffer[1];
//reading env and args
void* xy8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8467 = (decode_clo(env8595))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8467);
arg_buffer[2] = xy8387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8467))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8467 = (decode_clo(env8597))[3];
//not do dummy comment
void* a8390 = (decode_clo(env8597))[2];
//not do dummy comment
void* cons = (decode_clo(env8597))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8390, a8392);
arg_buffer[1]=reinterpret_cast<void*>(kont8467);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8467))[0]);
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8599))[5];
//not do dummy comment
void* kont8467 = (decode_clo(env8599))[4];
//not do dummy comment
void* cons = (decode_clo(env8599))[3];
//not do dummy comment
void* filter = (decode_clo(env8599))[2];
//not do dummy comment
void* a8390 = (decode_clo(env8599))[1];

//creating new closure instance
void** clo8817 = alloc_clo(lam8596_fptr, 3);

//setting env list
clo8817[1] = cons;
clo8817[2] = a8390;
clo8817[3] = kont8467;
void* f8469 = encode_clo(clo8817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8469;
arg_buffer[3] = op;
arg_buffer[4] = a8391;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8601))[6];
//not do dummy comment
void* lst = (decode_clo(env8601))[5];
//not do dummy comment
void* op = (decode_clo(env8601))[4];
//not do dummy comment
void* kont8467 = (decode_clo(env8601))[3];
//not do dummy comment
void* filter = (decode_clo(env8601))[2];
//not do dummy comment
void* cons = (decode_clo(env8601))[1];

//creating new closure instance
void** clo8819 = alloc_clo(lam8598_fptr, 5);

//setting env list
clo8819[1] = a8390;
clo8819[2] = filter;
clo8819[3] = cons;
clo8819[4] = kont8467;
clo8819[5] = op;
void* f8470 = encode_clo(clo8819);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
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
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8603))[3];
//not do dummy comment
void* kont8467 = (decode_clo(env8603))[2];
//not do dummy comment
void* filter = (decode_clo(env8603))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8467;
arg_buffer[3] = op;
arg_buffer[4] = a8393;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* cdr = (decode_clo(env8605))[7];
//not do dummy comment
void* lst = (decode_clo(env8605))[6];
//not do dummy comment
void* op = (decode_clo(env8605))[5];
//not do dummy comment
void* kont8467 = (decode_clo(env8605))[4];
//not do dummy comment
void* cons = (decode_clo(env8605))[3];
//not do dummy comment
void* filter = (decode_clo(env8605))[2];
//not do dummy comment
void* car = (decode_clo(env8605))[1];

//if-clause
bool if_guard8820 = is_true(a8389);
if(if_guard8820)
{

//creating new closure instance
void** clo8822 = alloc_clo(lam8600_fptr, 6);

//setting env list
clo8822[1] = cons;
clo8822[2] = filter;
clo8822[3] = kont8467;
clo8822[4] = op;
clo8822[5] = lst;
clo8822[6] = cdr;
void* f8471 = encode_clo(clo8822);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8824 = alloc_clo(lam8602_fptr, 3);

//setting env list
clo8824[1] = filter;
clo8824[2] = kont8467;
clo8824[3] = op;
void* f8472 = encode_clo(clo8824);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
function_ptr();
return nullptr;
}

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
void* cdr = (decode_clo(env8607))[7];
//not do dummy comment
void* lst = (decode_clo(env8607))[6];
//not do dummy comment
void* op = (decode_clo(env8607))[5];
//not do dummy comment
void* kont8467 = (decode_clo(env8607))[4];
//not do dummy comment
void* cons = (decode_clo(env8607))[3];
//not do dummy comment
void* filter = (decode_clo(env8607))[2];
//not do dummy comment
void* car = (decode_clo(env8607))[1];

//creating new closure instance
void** clo8826 = alloc_clo(lam8604_fptr, 7);

//setting env list
clo8826[1] = car;
clo8826[2] = filter;
clo8826[3] = cons;
clo8826[4] = kont8467;
clo8826[5] = op;
clo8826[6] = lst;
clo8826[7] = cdr;
void* f8473 = encode_clo(clo8826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8473;
arg_buffer[3] = a8388;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8609))[8];
//not do dummy comment
void* op = (decode_clo(env8609))[7];
//not do dummy comment
void* kont8467 = (decode_clo(env8609))[6];
//not do dummy comment
void* cons = (decode_clo(env8609))[5];
//not do dummy comment
void* list = (decode_clo(env8609))[4];
//not do dummy comment
void* cdr = (decode_clo(env8609))[3];
//not do dummy comment
void* filter = (decode_clo(env8609))[2];
//not do dummy comment
void* car = (decode_clo(env8609))[1];

//if-clause
bool if_guard8827 = is_true(a8386);
if(if_guard8827)
{

//creating new closure instance
void** clo8829 = alloc_clo(lam8594_fptr, 1);

//setting env list
clo8829[1] = kont8467;
void* f8468 = encode_clo(clo8829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8831 = alloc_clo(lam8606_fptr, 7);

//setting env list
clo8831[1] = car;
clo8831[2] = filter;
clo8831[3] = cons;
clo8831[4] = kont8467;
clo8831[5] = op;
clo8831[6] = lst;
clo8831[7] = cdr;
void* f8474 = encode_clo(clo8831);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
function_ptr();
return nullptr;
}

}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8610 = arg_buffer[1];
//reading env and args
void* kont8467 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8833 = alloc_clo(lam8608_fptr, 8);

//setting env list
clo8833[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8833[2] = filter;
clo8833[3] = cdr;
clo8833[4] = list;
clo8833[5] = cons;
clo8833[6] = kont8467;
clo8833[7] = op;
clo8833[8] = lst;
void* f8475 = encode_clo(clo8833);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8611_fptr() // lam8611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8612 = arg_buffer[1];
//reading env and args
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8612))[3];
//not do dummy comment
void* a8396 = (decode_clo(env8612))[2];
//not do dummy comment
void* kont8476 = (decode_clo(env8612))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8476;
arg_buffer[3] = a8396;
arg_buffer[4] = a8398;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void* lam8614_fptr() // lam8614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8615 = arg_buffer[1];
//reading env and args
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8476 = (decode_clo(env8615))[4];
//not do dummy comment
void* drop = (decode_clo(env8615))[3];
//not do dummy comment
void* n = (decode_clo(env8615))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8615))[1];
mpz_t* mpzvar8834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8834, "1", 10);
void* a8397 = encode_mpz(mpzvar8834);

//creating new closure instance
void** clo8836 = alloc_clo(lam8611_fptr, 3);

//setting env list
clo8836[1] = kont8476;
clo8836[2] = a8396;
clo8836[3] = drop;
void* f8477 = encode_clo(clo8836);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8397);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
function_ptr();
return nullptr;
}

void* lam8614 = encode_clo(alloc_clo(lam8614_fptr, 0));

void* lam8616_fptr() // lam8616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8617 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8617))[6];
//not do dummy comment
void* kont8476 = (decode_clo(env8617))[5];
//not do dummy comment
void* n = (decode_clo(env8617))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8617))[3];
//not do dummy comment
void* lst = (decode_clo(env8617))[2];
//not do dummy comment
void* drop = (decode_clo(env8617))[1];

//if-clause
bool if_guard8837 = is_true(a8395);
if(if_guard8837)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8476);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8476))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8839 = alloc_clo(lam8614_fptr, 4);

//setting env list
clo8839[1] = _u45;
clo8839[2] = n;
clo8839[3] = drop;
clo8839[4] = kont8476;
void* f8478 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8478);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
function_ptr();
return nullptr;
}

}

void* lam8616 = encode_clo(alloc_clo(lam8616_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8619 = arg_buffer[1];
//reading env and args
void* kont8476 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8840 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8840, "0", 10);
void* a8394 = encode_mpz(mpzvar8840);

//creating new closure instance
void** clo8842 = alloc_clo(lam8616_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8842[1] = drop;
clo8842[2] = lst;
clo8842[3] = _u45;
clo8842[4] = n;
clo8842[5] = kont8476;
clo8842[6] = cdr;
void* f8479 = encode_clo(clo8842);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8394);
arg_buffer[1]=reinterpret_cast<void*>(f8479);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8620_fptr() // lam8620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8621 = arg_buffer[1];
//reading env and args
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env8621))[3];
//not do dummy comment
void* a8400 = (decode_clo(env8621))[2];
//not do dummy comment
void* kont8480 = (decode_clo(env8621))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8480;
arg_buffer[3] = a8400;
arg_buffer[4] = a8402;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8620 = encode_clo(alloc_clo(lam8620_fptr, 0));

void* lam8622_fptr() // lam8622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8623 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8623))[5];
//not do dummy comment
void* a8400 = (decode_clo(env8623))[4];
//not do dummy comment
void* kont8480 = (decode_clo(env8623))[3];
//not do dummy comment
void* proc = (decode_clo(env8623))[2];
//not do dummy comment
void* acc = (decode_clo(env8623))[1];

//creating new closure instance
void** clo8844 = alloc_clo(lam8620_fptr, 3);

//setting env list
clo8844[1] = kont8480;
clo8844[2] = a8400;
clo8844[3] = proc;
void* f8481 = encode_clo(clo8844);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8481;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8622 = encode_clo(alloc_clo(lam8622_fptr, 0));

void* lam8624_fptr() // lam8624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8625 = arg_buffer[1];
//reading env and args
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8625))[6];
//not do dummy comment
void* kont8480 = (decode_clo(env8625))[5];
//not do dummy comment
void* foldr = (decode_clo(env8625))[4];
//not do dummy comment
void* lst = (decode_clo(env8625))[3];
//not do dummy comment
void* proc = (decode_clo(env8625))[2];
//not do dummy comment
void* acc = (decode_clo(env8625))[1];

//creating new closure instance
void** clo8846 = alloc_clo(lam8622_fptr, 5);

//setting env list
clo8846[1] = acc;
clo8846[2] = proc;
clo8846[3] = kont8480;
clo8846[4] = a8400;
clo8846[5] = foldr;
void* f8482 = encode_clo(clo8846);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
function_ptr();
return nullptr;
}

void* lam8624 = encode_clo(alloc_clo(lam8624_fptr, 0));

void* lam8626_fptr() // lam8626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8627 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8627))[7];
//not do dummy comment
void* kont8480 = (decode_clo(env8627))[6];
//not do dummy comment
void* car = (decode_clo(env8627))[5];
//not do dummy comment
void* foldr = (decode_clo(env8627))[4];
//not do dummy comment
void* lst = (decode_clo(env8627))[3];
//not do dummy comment
void* proc = (decode_clo(env8627))[2];
//not do dummy comment
void* acc = (decode_clo(env8627))[1];

//if-clause
bool if_guard8847 = is_true(a8399);
if(if_guard8847)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8480);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8480))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8849 = alloc_clo(lam8624_fptr, 6);

//setting env list
clo8849[1] = acc;
clo8849[2] = proc;
clo8849[3] = lst;
clo8849[4] = foldr;
clo8849[5] = kont8480;
clo8849[6] = cdr;
void* f8483 = encode_clo(clo8849);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8483);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8483))[0]);
function_ptr();
return nullptr;
}

}

void* lam8626 = encode_clo(alloc_clo(lam8626_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8628 = arg_buffer[1];
//reading env and args
void* kont8480 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8851 = alloc_clo(lam8626_fptr, 7);

//setting env list
clo8851[1] = acc;
clo8851[2] = proc;
clo8851[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8851[4] = foldr;
clo8851[5] = car;
clo8851[6] = kont8480;
clo8851[7] = cdr;
void* f8484 = encode_clo(clo8851);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8484);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8484))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8629_fptr() // lam8629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8630 = arg_buffer[1];
//reading env and args
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8404 = (decode_clo(env8630))[3];
//not do dummy comment
void* kont8485 = (decode_clo(env8630))[2];
//not do dummy comment
void* cons = (decode_clo(env8630))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8404, a8406);
arg_buffer[1]=reinterpret_cast<void*>(kont8485);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8485))[0]);
function_ptr();
return nullptr;
}

void* lam8629 = encode_clo(alloc_clo(lam8629_fptr, 0));

void* lam8631_fptr() // lam8631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8632 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8632))[5];
//not do dummy comment
void* a8404 = (decode_clo(env8632))[4];
//not do dummy comment
void* cons = (decode_clo(env8632))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8632))[2];
//not do dummy comment
void* kont8485 = (decode_clo(env8632))[1];

//creating new closure instance
void** clo8853 = alloc_clo(lam8629_fptr, 3);

//setting env list
clo8853[1] = cons;
clo8853[2] = kont8485;
clo8853[3] = a8404;
void* f8486 = encode_clo(clo8853);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8486;
arg_buffer[3] = a8405;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8631 = encode_clo(alloc_clo(lam8631_fptr, 0));

void* lam8633_fptr() // lam8633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8634 = arg_buffer[1];
//reading env and args
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8634))[6];
//not do dummy comment
void* append = (decode_clo(env8634))[5];
//not do dummy comment
void* lst1 = (decode_clo(env8634))[4];
//not do dummy comment
void* cons = (decode_clo(env8634))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8634))[2];
//not do dummy comment
void* kont8485 = (decode_clo(env8634))[1];

//creating new closure instance
void** clo8855 = alloc_clo(lam8631_fptr, 5);

//setting env list
clo8855[1] = kont8485;
clo8855[2] = lst2;
clo8855[3] = cons;
clo8855[4] = a8404;
clo8855[5] = append;
void* f8487 = encode_clo(clo8855);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8487);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8487))[0]);
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
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8636))[7];
//not do dummy comment
void* append = (decode_clo(env8636))[6];
//not do dummy comment
void* cons = (decode_clo(env8636))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8636))[4];
//not do dummy comment
void* kont8485 = (decode_clo(env8636))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8636))[2];
//not do dummy comment
void* car = (decode_clo(env8636))[1];

//if-clause
bool if_guard8856 = is_true(a8403);
if(if_guard8856)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8485);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8485))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8858 = alloc_clo(lam8633_fptr, 6);

//setting env list
clo8858[1] = kont8485;
clo8858[2] = lst2;
clo8858[3] = cons;
clo8858[4] = lst1;
clo8858[5] = append;
clo8858[6] = cdr;
void* f8488 = encode_clo(clo8858);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8488);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8488))[0]);
function_ptr();
return nullptr;
}

}

void* lam8635 = encode_clo(alloc_clo(lam8635_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8637 = arg_buffer[1];
//reading env and args
void* kont8485 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8860 = alloc_clo(lam8635_fptr, 7);

//setting env list
clo8860[1] = car;
clo8860[2] = lst1;
clo8860[3] = kont8485;
clo8860[4] = lst2;
clo8860[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8860[6] = append;
clo8860[7] = cdr;
void* f8489 = encode_clo(clo8860);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8489);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8489))[0]);
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
void* _env8863 = arg_buffer[1];
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

void* kont8861 = prim_car(lst);
void* lst8864 = prim_cdr(lst);
void* x8862 = apply_prim_hash(lst8864);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8861);
arg_buffer[2] = x8862;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8861))[0]);
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
void* _8638 = arg_buffer[1];
//reading env and args
void* kont8490 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8407 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8490);
arg_buffer[2] = xy8407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8490))[0]);
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
void* _8639 = arg_buffer[1];
//reading env and args
void* kont8491 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* xy8408 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8491);
arg_buffer[2] = xy8408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8491))[0]);
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
void* _8640 = arg_buffer[1];
//reading env and args
void* kont8492 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8409 = prim_hash_u45keys(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8492);
arg_buffer[2] = xy8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
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
void* _8641 = arg_buffer[1];
//reading env and args
void* kont8493 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8410 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8493);
arg_buffer[2] = xy8410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
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
void* _8642 = arg_buffer[1];
//reading env and args
void* kont8494 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8411 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8494);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8494))[0]);
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
void* _env8867 = arg_buffer[1];
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

void* kont8865 = prim_car(lst);
void* lst8868 = prim_cdr(lst);
void* x8866 = apply_prim_set(lst8868);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8865);
arg_buffer[2] = x8866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8865))[0]);
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
void* _8643 = arg_buffer[1];
//reading env and args
void* kont8495 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8412 = prim_set_u45_u62list(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8495);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8495))[0]);
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
void* _8644 = arg_buffer[1];
//reading env and args
void* kont8496 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8413 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8496);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8496))[0]);
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
void* _8645 = arg_buffer[1];
//reading env and args
void* kont8497 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8414 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8497);
arg_buffer[2] = xy8414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8497))[0]);
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
void* _8646 = arg_buffer[1];
//reading env and args
void* kont8498 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8415 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8498);
arg_buffer[2] = xy8415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8498))[0]);
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
void* _8647 = arg_buffer[1];
//reading env and args
void* kont8499 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8416 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8499);
arg_buffer[2] = xy8416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8499))[0]);
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
void* _8648 = arg_buffer[1];
//reading env and args
void* kont8500 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8417 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8500);
arg_buffer[2] = xy8417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8500))[0]);
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
void* _8649 = arg_buffer[1];
//reading env and args
void* kont8501 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8418 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8501);
arg_buffer[2] = xy8418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8501))[0]);
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
void* _8650 = arg_buffer[1];
//reading env and args
void* kont8502 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8419 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8502);
arg_buffer[2] = xy8419;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8502))[0]);
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
void* _8651 = arg_buffer[1];
//reading env and args
void* kont8503 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8420 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8503);
arg_buffer[2] = xy8420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8503))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam8652_fptr() // lam8652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8653 = arg_buffer[1];
//reading env and args
void* a8422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* float_u45_u62int = (decode_clo(env8653))[2];
//not do dummy comment
void* kont8504 = (decode_clo(env8653))[1];
void* cps_u45lst8505 = prim_cons(kont8504, a8422);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(float_u45_u62int);
arg_buffer[2] = cps_u45lst8505;
arg_buffer[0] = reinterpret_cast<void*>(2);
float_u45_u62int_fptr();
return nullptr;
}

void* lam8652 = encode_clo(alloc_clo(lam8652_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8655 = arg_buffer[1];
//reading env and args
void* kont8504 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar8869 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8869, "4.14", 10);
void* a8421 = encode_mpf(mpfvar8869);

//creating new closure instance
void** clo8871 = alloc_clo(lam8652_fptr, 2);

//setting env list
clo8871[1] = kont8504;
clo8871[2] = float_u45_u62int;
void* f8506 = encode_clo(clo8871);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8506;
arg_buffer[3] = a8421;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8656_fptr() // lam8656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8657 = arg_buffer[1];
//reading env and args
void* xy8423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8507 = (decode_clo(env8657))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8507);
arg_buffer[2] = xy8423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8507))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8656 = encode_clo(alloc_clo(lam8656_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8658 = arg_buffer[1];
//reading env and args
void* kont8507 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8873 = alloc_clo(lam8656_fptr, 1);

//setting env list
clo8873[1] = kont8507;
void* f8508 = encode_clo(clo8873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8508;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
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

