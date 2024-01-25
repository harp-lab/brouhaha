#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void _u43_fptr() // + 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8664 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8662 = prim_car(lst);
void* lst8665 = prim_cdr(lst);
void* x8663 = apply_prim__u43(lst8665);
arg_buffer[1] = kont8662;
arg_buffer[2] = x8663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8662))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8662 = arg_buffer[2];
void* x8663 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8662;
arg_buffer[2] = x8663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8662))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr() // - 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8668 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8666 = prim_car(lst);
void* lst8669 = prim_cdr(lst);
void* x8667 = apply_prim__u45(lst8669);
arg_buffer[1] = kont8666;
arg_buffer[2] = x8667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8666))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8666 = arg_buffer[2];
void* x8667 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8666;
arg_buffer[2] = x8667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8666))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr() // * 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8672 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8670 = prim_car(lst);
void* lst8673 = prim_cdr(lst);
void* x8671 = apply_prim__u42(lst8673);
arg_buffer[1] = kont8670;
arg_buffer[2] = x8671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8670))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8670 = arg_buffer[2];
void* x8671 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8670;
arg_buffer[2] = x8671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8670))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr() // / 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8676 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8674 = prim_car(lst);
void* lst8677 = prim_cdr(lst);
void* x8675 = apply_prim__u47(lst8677);
arg_buffer[1] = kont8674;
arg_buffer[2] = x8675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8674))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8674 = arg_buffer[2];
void* x8675 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8674;
arg_buffer[2] = x8675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8674))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr() // = 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8680 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8678 = prim_car(lst);
void* lst8681 = prim_cdr(lst);
void* x8679 = apply_prim__u61(lst8681);
arg_buffer[1] = kont8678;
arg_buffer[2] = x8679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8678))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8678 = arg_buffer[2];
void* x8679 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8678;
arg_buffer[2] = x8679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8678))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr() // > 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8684 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8682 = prim_car(lst);
void* lst8685 = prim_cdr(lst);
void* x8683 = apply_prim__u62(lst8685);
arg_buffer[1] = kont8682;
arg_buffer[2] = x8683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8682 = arg_buffer[2];
void* x8683 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8682;
arg_buffer[2] = x8683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr() // < 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8688 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8686 = prim_car(lst);
void* lst8689 = prim_cdr(lst);
void* x8687 = apply_prim__u60(lst8689);
arg_buffer[1] = kont8686;
arg_buffer[2] = x8687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8686))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8686 = arg_buffer[2];
void* x8687 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8686;
arg_buffer[2] = x8687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8686))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr() // <= 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8692 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8690 = prim_car(lst);
void* lst8693 = prim_cdr(lst);
void* x8691 = apply_prim__u60_u61(lst8693);
arg_buffer[1] = kont8690;
arg_buffer[2] = x8691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8690))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8690 = arg_buffer[2];
void* x8691 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8690;
arg_buffer[2] = x8691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8690))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr() // >= 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8696 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8694 = prim_car(lst);
void* lst8697 = prim_cdr(lst);
void* x8695 = apply_prim__u62_u61(lst8697);
arg_buffer[1] = kont8694;
arg_buffer[2] = x8695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8694))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8694 = arg_buffer[2];
void* x8695 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8694;
arg_buffer[2] = x8695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8694))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr() // modulo 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8700 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8698 = prim_car(lst);
void* lst8701 = prim_cdr(lst);
void* x8699 = apply_prim_modulo(lst8701);
arg_buffer[1] = kont8698;
arg_buffer[2] = x8699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8698))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8698 = arg_buffer[2];
void* x8699 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8698;
arg_buffer[2] = x8699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8698))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr() // null? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8704 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8702 = prim_car(lst);
void* lst8705 = prim_cdr(lst);
void* x8703 = apply_prim_null_u63(lst8705);
arg_buffer[1] = kont8702;
arg_buffer[2] = x8703;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8702))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8702 = arg_buffer[2];
void* x8703 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8702;
arg_buffer[2] = x8703;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8702))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr() // equal? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8708 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8706 = prim_car(lst);
void* lst8709 = prim_cdr(lst);
void* x8707 = apply_prim_equal_u63(lst8709);
arg_buffer[1] = kont8706;
arg_buffer[2] = x8707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8706))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8706 = arg_buffer[2];
void* x8707 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8706;
arg_buffer[2] = x8707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8706))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr() // eq? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8712 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8710 = prim_car(lst);
void* lst8713 = prim_cdr(lst);
void* x8711 = apply_prim_eq_u63(lst8713);
arg_buffer[1] = kont8710;
arg_buffer[2] = x8711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8710))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8710 = arg_buffer[2];
void* x8711 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8710;
arg_buffer[2] = x8711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8710))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr() // cons 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8716 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8714 = prim_car(lst);
void* lst8717 = prim_cdr(lst);
void* x8715 = apply_prim_cons(lst8717);
arg_buffer[1] = kont8714;
arg_buffer[2] = x8715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8714))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8714 = arg_buffer[2];
void* x8715 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8714;
arg_buffer[2] = x8715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8714))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr() // car 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8720 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8718 = prim_car(lst);
void* lst8721 = prim_cdr(lst);
void* x8719 = apply_prim_car(lst8721);
arg_buffer[1] = kont8718;
arg_buffer[2] = x8719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8718))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8718 = arg_buffer[2];
void* x8719 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8718;
arg_buffer[2] = x8719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8718))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr() // cdr 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8724 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8722 = prim_car(lst);
void* lst8725 = prim_cdr(lst);
void* x8723 = apply_prim_cdr(lst8725);
arg_buffer[1] = kont8722;
arg_buffer[2] = x8723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8722))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8722 = arg_buffer[2];
void* x8723 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont8722;
arg_buffer[2] = x8723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8722))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr() // float->int 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8728 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8726 = prim_car(lst);
void* lst8729 = prim_cdr(lst);
void* x8727 = apply_prim_float_u45_u62int(lst8729);
arg_buffer[1] = kont8726;
arg_buffer[2] = x8727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8726))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8726 = arg_buffer[2];
void* x8727 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont8726;
arg_buffer[2] = x8727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8726))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr() // int->float 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8732 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8730 = prim_car(lst);
void* lst8733 = prim_cdr(lst);
void* x8731 = apply_prim_int_u45_u62float(lst8733);
arg_buffer[1] = kont8730;
arg_buffer[2] = x8731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8730))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8730 = arg_buffer[2];
void* x8731 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont8730;
arg_buffer[2] = x8731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8730))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr() // hash 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8736 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8734 = prim_car(lst);
void* lst8737 = prim_cdr(lst);
void* x8735 = apply_prim_hash(lst8737);
arg_buffer[1] = kont8734;
arg_buffer[2] = x8735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8734))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8734 = arg_buffer[2];
void* x8735 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont8734;
arg_buffer[2] = x8735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8734))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr() // hash-ref 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8740 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8738 = prim_car(lst);
void* lst8741 = prim_cdr(lst);
void* x8739 = apply_prim_hash_u45ref(lst8741);
arg_buffer[1] = kont8738;
arg_buffer[2] = x8739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8738))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8738 = arg_buffer[2];
void* x8739 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont8738;
arg_buffer[2] = x8739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8738))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr() // hash-set 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8744 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8742 = prim_car(lst);
void* lst8745 = prim_cdr(lst);
void* x8743 = apply_prim_hash_u45set(lst8745);
arg_buffer[1] = kont8742;
arg_buffer[2] = x8743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8742))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8742 = arg_buffer[2];
void* x8743 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont8742;
arg_buffer[2] = x8743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8742))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr() // hash-keys 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8748 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8746 = prim_car(lst);
void* lst8749 = prim_cdr(lst);
void* x8747 = apply_prim_hash_u45keys(lst8749);
arg_buffer[1] = kont8746;
arg_buffer[2] = x8747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8746))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8746 = arg_buffer[2];
void* x8747 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont8746;
arg_buffer[2] = x8747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8746))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8752 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8750 = prim_car(lst);
void* lst8753 = prim_cdr(lst);
void* x8751 = apply_prim_hash_u45has_u45key_u63(lst8753);
arg_buffer[1] = kont8750;
arg_buffer[2] = x8751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8750))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8750 = arg_buffer[2];
void* x8751 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont8750;
arg_buffer[2] = x8751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8750))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr() // hash-count 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8756 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8754 = prim_car(lst);
void* lst8757 = prim_cdr(lst);
void* x8755 = apply_prim_hash_u45count(lst8757);
arg_buffer[1] = kont8754;
arg_buffer[2] = x8755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8754))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8754 = arg_buffer[2];
void* x8755 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont8754;
arg_buffer[2] = x8755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8754))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr() // set 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8760 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8758 = prim_car(lst);
void* lst8761 = prim_cdr(lst);
void* x8759 = apply_prim_set(lst8761);
arg_buffer[1] = kont8758;
arg_buffer[2] = x8759;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8758))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8758 = arg_buffer[2];
void* x8759 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont8758;
arg_buffer[2] = x8759;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8758))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr() // set->list 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8764 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8762 = prim_car(lst);
void* lst8765 = prim_cdr(lst);
void* x8763 = apply_prim_set_u45_u62list(lst8765);
arg_buffer[1] = kont8762;
arg_buffer[2] = x8763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8762))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8762 = arg_buffer[2];
void* x8763 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont8762;
arg_buffer[2] = x8763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8762))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr() // list->set 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8768 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8766 = prim_car(lst);
void* lst8769 = prim_cdr(lst);
void* x8767 = apply_prim_list_u45_u62set(lst8769);
arg_buffer[1] = kont8766;
arg_buffer[2] = x8767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8766))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8766 = arg_buffer[2];
void* x8767 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont8766;
arg_buffer[2] = x8767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8766))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr() // set-add 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8772 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8770 = prim_car(lst);
void* lst8773 = prim_cdr(lst);
void* x8771 = apply_prim_set_u45add(lst8773);
arg_buffer[1] = kont8770;
arg_buffer[2] = x8771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8770))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8770 = arg_buffer[2];
void* x8771 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont8770;
arg_buffer[2] = x8771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8770))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr() // set-member? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8776 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8774 = prim_car(lst);
void* lst8777 = prim_cdr(lst);
void* x8775 = apply_prim_set_u45member_u63(lst8777);
arg_buffer[1] = kont8774;
arg_buffer[2] = x8775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8774))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8774 = arg_buffer[2];
void* x8775 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont8774;
arg_buffer[2] = x8775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8774))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr() // set-remove 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8780 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8778 = prim_car(lst);
void* lst8781 = prim_cdr(lst);
void* x8779 = apply_prim_set_u45remove(lst8781);
arg_buffer[1] = kont8778;
arg_buffer[2] = x8779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8778))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8778 = arg_buffer[2];
void* x8779 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont8778;
arg_buffer[2] = x8779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8778))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr() // set-count 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8784 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8782 = prim_car(lst);
void* lst8785 = prim_cdr(lst);
void* x8783 = apply_prim_set_u45count(lst8785);
arg_buffer[1] = kont8782;
arg_buffer[2] = x8783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8782))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8782 = arg_buffer[2];
void* x8783 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont8782;
arg_buffer[2] = x8783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8782))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr() // string? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8788 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8786 = prim_car(lst);
void* lst8789 = prim_cdr(lst);
void* x8787 = apply_prim_string_u63(lst8789);
arg_buffer[1] = kont8786;
arg_buffer[2] = x8787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8786))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8786 = arg_buffer[2];
void* x8787 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont8786;
arg_buffer[2] = x8787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8786))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr() // string-length 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8792 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8790 = prim_car(lst);
void* lst8793 = prim_cdr(lst);
void* x8791 = apply_prim_string_u45length(lst8793);
arg_buffer[1] = kont8790;
arg_buffer[2] = x8791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8790))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8790 = arg_buffer[2];
void* x8791 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont8790;
arg_buffer[2] = x8791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8790))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr() // string-ref 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8796 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8794 = prim_car(lst);
void* lst8797 = prim_cdr(lst);
void* x8795 = apply_prim_string_u45ref(lst8797);
arg_buffer[1] = kont8794;
arg_buffer[2] = x8795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8794))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8794 = arg_buffer[2];
void* x8795 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont8794;
arg_buffer[2] = x8795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8794))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr() // substring 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8800 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8798 = prim_car(lst);
void* lst8801 = prim_cdr(lst);
void* x8799 = apply_prim_substring(lst8801);
arg_buffer[1] = kont8798;
arg_buffer[2] = x8799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8798))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8798 = arg_buffer[2];
void* x8799 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont8798;
arg_buffer[2] = x8799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8798))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr() // string-append 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8804 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8802 = prim_car(lst);
void* lst8805 = prim_cdr(lst);
void* x8803 = apply_prim_string_u45append(lst8805);
arg_buffer[1] = kont8802;
arg_buffer[2] = x8803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8802))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8802 = arg_buffer[2];
void* x8803 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont8802;
arg_buffer[2] = x8803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8802))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr() // string->list 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8808 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8806 = prim_car(lst);
void* lst8809 = prim_cdr(lst);
void* x8807 = apply_prim_string_u45_u62list(lst8809);
arg_buffer[1] = kont8806;
arg_buffer[2] = x8807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8806))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8806 = arg_buffer[2];
void* x8807 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont8806;
arg_buffer[2] = x8807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8806))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr() // exact-floor 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8812 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8810 = prim_car(lst);
void* lst8813 = prim_cdr(lst);
void* x8811 = apply_prim_exact_u45floor(lst8813);
arg_buffer[1] = kont8810;
arg_buffer[2] = x8811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8810))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8810 = arg_buffer[2];
void* x8811 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont8810;
arg_buffer[2] = x8811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8810))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr() // exact-ceiling 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8816 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8814 = prim_car(lst);
void* lst8817 = prim_cdr(lst);
void* x8815 = apply_prim_exact_u45ceiling(lst8817);
arg_buffer[1] = kont8814;
arg_buffer[2] = x8815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8814))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8814 = arg_buffer[2];
void* x8815 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont8814;
arg_buffer[2] = x8815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8814))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr() // exact-round 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8820 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8818 = prim_car(lst);
void* lst8821 = prim_cdr(lst);
void* x8819 = apply_prim_exact_u45round(lst8821);
arg_buffer[1] = kont8818;
arg_buffer[2] = x8819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8818))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8818 = arg_buffer[2];
void* x8819 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont8818;
arg_buffer[2] = x8819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8818))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr() // abs 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8824 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8822 = prim_car(lst);
void* lst8825 = prim_cdr(lst);
void* x8823 = apply_prim_abs(lst8825);
arg_buffer[1] = kont8822;
arg_buffer[2] = x8823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8822))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8822 = arg_buffer[2];
void* x8823 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont8822;
arg_buffer[2] = x8823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8822))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr() // max 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8828 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8826 = prim_car(lst);
void* lst8829 = prim_cdr(lst);
void* x8827 = apply_prim_max(lst8829);
arg_buffer[1] = kont8826;
arg_buffer[2] = x8827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8826))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8826 = arg_buffer[2];
void* x8827 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont8826;
arg_buffer[2] = x8827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8826))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr() // min 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8832 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8830 = prim_car(lst);
void* lst8833 = prim_cdr(lst);
void* x8831 = apply_prim_min(lst8833);
arg_buffer[1] = kont8830;
arg_buffer[2] = x8831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8830))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8830 = arg_buffer[2];
void* x8831 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont8830;
arg_buffer[2] = x8831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8830))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr() // expt 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8836 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8834 = prim_car(lst);
void* lst8837 = prim_cdr(lst);
void* x8835 = apply_prim_expt(lst8837);
arg_buffer[1] = kont8834;
arg_buffer[2] = x8835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8834))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8834 = arg_buffer[2];
void* x8835 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont8834;
arg_buffer[2] = x8835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8834))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr() // sqrt 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8840 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8838 = prim_car(lst);
void* lst8841 = prim_cdr(lst);
void* x8839 = apply_prim_sqrt(lst8841);
arg_buffer[1] = kont8838;
arg_buffer[2] = x8839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8838))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8838 = arg_buffer[2];
void* x8839 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont8838;
arg_buffer[2] = x8839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8838))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr() // remainder 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8844 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8842 = prim_car(lst);
void* lst8845 = prim_cdr(lst);
void* x8843 = apply_prim_remainder(lst8845);
arg_buffer[1] = kont8842;
arg_buffer[2] = x8843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8842))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8842 = arg_buffer[2];
void* x8843 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont8842;
arg_buffer[2] = x8843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8842))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr() // quotient 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8848 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8846 = prim_car(lst);
void* lst8849 = prim_cdr(lst);
void* x8847 = apply_prim_quotient(lst8849);
arg_buffer[1] = kont8846;
arg_buffer[2] = x8847;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8846))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8846 = arg_buffer[2];
void* x8847 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont8846;
arg_buffer[2] = x8847;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8846))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr() // random 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8852 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8850 = prim_car(lst);
void* lst8853 = prim_cdr(lst);
void* x8851 = apply_prim_random(lst8853);
arg_buffer[1] = kont8850;
arg_buffer[2] = x8851;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8850))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8850 = arg_buffer[2];
void* x8851 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont8850;
arg_buffer[2] = x8851;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8850))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr() // symbol? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8856 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8854 = prim_car(lst);
void* lst8857 = prim_cdr(lst);
void* x8855 = apply_prim_symbol_u63(lst8857);
arg_buffer[1] = kont8854;
arg_buffer[2] = x8855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8854))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8854 = arg_buffer[2];
void* x8855 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont8854;
arg_buffer[2] = x8855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8854))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr() // pair? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8860 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8858 = prim_car(lst);
void* lst8861 = prim_cdr(lst);
void* x8859 = apply_prim_pair_u63(lst8861);
arg_buffer[1] = kont8858;
arg_buffer[2] = x8859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8858 = arg_buffer[2];
void* x8859 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont8858;
arg_buffer[2] = x8859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr() // positive? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8864 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8862 = prim_car(lst);
void* lst8865 = prim_cdr(lst);
void* x8863 = apply_prim_positive_u63(lst8865);
arg_buffer[1] = kont8862;
arg_buffer[2] = x8863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8862 = arg_buffer[2];
void* x8863 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont8862;
arg_buffer[2] = x8863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr() // negative? 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8868 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8866 = prim_car(lst);
void* lst8869 = prim_cdr(lst);
void* x8867 = apply_prim_negative_u63(lst8869);
arg_buffer[1] = kont8866;
arg_buffer[2] = x8867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8866))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8866 = arg_buffer[2];
void* x8867 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont8866;
arg_buffer[2] = x8867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8866))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr() // list 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8488 = arg_buffer[1];
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

