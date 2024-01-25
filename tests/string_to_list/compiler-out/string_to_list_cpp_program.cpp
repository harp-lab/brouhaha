#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8665 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8664 = apply_prim__u43(lst8666);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8663);
arg_buffer[2] = x8664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8663))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8669 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8668 = apply_prim__u45(lst8670);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8667);
arg_buffer[2] = x8668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8667))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr() // * 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8673 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8672 = apply_prim__u42(lst8674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8671);
arg_buffer[2] = x8672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8671))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr() // / 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8677 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8676 = apply_prim__u47(lst8678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8675);
arg_buffer[2] = x8676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8675))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* _u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr() // = 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8681 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8680 = apply_prim__u61(lst8682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8679);
arg_buffer[2] = x8680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8679))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr() // > 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8685 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8684 = apply_prim__u62(lst8686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683);
arg_buffer[2] = x8684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* _u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr() // < 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8689 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8688 = apply_prim__u60(lst8690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8687);
arg_buffer[2] = x8688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8687))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* _u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr() // <= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8693 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8692 = apply_prim__u60_u61(lst8694);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8691);
arg_buffer[2] = x8692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8691))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* _u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr() // >= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8697 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8696 = apply_prim__u62_u61(lst8698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8695);
arg_buffer[2] = x8696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8695))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr() // modulo 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8701 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8700 = apply_prim_modulo(lst8702);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8699);
arg_buffer[2] = x8700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8699))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr() // null? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8705 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8704 = apply_prim_null_u63(lst8706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8703);
arg_buffer[2] = x8704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8703))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr() // equal? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8709 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8708 = apply_prim_equal_u63(lst8710);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8707);
arg_buffer[2] = x8708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8707))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr() // eq? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8713 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8712 = apply_prim_eq_u63(lst8714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8711);
arg_buffer[2] = x8712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr() // cons 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8717 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr() // car 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8721 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr() // cdr 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8725 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr() // float->int 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8729 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr() // int->float 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8733 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr() // hash 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8737 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr() // hash-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8741 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr() // hash-set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8745 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr() // hash-keys 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8749 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8753 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr() // hash-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8757 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8761 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr() // set->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8765 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8763 = prim_car(lst);
void* lst8766 = prim_cdr(lst);
void* x8764 = apply_prim_set_u45_u62list(lst8766);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8763);
arg_buffer[2] = x8764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8763))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr() // list->set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8769 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8767 = prim_car(lst);
void* lst8770 = prim_cdr(lst);
void* x8768 = apply_prim_list_u45_u62set(lst8770);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8767);
arg_buffer[2] = x8768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8767))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr() // set-add 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8773 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8771 = prim_car(lst);
void* lst8774 = prim_cdr(lst);
void* x8772 = apply_prim_set_u45add(lst8774);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8771);
arg_buffer[2] = x8772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8771))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr() // set-member? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8777 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8775 = prim_car(lst);
void* lst8778 = prim_cdr(lst);
void* x8776 = apply_prim_set_u45member_u63(lst8778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775);
arg_buffer[2] = x8776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr() // set-remove 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8781 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8779 = prim_car(lst);
void* lst8782 = prim_cdr(lst);
void* x8780 = apply_prim_set_u45remove(lst8782);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8779);
arg_buffer[2] = x8780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8779))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr() // set-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8785 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8783 = prim_car(lst);
void* lst8786 = prim_cdr(lst);
void* x8784 = apply_prim_set_u45count(lst8786);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8783);
arg_buffer[2] = x8784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8783))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr() // string? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8789 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8787 = prim_car(lst);
void* lst8790 = prim_cdr(lst);
void* x8788 = apply_prim_string_u63(lst8790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8787);
arg_buffer[2] = x8788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8787))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr() // string-length 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8793 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8791 = prim_car(lst);
void* lst8794 = prim_cdr(lst);
void* x8792 = apply_prim_string_u45length(lst8794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8791);
arg_buffer[2] = x8792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8791))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr() // string-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8797 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8795 = prim_car(lst);
void* lst8798 = prim_cdr(lst);
void* x8796 = apply_prim_string_u45ref(lst8798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8795);
arg_buffer[2] = x8796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8795))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr() // substring 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8801 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8799 = prim_car(lst);
void* lst8802 = prim_cdr(lst);
void* x8800 = apply_prim_substring(lst8802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8799);
arg_buffer[2] = x8800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8799))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr() // string-append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8805 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8803 = prim_car(lst);
void* lst8806 = prim_cdr(lst);
void* x8804 = apply_prim_string_u45append(lst8806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8803);
arg_buffer[2] = x8804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8803))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr() // string->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8809 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8807 = prim_car(lst);
void* lst8810 = prim_cdr(lst);
void* x8808 = apply_prim_string_u45_u62list(lst8810);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8807);
arg_buffer[2] = x8808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8807))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr() // exact-floor 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8813 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8811 = prim_car(lst);
void* lst8814 = prim_cdr(lst);
void* x8812 = apply_prim_exact_u45floor(lst8814);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8811);
arg_buffer[2] = x8812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8811))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr() // exact-ceiling 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8817 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8815 = prim_car(lst);
void* lst8818 = prim_cdr(lst);
void* x8816 = apply_prim_exact_u45ceiling(lst8818);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8815);
arg_buffer[2] = x8816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8815))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr() // exact-round 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8821 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8819 = prim_car(lst);
void* lst8822 = prim_cdr(lst);
void* x8820 = apply_prim_exact_u45round(lst8822);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8819);
arg_buffer[2] = x8820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8819))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr() // abs 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8825 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8823 = prim_car(lst);
void* lst8826 = prim_cdr(lst);
void* x8824 = apply_prim_abs(lst8826);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8823);
arg_buffer[2] = x8824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8823))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8829 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8827 = prim_car(lst);
void* lst8830 = prim_cdr(lst);
void* x8828 = apply_prim_max(lst8830);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8827);
arg_buffer[2] = x8828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8827))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr() // min 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8833 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8831 = prim_car(lst);
void* lst8834 = prim_cdr(lst);
void* x8832 = apply_prim_min(lst8834);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8831);
arg_buffer[2] = x8832;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8831))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr() // expt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8837 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8835 = prim_car(lst);
void* lst8838 = prim_cdr(lst);
void* x8836 = apply_prim_expt(lst8838);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8835);
arg_buffer[2] = x8836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8835))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr() // sqrt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8841 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8839 = prim_car(lst);
void* lst8842 = prim_cdr(lst);
void* x8840 = apply_prim_sqrt(lst8842);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8839);
arg_buffer[2] = x8840;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8839))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr() // remainder 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8845 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8843 = prim_car(lst);
void* lst8846 = prim_cdr(lst);
void* x8844 = apply_prim_remainder(lst8846);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8843);
arg_buffer[2] = x8844;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8843))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr() // quotient 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8849 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8848 = apply_prim_quotient(lst8850);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8847);
arg_buffer[2] = x8848;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8847))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr() // random 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8853 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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
void* x8852 = apply_prim_random(lst8854);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8851);
arg_buffer[2] = x8852;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8851))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr() // symbol? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8857 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8855 = prim_car(lst);
void* lst8858 = prim_cdr(lst);
void* x8856 = apply_prim_symbol_u63(lst8858);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8855);
arg_buffer[2] = x8856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8855))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr() // pair? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8861 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8859 = prim_car(lst);
void* lst8862 = prim_cdr(lst);
void* x8860 = apply_prim_pair_u63(lst8862);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8859);
arg_buffer[2] = x8860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8859))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr() // positive? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8865 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8863 = prim_car(lst);
void* lst8866 = prim_cdr(lst);
void* x8864 = apply_prim_positive_u63(lst8866);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8863);
arg_buffer[2] = x8864;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr() // negative? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8869 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* lst = nullptr;
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

