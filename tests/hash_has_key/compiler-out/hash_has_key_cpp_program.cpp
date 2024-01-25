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

void* hash_u45ref_fptr() // hash-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8742 = arg_buffer[1];
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

void* kont8740 = prim_car(lst);
void* lst8743 = prim_cdr(lst);
void* x8741 = apply_prim_hash_u45ref(lst8743);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8740);
arg_buffer[2] = x8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8740))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void* hash_u45set_fptr() // hash-set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8746 = arg_buffer[1];
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

void* kont8744 = prim_car(lst);
void* lst8747 = prim_cdr(lst);
void* x8745 = apply_prim_hash_u45set(lst8747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8744);
arg_buffer[2] = x8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8744))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void* hash_u45keys_fptr() // hash-keys 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8750 = arg_buffer[1];
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

void* kont8748 = prim_car(lst);
void* lst8751 = prim_cdr(lst);
void* x8749 = apply_prim_hash_u45keys(lst8751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8748);
arg_buffer[2] = x8749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8748))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void* hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8754 = arg_buffer[1];
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

void* kont8752 = prim_car(lst);
void* lst8755 = prim_cdr(lst);
void* x8753 = apply_prim_hash_u45has_u45key_u63(lst8755);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8752);
arg_buffer[2] = x8753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8752))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void* lam8506_fptr() // lam8506 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8507 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8507))[3];
//not do dummy comment
void* a8344 = (decode_clo(env8507))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8507))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
function_ptr();
return nullptr;
}

void* lam8506 = encode_clo(alloc_clo(lam8506_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8510 = arg_buffer[1];
//reading env and args
void* kont8424 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8756 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8756, "0", 10);
void* a8344 = encode_mpz(mpzvar8756);
mpz_t* mpzvar8757 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8757, "2", 10);
void* a8345 = encode_mpz(mpzvar8757);

//creating new closure instance
void** clo8759 = alloc_clo(lam8506_fptr, 3);

//setting env list
clo8759[1] = kont8424;
clo8759[2] = a8344;
clo8759[3] = equal_u63;
void* f8425 = encode_clo(clo8759);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8425);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8425))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8511_fptr() // lam8511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8512 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8426 = (decode_clo(env8512))[3];
//not do dummy comment
void* a8347 = (decode_clo(env8512))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8512))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8426);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8426))[0]);
function_ptr();
return nullptr;
}

void* lam8511 = encode_clo(alloc_clo(lam8511_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8515 = arg_buffer[1];
//reading env and args
void* kont8426 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8760 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8760, "1", 10);
void* a8347 = encode_mpz(mpzvar8760);
mpz_t* mpzvar8761 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8761, "2", 10);
void* a8348 = encode_mpz(mpzvar8761);

//creating new closure instance
void** clo8763 = alloc_clo(lam8511_fptr, 3);

//setting env list
clo8763[1] = equal_u63;
clo8763[2] = a8347;
clo8763[3] = kont8426;
void* f8427 = encode_clo(clo8763);



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
void* _8516 = arg_buffer[1];
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
void* x8505 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8428);
arg_buffer[2] = x8505;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8519_fptr() // lam8519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8520 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8429 = (decode_clo(env8520))[3];
//not do dummy comment
void* x = (decode_clo(env8520))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8520))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8429;
arg_buffer[3] = x;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8519 = encode_clo(alloc_clo(lam8519_fptr, 0));

void* lam8521_fptr() // lam8521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8522))[5];
//not do dummy comment
void* x = (decode_clo(env8522))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8522))[3];
//not do dummy comment
void* lst = (decode_clo(env8522))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8522))[1];

//if-clause
bool if_guard8764 = is_true(a8353);
if(if_guard8764)
{
void* xy8354 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8429);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8429))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8766 = alloc_clo(lam8519_fptr, 3);

//setting env list
clo8766[1] = member_u63;
clo8766[2] = x;
clo8766[3] = kont8429;
void* f8430 = encode_clo(clo8766);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8430);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
function_ptr();
return nullptr;
}

}

void* lam8521 = encode_clo(alloc_clo(lam8521_fptr, 0));

void* lam8523_fptr() // lam8523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8524))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8524))[5];
//not do dummy comment
void* x = (decode_clo(env8524))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8524))[3];
//not do dummy comment
void* lst = (decode_clo(env8524))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8524))[1];

//creating new closure instance
void** clo8768 = alloc_clo(lam8521_fptr, 5);

//setting env list
clo8768[1] = kont8429;
clo8768[2] = lst;
clo8768[3] = member_u63;
clo8768[4] = x;
clo8768[5] = cdr;
void* f8431 = encode_clo(clo8768);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void* lam8525_fptr() // lam8525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8526 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8526))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env8526))[6];
//not do dummy comment
void* x = (decode_clo(env8526))[5];
//not do dummy comment
void* car = (decode_clo(env8526))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8526))[3];
//not do dummy comment
void* lst = (decode_clo(env8526))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8526))[1];

//if-clause
bool if_guard8769 = is_true(a8350);
if(if_guard8769)
{
void* xy8351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8429);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8429))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8771 = alloc_clo(lam8523_fptr, 6);

