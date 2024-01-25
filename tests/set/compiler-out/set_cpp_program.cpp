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
void* _env8653 = arg_buffer[1];
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

void* kont8651 = prim_car(lst);
void* lst8654 = prim_cdr(lst);
void* x8652 = apply_prim__u43(lst8654);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8651);
arg_buffer[2] = x8652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8651))[0]);
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
void* _env8657 = arg_buffer[1];
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

void* kont8655 = prim_car(lst);
void* lst8658 = prim_cdr(lst);
void* x8656 = apply_prim__u45(lst8658);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8655);
arg_buffer[2] = x8656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8655))[0]);
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
void* x8660 = apply_prim__u42(lst8662);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8659);
arg_buffer[2] = x8660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8659))[0]);
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
void* x8664 = apply_prim__u47(lst8666);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8663);
arg_buffer[2] = x8664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8663))[0]);
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
void* x8668 = apply_prim__u61(lst8670);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8667);
arg_buffer[2] = x8668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8667))[0]);
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
void* x8672 = apply_prim__u62(lst8674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8671);
arg_buffer[2] = x8672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8671))[0]);
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
void* x8676 = apply_prim__u60(lst8678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8675);
arg_buffer[2] = x8676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8675))[0]);
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
void* x8680 = apply_prim__u60_u61(lst8682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8679);
arg_buffer[2] = x8680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8679))[0]);
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
void* x8684 = apply_prim__u62_u61(lst8686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683);
arg_buffer[2] = x8684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683))[0]);
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
void* x8688 = apply_prim_modulo(lst8690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8687);
arg_buffer[2] = x8688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8687))[0]);
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
void* x8692 = apply_prim_null_u63(lst8694);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8691);
arg_buffer[2] = x8692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8691))[0]);
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
void* x8696 = apply_prim_equal_u63(lst8698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8695);
arg_buffer[2] = x8696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8695))[0]);
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
void* x8700 = apply_prim_eq_u63(lst8702);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8699);
arg_buffer[2] = x8700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8699))[0]);
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
void* x8704 = apply_prim_exact_u45floor(lst8706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8703);
arg_buffer[2] = x8704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8703))[0]);
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
void* x8708 = apply_prim_exact_u45ceiling(lst8710);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8707);
arg_buffer[2] = x8708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8707))[0]);
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
void* x8712 = apply_prim_exact_u45round(lst8714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8711);
arg_buffer[2] = x8712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);
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
void* x8716 = apply_prim_cons(lst8718);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8715);
arg_buffer[2] = x8716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8715))[0]);
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
void* x8720 = apply_prim_car(lst8722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8719);
arg_buffer[2] = x8720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8719))[0]);
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
void* x8724 = apply_prim_cdr(lst8726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8723);
arg_buffer[2] = x8724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8723))[0]);
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
void* x8728 = apply_prim_float_u45_u62int(lst8730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8727);
arg_buffer[2] = x8728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8727))[0]);
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
void* x8732 = apply_prim_int_u45_u62float(lst8734);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8731);
arg_buffer[2] = x8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8731))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* hash_fptr() // hash 
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
void* x8736 = apply_prim_hash(lst8738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8735);
arg_buffer[2] = x8736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8735))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void* hash_u45ref_fptr() // hash-ref 
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
void* x8740 = apply_prim_hash_u45ref(lst8742);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8739);
arg_buffer[2] = x8740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8739))[0]);
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
void* x8744 = apply_prim_hash_u45set(lst8746);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8743);
arg_buffer[2] = x8744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8743))[0]);
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
void* x8748 = apply_prim_hash_u45keys(lst8750);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8747);
arg_buffer[2] = x8748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8747))[0]);
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
void* x8752 = apply_prim_hash_u45has_u45key_u63(lst8754);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8751);
arg_buffer[2] = x8752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8751))[0]);
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
void* x8756 = apply_prim_hash_u45count(lst8758);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8755);
arg_buffer[2] = x8756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8755))[0]);
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
void* x8760 = apply_prim_set(lst8762);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8759);
arg_buffer[2] = x8760;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8759))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* lam8503_fptr() // lam8503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8504))[3];
//not do dummy comment
void* kont8423 = (decode_clo(env8504))[2];
//not do dummy comment
void* a8344 = (decode_clo(env8504))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8423);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
function_ptr();
return nullptr;
}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8507 = arg_buffer[1];
//reading env and args
void* kont8423 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8763 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8763, "0", 10);
void* a8344 = encode_mpz(mpzvar8763);
mpz_t* mpzvar8764 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8764, "2", 10);
void* a8345 = encode_mpz(mpzvar8764);

//creating new closure instance
void** clo8766 = alloc_clo(lam8503_fptr, 3);

//setting env list
clo8766[1] = a8344;
clo8766[2] = kont8423;
clo8766[3] = equal_u63;
void* f8424 = encode_clo(clo8766);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8424);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8424))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8508_fptr() // lam8508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8425 = (decode_clo(env8509))[3];
//not do dummy comment
void* a8347 = (decode_clo(env8509))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8509))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8425);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
function_ptr();
return nullptr;
}

void* lam8508 = encode_clo(alloc_clo(lam8508_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8512 = arg_buffer[1];
//reading env and args
void* kont8425 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8767, "1", 10);
void* a8347 = encode_mpz(mpzvar8767);
mpz_t* mpzvar8768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8768, "2", 10);
void* a8348 = encode_mpz(mpzvar8768);