void* kont8398 = prim_car(x);
void* x8486 = prim_cdr(x);

//clo-app
arg_buffer[1] = kont8398;
arg_buffer[2] = x8486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8398))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8489_fptr() // lam8489 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8490 = arg_buffer[1];
//reading env and args
void* a8317 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8490);
void* kont8399 = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* a8315 = decode_clo_array[1];

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = kont8399;
arg_buffer[3] = a8315;
arg_buffer[4] = a8317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8489 = encode_clo(alloc_clo(lam8489_fptr, 0));

void even_u63_fptr() // even? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8493 = arg_buffer[1];
//reading env and args
void* kont8399 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8870 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8870, 0);
void* a8315 = encode_mpz(mpzvar8870);
mpz_t* mpzvar8871 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8871, 2);
void* a8316 = encode_mpz(mpzvar8871);

//creating new closure instance
void** clo8872 = alloc_clo(lam8489_fptr, 3);

//setting env list
clo8872[1] = a8315;
clo8872[2] = equal_u63;
clo8872[3] = kont8399;
void* f8400 = encode_clo(clo8872);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f8400;
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

void lam8494_fptr() // lam8494 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8495 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8495);
void* a8318 = decode_clo_array[3];
void* kont8401 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = kont8401;
arg_buffer[3] = a8318;
arg_buffer[4] = a8320;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8494 = encode_clo(alloc_clo(lam8494_fptr, 0));

