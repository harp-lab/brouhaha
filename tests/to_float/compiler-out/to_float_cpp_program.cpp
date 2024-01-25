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
void* _env8658 = arg_buffer[1];
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

void* kont8656 = prim_car(lst);
void* lst8659 = prim_cdr(lst);
void* x8657 = apply_prim__u43(lst8659);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8656);
arg_buffer[2] = x8657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8656))[0]);
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
void* _env8662 = arg_buffer[1];
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

void* kont8660 = prim_car(lst);
void* lst8663 = prim_cdr(lst);
void* x8661 = apply_prim__u45(lst8663);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8660);
arg_buffer[2] = x8661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8660))[0]);
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
void* _env8666 = arg_buffer[1];
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

void* kont8664 = prim_car(lst);
void* lst8667 = prim_cdr(lst);
void* x8665 = apply_prim__u42(lst8667);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8664);
arg_buffer[2] = x8665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8664))[0]);
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
void* _env8670 = arg_buffer[1];
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

void* kont8668 = prim_car(lst);
void* lst8671 = prim_cdr(lst);
void* x8669 = apply_prim__u47(lst8671);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8668);
arg_buffer[2] = x8669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8668))[0]);
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
void* _env8674 = arg_buffer[1];
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

void* kont8672 = prim_car(lst);
void* lst8675 = prim_cdr(lst);
void* x8673 = apply_prim__u61(lst8675);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8672);
arg_buffer[2] = x8673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8672))[0]);
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
void* _env8678 = arg_buffer[1];
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

void* kont8676 = prim_car(lst);
void* lst8679 = prim_cdr(lst);
void* x8677 = apply_prim__u62(lst8679);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8676);
arg_buffer[2] = x8677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8676))[0]);
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
void* _env8682 = arg_buffer[1];
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

void* kont8680 = prim_car(lst);
void* lst8683 = prim_cdr(lst);
void* x8681 = apply_prim__u60(lst8683);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8680);
arg_buffer[2] = x8681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8680))[0]);
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
void* _env8686 = arg_buffer[1];
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

void* kont8684 = prim_car(lst);
void* lst8687 = prim_cdr(lst);
void* x8685 = apply_prim__u60_u61(lst8687);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8684);
arg_buffer[2] = x8685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8684))[0]);
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
void* x8689 = apply_prim__u62_u61(lst8691);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8688);
arg_buffer[2] = x8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
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
void* x8693 = apply_prim_modulo(lst8695);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8692);
arg_buffer[2] = x8693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8692))[0]);
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
void* x8697 = apply_prim_null_u63(lst8699);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8696);
arg_buffer[2] = x8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8696))[0]);
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
void* x8701 = apply_prim_equal_u63(lst8703);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8700);
arg_buffer[2] = x8701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8700))[0]);
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
void* x8705 = apply_prim_eq_u63(lst8707);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8704);
arg_buffer[2] = x8705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
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
void* x8709 = apply_prim_exact_u45floor(lst8711);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8708);
arg_buffer[2] = x8709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
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
void* x8713 = apply_prim_exact_u45ceiling(lst8715);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8712);
arg_buffer[2] = x8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
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
void* x8717 = apply_prim_exact_u45round(lst8719);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8716);
arg_buffer[2] = x8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
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
void* x8721 = apply_prim_cons(lst8723);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8720);
arg_buffer[2] = x8721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
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
void* x8725 = apply_prim_car(lst8727);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8724);
arg_buffer[2] = x8725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
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
void* x8729 = apply_prim_cdr(lst8731);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8728);
arg_buffer[2] = x8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
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
void* x8733 = apply_prim_float_u45_u62int(lst8735);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8732);
arg_buffer[2] = x8733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8738 = arg_buffer[1];
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

void* kont8736 = prim_car(lst);
void* lst8739 = prim_cdr(lst);
void* x8737 = apply_prim_int_u45_u62float(lst8739);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8736);
arg_buffer[2] = x8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam8508_fptr() // lam8508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8509))[3];
//not do dummy comment
void* kont8423 = (decode_clo(env8509))[2];
//not do dummy comment
void* a8344 = (decode_clo(env8509))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8423);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
function_ptr();
return nullptr;
}

void* lam8508 = encode_clo(alloc_clo(lam8508_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8512 = arg_buffer[1];
//reading env and args
void* kont8423 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8740 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8740, "0", 10);
void* a8344 = encode_mpz(mpzvar8740);
mpz_t* mpzvar8741 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8741, "2", 10);
void* a8345 = encode_mpz(mpzvar8741);

//creating new closure instance
void** clo8743 = alloc_clo(lam8508_fptr, 3);

//setting env list
clo8743[1] = a8344;
clo8743[2] = kont8423;
clo8743[3] = equal_u63;
void* f8424 = encode_clo(clo8743);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8424);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8424))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8513_fptr() // lam8513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8514 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8425 = (decode_clo(env8514))[3];
//not do dummy comment
void* a8347 = (decode_clo(env8514))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8514))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8425);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
function_ptr();
return nullptr;
}

void* lam8513 = encode_clo(alloc_clo(lam8513_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8517 = arg_buffer[1];
//reading env and args
void* kont8425 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8744 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8744, "1", 10);
void* a8347 = encode_mpz(mpzvar8744);
mpz_t* mpzvar8745 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8745, "2", 10);
void* a8348 = encode_mpz(mpzvar8745);

//creating new closure instance
void** clo8747 = alloc_clo(lam8513_fptr, 3);

//setting env list
clo8747[1] = equal_u63;
clo8747[2] = a8347;
clo8747[3] = kont8425;
void* f8426 = encode_clo(clo8747);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
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
void* _8518 = arg_buffer[1];
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

