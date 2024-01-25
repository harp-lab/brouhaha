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
void* _env8645 = arg_buffer[1];
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

void* kont8643 = prim_car(lst);
void* lst8646 = prim_cdr(lst);
void* x8644 = apply_prim__u43(lst8646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8643);
arg_buffer[2] = x8644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8643))[0]);
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
void* _env8649 = arg_buffer[1];
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

void* kont8647 = prim_car(lst);
void* lst8650 = prim_cdr(lst);
void* x8648 = apply_prim__u45(lst8650);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8647);
arg_buffer[2] = x8648;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8647))[0]);
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
void* x8652 = apply_prim__u42(lst8654);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8651);
arg_buffer[2] = x8652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8651))[0]);
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
void* x8656 = apply_prim__u47(lst8658);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8655);
arg_buffer[2] = x8656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8655))[0]);
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
void* x8660 = apply_prim__u61(lst8662);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8659);
arg_buffer[2] = x8660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8659))[0]);
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
void* x8664 = apply_prim__u62(lst8666);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8663);
arg_buffer[2] = x8664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8663))[0]);
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
void* x8668 = apply_prim__u60(lst8670);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8667);
arg_buffer[2] = x8668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8667))[0]);
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
void* x8672 = apply_prim__u60_u61(lst8674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8671);
arg_buffer[2] = x8672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8671))[0]);
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
void* x8676 = apply_prim__u62_u61(lst8678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8675);
arg_buffer[2] = x8676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8675))[0]);
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
void* x8680 = apply_prim_modulo(lst8682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8679);
arg_buffer[2] = x8680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8679))[0]);
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
void* x8684 = apply_prim_null_u63(lst8686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683);
arg_buffer[2] = x8684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683))[0]);
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
void* x8688 = apply_prim_equal_u63(lst8690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8687);
arg_buffer[2] = x8688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8687))[0]);
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
void* x8692 = apply_prim_eq_u63(lst8694);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8691);
arg_buffer[2] = x8692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8691))[0]);
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
void* x8696 = apply_prim_exact_u45floor(lst8698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8695);
arg_buffer[2] = x8696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8695))[0]);
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
void* x8700 = apply_prim_exact_u45ceiling(lst8702);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8699);
arg_buffer[2] = x8700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8699))[0]);
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
void* x8704 = apply_prim_exact_u45round(lst8706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8703);
arg_buffer[2] = x8704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8703))[0]);
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
void* x8708 = apply_prim_cons(lst8710);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8707);
arg_buffer[2] = x8708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8707))[0]);
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
void* x8712 = apply_prim_car(lst8714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8711);
arg_buffer[2] = x8712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);
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
void* x8716 = apply_prim_cdr(lst8718);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8715);
arg_buffer[2] = x8716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8715))[0]);
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
void* x8720 = apply_prim_float_u45_u62int(lst8722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8719);
arg_buffer[2] = x8720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8719))[0]);
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
void* x8724 = apply_prim_int_u45_u62float(lst8726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8723);
arg_buffer[2] = x8724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8723))[0]);
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
void* x8728 = apply_prim_hash(lst8730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8727);
arg_buffer[2] = x8728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8727))[0]);
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
void* x8732 = apply_prim_hash_u45ref(lst8734);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8731);
arg_buffer[2] = x8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8731))[0]);
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
void* x8736 = apply_prim_hash_u45set(lst8738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8735);
arg_buffer[2] = x8736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8735))[0]);
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
void* x8740 = apply_prim_hash_u45keys(lst8742);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8739);
arg_buffer[2] = x8740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8739))[0]);
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
void* x8744 = apply_prim_hash_u45has_u45key_u63(lst8746);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8743);
arg_buffer[2] = x8744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8743))[0]);
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
void* x8748 = apply_prim_hash_u45count(lst8750);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8747);
arg_buffer[2] = x8748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8747))[0]);
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
void* x8752 = apply_prim_set(lst8754);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8751);
arg_buffer[2] = x8752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8751))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45_u62list_fptr() // set->list 
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
void* x8756 = apply_prim_set_u45_u62list(lst8758);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8755);
arg_buffer[2] = x8756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8755))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void* lam8498_fptr() // lam8498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8499 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8499))[3];
//not do dummy comment
void* kont8420 = (decode_clo(env8499))[2];
//not do dummy comment
void* a8344 = (decode_clo(env8499))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8420);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8420))[0]);
function_ptr();
return nullptr;
}

void* lam8498 = encode_clo(alloc_clo(lam8498_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8502 = arg_buffer[1];
//reading env and args
void* kont8420 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8759 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8759, "0", 10);
void* a8344 = encode_mpz(mpzvar8759);
mpz_t* mpzvar8760 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8760, "2", 10);
void* a8345 = encode_mpz(mpzvar8760);

//creating new closure instance
void** clo8762 = alloc_clo(lam8498_fptr, 3);

//setting env list
clo8762[1] = a8344;
clo8762[2] = kont8420;
clo8762[3] = equal_u63;
void* f8421 = encode_clo(clo8762);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8421);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8421))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8503_fptr() // lam8503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8347 = (decode_clo(env8504))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8504))[2];
//not do dummy comment
void* kont8422 = (decode_clo(env8504))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8422);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8422))[0]);
function_ptr();
return nullptr;
}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8507 = arg_buffer[1];
//reading env and args
void* kont8422 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8763 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8763, "1", 10);
void* a8347 = encode_mpz(mpzvar8763);
mpz_t* mpzvar8764 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8764, "2", 10);
void* a8348 = encode_mpz(mpzvar8764);