void odd_u63_fptr() // odd? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8498 = arg_buffer[1];
//reading env and args
void* kont8401 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8873 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8873, 1);
void* a8318 = encode_mpz(mpzvar8873);
mpz_t* mpzvar8874 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8874, 2);
void* a8319 = encode_mpz(mpzvar8874);

//creating new closure instance
void** clo8875 = alloc_clo(lam8494_fptr, 3);

//setting env list
clo8875[1] = equal_u63;
clo8875[2] = kont8401;
clo8875[3] = a8318;
void* f8402 = encode_clo(clo8875);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f8402;
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

void lam8499_fptr() // lam8499 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8500 = arg_buffer[1];
//reading env and args
void* xy8323 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8500);
void* kont8403 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8403;
arg_buffer[2] = xy8323;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8403))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8499 = encode_clo(alloc_clo(lam8499_fptr, 0));

void lam8501_fptr() // lam8501 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8502 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8502);
void* kont8403 = decode_clo_array[3];
void* a8324 = decode_clo_array[2];
void* list_u45ref = decode_clo_array[1];

//clo-app
arg_buffer[1] = list_u45ref;
arg_buffer[2] = kont8403;
arg_buffer[3] = a8324;
arg_buffer[4] = a8326;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8501 = encode_clo(alloc_clo(lam8501_fptr, 0));

void lam8504_fptr() // lam8504 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8505 = arg_buffer[1];
//reading env and args
void* a8324 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8505);
void* kont8403 = decode_clo_array[4];
void* list_u45ref = decode_clo_array[3];
void* n = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8876 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8876, 1);
void* a8325 = encode_mpz(mpzvar8876);

//creating new closure instance
void** clo8877 = alloc_clo(lam8501_fptr, 3);

//setting env list
clo8877[1] = list_u45ref;
clo8877[2] = a8324;
clo8877[3] = kont8403;
void* f8405 = encode_clo(clo8877);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8405;
arg_buffer[3] = n;
arg_buffer[4] = a8325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8504 = encode_clo(alloc_clo(lam8504_fptr, 0));

void lam8506_fptr() // lam8506 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8507 = arg_buffer[1];
//reading env and args
void* a8322 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8507);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8403 = decode_clo_array[5];
void* list_u45ref = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8878 = is_true(a8322);
if(if_guard8878)
{

//creating new closure instance
void** clo8879 = alloc_clo(lam8499_fptr, 1);

//setting env list
clo8879[1] = kont8403;
void* f8404 = encode_clo(clo8879);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8404;
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
void** clo8880 = alloc_clo(lam8504_fptr, 4);

//setting env list
clo8880[1] = _u45;
clo8880[2] = n;
clo8880[3] = list_u45ref;
clo8880[4] = kont8403;
void* f8406 = encode_clo(clo8880);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8406;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8506 = encode_clo(alloc_clo(lam8506_fptr, 0));

void list_u45ref_fptr() // list-ref 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8509 = arg_buffer[1];
//reading env and args
void* kont8403 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8881, 0);
void* a8321 = encode_mpz(mpzvar8881);