void* kont8427 = prim_car(x);
void* x8507 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8427);
arg_buffer[2] = x8507;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8427))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8521_fptr() // lam8521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8428 = (decode_clo(env8522))[3];
//not do dummy comment
void* x = (decode_clo(env8522))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8522))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8428;
arg_buffer[3] = x;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8521 = encode_clo(alloc_clo(lam8521_fptr, 0));

void* lam8523_fptr() // lam8523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8524))[5];
//not do dummy comment
void* kont8428 = (decode_clo(env8524))[4];
//not do dummy comment
void* lst = (decode_clo(env8524))[3];
//not do dummy comment
void* x = (decode_clo(env8524))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8524))[1];

//if-clause
bool if_guard8748 = is_true(a8353);
if(if_guard8748)
{
void* xy8354 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8428);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8750 = alloc_clo(lam8521_fptr, 3);

//setting env list
clo8750[1] = member_u63;
clo8750[2] = x;
clo8750[3] = kont8428;
void* f8429 = encode_clo(clo8750);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
function_ptr();
return nullptr;
}

}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void* lam8525_fptr() // lam8525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8526 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8526))[6];
//not do dummy comment
void* kont8428 = (decode_clo(env8526))[5];
//not do dummy comment
void* lst = (decode_clo(env8526))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8526))[3];
//not do dummy comment
void* x = (decode_clo(env8526))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8526))[1];

//creating new closure instance
void** clo8752 = alloc_clo(lam8523_fptr, 5);

//setting env list
clo8752[1] = member_u63;
clo8752[2] = x;
clo8752[3] = lst;
clo8752[4] = kont8428;
clo8752[5] = cdr;
void* f8430 = encode_clo(clo8752);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8430);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
function_ptr();
return nullptr;
}

void* lam8525 = encode_clo(alloc_clo(lam8525_fptr, 0));

void* lam8527_fptr() // lam8527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8528 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8528))[7];
//not do dummy comment
void* kont8428 = (decode_clo(env8528))[6];
//not do dummy comment
void* lst = (decode_clo(env8528))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8528))[4];
//not do dummy comment
void* x = (decode_clo(env8528))[3];
//not do dummy comment
void* car = (decode_clo(env8528))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8528))[1];

//if-clause
bool if_guard8753 = is_true(a8350);
if(if_guard8753)
{
void* xy8351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8428);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8755 = alloc_clo(lam8525_fptr, 6);

//setting env list
clo8755[1] = member_u63;
clo8755[2] = x;
clo8755[3] = equal_u63;
clo8755[4] = lst;
clo8755[5] = kont8428;
clo8755[6] = cdr;
void* f8431 = encode_clo(clo8755);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

}

void* lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8529 = arg_buffer[1];
//reading env and args
void* kont8428 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8757 = alloc_clo(lam8527_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8757[1] = member_u63;
clo8757[2] = car;
clo8757[3] = x;
clo8757[4] = equal_u63;
clo8757[5] = lst;
clo8757[6] = kont8428;
clo8757[7] = cdr;
void* f8432 = encode_clo(clo8757);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8530_fptr() // lam8530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8433 = (decode_clo(env8531))[4];
//not do dummy comment
void* fun = (decode_clo(env8531))[3];
//not do dummy comment
void* a8358 = (decode_clo(env8531))[2];
//not do dummy comment
void* foldl = (decode_clo(env8531))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8433;
arg_buffer[3] = fun;
arg_buffer[4] = a8358;
arg_buffer[5] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void* lam8532_fptr() // lam8532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8533 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8533))[5];
//not do dummy comment
void* lst = (decode_clo(env8533))[4];
//not do dummy comment
void* kont8433 = (decode_clo(env8533))[3];
//not do dummy comment
void* fun = (decode_clo(env8533))[2];
//not do dummy comment
void* foldl = (decode_clo(env8533))[1];

//creating new closure instance
void** clo8759 = alloc_clo(lam8530_fptr, 4);

//setting env list
clo8759[1] = foldl;
clo8759[2] = a8358;
clo8759[3] = fun;
clo8759[4] = kont8433;
void* f8434 = encode_clo(clo8759);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void* lam8534_fptr() // lam8534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8535 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8535))[6];
//not do dummy comment
void* lst = (decode_clo(env8535))[5];
//not do dummy comment
void* kont8433 = (decode_clo(env8535))[4];
//not do dummy comment
void* fun = (decode_clo(env8535))[3];
//not do dummy comment
void* acc = (decode_clo(env8535))[2];
//not do dummy comment
void* foldl = (decode_clo(env8535))[1];

//creating new closure instance
void** clo8761 = alloc_clo(lam8532_fptr, 5);

//setting env list
clo8761[1] = foldl;
clo8761[2] = fun;
clo8761[3] = kont8433;
clo8761[4] = lst;
clo8761[5] = cdr;
void* f8435 = encode_clo(clo8761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8435;
arg_buffer[3] = a8357;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8534 = encode_clo(alloc_clo(lam8534_fptr, 0));

void* lam8536_fptr() // lam8536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8537 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8537))[7];
//not do dummy comment
void* lst = (decode_clo(env8537))[6];
//not do dummy comment
void* kont8433 = (decode_clo(env8537))[5];
//not do dummy comment
void* fun = (decode_clo(env8537))[4];
//not do dummy comment
void* acc = (decode_clo(env8537))[3];
//not do dummy comment
void* car = (decode_clo(env8537))[2];
//not do dummy comment
void* foldl = (decode_clo(env8537))[1];

//if-clause
bool if_guard8762 = is_true(a8356);
if(if_guard8762)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8433);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8433))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8764 = alloc_clo(lam8534_fptr, 6);