//setting env list
clo8771[1] = kont8429;
clo8771[2] = lst;
clo8771[3] = member_u63;
clo8771[4] = x;
clo8771[5] = equal_u63;
clo8771[6] = cdr;
void* f8432 = encode_clo(clo8771);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
function_ptr();
return nullptr;
}

}

void* lam8525 = encode_clo(alloc_clo(lam8525_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8527 = arg_buffer[1];
//reading env and args
void* kont8429 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8773 = alloc_clo(lam8525_fptr, 7);

//setting env list
clo8773[1] = kont8429;
clo8773[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8773[3] = member_u63;
clo8773[4] = car;
clo8773[5] = x;
clo8773[6] = equal_u63;
clo8773[7] = cdr;
void* f8433 = encode_clo(clo8773);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8528_fptr() // lam8528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8529 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8434 = (decode_clo(env8529))[4];
//not do dummy comment
void* fun = (decode_clo(env8529))[3];
//not do dummy comment
void* a8358 = (decode_clo(env8529))[2];
//not do dummy comment
void* foldl = (decode_clo(env8529))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8434;
arg_buffer[3] = fun;
arg_buffer[4] = a8358;
arg_buffer[5] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8531))[5];
//not do dummy comment
void* lst = (decode_clo(env8531))[4];
//not do dummy comment
void* kont8434 = (decode_clo(env8531))[3];
//not do dummy comment
void* fun = (decode_clo(env8531))[2];
//not do dummy comment
void* foldl = (decode_clo(env8531))[1];

//creating new closure instance
void** clo8775 = alloc_clo(lam8528_fptr, 4);

//setting env list
clo8775[1] = foldl;
clo8775[2] = a8358;
clo8775[3] = fun;
clo8775[4] = kont8434;
void* f8435 = encode_clo(clo8775);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8435);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
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
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8533))[6];
//not do dummy comment
void* lst = (decode_clo(env8533))[5];
//not do dummy comment
void* kont8434 = (decode_clo(env8533))[4];
//not do dummy comment
void* fun = (decode_clo(env8533))[3];
//not do dummy comment
void* acc = (decode_clo(env8533))[2];
//not do dummy comment
void* foldl = (decode_clo(env8533))[1];

//creating new closure instance
void** clo8777 = alloc_clo(lam8530_fptr, 5);

//setting env list
clo8777[1] = foldl;
clo8777[2] = fun;
clo8777[3] = kont8434;
clo8777[4] = lst;
clo8777[5] = cdr;
void* f8436 = encode_clo(clo8777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8436;
arg_buffer[3] = a8357;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8535))[7];
//not do dummy comment
void* lst = (decode_clo(env8535))[6];
//not do dummy comment
void* kont8434 = (decode_clo(env8535))[5];
//not do dummy comment
void* fun = (decode_clo(env8535))[4];
//not do dummy comment
void* acc = (decode_clo(env8535))[3];
//not do dummy comment
void* car = (decode_clo(env8535))[2];
//not do dummy comment
void* foldl = (decode_clo(env8535))[1];

//if-clause
bool if_guard8778 = is_true(a8356);
if(if_guard8778)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8434);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8434))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8780 = alloc_clo(lam8532_fptr, 6);

//setting env list
clo8780[1] = foldl;
clo8780[2] = acc;
clo8780[3] = fun;
clo8780[4] = kont8434;
clo8780[5] = lst;
clo8780[6] = cdr;
void* f8437 = encode_clo(clo8780);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

}

void* lam8534 = encode_clo(alloc_clo(lam8534_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8536 = arg_buffer[1];
//reading env and args
void* kont8434 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8782 = alloc_clo(lam8534_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8782[1] = foldl;
clo8782[2] = car;
clo8782[3] = acc;
clo8782[4] = fun;
clo8782[5] = kont8434;
clo8782[6] = lst;
clo8782[7] = cdr;
void* f8438 = encode_clo(clo8782);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8537_fptr() // lam8537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8538 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8538))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8538))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8538))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8439;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8540))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8540))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8540))[3];
//not do dummy comment
void* cons = (decode_clo(env8540))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8540))[1];

//creating new closure instance
void** clo8784 = alloc_clo(lam8537_fptr, 3);

//setting env list
clo8784[1] = kont8439;
clo8784[2] = reverse_u45helper;
clo8784[3] = a8361;
void* f8440 = encode_clo(clo8784);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8542))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8542))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8542))[4];
//not do dummy comment
void* car = (decode_clo(env8542))[3];
//not do dummy comment
void* cons = (decode_clo(env8542))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8542))[1];

//creating new closure instance
void** clo8786 = alloc_clo(lam8539_fptr, 5);

//setting env list
clo8786[1] = kont8439;
clo8786[2] = cons;
clo8786[3] = lst2;
clo8786[4] = reverse_u45helper;
clo8786[5] = a8361;
void* f8441 = encode_clo(clo8786);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8441);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
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
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8544))[7];
//not do dummy comment
void* lst = (decode_clo(env8544))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8544))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8544))[4];
//not do dummy comment
void* car = (decode_clo(env8544))[3];
//not do dummy comment
void* cons = (decode_clo(env8544))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8544))[1];

