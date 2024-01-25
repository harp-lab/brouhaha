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

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8741 = arg_buffer[1];
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

void* kont8739 = prim_car(lst);
void* lst8742 = prim_cdr(lst);
void* x8740 = apply_prim_int_u45_u62float(lst8742);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8739);
arg_buffer[2] = x8740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8739))[0]);
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
void* _env8745 = arg_buffer[1];
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

void* kont8743 = prim_car(lst);
void* lst8746 = prim_cdr(lst);
void* x8744 = apply_prim_hash_u45ref(lst8746);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8743);
arg_buffer[2] = x8744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8743))[0]);
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
void* _env8749 = arg_buffer[1];
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

void* kont8747 = prim_car(lst);
void* lst8750 = prim_cdr(lst);
void* x8748 = apply_prim_hash_u45set(lst8750);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8747);
arg_buffer[2] = x8748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8747))[0]);
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
void* _env8753 = arg_buffer[1];
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

void* kont8751 = prim_car(lst);
void* lst8754 = prim_cdr(lst);
void* x8752 = apply_prim_hash_u45keys(lst8754);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8751);
arg_buffer[2] = x8752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8751))[0]);
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
void* _env8757 = arg_buffer[1];
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

void* kont8755 = prim_car(lst);
void* lst8758 = prim_cdr(lst);
void* x8756 = apply_prim_hash_u45has_u45key_u63(lst8758);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8755);
arg_buffer[2] = x8756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8755))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void* hash_u45count_fptr() // hash-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8761 = arg_buffer[1];
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

void* kont8759 = prim_car(lst);
void* lst8762 = prim_cdr(lst);
void* x8760 = apply_prim_hash_u45count(lst8762);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8759);
arg_buffer[2] = x8760;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8759))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam8507_fptr() // lam8507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8508 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8426 = (decode_clo(env8508))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8508))[2];
//not do dummy comment
void* a8344 = (decode_clo(env8508))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8426);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8426))[0]);
function_ptr();
return nullptr;
}

void* lam8507 = encode_clo(alloc_clo(lam8507_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8511 = arg_buffer[1];
//reading env and args
void* kont8426 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8763 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8763, "0", 10);
void* a8344 = encode_mpz(mpzvar8763);
mpz_t* mpzvar8764 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8764, "2", 10);
void* a8345 = encode_mpz(mpzvar8764);

//creating new closure instance
void** clo8766 = alloc_clo(lam8507_fptr, 3);

//setting env list
clo8766[1] = a8344;
clo8766[2] = equal_u63;
clo8766[3] = kont8426;
void* f8427 = encode_clo(clo8766);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8512_fptr() // lam8512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8513 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8347 = (decode_clo(env8513))[3];
//not do dummy comment
void* kont8428 = (decode_clo(env8513))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8513))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8428);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
function_ptr();
return nullptr;
}

void* lam8512 = encode_clo(alloc_clo(lam8512_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8516 = arg_buffer[1];
//reading env and args
void* kont8428 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8767, "1", 10);
void* a8347 = encode_mpz(mpzvar8767);
mpz_t* mpzvar8768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8768, "2", 10);
void* a8348 = encode_mpz(mpzvar8768);

//creating new closure instance
void** clo8770 = alloc_clo(lam8512_fptr, 3);

//setting env list
clo8770[1] = equal_u63;
clo8770[2] = kont8428;
clo8770[3] = a8347;
void* f8429 = encode_clo(clo8770);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
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
void* _8517 = arg_buffer[1];
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

void* kont8430 = prim_car(x);
void* x8506 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8430);
arg_buffer[2] = x8506;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8520_fptr() // lam8520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8521 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8431 = (decode_clo(env8521))[3];
//not do dummy comment
void* x = (decode_clo(env8521))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8521))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8431;
arg_buffer[3] = x;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void* lam8522_fptr() // lam8522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8523 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8523))[5];
//not do dummy comment
void* lst = (decode_clo(env8523))[4];
//not do dummy comment
void* kont8431 = (decode_clo(env8523))[3];
//not do dummy comment
void* x = (decode_clo(env8523))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8523))[1];

//if-clause
bool if_guard8771 = is_true(a8353);
if(if_guard8771)
{
void* xy8354 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8431);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8431))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8773 = alloc_clo(lam8520_fptr, 3);

//setting env list
clo8773[1] = member_u63;
clo8773[2] = x;
clo8773[3] = kont8431;
void* f8432 = encode_clo(clo8773);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
function_ptr();
return nullptr;
}

}

void* lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void* lam8524_fptr() // lam8524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8525))[6];
//not do dummy comment
void* lst = (decode_clo(env8525))[5];
//not do dummy comment
void* kont8431 = (decode_clo(env8525))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8525))[3];
//not do dummy comment
void* x = (decode_clo(env8525))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8525))[1];

//creating new closure instance
void** clo8775 = alloc_clo(lam8522_fptr, 5);

//setting env list
clo8775[1] = member_u63;
clo8775[2] = x;
clo8775[3] = kont8431;
clo8775[4] = lst;
clo8775[5] = cdr;
void* f8433 = encode_clo(clo8775);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
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
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8527))[7];
//not do dummy comment
void* lst = (decode_clo(env8527))[6];
//not do dummy comment
void* kont8431 = (decode_clo(env8527))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8527))[4];
//not do dummy comment
void* x = (decode_clo(env8527))[3];
//not do dummy comment
void* car = (decode_clo(env8527))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8527))[1];