//creating new closure instance
void** clo8766 = alloc_clo(lam8503_fptr, 3);

//setting env list
clo8766[1] = kont8422;
clo8766[2] = equal_u63;
clo8766[3] = a8347;
void* f8423 = encode_clo(clo8766);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8423);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8423))[0]);
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
void* _8508 = arg_buffer[1];
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

void* kont8424 = prim_car(x);
void* x8497 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[2] = x8497;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8511_fptr() // lam8511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8512 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8425 = (decode_clo(env8512))[3];
//not do dummy comment
void* x = (decode_clo(env8512))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8512))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8425;
arg_buffer[3] = x;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8511 = encode_clo(alloc_clo(lam8511_fptr, 0));

void* lam8513_fptr() // lam8513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8514 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8514))[5];
//not do dummy comment
void* x = (decode_clo(env8514))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8514))[3];
//not do dummy comment
void* kont8425 = (decode_clo(env8514))[2];
//not do dummy comment
void* cdr = (decode_clo(env8514))[1];

//if-clause
bool if_guard8767 = is_true(a8353);
if(if_guard8767)
{
void* xy8354 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8425);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8769 = alloc_clo(lam8511_fptr, 3);

//setting env list
clo8769[1] = member_u63;
clo8769[2] = x;
clo8769[3] = kont8425;
void* f8426 = encode_clo(clo8769);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
function_ptr();
return nullptr;
}

}

void* lam8513 = encode_clo(alloc_clo(lam8513_fptr, 0));

void* lam8515_fptr() // lam8515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8516 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8516))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8516))[5];
//not do dummy comment
void* x = (decode_clo(env8516))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8516))[3];
//not do dummy comment
void* kont8425 = (decode_clo(env8516))[2];
//not do dummy comment
void* cdr = (decode_clo(env8516))[1];

//creating new closure instance
void** clo8771 = alloc_clo(lam8513_fptr, 5);

//setting env list
clo8771[1] = cdr;
clo8771[2] = kont8425;
clo8771[3] = member_u63;
clo8771[4] = x;
clo8771[5] = lst;
void* f8427 = encode_clo(clo8771);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
function_ptr();
return nullptr;
}

void* lam8515 = encode_clo(alloc_clo(lam8515_fptr, 0));

void* lam8517_fptr() // lam8517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8518))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env8518))[6];
//not do dummy comment
void* x = (decode_clo(env8518))[5];
//not do dummy comment
void* car = (decode_clo(env8518))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8518))[3];
//not do dummy comment
void* kont8425 = (decode_clo(env8518))[2];
//not do dummy comment
void* cdr = (decode_clo(env8518))[1];

//if-clause
bool if_guard8772 = is_true(a8350);
if(if_guard8772)
{
void* xy8351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8425);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8774 = alloc_clo(lam8515_fptr, 6);

//setting env list
clo8774[1] = cdr;
clo8774[2] = kont8425;
clo8774[3] = member_u63;
clo8774[4] = x;
clo8774[5] = equal_u63;
clo8774[6] = lst;
void* f8428 = encode_clo(clo8774);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
function_ptr();
return nullptr;
}

}

void* lam8517 = encode_clo(alloc_clo(lam8517_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8519 = arg_buffer[1];
//reading env and args
void* kont8425 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8776 = alloc_clo(lam8517_fptr, 7);

//setting env list
clo8776[1] = cdr;
clo8776[2] = kont8425;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8776[3] = member_u63;
clo8776[4] = car;
clo8776[5] = x;
clo8776[6] = equal_u63;
clo8776[7] = lst;
void* f8429 = encode_clo(clo8776);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8520_fptr() // lam8520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8521 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8430 = (decode_clo(env8521))[4];
//not do dummy comment
void* fun = (decode_clo(env8521))[3];
//not do dummy comment
void* a8358 = (decode_clo(env8521))[2];
//not do dummy comment
void* foldl = (decode_clo(env8521))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8430;
arg_buffer[3] = fun;
arg_buffer[4] = a8358;
arg_buffer[5] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8523))[5];
//not do dummy comment
void* lst = (decode_clo(env8523))[4];
//not do dummy comment
void* kont8430 = (decode_clo(env8523))[3];
//not do dummy comment
void* fun = (decode_clo(env8523))[2];
//not do dummy comment
void* foldl = (decode_clo(env8523))[1];

//creating new closure instance
void** clo8778 = alloc_clo(lam8520_fptr, 4);

//setting env list
clo8778[1] = foldl;
clo8778[2] = a8358;
clo8778[3] = fun;
clo8778[4] = kont8430;
void* f8431 = encode_clo(clo8778);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

void* lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void* lam8524_fptr() // lam8524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8525))[6];
//not do dummy comment
void* lst = (decode_clo(env8525))[5];
//not do dummy comment
void* kont8430 = (decode_clo(env8525))[4];
//not do dummy comment
void* fun = (decode_clo(env8525))[3];
//not do dummy comment
void* acc = (decode_clo(env8525))[2];
//not do dummy comment
void* foldl = (decode_clo(env8525))[1];