//setting env list
clo8764[1] = foldl;
clo8764[2] = acc;
clo8764[3] = fun;
clo8764[4] = kont8433;
clo8764[5] = lst;
clo8764[6] = cdr;
void* f8436 = encode_clo(clo8764);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

}

void* lam8536 = encode_clo(alloc_clo(lam8536_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8538 = arg_buffer[1];
//reading env and args
void* kont8433 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8766 = alloc_clo(lam8536_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8766[1] = foldl;
clo8766[2] = car;
clo8766[3] = acc;
clo8766[4] = fun;
clo8766[5] = kont8433;
clo8766[6] = lst;
clo8766[7] = cdr;
void* f8437 = encode_clo(clo8766);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8539_fptr() // lam8539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8540))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8540))[2];
//not do dummy comment
void* kont8438 = (decode_clo(env8540))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8438;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void* lam8541_fptr() // lam8541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8542 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8542))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8542))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8542))[3];
//not do dummy comment
void* kont8438 = (decode_clo(env8542))[2];
//not do dummy comment
void* cons = (decode_clo(env8542))[1];

//creating new closure instance
void** clo8768 = alloc_clo(lam8539_fptr, 3);

//setting env list
clo8768[1] = kont8438;
clo8768[2] = reverse_u45helper;
clo8768[3] = a8361;
void* f8439 = encode_clo(clo8768);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8544))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8544))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8544))[4];
//not do dummy comment
void* cons = (decode_clo(env8544))[3];
//not do dummy comment
void* kont8438 = (decode_clo(env8544))[2];
//not do dummy comment
void* car = (decode_clo(env8544))[1];

//creating new closure instance
void** clo8770 = alloc_clo(lam8541_fptr, 5);

//setting env list
clo8770[1] = cons;
clo8770[2] = kont8438;
clo8770[3] = lst2;
clo8770[4] = reverse_u45helper;
clo8770[5] = a8361;
void* f8440 = encode_clo(clo8770);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
function_ptr();
return nullptr;
}

void* lam8543 = encode_clo(alloc_clo(lam8543_fptr, 0));

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
void* cdr = (decode_clo(env8546))[7];
//not do dummy comment
void* lst = (decode_clo(env8546))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8546))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8546))[4];
//not do dummy comment
void* cons = (decode_clo(env8546))[3];
//not do dummy comment
void* kont8438 = (decode_clo(env8546))[2];
//not do dummy comment
void* car = (decode_clo(env8546))[1];

//if-clause
bool if_guard8771 = is_true(a8360);
if(if_guard8771)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8438);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8438))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8773 = alloc_clo(lam8543_fptr, 6);

//setting env list
clo8773[1] = car;
clo8773[2] = kont8438;
clo8773[3] = cons;
clo8773[4] = lst2;
clo8773[5] = reverse_u45helper;
clo8773[6] = lst;
void* f8441 = encode_clo(clo8773);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8441);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
function_ptr();
return nullptr;
}

}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8547 = arg_buffer[1];
//reading env and args
void* kont8438 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8775 = alloc_clo(lam8545_fptr, 7);

//setting env list
clo8775[1] = car;
clo8775[2] = kont8438;
clo8775[3] = cons;
clo8775[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8775[5] = reverse_u45helper;
clo8775[6] = lst;
clo8775[7] = cdr;
void* f8442 = encode_clo(clo8775);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8548_fptr() // lam8548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8443 = (decode_clo(env8549))[3];
//not do dummy comment
void* lst = (decode_clo(env8549))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8549))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8443;
arg_buffer[3] = lst;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8550 = arg_buffer[1];
//reading env and args
void* kont8443 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8777 = alloc_clo(lam8548_fptr, 3);

//setting env list
clo8777[1] = reverse_u45helper;
clo8777[2] = lst;
clo8777[3] = kont8443;
void* f8444 = encode_clo(clo8777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8444;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8551_fptr() // lam8551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8552 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8445 = (decode_clo(env8552))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8445);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void* lam8553_fptr() // lam8553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8554 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8445 = (decode_clo(env8554))[4];
//not do dummy comment
void* a8368 = (decode_clo(env8554))[3];
//not do dummy comment
void* a8370 = (decode_clo(env8554))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8554))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8445;
arg_buffer[3] = a8368;
arg_buffer[4] = a8370;
arg_buffer[5] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void* lam8555_fptr() // lam8555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8445 = (decode_clo(env8556))[6];
//not do dummy comment
void* a8368 = (decode_clo(env8556))[5];
//not do dummy comment
void* a8370 = (decode_clo(env8556))[4];
//not do dummy comment
void* cons = (decode_clo(env8556))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8556))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8556))[1];

//creating new closure instance
void** clo8779 = alloc_clo(lam8553_fptr, 4);

//setting env list
clo8779[1] = take_u45helper;
clo8779[2] = a8370;
clo8779[3] = a8368;
clo8779[4] = kont8445;
void* f8447 = encode_clo(clo8779);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8447);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8447))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8368 = (decode_clo(env8558))[7];
//not do dummy comment
void* car = (decode_clo(env8558))[6];
//not do dummy comment
void* cons = (decode_clo(env8558))[5];
//not do dummy comment
void* lst = (decode_clo(env8558))[4];
//not do dummy comment
void* kont8445 = (decode_clo(env8558))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8558))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8558))[1];

//creating new closure instance
void** clo8781 = alloc_clo(lam8555_fptr, 6);