//creating new closure instance
void** clo8882 = alloc_clo(lam8506_fptr, 7);

//setting env list
clo8882[1] = car;
clo8882[2] = n;
clo8882[3] = _u45;
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

clo8882[4] = list_u45ref;
clo8882[5] = kont8403;
clo8882[6] = lst;
clo8882[7] = cdr;
void* f8407 = encode_clo(clo8882);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8407;
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

void lam8510_fptr() // lam8510 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8511 = arg_buffer[1];
//reading env and args
void* xy8328 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8511);
void* f8412 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8412;
arg_buffer[2] = xy8328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8412))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8510 = encode_clo(alloc_clo(lam8510_fptr, 0));

void lam8512_fptr() // lam8512 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8513 = arg_buffer[1];
//reading env and args
void* xy8329 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8513);
void* f8412 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8412;
arg_buffer[2] = xy8329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8412))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8512 = encode_clo(alloc_clo(lam8512_fptr, 0));

void lam8515_fptr() // lam8515 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8516 = arg_buffer[1];
//reading env and args
void* a8334 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8516);
void* member = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8408 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member;
arg_buffer[2] = kont8408;
arg_buffer[3] = item;
arg_buffer[4] = a8334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8515 = encode_clo(alloc_clo(lam8515_fptr, 0));

void lam8517_fptr() // lam8517 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* a8333 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8518);
void* cdr = decode_clo_array[5];
void* member = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8408 = decode_clo_array[1];

//if-clause
bool if_guard8883 = is_true(a8333);
if(if_guard8883)
{

//clo-app
arg_buffer[1] = kont8408;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8408))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8884 = alloc_clo(lam8515_fptr, 3);

//setting env list
clo8884[1] = kont8408;
clo8884[2] = item;
clo8884[3] = member;
void* f8409 = encode_clo(clo8884);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8409;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8517 = encode_clo(alloc_clo(lam8517_fptr, 0));

void lam8519_fptr() // lam8519 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8520 = arg_buffer[1];
//reading env and args
void* a8332 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8520);
void* cdr = decode_clo_array[6];
void* member = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* item = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* kont8408 = decode_clo_array[1];

//creating new closure instance
void** clo8885 = alloc_clo(lam8517_fptr, 5);

//setting env list
clo8885[1] = kont8408;
clo8885[2] = item;
clo8885[3] = lst;
clo8885[4] = member;
clo8885[5] = cdr;
void* f8410 = encode_clo(clo8885);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f8410;
arg_buffer[3] = item;
arg_buffer[4] = a8332;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8519 = encode_clo(alloc_clo(lam8519_fptr, 0));

void lam8521_fptr() // lam8521 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8522);
void* cdr = decode_clo_array[7];
void* member = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8408 = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8886 = is_true(a8330);
if(if_guard8886)
{
void* xy8331 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8408;
arg_buffer[2] = xy8331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8408))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8887 = alloc_clo(lam8519_fptr, 6);

//setting env list
clo8887[1] = kont8408;
clo8887[2] = equal_u63;
clo8887[3] = item;
clo8887[4] = lst;
clo8887[5] = member;
clo8887[6] = cdr;
void* f8411 = encode_clo(clo8887);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8411;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8521 = encode_clo(alloc_clo(lam8521_fptr, 0));

void lam8523_fptr() // lam8523 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8524);
void* cdr = decode_clo_array[8];
void* member = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* null_u63 = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8408 = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8888 = alloc_clo(lam8521_fptr, 7);

//setting env list
clo8888[1] = car;
clo8888[2] = kont8408;
clo8888[3] = equal_u63;
clo8888[4] = item;
clo8888[5] = lst;
clo8888[6] = member;
clo8888[7] = cdr;
void* f8412 = encode_clo(clo8888);



//if-clause
bool if_guard8889 = is_true(a8327);
if(if_guard8889)
{

//creating new closure instance
void** clo8890 = alloc_clo(lam8510_fptr, 1);

//setting env list
clo8890[1] = f8412;
void* f8413 = encode_clo(clo8890);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8413;
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
void** clo8891 = alloc_clo(lam8512_fptr, 1);

//setting env list
clo8891[1] = f8412;
void* f8414 = encode_clo(clo8891);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8414;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void member_fptr() // member 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8525 = arg_buffer[1];
//reading env and args
void* kont8408 = arg_buffer[2];
void* item = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8892 = alloc_clo(lam8523_fptr, 8);

//setting env list
clo8892[1] = car;
clo8892[2] = kont8408;
clo8892[3] = equal_u63;
clo8892[4] = item;
clo8892[5] = null_u63;
clo8892[6] = lst;
void* member = encode_clo(alloc_clo(member_fptr, 0));

clo8892[7] = member;
clo8892[8] = cdr;
void* f8415 = encode_clo(clo8892);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8415;
arg_buffer[3] = item;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8528_fptr() // lam8528 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8529 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8529);
void* kont8416 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member_u63;
arg_buffer[2] = kont8416;
arg_buffer[3] = x;
arg_buffer[4] = a8340;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8528 = encode_clo(alloc_clo(lam8528_fptr, 0));

void lam8530_fptr() // lam8530 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8338 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8531);
void* cdr = decode_clo_array[5];
void* kont8416 = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8893 = is_true(a8338);
if(if_guard8893)
{
void* xy8339 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8416;
arg_buffer[2] = xy8339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8416))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8894 = alloc_clo(lam8528_fptr, 3);

//setting env list
clo8894[1] = member_u63;
clo8894[2] = x;
clo8894[3] = kont8416;
void* f8417 = encode_clo(clo8894);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8417;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void lam8532_fptr() // lam8532 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8533 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8533);
void* cdr = decode_clo_array[6];
void* kont8416 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//creating new closure instance
void** clo8895 = alloc_clo(lam8530_fptr, 5);

//setting env list
clo8895[1] = member_u63;
clo8895[2] = x;
clo8895[3] = lst;
clo8895[4] = kont8416;
clo8895[5] = cdr;
void* f8418 = encode_clo(clo8895);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f8418;
arg_buffer[3] = a8337;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void lam8534_fptr() // lam8534 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8535 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8535);
void* cdr = decode_clo_array[7];
void* kont8416 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* equal_u63 = decode_clo_array[4];
void* x = decode_clo_array[3];
void* car = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8896 = is_true(a8335);
if(if_guard8896)
{
void* xy8336 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8416;
arg_buffer[2] = xy8336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8416))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8897 = alloc_clo(lam8532_fptr, 6);

//setting env list
clo8897[1] = member_u63;
clo8897[2] = x;
clo8897[3] = equal_u63;
clo8897[4] = lst;
clo8897[5] = kont8416;
clo8897[6] = cdr;
void* f8419 = encode_clo(clo8897);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8419;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8534 = encode_clo(alloc_clo(lam8534_fptr, 0));

void member_u63_fptr() // member? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8536 = arg_buffer[1];
//reading env and args
void* kont8416 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8898 = alloc_clo(lam8534_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8898[1] = member_u63;
clo8898[2] = car;
clo8898[3] = x;
clo8898[4] = equal_u63;
clo8898[5] = lst;
clo8898[6] = kont8416;
clo8898[7] = cdr;
void* f8420 = encode_clo(clo8898);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8538_fptr() // lam8538 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8539 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8539);
void* kont8421 = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* a8343 = decode_clo_array[1];

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = kont8421;
arg_buffer[3] = a8343;
arg_buffer[4] = a8345;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void lam8540_fptr() // lam8540 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8541 = arg_buffer[1];
//reading env and args
void* a8344 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8541);
void* length = decode_clo_array[4];
void* kont8421 = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* a8343 = decode_clo_array[1];