//if-clause
bool if_guard8787 = is_true(a8360);
if(if_guard8787)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8439);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8789 = alloc_clo(lam8541_fptr, 6);

//setting env list
clo8789[1] = kont8439;
clo8789[2] = cons;
clo8789[3] = car;
clo8789[4] = lst2;
clo8789[5] = reverse_u45helper;
clo8789[6] = lst;
void* f8442 = encode_clo(clo8789);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

}

void* lam8543 = encode_clo(alloc_clo(lam8543_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8545 = arg_buffer[1];
//reading env and args
void* kont8439 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8791 = alloc_clo(lam8543_fptr, 7);

//setting env list
clo8791[1] = kont8439;
clo8791[2] = cons;
clo8791[3] = car;
clo8791[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8791[5] = reverse_u45helper;
clo8791[6] = lst;
clo8791[7] = cdr;
void* f8443 = encode_clo(clo8791);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

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
void* kont8444 = (decode_clo(env8547))[3];
//not do dummy comment
void* lst = (decode_clo(env8547))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8547))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8444;
arg_buffer[3] = lst;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8546 = encode_clo(alloc_clo(lam8546_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8548 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8793 = alloc_clo(lam8546_fptr, 3);

//setting env list
clo8793[1] = reverse_u45helper;
clo8793[2] = lst;
clo8793[3] = kont8444;
void* f8445 = encode_clo(clo8793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8549_fptr() // lam8549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8550 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8446 = (decode_clo(env8550))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8446);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
//call next proc using a function pointer
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8446 = (decode_clo(env8552))[4];
//not do dummy comment
void* a8368 = (decode_clo(env8552))[3];
//not do dummy comment
void* a8370 = (decode_clo(env8552))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8552))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8446;
arg_buffer[3] = a8368;
arg_buffer[4] = a8370;
arg_buffer[5] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8446 = (decode_clo(env8554))[6];
//not do dummy comment
void* a8368 = (decode_clo(env8554))[5];
//not do dummy comment
void* a8370 = (decode_clo(env8554))[4];
//not do dummy comment
void* cons = (decode_clo(env8554))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8554))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8554))[1];

//creating new closure instance
void** clo8795 = alloc_clo(lam8551_fptr, 4);

//setting env list
clo8795[1] = take_u45helper;
clo8795[2] = a8370;
clo8795[3] = a8368;
clo8795[4] = kont8446;
void* f8448 = encode_clo(clo8795);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8448);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8556))[7];
//not do dummy comment
void* kont8446 = (decode_clo(env8556))[6];
//not do dummy comment
void* a8368 = (decode_clo(env8556))[5];
//not do dummy comment
void* car = (decode_clo(env8556))[4];
//not do dummy comment
void* cons = (decode_clo(env8556))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8556))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8556))[1];

//creating new closure instance
void** clo8797 = alloc_clo(lam8553_fptr, 6);

//setting env list
clo8797[1] = lst2;
clo8797[2] = take_u45helper;
clo8797[3] = cons;
clo8797[4] = a8370;
clo8797[5] = a8368;
clo8797[6] = kont8446;
void* f8449 = encode_clo(clo8797);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
function_ptr();
return nullptr;
}

void* lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void* lam8558_fptr() // lam8558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8559 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8559))[8];
//not do dummy comment
void* kont8446 = (decode_clo(env8559))[7];
//not do dummy comment
void* cons = (decode_clo(env8559))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8559))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8559))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8559))[3];
//not do dummy comment
void* n = (decode_clo(env8559))[2];
//not do dummy comment
void* car = (decode_clo(env8559))[1];
mpz_t* mpzvar8798 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8798, "1", 10);
void* a8369 = encode_mpz(mpzvar8798);

//creating new closure instance
void** clo8800 = alloc_clo(lam8555_fptr, 7);

//setting env list
clo8800[1] = lst2;
clo8800[2] = take_u45helper;
clo8800[3] = cons;
clo8800[4] = car;
clo8800[5] = a8368;
clo8800[6] = kont8446;
clo8800[7] = lst;
void* f8450 = encode_clo(clo8800);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8561))[10];
//not do dummy comment
void* lst = (decode_clo(env8561))[9];
//not do dummy comment
void* kont8446 = (decode_clo(env8561))[8];
//not do dummy comment
void* reverse = (decode_clo(env8561))[7];
//not do dummy comment
void* cons = (decode_clo(env8561))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8561))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8561))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8561))[3];
//not do dummy comment
void* n = (decode_clo(env8561))[2];
//not do dummy comment
void* car = (decode_clo(env8561))[1];

//if-clause
bool if_guard8801 = is_true(a8366);
if(if_guard8801)
{

//creating new closure instance
void** clo8803 = alloc_clo(lam8549_fptr, 1);

//setting env list
clo8803[1] = kont8446;
void* f8447 = encode_clo(clo8803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8447;
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
void** clo8805 = alloc_clo(lam8558_fptr, 8);

//setting env list
clo8805[1] = car;
clo8805[2] = n;
clo8805[3] = lst2;
clo8805[4] = take_u45helper;
clo8805[5] = _u45;
clo8805[6] = cons;
clo8805[7] = kont8446;
clo8805[8] = lst;
void* f8451 = encode_clo(clo8805);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

}

void* lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8563 = arg_buffer[1];
//reading env and args
void* kont8446 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8806 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8806, "0", 10);
void* a8365 = encode_mpz(mpzvar8806);