//setting env list
clo8781[1] = lst2;
clo8781[2] = take_u45helper;
clo8781[3] = cons;
clo8781[4] = a8370;
clo8781[5] = a8368;
clo8781[6] = kont8445;
void* f8448 = encode_clo(clo8781);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8448);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
function_ptr();
return nullptr;
}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void* lam8560_fptr() // lam8560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8561 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8561))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8561))[7];
//not do dummy comment
void* lst = (decode_clo(env8561))[6];
//not do dummy comment
void* kont8445 = (decode_clo(env8561))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8561))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8561))[3];
//not do dummy comment
void* n = (decode_clo(env8561))[2];
//not do dummy comment
void* car = (decode_clo(env8561))[1];
mpz_t* mpzvar8782 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8782, "1", 10);
void* a8369 = encode_mpz(mpzvar8782);

//creating new closure instance
void** clo8784 = alloc_clo(lam8557_fptr, 7);

//setting env list
clo8784[1] = lst2;
clo8784[2] = take_u45helper;
clo8784[3] = kont8445;
clo8784[4] = lst;
clo8784[5] = cons;
clo8784[6] = car;
clo8784[7] = a8368;
void* f8449 = encode_clo(clo8784);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
function_ptr();
return nullptr;
}

void* lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void* lam8562_fptr() // lam8562 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8563 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8563))[10];
//not do dummy comment
void* reverse = (decode_clo(env8563))[9];
//not do dummy comment
void* cons = (decode_clo(env8563))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8563))[7];
//not do dummy comment
void* lst = (decode_clo(env8563))[6];
//not do dummy comment
void* kont8445 = (decode_clo(env8563))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8563))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8563))[3];
//not do dummy comment
void* n = (decode_clo(env8563))[2];
//not do dummy comment
void* car = (decode_clo(env8563))[1];

//if-clause
bool if_guard8785 = is_true(a8366);
if(if_guard8785)
{

//creating new closure instance
void** clo8787 = alloc_clo(lam8551_fptr, 1);

//setting env list
clo8787[1] = kont8445;
void* f8446 = encode_clo(clo8787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8446;
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
void** clo8789 = alloc_clo(lam8560_fptr, 8);

//setting env list
clo8789[1] = car;
clo8789[2] = n;
clo8789[3] = lst2;
clo8789[4] = take_u45helper;
clo8789[5] = kont8445;
clo8789[6] = lst;
clo8789[7] = _u45;
clo8789[8] = cons;
void* f8450 = encode_clo(clo8789);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

}

void* lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8565 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8790 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8790, "0", 10);
void* a8365 = encode_mpz(mpzvar8790);

//creating new closure instance
void** clo8792 = alloc_clo(lam8562_fptr, 10);

//setting env list
clo8792[1] = car;
clo8792[2] = n;
clo8792[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8792[4] = take_u45helper;
clo8792[5] = kont8445;
clo8792[6] = lst;
clo8792[7] = _u45;
clo8792[8] = cons;
clo8792[9] = reverse;
clo8792[10] = cdr;
void* f8451 = encode_clo(clo8792);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8566_fptr() // lam8566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8567 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8567))[4];
//not do dummy comment
void* kont8452 = (decode_clo(env8567))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8567))[2];
//not do dummy comment
void* n = (decode_clo(env8567))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8452;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8568 = arg_buffer[1];
//reading env and args
void* kont8452 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8794 = alloc_clo(lam8566_fptr, 4);

//setting env list
clo8794[1] = n;
clo8794[2] = take_u45helper;
clo8794[3] = kont8452;
clo8794[4] = lst;
void* f8453 = encode_clo(clo8794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8453;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8570_fptr() // lam8570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8571 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8571))[3];
//not do dummy comment
void* kont8454 = (decode_clo(env8571))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8571))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8454);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
function_ptr();
return nullptr;
}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void* lam8572_fptr() // lam8572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8573 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8573))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8573))[3];
//not do dummy comment
void* kont8454 = (decode_clo(env8573))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8573))[1];

//creating new closure instance
void** clo8796 = alloc_clo(lam8570_fptr, 3);

//setting env list
clo8796[1] = a8376;
clo8796[2] = kont8454;
clo8796[3] = _u43;
void* f8455 = encode_clo(clo8796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8455;
arg_buffer[3] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void* lam8575_fptr() // lam8575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8576))[5];
//not do dummy comment
void* lst = (decode_clo(env8576))[4];
//not do dummy comment
void* length = (decode_clo(env8576))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8576))[2];
//not do dummy comment
void* kont8454 = (decode_clo(env8576))[1];

//if-clause
bool if_guard8797 = is_true(a8374);
if(if_guard8797)
{
mpz_t* mpzvar8798 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8798, "0", 10);
void* xy8375 = encode_mpz(mpzvar8798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8454);
arg_buffer[2] = xy8375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8799 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8799, "1", 10);
void* a8376 = encode_mpz(mpzvar8799);

//creating new closure instance
void** clo8801 = alloc_clo(lam8572_fptr, 4);

//setting env list
clo8801[1] = a8376;
clo8801[2] = kont8454;
clo8801[3] = _u43;
clo8801[4] = length;
void* f8456 = encode_clo(clo8801);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8456);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
function_ptr();
return nullptr;
}

}

void* lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8577 = arg_buffer[1];
//reading env and args
void* kont8454 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8803 = alloc_clo(lam8575_fptr, 5);