//creating new closure instance
void** clo8899 = alloc_clo(lam8538_fptr, 3);

//setting env list
clo8899[1] = a8343;
clo8899[2] = _u43;
clo8899[3] = kont8421;
void* f8422 = encode_clo(clo8899);



//clo-app
arg_buffer[1] = length;
arg_buffer[2] = f8422;
arg_buffer[3] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void lam8543_fptr() // lam8543 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8341 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8544);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* length = decode_clo_array[3];
void* kont8421 = decode_clo_array[2];
void* _u43 = decode_clo_array[1];

//if-clause
bool if_guard8900 = is_true(a8341);
if(if_guard8900)
{
mpz_t* mpzvar8901 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8901, 0);
void* xy8342 = encode_mpz(mpzvar8901);

//clo-app
arg_buffer[1] = kont8421;
arg_buffer[2] = xy8342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8421))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{
mpz_t* mpzvar8902 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8902, 1);
void* a8343 = encode_mpz(mpzvar8902);

//creating new closure instance
void** clo8903 = alloc_clo(lam8540_fptr, 4);

//setting env list
clo8903[1] = a8343;
clo8903[2] = _u43;
clo8903[3] = kont8421;
clo8903[4] = length;
void* f8423 = encode_clo(clo8903);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8423;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8543 = encode_clo(alloc_clo(lam8543_fptr, 0));

void length_fptr() // length 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8545 = arg_buffer[1];
//reading env and args
void* kont8421 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8904 = alloc_clo(lam8543_fptr, 5);

//setting env list
clo8904[1] = _u43;
clo8904[2] = kont8421;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8904[3] = length;
clo8904[4] = lst;
clo8904[5] = cdr;
void* f8424 = encode_clo(clo8904);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8546_fptr() // lam8546 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8547 = arg_buffer[1];
//reading env and args
void* xy8347 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8547);
void* kont8425 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8425;
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8546 = encode_clo(alloc_clo(lam8546_fptr, 0));

void lam8548_fptr() // lam8548 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* a8351 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8549);
void* a8349 = decode_clo_array[3];
void* kont8425 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8425;
arg_buffer[3] = a8349;
arg_buffer[4] = a8351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void lam8550_fptr() // lam8550 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8551);
void* a8349 = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* kont8425 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8905 = alloc_clo(lam8548_fptr, 3);

//setting env list
clo8905[1] = cons;
clo8905[2] = kont8425;
clo8905[3] = a8349;
void* f8427 = encode_clo(clo8905);



//clo-app
arg_buffer[1] = map;
arg_buffer[2] = f8427;
arg_buffer[3] = proc;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void lam8552_fptr() // lam8552 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8553 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8553);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* kont8425 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8906 = alloc_clo(lam8550_fptr, 5);

//setting env list
clo8906[1] = cons;
clo8906[2] = kont8425;
clo8906[3] = proc;
clo8906[4] = map;
clo8906[5] = a8349;
void* f8428 = encode_clo(clo8906);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void lam8554_fptr() // lam8554 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8555 = arg_buffer[1];
//reading env and args
void* a8348 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8555);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* kont8425 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8907 = alloc_clo(lam8552_fptr, 6);

//setting env list
clo8907[1] = cons;
clo8907[2] = kont8425;
clo8907[3] = proc;
clo8907[4] = map;
clo8907[5] = lst;
clo8907[6] = cdr;
void* f8429 = encode_clo(clo8907);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8429;
arg_buffer[3] = a8348;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8554 = encode_clo(alloc_clo(lam8554_fptr, 0));

void lam8556_fptr() // lam8556 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8557 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8557);
void* lst = decode_clo_array[8];
void* map = decode_clo_array[7];
void* proc = decode_clo_array[6];
void* kont8425 = decode_clo_array[5];
void* car = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//if-clause
bool if_guard8908 = is_true(a8346);
if(if_guard8908)
{

//creating new closure instance
void** clo8909 = alloc_clo(lam8546_fptr, 1);

//setting env list
clo8909[1] = kont8425;
void* f8426 = encode_clo(clo8909);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8426;
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
void** clo8910 = alloc_clo(lam8554_fptr, 6);

//setting env list
clo8910[1] = cons;
clo8910[2] = kont8425;
clo8910[3] = proc;
clo8910[4] = map;
clo8910[5] = lst;
clo8910[6] = cdr;
void* f8430 = encode_clo(clo8910);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8556 = encode_clo(alloc_clo(lam8556_fptr, 0));

void map_fptr() // map 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8558 = arg_buffer[1];
//reading env and args
void* kont8425 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8911 = alloc_clo(lam8556_fptr, 8);

//setting env list
clo8911[1] = cdr;
clo8911[2] = list;
clo8911[3] = cons;
clo8911[4] = car;
clo8911[5] = kont8425;
clo8911[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8911[7] = map;
clo8911[8] = lst;
void* f8431 = encode_clo(clo8911);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8559_fptr() // lam8559 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8560 = arg_buffer[1];
//reading env and args
void* xy8353 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8560);
void* kont8432 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8432;
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8432))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void lam8561_fptr() // lam8561 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8562 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8562);
void* kont8432 = decode_clo_array[3];
void* a8356 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8432;
arg_buffer[3] = a8356;
arg_buffer[4] = a8358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void lam8563_fptr() // lam8563 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8564 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8564);
void* kont8432 = decode_clo_array[5];
void* filter = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* a8356 = decode_clo_array[2];
void* op = decode_clo_array[1];

//creating new closure instance
void** clo8912 = alloc_clo(lam8561_fptr, 3);

//setting env list
clo8912[1] = cons;
clo8912[2] = a8356;
clo8912[3] = kont8432;
void* f8434 = encode_clo(clo8912);



//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = f8434;
arg_buffer[3] = op;
arg_buffer[4] = a8357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8563 = encode_clo(alloc_clo(lam8563_fptr, 0));

void lam8565_fptr() // lam8565 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8566);
void* cdr = decode_clo_array[6];
void* kont8432 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* op = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8913 = alloc_clo(lam8563_fptr, 5);

//setting env list
clo8913[1] = op;
clo8913[2] = a8356;
clo8913[3] = cons;
clo8913[4] = filter;
clo8913[5] = kont8432;
void* f8435 = encode_clo(clo8913);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8435;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void lam8567_fptr() // lam8567 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8568 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8568);
void* kont8432 = decode_clo_array[3];
void* op = decode_clo_array[2];
void* filter = decode_clo_array[1];

//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = kont8432;
arg_buffer[3] = op;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8567 = encode_clo(alloc_clo(lam8567_fptr, 0));