//if-clause
bool if_guard8776 = is_true(a8350);
if(if_guard8776)
{
void* xy8351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8431);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8431))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8778 = alloc_clo(lam8524_fptr, 6);

//setting env list
clo8778[1] = member_u63;
clo8778[2] = x;
clo8778[3] = equal_u63;
clo8778[4] = kont8431;
clo8778[5] = lst;
clo8778[6] = cdr;
void* f8434 = encode_clo(clo8778);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8528 = arg_buffer[1];
//reading env and args
void* kont8431 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8780 = alloc_clo(lam8526_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8780[1] = member_u63;
clo8780[2] = car;
clo8780[3] = x;
clo8780[4] = equal_u63;
clo8780[5] = kont8431;
clo8780[6] = lst;
clo8780[7] = cdr;
void* f8435 = encode_clo(clo8780);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8435);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8529_fptr() // lam8529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8530 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8530))[4];
//not do dummy comment
void* kont8436 = (decode_clo(env8530))[3];
//not do dummy comment
void* a8358 = (decode_clo(env8530))[2];
//not do dummy comment
void* foldl = (decode_clo(env8530))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8436;
arg_buffer[3] = fun;
arg_buffer[4] = a8358;
arg_buffer[5] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8529 = encode_clo(alloc_clo(lam8529_fptr, 0));

void* lam8531_fptr() // lam8531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8532 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8532))[5];
//not do dummy comment
void* lst = (decode_clo(env8532))[4];
//not do dummy comment
void* fun = (decode_clo(env8532))[3];
//not do dummy comment
void* kont8436 = (decode_clo(env8532))[2];
//not do dummy comment
void* foldl = (decode_clo(env8532))[1];

//creating new closure instance
void** clo8782 = alloc_clo(lam8529_fptr, 4);

//setting env list
clo8782[1] = foldl;
clo8782[2] = a8358;
clo8782[3] = kont8436;
clo8782[4] = fun;
void* f8437 = encode_clo(clo8782);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

void* lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void* lam8533_fptr() // lam8533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8534 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8534))[6];
//not do dummy comment
void* lst = (decode_clo(env8534))[5];
//not do dummy comment
void* fun = (decode_clo(env8534))[4];
//not do dummy comment
void* foldl = (decode_clo(env8534))[3];
//not do dummy comment
void* acc = (decode_clo(env8534))[2];
//not do dummy comment
void* kont8436 = (decode_clo(env8534))[1];

//creating new closure instance
void** clo8784 = alloc_clo(lam8531_fptr, 5);

//setting env list
clo8784[1] = foldl;
clo8784[2] = kont8436;
clo8784[3] = fun;
clo8784[4] = lst;
clo8784[5] = cdr;
void* f8438 = encode_clo(clo8784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8438;
arg_buffer[3] = a8357;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8536))[7];
//not do dummy comment
void* lst = (decode_clo(env8536))[6];
//not do dummy comment
void* fun = (decode_clo(env8536))[5];
//not do dummy comment
void* car = (decode_clo(env8536))[4];
//not do dummy comment
void* foldl = (decode_clo(env8536))[3];
//not do dummy comment
void* acc = (decode_clo(env8536))[2];
//not do dummy comment
void* kont8436 = (decode_clo(env8536))[1];

//if-clause
bool if_guard8785 = is_true(a8356);
if(if_guard8785)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8436);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8436))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8787 = alloc_clo(lam8533_fptr, 6);

//setting env list
clo8787[1] = kont8436;
clo8787[2] = acc;
clo8787[3] = foldl;
clo8787[4] = fun;
clo8787[5] = lst;
clo8787[6] = cdr;
void* f8439 = encode_clo(clo8787);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
function_ptr();
return nullptr;
}

}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8537 = arg_buffer[1];
//reading env and args
void* kont8436 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8789 = alloc_clo(lam8535_fptr, 7);

//setting env list
clo8789[1] = kont8436;
clo8789[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8789[3] = foldl;
clo8789[4] = car;
clo8789[5] = fun;
clo8789[6] = lst;
clo8789[7] = cdr;
void* f8440 = encode_clo(clo8789);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8538_fptr() // lam8538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8539 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8539))[3];
//not do dummy comment
void* a8361 = (decode_clo(env8539))[2];
//not do dummy comment
void* kont8441 = (decode_clo(env8539))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8441;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void* lam8540_fptr() // lam8540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8541 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8541))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8541))[4];
//not do dummy comment
void* cons = (decode_clo(env8541))[3];
//not do dummy comment
void* a8361 = (decode_clo(env8541))[2];
//not do dummy comment
void* kont8441 = (decode_clo(env8541))[1];

//creating new closure instance
void** clo8791 = alloc_clo(lam8538_fptr, 3);

//setting env list
clo8791[1] = kont8441;
clo8791[2] = a8361;
clo8791[3] = reverse_u45helper;
void* f8442 = encode_clo(clo8791);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

void* lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void* lam8542_fptr() // lam8542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8543 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8441 = (decode_clo(env8543))[6];
//not do dummy comment
void* lst = (decode_clo(env8543))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8543))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8543))[3];
//not do dummy comment
void* car = (decode_clo(env8543))[2];
//not do dummy comment
void* cons = (decode_clo(env8543))[1];