//creating new closure instance
void** clo8808 = alloc_clo(lam8560_fptr, 10);

//setting env list
clo8808[1] = car;
clo8808[2] = n;
clo8808[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8808[4] = take_u45helper;
clo8808[5] = _u45;
clo8808[6] = cons;
clo8808[7] = reverse;
clo8808[8] = kont8446;
clo8808[9] = lst;
clo8808[10] = cdr;
void* f8452 = encode_clo(clo8808);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8452);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8452))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8564_fptr() // lam8564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8565 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8565))[4];
//not do dummy comment
void* n = (decode_clo(env8565))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8565))[2];
//not do dummy comment
void* kont8453 = (decode_clo(env8565))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8453;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8566 = arg_buffer[1];
//reading env and args
void* kont8453 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8810 = alloc_clo(lam8564_fptr, 4);

//setting env list
clo8810[1] = kont8453;
clo8810[2] = take_u45helper;
clo8810[3] = n;
clo8810[4] = lst;
void* f8454 = encode_clo(clo8810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8454;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8568_fptr() // lam8568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8569))[3];
//not do dummy comment
void* kont8455 = (decode_clo(env8569))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8569))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8455);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
function_ptr();
return nullptr;
}

void* lam8568 = encode_clo(alloc_clo(lam8568_fptr, 0));

void* lam8570_fptr() // lam8570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8571 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8571))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8571))[3];
//not do dummy comment
void* kont8455 = (decode_clo(env8571))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8571))[1];

//creating new closure instance
void** clo8812 = alloc_clo(lam8568_fptr, 3);

//setting env list
clo8812[1] = a8376;
clo8812[2] = kont8455;
clo8812[3] = _u43;
void* f8456 = encode_clo(clo8812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8456;
arg_buffer[3] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void* lam8573_fptr() // lam8573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8574 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8574))[5];
//not do dummy comment
void* lst = (decode_clo(env8574))[4];
//not do dummy comment
void* length = (decode_clo(env8574))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8574))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8574))[1];

//if-clause
bool if_guard8813 = is_true(a8374);
if(if_guard8813)
{
mpz_t* mpzvar8814 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8814, "0", 10);
void* xy8375 = encode_mpz(mpzvar8814);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8455);
arg_buffer[2] = xy8375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8815 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8815, "1", 10);
void* a8376 = encode_mpz(mpzvar8815);

//creating new closure instance
void** clo8817 = alloc_clo(lam8570_fptr, 4);

//setting env list
clo8817[1] = a8376;
clo8817[2] = kont8455;
clo8817[3] = _u43;
clo8817[4] = length;
void* f8457 = encode_clo(clo8817);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8457);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8457))[0]);
function_ptr();
return nullptr;
}

}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8575 = arg_buffer[1];
//reading env and args
void* kont8455 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8819 = alloc_clo(lam8573_fptr, 5);

//setting env list
clo8819[1] = kont8455;
clo8819[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8819[3] = length;
clo8819[4] = lst;
clo8819[5] = cdr;
void* f8458 = encode_clo(clo8819);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8576_fptr() // lam8576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8577 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8459 = (decode_clo(env8577))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8459);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8459))[0]);
//call next proc using a function pointer
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8459 = (decode_clo(env8579))[3];
//not do dummy comment
void* a8382 = (decode_clo(env8579))[2];
//not do dummy comment
void* cons = (decode_clo(env8579))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8459);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8459))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8459 = (decode_clo(env8581))[5];
//not do dummy comment
void* proc = (decode_clo(env8581))[4];
//not do dummy comment
void* cons = (decode_clo(env8581))[3];
//not do dummy comment
void* map = (decode_clo(env8581))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8581))[1];

//creating new closure instance
void** clo8821 = alloc_clo(lam8578_fptr, 3);

//setting env list
clo8821[1] = cons;
clo8821[2] = a8382;
clo8821[3] = kont8459;
void* f8461 = encode_clo(clo8821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8461;
arg_buffer[3] = proc;
arg_buffer[4] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
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
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8583))[6];
//not do dummy comment
void* kont8459 = (decode_clo(env8583))[5];
//not do dummy comment
void* lst = (decode_clo(env8583))[4];
//not do dummy comment
void* map = (decode_clo(env8583))[3];
//not do dummy comment
void* proc = (decode_clo(env8583))[2];
//not do dummy comment
void* cons = (decode_clo(env8583))[1];

//creating new closure instance
void** clo8823 = alloc_clo(lam8580_fptr, 5);