//creating new closure instance
void** clo8770 = alloc_clo(lam8508_fptr, 3);

//setting env list
clo8770[1] = equal_u63;
clo8770[2] = a8347;
clo8770[3] = kont8425;
void* f8426 = encode_clo(clo8770);



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
void* _8513 = arg_buffer[1];
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
void* x8502 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8427);
arg_buffer[2] = x8502;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8427))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8516_fptr() // lam8516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8517 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8428 = (decode_clo(env8517))[3];
//not do dummy comment
void* x = (decode_clo(env8517))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8517))[1];

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

void* lam8516 = encode_clo(alloc_clo(lam8516_fptr, 0));

void* lam8518_fptr() // lam8518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8519 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8519))[5];
//not do dummy comment
void* kont8428 = (decode_clo(env8519))[4];
//not do dummy comment
void* lst = (decode_clo(env8519))[3];
//not do dummy comment
void* x = (decode_clo(env8519))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8519))[1];

//if-clause
bool if_guard8771 = is_true(a8353);
if(if_guard8771)
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
void** clo8773 = alloc_clo(lam8516_fptr, 3);

//setting env list
clo8773[1] = member_u63;
clo8773[2] = x;
clo8773[3] = kont8428;
void* f8429 = encode_clo(clo8773);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
function_ptr();
return nullptr;
}

}

void* lam8518 = encode_clo(alloc_clo(lam8518_fptr, 0));

void* lam8520_fptr() // lam8520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8521 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8521))[6];
//not do dummy comment
void* kont8428 = (decode_clo(env8521))[5];
//not do dummy comment
void* lst = (decode_clo(env8521))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8521))[3];
//not do dummy comment
void* x = (decode_clo(env8521))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8521))[1];

//creating new closure instance
void** clo8775 = alloc_clo(lam8518_fptr, 5);

//setting env list
clo8775[1] = member_u63;
clo8775[2] = x;
clo8775[3] = lst;
clo8775[4] = kont8428;
clo8775[5] = cdr;
void* f8430 = encode_clo(clo8775);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8430);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
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
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8523))[7];
//not do dummy comment
void* kont8428 = (decode_clo(env8523))[6];
//not do dummy comment
void* lst = (decode_clo(env8523))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8523))[4];
//not do dummy comment
void* x = (decode_clo(env8523))[3];
//not do dummy comment
void* car = (decode_clo(env8523))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8523))[1];

//if-clause
bool if_guard8776 = is_true(a8350);
if(if_guard8776)
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
void** clo8778 = alloc_clo(lam8520_fptr, 6);

//setting env list
clo8778[1] = member_u63;
clo8778[2] = x;
clo8778[3] = equal_u63;
clo8778[4] = lst;
clo8778[5] = kont8428;
clo8778[6] = cdr;
void* f8431 = encode_clo(clo8778);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

}

void* lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8524 = arg_buffer[1];
//reading env and args
void* kont8428 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8780 = alloc_clo(lam8522_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8780[1] = member_u63;
clo8780[2] = car;
clo8780[3] = x;
clo8780[4] = equal_u63;
clo8780[5] = lst;
clo8780[6] = kont8428;
clo8780[7] = cdr;
void* f8432 = encode_clo(clo8780);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8525_fptr() // lam8525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8526 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8433 = (decode_clo(env8526))[4];
//not do dummy comment
void* fun = (decode_clo(env8526))[3];
//not do dummy comment
void* a8358 = (decode_clo(env8526))[2];
//not do dummy comment
void* foldl = (decode_clo(env8526))[1];

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

void* lam8525 = encode_clo(alloc_clo(lam8525_fptr, 0));

void* lam8527_fptr() // lam8527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8528 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8528))[5];
//not do dummy comment
void* lst = (decode_clo(env8528))[4];
//not do dummy comment
void* kont8433 = (decode_clo(env8528))[3];
//not do dummy comment
void* fun = (decode_clo(env8528))[2];
//not do dummy comment
void* foldl = (decode_clo(env8528))[1];

//creating new closure instance
void** clo8782 = alloc_clo(lam8525_fptr, 4);

//setting env list
clo8782[1] = foldl;
clo8782[2] = a8358;
clo8782[3] = fun;
clo8782[4] = kont8433;
void* f8434 = encode_clo(clo8782);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void* lam8529_fptr() // lam8529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8530 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8530))[6];
//not do dummy comment
void* lst = (decode_clo(env8530))[5];
//not do dummy comment
void* kont8433 = (decode_clo(env8530))[4];
//not do dummy comment
void* fun = (decode_clo(env8530))[3];
//not do dummy comment
void* acc = (decode_clo(env8530))[2];
//not do dummy comment
void* foldl = (decode_clo(env8530))[1];

//creating new closure instance
void** clo8784 = alloc_clo(lam8527_fptr, 5);

//setting env list
clo8784[1] = foldl;
clo8784[2] = fun;
clo8784[3] = kont8433;
clo8784[4] = lst;
clo8784[5] = cdr;
void* f8435 = encode_clo(clo8784);



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

void* lam8529 = encode_clo(alloc_clo(lam8529_fptr, 0));

void* lam8531_fptr() // lam8531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8532 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8532))[7];
//not do dummy comment
void* lst = (decode_clo(env8532))[6];
//not do dummy comment
void* kont8433 = (decode_clo(env8532))[5];
//not do dummy comment
void* fun = (decode_clo(env8532))[4];
//not do dummy comment
void* acc = (decode_clo(env8532))[3];
//not do dummy comment
void* car = (decode_clo(env8532))[2];
//not do dummy comment
void* foldl = (decode_clo(env8532))[1];

//if-clause
bool if_guard8785 = is_true(a8356);
if(if_guard8785)
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
void** clo8787 = alloc_clo(lam8529_fptr, 6);

//setting env list
clo8787[1] = foldl;
clo8787[2] = acc;
clo8787[3] = fun;
clo8787[4] = kont8433;
clo8787[5] = lst;
clo8787[6] = cdr;
void* f8436 = encode_clo(clo8787);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

}

void* lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8533 = arg_buffer[1];
//reading env and args
void* kont8433 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8789 = alloc_clo(lam8531_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8789[1] = foldl;
clo8789[2] = car;
clo8789[3] = acc;
clo8789[4] = fun;
clo8789[5] = kont8433;
clo8789[6] = lst;
clo8789[7] = cdr;
void* f8437 = encode_clo(clo8789);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8534_fptr() // lam8534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8535 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8535))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8535))[2];
//not do dummy comment
void* kont8438 = (decode_clo(env8535))[1];

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

void* lam8534 = encode_clo(alloc_clo(lam8534_fptr, 0));

void* lam8536_fptr() // lam8536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8537 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8537))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8537))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8537))[3];
//not do dummy comment
void* kont8438 = (decode_clo(env8537))[2];
//not do dummy comment
void* cons = (decode_clo(env8537))[1];

//creating new closure instance
void** clo8791 = alloc_clo(lam8534_fptr, 3);

//setting env list
clo8791[1] = kont8438;
clo8791[2] = reverse_u45helper;
clo8791[3] = a8361;
void* f8439 = encode_clo(clo8791);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
function_ptr();
return nullptr;
}

void* lam8536 = encode_clo(alloc_clo(lam8536_fptr, 0));

void* lam8538_fptr() // lam8538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8539 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8539))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8539))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8539))[4];
//not do dummy comment
void* cons = (decode_clo(env8539))[3];
//not do dummy comment
void* kont8438 = (decode_clo(env8539))[2];
//not do dummy comment
void* car = (decode_clo(env8539))[1];

//creating new closure instance
void** clo8793 = alloc_clo(lam8536_fptr, 5);

//setting env list
clo8793[1] = cons;
clo8793[2] = kont8438;
clo8793[3] = lst2;
clo8793[4] = reverse_u45helper;
clo8793[5] = a8361;
void* f8440 = encode_clo(clo8793);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
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
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8541))[7];
//not do dummy comment
void* lst = (decode_clo(env8541))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8541))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8541))[4];
//not do dummy comment
void* cons = (decode_clo(env8541))[3];
//not do dummy comment
void* kont8438 = (decode_clo(env8541))[2];
//not do dummy comment
void* car = (decode_clo(env8541))[1];

//if-clause
bool if_guard8794 = is_true(a8360);
if(if_guard8794)
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
void** clo8796 = alloc_clo(lam8538_fptr, 6);

//setting env list
clo8796[1] = car;
clo8796[2] = kont8438;
clo8796[3] = cons;
clo8796[4] = lst2;
clo8796[5] = reverse_u45helper;
clo8796[6] = lst;
void* f8441 = encode_clo(clo8796);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8441);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
function_ptr();
return nullptr;
}

}

void* lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8542 = arg_buffer[1];
//reading env and args
void* kont8438 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8798 = alloc_clo(lam8540_fptr, 7);

//setting env list
clo8798[1] = car;
clo8798[2] = kont8438;
clo8798[3] = cons;
clo8798[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8798[5] = reverse_u45helper;
clo8798[6] = lst;
clo8798[7] = cdr;
void* f8442 = encode_clo(clo8798);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8543_fptr() // lam8543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8443 = (decode_clo(env8544))[3];
//not do dummy comment
void* lst = (decode_clo(env8544))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8544))[1];

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

void* lam8543 = encode_clo(alloc_clo(lam8543_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8545 = arg_buffer[1];
//reading env and args
void* kont8443 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8800 = alloc_clo(lam8543_fptr, 3);

//setting env list
clo8800[1] = reverse_u45helper;
clo8800[2] = lst;
clo8800[3] = kont8443;
void* f8444 = encode_clo(clo8800);



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

void* lam8546_fptr() // lam8546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8547 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8445 = (decode_clo(env8547))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8445);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8445 = (decode_clo(env8549))[4];
//not do dummy comment
void* a8368 = (decode_clo(env8549))[3];
//not do dummy comment
void* a8370 = (decode_clo(env8549))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8549))[1];

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

void* lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8445 = (decode_clo(env8551))[6];
//not do dummy comment
void* a8368 = (decode_clo(env8551))[5];
//not do dummy comment
void* a8370 = (decode_clo(env8551))[4];
//not do dummy comment
void* cons = (decode_clo(env8551))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8551))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8551))[1];

//creating new closure instance
void** clo8802 = alloc_clo(lam8548_fptr, 4);