//creating new closure instance
void** clo8793 = alloc_clo(lam8540_fptr, 5);

//setting env list
clo8793[1] = kont8441;
clo8793[2] = a8361;
clo8793[3] = cons;
clo8793[4] = lst2;
clo8793[5] = reverse_u45helper;
void* f8443 = encode_clo(clo8793);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
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
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8545))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8545))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8545))[5];
//not do dummy comment
void* car = (decode_clo(env8545))[4];
//not do dummy comment
void* cons = (decode_clo(env8545))[3];
//not do dummy comment
void* kont8441 = (decode_clo(env8545))[2];
//not do dummy comment
void* cdr = (decode_clo(env8545))[1];

//if-clause
bool if_guard8794 = is_true(a8360);
if(if_guard8794)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8441);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8441))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8796 = alloc_clo(lam8542_fptr, 6);

//setting env list
clo8796[1] = cons;
clo8796[2] = car;
clo8796[3] = lst2;
clo8796[4] = reverse_u45helper;
clo8796[5] = lst;
clo8796[6] = kont8441;
void* f8444 = encode_clo(clo8796);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
function_ptr();
return nullptr;
}

}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8546 = arg_buffer[1];
//reading env and args
void* kont8441 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8798 = alloc_clo(lam8544_fptr, 7);

//setting env list
clo8798[1] = cdr;
clo8798[2] = kont8441;
clo8798[3] = cons;
clo8798[4] = car;
clo8798[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8798[6] = reverse_u45helper;
clo8798[7] = lst;
void* f8445 = encode_clo(clo8798);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8547_fptr() // lam8547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8548))[3];
//not do dummy comment
void* kont8446 = (decode_clo(env8548))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8548))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8446;
arg_buffer[3] = lst;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8549 = arg_buffer[1];
//reading env and args
void* kont8446 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8800 = alloc_clo(lam8547_fptr, 3);

//setting env list
clo8800[1] = reverse_u45helper;
clo8800[2] = kont8446;
clo8800[3] = lst;
void* f8447 = encode_clo(clo8800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8447;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8448 = (decode_clo(env8551))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8553))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8553))[3];
//not do dummy comment
void* a8368 = (decode_clo(env8553))[2];
//not do dummy comment
void* kont8448 = (decode_clo(env8553))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8448;
arg_buffer[3] = a8368;
arg_buffer[4] = a8370;
arg_buffer[5] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void* lam8554_fptr() // lam8554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8555 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8555))[6];
//not do dummy comment
void* cons = (decode_clo(env8555))[5];
//not do dummy comment
void* a8368 = (decode_clo(env8555))[4];
//not do dummy comment
void* kont8448 = (decode_clo(env8555))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8555))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8555))[1];

//creating new closure instance
void** clo8802 = alloc_clo(lam8552_fptr, 4);

//setting env list
clo8802[1] = kont8448;
clo8802[2] = a8368;
clo8802[3] = take_u45helper;
clo8802[4] = a8370;
void* f8450 = encode_clo(clo8802);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8557))[7];
//not do dummy comment
void* car = (decode_clo(env8557))[6];
//not do dummy comment
void* cons = (decode_clo(env8557))[5];
//not do dummy comment
void* a8368 = (decode_clo(env8557))[4];
//not do dummy comment
void* kont8448 = (decode_clo(env8557))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8557))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8557))[1];

//creating new closure instance
void** clo8804 = alloc_clo(lam8554_fptr, 6);

//setting env list
clo8804[1] = lst2;
clo8804[2] = take_u45helper;
clo8804[3] = kont8448;
clo8804[4] = a8368;
clo8804[5] = cons;
clo8804[6] = a8370;
void* f8451 = encode_clo(clo8804);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

void* lam8556 = encode_clo(alloc_clo(lam8556_fptr, 0));

void* lam8559_fptr() // lam8559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8560 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8560))[8];
//not do dummy comment
void* kont8448 = (decode_clo(env8560))[7];
//not do dummy comment
void* cons = (decode_clo(env8560))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8560))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8560))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8560))[3];
//not do dummy comment
void* n = (decode_clo(env8560))[2];
//not do dummy comment
void* car = (decode_clo(env8560))[1];
mpz_t* mpzvar8805 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8805, "1", 10);
void* a8369 = encode_mpz(mpzvar8805);

//creating new closure instance
void** clo8807 = alloc_clo(lam8556_fptr, 7);

//setting env list
clo8807[1] = lst2;
clo8807[2] = take_u45helper;
clo8807[3] = kont8448;
clo8807[4] = a8368;
clo8807[5] = cons;
clo8807[6] = car;
clo8807[7] = lst;
void* f8452 = encode_clo(clo8807);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8452);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8452))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8562))[10];
//not do dummy comment
void* lst = (decode_clo(env8562))[9];
//not do dummy comment
void* cons = (decode_clo(env8562))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8562))[7];
//not do dummy comment
void* kont8448 = (decode_clo(env8562))[6];
//not do dummy comment
void* reverse = (decode_clo(env8562))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8562))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8562))[3];
//not do dummy comment
void* n = (decode_clo(env8562))[2];
//not do dummy comment
void* car = (decode_clo(env8562))[1];