//setting env list
clo8823[1] = a8382;
clo8823[2] = map;
clo8823[3] = cons;
clo8823[4] = proc;
clo8823[5] = kont8459;
void* f8462 = encode_clo(clo8823);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8462);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8585))[6];
//not do dummy comment
void* kont8459 = (decode_clo(env8585))[5];
//not do dummy comment
void* lst = (decode_clo(env8585))[4];
//not do dummy comment
void* map = (decode_clo(env8585))[3];
//not do dummy comment
void* proc = (decode_clo(env8585))[2];
//not do dummy comment
void* cons = (decode_clo(env8585))[1];

//creating new closure instance
void** clo8825 = alloc_clo(lam8582_fptr, 6);

//setting env list
clo8825[1] = cons;
clo8825[2] = proc;
clo8825[3] = map;
clo8825[4] = lst;
clo8825[5] = kont8459;
clo8825[6] = cdr;
void* f8463 = encode_clo(clo8825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8463;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8459 = (decode_clo(env8587))[8];
//not do dummy comment
void* lst = (decode_clo(env8587))[7];
//not do dummy comment
void* map = (decode_clo(env8587))[6];
//not do dummy comment
void* proc = (decode_clo(env8587))[5];
//not do dummy comment
void* car = (decode_clo(env8587))[4];
//not do dummy comment
void* cons = (decode_clo(env8587))[3];
//not do dummy comment
void* list = (decode_clo(env8587))[2];
//not do dummy comment
void* cdr = (decode_clo(env8587))[1];

//if-clause
bool if_guard8826 = is_true(a8379);
if(if_guard8826)
{

//creating new closure instance
void** clo8828 = alloc_clo(lam8576_fptr, 1);

//setting env list
clo8828[1] = kont8459;
void* f8460 = encode_clo(clo8828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8460;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8830 = alloc_clo(lam8584_fptr, 6);

//setting env list
clo8830[1] = cons;
clo8830[2] = proc;
clo8830[3] = map;
clo8830[4] = lst;
clo8830[5] = kont8459;
clo8830[6] = cdr;
void* f8464 = encode_clo(clo8830);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
function_ptr();
return nullptr;
}

}

void* lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8588 = arg_buffer[1];
//reading env and args
void* kont8459 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8832 = alloc_clo(lam8586_fptr, 8);

//setting env list
clo8832[1] = cdr;
clo8832[2] = list;
clo8832[3] = cons;
clo8832[4] = car;
clo8832[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8832[6] = map;
clo8832[7] = lst;
clo8832[8] = kont8459;
void* f8465 = encode_clo(clo8832);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8589_fptr() // lam8589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8590 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8466 = (decode_clo(env8590))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8466);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8466))[0]);
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8466 = (decode_clo(env8592))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8592))[2];
//not do dummy comment
void* cons = (decode_clo(env8592))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8466);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8466))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8594))[5];
//not do dummy comment
void* kont8466 = (decode_clo(env8594))[4];
//not do dummy comment
void* a8389 = (decode_clo(env8594))[3];
//not do dummy comment
void* filter = (decode_clo(env8594))[2];
//not do dummy comment
void* cons = (decode_clo(env8594))[1];

//creating new closure instance
void** clo8834 = alloc_clo(lam8591_fptr, 3);

//setting env list
clo8834[1] = cons;
clo8834[2] = a8389;
clo8834[3] = kont8466;
void* f8468 = encode_clo(clo8834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8468;
arg_buffer[3] = op;
arg_buffer[4] = a8390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8596))[6];
//not do dummy comment
void* lst = (decode_clo(env8596))[5];
//not do dummy comment
void* op = (decode_clo(env8596))[4];
//not do dummy comment
void* kont8466 = (decode_clo(env8596))[3];
//not do dummy comment
void* filter = (decode_clo(env8596))[2];
//not do dummy comment
void* cons = (decode_clo(env8596))[1];

//creating new closure instance
void** clo8836 = alloc_clo(lam8593_fptr, 5);

//setting env list
clo8836[1] = cons;
clo8836[2] = filter;
clo8836[3] = a8389;
clo8836[4] = kont8466;
clo8836[5] = op;
void* f8469 = encode_clo(clo8836);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8598))[3];
//not do dummy comment
void* kont8466 = (decode_clo(env8598))[2];
//not do dummy comment
void* filter = (decode_clo(env8598))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8466;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8600))[7];
//not do dummy comment
void* lst = (decode_clo(env8600))[6];
//not do dummy comment
void* op = (decode_clo(env8600))[5];
//not do dummy comment
void* kont8466 = (decode_clo(env8600))[4];
//not do dummy comment
void* cons = (decode_clo(env8600))[3];
//not do dummy comment
void* filter = (decode_clo(env8600))[2];
//not do dummy comment
void* car = (decode_clo(env8600))[1];

//if-clause
bool if_guard8837 = is_true(a8388);
if(if_guard8837)
{

//creating new closure instance
void** clo8839 = alloc_clo(lam8595_fptr, 6);

//setting env list
clo8839[1] = cons;
clo8839[2] = filter;
clo8839[3] = kont8466;
clo8839[4] = op;
clo8839[5] = lst;
clo8839[6] = cdr;
void* f8470 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8841 = alloc_clo(lam8597_fptr, 3);

//setting env list
clo8841[1] = filter;
clo8841[2] = kont8466;
clo8841[3] = op;
void* f8471 = encode_clo(clo8841);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
function_ptr();
return nullptr;
}

}

void* lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void* lam8601_fptr() // lam8601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8602 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8602))[7];
//not do dummy comment
void* lst = (decode_clo(env8602))[6];
//not do dummy comment
void* op = (decode_clo(env8602))[5];
//not do dummy comment
void* kont8466 = (decode_clo(env8602))[4];
//not do dummy comment
void* cons = (decode_clo(env8602))[3];
//not do dummy comment
void* filter = (decode_clo(env8602))[2];
//not do dummy comment
void* car = (decode_clo(env8602))[1];

//creating new closure instance
void** clo8843 = alloc_clo(lam8599_fptr, 7);

//setting env list
clo8843[1] = car;
clo8843[2] = filter;
clo8843[3] = cons;
clo8843[4] = kont8466;
clo8843[5] = op;
clo8843[6] = lst;
clo8843[7] = cdr;
void* f8472 = encode_clo(clo8843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8472;
arg_buffer[3] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8601 = encode_clo(alloc_clo(lam8601_fptr, 0));

void* lam8603_fptr() // lam8603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8604 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8604))[8];
//not do dummy comment
void* op = (decode_clo(env8604))[7];
//not do dummy comment
void* kont8466 = (decode_clo(env8604))[6];
//not do dummy comment
void* cons = (decode_clo(env8604))[5];
//not do dummy comment
void* list = (decode_clo(env8604))[4];
//not do dummy comment
void* cdr = (decode_clo(env8604))[3];
//not do dummy comment
void* filter = (decode_clo(env8604))[2];
//not do dummy comment
void* car = (decode_clo(env8604))[1];

//if-clause
bool if_guard8844 = is_true(a8385);
if(if_guard8844)
{

//creating new closure instance
void** clo8846 = alloc_clo(lam8589_fptr, 1);

//setting env list
clo8846[1] = kont8466;
void* f8467 = encode_clo(clo8846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8467;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8848 = alloc_clo(lam8601_fptr, 7);

//setting env list
clo8848[1] = car;
clo8848[2] = filter;
clo8848[3] = cons;
clo8848[4] = kont8466;
clo8848[5] = op;
clo8848[6] = lst;
clo8848[7] = cdr;
void* f8473 = encode_clo(clo8848);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}

}

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8605 = arg_buffer[1];
//reading env and args
void* kont8466 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8850 = alloc_clo(lam8603_fptr, 8);

//setting env list
clo8850[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8850[2] = filter;
clo8850[3] = cdr;
clo8850[4] = list;
clo8850[5] = cons;
clo8850[6] = kont8466;
clo8850[7] = op;
clo8850[8] = lst;
void* f8474 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8606_fptr() // lam8606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8607 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8607))[3];
//not do dummy comment
void* a8395 = (decode_clo(env8607))[2];
//not do dummy comment
void* kont8475 = (decode_clo(env8607))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8475;
arg_buffer[3] = a8395;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8606 = encode_clo(alloc_clo(lam8606_fptr, 0));

void* lam8609_fptr() // lam8609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8610 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8475 = (decode_clo(env8610))[4];
//not do dummy comment
void* drop = (decode_clo(env8610))[3];
//not do dummy comment
void* n = (decode_clo(env8610))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8610))[1];
mpz_t* mpzvar8851 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8851, "1", 10);
void* a8396 = encode_mpz(mpzvar8851);

//creating new closure instance
void** clo8853 = alloc_clo(lam8606_fptr, 3);

//setting env list
clo8853[1] = kont8475;
clo8853[2] = a8395;
clo8853[3] = drop;
void* f8476 = encode_clo(clo8853);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8612))[6];
//not do dummy comment
void* kont8475 = (decode_clo(env8612))[5];
//not do dummy comment
void* n = (decode_clo(env8612))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8612))[3];
//not do dummy comment
void* lst = (decode_clo(env8612))[2];
//not do dummy comment
void* drop = (decode_clo(env8612))[1];

//if-clause
bool if_guard8854 = is_true(a8394);
if(if_guard8854)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8475);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8475))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8856 = alloc_clo(lam8609_fptr, 4);

//setting env list
clo8856[1] = _u45;
clo8856[2] = n;
clo8856[3] = drop;
clo8856[4] = kont8475;
void* f8477 = encode_clo(clo8856);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
function_ptr();
return nullptr;
}

}

void* lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8614 = arg_buffer[1];
//reading env and args
void* kont8475 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8857 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8857, "0", 10);
void* a8393 = encode_mpz(mpzvar8857);

//creating new closure instance
void** clo8859 = alloc_clo(lam8611_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8859[1] = drop;
clo8859[2] = lst;
clo8859[3] = _u45;
clo8859[4] = n;
clo8859[5] = kont8475;
clo8859[6] = cdr;
void* f8478 = encode_clo(clo8859);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8478);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8615_fptr() // lam8615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8616 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env8616))[3];
//not do dummy comment
void* a8399 = (decode_clo(env8616))[2];
//not do dummy comment
void* kont8479 = (decode_clo(env8616))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8479;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8618))[5];
//not do dummy comment
void* a8399 = (decode_clo(env8618))[4];
//not do dummy comment
void* kont8479 = (decode_clo(env8618))[3];
//not do dummy comment
void* proc = (decode_clo(env8618))[2];
//not do dummy comment
void* acc = (decode_clo(env8618))[1];