//setting env list
clo8802[1] = take_u45helper;
clo8802[2] = a8370;
clo8802[3] = a8368;
clo8802[4] = kont8445;
void* f8447 = encode_clo(clo8802);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8447);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8447))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8368 = (decode_clo(env8553))[7];
//not do dummy comment
void* car = (decode_clo(env8553))[6];
//not do dummy comment
void* cons = (decode_clo(env8553))[5];
//not do dummy comment
void* lst = (decode_clo(env8553))[4];
//not do dummy comment
void* kont8445 = (decode_clo(env8553))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8553))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8553))[1];

//creating new closure instance
void** clo8804 = alloc_clo(lam8550_fptr, 6);

//setting env list
clo8804[1] = lst2;
clo8804[2] = take_u45helper;
clo8804[3] = cons;
clo8804[4] = a8370;
clo8804[5] = a8368;
clo8804[6] = kont8445;
void* f8448 = encode_clo(clo8804);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8448);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
function_ptr();
return nullptr;
}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

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
void* cons = (decode_clo(env8556))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8556))[7];
//not do dummy comment
void* lst = (decode_clo(env8556))[6];
//not do dummy comment
void* kont8445 = (decode_clo(env8556))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8556))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8556))[3];
//not do dummy comment
void* n = (decode_clo(env8556))[2];
//not do dummy comment
void* car = (decode_clo(env8556))[1];
mpz_t* mpzvar8805 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8805, "1", 10);
void* a8369 = encode_mpz(mpzvar8805);

//creating new closure instance
void** clo8807 = alloc_clo(lam8552_fptr, 7);

//setting env list
clo8807[1] = lst2;
clo8807[2] = take_u45helper;
clo8807[3] = kont8445;
clo8807[4] = lst;
clo8807[5] = cons;
clo8807[6] = car;
clo8807[7] = a8368;
void* f8449 = encode_clo(clo8807);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8558))[10];
//not do dummy comment
void* reverse = (decode_clo(env8558))[9];
//not do dummy comment
void* cons = (decode_clo(env8558))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8558))[7];
//not do dummy comment
void* lst = (decode_clo(env8558))[6];
//not do dummy comment
void* kont8445 = (decode_clo(env8558))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8558))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8558))[3];
//not do dummy comment
void* n = (decode_clo(env8558))[2];
//not do dummy comment
void* car = (decode_clo(env8558))[1];

//if-clause
bool if_guard8808 = is_true(a8366);
if(if_guard8808)
{

//creating new closure instance
void** clo8810 = alloc_clo(lam8546_fptr, 1);

//setting env list
clo8810[1] = kont8445;
void* f8446 = encode_clo(clo8810);



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
void** clo8812 = alloc_clo(lam8555_fptr, 8);

//setting env list
clo8812[1] = car;
clo8812[2] = n;
clo8812[3] = lst2;
clo8812[4] = take_u45helper;
clo8812[5] = kont8445;
clo8812[6] = lst;
clo8812[7] = _u45;
clo8812[8] = cons;
void* f8450 = encode_clo(clo8812);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8560 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8813 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8813, "0", 10);
void* a8365 = encode_mpz(mpzvar8813);

//creating new closure instance
void** clo8815 = alloc_clo(lam8557_fptr, 10);

//setting env list
clo8815[1] = car;
clo8815[2] = n;
clo8815[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8815[4] = take_u45helper;
clo8815[5] = kont8445;
clo8815[6] = lst;
clo8815[7] = _u45;
clo8815[8] = cons;
clo8815[9] = reverse;
clo8815[10] = cdr;
void* f8451 = encode_clo(clo8815);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8561_fptr() // lam8561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8562 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8562))[4];
//not do dummy comment
void* kont8452 = (decode_clo(env8562))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8562))[2];
//not do dummy comment
void* n = (decode_clo(env8562))[1];

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

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8563 = arg_buffer[1];
//reading env and args
void* kont8452 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8817 = alloc_clo(lam8561_fptr, 4);

//setting env list
clo8817[1] = n;
clo8817[2] = take_u45helper;
clo8817[3] = kont8452;
clo8817[4] = lst;
void* f8453 = encode_clo(clo8817);



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

void* lam8565_fptr() // lam8565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8566))[3];
//not do dummy comment
void* kont8454 = (decode_clo(env8566))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8566))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8454);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8568))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8568))[3];
//not do dummy comment
void* kont8454 = (decode_clo(env8568))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8568))[1];

//creating new closure instance
void** clo8819 = alloc_clo(lam8565_fptr, 3);

//setting env list
clo8819[1] = a8376;
clo8819[2] = kont8454;
clo8819[3] = _u43;
void* f8455 = encode_clo(clo8819);



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

void* lam8567 = encode_clo(alloc_clo(lam8567_fptr, 0));

void* lam8570_fptr() // lam8570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8571 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8571))[5];
//not do dummy comment
void* lst = (decode_clo(env8571))[4];
//not do dummy comment
void* length = (decode_clo(env8571))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8571))[2];
//not do dummy comment
void* kont8454 = (decode_clo(env8571))[1];

//if-clause
bool if_guard8820 = is_true(a8374);
if(if_guard8820)
{
mpz_t* mpzvar8821 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8821, "0", 10);
void* xy8375 = encode_mpz(mpzvar8821);

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
mpz_t* mpzvar8822 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8822, "1", 10);
void* a8376 = encode_mpz(mpzvar8822);

//creating new closure instance
void** clo8824 = alloc_clo(lam8567_fptr, 4);