//creating new closure instance
void** clo8780 = alloc_clo(lam8522_fptr, 5);

//setting env list
clo8780[1] = foldl;
clo8780[2] = fun;
clo8780[3] = kont8430;
clo8780[4] = lst;
clo8780[5] = cdr;
void* f8432 = encode_clo(clo8780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8432;
arg_buffer[3] = a8357;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8527))[7];
//not do dummy comment
void* lst = (decode_clo(env8527))[6];
//not do dummy comment
void* kont8430 = (decode_clo(env8527))[5];
//not do dummy comment
void* fun = (decode_clo(env8527))[4];
//not do dummy comment
void* acc = (decode_clo(env8527))[3];
//not do dummy comment
void* car = (decode_clo(env8527))[2];
//not do dummy comment
void* foldl = (decode_clo(env8527))[1];

//if-clause
bool if_guard8781 = is_true(a8356);
if(if_guard8781)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8430);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8783 = alloc_clo(lam8524_fptr, 6);

//setting env list
clo8783[1] = foldl;
clo8783[2] = acc;
clo8783[3] = fun;
clo8783[4] = kont8430;
clo8783[5] = lst;
clo8783[6] = cdr;
void* f8433 = encode_clo(clo8783);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
function_ptr();
return nullptr;
}

}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8528 = arg_buffer[1];
//reading env and args
void* kont8430 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8785 = alloc_clo(lam8526_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8785[1] = foldl;
clo8785[2] = car;
clo8785[3] = acc;
clo8785[4] = fun;
clo8785[5] = kont8430;
clo8785[6] = lst;
clo8785[7] = cdr;
void* f8434 = encode_clo(clo8785);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8529_fptr() // lam8529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8530 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8530))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8530))[2];
//not do dummy comment
void* kont8435 = (decode_clo(env8530))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8435;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8532))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8532))[4];
//not do dummy comment
void* kont8435 = (decode_clo(env8532))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8532))[2];
//not do dummy comment
void* cons = (decode_clo(env8532))[1];

//creating new closure instance
void** clo8787 = alloc_clo(lam8529_fptr, 3);

//setting env list
clo8787[1] = kont8435;
clo8787[2] = reverse_u45helper;
clo8787[3] = a8361;
void* f8436 = encode_clo(clo8787);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8534))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8534))[5];
//not do dummy comment
void* kont8435 = (decode_clo(env8534))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8534))[3];
//not do dummy comment
void* car = (decode_clo(env8534))[2];
//not do dummy comment
void* cons = (decode_clo(env8534))[1];

//creating new closure instance
void** clo8789 = alloc_clo(lam8531_fptr, 5);

//setting env list
clo8789[1] = cons;
clo8789[2] = lst2;
clo8789[3] = kont8435;
clo8789[4] = reverse_u45helper;
clo8789[5] = a8361;
void* f8437 = encode_clo(clo8789);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
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
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8536))[7];
//not do dummy comment
void* lst = (decode_clo(env8536))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8536))[5];
//not do dummy comment
void* kont8435 = (decode_clo(env8536))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8536))[3];
//not do dummy comment
void* car = (decode_clo(env8536))[2];
//not do dummy comment
void* cons = (decode_clo(env8536))[1];

//if-clause
bool if_guard8790 = is_true(a8360);
if(if_guard8790)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8435);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8792 = alloc_clo(lam8533_fptr, 6);

//setting env list
clo8792[1] = cons;
clo8792[2] = car;
clo8792[3] = lst2;
clo8792[4] = kont8435;
clo8792[5] = reverse_u45helper;
clo8792[6] = lst;
void* f8438 = encode_clo(clo8792);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
function_ptr();
return nullptr;
}

}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8537 = arg_buffer[1];
//reading env and args
void* kont8435 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8794 = alloc_clo(lam8535_fptr, 7);

//setting env list
clo8794[1] = cons;
clo8794[2] = car;
clo8794[3] = lst2;
clo8794[4] = kont8435;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8794[5] = reverse_u45helper;
clo8794[6] = lst;
clo8794[7] = cdr;
void* f8439 = encode_clo(clo8794);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8538_fptr() // lam8538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8539 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8539))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8539))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8539))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8440;
arg_buffer[3] = lst;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8540 = arg_buffer[1];
//reading env and args
void* kont8440 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8796 = alloc_clo(lam8538_fptr, 3);

//setting env list
clo8796[1] = kont8440;
clo8796[2] = reverse_u45helper;
clo8796[3] = lst;
void* f8441 = encode_clo(clo8796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8441;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8541_fptr() // lam8541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8542 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8442 = (decode_clo(env8542))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8442);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8442))[0]);
//call next proc using a function pointer
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8442 = (decode_clo(env8544))[4];
//not do dummy comment
void* a8368 = (decode_clo(env8544))[3];
//not do dummy comment
void* a8370 = (decode_clo(env8544))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8544))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8442;
arg_buffer[3] = a8368;
arg_buffer[4] = a8370;
arg_buffer[5] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8442 = (decode_clo(env8546))[6];
//not do dummy comment
void* a8368 = (decode_clo(env8546))[5];
//not do dummy comment
void* a8370 = (decode_clo(env8546))[4];
//not do dummy comment
void* cons = (decode_clo(env8546))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8546))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8546))[1];