//creating new closure instance
void** clo8861 = alloc_clo(lam8615_fptr, 3);

//setting env list
clo8861[1] = kont8479;
clo8861[2] = a8399;
clo8861[3] = proc;
void* f8480 = encode_clo(clo8861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8480;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8620))[6];
//not do dummy comment
void* kont8479 = (decode_clo(env8620))[5];
//not do dummy comment
void* foldr = (decode_clo(env8620))[4];
//not do dummy comment
void* lst = (decode_clo(env8620))[3];
//not do dummy comment
void* proc = (decode_clo(env8620))[2];
//not do dummy comment
void* acc = (decode_clo(env8620))[1];

//creating new closure instance
void** clo8863 = alloc_clo(lam8617_fptr, 5);

//setting env list
clo8863[1] = acc;
clo8863[2] = proc;
clo8863[3] = kont8479;
clo8863[4] = a8399;
clo8863[5] = foldr;
void* f8481 = encode_clo(clo8863);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8481);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8622))[7];
//not do dummy comment
void* kont8479 = (decode_clo(env8622))[6];
//not do dummy comment
void* car = (decode_clo(env8622))[5];
//not do dummy comment
void* foldr = (decode_clo(env8622))[4];
//not do dummy comment
void* lst = (decode_clo(env8622))[3];
//not do dummy comment
void* proc = (decode_clo(env8622))[2];
//not do dummy comment
void* acc = (decode_clo(env8622))[1];

//if-clause
bool if_guard8864 = is_true(a8398);
if(if_guard8864)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8479);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8479))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8866 = alloc_clo(lam8619_fptr, 6);

//setting env list
clo8866[1] = acc;
clo8866[2] = proc;
clo8866[3] = lst;
clo8866[4] = foldr;
clo8866[5] = kont8479;
clo8866[6] = cdr;
void* f8482 = encode_clo(clo8866);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
function_ptr();
return nullptr;
}

}

void* lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8623 = arg_buffer[1];
//reading env and args
void* kont8479 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8868 = alloc_clo(lam8621_fptr, 7);

//setting env list
clo8868[1] = acc;
clo8868[2] = proc;
clo8868[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8868[4] = foldr;
clo8868[5] = car;
clo8868[6] = kont8479;
clo8868[7] = cdr;
void* f8483 = encode_clo(clo8868);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8483);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8483))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8624_fptr() // lam8624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8625 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8403 = (decode_clo(env8625))[3];
//not do dummy comment
void* kont8484 = (decode_clo(env8625))[2];
//not do dummy comment
void* cons = (decode_clo(env8625))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8484);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8484))[0]);
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8627))[5];
//not do dummy comment
void* a8403 = (decode_clo(env8627))[4];
//not do dummy comment
void* kont8484 = (decode_clo(env8627))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8627))[2];
//not do dummy comment
void* cons = (decode_clo(env8627))[1];

//creating new closure instance
void** clo8870 = alloc_clo(lam8624_fptr, 3);

//setting env list
clo8870[1] = cons;
clo8870[2] = kont8484;
clo8870[3] = a8403;
void* f8485 = encode_clo(clo8870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8485;
arg_buffer[3] = a8404;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
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
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8629))[6];
//not do dummy comment
void* append = (decode_clo(env8629))[5];
//not do dummy comment
void* kont8484 = (decode_clo(env8629))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8629))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8629))[2];
//not do dummy comment
void* cons = (decode_clo(env8629))[1];

//creating new closure instance
void** clo8872 = alloc_clo(lam8626_fptr, 5);

//setting env list
clo8872[1] = cons;
clo8872[2] = lst2;
clo8872[3] = kont8484;
clo8872[4] = a8403;
clo8872[5] = append;
void* f8486 = encode_clo(clo8872);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8486);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8486))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8631))[7];
//not do dummy comment
void* append = (decode_clo(env8631))[6];
//not do dummy comment
void* kont8484 = (decode_clo(env8631))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8631))[4];
//not do dummy comment
void* cons = (decode_clo(env8631))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8631))[2];
//not do dummy comment
void* car = (decode_clo(env8631))[1];

//if-clause
bool if_guard8873 = is_true(a8402);
if(if_guard8873)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8484);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8484))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8875 = alloc_clo(lam8628_fptr, 6);

//setting env list
clo8875[1] = cons;
clo8875[2] = lst1;
clo8875[3] = lst2;
clo8875[4] = kont8484;
clo8875[5] = append;
clo8875[6] = cdr;
void* f8487 = encode_clo(clo8875);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8487);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8487))[0]);
function_ptr();
return nullptr;
}

}