void lam8569_fptr() // lam8569 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8570 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8570);
void* cdr = decode_clo_array[7];
void* kont8432 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8914 = is_true(a8355);
if(if_guard8914)
{

//creating new closure instance
void** clo8915 = alloc_clo(lam8565_fptr, 6);

//setting env list
clo8915[1] = cons;
clo8915[2] = filter;
clo8915[3] = op;
clo8915[4] = lst;
clo8915[5] = kont8432;
clo8915[6] = cdr;
void* f8436 = encode_clo(clo8915);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8436;
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
void** clo8916 = alloc_clo(lam8567_fptr, 3);

//setting env list
clo8916[1] = filter;
clo8916[2] = op;
clo8916[3] = kont8432;
void* f8437 = encode_clo(clo8916);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8437;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void lam8571_fptr() // lam8571 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8572 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8572);
void* cdr = decode_clo_array[7];
void* kont8432 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8917 = alloc_clo(lam8569_fptr, 7);

//setting env list
clo8917[1] = car;
clo8917[2] = filter;
clo8917[3] = cons;
clo8917[4] = op;
clo8917[5] = lst;
clo8917[6] = kont8432;
clo8917[7] = cdr;
void* f8438 = encode_clo(clo8917);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8438;
arg_buffer[3] = a8354;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void lam8573_fptr() // lam8573 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8574 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8574);
void* kont8432 = decode_clo_array[8];
void* lst = decode_clo_array[7];
void* op = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8918 = is_true(a8352);
if(if_guard8918)
{

//creating new closure instance
void** clo8919 = alloc_clo(lam8559_fptr, 1);

//setting env list
clo8919[1] = kont8432;
void* f8433 = encode_clo(clo8919);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8433;
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
void** clo8920 = alloc_clo(lam8571_fptr, 7);

//setting env list
clo8920[1] = car;
clo8920[2] = filter;
clo8920[3] = cons;
clo8920[4] = op;
clo8920[5] = lst;
clo8920[6] = kont8432;
clo8920[7] = cdr;
void* f8439 = encode_clo(clo8920);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void filter_fptr() // filter 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8575 = arg_buffer[1];
//reading env and args
void* kont8432 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8921 = alloc_clo(lam8573_fptr, 8);

//setting env list
clo8921[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8921[2] = filter;
clo8921[3] = cdr;
clo8921[4] = list;
clo8921[5] = cons;
clo8921[6] = op;
clo8921[7] = lst;
clo8921[8] = kont8432;
void* f8440 = encode_clo(clo8921);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8440;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8576_fptr() // lam8576 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8577 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8577);
void* drop = decode_clo_array[3];
void* kont8441 = decode_clo_array[2];
void* a8362 = decode_clo_array[1];

//clo-app
arg_buffer[1] = drop;
arg_buffer[2] = kont8441;
arg_buffer[3] = a8362;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8576 = encode_clo(alloc_clo(lam8576_fptr, 0));

void lam8579_fptr() // lam8579 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8580 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8580);
void* drop = decode_clo_array[4];
void* kont8441 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8922 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8922, 1);
void* a8363 = encode_mpz(mpzvar8922);

//creating new closure instance
void** clo8923 = alloc_clo(lam8576_fptr, 3);

//setting env list
clo8923[1] = a8362;
clo8923[2] = kont8441;
clo8923[3] = drop;
void* f8442 = encode_clo(clo8923);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8442;
arg_buffer[3] = n;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void lam8581_fptr() // lam8581 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8582);
void* cdr = decode_clo_array[6];
void* kont8441 = decode_clo_array[5];
void* n = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* drop = decode_clo_array[1];

//if-clause
bool if_guard8924 = is_true(a8361);
if(if_guard8924)
{

//clo-app
arg_buffer[1] = kont8441;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8441))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8925 = alloc_clo(lam8579_fptr, 4);

//setting env list
clo8925[1] = _u45;
clo8925[2] = n;
clo8925[3] = kont8441;
clo8925[4] = drop;
void* f8443 = encode_clo(clo8925);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8443;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void drop_fptr() // drop 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8584 = arg_buffer[1];
//reading env and args
void* kont8441 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8926 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8926, 0);
void* a8360 = encode_mpz(mpzvar8926);