//setting env list
clo8803[1] = kont8454;
clo8803[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8803[3] = length;
clo8803[4] = lst;
clo8803[5] = cdr;
void* f8457 = encode_clo(clo8803);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8457);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8457))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8579))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8458);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8458))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void* lam8580_fptr() // lam8580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8581 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8581))[3];
//not do dummy comment
void* a8382 = (decode_clo(env8581))[2];
//not do dummy comment
void* cons = (decode_clo(env8581))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8458);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8458))[0]);
function_ptr();
return nullptr;
}

void* lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void* lam8582_fptr() // lam8582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8583 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8583))[5];
//not do dummy comment
void* proc = (decode_clo(env8583))[4];
//not do dummy comment
void* cons = (decode_clo(env8583))[3];
//not do dummy comment
void* map = (decode_clo(env8583))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8583))[1];

//creating new closure instance
void** clo8805 = alloc_clo(lam8580_fptr, 3);

//setting env list
clo8805[1] = cons;
clo8805[2] = a8382;
clo8805[3] = kont8458;
void* f8460 = encode_clo(clo8805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8460;
arg_buffer[3] = proc;
arg_buffer[4] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void* lam8584_fptr() // lam8584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8585 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8585))[6];
//not do dummy comment
void* kont8458 = (decode_clo(env8585))[5];
//not do dummy comment
void* lst = (decode_clo(env8585))[4];
//not do dummy comment
void* map = (decode_clo(env8585))[3];
//not do dummy comment
void* proc = (decode_clo(env8585))[2];
//not do dummy comment
void* cons = (decode_clo(env8585))[1];

//creating new closure instance
void** clo8807 = alloc_clo(lam8582_fptr, 5);

//setting env list
clo8807[1] = a8382;
clo8807[2] = map;
clo8807[3] = cons;
clo8807[4] = proc;
clo8807[5] = kont8458;
void* f8461 = encode_clo(clo8807);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8587))[6];
//not do dummy comment
void* kont8458 = (decode_clo(env8587))[5];
//not do dummy comment
void* lst = (decode_clo(env8587))[4];
//not do dummy comment
void* map = (decode_clo(env8587))[3];
//not do dummy comment
void* proc = (decode_clo(env8587))[2];
//not do dummy comment
void* cons = (decode_clo(env8587))[1];

//creating new closure instance
void** clo8809 = alloc_clo(lam8584_fptr, 6);

//setting env list
clo8809[1] = cons;
clo8809[2] = proc;
clo8809[3] = map;
clo8809[4] = lst;
clo8809[5] = kont8458;
clo8809[6] = cdr;
void* f8462 = encode_clo(clo8809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8462;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8589))[8];
//not do dummy comment
void* lst = (decode_clo(env8589))[7];
//not do dummy comment
void* map = (decode_clo(env8589))[6];
//not do dummy comment
void* proc = (decode_clo(env8589))[5];
//not do dummy comment
void* car = (decode_clo(env8589))[4];
//not do dummy comment
void* cons = (decode_clo(env8589))[3];
//not do dummy comment
void* list = (decode_clo(env8589))[2];
//not do dummy comment
void* cdr = (decode_clo(env8589))[1];

//if-clause
bool if_guard8810 = is_true(a8379);
if(if_guard8810)
{

//creating new closure instance
void** clo8812 = alloc_clo(lam8578_fptr, 1);

//setting env list
clo8812[1] = kont8458;
void* f8459 = encode_clo(clo8812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8459;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8814 = alloc_clo(lam8586_fptr, 6);

//setting env list
clo8814[1] = cons;
clo8814[2] = proc;
clo8814[3] = map;
clo8814[4] = lst;
clo8814[5] = kont8458;
clo8814[6] = cdr;
void* f8463 = encode_clo(clo8814);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
function_ptr();
return nullptr;
}

}

void* lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8590 = arg_buffer[1];
//reading env and args
void* kont8458 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8816 = alloc_clo(lam8588_fptr, 8);

//setting env list
clo8816[1] = cdr;
clo8816[2] = list;
clo8816[3] = cons;
clo8816[4] = car;
clo8816[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8816[6] = map;
clo8816[7] = lst;
clo8816[8] = kont8458;
void* f8464 = encode_clo(clo8816);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8591_fptr() // lam8591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8592 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8465 = (decode_clo(env8592))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8465);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8465))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void* lam8593_fptr() // lam8593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8594 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8465 = (decode_clo(env8594))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8594))[2];
//not do dummy comment
void* cons = (decode_clo(env8594))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8465);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8465))[0]);
function_ptr();
return nullptr;
}

void* lam8593 = encode_clo(alloc_clo(lam8593_fptr, 0));

void* lam8595_fptr() // lam8595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8596 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8596))[5];
//not do dummy comment
void* kont8465 = (decode_clo(env8596))[4];
//not do dummy comment
void* a8389 = (decode_clo(env8596))[3];
//not do dummy comment
void* filter = (decode_clo(env8596))[2];
//not do dummy comment
void* cons = (decode_clo(env8596))[1];

//creating new closure instance
void** clo8818 = alloc_clo(lam8593_fptr, 3);

//setting env list
clo8818[1] = cons;
clo8818[2] = a8389;
clo8818[3] = kont8465;
void* f8467 = encode_clo(clo8818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8467;
arg_buffer[3] = op;
arg_buffer[4] = a8390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8595 = encode_clo(alloc_clo(lam8595_fptr, 0));

void* lam8597_fptr() // lam8597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8598 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8598))[6];
//not do dummy comment
void* lst = (decode_clo(env8598))[5];
//not do dummy comment
void* op = (decode_clo(env8598))[4];
//not do dummy comment
void* kont8465 = (decode_clo(env8598))[3];
//not do dummy comment
void* filter = (decode_clo(env8598))[2];
//not do dummy comment
void* cons = (decode_clo(env8598))[1];

//creating new closure instance
void** clo8820 = alloc_clo(lam8595_fptr, 5);

//setting env list
clo8820[1] = cons;
clo8820[2] = filter;
clo8820[3] = a8389;
clo8820[4] = kont8465;
clo8820[5] = op;
void* f8468 = encode_clo(clo8820);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
function_ptr();
return nullptr;
}