//setting env list
clo8824[1] = a8376;
clo8824[2] = kont8454;
clo8824[3] = _u43;
clo8824[4] = length;
void* f8456 = encode_clo(clo8824);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8456);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
function_ptr();
return nullptr;
}

}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8572 = arg_buffer[1];
//reading env and args
void* kont8454 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8826 = alloc_clo(lam8570_fptr, 5);

//setting env list
clo8826[1] = kont8454;
clo8826[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8826[3] = length;
clo8826[4] = lst;
clo8826[5] = cdr;
void* f8457 = encode_clo(clo8826);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8457);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8457))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8573_fptr() // lam8573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8574 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8574))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8458);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8458))[0]);
//call next proc using a function pointer
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8576))[3];
//not do dummy comment
void* a8382 = (decode_clo(env8576))[2];
//not do dummy comment
void* cons = (decode_clo(env8576))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8458);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8458))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8578))[5];
//not do dummy comment
void* proc = (decode_clo(env8578))[4];
//not do dummy comment
void* cons = (decode_clo(env8578))[3];
//not do dummy comment
void* map = (decode_clo(env8578))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8578))[1];

//creating new closure instance
void** clo8828 = alloc_clo(lam8575_fptr, 3);

//setting env list
clo8828[1] = cons;
clo8828[2] = a8382;
clo8828[3] = kont8458;
void* f8460 = encode_clo(clo8828);



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

void* lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

void* lam8579_fptr() // lam8579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8580 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8580))[6];
//not do dummy comment
void* kont8458 = (decode_clo(env8580))[5];
//not do dummy comment
void* lst = (decode_clo(env8580))[4];
//not do dummy comment
void* map = (decode_clo(env8580))[3];
//not do dummy comment
void* proc = (decode_clo(env8580))[2];
//not do dummy comment
void* cons = (decode_clo(env8580))[1];

//creating new closure instance
void** clo8830 = alloc_clo(lam8577_fptr, 5);

//setting env list
clo8830[1] = a8382;
clo8830[2] = map;
clo8830[3] = cons;
clo8830[4] = proc;
clo8830[5] = kont8458;
void* f8461 = encode_clo(clo8830);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8582))[6];
//not do dummy comment
void* kont8458 = (decode_clo(env8582))[5];
//not do dummy comment
void* lst = (decode_clo(env8582))[4];
//not do dummy comment
void* map = (decode_clo(env8582))[3];
//not do dummy comment
void* proc = (decode_clo(env8582))[2];
//not do dummy comment
void* cons = (decode_clo(env8582))[1];

//creating new closure instance
void** clo8832 = alloc_clo(lam8579_fptr, 6);

//setting env list
clo8832[1] = cons;
clo8832[2] = proc;
clo8832[3] = map;
clo8832[4] = lst;
clo8832[5] = kont8458;
clo8832[6] = cdr;
void* f8462 = encode_clo(clo8832);



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

void* lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void* lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8584))[8];
//not do dummy comment
void* lst = (decode_clo(env8584))[7];
//not do dummy comment
void* map = (decode_clo(env8584))[6];
//not do dummy comment
void* proc = (decode_clo(env8584))[5];
//not do dummy comment
void* car = (decode_clo(env8584))[4];
//not do dummy comment
void* cons = (decode_clo(env8584))[3];
//not do dummy comment
void* list = (decode_clo(env8584))[2];
//not do dummy comment
void* cdr = (decode_clo(env8584))[1];

//if-clause
bool if_guard8833 = is_true(a8379);
if(if_guard8833)
{

//creating new closure instance
void** clo8835 = alloc_clo(lam8573_fptr, 1);

//setting env list
clo8835[1] = kont8458;
void* f8459 = encode_clo(clo8835);



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
void** clo8837 = alloc_clo(lam8581_fptr, 6);

//setting env list
clo8837[1] = cons;
clo8837[2] = proc;
clo8837[3] = map;
clo8837[4] = lst;
clo8837[5] = kont8458;
clo8837[6] = cdr;
void* f8463 = encode_clo(clo8837);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
function_ptr();
return nullptr;
}

}

void* lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8585 = arg_buffer[1];
//reading env and args
void* kont8458 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8839 = alloc_clo(lam8583_fptr, 8);

//setting env list
clo8839[1] = cdr;
clo8839[2] = list;
clo8839[3] = cons;
clo8839[4] = car;
clo8839[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8839[6] = map;
clo8839[7] = lst;
clo8839[8] = kont8458;
void* f8464 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8586_fptr() // lam8586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8465 = (decode_clo(env8587))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8465);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8465))[0]);
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8465 = (decode_clo(env8589))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8589))[2];
//not do dummy comment
void* cons = (decode_clo(env8589))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8465);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8465))[0]);
function_ptr();
return nullptr;
}

void* lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void* lam8590_fptr() // lam8590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8591 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8591))[5];
//not do dummy comment
void* kont8465 = (decode_clo(env8591))[4];
//not do dummy comment
void* a8389 = (decode_clo(env8591))[3];
//not do dummy comment
void* filter = (decode_clo(env8591))[2];
//not do dummy comment
void* cons = (decode_clo(env8591))[1];

//creating new closure instance
void** clo8841 = alloc_clo(lam8588_fptr, 3);

//setting env list
clo8841[1] = cons;
clo8841[2] = a8389;
clo8841[3] = kont8465;
void* f8467 = encode_clo(clo8841);



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

void* lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void* lam8592_fptr() // lam8592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8593 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8593))[6];
//not do dummy comment
void* lst = (decode_clo(env8593))[5];
//not do dummy comment
void* op = (decode_clo(env8593))[4];
//not do dummy comment
void* kont8465 = (decode_clo(env8593))[3];
//not do dummy comment
void* filter = (decode_clo(env8593))[2];
//not do dummy comment
void* cons = (decode_clo(env8593))[1];

//creating new closure instance
void** clo8843 = alloc_clo(lam8590_fptr, 5);

//setting env list
clo8843[1] = cons;
clo8843[2] = filter;
clo8843[3] = a8389;
clo8843[4] = kont8465;
clo8843[5] = op;
void* f8468 = encode_clo(clo8843);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8595))[3];
//not do dummy comment
void* kont8465 = (decode_clo(env8595))[2];
//not do dummy comment
void* filter = (decode_clo(env8595))[1];

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

void* lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void* lam8596_fptr() // lam8596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8597 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8597))[7];
//not do dummy comment
void* lst = (decode_clo(env8597))[6];
//not do dummy comment
void* op = (decode_clo(env8597))[5];
//not do dummy comment
void* kont8465 = (decode_clo(env8597))[4];
//not do dummy comment
void* cons = (decode_clo(env8597))[3];
//not do dummy comment
void* filter = (decode_clo(env8597))[2];
//not do dummy comment
void* car = (decode_clo(env8597))[1];

//if-clause
bool if_guard8844 = is_true(a8388);
if(if_guard8844)
{

//creating new closure instance
void** clo8846 = alloc_clo(lam8592_fptr, 6);

//setting env list
clo8846[1] = cons;
clo8846[2] = filter;
clo8846[3] = kont8465;
clo8846[4] = op;
clo8846[5] = lst;
clo8846[6] = cdr;
void* f8469 = encode_clo(clo8846);



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
void** clo8848 = alloc_clo(lam8594_fptr, 3);

//setting env list
clo8848[1] = filter;
clo8848[2] = kont8465;
clo8848[3] = op;
void* f8470 = encode_clo(clo8848);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
function_ptr();
return nullptr;
}

}

void* lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void* lam8598_fptr() // lam8598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8599 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8599))[7];
//not do dummy comment
void* lst = (decode_clo(env8599))[6];
//not do dummy comment
void* op = (decode_clo(env8599))[5];
//not do dummy comment
void* kont8465 = (decode_clo(env8599))[4];
//not do dummy comment
void* cons = (decode_clo(env8599))[3];
//not do dummy comment
void* filter = (decode_clo(env8599))[2];
//not do dummy comment
void* car = (decode_clo(env8599))[1];

//creating new closure instance
void** clo8850 = alloc_clo(lam8596_fptr, 7);

//setting env list
clo8850[1] = car;
clo8850[2] = filter;
clo8850[3] = cons;
clo8850[4] = kont8465;
clo8850[5] = op;
clo8850[6] = lst;
clo8850[7] = cdr;
void* f8471 = encode_clo(clo8850);



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

void* lam8598 = encode_clo(alloc_clo(lam8598_fptr, 0));

void* lam8600_fptr() // lam8600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8601 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8601))[8];
//not do dummy comment
void* op = (decode_clo(env8601))[7];
//not do dummy comment
void* kont8465 = (decode_clo(env8601))[6];
//not do dummy comment
void* cons = (decode_clo(env8601))[5];
//not do dummy comment
void* list = (decode_clo(env8601))[4];
//not do dummy comment
void* cdr = (decode_clo(env8601))[3];
//not do dummy comment
void* filter = (decode_clo(env8601))[2];
//not do dummy comment
void* car = (decode_clo(env8601))[1];

//if-clause
bool if_guard8851 = is_true(a8385);
if(if_guard8851)
{

//creating new closure instance
void** clo8853 = alloc_clo(lam8586_fptr, 1);

//setting env list
clo8853[1] = kont8465;
void* f8466 = encode_clo(clo8853);



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
void** clo8855 = alloc_clo(lam8598_fptr, 7);

//setting env list
clo8855[1] = car;
clo8855[2] = filter;
clo8855[3] = cons;
clo8855[4] = kont8465;
clo8855[5] = op;
clo8855[6] = lst;
clo8855[7] = cdr;
void* f8472 = encode_clo(clo8855);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
function_ptr();
return nullptr;
}

}

void* lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8602 = arg_buffer[1];
//reading env and args
void* kont8465 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8857 = alloc_clo(lam8600_fptr, 8);

//setting env list
clo8857[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8857[2] = filter;
clo8857[3] = cdr;
clo8857[4] = list;
clo8857[5] = cons;
clo8857[6] = kont8465;
clo8857[7] = op;
clo8857[8] = lst;
void* f8473 = encode_clo(clo8857);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8603_fptr() // lam8603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8604 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8474 = (decode_clo(env8604))[3];
//not do dummy comment
void* a8395 = (decode_clo(env8604))[2];
//not do dummy comment
void* drop = (decode_clo(env8604))[1];

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

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void* lam8606_fptr() // lam8606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8607 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8474 = (decode_clo(env8607))[4];
//not do dummy comment
void* drop = (decode_clo(env8607))[3];
//not do dummy comment
void* n = (decode_clo(env8607))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8607))[1];
mpz_t* mpzvar8858 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8858, "1", 10);
void* a8396 = encode_mpz(mpzvar8858);