//creating new closure instance
void** clo8927 = alloc_clo(lam8581_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8927[1] = drop;
clo8927[2] = lst;
clo8927[3] = _u45;
clo8927[4] = n;
clo8927[5] = kont8441;
clo8927[6] = cdr;
void* f8444 = encode_clo(clo8927);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8444;
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

void lam8585_fptr() // lam8585 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8586 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8586);
void* kont8445 = decode_clo_array[4];
void* a8367 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldl;
arg_buffer[2] = kont8445;
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

void* lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void lam8587_fptr() // lam8587 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8588 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8588);
void* lst = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* foldl = decode_clo_array[3];
void* kont8445 = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo8928 = alloc_clo(lam8585_fptr, 4);

//setting env list
clo8928[1] = foldl;
clo8928[2] = fun;
clo8928[3] = a8367;
clo8928[4] = kont8445;
void* f8446 = encode_clo(clo8928);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8587 = encode_clo(alloc_clo(lam8587_fptr, 0));

void lam8589_fptr() // lam8589 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8590 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8590);
void* lst = decode_clo_array[6];
void* fun = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* foldl = decode_clo_array[3];
void* kont8445 = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo8929 = alloc_clo(lam8587_fptr, 5);

//setting env list
clo8929[1] = cdr;
clo8929[2] = kont8445;
clo8929[3] = foldl;
clo8929[4] = fun;
clo8929[5] = lst;
void* f8447 = encode_clo(clo8929);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8447;
arg_buffer[3] = a8366;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void lam8591_fptr() // lam8591 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8592 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8592);
void* lst = decode_clo_array[7];
void* fun = decode_clo_array[6];
void* acc = decode_clo_array[5];
void* car = decode_clo_array[4];
void* foldl = decode_clo_array[3];
void* kont8445 = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//if-clause
bool if_guard8930 = is_true(a8365);
if(if_guard8930)
{

//clo-app
arg_buffer[1] = kont8445;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8931 = alloc_clo(lam8589_fptr, 6);

//setting env list
clo8931[1] = cdr;
clo8931[2] = kont8445;
clo8931[3] = foldl;
clo8931[4] = acc;
clo8931[5] = fun;
clo8931[6] = lst;
void* f8448 = encode_clo(clo8931);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void foldl_fptr() // foldl 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8593 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8932 = alloc_clo(lam8591_fptr, 7);

//setting env list
clo8932[1] = cdr;
clo8932[2] = kont8445;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8932[3] = foldl;
clo8932[4] = car;
clo8932[5] = acc;
clo8932[6] = fun;
clo8932[7] = lst;
void* f8449 = encode_clo(clo8932);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8449;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8594_fptr() // lam8594 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8595 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8595);
void* fun = decode_clo_array[3];
void* a8370 = decode_clo_array[2];
void* kont8450 = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8450;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void lam8596_fptr() // lam8596 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8597 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8597);
void* foldr = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* a8370 = decode_clo_array[2];
void* kont8450 = decode_clo_array[1];

//creating new closure instance
void** clo8933 = alloc_clo(lam8594_fptr, 3);

//setting env list
clo8933[1] = kont8450;
clo8933[2] = a8370;
clo8933[3] = fun;
void* f8451 = encode_clo(clo8933);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8451;
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

void* lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void lam8598_fptr() // lam8598 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8599 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8599);
void* cdr = decode_clo_array[6];
void* kont8450 = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//creating new closure instance
void** clo8934 = alloc_clo(lam8596_fptr, 5);

//setting env list
clo8934[1] = kont8450;
clo8934[2] = a8370;
clo8934[3] = acc;
clo8934[4] = fun;
clo8934[5] = foldr;
void* f8452 = encode_clo(clo8934);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8452;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8598 = encode_clo(alloc_clo(lam8598_fptr, 0));

void lam8600_fptr() // lam8600 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8601 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8601);
void* cdr = decode_clo_array[7];
void* kont8450 = decode_clo_array[6];
void* fun = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* car = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//if-clause
bool if_guard8935 = is_true(a8369);
if(if_guard8935)
{

//clo-app
arg_buffer[1] = kont8450;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8450))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8936 = alloc_clo(lam8598_fptr, 6);

//setting env list
clo8936[1] = lst;
clo8936[2] = foldr;
clo8936[3] = acc;
clo8936[4] = fun;
clo8936[5] = kont8450;
clo8936[6] = cdr;
void* f8453 = encode_clo(clo8936);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8453;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void foldr_fptr() // foldr 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8602 = arg_buffer[1];
//reading env and args
void* kont8450 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8937 = alloc_clo(lam8600_fptr, 7);

//setting env list
clo8937[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8937[2] = foldr;
clo8937[3] = car;
clo8937[4] = acc;
clo8937[5] = fun;
clo8937[6] = kont8450;
clo8937[7] = cdr;
void* f8454 = encode_clo(clo8937);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8603_fptr() // lam8603 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8604 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8604);
void* reverse_u45helper = decode_clo_array[3];
void* a8374 = decode_clo_array[2];
void* kont8455 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8455;
arg_buffer[3] = a8374;
arg_buffer[4] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void lam8605_fptr() // lam8605 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8606 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8606);
void* reverse_u45helper = decode_clo_array[5];
void* a8374 = decode_clo_array[4];
void* kont8455 = decode_clo_array[3];
void* lst2 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8938 = alloc_clo(lam8603_fptr, 3);

//setting env list
clo8938[1] = kont8455;
clo8938[2] = a8374;
clo8938[3] = reverse_u45helper;
void* f8456 = encode_clo(clo8938);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f8456;
arg_buffer[3] = a8375;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void lam8607_fptr() // lam8607 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8608 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8608);
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* kont8455 = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8939 = alloc_clo(lam8605_fptr, 5);

//setting env list
clo8939[1] = cons;
clo8939[2] = lst2;
clo8939[3] = kont8455;
clo8939[4] = a8374;
clo8939[5] = reverse_u45helper;
void* f8457 = encode_clo(clo8939);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8457;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void lam8609_fptr() // lam8609 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8610 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8610);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* kont8455 = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* cons = decode_clo_array[1];

//if-clause
bool if_guard8940 = is_true(a8373);
if(if_guard8940)
{

//clo-app
arg_buffer[1] = kont8455;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8941 = alloc_clo(lam8607_fptr, 6);

//setting env list
clo8941[1] = cons;
clo8941[2] = car;
clo8941[3] = lst2;
clo8941[4] = kont8455;
clo8941[5] = reverse_u45helper;
clo8941[6] = lst;
void* f8458 = encode_clo(clo8941);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8611 = arg_buffer[1];
//reading env and args
void* kont8455 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8942 = alloc_clo(lam8609_fptr, 7);

//setting env list
clo8942[1] = cons;
clo8942[2] = car;
clo8942[3] = lst2;
clo8942[4] = kont8455;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8942[5] = reverse_u45helper;
clo8942[6] = lst;
clo8942[7] = cdr;
void* f8459 = encode_clo(clo8942);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8459;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8612_fptr() // lam8612 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8613 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8613);
void* lst = decode_clo_array[3];
void* reverse_u45helper = decode_clo_array[2];
void* kont8460 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8460;
arg_buffer[3] = lst;
arg_buffer[4] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void reverse_fptr() // reverse 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8614 = arg_buffer[1];
//reading env and args
void* kont8460 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8943 = alloc_clo(lam8612_fptr, 3);

//setting env list
clo8943[1] = kont8460;
clo8943[2] = reverse_u45helper;
clo8943[3] = lst;
void* f8461 = encode_clo(clo8943);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8461;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8615_fptr() // lam8615 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8616 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8616);
void* kont8462 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* a8379 = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8462;
arg_buffer[3] = a8379;
arg_buffer[4] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8615 = encode_clo(alloc_clo(lam8615_fptr, 0));

void lam8617_fptr() // lam8617 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8618 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8618);
void* kont8462 = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* rhs = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* a8379 = decode_clo_array[1];

//creating new closure instance
void** clo8944 = alloc_clo(lam8615_fptr, 3);

//setting env list
clo8944[1] = a8379;
clo8944[2] = cons;
clo8944[3] = kont8462;
void* f8463 = encode_clo(clo8944);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8463;
arg_buffer[3] = a8380;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void lam8619_fptr() // lam8619 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8620 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8620);
void* cdr = decode_clo_array[6];
void* kont8462 = decode_clo_array[5];
void* lhs = decode_clo_array[4];
void* append1 = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8945 = alloc_clo(lam8617_fptr, 5);

//setting env list
clo8945[1] = a8379;
clo8945[2] = cons;
clo8945[3] = rhs;
clo8945[4] = append1;
clo8945[5] = kont8462;
void* f8464 = encode_clo(clo8945);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8464;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8619 = encode_clo(alloc_clo(lam8619_fptr, 0));

void lam8621_fptr() // lam8621 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8622 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8622);
void* cdr = decode_clo_array[7];
void* kont8462 = decode_clo_array[6];
void* lhs = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8946 = is_true(a8378);
if(if_guard8946)
{

//clo-app
arg_buffer[1] = kont8462;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8947 = alloc_clo(lam8619_fptr, 6);

//setting env list
clo8947[1] = cons;
clo8947[2] = rhs;
clo8947[3] = append1;
clo8947[4] = lhs;
clo8947[5] = kont8462;
clo8947[6] = cdr;
void* f8465 = encode_clo(clo8947);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8465;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void append1_fptr() // append1 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8623 = arg_buffer[1];
//reading env and args
void* kont8462 = arg_buffer[2];
void* lhs = arg_buffer[3];
void* rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8948 = alloc_clo(lam8621_fptr, 7);

//setting env list
clo8948[1] = car;
clo8948[2] = rhs;
clo8948[3] = cons;
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

clo8948[4] = append1;
clo8948[5] = lhs;
clo8948[6] = kont8462;
clo8948[7] = cdr;
void* f8466 = encode_clo(clo8948);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8466;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8624_fptr() // lam8624 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8625 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8625);
void* a8382 = decode_clo_array[4];
void* foldr = decode_clo_array[3];
void* kont8467 = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8467;
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

void* lam8624 = encode_clo(alloc_clo(lam8624_fptr, 0));

void lam8626_fptr() // lam8626 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8627 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8627);
void* a8382 = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8467 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8949 = alloc_clo(lam8624_fptr, 4);

//setting env list
clo8949[1] = append1;
clo8949[2] = kont8467;
clo8949[3] = foldr;
clo8949[4] = a8382;
void* f8468 = encode_clo(clo8949);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8468;
arg_buffer[3] = a8383;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8626 = encode_clo(alloc_clo(lam8626_fptr, 0));

void lam8628_fptr() // lam8628 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8629 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8629);
void* list = decode_clo_array[6];
void* foldr = decode_clo_array[5];
void* kont8467 = decode_clo_array[4];
void* xs = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8950 = alloc_clo(lam8626_fptr, 5);

//setting env list
clo8950[1] = append1;
clo8950[2] = x;
clo8950[3] = kont8467;
clo8950[4] = foldr;
clo8950[5] = a8382;
void* f8469 = encode_clo(clo8950);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8469;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8628 = encode_clo(alloc_clo(lam8628_fptr, 0));

void lam8630_fptr() // lam8630 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8631 = arg_buffer[1];
//reading env and args
void* x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8631);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8467 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8951 = alloc_clo(lam8628_fptr, 6);

//setting env list
clo8951[1] = append1;
clo8951[2] = x;
clo8951[3] = xs;
clo8951[4] = kont8467;
clo8951[5] = foldr;
clo8951[6] = list;
void* f8470 = encode_clo(clo8951);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8470;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8630 = encode_clo(alloc_clo(lam8630_fptr, 0));

void lam8632_fptr() // lam8632 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8633 = arg_buffer[1];
//reading env and args
void* vargs8314 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8633);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8467 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8952 = alloc_clo(lam8630_fptr, 5);

//setting env list
clo8952[1] = xs;
clo8952[2] = append1;
clo8952[3] = kont8467;
clo8952[4] = foldr;
clo8952[5] = list;
void* f8471 = encode_clo(clo8952);



//clo-app
arg_buffer[1] = f8471;
arg_buffer[2] = vargs8314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8632 = encode_clo(alloc_clo(lam8632_fptr, 0));

void lam8634_fptr() // lam8634 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8635 = arg_buffer[1];
//reading env and args
void* xs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8635);
void* foldr = decode_clo_array[6];
void* kont8467 = decode_clo_array[5];
void* vargs8487 = decode_clo_array[4];
void* append1 = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo8953 = alloc_clo(lam8632_fptr, 5);

//setting env list
clo8953[1] = xs;
clo8953[2] = append1;
clo8953[3] = kont8467;
clo8953[4] = foldr;
clo8953[5] = list;
void* f8472 = encode_clo(clo8953);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8472;
arg_buffer[3] = vargs8487;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8634 = encode_clo(alloc_clo(lam8634_fptr, 0));

void append_fptr() // append 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8636 = arg_buffer[1];
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

void* kont8467 = prim_car(vargs);
void* vargs8487 = prim_cdr(vargs);

//creating new closure instance
void** clo8954 = alloc_clo(lam8634_fptr, 6);

//setting env list
clo8954[1] = cdr;
clo8954[2] = list;
clo8954[3] = append1;
clo8954[4] = vargs8487;
clo8954[5] = kont8467;
clo8954[6] = foldr;
void* f8473 = encode_clo(clo8954);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8473;
arg_buffer[3] = vargs8487;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8637_fptr() // lam8637 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8638 = arg_buffer[1];
//reading env and args
void* xy8387 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8638);
void* kont8474 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8474;
arg_buffer[2] = xy8387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8474))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8637 = encode_clo(alloc_clo(lam8637_fptr, 0));