//if-clause
bool if_guard8808 = is_true(a8366);
if(if_guard8808)
{

//creating new closure instance
void** clo8810 = alloc_clo(lam8550_fptr, 1);

//setting env list
clo8810[1] = kont8448;
void* f8449 = encode_clo(clo8810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8449;
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
void** clo8812 = alloc_clo(lam8559_fptr, 8);

//setting env list
clo8812[1] = car;
clo8812[2] = n;
clo8812[3] = lst2;
clo8812[4] = take_u45helper;
clo8812[5] = _u45;
clo8812[6] = cons;
clo8812[7] = kont8448;
clo8812[8] = lst;
void* f8453 = encode_clo(clo8812);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
function_ptr();
return nullptr;
}

}

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8564 = arg_buffer[1];
//reading env and args
void* kont8448 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8813 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8813, "0", 10);
void* a8365 = encode_mpz(mpzvar8813);

//creating new closure instance
void** clo8815 = alloc_clo(lam8561_fptr, 10);

//setting env list
clo8815[1] = car;
clo8815[2] = n;
clo8815[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8815[4] = take_u45helper;
clo8815[5] = reverse;
clo8815[6] = kont8448;
clo8815[7] = _u45;
clo8815[8] = cons;
clo8815[9] = lst;
clo8815[10] = cdr;
void* f8454 = encode_clo(clo8815);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8454);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8565_fptr() // lam8565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8566))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8566))[3];
//not do dummy comment
void* n = (decode_clo(env8566))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8566))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8455;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8567 = arg_buffer[1];
//reading env and args
void* kont8455 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8817 = alloc_clo(lam8565_fptr, 4);

//setting env list
clo8817[1] = kont8455;
clo8817[2] = n;
clo8817[3] = take_u45helper;
clo8817[4] = lst;
void* f8456 = encode_clo(clo8817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8569_fptr() // lam8569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8570 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8570))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8570))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8570))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8457);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8572))[4];
//not do dummy comment
void* length = (decode_clo(env8572))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8572))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8572))[1];

//creating new closure instance
void** clo8819 = alloc_clo(lam8569_fptr, 3);

//setting env list
clo8819[1] = a8376;
clo8819[2] = _u43;
clo8819[3] = kont8457;
void* f8458 = encode_clo(clo8819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8458;
arg_buffer[3] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void* lam8574_fptr() // lam8574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8575 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8575))[5];
//not do dummy comment
void* length = (decode_clo(env8575))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8575))[3];
//not do dummy comment
void* kont8457 = (decode_clo(env8575))[2];
//not do dummy comment
void* cdr = (decode_clo(env8575))[1];

//if-clause
bool if_guard8820 = is_true(a8374);
if(if_guard8820)
{
mpz_t* mpzvar8821 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8821, "0", 10);
void* xy8375 = encode_mpz(mpzvar8821);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8457);
arg_buffer[2] = xy8375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8822 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8822, "1", 10);
void* a8376 = encode_mpz(mpzvar8822);

//creating new closure instance
void** clo8824 = alloc_clo(lam8571_fptr, 4);

//setting env list
clo8824[1] = a8376;
clo8824[2] = _u43;
clo8824[3] = length;
clo8824[4] = kont8457;
void* f8459 = encode_clo(clo8824);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
return nullptr;
}

}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8576 = arg_buffer[1];
//reading env and args
void* kont8457 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8826 = alloc_clo(lam8574_fptr, 5);

//setting env list
clo8826[1] = cdr;
clo8826[2] = kont8457;
clo8826[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8826[4] = length;
clo8826[5] = lst;
void* f8460 = encode_clo(clo8826);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8460);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8577_fptr() // lam8577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8578 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8461 = (decode_clo(env8578))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8461);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8461))[0]);
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8461 = (decode_clo(env8580))[3];
//not do dummy comment
void* a8382 = (decode_clo(env8580))[2];
//not do dummy comment
void* cons = (decode_clo(env8580))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8461);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8461))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8461 = (decode_clo(env8582))[5];
//not do dummy comment
void* proc = (decode_clo(env8582))[4];
//not do dummy comment
void* cons = (decode_clo(env8582))[3];
//not do dummy comment
void* map = (decode_clo(env8582))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8582))[1];

//creating new closure instance
void** clo8828 = alloc_clo(lam8579_fptr, 3);

//setting env list
clo8828[1] = cons;
clo8828[2] = a8382;
clo8828[3] = kont8461;
void* f8463 = encode_clo(clo8828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8463;
arg_buffer[3] = proc;
arg_buffer[4] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8584))[6];
//not do dummy comment
void* map = (decode_clo(env8584))[5];
//not do dummy comment
void* proc = (decode_clo(env8584))[4];
//not do dummy comment
void* cons = (decode_clo(env8584))[3];
//not do dummy comment
void* lst = (decode_clo(env8584))[2];
//not do dummy comment
void* kont8461 = (decode_clo(env8584))[1];

//creating new closure instance
void** clo8830 = alloc_clo(lam8581_fptr, 5);