//creating new closure instance
void** clo8798 = alloc_clo(lam8543_fptr, 4);

//setting env list
clo8798[1] = take_u45helper;
clo8798[2] = a8370;
clo8798[3] = a8368;
clo8798[4] = kont8442;
void* f8444 = encode_clo(clo8798);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8442 = (decode_clo(env8548))[7];
//not do dummy comment
void* lst = (decode_clo(env8548))[6];
//not do dummy comment
void* a8368 = (decode_clo(env8548))[5];
//not do dummy comment
void* car = (decode_clo(env8548))[4];
//not do dummy comment
void* cons = (decode_clo(env8548))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8548))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8548))[1];

//creating new closure instance
void** clo8800 = alloc_clo(lam8545_fptr, 6);

//setting env list
clo8800[1] = lst2;
clo8800[2] = take_u45helper;
clo8800[3] = cons;
clo8800[4] = a8370;
clo8800[5] = a8368;
clo8800[6] = kont8442;
void* f8445 = encode_clo(clo8800);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
function_ptr();
return nullptr;
}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8442 = (decode_clo(env8551))[8];
//not do dummy comment
void* lst = (decode_clo(env8551))[7];
//not do dummy comment
void* cons = (decode_clo(env8551))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8551))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8551))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8551))[3];
//not do dummy comment
void* n = (decode_clo(env8551))[2];
//not do dummy comment
void* car = (decode_clo(env8551))[1];
mpz_t* mpzvar8801 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8801, "1", 10);
void* a8369 = encode_mpz(mpzvar8801);

//creating new closure instance
void** clo8803 = alloc_clo(lam8547_fptr, 7);

//setting env list
clo8803[1] = lst2;
clo8803[2] = take_u45helper;
clo8803[3] = cons;
clo8803[4] = car;
clo8803[5] = a8368;
clo8803[6] = lst;
clo8803[7] = kont8442;
void* f8446 = encode_clo(clo8803);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8446);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8553))[10];
//not do dummy comment
void* kont8442 = (decode_clo(env8553))[9];
//not do dummy comment
void* lst = (decode_clo(env8553))[8];
//not do dummy comment
void* reverse = (decode_clo(env8553))[7];
//not do dummy comment
void* cons = (decode_clo(env8553))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8553))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8553))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8553))[3];
//not do dummy comment
void* n = (decode_clo(env8553))[2];
//not do dummy comment
void* car = (decode_clo(env8553))[1];

//if-clause
bool if_guard8804 = is_true(a8366);
if(if_guard8804)
{

//creating new closure instance
void** clo8806 = alloc_clo(lam8541_fptr, 1);

//setting env list
clo8806[1] = kont8442;
void* f8443 = encode_clo(clo8806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8443;
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
void** clo8808 = alloc_clo(lam8550_fptr, 8);

//setting env list
clo8808[1] = car;
clo8808[2] = n;
clo8808[3] = lst2;
clo8808[4] = take_u45helper;
clo8808[5] = _u45;
clo8808[6] = cons;
clo8808[7] = lst;
clo8808[8] = kont8442;
void* f8447 = encode_clo(clo8808);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8447);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8447))[0]);
function_ptr();
return nullptr;
}

}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8555 = arg_buffer[1];
//reading env and args
void* kont8442 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8809 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8809, "0", 10);
void* a8365 = encode_mpz(mpzvar8809);

//creating new closure instance
void** clo8811 = alloc_clo(lam8552_fptr, 10);

//setting env list
clo8811[1] = car;
clo8811[2] = n;
clo8811[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8811[4] = take_u45helper;
clo8811[5] = _u45;
clo8811[6] = cons;
clo8811[7] = reverse;
clo8811[8] = lst;
clo8811[9] = kont8442;
clo8811[10] = cdr;
void* f8448 = encode_clo(clo8811);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8448);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

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
void* lst = (decode_clo(env8557))[4];
//not do dummy comment
void* kont8449 = (decode_clo(env8557))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8557))[2];
//not do dummy comment
void* n = (decode_clo(env8557))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8449;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8556 = encode_clo(alloc_clo(lam8556_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8558 = arg_buffer[1];
//reading env and args
void* kont8449 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8813 = alloc_clo(lam8556_fptr, 4);

//setting env list
clo8813[1] = n;
clo8813[2] = take_u45helper;
clo8813[3] = kont8449;
clo8813[4] = lst;
void* f8450 = encode_clo(clo8813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8560_fptr() // lam8560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8561 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8561))[3];
//not do dummy comment
void* kont8451 = (decode_clo(env8561))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8561))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8451);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8563))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8563))[3];
//not do dummy comment
void* kont8451 = (decode_clo(env8563))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8563))[1];

//creating new closure instance
void** clo8815 = alloc_clo(lam8560_fptr, 3);

//setting env list
clo8815[1] = a8376;
clo8815[2] = kont8451;
clo8815[3] = _u43;
void* f8452 = encode_clo(clo8815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8452;
arg_buffer[3] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

void* lam8565_fptr() // lam8565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8566))[5];
//not do dummy comment
void* lst = (decode_clo(env8566))[4];
//not do dummy comment
void* length = (decode_clo(env8566))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8566))[2];
//not do dummy comment
void* kont8451 = (decode_clo(env8566))[1];