void* lam8597 = encode_clo(alloc_clo(lam8597_fptr, 0));

void* lam8599_fptr() // lam8599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8600 = arg_buffer[1];
//reading env and args
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8600))[3];
//not do dummy comment
void* kont8465 = (decode_clo(env8600))[2];
//not do dummy comment
void* filter = (decode_clo(env8600))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8465;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void* lam8601_fptr() // lam8601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8602 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8602))[7];
//not do dummy comment
void* lst = (decode_clo(env8602))[6];
//not do dummy comment
void* op = (decode_clo(env8602))[5];
//not do dummy comment
void* kont8465 = (decode_clo(env8602))[4];
//not do dummy comment
void* cons = (decode_clo(env8602))[3];
//not do dummy comment
void* filter = (decode_clo(env8602))[2];
//not do dummy comment
void* car = (decode_clo(env8602))[1];

//if-clause
bool if_guard8821 = is_true(a8388);
if(if_guard8821)
{

//creating new closure instance
void** clo8823 = alloc_clo(lam8597_fptr, 6);

//setting env list
clo8823[1] = cons;
clo8823[2] = filter;
clo8823[3] = kont8465;
clo8823[4] = op;
clo8823[5] = lst;
clo8823[6] = cdr;
void* f8469 = encode_clo(clo8823);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8825 = alloc_clo(lam8599_fptr, 3);

//setting env list
clo8825[1] = filter;
clo8825[2] = kont8465;
clo8825[3] = op;
void* f8470 = encode_clo(clo8825);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
function_ptr();
return nullptr;
}

}

void* lam8601 = encode_clo(alloc_clo(lam8601_fptr, 0));

void* lam8603_fptr() // lam8603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8604 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8604))[7];
//not do dummy comment
void* lst = (decode_clo(env8604))[6];
//not do dummy comment
void* op = (decode_clo(env8604))[5];
//not do dummy comment
void* kont8465 = (decode_clo(env8604))[4];
//not do dummy comment
void* cons = (decode_clo(env8604))[3];
//not do dummy comment
void* filter = (decode_clo(env8604))[2];
//not do dummy comment
void* car = (decode_clo(env8604))[1];

//creating new closure instance
void** clo8827 = alloc_clo(lam8601_fptr, 7);

//setting env list
clo8827[1] = car;
clo8827[2] = filter;
clo8827[3] = cons;
clo8827[4] = kont8465;
clo8827[5] = op;
clo8827[6] = lst;
clo8827[7] = cdr;
void* f8471 = encode_clo(clo8827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8471;
arg_buffer[3] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void* lam8605_fptr() // lam8605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8606 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8606))[8];
//not do dummy comment
void* op = (decode_clo(env8606))[7];
//not do dummy comment
void* kont8465 = (decode_clo(env8606))[6];
//not do dummy comment
void* cons = (decode_clo(env8606))[5];
//not do dummy comment
void* list = (decode_clo(env8606))[4];
//not do dummy comment
void* cdr = (decode_clo(env8606))[3];
//not do dummy comment
void* filter = (decode_clo(env8606))[2];
//not do dummy comment
void* car = (decode_clo(env8606))[1];

//if-clause
bool if_guard8828 = is_true(a8385);
if(if_guard8828)
{

//creating new closure instance
void** clo8830 = alloc_clo(lam8591_fptr, 1);

//setting env list
clo8830[1] = kont8465;
void* f8466 = encode_clo(clo8830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8832 = alloc_clo(lam8603_fptr, 7);

//setting env list
clo8832[1] = car;
clo8832[2] = filter;
clo8832[3] = cons;
clo8832[4] = kont8465;
clo8832[5] = op;
clo8832[6] = lst;
clo8832[7] = cdr;
void* f8472 = encode_clo(clo8832);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
function_ptr();
return nullptr;
}

}

void* lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8607 = arg_buffer[1];
//reading env and args
void* kont8465 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8834 = alloc_clo(lam8605_fptr, 8);

//setting env list
clo8834[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8834[2] = filter;
clo8834[3] = cdr;
clo8834[4] = list;
clo8834[5] = cons;
clo8834[6] = kont8465;
clo8834[7] = op;
clo8834[8] = lst;
void* f8473 = encode_clo(clo8834);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8608_fptr() // lam8608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8609 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8474 = (decode_clo(env8609))[3];
//not do dummy comment
void* a8395 = (decode_clo(env8609))[2];
//not do dummy comment
void* drop = (decode_clo(env8609))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8474;
arg_buffer[3] = a8395;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

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
void* kont8474 = (decode_clo(env8612))[4];
//not do dummy comment
void* drop = (decode_clo(env8612))[3];
//not do dummy comment
void* n = (decode_clo(env8612))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8612))[1];
mpz_t* mpzvar8835 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8835, "1", 10);
void* a8396 = encode_mpz(mpzvar8835);

//creating new closure instance
void** clo8837 = alloc_clo(lam8608_fptr, 3);

//setting env list
clo8837[1] = drop;
clo8837[2] = a8395;
clo8837[3] = kont8474;
void* f8475 = encode_clo(clo8837);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
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
void* kont8474 = (decode_clo(env8614))[5];
//not do dummy comment
void* n = (decode_clo(env8614))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8614))[3];
//not do dummy comment
void* lst = (decode_clo(env8614))[2];
//not do dummy comment
void* drop = (decode_clo(env8614))[1];