//setting env list
clo8830[1] = a8382;
clo8830[2] = map;
clo8830[3] = cons;
clo8830[4] = proc;
clo8830[5] = kont8461;
void* f8464 = encode_clo(clo8830);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8586))[6];
//not do dummy comment
void* map = (decode_clo(env8586))[5];
//not do dummy comment
void* proc = (decode_clo(env8586))[4];
//not do dummy comment
void* cons = (decode_clo(env8586))[3];
//not do dummy comment
void* lst = (decode_clo(env8586))[2];
//not do dummy comment
void* kont8461 = (decode_clo(env8586))[1];

//creating new closure instance
void** clo8832 = alloc_clo(lam8583_fptr, 6);

//setting env list
clo8832[1] = kont8461;
clo8832[2] = lst;
clo8832[3] = cons;
clo8832[4] = proc;
clo8832[5] = map;
clo8832[6] = cdr;
void* f8465 = encode_clo(clo8832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8465;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8588))[8];
//not do dummy comment
void* proc = (decode_clo(env8588))[7];
//not do dummy comment
void* car = (decode_clo(env8588))[6];
//not do dummy comment
void* cons = (decode_clo(env8588))[5];
//not do dummy comment
void* list = (decode_clo(env8588))[4];
//not do dummy comment
void* cdr = (decode_clo(env8588))[3];
//not do dummy comment
void* lst = (decode_clo(env8588))[2];
//not do dummy comment
void* kont8461 = (decode_clo(env8588))[1];

//if-clause
bool if_guard8833 = is_true(a8379);
if(if_guard8833)
{

//creating new closure instance
void** clo8835 = alloc_clo(lam8577_fptr, 1);

//setting env list
clo8835[1] = kont8461;
void* f8462 = encode_clo(clo8835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8837 = alloc_clo(lam8585_fptr, 6);

//setting env list
clo8837[1] = kont8461;
clo8837[2] = lst;
clo8837[3] = cons;
clo8837[4] = proc;
clo8837[5] = map;
clo8837[6] = cdr;
void* f8466 = encode_clo(clo8837);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
return nullptr;
}

}

void* lam8587 = encode_clo(alloc_clo(lam8587_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8589 = arg_buffer[1];
//reading env and args
void* kont8461 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8839 = alloc_clo(lam8587_fptr, 8);

//setting env list
clo8839[1] = kont8461;
clo8839[2] = lst;
clo8839[3] = cdr;
clo8839[4] = list;
clo8839[5] = cons;
clo8839[6] = car;
clo8839[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8839[8] = map;
void* f8467 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8590_fptr() // lam8590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8591 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8468 = (decode_clo(env8591))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8468);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8468))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void* lam8592_fptr() // lam8592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8593 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8468 = (decode_clo(env8593))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8593))[2];
//not do dummy comment
void* cons = (decode_clo(env8593))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8468);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8468))[0]);
function_ptr();
return nullptr;
}

void* lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void* lam8594_fptr() // lam8594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8595 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8595))[5];
//not do dummy comment
void* kont8468 = (decode_clo(env8595))[4];
//not do dummy comment
void* a8389 = (decode_clo(env8595))[3];
//not do dummy comment
void* filter = (decode_clo(env8595))[2];
//not do dummy comment
void* cons = (decode_clo(env8595))[1];

//creating new closure instance
void** clo8841 = alloc_clo(lam8592_fptr, 3);

//setting env list
clo8841[1] = cons;
clo8841[2] = a8389;
clo8841[3] = kont8468;
void* f8470 = encode_clo(clo8841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8470;
arg_buffer[3] = op;
arg_buffer[4] = a8390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* cdr = (decode_clo(env8597))[6];
//not do dummy comment
void* lst = (decode_clo(env8597))[5];
//not do dummy comment
void* op = (decode_clo(env8597))[4];
//not do dummy comment
void* kont8468 = (decode_clo(env8597))[3];
//not do dummy comment
void* filter = (decode_clo(env8597))[2];
//not do dummy comment
void* cons = (decode_clo(env8597))[1];

//creating new closure instance
void** clo8843 = alloc_clo(lam8594_fptr, 5);

//setting env list
clo8843[1] = cons;
clo8843[2] = filter;
clo8843[3] = a8389;
clo8843[4] = kont8468;
clo8843[5] = op;
void* f8471 = encode_clo(clo8843);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8599))[3];
//not do dummy comment
void* kont8468 = (decode_clo(env8599))[2];
//not do dummy comment
void* filter = (decode_clo(env8599))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8468;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
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
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8601))[7];
//not do dummy comment
void* lst = (decode_clo(env8601))[6];
//not do dummy comment
void* op = (decode_clo(env8601))[5];
//not do dummy comment
void* kont8468 = (decode_clo(env8601))[4];
//not do dummy comment
void* cons = (decode_clo(env8601))[3];
//not do dummy comment
void* filter = (decode_clo(env8601))[2];
//not do dummy comment
void* car = (decode_clo(env8601))[1];