void* kont8867 = prim_car(lst);
void* lst8870 = prim_cdr(lst);
void* x8868 = apply_prim_negative_u63(lst8870);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8867);
arg_buffer[2] = x8868;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8867))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8489 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* x = nullptr;
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

void* kont8397 = prim_car(x);
void* x8487 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8397);
arg_buffer[2] = x8487;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8397))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8490_fptr() // lam8490 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8491 = arg_buffer[1];
//reading env and args
void* a8317 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8491);
void* a8315 = decode_clo_array[3];
void* kont8398 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8398;
arg_buffer[3] = a8315;
arg_buffer[4] = a8317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8490 = encode_clo(alloc_clo(lam8490_fptr, 0));

void even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8494 = arg_buffer[1];
//reading env and args
void* kont8398 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8871 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8871, "0", 10);
void* a8315 = encode_mpz(mpzvar8871);
mpz_t* mpzvar8872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8872, "2", 10);
void* a8316 = encode_mpz(mpzvar8872);

//creating new closure instance
void** clo8873 = alloc_clo(lam8490_fptr, 3);

//setting env list
clo8873[1] = equal_u63;
clo8873[2] = kont8398;
clo8873[3] = a8315;
void* f8399 = encode_clo(clo8873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8399;
arg_buffer[3] = x;
arg_buffer[4] = a8316;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8495_fptr() // lam8495 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8496 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8496);
void* a8318 = decode_clo_array[3];
void* kont8400 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8400;
arg_buffer[3] = a8318;
arg_buffer[4] = a8320;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8495 = encode_clo(alloc_clo(lam8495_fptr, 0));

void odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8499 = arg_buffer[1];
//reading env and args
void* kont8400 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8874 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8874, "1", 10);
void* a8318 = encode_mpz(mpzvar8874);
mpz_t* mpzvar8875 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8875, "2", 10);
void* a8319 = encode_mpz(mpzvar8875);

//creating new closure instance
void** clo8876 = alloc_clo(lam8495_fptr, 3);

//setting env list
clo8876[1] = equal_u63;
clo8876[2] = kont8400;
clo8876[3] = a8318;
void* f8401 = encode_clo(clo8876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8401;
arg_buffer[3] = x;
arg_buffer[4] = a8319;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void lam8500_fptr() // lam8500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8501 = arg_buffer[1];
//reading env and args
void* xy8323 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8501);
void* kont8402 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8402);
arg_buffer[2] = xy8323;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8402))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8500 = encode_clo(alloc_clo(lam8500_fptr, 0));

void lam8502_fptr() // lam8502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8503 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8503);
void* kont8402 = decode_clo_array[3];
void* a8324 = decode_clo_array[2];
void* list_u45ref = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list_u45ref);
arg_buffer[2] = kont8402;
arg_buffer[3] = a8324;
arg_buffer[4] = a8326;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8502 = encode_clo(alloc_clo(lam8502_fptr, 0));

void lam8505_fptr() // lam8505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8506 = arg_buffer[1];
//reading env and args
void* a8324 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8506);
void* kont8402 = decode_clo_array[4];
void* list_u45ref = decode_clo_array[3];
void* n = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8877 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8877, "1", 10);
void* a8325 = encode_mpz(mpzvar8877);

//creating new closure instance
void** clo8878 = alloc_clo(lam8502_fptr, 3);

//setting env list
clo8878[1] = list_u45ref;
clo8878[2] = a8324;
clo8878[3] = kont8402;
void* f8404 = encode_clo(clo8878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8404;
arg_buffer[3] = n;
arg_buffer[4] = a8325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8505 = encode_clo(alloc_clo(lam8505_fptr, 0));

void lam8507_fptr() // lam8507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8508 = arg_buffer[1];
//reading env and args
void* a8322 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8508);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8402 = decode_clo_array[5];
void* list_u45ref = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8879 = is_true(a8322);
if(if_guard8879)
{

//creating new closure instance
void** clo8880 = alloc_clo(lam8500_fptr, 1);

//setting env list
clo8880[1] = kont8402;
void* f8403 = encode_clo(clo8880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8403;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8881 = alloc_clo(lam8505_fptr, 4);

//setting env list
clo8881[1] = _u45;
clo8881[2] = n;
clo8881[3] = list_u45ref;
clo8881[4] = kont8402;
void* f8405 = encode_clo(clo8881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8405;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8507 = encode_clo(alloc_clo(lam8507_fptr, 0));

void list_u45ref_fptr() // list-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8510 = arg_buffer[1];
//reading env and args
void* kont8402 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8882 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8882, "0", 10);
void* a8321 = encode_mpz(mpzvar8882);

//creating new closure instance
void** clo8883 = alloc_clo(lam8507_fptr, 7);

//setting env list
clo8883[1] = car;
clo8883[2] = n;
clo8883[3] = _u45;
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

clo8883[4] = list_u45ref;
clo8883[5] = kont8402;
clo8883[6] = lst;
clo8883[7] = cdr;
void* f8406 = encode_clo(clo8883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8406;
arg_buffer[3] = a8321;
arg_buffer[4] = n;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8511_fptr() // lam8511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8512 = arg_buffer[1];
//reading env and args
void* xy8328 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8512);
void* f8411 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f8411);
arg_buffer[2] = xy8328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8411))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8511 = encode_clo(alloc_clo(lam8511_fptr, 0));