//if-clause
bool if_guard8838 = is_true(a8394);
if(if_guard8838)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8474);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8474))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8840 = alloc_clo(lam8611_fptr, 4);

//setting env list
clo8840[1] = _u45;
clo8840[2] = n;
clo8840[3] = drop;
clo8840[4] = kont8474;
void* f8476 = encode_clo(clo8840);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

}

void* lam8613 = encode_clo(alloc_clo(lam8613_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8616 = arg_buffer[1];
//reading env and args
void* kont8474 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8841 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8841, "0", 10);
void* a8393 = encode_mpz(mpzvar8841);

//creating new closure instance
void** clo8843 = alloc_clo(lam8613_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8843[1] = drop;
clo8843[2] = lst;
clo8843[3] = _u45;
clo8843[4] = n;
clo8843[5] = kont8474;
clo8843[6] = cdr;
void* f8477 = encode_clo(clo8843);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8617_fptr() // lam8617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8618 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8478 = (decode_clo(env8618))[3];
//not do dummy comment
void* a8399 = (decode_clo(env8618))[2];
//not do dummy comment
void* proc = (decode_clo(env8618))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8478;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8620))[5];
//not do dummy comment
void* kont8478 = (decode_clo(env8620))[4];
//not do dummy comment
void* a8399 = (decode_clo(env8620))[3];
//not do dummy comment
void* proc = (decode_clo(env8620))[2];
//not do dummy comment
void* acc = (decode_clo(env8620))[1];

//creating new closure instance
void** clo8845 = alloc_clo(lam8617_fptr, 3);

//setting env list
clo8845[1] = proc;
clo8845[2] = a8399;
clo8845[3] = kont8478;
void* f8479 = encode_clo(clo8845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8479;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8622))[6];
//not do dummy comment
void* kont8478 = (decode_clo(env8622))[5];
//not do dummy comment
void* foldr = (decode_clo(env8622))[4];
//not do dummy comment
void* lst = (decode_clo(env8622))[3];
//not do dummy comment
void* proc = (decode_clo(env8622))[2];
//not do dummy comment
void* acc = (decode_clo(env8622))[1];

//creating new closure instance
void** clo8847 = alloc_clo(lam8619_fptr, 5);

//setting env list
clo8847[1] = acc;
clo8847[2] = proc;
clo8847[3] = a8399;
clo8847[4] = kont8478;
clo8847[5] = foldr;
void* f8480 = encode_clo(clo8847);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8480);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8624))[7];
//not do dummy comment
void* kont8478 = (decode_clo(env8624))[6];
//not do dummy comment
void* car = (decode_clo(env8624))[5];
//not do dummy comment
void* foldr = (decode_clo(env8624))[4];
//not do dummy comment
void* lst = (decode_clo(env8624))[3];
//not do dummy comment
void* proc = (decode_clo(env8624))[2];
//not do dummy comment
void* acc = (decode_clo(env8624))[1];

//if-clause
bool if_guard8848 = is_true(a8398);
if(if_guard8848)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8478);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8478))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8850 = alloc_clo(lam8621_fptr, 6);

//setting env list
clo8850[1] = acc;
clo8850[2] = proc;
clo8850[3] = lst;
clo8850[4] = foldr;
clo8850[5] = kont8478;
clo8850[6] = cdr;
void* f8481 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8481);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
function_ptr();
return nullptr;
}

}

void* lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8625 = arg_buffer[1];
//reading env and args
void* kont8478 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8852 = alloc_clo(lam8623_fptr, 7);

//setting env list
clo8852[1] = acc;
clo8852[2] = proc;
clo8852[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8852[4] = foldr;
clo8852[5] = car;
clo8852[6] = kont8478;
clo8852[7] = cdr;
void* f8482 = encode_clo(clo8852);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8626_fptr() // lam8626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8627 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8627))[3];
//not do dummy comment
void* a8403 = (decode_clo(env8627))[2];
//not do dummy comment
void* kont8483 = (decode_clo(env8627))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8483);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
function_ptr();
return nullptr;
}

void* lam8626 = encode_clo(alloc_clo(lam8626_fptr, 0));

void* lam8628_fptr() // lam8628 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8629 = arg_buffer[1];
//reading env and args
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8629))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8629))[4];
//not do dummy comment
void* cons = (decode_clo(env8629))[3];
//not do dummy comment
void* a8403 = (decode_clo(env8629))[2];
//not do dummy comment
void* kont8483 = (decode_clo(env8629))[1];

//creating new closure instance
void** clo8854 = alloc_clo(lam8626_fptr, 3);

//setting env list
clo8854[1] = kont8483;
clo8854[2] = a8403;
clo8854[3] = cons;
void* f8484 = encode_clo(clo8854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8484;
arg_buffer[3] = a8404;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8628 = encode_clo(alloc_clo(lam8628_fptr, 0));

void* lam8630_fptr() // lam8630 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8631 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8631))[6];
//not do dummy comment
void* append = (decode_clo(env8631))[5];
//not do dummy comment
void* kont8483 = (decode_clo(env8631))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8631))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8631))[2];
//not do dummy comment
void* cons = (decode_clo(env8631))[1];

//creating new closure instance
void** clo8856 = alloc_clo(lam8628_fptr, 5);

//setting env list
clo8856[1] = kont8483;
clo8856[2] = a8403;
clo8856[3] = cons;
clo8856[4] = lst2;
clo8856[5] = append;
void* f8485 = encode_clo(clo8856);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8485);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8485))[0]);
function_ptr();
return nullptr;
}