//if-clause
bool if_guard8844 = is_true(a8388);
if(if_guard8844)
{

//creating new closure instance
void** clo8846 = alloc_clo(lam8596_fptr, 6);

//setting env list
clo8846[1] = cons;
clo8846[2] = filter;
clo8846[3] = kont8468;
clo8846[4] = op;
clo8846[5] = lst;
clo8846[6] = cdr;
void* f8472 = encode_clo(clo8846);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8848 = alloc_clo(lam8598_fptr, 3);

//setting env list
clo8848[1] = filter;
clo8848[2] = kont8468;
clo8848[3] = op;
void* f8473 = encode_clo(clo8848);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}

}

void* lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void* lam8602_fptr() // lam8602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8603 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8603))[7];
//not do dummy comment
void* lst = (decode_clo(env8603))[6];
//not do dummy comment
void* op = (decode_clo(env8603))[5];
//not do dummy comment
void* kont8468 = (decode_clo(env8603))[4];
//not do dummy comment
void* cons = (decode_clo(env8603))[3];
//not do dummy comment
void* filter = (decode_clo(env8603))[2];
//not do dummy comment
void* car = (decode_clo(env8603))[1];

//creating new closure instance
void** clo8850 = alloc_clo(lam8600_fptr, 7);

//setting env list
clo8850[1] = car;
clo8850[2] = filter;
clo8850[3] = cons;
clo8850[4] = kont8468;
clo8850[5] = op;
clo8850[6] = lst;
clo8850[7] = cdr;
void* f8474 = encode_clo(clo8850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8474;
arg_buffer[3] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8605))[8];
//not do dummy comment
void* op = (decode_clo(env8605))[7];
//not do dummy comment
void* kont8468 = (decode_clo(env8605))[6];
//not do dummy comment
void* cons = (decode_clo(env8605))[5];
//not do dummy comment
void* list = (decode_clo(env8605))[4];
//not do dummy comment
void* cdr = (decode_clo(env8605))[3];
//not do dummy comment
void* filter = (decode_clo(env8605))[2];
//not do dummy comment
void* car = (decode_clo(env8605))[1];

//if-clause
bool if_guard8851 = is_true(a8385);
if(if_guard8851)
{

//creating new closure instance
void** clo8853 = alloc_clo(lam8590_fptr, 1);

//setting env list
clo8853[1] = kont8468;
void* f8469 = encode_clo(clo8853);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8469;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8855 = alloc_clo(lam8602_fptr, 7);

//setting env list
clo8855[1] = car;
clo8855[2] = filter;
clo8855[3] = cons;
clo8855[4] = kont8468;
clo8855[5] = op;
clo8855[6] = lst;
clo8855[7] = cdr;
void* f8475 = encode_clo(clo8855);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
function_ptr();
return nullptr;
}

}

void* lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8606 = arg_buffer[1];
//reading env and args
void* kont8468 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8857 = alloc_clo(lam8604_fptr, 8);

//setting env list
clo8857[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8857[2] = filter;
clo8857[3] = cdr;
clo8857[4] = list;
clo8857[5] = cons;
clo8857[6] = kont8468;
clo8857[7] = op;
clo8857[8] = lst;
void* f8476 = encode_clo(clo8857);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8607_fptr() // lam8607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8608 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8395 = (decode_clo(env8608))[3];
//not do dummy comment
void* kont8477 = (decode_clo(env8608))[2];
//not do dummy comment
void* drop = (decode_clo(env8608))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8477;
arg_buffer[3] = a8395;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void* lam8610_fptr() // lam8610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8611 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env8611))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8611))[3];
//not do dummy comment
void* kont8477 = (decode_clo(env8611))[2];
//not do dummy comment
void* drop = (decode_clo(env8611))[1];
mpz_t* mpzvar8858 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8858, "1", 10);
void* a8396 = encode_mpz(mpzvar8858);

//creating new closure instance
void** clo8860 = alloc_clo(lam8607_fptr, 3);

//setting env list
clo8860[1] = drop;
clo8860[2] = kont8477;
clo8860[3] = a8395;
void* f8478 = encode_clo(clo8860);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8478);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8613))[6];
//not do dummy comment
void* n = (decode_clo(env8613))[5];
//not do dummy comment
void* _u45 = (decode_clo(env8613))[4];
//not do dummy comment
void* lst = (decode_clo(env8613))[3];
//not do dummy comment
void* kont8477 = (decode_clo(env8613))[2];
//not do dummy comment
void* drop = (decode_clo(env8613))[1];

//if-clause
bool if_guard8861 = is_true(a8394);
if(if_guard8861)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8477);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8863 = alloc_clo(lam8610_fptr, 4);

//setting env list
clo8863[1] = drop;
clo8863[2] = kont8477;
clo8863[3] = _u45;
clo8863[4] = n;
void* f8479 = encode_clo(clo8863);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8479);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
function_ptr();
return nullptr;
}

}

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8615 = arg_buffer[1];
//reading env and args
void* kont8477 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8864 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8864, "0", 10);
void* a8393 = encode_mpz(mpzvar8864);

//creating new closure instance
void** clo8866 = alloc_clo(lam8612_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8866[1] = drop;
clo8866[2] = kont8477;
clo8866[3] = lst;
clo8866[4] = _u45;
clo8866[5] = n;
clo8866[6] = cdr;
void* f8480 = encode_clo(clo8866);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8480);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8616_fptr() // lam8616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8617 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8399 = (decode_clo(env8617))[3];
//not do dummy comment
void* kont8481 = (decode_clo(env8617))[2];
//not do dummy comment
void* proc = (decode_clo(env8617))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8481;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8616 = encode_clo(alloc_clo(lam8616_fptr, 0));