void* lam8630 = encode_clo(alloc_clo(lam8630_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8632 = arg_buffer[1];
//reading env and args
void* kont8484 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8877 = alloc_clo(lam8630_fptr, 7);

//setting env list
clo8877[1] = car;
clo8877[2] = lst1;
clo8877[3] = cons;
clo8877[4] = lst2;
clo8877[5] = kont8484;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8877[6] = append;
clo8877[7] = cdr;
void* f8488 = encode_clo(clo8877);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8488);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8488))[0]);
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
void* _env8880 = arg_buffer[1];
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

void* kont8878 = prim_car(lst);
void* lst8881 = prim_cdr(lst);
void* x8879 = apply_prim_hash(lst8881);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8878);
arg_buffer[2] = x8879;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void* hash_u45count_fptr() // hash-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8633 = arg_buffer[1];
//reading env and args
void* kont8489 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8406 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8489);
arg_buffer[2] = xy8406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8489))[0]);
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
void* _env8884 = arg_buffer[1];
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

void* kont8882 = prim_car(lst);
void* lst8885 = prim_cdr(lst);
void* x8883 = apply_prim_set(lst8885);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8882);
arg_buffer[2] = x8883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8882))[0]);
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
void* _8634 = arg_buffer[1];
//reading env and args
void* kont8490 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8407 = prim_set_u45_u62list(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8490);
arg_buffer[2] = xy8407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8490))[0]);
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
void* _8635 = arg_buffer[1];
//reading env and args
void* kont8491 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8408 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8491);
arg_buffer[2] = xy8408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8491))[0]);
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
void* _8636 = arg_buffer[1];
//reading env and args
void* kont8492 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8409 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8492);
arg_buffer[2] = xy8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
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
void* _8637 = arg_buffer[1];
//reading env and args
void* kont8493 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8410 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8493);
arg_buffer[2] = xy8410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
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
void* _8638 = arg_buffer[1];
//reading env and args
void* kont8494 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8411 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8494);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8494))[0]);
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
void* _8639 = arg_buffer[1];
//reading env and args
void* kont8495 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8412 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8495);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8495))[0]);
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
void* _8640 = arg_buffer[1];
//reading env and args
void* kont8496 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8413 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8496);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8496))[0]);
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
void* _8641 = arg_buffer[1];
//reading env and args
void* kont8497 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8414 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8497);
arg_buffer[2] = xy8414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8497))[0]);
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
void* _8642 = arg_buffer[1];
//reading env and args
void* kont8498 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8415 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8498);
arg_buffer[2] = xy8415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8498))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam8643_fptr() // lam8643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8644 = arg_buffer[1];
//reading env and args
void* a8422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45has_u45key_u63 = (decode_clo(env8644))[2];
//not do dummy comment
void* kont8499 = (decode_clo(env8644))[1];
void* cps_u45lst8500 = prim_cons(kont8499, a8422);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(hash_u45has_u45key_u63);
arg_buffer[2] = cps_u45lst8500;
arg_buffer[0] = reinterpret_cast<void*>(2);
hash_u45has_u45key_u63_fptr();
return nullptr;
}

void* lam8643 = encode_clo(alloc_clo(lam8643_fptr, 0));

void* lam8646_fptr() // lam8646 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8647 = arg_buffer[1];
//reading env and args
void* a8420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8647))[3];
//not do dummy comment
void* hash_u45has_u45key_u63 = (decode_clo(env8647))[2];
//not do dummy comment
void* kont8499 = (decode_clo(env8647))[1];
mpf_t* mpfvar8886 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8886, "10.5", 10);
void* a8421 = encode_mpf(mpfvar8886);

//creating new closure instance
void** clo8888 = alloc_clo(lam8643_fptr, 2);

//setting env list
clo8888[1] = kont8499;
clo8888[2] = hash_u45has_u45key_u63;
void* f8501 = encode_clo(clo8888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8501;
arg_buffer[3] = a8420;
arg_buffer[4] = a8421;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8646 = encode_clo(alloc_clo(lam8646_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8652 = arg_buffer[1];
//reading env and args
void* kont8499 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8889 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8889, "100", 10);
void* a8416 = encode_mpz(mpzvar8889);
mpz_t* mpzvar8890 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8890, "80", 10);
void* a8417 = encode_mpz(mpzvar8890);
mpf_t* mpfvar8891 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8891, "10.5", 10);
void* a8418 = encode_mpf(mpfvar8891);
mpz_t* mpzvar8892 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8892, "2", 10);
void* a8419 = encode_mpz(mpzvar8892);

//creating new closure instance
void** clo8894 = alloc_clo(lam8646_fptr, 3);

//setting env list
clo8894[1] = kont8499;
clo8894[2] = hash_u45has_u45key_u63;
clo8894[3] = list;
void* f8502 = encode_clo(clo8894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f8502;
arg_buffer[3] = a8416;
arg_buffer[4] = a8417;
arg_buffer[5] = a8418;
arg_buffer[6] = a8419;
arg_buffer[0] = reinterpret_cast<void*>(6);
hash_fptr();
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
void* xy8423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8503 = (decode_clo(env8654))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8503);
arg_buffer[2] = xy8423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8503))[0]);
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
void* kont8503 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8896 = alloc_clo(lam8653_fptr, 1);

//setting env list
clo8896[1] = kont8503;
void* f8504 = encode_clo(clo8896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8504;
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