//creating new closure instance
void** clo8860 = alloc_clo(lam8603_fptr, 3);

//setting env list
clo8860[1] = drop;
clo8860[2] = a8395;
clo8860[3] = kont8474;
void* f8475 = encode_clo(clo8860);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8609))[6];
//not do dummy comment
void* kont8474 = (decode_clo(env8609))[5];
//not do dummy comment
void* n = (decode_clo(env8609))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8609))[3];
//not do dummy comment
void* lst = (decode_clo(env8609))[2];
//not do dummy comment
void* drop = (decode_clo(env8609))[1];

//if-clause
bool if_guard8861 = is_true(a8394);
if(if_guard8861)
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
void** clo8863 = alloc_clo(lam8606_fptr, 4);

//setting env list
clo8863[1] = _u45;
clo8863[2] = n;
clo8863[3] = drop;
clo8863[4] = kont8474;
void* f8476 = encode_clo(clo8863);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8611 = arg_buffer[1];
//reading env and args
void* kont8474 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8864 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8864, "0", 10);
void* a8393 = encode_mpz(mpzvar8864);

//creating new closure instance
void** clo8866 = alloc_clo(lam8608_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8866[1] = drop;
clo8866[2] = lst;
clo8866[3] = _u45;
clo8866[4] = n;
clo8866[5] = kont8474;
clo8866[6] = cdr;
void* f8477 = encode_clo(clo8866);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8612_fptr() // lam8612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8613 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8478 = (decode_clo(env8613))[3];
//not do dummy comment
void* a8399 = (decode_clo(env8613))[2];
//not do dummy comment
void* proc = (decode_clo(env8613))[1];

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

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void* lam8614_fptr() // lam8614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8615 = arg_buffer[1];
//reading env and args
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8615))[5];
//not do dummy comment
void* kont8478 = (decode_clo(env8615))[4];
//not do dummy comment
void* a8399 = (decode_clo(env8615))[3];
//not do dummy comment
void* proc = (decode_clo(env8615))[2];
//not do dummy comment
void* acc = (decode_clo(env8615))[1];

//creating new closure instance
void** clo8868 = alloc_clo(lam8612_fptr, 3);

//setting env list
clo8868[1] = proc;
clo8868[2] = a8399;
clo8868[3] = kont8478;
void* f8479 = encode_clo(clo8868);



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

void* lam8614 = encode_clo(alloc_clo(lam8614_fptr, 0));

void* lam8616_fptr() // lam8616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8617 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8617))[6];
//not do dummy comment
void* kont8478 = (decode_clo(env8617))[5];
//not do dummy comment
void* foldr = (decode_clo(env8617))[4];
//not do dummy comment
void* lst = (decode_clo(env8617))[3];
//not do dummy comment
void* proc = (decode_clo(env8617))[2];
//not do dummy comment
void* acc = (decode_clo(env8617))[1];

//creating new closure instance
void** clo8870 = alloc_clo(lam8614_fptr, 5);

//setting env list
clo8870[1] = acc;
clo8870[2] = proc;
clo8870[3] = a8399;
clo8870[4] = kont8478;
clo8870[5] = foldr;
void* f8480 = encode_clo(clo8870);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8480);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8619))[7];
//not do dummy comment
void* kont8478 = (decode_clo(env8619))[6];
//not do dummy comment
void* car = (decode_clo(env8619))[5];
//not do dummy comment
void* foldr = (decode_clo(env8619))[4];
//not do dummy comment
void* lst = (decode_clo(env8619))[3];
//not do dummy comment
void* proc = (decode_clo(env8619))[2];
//not do dummy comment
void* acc = (decode_clo(env8619))[1];

//if-clause
bool if_guard8871 = is_true(a8398);
if(if_guard8871)
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
void** clo8873 = alloc_clo(lam8616_fptr, 6);

//setting env list
clo8873[1] = acc;
clo8873[2] = proc;
clo8873[3] = lst;
clo8873[4] = foldr;
clo8873[5] = kont8478;
clo8873[6] = cdr;
void* f8481 = encode_clo(clo8873);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8481);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
function_ptr();
return nullptr;
}

}

void* lam8618 = encode_clo(alloc_clo(lam8618_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8620 = arg_buffer[1];
//reading env and args
void* kont8478 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8875 = alloc_clo(lam8618_fptr, 7);

//setting env list
clo8875[1] = acc;
clo8875[2] = proc;
clo8875[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8875[4] = foldr;
clo8875[5] = car;
clo8875[6] = kont8478;
clo8875[7] = cdr;
void* f8482 = encode_clo(clo8875);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8621_fptr() // lam8621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8622 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8622))[3];
//not do dummy comment
void* a8403 = (decode_clo(env8622))[2];
//not do dummy comment
void* kont8483 = (decode_clo(env8622))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8483);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8624))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8624))[4];
//not do dummy comment
void* cons = (decode_clo(env8624))[3];
//not do dummy comment
void* a8403 = (decode_clo(env8624))[2];
//not do dummy comment
void* kont8483 = (decode_clo(env8624))[1];

//creating new closure instance
void** clo8877 = alloc_clo(lam8621_fptr, 3);

//setting env list
clo8877[1] = kont8483;
clo8877[2] = a8403;
clo8877[3] = cons;
void* f8484 = encode_clo(clo8877);



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

void* lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void* lam8625_fptr() // lam8625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8626 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8626))[6];
//not do dummy comment
void* append = (decode_clo(env8626))[5];
//not do dummy comment
void* kont8483 = (decode_clo(env8626))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8626))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8626))[2];
//not do dummy comment
void* cons = (decode_clo(env8626))[1];

//creating new closure instance
void** clo8879 = alloc_clo(lam8623_fptr, 5);

//setting env list
clo8879[1] = kont8483;
clo8879[2] = a8403;
clo8879[3] = cons;
clo8879[4] = lst2;
clo8879[5] = append;
void* f8485 = encode_clo(clo8879);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8485);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8485))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8628))[7];
//not do dummy comment
void* append = (decode_clo(env8628))[6];
//not do dummy comment
void* kont8483 = (decode_clo(env8628))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8628))[4];
//not do dummy comment
void* cons = (decode_clo(env8628))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8628))[2];
//not do dummy comment
void* car = (decode_clo(env8628))[1];

//if-clause
bool if_guard8880 = is_true(a8402);
if(if_guard8880)
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
void** clo8882 = alloc_clo(lam8625_fptr, 6);

//setting env list
clo8882[1] = cons;
clo8882[2] = lst1;
clo8882[3] = lst2;
clo8882[4] = kont8483;
clo8882[5] = append;
clo8882[6] = cdr;
void* f8486 = encode_clo(clo8882);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8486);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8486))[0]);
function_ptr();
return nullptr;
}

}

void* lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8629 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8884 = alloc_clo(lam8627_fptr, 7);

//setting env list
clo8884[1] = car;
clo8884[2] = lst1;
clo8884[3] = cons;
clo8884[4] = lst2;
clo8884[5] = kont8483;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8884[6] = append;
clo8884[7] = cdr;
void* f8487 = encode_clo(clo8884);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8487);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8487))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* set_u45_u62list_fptr() // set->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8630 = arg_buffer[1];
//reading env and args
void* kont8488 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8406 = prim_set_u45_u62list(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8488);
arg_buffer[2] = xy8406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8488))[0]);
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
void* _8631 = arg_buffer[1];
//reading env and args
void* kont8489 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8407 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8489);
arg_buffer[2] = xy8407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8489))[0]);
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
void* _8632 = arg_buffer[1];
//reading env and args
void* kont8490 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8408 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8490);
arg_buffer[2] = xy8408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8490))[0]);
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
void* _8633 = arg_buffer[1];
//reading env and args
void* kont8491 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8409 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8491);
arg_buffer[2] = xy8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8491))[0]);
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
void* _8634 = arg_buffer[1];
//reading env and args
void* kont8492 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8410 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8492);
arg_buffer[2] = xy8410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
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
void* _8635 = arg_buffer[1];
//reading env and args
void* kont8493 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8411 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8493);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
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
void* _8636 = arg_buffer[1];
//reading env and args
void* kont8494 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8412 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8494);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8494))[0]);
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
void* _8637 = arg_buffer[1];
//reading env and args
void* kont8495 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8413 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8495);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8495))[0]);
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
void* _8638 = arg_buffer[1];
//reading env and args
void* kont8496 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8414 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8496);
arg_buffer[2] = xy8414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8496))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam8639_fptr() // lam8639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8640 = arg_buffer[1];
//reading env and args
void* a8421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* set = (decode_clo(env8640))[2];
//not do dummy comment
void* kont8497 = (decode_clo(env8640))[1];
void* cps_u45lst8498 = prim_cons(kont8497, a8421);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(set);
arg_buffer[2] = cps_u45lst8498;
arg_buffer[0] = reinterpret_cast<void*>(2);
set_fptr();
return nullptr;
}

void* lam8639 = encode_clo(alloc_clo(lam8639_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8647 = arg_buffer[1];
//reading env and args
void* kont8497 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8885 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8885, "1", 10);
void* a8415 = encode_mpz(mpzvar8885);
mpz_t* mpzvar8886 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8886, "2", 10);
void* a8416 = encode_mpz(mpzvar8886);
mpz_t* mpzvar8887 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8887, "2", 10);
void* a8417 = encode_mpz(mpzvar8887);
mpf_t* mpfvar8888 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8888, "3.5", 10);
void* a8418 = encode_mpf(mpfvar8888);
mpz_t* mpzvar8889 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8889, "3", 10);
void* a8419 = encode_mpz(mpzvar8889);
void* a8420 = encode_str(new(GC) std::string("haha"));

//creating new closure instance
void** clo8891 = alloc_clo(lam8639_fptr, 2);

//setting env list
clo8891[1] = kont8497;
clo8891[2] = set;
void* f8499 = encode_clo(clo8891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8499;
arg_buffer[3] = a8415;
arg_buffer[4] = a8416;
arg_buffer[5] = a8417;
arg_buffer[6] = a8418;
arg_buffer[7] = a8419;
arg_buffer[8] = a8420;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8648_fptr() // lam8648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8649 = arg_buffer[1];
//reading env and args
void* xy8422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8500 = (decode_clo(env8649))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8500);
arg_buffer[2] = xy8422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8500))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8648 = encode_clo(alloc_clo(lam8648_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8650 = arg_buffer[1];
//reading env and args
void* kont8500 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8893 = alloc_clo(lam8648_fptr, 1);

//setting env list
clo8893[1] = kont8500;
void* f8501 = encode_clo(clo8893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8501;
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