void* lam8618_fptr() // lam8618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8619 = arg_buffer[1];
//reading env and args
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8619))[5];
//not do dummy comment
void* a8399 = (decode_clo(env8619))[4];
//not do dummy comment
void* kont8481 = (decode_clo(env8619))[3];
//not do dummy comment
void* proc = (decode_clo(env8619))[2];
//not do dummy comment
void* acc = (decode_clo(env8619))[1];

//creating new closure instance
void** clo8868 = alloc_clo(lam8616_fptr, 3);

//setting env list
clo8868[1] = proc;
clo8868[2] = kont8481;
clo8868[3] = a8399;
void* f8482 = encode_clo(clo8868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8482;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8618 = encode_clo(alloc_clo(lam8618_fptr, 0));

void* lam8620_fptr() // lam8620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8621 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8621))[6];
//not do dummy comment
void* kont8481 = (decode_clo(env8621))[5];
//not do dummy comment
void* foldr = (decode_clo(env8621))[4];
//not do dummy comment
void* lst = (decode_clo(env8621))[3];
//not do dummy comment
void* proc = (decode_clo(env8621))[2];
//not do dummy comment
void* acc = (decode_clo(env8621))[1];

//creating new closure instance
void** clo8870 = alloc_clo(lam8618_fptr, 5);

//setting env list
clo8870[1] = acc;
clo8870[2] = proc;
clo8870[3] = kont8481;
clo8870[4] = a8399;
clo8870[5] = foldr;
void* f8483 = encode_clo(clo8870);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8483);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8483))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8623))[7];
//not do dummy comment
void* kont8481 = (decode_clo(env8623))[6];
//not do dummy comment
void* car = (decode_clo(env8623))[5];
//not do dummy comment
void* foldr = (decode_clo(env8623))[4];
//not do dummy comment
void* lst = (decode_clo(env8623))[3];
//not do dummy comment
void* proc = (decode_clo(env8623))[2];
//not do dummy comment
void* acc = (decode_clo(env8623))[1];

//if-clause
bool if_guard8871 = is_true(a8398);
if(if_guard8871)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8481);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8481))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8873 = alloc_clo(lam8620_fptr, 6);

//setting env list
clo8873[1] = acc;
clo8873[2] = proc;
clo8873[3] = lst;
clo8873[4] = foldr;
clo8873[5] = kont8481;
clo8873[6] = cdr;
void* f8484 = encode_clo(clo8873);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8484);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8484))[0]);
function_ptr();
return nullptr;
}

}

void* lam8622 = encode_clo(alloc_clo(lam8622_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8624 = arg_buffer[1];
//reading env and args
void* kont8481 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8875 = alloc_clo(lam8622_fptr, 7);

//setting env list
clo8875[1] = acc;
clo8875[2] = proc;
clo8875[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8875[4] = foldr;
clo8875[5] = car;
clo8875[6] = kont8481;
clo8875[7] = cdr;
void* f8485 = encode_clo(clo8875);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8485);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8485))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8625_fptr() // lam8625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8626 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8403 = (decode_clo(env8626))[3];
//not do dummy comment
void* kont8486 = (decode_clo(env8626))[2];
//not do dummy comment
void* cons = (decode_clo(env8626))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8486);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8486))[0]);
function_ptr();
return nullptr;
}

void* lam8625 = encode_clo(alloc_clo(lam8625_fptr, 0));

void* lam8627_fptr() // lam8627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8628 = arg_buffer[1];
//reading env and args
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8628))[5];
//not do dummy comment
void* a8403 = (decode_clo(env8628))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8628))[3];
//not do dummy comment
void* kont8486 = (decode_clo(env8628))[2];
//not do dummy comment
void* cons = (decode_clo(env8628))[1];

//creating new closure instance
void** clo8877 = alloc_clo(lam8625_fptr, 3);

//setting env list
clo8877[1] = cons;
clo8877[2] = kont8486;
clo8877[3] = a8403;
void* f8487 = encode_clo(clo8877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8487;
arg_buffer[3] = a8404;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8630))[6];
//not do dummy comment
void* append = (decode_clo(env8630))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8630))[4];
//not do dummy comment
void* cons = (decode_clo(env8630))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8630))[2];
//not do dummy comment
void* kont8486 = (decode_clo(env8630))[1];

//creating new closure instance
void** clo8879 = alloc_clo(lam8627_fptr, 5);

//setting env list
clo8879[1] = cons;
clo8879[2] = kont8486;
clo8879[3] = lst2;
clo8879[4] = a8403;
clo8879[5] = append;
void* f8488 = encode_clo(clo8879);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8488);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8488))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8632))[7];
//not do dummy comment
void* append = (decode_clo(env8632))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8632))[5];
//not do dummy comment
void* cons = (decode_clo(env8632))[4];
//not do dummy comment
void* lst1 = (decode_clo(env8632))[3];
//not do dummy comment
void* kont8486 = (decode_clo(env8632))[2];
//not do dummy comment
void* car = (decode_clo(env8632))[1];