//if-clause
bool if_guard8816 = is_true(a8374);
if(if_guard8816)
{
mpz_t* mpzvar8817 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8817, "0", 10);
void* xy8375 = encode_mpz(mpzvar8817);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8451);
arg_buffer[2] = xy8375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8818 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8818, "1", 10);
void* a8376 = encode_mpz(mpzvar8818);

//creating new closure instance
void** clo8820 = alloc_clo(lam8562_fptr, 4);

//setting env list
clo8820[1] = a8376;
clo8820[2] = kont8451;
clo8820[3] = _u43;
clo8820[4] = length;
void* f8453 = encode_clo(clo8820);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
function_ptr();
return nullptr;
}

}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8567 = arg_buffer[1];
//reading env and args
void* kont8451 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8822 = alloc_clo(lam8565_fptr, 5);

//setting env list
clo8822[1] = kont8451;
clo8822[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8822[3] = length;
clo8822[4] = lst;
clo8822[5] = cdr;
void* f8454 = encode_clo(clo8822);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8454);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8568_fptr() // lam8568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8455 = (decode_clo(env8569))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8455);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
//call next proc using a function pointer
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8382 = (decode_clo(env8571))[3];
//not do dummy comment
void* cons = (decode_clo(env8571))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8571))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8455);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env8573))[5];
//not do dummy comment
void* map = (decode_clo(env8573))[4];
//not do dummy comment
void* a8382 = (decode_clo(env8573))[3];
//not do dummy comment
void* cons = (decode_clo(env8573))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8573))[1];

//creating new closure instance
void** clo8824 = alloc_clo(lam8570_fptr, 3);

//setting env list
clo8824[1] = kont8455;
clo8824[2] = cons;
clo8824[3] = a8382;
void* f8457 = encode_clo(clo8824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8457;
arg_buffer[3] = proc;
arg_buffer[4] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void* lam8574_fptr() // lam8574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8575 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8575))[6];
//not do dummy comment
void* lst = (decode_clo(env8575))[5];
//not do dummy comment
void* map = (decode_clo(env8575))[4];
//not do dummy comment
void* proc = (decode_clo(env8575))[3];
//not do dummy comment
void* cons = (decode_clo(env8575))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8575))[1];

//creating new closure instance
void** clo8826 = alloc_clo(lam8572_fptr, 5);

//setting env list
clo8826[1] = kont8455;
clo8826[2] = cons;
clo8826[3] = a8382;
clo8826[4] = map;
clo8826[5] = proc;
void* f8458 = encode_clo(clo8826);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
return nullptr;
}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void* lam8576_fptr() // lam8576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8577 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8577))[6];
//not do dummy comment
void* lst = (decode_clo(env8577))[5];
//not do dummy comment
void* map = (decode_clo(env8577))[4];
//not do dummy comment
void* proc = (decode_clo(env8577))[3];
//not do dummy comment
void* cons = (decode_clo(env8577))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8577))[1];

//creating new closure instance
void** clo8828 = alloc_clo(lam8574_fptr, 6);

//setting env list
clo8828[1] = kont8455;
clo8828[2] = cons;
clo8828[3] = proc;
clo8828[4] = map;
clo8828[5] = lst;
clo8828[6] = cdr;
void* f8459 = encode_clo(clo8828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8459;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8579))[8];
//not do dummy comment
void* map = (decode_clo(env8579))[7];
//not do dummy comment
void* proc = (decode_clo(env8579))[6];
//not do dummy comment
void* car = (decode_clo(env8579))[5];
//not do dummy comment
void* list = (decode_clo(env8579))[4];
//not do dummy comment
void* cdr = (decode_clo(env8579))[3];
//not do dummy comment
void* cons = (decode_clo(env8579))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8579))[1];

//if-clause
bool if_guard8829 = is_true(a8379);
if(if_guard8829)
{

//creating new closure instance
void** clo8831 = alloc_clo(lam8568_fptr, 1);

//setting env list
clo8831[1] = kont8455;
void* f8456 = encode_clo(clo8831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8833 = alloc_clo(lam8576_fptr, 6);

//setting env list
clo8833[1] = kont8455;
clo8833[2] = cons;
clo8833[3] = proc;
clo8833[4] = map;
clo8833[5] = lst;
clo8833[6] = cdr;
void* f8460 = encode_clo(clo8833);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8460);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
function_ptr();
return nullptr;
}

}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8580 = arg_buffer[1];
//reading env and args
void* kont8455 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8835 = alloc_clo(lam8578_fptr, 8);

//setting env list
clo8835[1] = kont8455;
clo8835[2] = cons;
clo8835[3] = cdr;
clo8835[4] = list;
clo8835[5] = car;
clo8835[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8835[7] = map;
clo8835[8] = lst;
void* f8461 = encode_clo(clo8835);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8581_fptr() // lam8581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8462 = (decode_clo(env8582))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8462);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8462 = (decode_clo(env8584))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8584))[2];
//not do dummy comment
void* cons = (decode_clo(env8584))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8462);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8462 = (decode_clo(env8586))[5];
//not do dummy comment
void* op = (decode_clo(env8586))[4];
//not do dummy comment
void* a8389 = (decode_clo(env8586))[3];
//not do dummy comment
void* filter = (decode_clo(env8586))[2];
//not do dummy comment
void* cons = (decode_clo(env8586))[1];