void* lam8630 = encode_clo(alloc_clo(lam8630_fptr, 0));

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
void* cdr = (decode_clo(env8633))[7];
//not do dummy comment
void* append = (decode_clo(env8633))[6];
//not do dummy comment
void* kont8483 = (decode_clo(env8633))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8633))[4];
//not do dummy comment
void* cons = (decode_clo(env8633))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8633))[2];
//not do dummy comment
void* car = (decode_clo(env8633))[1];

//if-clause
bool if_guard8857 = is_true(a8402);
if(if_guard8857)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8483);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8859 = alloc_clo(lam8630_fptr, 6);

//setting env list
clo8859[1] = cons;
clo8859[2] = lst1;
clo8859[3] = lst2;
clo8859[4] = kont8483;
clo8859[5] = append;
clo8859[6] = cdr;
void* f8486 = encode_clo(clo8859);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8486);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8486))[0]);
function_ptr();
return nullptr;
}

}

void* lam8632 = encode_clo(alloc_clo(lam8632_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8634 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8861 = alloc_clo(lam8632_fptr, 7);

//setting env list
clo8861[1] = car;
clo8861[2] = lst1;
clo8861[3] = cons;
clo8861[4] = lst2;
clo8861[5] = kont8483;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8861[6] = append;
clo8861[7] = cdr;
void* f8487 = encode_clo(clo8861);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8487);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8487))[0]);
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
void* x8863 = apply_prim_hash(lst8865);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8862);
arg_buffer[2] = x8863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);
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
void* _8635 = arg_buffer[1];
//reading env and args
void* kont8488 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8406 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8488);
arg_buffer[2] = xy8406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8488))[0]);
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
void* _8636 = arg_buffer[1];
//reading env and args
void* kont8489 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* xy8407 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8489);
arg_buffer[2] = xy8407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8489))[0]);
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
void* _8637 = arg_buffer[1];
//reading env and args
void* kont8490 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8408 = prim_hash_u45keys(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8490);
arg_buffer[2] = xy8408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8490))[0]);
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
void* _8638 = arg_buffer[1];
//reading env and args
void* kont8491 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8409 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8491);
arg_buffer[2] = xy8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8491))[0]);
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
void* _8639 = arg_buffer[1];
//reading env and args
void* kont8492 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8410 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8492);
arg_buffer[2] = xy8410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
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
void* _env8868 = arg_buffer[1];
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

void* kont8866 = prim_car(lst);
void* lst8869 = prim_cdr(lst);
void* x8867 = apply_prim_set(lst8869);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8866);
arg_buffer[2] = x8867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8866))[0]);
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
void* _8640 = arg_buffer[1];
//reading env and args
void* kont8493 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8411 = prim_set_u45_u62list(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8493);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
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
void* _8641 = arg_buffer[1];
//reading env and args
void* kont8494 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8412 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8494);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8494))[0]);
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
void* _8642 = arg_buffer[1];
//reading env and args
void* kont8495 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8413 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8495);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8495))[0]);
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
void* _8643 = arg_buffer[1];
//reading env and args
void* kont8496 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8414 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8496);
arg_buffer[2] = xy8414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8496))[0]);
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
void* _8644 = arg_buffer[1];
//reading env and args
void* kont8497 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8415 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8497);
arg_buffer[2] = xy8415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8497))[0]);
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
void* _8645 = arg_buffer[1];
//reading env and args
void* kont8498 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8416 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8498);
arg_buffer[2] = xy8416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8498))[0]);
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
void* _8646 = arg_buffer[1];
//reading env and args
void* kont8499 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8417 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8499);
arg_buffer[2] = xy8417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8499))[0]);
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
void* _8647 = arg_buffer[1];
//reading env and args
void* kont8500 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8418 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8500);
arg_buffer[2] = xy8418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8500))[0]);
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
void* _8648 = arg_buffer[1];
//reading env and args
void* kont8501 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8419 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8501);
arg_buffer[2] = xy8419;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8501))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam8649_fptr() // lam8649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8650 = arg_buffer[1];
//reading env and args
void* a8421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* int_u45_u62float = (decode_clo(env8650))[2];
//not do dummy comment
void* kont8502 = (decode_clo(env8650))[1];
void* cps_u45lst8503 = prim_cons(kont8502, a8421);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(int_u45_u62float);
arg_buffer[2] = cps_u45lst8503;
arg_buffer[0] = reinterpret_cast<void*>(2);
int_u45_u62float_fptr();
return nullptr;
}

void* lam8649 = encode_clo(alloc_clo(lam8649_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8652 = arg_buffer[1];
//reading env and args
void* kont8502 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar8870 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8870, "42.6", 10);
void* a8420 = encode_mpf(mpfvar8870);

//creating new closure instance
void** clo8872 = alloc_clo(lam8649_fptr, 2);

//setting env list
clo8872[1] = kont8502;
clo8872[2] = int_u45_u62float;
void* f8504 = encode_clo(clo8872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8504;
arg_buffer[3] = a8420;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8653_fptr() // lam8653 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8654 = arg_buffer[1];
//reading env and args
void* xy8422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8505 = (decode_clo(env8654))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8505);
arg_buffer[2] = xy8422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8505))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8653 = encode_clo(alloc_clo(lam8653_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8655 = arg_buffer[1];
//reading env and args
void* kont8505 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8874 = alloc_clo(lam8653_fptr, 1);

//setting env list
clo8874[1] = kont8505;
void* f8506 = encode_clo(clo8874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8506;
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