//if-clause
bool if_guard8880 = is_true(a8402);
if(if_guard8880)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8486);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8486))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8882 = alloc_clo(lam8629_fptr, 6);

//setting env list
clo8882[1] = kont8486;
clo8882[2] = lst1;
clo8882[3] = cons;
clo8882[4] = lst2;
clo8882[5] = append;
clo8882[6] = cdr;
void* f8489 = encode_clo(clo8882);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8489);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8489))[0]);
function_ptr();
return nullptr;
}

}

void* lam8631 = encode_clo(alloc_clo(lam8631_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8633 = arg_buffer[1];
//reading env and args
void* kont8486 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8884 = alloc_clo(lam8631_fptr, 7);

//setting env list
clo8884[1] = car;
clo8884[2] = kont8486;
clo8884[3] = lst1;
clo8884[4] = cons;
clo8884[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8884[6] = append;
clo8884[7] = cdr;
void* f8490 = encode_clo(clo8884);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8490);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8490))[0]);
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
void* _env8887 = arg_buffer[1];
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

void* kont8885 = prim_car(lst);
void* lst8888 = prim_cdr(lst);
void* x8886 = apply_prim_hash(lst8888);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8885);
arg_buffer[2] = x8886;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8885))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8891 = arg_buffer[1];
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

void* kont8889 = prim_car(lst);
void* lst8892 = prim_cdr(lst);
void* x8890 = apply_prim_set(lst8892);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8889);
arg_buffer[2] = x8890;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8889))[0]);
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
void* kont8491 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8406 = prim_set_u45_u62list(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8491);
arg_buffer[2] = xy8406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8491))[0]);
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
void* kont8492 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8407 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8492);
arg_buffer[2] = xy8407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
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
void* kont8493 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8408 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8493);
arg_buffer[2] = xy8408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
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
void* kont8494 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8409 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8494);
arg_buffer[2] = xy8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8494))[0]);
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
void* kont8495 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8410 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8495);
arg_buffer[2] = xy8410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8495))[0]);
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
void* kont8496 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8411 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8496);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8496))[0]);
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
void* kont8497 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8412 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8497);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8497))[0]);
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
void* kont8498 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8413 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8498);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8498))[0]);
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
void* kont8499 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8414 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8499);
arg_buffer[2] = xy8414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8499))[0]);
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
void* a8424 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45count = (decode_clo(env8644))[2];
//not do dummy comment
void* kont8500 = (decode_clo(env8644))[1];
void* cps_u45lst8501 = prim_cons(kont8500, a8424);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(hash_u45count);
arg_buffer[2] = cps_u45lst8501;
arg_buffer[0] = reinterpret_cast<void*>(2);
hash_u45count_fptr();
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
void* a8423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8646))[3];
//not do dummy comment
void* hash_u45count = (decode_clo(env8646))[2];
//not do dummy comment
void* kont8500 = (decode_clo(env8646))[1];

//creating new closure instance
void** clo8894 = alloc_clo(lam8643_fptr, 2);

//setting env list
clo8894[1] = kont8500;
clo8894[2] = hash_u45count;
void* f8502 = encode_clo(clo8894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8502;
arg_buffer[3] = a8423;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8645 = encode_clo(alloc_clo(lam8645_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8655 = arg_buffer[1];
//reading env and args
void* kont8500 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8895 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8895, "100", 10);
void* a8415 = encode_mpz(mpzvar8895);
mpz_t* mpzvar8896 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8896, "80", 10);
void* a8416 = encode_mpz(mpzvar8896);
mpz_t* mpzvar8897 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8897, "10", 10);
void* a8417 = encode_mpz(mpzvar8897);
mpz_t* mpzvar8898 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8898, "2", 10);
void* a8418 = encode_mpz(mpzvar8898);
mpf_t* mpfvar8899 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8899, "25.5", 10);
void* a8419 = encode_mpf(mpfvar8899);
mpf_t* mpfvar8900 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8900, "30.1", 10);
void* a8420 = encode_mpf(mpfvar8900);
mpz_t* mpzvar8901 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8901, "3", 10);
void* a8421 = encode_mpz(mpzvar8901);
mpz_t* mpzvar8902 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8902, "9", 10);
void* a8422 = encode_mpz(mpzvar8902);

//creating new closure instance
void** clo8904 = alloc_clo(lam8645_fptr, 3);

//setting env list
clo8904[1] = kont8500;
clo8904[2] = hash_u45count;
clo8904[3] = list;
void* f8503 = encode_clo(clo8904);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f8503;
arg_buffer[3] = a8415;
arg_buffer[4] = a8416;
arg_buffer[5] = a8417;
arg_buffer[6] = a8418;
arg_buffer[7] = a8419;
arg_buffer[8] = a8420;
arg_buffer[9] = a8421;
arg_buffer[10] = a8422;
arg_buffer[0] = reinterpret_cast<void*>(10);
hash_fptr();
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
void* xy8425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8504 = (decode_clo(env8657))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8504);
arg_buffer[2] = xy8425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8504))[0]);
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
void* kont8504 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8906 = alloc_clo(lam8656_fptr, 1);

//setting env list
clo8906[1] = kont8504;
void* f8505 = encode_clo(clo8906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8505;
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