//creating new closure instance
void** clo8837 = alloc_clo(lam8583_fptr, 3);

//setting env list
clo8837[1] = cons;
clo8837[2] = a8389;
clo8837[3] = kont8462;
void* f8464 = encode_clo(clo8837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8464;
arg_buffer[3] = op;
arg_buffer[4] = a8390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8588))[6];
//not do dummy comment
void* lst = (decode_clo(env8588))[5];
//not do dummy comment
void* kont8462 = (decode_clo(env8588))[4];
//not do dummy comment
void* op = (decode_clo(env8588))[3];
//not do dummy comment
void* filter = (decode_clo(env8588))[2];
//not do dummy comment
void* cons = (decode_clo(env8588))[1];

//creating new closure instance
void** clo8839 = alloc_clo(lam8585_fptr, 5);

//setting env list
clo8839[1] = cons;
clo8839[2] = filter;
clo8839[3] = a8389;
clo8839[4] = op;
clo8839[5] = kont8462;
void* f8465 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8462 = (decode_clo(env8590))[3];
//not do dummy comment
void* op = (decode_clo(env8590))[2];
//not do dummy comment
void* filter = (decode_clo(env8590))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8462;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8592))[7];
//not do dummy comment
void* lst = (decode_clo(env8592))[6];
//not do dummy comment
void* kont8462 = (decode_clo(env8592))[5];
//not do dummy comment
void* op = (decode_clo(env8592))[4];
//not do dummy comment
void* cons = (decode_clo(env8592))[3];
//not do dummy comment
void* filter = (decode_clo(env8592))[2];
//not do dummy comment
void* car = (decode_clo(env8592))[1];

//if-clause
bool if_guard8840 = is_true(a8388);
if(if_guard8840)
{

//creating new closure instance
void** clo8842 = alloc_clo(lam8587_fptr, 6);

//setting env list
clo8842[1] = cons;
clo8842[2] = filter;
clo8842[3] = op;
clo8842[4] = kont8462;
clo8842[5] = lst;
clo8842[6] = cdr;
void* f8466 = encode_clo(clo8842);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8844 = alloc_clo(lam8589_fptr, 3);

//setting env list
clo8844[1] = filter;
clo8844[2] = op;
clo8844[3] = kont8462;
void* f8467 = encode_clo(clo8844);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

}

void* lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void* lam8593_fptr() // lam8593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8594 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8594))[7];
//not do dummy comment
void* lst = (decode_clo(env8594))[6];
//not do dummy comment
void* kont8462 = (decode_clo(env8594))[5];
//not do dummy comment
void* op = (decode_clo(env8594))[4];
//not do dummy comment
void* cons = (decode_clo(env8594))[3];
//not do dummy comment
void* filter = (decode_clo(env8594))[2];
//not do dummy comment
void* car = (decode_clo(env8594))[1];

//creating new closure instance
void** clo8846 = alloc_clo(lam8591_fptr, 7);

//setting env list
clo8846[1] = car;
clo8846[2] = filter;
clo8846[3] = cons;
clo8846[4] = op;
clo8846[5] = kont8462;
clo8846[6] = lst;
clo8846[7] = cdr;
void* f8468 = encode_clo(clo8846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8468;
arg_buffer[3] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8596))[8];
//not do dummy comment
void* kont8462 = (decode_clo(env8596))[7];
//not do dummy comment
void* op = (decode_clo(env8596))[6];
//not do dummy comment
void* cons = (decode_clo(env8596))[5];
//not do dummy comment
void* list = (decode_clo(env8596))[4];
//not do dummy comment
void* cdr = (decode_clo(env8596))[3];
//not do dummy comment
void* filter = (decode_clo(env8596))[2];
//not do dummy comment
void* car = (decode_clo(env8596))[1];

//if-clause
bool if_guard8847 = is_true(a8385);
if(if_guard8847)
{

//creating new closure instance
void** clo8849 = alloc_clo(lam8581_fptr, 1);

//setting env list
clo8849[1] = kont8462;
void* f8463 = encode_clo(clo8849);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8463;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8851 = alloc_clo(lam8593_fptr, 7);

//setting env list
clo8851[1] = car;
clo8851[2] = filter;
clo8851[3] = cons;
clo8851[4] = op;
clo8851[5] = kont8462;
clo8851[6] = lst;
clo8851[7] = cdr;
void* f8469 = encode_clo(clo8851);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
function_ptr();
return nullptr;
}

}

void* lam8595 = encode_clo(alloc_clo(lam8595_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8597 = arg_buffer[1];
//reading env and args
void* kont8462 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8853 = alloc_clo(lam8595_fptr, 8);

//setting env list
clo8853[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8853[2] = filter;
clo8853[3] = cdr;
clo8853[4] = list;
clo8853[5] = cons;
clo8853[6] = op;
clo8853[7] = kont8462;
clo8853[8] = lst;
void* f8470 = encode_clo(clo8853);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8598_fptr() // lam8598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8599 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8395 = (decode_clo(env8599))[3];
//not do dummy comment
void* drop = (decode_clo(env8599))[2];
//not do dummy comment
void* kont8471 = (decode_clo(env8599))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8471;
arg_buffer[3] = a8395;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8598 = encode_clo(alloc_clo(lam8598_fptr, 0));

void* lam8601_fptr() // lam8601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8602 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8602))[4];
//not do dummy comment
void* n = (decode_clo(env8602))[3];
//not do dummy comment
void* kont8471 = (decode_clo(env8602))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8602))[1];
mpz_t* mpzvar8854 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8854, "1", 10);
void* a8396 = encode_mpz(mpzvar8854);