void lam8513_fptr() // lam8513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8514 = arg_buffer[1];
//reading env and args
void* xy8329 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8514);
void* f8411 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f8411);
arg_buffer[2] = xy8329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8411))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8513 = encode_clo(alloc_clo(lam8513_fptr, 0));

void lam8516_fptr() // lam8516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8517 = arg_buffer[1];
//reading env and args
void* a8334 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8517);
void* member = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8407 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member);
arg_buffer[2] = kont8407;
arg_buffer[3] = item;
arg_buffer[4] = a8334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8516 = encode_clo(alloc_clo(lam8516_fptr, 0));

void lam8518_fptr() // lam8518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8519 = arg_buffer[1];
//reading env and args
void* a8333 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8519);
void* cdr = decode_clo_array[5];
void* member = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8407 = decode_clo_array[1];

//if-clause
bool if_guard8884 = is_true(a8333);
if(if_guard8884)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8407);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8407))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8885 = alloc_clo(lam8516_fptr, 3);

//setting env list
clo8885[1] = kont8407;
clo8885[2] = item;
clo8885[3] = member;
void* f8408 = encode_clo(clo8885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8408;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8518 = encode_clo(alloc_clo(lam8518_fptr, 0));

void lam8520_fptr() // lam8520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8521 = arg_buffer[1];
//reading env and args
void* a8332 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8521);
void* cdr = decode_clo_array[6];
void* member = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* item = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* kont8407 = decode_clo_array[1];

//creating new closure instance
void** clo8886 = alloc_clo(lam8518_fptr, 5);

//setting env list
clo8886[1] = kont8407;
clo8886[2] = item;
clo8886[3] = lst;
clo8886[4] = member;
clo8886[5] = cdr;
void* f8409 = encode_clo(clo8886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8409;
arg_buffer[3] = item;
arg_buffer[4] = a8332;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void lam8522_fptr() // lam8522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8523 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8523);
void* cdr = decode_clo_array[7];
void* member = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8407 = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8887 = is_true(a8330);
if(if_guard8887)
{
void* xy8331 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8407);
arg_buffer[2] = xy8331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8407))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8888 = alloc_clo(lam8520_fptr, 6);