void lam8639_fptr() // lam8639 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8640 = arg_buffer[1];
//reading env and args
void* a8392 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8640);
void* a8388 = decode_clo_array[4];
void* a8390 = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* kont8474 = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8474;
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

void* lam8639 = encode_clo(alloc_clo(lam8639_fptr, 0));

void lam8641_fptr() // lam8641 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8642 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8642);
void* a8388 = decode_clo_array[6];
void* a8390 = decode_clo_array[5];
void* kont8474 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8955 = alloc_clo(lam8639_fptr, 4);

//setting env list
clo8955[1] = kont8474;
clo8955[2] = take_u45helper;
clo8955[3] = a8390;
clo8955[4] = a8388;
void* f8476 = encode_clo(clo8955);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f8476;
arg_buffer[3] = a8391;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8641 = encode_clo(alloc_clo(lam8641_fptr, 0));

void lam8643_fptr() // lam8643 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8644 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8644);
void* lst = decode_clo_array[7];
void* a8388 = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* take_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* kont8474 = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8956 = alloc_clo(lam8641_fptr, 6);

//setting env list
clo8956[1] = lst2;
clo8956[2] = take_u45helper;
clo8956[3] = cons;
clo8956[4] = kont8474;
clo8956[5] = a8390;
clo8956[6] = a8388;
void* f8477 = encode_clo(clo8956);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8477;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8643 = encode_clo(alloc_clo(lam8643_fptr, 0));

void lam8646_fptr() // lam8646 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8647 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8647);
void* lst = decode_clo_array[8];
void* cons = decode_clo_array[7];
void* _u45 = decode_clo_array[6];
void* take_u45helper = decode_clo_array[5];
void* lst2 = decode_clo_array[4];
void* kont8474 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];
mpz_t* mpzvar8957 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8957, 1);
void* a8389 = encode_mpz(mpzvar8957);

//creating new closure instance
void** clo8958 = alloc_clo(lam8643_fptr, 7);

//setting env list
clo8958[1] = car;
clo8958[2] = kont8474;
clo8958[3] = lst2;
clo8958[4] = take_u45helper;
clo8958[5] = cons;
clo8958[6] = a8388;
clo8958[7] = lst;
void* f8478 = encode_clo(clo8958);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8478;
arg_buffer[3] = n;
arg_buffer[4] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8646 = encode_clo(alloc_clo(lam8646_fptr, 0));

void lam8648_fptr() // lam8648 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8649 = arg_buffer[1];
//reading env and args
void* a8386 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8649);
void* cdr = decode_clo_array[10];
void* lst = decode_clo_array[9];
void* reverse = decode_clo_array[8];
void* cons = decode_clo_array[7];
void* _u45 = decode_clo_array[6];
void* take_u45helper = decode_clo_array[5];
void* lst2 = decode_clo_array[4];
void* kont8474 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8959 = is_true(a8386);
if(if_guard8959)
{

//creating new closure instance
void** clo8960 = alloc_clo(lam8637_fptr, 1);

//setting env list
clo8960[1] = kont8474;
void* f8475 = encode_clo(clo8960);



//clo-app
arg_buffer[1] = reverse;
arg_buffer[2] = f8475;
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
void** clo8961 = alloc_clo(lam8646_fptr, 8);

//setting env list
clo8961[1] = car;
clo8961[2] = n;
clo8961[3] = kont8474;
clo8961[4] = lst2;
clo8961[5] = take_u45helper;
clo8961[6] = _u45;
clo8961[7] = cons;
clo8961[8] = lst;
void* f8479 = encode_clo(clo8961);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8479;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8648 = encode_clo(alloc_clo(lam8648_fptr, 0));

void take_u45helper_fptr() // take-helper 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8651 = arg_buffer[1];
//reading env and args
void* kont8474 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8962 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8962, 0);
void* a8385 = encode_mpz(mpzvar8962);

//creating new closure instance
void** clo8963 = alloc_clo(lam8648_fptr, 10);

//setting env list
clo8963[1] = car;
clo8963[2] = n;
clo8963[3] = kont8474;
clo8963[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8963[5] = take_u45helper;
clo8963[6] = _u45;
clo8963[7] = cons;
clo8963[8] = reverse;
clo8963[9] = lst;
clo8963[10] = cdr;
void* f8480 = encode_clo(clo8963);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8480;
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

void lam8652_fptr() // lam8652 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8653 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8653);
void* take_u45helper = decode_clo_array[4];
void* n = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* kont8481 = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8481;
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

void* lam8652 = encode_clo(alloc_clo(lam8652_fptr, 0));

void take_fptr() // take 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8654 = arg_buffer[1];
//reading env and args
void* kont8481 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8964 = alloc_clo(lam8652_fptr, 4);

//setting env list
clo8964[1] = kont8481;
clo8964[2] = lst;
clo8964[3] = n;
clo8964[4] = take_u45helper;
void* f8482 = encode_clo(clo8964);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void call_fptr() // call 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8658 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8965 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8965, 100);
void* a8394 = encode_mpz(mpzvar8965);
mpf_t* mpfvar8966 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8966, "100.5", 10);
void* a8395 = encode_mpf(mpfvar8966);
mpz_t* mpzvar8967 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8967, 100);
void* a8396 = encode_mpz(mpzvar8967);

//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = kont8483;
arg_buffer[3] = a8394;
arg_buffer[4] = a8395;
arg_buffer[5] = a8396;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8659_fptr() // lam8659 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8660 = arg_buffer[1];
//reading env and args
void* xy8397 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8660);
void* kont8484 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8484;
arg_buffer[2] = xy8397;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8484))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8659 = encode_clo(alloc_clo(lam8659_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8661 = arg_buffer[1];
//reading env and args
void* kont8484 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8968 = alloc_clo(lam8659_fptr, 1);

//setting env list
clo8968[1] = kont8484;
void* f8485 = encode_clo(clo8968);



//clo-app
arg_buffer[1] = call;
arg_buffer[2] = f8485;
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