//creating new closure instance
void** clo8856 = alloc_clo(lam8598_fptr, 3);

//setting env list
clo8856[1] = kont8471;
clo8856[2] = drop;
clo8856[3] = a8395;
void* f8472 = encode_clo(clo8856);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8604))[6];
//not do dummy comment
void* n = (decode_clo(env8604))[5];
//not do dummy comment
void* kont8471 = (decode_clo(env8604))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8604))[3];
//not do dummy comment
void* lst = (decode_clo(env8604))[2];
//not do dummy comment
void* drop = (decode_clo(env8604))[1];

//if-clause
bool if_guard8857 = is_true(a8394);
if(if_guard8857)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8471);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8471))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8859 = alloc_clo(lam8601_fptr, 4);

//setting env list
clo8859[1] = _u45;
clo8859[2] = kont8471;
clo8859[3] = n;
clo8859[4] = drop;
void* f8473 = encode_clo(clo8859);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}

}

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8606 = arg_buffer[1];
//reading env and args
void* kont8471 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8860 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8860, "0", 10);
void* a8393 = encode_mpz(mpzvar8860);

//creating new closure instance
void** clo8862 = alloc_clo(lam8603_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8862[1] = drop;
clo8862[2] = lst;
clo8862[3] = _u45;
clo8862[4] = kont8471;
clo8862[5] = n;
clo8862[6] = cdr;
void* f8474 = encode_clo(clo8862);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8607_fptr() // lam8607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8608 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8475 = (decode_clo(env8608))[3];
//not do dummy comment
void* a8399 = (decode_clo(env8608))[2];
//not do dummy comment
void* proc = (decode_clo(env8608))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8475;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8475 = (decode_clo(env8610))[5];
//not do dummy comment
void* foldr = (decode_clo(env8610))[4];
//not do dummy comment
void* a8399 = (decode_clo(env8610))[3];
//not do dummy comment
void* proc = (decode_clo(env8610))[2];
//not do dummy comment
void* acc = (decode_clo(env8610))[1];

//creating new closure instance
void** clo8864 = alloc_clo(lam8607_fptr, 3);

//setting env list
clo8864[1] = proc;
clo8864[2] = a8399;
clo8864[3] = kont8475;
void* f8476 = encode_clo(clo8864);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8476;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8612))[6];
//not do dummy comment
void* kont8475 = (decode_clo(env8612))[5];
//not do dummy comment
void* foldr = (decode_clo(env8612))[4];
//not do dummy comment
void* lst = (decode_clo(env8612))[3];
//not do dummy comment
void* proc = (decode_clo(env8612))[2];
//not do dummy comment
void* acc = (decode_clo(env8612))[1];

//creating new closure instance
void** clo8866 = alloc_clo(lam8609_fptr, 5);

//setting env list
clo8866[1] = acc;
clo8866[2] = proc;
clo8866[3] = a8399;
clo8866[4] = foldr;
clo8866[5] = kont8475;
void* f8477 = encode_clo(clo8866);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8614))[7];
//not do dummy comment
void* kont8475 = (decode_clo(env8614))[6];
//not do dummy comment
void* car = (decode_clo(env8614))[5];
//not do dummy comment
void* foldr = (decode_clo(env8614))[4];
//not do dummy comment
void* lst = (decode_clo(env8614))[3];
//not do dummy comment
void* proc = (decode_clo(env8614))[2];
//not do dummy comment
void* acc = (decode_clo(env8614))[1];

//if-clause
bool if_guard8867 = is_true(a8398);
if(if_guard8867)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8475);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8475))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8869 = alloc_clo(lam8611_fptr, 6);

//setting env list
clo8869[1] = acc;
clo8869[2] = proc;
clo8869[3] = lst;
clo8869[4] = foldr;
clo8869[5] = kont8475;
clo8869[6] = cdr;
void* f8478 = encode_clo(clo8869);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8478);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
function_ptr();
return nullptr;
}

}

void* lam8613 = encode_clo(alloc_clo(lam8613_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8615 = arg_buffer[1];
//reading env and args
void* kont8475 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8871 = alloc_clo(lam8613_fptr, 7);

//setting env list
clo8871[1] = acc;
clo8871[2] = proc;
clo8871[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8871[4] = foldr;
clo8871[5] = car;
clo8871[6] = kont8475;
clo8871[7] = cdr;
void* f8479 = encode_clo(clo8871);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8479);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8616_fptr() // lam8616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8617 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8480 = (decode_clo(env8617))[3];
//not do dummy comment
void* a8403 = (decode_clo(env8617))[2];
//not do dummy comment
void* cons = (decode_clo(env8617))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8480);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8480))[0]);
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8480 = (decode_clo(env8619))[5];
//not do dummy comment
void* append = (decode_clo(env8619))[4];
//not do dummy comment
void* a8403 = (decode_clo(env8619))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8619))[2];
//not do dummy comment
void* cons = (decode_clo(env8619))[1];

//creating new closure instance
void** clo8873 = alloc_clo(lam8616_fptr, 3);