//setting env list
clo8888[1] = kont8407;
clo8888[2] = equal_u63;
clo8888[3] = item;
clo8888[4] = lst;
clo8888[5] = member;
clo8888[6] = cdr;
void* f8410 = encode_clo(clo8888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8410;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void lam8524_fptr() // lam8524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8525);
void* cdr = decode_clo_array[8];
void* member = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* null_u63 = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8407 = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8889 = alloc_clo(lam8522_fptr, 7);

//setting env list
clo8889[1] = car;
clo8889[2] = kont8407;
clo8889[3] = equal_u63;
clo8889[4] = item;
clo8889[5] = lst;
clo8889[6] = member;
clo8889[7] = cdr;
void* f8411 = encode_clo(clo8889);



//if-clause
bool if_guard8890 = is_true(a8327);
if(if_guard8890)
{

//creating new closure instance
void** clo8891 = alloc_clo(lam8511_fptr, 1);

//setting env list
clo8891[1] = f8411;
void* f8412 = encode_clo(clo8891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8412;
arg_buffer[3] = item;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8892 = alloc_clo(lam8513_fptr, 1);

//setting env list
clo8892[1] = f8411;
void* f8413 = encode_clo(clo8892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8413;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8524 = encode_clo(alloc_clo(lam8524_fptr, 0));

void member_fptr() // member 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8526 = arg_buffer[1];
//reading env and args
void* kont8407 = arg_buffer[2];
void* item = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8893 = alloc_clo(lam8524_fptr, 8);

//setting env list
clo8893[1] = car;
clo8893[2] = kont8407;
clo8893[3] = equal_u63;
clo8893[4] = item;
clo8893[5] = null_u63;
clo8893[6] = lst;
void* member = encode_clo(alloc_clo(member_fptr, 0));

clo8893[7] = member;
clo8893[8] = cdr;
void* f8414 = encode_clo(clo8893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8414;
arg_buffer[3] = item;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8529_fptr() // lam8529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8530 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8530);
void* kont8415 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8415;
arg_buffer[3] = x;
arg_buffer[4] = a8340;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8529 = encode_clo(alloc_clo(lam8529_fptr, 0));

void lam8531_fptr() // lam8531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8532 = arg_buffer[1];
//reading env and args
void* a8338 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8532);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* kont8415 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8894 = is_true(a8338);
if(if_guard8894)
{
void* xy8339 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[2] = xy8339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8895 = alloc_clo(lam8529_fptr, 3);

//setting env list
clo8895[1] = member_u63;
clo8895[2] = x;
clo8895[3] = kont8415;
void* f8416 = encode_clo(clo8895);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void lam8533_fptr() // lam8533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8534 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8534);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* kont8415 = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//creating new closure instance
void** clo8896 = alloc_clo(lam8531_fptr, 5);

//setting env list
clo8896[1] = member_u63;
clo8896[2] = x;
clo8896[3] = kont8415;
clo8896[4] = lst;
clo8896[5] = cdr;
void* f8417 = encode_clo(clo8896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8417;
arg_buffer[3] = a8337;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8536);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8415 = decode_clo_array[5];
void* equal_u63 = decode_clo_array[4];
void* x = decode_clo_array[3];
void* car = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8897 = is_true(a8335);
if(if_guard8897)
{
void* xy8336 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[2] = xy8336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8898 = alloc_clo(lam8533_fptr, 6);

//setting env list
clo8898[1] = member_u63;
clo8898[2] = x;
clo8898[3] = equal_u63;
clo8898[4] = kont8415;
clo8898[5] = lst;
clo8898[6] = cdr;
void* f8418 = encode_clo(clo8898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8537 = arg_buffer[1];
//reading env and args
void* kont8415 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8899 = alloc_clo(lam8535_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8899[1] = member_u63;
clo8899[2] = car;
clo8899[3] = x;
clo8899[4] = equal_u63;
clo8899[5] = kont8415;
clo8899[6] = lst;
clo8899[7] = cdr;
void* f8419 = encode_clo(clo8899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8419;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8539_fptr() // lam8539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8540);
void* _u43 = decode_clo_array[3];
void* kont8420 = decode_clo_array[2];
void* a8343 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8420;
arg_buffer[3] = a8343;
arg_buffer[4] = a8345;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void lam8541_fptr() // lam8541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8542 = arg_buffer[1];
//reading env and args
void* a8344 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8542);
void* length = decode_clo_array[4];
void* _u43 = decode_clo_array[3];
void* kont8420 = decode_clo_array[2];
void* a8343 = decode_clo_array[1];

//creating new closure instance
void** clo8900 = alloc_clo(lam8539_fptr, 3);

//setting env list
clo8900[1] = a8343;
clo8900[2] = kont8420;
clo8900[3] = _u43;
void* f8421 = encode_clo(clo8900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8421;
arg_buffer[3] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8541 = encode_clo(alloc_clo(lam8541_fptr, 0));

void lam8544_fptr() // lam8544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8545 = arg_buffer[1];
//reading env and args
void* a8341 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8545);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* length = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* kont8420 = decode_clo_array[1];

//if-clause
bool if_guard8901 = is_true(a8341);
if(if_guard8901)
{
mpz_t* mpzvar8902 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8902, "0", 10);
void* xy8342 = encode_mpz(mpzvar8902);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8420);
arg_buffer[2] = xy8342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8420))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{
mpz_t* mpzvar8903 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8903, "1", 10);
void* a8343 = encode_mpz(mpzvar8903);

//creating new closure instance
void** clo8904 = alloc_clo(lam8541_fptr, 4);

//setting env list
clo8904[1] = a8343;
clo8904[2] = kont8420;
clo8904[3] = _u43;
clo8904[4] = length;
void* f8422 = encode_clo(clo8904);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8546 = arg_buffer[1];
//reading env and args
void* kont8420 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8905 = alloc_clo(lam8544_fptr, 5);

//setting env list
clo8905[1] = kont8420;
clo8905[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8905[3] = length;
clo8905[4] = lst;
clo8905[5] = cdr;
void* f8423 = encode_clo(clo8905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8423;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8547_fptr() // lam8547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* xy8347 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8548);
void* kont8424 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void lam8549_fptr() // lam8549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8550 = arg_buffer[1];
//reading env and args
void* a8351 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8550);
void* a8349 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8424 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8424;
arg_buffer[3] = a8349;
arg_buffer[4] = a8351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8549 = encode_clo(alloc_clo(lam8549_fptr, 0));

void lam8551_fptr() // lam8551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8552 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8552);
void* a8349 = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8424 = decode_clo_array[1];

//creating new closure instance
void** clo8906 = alloc_clo(lam8549_fptr, 3);

//setting env list
clo8906[1] = kont8424;
clo8906[2] = cons;
clo8906[3] = a8349;
void* f8426 = encode_clo(clo8906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8426;
arg_buffer[3] = proc;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void lam8553_fptr() // lam8553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8554 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8554);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8424 = decode_clo_array[1];

//creating new closure instance
void** clo8907 = alloc_clo(lam8551_fptr, 5);

//setting env list
clo8907[1] = kont8424;
clo8907[2] = cons;
clo8907[3] = proc;
clo8907[4] = map;
clo8907[5] = a8349;
void* f8427 = encode_clo(clo8907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8427;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void lam8555_fptr() // lam8555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* a8348 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8556);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8424 = decode_clo_array[1];

//creating new closure instance
void** clo8908 = alloc_clo(lam8553_fptr, 6);

//setting env list
clo8908[1] = kont8424;
clo8908[2] = cons;
clo8908[3] = proc;
clo8908[4] = map;
clo8908[5] = lst;
clo8908[6] = cdr;
void* f8428 = encode_clo(clo8908);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8428;
arg_buffer[3] = a8348;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void lam8557_fptr() // lam8557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8558 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8558);
void* lst = decode_clo_array[8];
void* map = decode_clo_array[7];
void* proc = decode_clo_array[6];
void* car = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8424 = decode_clo_array[1];

//if-clause
bool if_guard8909 = is_true(a8346);
if(if_guard8909)
{

//creating new closure instance
void** clo8910 = alloc_clo(lam8547_fptr, 1);

//setting env list
clo8910[1] = kont8424;
void* f8425 = encode_clo(clo8910);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8911 = alloc_clo(lam8555_fptr, 6);

//setting env list
clo8911[1] = kont8424;
clo8911[2] = cons;
clo8911[3] = proc;
clo8911[4] = map;
clo8911[5] = lst;
clo8911[6] = cdr;
void* f8429 = encode_clo(clo8911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8429;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8559 = arg_buffer[1];
//reading env and args
void* kont8424 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8912 = alloc_clo(lam8557_fptr, 8);

//setting env list
clo8912[1] = kont8424;
clo8912[2] = cons;
clo8912[3] = cdr;
clo8912[4] = list;
clo8912[5] = car;
clo8912[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8912[7] = map;
clo8912[8] = lst;
void* f8430 = encode_clo(clo8912);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8560_fptr() // lam8560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8561 = arg_buffer[1];
//reading env and args
void* xy8353 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8561);
void* kont8431 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8431);
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8431))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void lam8562_fptr() // lam8562 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8563 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8563);
void* kont8431 = decode_clo_array[3];
void* a8356 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8431;
arg_buffer[3] = a8356;
arg_buffer[4] = a8358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

void lam8564_fptr() // lam8564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8565 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8565);
void* kont8431 = decode_clo_array[5];
void* op = decode_clo_array[4];
void* a8356 = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8913 = alloc_clo(lam8562_fptr, 3);

//setting env list
clo8913[1] = cons;
clo8913[2] = a8356;
clo8913[3] = kont8431;
void* f8433 = encode_clo(clo8913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8433;
arg_buffer[3] = op;
arg_buffer[4] = a8357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void lam8566_fptr() // lam8566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8567 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8567);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* kont8431 = decode_clo_array[4];
void* op = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8914 = alloc_clo(lam8564_fptr, 5);

//setting env list
clo8914[1] = cons;
clo8914[2] = filter;
clo8914[3] = a8356;
clo8914[4] = op;
clo8914[5] = kont8431;
void* f8434 = encode_clo(clo8914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8434;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void lam8568_fptr() // lam8568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8569);
void* kont8431 = decode_clo_array[3];
void* op = decode_clo_array[2];
void* filter = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8431;
arg_buffer[3] = op;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8568 = encode_clo(alloc_clo(lam8568_fptr, 0));

void lam8570_fptr() // lam8570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8571 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8571);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8431 = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8915 = is_true(a8355);
if(if_guard8915)
{

//creating new closure instance
void** clo8916 = alloc_clo(lam8566_fptr, 6);

//setting env list
clo8916[1] = cons;
clo8916[2] = filter;
clo8916[3] = op;
clo8916[4] = kont8431;
clo8916[5] = lst;
clo8916[6] = cdr;
void* f8435 = encode_clo(clo8916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8435;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8917 = alloc_clo(lam8568_fptr, 3);

//setting env list
clo8917[1] = filter;
clo8917[2] = op;
clo8917[3] = kont8431;
void* f8436 = encode_clo(clo8917);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8436;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void lam8572_fptr() // lam8572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8573 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8573);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8431 = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8918 = alloc_clo(lam8570_fptr, 7);

//setting env list
clo8918[1] = car;
clo8918[2] = filter;
clo8918[3] = cons;
clo8918[4] = op;
clo8918[5] = kont8431;
clo8918[6] = lst;
clo8918[7] = cdr;
void* f8437 = encode_clo(clo8918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8437;
arg_buffer[3] = a8354;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void lam8574_fptr() // lam8574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8575 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8575);
void* lst = decode_clo_array[8];
void* kont8431 = decode_clo_array[7];
void* op = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8919 = is_true(a8352);
if(if_guard8919)
{

//creating new closure instance
void** clo8920 = alloc_clo(lam8560_fptr, 1);

//setting env list
clo8920[1] = kont8431;
void* f8432 = encode_clo(clo8920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8432;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8921 = alloc_clo(lam8572_fptr, 7);

//setting env list
clo8921[1] = car;
clo8921[2] = filter;
clo8921[3] = cons;
clo8921[4] = op;
clo8921[5] = kont8431;
clo8921[6] = lst;
clo8921[7] = cdr;
void* f8438 = encode_clo(clo8921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8576 = arg_buffer[1];
//reading env and args
void* kont8431 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8922 = alloc_clo(lam8574_fptr, 8);

//setting env list
clo8922[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8922[2] = filter;
clo8922[3] = cdr;
clo8922[4] = list;
clo8922[5] = cons;
clo8922[6] = op;
clo8922[7] = kont8431;
clo8922[8] = lst;
void* f8439 = encode_clo(clo8922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8577_fptr() // lam8577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8578 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8578);
void* a8362 = decode_clo_array[3];
void* drop = decode_clo_array[2];
void* kont8440 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8440;
arg_buffer[3] = a8362;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

void lam8580_fptr() // lam8580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8581 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8581);
void* drop = decode_clo_array[4];
void* n = decode_clo_array[3];
void* kont8440 = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8923 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8923, "1", 10);
void* a8363 = encode_mpz(mpzvar8923);

//creating new closure instance
void** clo8924 = alloc_clo(lam8577_fptr, 3);

//setting env list
clo8924[1] = kont8440;
clo8924[2] = drop;
clo8924[3] = a8362;
void* f8441 = encode_clo(clo8924);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8441;
arg_buffer[3] = n;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void lam8582_fptr() // lam8582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8583 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8583);
void* cdr = decode_clo_array[6];
void* n = decode_clo_array[5];
void* kont8440 = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* drop = decode_clo_array[1];

//if-clause
bool if_guard8925 = is_true(a8361);
if(if_guard8925)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8926 = alloc_clo(lam8580_fptr, 4);

//setting env list
clo8926[1] = _u45;
clo8926[2] = kont8440;
clo8926[3] = n;
clo8926[4] = drop;
void* f8442 = encode_clo(clo8926);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8442;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8585 = arg_buffer[1];
//reading env and args
void* kont8440 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8927 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8927, "0", 10);
void* a8360 = encode_mpz(mpzvar8927);

//creating new closure instance
void** clo8928 = alloc_clo(lam8582_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8928[1] = drop;
clo8928[2] = lst;
clo8928[3] = _u45;
clo8928[4] = kont8440;
clo8928[5] = n;
clo8928[6] = cdr;
void* f8443 = encode_clo(clo8928);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8443;
arg_buffer[3] = n;
arg_buffer[4] = a8360;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8586_fptr() // lam8586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8587);
void* kont8444 = decode_clo_array[4];
void* a8367 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8444;
arg_buffer[3] = fun;
arg_buffer[4] = a8367;
arg_buffer[5] = a8368;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void lam8588_fptr() // lam8588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8589 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8589);
void* cdr = decode_clo_array[5];
void* kont8444 = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo8929 = alloc_clo(lam8586_fptr, 4);

//setting env list
clo8929[1] = foldl;
clo8929[2] = fun;
clo8929[3] = a8367;
clo8929[4] = kont8444;
void* f8445 = encode_clo(clo8929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8445;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void lam8590_fptr() // lam8590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8591 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8591);
void* cdr = decode_clo_array[6];
void* kont8444 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* fun = decode_clo_array[3];
void* acc = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo8930 = alloc_clo(lam8588_fptr, 5);

//setting env list
clo8930[1] = foldl;
clo8930[2] = fun;
clo8930[3] = lst;
clo8930[4] = kont8444;
clo8930[5] = cdr;
void* f8446 = encode_clo(clo8930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8446;
arg_buffer[3] = a8366;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void lam8592_fptr() // lam8592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8593 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8593);
void* cdr = decode_clo_array[7];
void* kont8444 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* car = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//if-clause
bool if_guard8931 = is_true(a8365);
if(if_guard8931)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8444);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8932 = alloc_clo(lam8590_fptr, 6);

//setting env list
clo8932[1] = foldl;
clo8932[2] = acc;
clo8932[3] = fun;
clo8932[4] = lst;
clo8932[5] = kont8444;
clo8932[6] = cdr;
void* f8447 = encode_clo(clo8932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8447;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8594 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8933 = alloc_clo(lam8592_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8933[1] = foldl;
clo8933[2] = car;
clo8933[3] = acc;
clo8933[4] = fun;
clo8933[5] = lst;
clo8933[6] = kont8444;
clo8933[7] = cdr;
void* f8448 = encode_clo(clo8933);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8595_fptr() // lam8595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8596 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8596);
void* kont8449 = decode_clo_array[3];
void* a8370 = decode_clo_array[2];
void* fun = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8449;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8595 = encode_clo(alloc_clo(lam8595_fptr, 0));

void lam8597_fptr() // lam8597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8598 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8598);
void* foldr = decode_clo_array[5];
void* kont8449 = decode_clo_array[4];
void* a8370 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* acc = decode_clo_array[1];

//creating new closure instance
void** clo8934 = alloc_clo(lam8595_fptr, 3);

//setting env list
clo8934[1] = fun;
clo8934[2] = a8370;
clo8934[3] = kont8449;
void* f8450 = encode_clo(clo8934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8450;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8371;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8597 = encode_clo(alloc_clo(lam8597_fptr, 0));

void lam8599_fptr() // lam8599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8600 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8600);
void* cdr = decode_clo_array[6];
void* kont8449 = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//creating new closure instance
void** clo8935 = alloc_clo(lam8597_fptr, 5);

//setting env list
clo8935[1] = acc;
clo8935[2] = fun;
clo8935[3] = a8370;
clo8935[4] = kont8449;
clo8935[5] = foldr;
void* f8451 = encode_clo(clo8935);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8451;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void lam8601_fptr() // lam8601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8602 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8602);
void* cdr = decode_clo_array[7];
void* kont8449 = decode_clo_array[6];
void* fun = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* car = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//if-clause
bool if_guard8936 = is_true(a8369);
if(if_guard8936)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8449);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8937 = alloc_clo(lam8599_fptr, 6);

//setting env list
clo8937[1] = lst;
clo8937[2] = foldr;
clo8937[3] = acc;
clo8937[4] = fun;
clo8937[5] = kont8449;
clo8937[6] = cdr;
void* f8452 = encode_clo(clo8937);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8452;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8601 = encode_clo(alloc_clo(lam8601_fptr, 0));

void foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8603 = arg_buffer[1];
//reading env and args
void* kont8449 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8938 = alloc_clo(lam8601_fptr, 7);

//setting env list
clo8938[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8938[2] = foldr;
clo8938[3] = car;
clo8938[4] = acc;
clo8938[5] = fun;
clo8938[6] = kont8449;
clo8938[7] = cdr;
void* f8453 = encode_clo(clo8938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8453;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8604_fptr() // lam8604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8605 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8605);
void* reverse_u45helper = decode_clo_array[3];
void* a8374 = decode_clo_array[2];
void* kont8454 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8454;
arg_buffer[3] = a8374;
arg_buffer[4] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void lam8606_fptr() // lam8606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8607 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8607);
void* reverse_u45helper = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* a8374 = decode_clo_array[3];
void* kont8454 = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8939 = alloc_clo(lam8604_fptr, 3);

//setting env list
clo8939[1] = kont8454;
clo8939[2] = a8374;
clo8939[3] = reverse_u45helper;
void* f8455 = encode_clo(clo8939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8455;
arg_buffer[3] = a8375;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8606 = encode_clo(alloc_clo(lam8606_fptr, 0));

void lam8608_fptr() // lam8608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8609 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8609);
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* car = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* kont8454 = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8940 = alloc_clo(lam8606_fptr, 5);

//setting env list
clo8940[1] = lst2;
clo8940[2] = kont8454;
clo8940[3] = a8374;
clo8940[4] = cons;
clo8940[5] = reverse_u45helper;
void* f8456 = encode_clo(clo8940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8456;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void lam8610_fptr() // lam8610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8611 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8611);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* car = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* kont8454 = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//if-clause
bool if_guard8941 = is_true(a8373);
if(if_guard8941)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8454);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8942 = alloc_clo(lam8608_fptr, 6);

//setting env list
clo8942[1] = lst2;
clo8942[2] = kont8454;
clo8942[3] = cons;
clo8942[4] = car;
clo8942[5] = reverse_u45helper;
clo8942[6] = lst;
void* f8457 = encode_clo(clo8942);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8457;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8610 = encode_clo(alloc_clo(lam8610_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8612 = arg_buffer[1];
//reading env and args
void* kont8454 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8943 = alloc_clo(lam8610_fptr, 7);

//setting env list
clo8943[1] = lst2;
clo8943[2] = kont8454;
clo8943[3] = cons;
clo8943[4] = car;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8943[5] = reverse_u45helper;
clo8943[6] = lst;
clo8943[7] = cdr;
void* f8458 = encode_clo(clo8943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8613_fptr() // lam8613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8614 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8614);
void* kont8459 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* reverse_u45helper = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8459;
arg_buffer[3] = lst;
arg_buffer[4] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8613 = encode_clo(alloc_clo(lam8613_fptr, 0));

void reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8615 = arg_buffer[1];
//reading env and args
void* kont8459 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8944 = alloc_clo(lam8613_fptr, 3);

//setting env list
clo8944[1] = reverse_u45helper;
clo8944[2] = lst;
clo8944[3] = kont8459;
void* f8460 = encode_clo(clo8944);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8460;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8616_fptr() // lam8616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8617 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8617);
void* a8379 = decode_clo_array[3];
void* kont8461 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8461;
arg_buffer[3] = a8379;
arg_buffer[4] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8616 = encode_clo(alloc_clo(lam8616_fptr, 0));

void lam8618_fptr() // lam8618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8619 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8619);
void* a8379 = decode_clo_array[5];
void* kont8461 = decode_clo_array[4];
void* append1 = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8945 = alloc_clo(lam8616_fptr, 3);

//setting env list
clo8945[1] = cons;
clo8945[2] = kont8461;
clo8945[3] = a8379;
void* f8462 = encode_clo(clo8945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append1);
arg_buffer[2] = f8462;
arg_buffer[3] = a8380;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8618 = encode_clo(alloc_clo(lam8618_fptr, 0));

void lam8620_fptr() // lam8620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8621 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8621);
void* cdr = decode_clo_array[6];
void* kont8461 = decode_clo_array[5];
void* lhs = decode_clo_array[4];
void* append1 = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8946 = alloc_clo(lam8618_fptr, 5);

//setting env list
clo8946[1] = cons;
clo8946[2] = rhs;
clo8946[3] = append1;
clo8946[4] = kont8461;
clo8946[5] = a8379;
void* f8463 = encode_clo(clo8946);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8463;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8620 = encode_clo(alloc_clo(lam8620_fptr, 0));

void lam8622_fptr() // lam8622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8623 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8623);
void* cdr = decode_clo_array[7];
void* kont8461 = decode_clo_array[6];
void* lhs = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8947 = is_true(a8378);
if(if_guard8947)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8461);
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8461))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8948 = alloc_clo(lam8620_fptr, 6);

//setting env list
clo8948[1] = cons;
clo8948[2] = rhs;
clo8948[3] = append1;
clo8948[4] = lhs;
clo8948[5] = kont8461;
clo8948[6] = cdr;
void* f8464 = encode_clo(clo8948);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8464;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8622 = encode_clo(alloc_clo(lam8622_fptr, 0));

void append1_fptr() // append1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8624 = arg_buffer[1];
//reading env and args
void* kont8461 = arg_buffer[2];
void* lhs = arg_buffer[3];
void* rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8949 = alloc_clo(lam8622_fptr, 7);

//setting env list
clo8949[1] = car;
clo8949[2] = rhs;
clo8949[3] = cons;
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

clo8949[4] = append1;
clo8949[5] = lhs;
clo8949[6] = kont8461;
clo8949[7] = cdr;
void* f8465 = encode_clo(clo8949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8465;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8625_fptr() // lam8625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8626 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8626);
void* kont8466 = decode_clo_array[4];
void* append1 = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* a8382 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = kont8466;
arg_buffer[3] = append1;
arg_buffer[4] = a8382;
arg_buffer[5] = a8384;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8625 = encode_clo(alloc_clo(lam8625_fptr, 0));

void lam8627_fptr() // lam8627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8628 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8628);
void* kont8466 = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* a8382 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8950 = alloc_clo(lam8625_fptr, 4);

//setting env list
clo8950[1] = a8382;
clo8950[2] = foldr;
clo8950[3] = append1;
clo8950[4] = kont8466;
void* f8467 = encode_clo(clo8950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append1);
arg_buffer[2] = f8467;
arg_buffer[3] = a8383;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void lam8629_fptr() // lam8629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8630 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8630);
void* list = decode_clo_array[6];
void* foldr = decode_clo_array[5];
void* kont8466 = decode_clo_array[4];
void* xs = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8951 = alloc_clo(lam8627_fptr, 5);

//setting env list
clo8951[1] = append1;
clo8951[2] = x;
clo8951[3] = a8382;
clo8951[4] = foldr;
clo8951[5] = kont8466;
void* f8468 = encode_clo(clo8951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8468;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8629 = encode_clo(alloc_clo(lam8629_fptr, 0));

void lam8631_fptr() // lam8631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8632 = arg_buffer[1];
//reading env and args
void* x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8632);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8466 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8952 = alloc_clo(lam8629_fptr, 6);

//setting env list
clo8952[1] = append1;
clo8952[2] = x;
clo8952[3] = xs;
clo8952[4] = kont8466;
clo8952[5] = foldr;
clo8952[6] = list;
void* f8469 = encode_clo(clo8952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8469;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8631 = encode_clo(alloc_clo(lam8631_fptr, 0));

void lam8633_fptr() // lam8633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8634 = arg_buffer[1];
//reading env and args
void* vargs8314 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8634);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8466 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8953 = alloc_clo(lam8631_fptr, 5);

//setting env list
clo8953[1] = xs;
clo8953[2] = append1;
clo8953[3] = kont8466;
clo8953[4] = foldr;
clo8953[5] = list;
void* f8470 = encode_clo(clo8953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[2] = vargs8314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8633 = encode_clo(alloc_clo(lam8633_fptr, 0));

void lam8635_fptr() // lam8635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8636 = arg_buffer[1];
//reading env and args
void* xs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8636);
void* foldr = decode_clo_array[6];
void* kont8466 = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* vargs8488 = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo8954 = alloc_clo(lam8633_fptr, 5);

//setting env list
clo8954[1] = xs;
clo8954[2] = append1;
clo8954[3] = kont8466;
clo8954[4] = foldr;
clo8954[5] = list;
void* f8471 = encode_clo(clo8954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8471;
arg_buffer[3] = vargs8488;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8635 = encode_clo(alloc_clo(lam8635_fptr, 0));

void append_fptr() // append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8637 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* vargs = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
vargs = arg_buffer[2];
}
else
{
//building cons cell
vargs = encode_null();
for(int i = numArgs; i >= 2; i--)
{
vargs = prim_cons(arg_buffer[i], vargs);

}

}

void* kont8466 = prim_car(vargs);
void* vargs8488 = prim_cdr(vargs);

//creating new closure instance
void** clo8955 = alloc_clo(lam8635_fptr, 6);

//setting env list
clo8955[1] = cdr;
clo8955[2] = list;
clo8955[3] = vargs8488;
clo8955[4] = append1;
clo8955[5] = kont8466;
clo8955[6] = foldr;
void* f8472 = encode_clo(clo8955);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8472;
arg_buffer[3] = vargs8488;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8638_fptr() // lam8638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8639 = arg_buffer[1];
//reading env and args
void* xy8387 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8639);
void* kont8473 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8473);
arg_buffer[2] = xy8387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8473))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8638 = encode_clo(alloc_clo(lam8638_fptr, 0));

void lam8640_fptr() // lam8640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8641 = arg_buffer[1];
//reading env and args
void* a8392 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8641);
void* a8388 = decode_clo_array[4];
void* kont8473 = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* a8390 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8473;
arg_buffer[3] = a8388;
arg_buffer[4] = a8390;
arg_buffer[5] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8640 = encode_clo(alloc_clo(lam8640_fptr, 0));

void lam8642_fptr() // lam8642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8643 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8643);
void* a8388 = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* kont8473 = decode_clo_array[4];
void* take_u45helper = decode_clo_array[3];
void* a8390 = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8956 = alloc_clo(lam8640_fptr, 4);

//setting env list
clo8956[1] = a8390;
clo8956[2] = take_u45helper;
clo8956[3] = kont8473;
clo8956[4] = a8388;
void* f8475 = encode_clo(clo8956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8475;
arg_buffer[3] = a8391;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8642 = encode_clo(alloc_clo(lam8642_fptr, 0));

void lam8644_fptr() // lam8644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8645 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8645);
void* lst = decode_clo_array[7];
void* a8388 = decode_clo_array[6];
void* car = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* kont8473 = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8957 = alloc_clo(lam8642_fptr, 6);

//setting env list
clo8957[1] = lst2;
clo8957[2] = a8390;
clo8957[3] = take_u45helper;
clo8957[4] = kont8473;
clo8957[5] = cons;
clo8957[6] = a8388;
void* f8476 = encode_clo(clo8957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8476;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8644 = encode_clo(alloc_clo(lam8644_fptr, 0));

void lam8647_fptr() // lam8647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8648 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8648);
void* lst = decode_clo_array[8];
void* cons = decode_clo_array[7];
void* take_u45helper = decode_clo_array[6];
void* lst2 = decode_clo_array[5];
void* n = decode_clo_array[4];
void* car = decode_clo_array[3];
void* kont8473 = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8958 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8958, "1", 10);
void* a8389 = encode_mpz(mpzvar8958);

//creating new closure instance
void** clo8959 = alloc_clo(lam8644_fptr, 7);

//setting env list
clo8959[1] = lst2;
clo8959[2] = take_u45helper;
clo8959[3] = kont8473;
clo8959[4] = cons;
clo8959[5] = car;
clo8959[6] = a8388;
clo8959[7] = lst;
void* f8477 = encode_clo(clo8959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8477;
arg_buffer[3] = n;
arg_buffer[4] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8647 = encode_clo(alloc_clo(lam8647_fptr, 0));

void lam8649_fptr() // lam8649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8650 = arg_buffer[1];
//reading env and args
void* a8386 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8650);
void* cdr = decode_clo_array[10];
void* lst = decode_clo_array[9];
void* reverse = decode_clo_array[8];
void* cons = decode_clo_array[7];
void* take_u45helper = decode_clo_array[6];
void* lst2 = decode_clo_array[5];
void* n = decode_clo_array[4];
void* car = decode_clo_array[3];
void* kont8473 = decode_clo_array[2];
void* _u45 = decode_clo_array[1];

//if-clause
bool if_guard8960 = is_true(a8386);
if(if_guard8960)
{

//creating new closure instance
void** clo8961 = alloc_clo(lam8638_fptr, 1);

//setting env list
clo8961[1] = kont8473;
void* f8474 = encode_clo(clo8961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8474;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8962 = alloc_clo(lam8647_fptr, 8);

//setting env list
clo8962[1] = _u45;
clo8962[2] = kont8473;
clo8962[3] = car;
clo8962[4] = n;
clo8962[5] = lst2;
clo8962[6] = take_u45helper;
clo8962[7] = cons;
clo8962[8] = lst;
void* f8478 = encode_clo(clo8962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8478;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8649 = encode_clo(alloc_clo(lam8649_fptr, 0));

void take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8652 = arg_buffer[1];
//reading env and args
void* kont8473 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8963 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8963, "0", 10);
void* a8385 = encode_mpz(mpzvar8963);

//creating new closure instance
void** clo8964 = alloc_clo(lam8649_fptr, 10);

//setting env list
clo8964[1] = _u45;
clo8964[2] = kont8473;
clo8964[3] = car;
clo8964[4] = n;
clo8964[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8964[6] = take_u45helper;
clo8964[7] = cons;
clo8964[8] = reverse;
clo8964[9] = lst;
clo8964[10] = cdr;
void* f8479 = encode_clo(clo8964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8479;
arg_buffer[3] = n;
arg_buffer[4] = a8385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void lam8653_fptr() // lam8653 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8654 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8654);
void* lst = decode_clo_array[4];
void* kont8480 = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* n = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8480;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8393;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8653 = encode_clo(alloc_clo(lam8653_fptr, 0));

void take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8655 = arg_buffer[1];
//reading env and args
void* kont8480 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8965 = alloc_clo(lam8653_fptr, 4);

//setting env list
clo8965[1] = n;
clo8965[2] = take_u45helper;
clo8965[3] = kont8480;
clo8965[4] = lst;
void* f8481 = encode_clo(clo8965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8481;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8656_fptr() // lam8656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8657 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8657);
void* string_u45_u62list = decode_clo_array[2];
void* kont8482 = decode_clo_array[1];
void* cps_u45lst8483 = prim_cons(kont8482, a8395);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(string_u45_u62list);
arg_buffer[2] = cps_u45lst8483;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(string_u45_u62list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
// call next proc using a function pointer
function_ptr();
}

void* lam8656 = encode_clo(alloc_clo(lam8656_fptr, 0));

void call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8659 = arg_buffer[1];
//reading env and args
void* kont8482 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
void* a8394 = encode_str(new(GC) std::string("brouhahaaaa"));

//creating new closure instance
void** clo8966 = alloc_clo(lam8656_fptr, 2);

//setting env list
clo8966[1] = kont8482;
clo8966[2] = string_u45_u62list;
void* f8484 = encode_clo(clo8966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8484;
arg_buffer[3] = a8394;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8660_fptr() // lam8660 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8661 = arg_buffer[1];
//reading env and args
void* xy8396 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8661);
void* kont8485 = decode_clo_array[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8485);
arg_buffer[2] = xy8396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8485))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8660 = encode_clo(alloc_clo(lam8660_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8662 = arg_buffer[1];
//reading env and args
void* kont8485 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8967 = alloc_clo(lam8660_fptr, 1);

//setting env list
clo8967[1] = kont8485;
void* f8486 = encode_clo(clo8967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);
//making a call to the brouhaha main function to kick off our C++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
arg_buffer[0] = 0;
arg_buffer[2] = fhalt_clo;
function_ptr();
}