//setting env list
clo8873[1] = cons;
clo8873[2] = a8403;
clo8873[3] = kont8480;
void* f8481 = encode_clo(clo8873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8481;
arg_buffer[3] = a8404;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8621))[6];
//not do dummy comment
void* kont8480 = (decode_clo(env8621))[5];
//not do dummy comment
void* append = (decode_clo(env8621))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8621))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8621))[2];
//not do dummy comment
void* cons = (decode_clo(env8621))[1];

//creating new closure instance
void** clo8875 = alloc_clo(lam8618_fptr, 5);

//setting env list
clo8875[1] = cons;
clo8875[2] = lst2;
clo8875[3] = a8403;
clo8875[4] = append;
clo8875[5] = kont8480;
void* f8482 = encode_clo(clo8875);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8623))[7];
//not do dummy comment
void* kont8480 = (decode_clo(env8623))[6];
//not do dummy comment
void* append = (decode_clo(env8623))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8623))[4];
//not do dummy comment
void* cons = (decode_clo(env8623))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8623))[2];
//not do dummy comment
void* car = (decode_clo(env8623))[1];

//if-clause
bool if_guard8876 = is_true(a8402);
if(if_guard8876)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8480);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8480))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8878 = alloc_clo(lam8620_fptr, 6);

//setting env list
clo8878[1] = cons;
clo8878[2] = lst1;
clo8878[3] = lst2;
clo8878[4] = append;
clo8878[5] = kont8480;
clo8878[6] = cdr;
void* f8483 = encode_clo(clo8878);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8483);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8483))[0]);
function_ptr();
return nullptr;
}

}

void* lam8622 = encode_clo(alloc_clo(lam8622_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8624 = arg_buffer[1];
//reading env and args
void* kont8480 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8880 = alloc_clo(lam8622_fptr, 7);

//setting env list
clo8880[1] = car;
clo8880[2] = lst1;
clo8880[3] = cons;
clo8880[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8880[5] = append;
clo8880[6] = kont8480;
clo8880[7] = cdr;
void* f8484 = encode_clo(clo8880);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8484);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8484))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* list_u45_u62set_fptr() // list->set 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8625 = arg_buffer[1];
//reading env and args
void* kont8485 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8406 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8485);
arg_buffer[2] = xy8406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8485))[0]);
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
void* _8626 = arg_buffer[1];
//reading env and args
void* kont8486 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8407 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8486);
arg_buffer[2] = xy8407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8486))[0]);
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
void* _8627 = arg_buffer[1];
//reading env and args
void* kont8487 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8408 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8487);
arg_buffer[2] = xy8408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8487))[0]);
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
void* _8628 = arg_buffer[1];
//reading env and args
void* kont8488 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8409 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8488);
arg_buffer[2] = xy8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8488))[0]);
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
void* _8629 = arg_buffer[1];
//reading env and args
void* kont8489 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8410 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8489);
arg_buffer[2] = xy8410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8489))[0]);
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
void* _8630 = arg_buffer[1];
//reading env and args
void* kont8490 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8411 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8490);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8490))[0]);
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
void* _8631 = arg_buffer[1];
//reading env and args
void* kont8491 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8412 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8491);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8491))[0]);
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
void* _8632 = arg_buffer[1];
//reading env and args
void* kont8492 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8413 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8492);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam8634_fptr() // lam8634 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8635 = arg_buffer[1];
//reading env and args
void* a8414 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8493 = (decode_clo(env8635))[2];
//not do dummy comment
void* _u42 = (decode_clo(env8635))[1];
mpz_t* mpzvar8881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8881, "10", 10);
void* a8415 = encode_mpz(mpzvar8881);

//clo-app
arg_buffer[2]=apply_prim__u42_2(a8414, a8415);
arg_buffer[1]=reinterpret_cast<void*>(kont8493);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
function_ptr();
return nullptr;
}

void* lam8634 = encode_clo(alloc_clo(lam8634_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8636 = arg_buffer[1];
//reading env and args
void* kont8493 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8883 = alloc_clo(lam8634_fptr, 2);

//setting env list
clo8883[1] = _u42;
clo8883[2] = kont8493;
void* f8494 = encode_clo(clo8883);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8494);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8494))[0]);
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8637_fptr() // lam8637 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8638 = arg_buffer[1];
//reading env and args
void* a8419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8495 = (decode_clo(env8638))[2];
//not do dummy comment
void* call = (decode_clo(env8638))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont8495;
arg_buffer[3] = a8419;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8637 = encode_clo(alloc_clo(lam8637_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8642 = arg_buffer[1];
//reading env and args
void* kont8495 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8884 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8884, "1", 10);
void* a8416 = encode_mpz(mpzvar8884);
mpz_t* mpzvar8885 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8885, "2", 10);
void* a8417 = encode_mpz(mpzvar8885);
mpz_t* mpzvar8886 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8886, "3", 10);
void* a8418 = encode_mpz(mpzvar8886);

//creating new closure instance
void** clo8888 = alloc_clo(lam8637_fptr, 2);

//setting env list
clo8888[1] = call;
clo8888[2] = kont8495;
void* f8496 = encode_clo(clo8888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8496;
arg_buffer[3] = a8416;
arg_buffer[4] = a8417;
arg_buffer[5] = a8418;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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

