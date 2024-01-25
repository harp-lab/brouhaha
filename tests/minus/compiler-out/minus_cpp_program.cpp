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
void* _env8672 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8670 = prim_car(lst);
void* lst8673 = prim_cdr(lst);
void* x8671 = apply_prim__u43(lst8673);
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
void* x8671 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8670;
arg_buffer[2] = x8671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8670))[0]);
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
void* _env8676 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8674 = prim_car(lst);
void* lst8677 = prim_cdr(lst);
void* x8675 = apply_prim__u45(lst8677);
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
void* x8675 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8674;
arg_buffer[2] = x8675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8674))[0]);
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
void* _env8680 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8678 = prim_car(lst);
void* lst8681 = prim_cdr(lst);
void* x8679 = apply_prim__u42(lst8681);
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
void* x8679 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8678;
arg_buffer[2] = x8679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8678))[0]);
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
void* _env8684 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8682 = prim_car(lst);
void* lst8685 = prim_cdr(lst);
void* x8683 = apply_prim__u47(lst8685);
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
void* x8683 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8682;
arg_buffer[2] = x8683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682))[0]);
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
void* _env8688 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8686 = prim_car(lst);
void* lst8689 = prim_cdr(lst);
void* x8687 = apply_prim__u61(lst8689);
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
void* x8687 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8686;
arg_buffer[2] = x8687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8686))[0]);
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
void* _env8692 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8690 = prim_car(lst);
void* lst8693 = prim_cdr(lst);
void* x8691 = apply_prim__u62(lst8693);
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
void* x8691 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8690;
arg_buffer[2] = x8691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8690))[0]);
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
void* _env8696 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8694 = prim_car(lst);
void* lst8697 = prim_cdr(lst);
void* x8695 = apply_prim__u60(lst8697);
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
void* x8695 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8694;
arg_buffer[2] = x8695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8694))[0]);
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
void* _env8700 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8698 = prim_car(lst);
void* lst8701 = prim_cdr(lst);
void* x8699 = apply_prim__u60_u61(lst8701);
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
void* x8699 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8698;
arg_buffer[2] = x8699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8698))[0]);
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
void* _env8704 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8702 = prim_car(lst);
void* lst8705 = prim_cdr(lst);
void* x8703 = apply_prim__u62_u61(lst8705);
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
void* x8703 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8702;
arg_buffer[2] = x8703;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8702))[0]);
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
void* _env8708 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8706 = prim_car(lst);
void* lst8709 = prim_cdr(lst);
void* x8707 = apply_prim_modulo(lst8709);
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
void* x8707 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8706;
arg_buffer[2] = x8707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8706))[0]);
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
void* _env8712 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8710 = prim_car(lst);
void* lst8713 = prim_cdr(lst);
void* x8711 = apply_prim_null_u63(lst8713);
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
void* x8711 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8710;
arg_buffer[2] = x8711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8710))[0]);
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
void* _env8716 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8714 = prim_car(lst);
void* lst8717 = prim_cdr(lst);
void* x8715 = apply_prim_equal_u63(lst8717);
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
void* x8715 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8714;
arg_buffer[2] = x8715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8714))[0]);
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
void* _env8720 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8718 = prim_car(lst);
void* lst8721 = prim_cdr(lst);
void* x8719 = apply_prim_eq_u63(lst8721);
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
void* x8719 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8718;
arg_buffer[2] = x8719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8718))[0]);
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
void* _env8724 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8722 = prim_car(lst);
void* lst8725 = prim_cdr(lst);
void* x8723 = apply_prim_cons(lst8725);
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
void* x8723 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8722;
arg_buffer[2] = x8723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8722))[0]);
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
void* _env8728 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8726 = prim_car(lst);
void* lst8729 = prim_cdr(lst);
void* x8727 = apply_prim_car(lst8729);
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
void* x8727 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8726;
arg_buffer[2] = x8727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8726))[0]);
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
void* _env8732 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8730 = prim_car(lst);
void* lst8733 = prim_cdr(lst);
void* x8731 = apply_prim_cdr(lst8733);
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
void* x8731 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont8730;
arg_buffer[2] = x8731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8730))[0]);
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
void* _env8736 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8734 = prim_car(lst);
void* lst8737 = prim_cdr(lst);
void* x8735 = apply_prim_float_u45_u62int(lst8737);
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
void* x8735 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont8734;
arg_buffer[2] = x8735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8734))[0]);
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
void* _env8740 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8738 = prim_car(lst);
void* lst8741 = prim_cdr(lst);
void* x8739 = apply_prim_int_u45_u62float(lst8741);
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
void* x8739 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont8738;
arg_buffer[2] = x8739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8738))[0]);
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
void* _env8744 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8742 = prim_car(lst);
void* lst8745 = prim_cdr(lst);
void* x8743 = apply_prim_hash(lst8745);
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
void* x8743 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont8742;
arg_buffer[2] = x8743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8742))[0]);
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
void* _env8748 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8746 = prim_car(lst);
void* lst8749 = prim_cdr(lst);
void* x8747 = apply_prim_hash_u45ref(lst8749);
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
void* x8747 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont8746;
arg_buffer[2] = x8747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8746))[0]);
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
void* _env8752 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8750 = prim_car(lst);
void* lst8753 = prim_cdr(lst);
void* x8751 = apply_prim_hash_u45set(lst8753);
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
void* x8751 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont8750;
arg_buffer[2] = x8751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8750))[0]);
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
void* _env8756 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8754 = prim_car(lst);
void* lst8757 = prim_cdr(lst);
void* x8755 = apply_prim_hash_u45keys(lst8757);
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
void* x8755 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont8754;
arg_buffer[2] = x8755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8754))[0]);
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
void* _env8760 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8758 = prim_car(lst);
void* lst8761 = prim_cdr(lst);
void* x8759 = apply_prim_hash_u45has_u45key_u63(lst8761);
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
void* x8759 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont8758;
arg_buffer[2] = x8759;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8758))[0]);
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
void* _env8764 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8762 = prim_car(lst);
void* lst8765 = prim_cdr(lst);
void* x8763 = apply_prim_hash_u45count(lst8765);
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
void* x8763 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont8762;
arg_buffer[2] = x8763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8762))[0]);
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
void* _env8768 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8766 = prim_car(lst);
void* lst8769 = prim_cdr(lst);
void* x8767 = apply_prim_set(lst8769);
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
void* x8767 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont8766;
arg_buffer[2] = x8767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8766))[0]);
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
void* _env8772 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8770 = prim_car(lst);
void* lst8773 = prim_cdr(lst);
void* x8771 = apply_prim_set_u45_u62list(lst8773);
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
void* x8771 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont8770;
arg_buffer[2] = x8771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8770))[0]);
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
void* _env8776 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8774 = prim_car(lst);
void* lst8777 = prim_cdr(lst);
void* x8775 = apply_prim_list_u45_u62set(lst8777);
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
void* x8775 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont8774;
arg_buffer[2] = x8775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8774))[0]);
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
void* _env8780 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8778 = prim_car(lst);
void* lst8781 = prim_cdr(lst);
void* x8779 = apply_prim_set_u45add(lst8781);
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
void* x8779 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont8778;
arg_buffer[2] = x8779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8778))[0]);
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
void* _env8784 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8782 = prim_car(lst);
void* lst8785 = prim_cdr(lst);
void* x8783 = apply_prim_set_u45member_u63(lst8785);
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
void* x8783 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont8782;
arg_buffer[2] = x8783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8782))[0]);
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
void* _env8788 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8786 = prim_car(lst);
void* lst8789 = prim_cdr(lst);
void* x8787 = apply_prim_set_u45remove(lst8789);
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
void* x8787 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont8786;
arg_buffer[2] = x8787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8786))[0]);
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
void* _env8792 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8790 = prim_car(lst);
void* lst8793 = prim_cdr(lst);
void* x8791 = apply_prim_set_u45count(lst8793);
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
void* x8791 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont8790;
arg_buffer[2] = x8791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8790))[0]);
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
void* _env8796 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8794 = prim_car(lst);
void* lst8797 = prim_cdr(lst);
void* x8795 = apply_prim_string_u63(lst8797);
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
void* x8795 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont8794;
arg_buffer[2] = x8795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8794))[0]);
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
void* _env8800 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8798 = prim_car(lst);
void* lst8801 = prim_cdr(lst);
void* x8799 = apply_prim_string_u45length(lst8801);
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
void* x8799 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont8798;
arg_buffer[2] = x8799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8798))[0]);
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
void* _env8804 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8802 = prim_car(lst);
void* lst8805 = prim_cdr(lst);
void* x8803 = apply_prim_string_u45ref(lst8805);
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
void* x8803 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont8802;
arg_buffer[2] = x8803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8802))[0]);
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
void* _env8808 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8806 = prim_car(lst);
void* lst8809 = prim_cdr(lst);
void* x8807 = apply_prim_substring(lst8809);
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
void* x8807 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont8806;
arg_buffer[2] = x8807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8806))[0]);
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
void* _env8812 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8810 = prim_car(lst);
void* lst8813 = prim_cdr(lst);
void* x8811 = apply_prim_string_u45append(lst8813);
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
void* x8811 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont8810;
arg_buffer[2] = x8811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8810))[0]);
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
void* _env8816 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8814 = prim_car(lst);
void* lst8817 = prim_cdr(lst);
void* x8815 = apply_prim_string_u45_u62list(lst8817);
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
void* x8815 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont8814;
arg_buffer[2] = x8815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8814))[0]);
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
void* _env8820 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8818 = prim_car(lst);
void* lst8821 = prim_cdr(lst);
void* x8819 = apply_prim_exact_u45floor(lst8821);
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
void* x8819 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont8818;
arg_buffer[2] = x8819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8818))[0]);
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
void* _env8824 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8822 = prim_car(lst);
void* lst8825 = prim_cdr(lst);
void* x8823 = apply_prim_exact_u45ceiling(lst8825);
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
void* x8823 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont8822;
arg_buffer[2] = x8823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8822))[0]);
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
void* _env8828 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8826 = prim_car(lst);
void* lst8829 = prim_cdr(lst);
void* x8827 = apply_prim_exact_u45round(lst8829);
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
void* x8827 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont8826;
arg_buffer[2] = x8827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8826))[0]);
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
void* _env8832 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8830 = prim_car(lst);
void* lst8833 = prim_cdr(lst);
void* x8831 = apply_prim_abs(lst8833);
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
void* x8831 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont8830;
arg_buffer[2] = x8831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8830))[0]);
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
void* _env8836 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8834 = prim_car(lst);
void* lst8837 = prim_cdr(lst);
void* x8835 = apply_prim_max(lst8837);
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
void* x8835 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont8834;
arg_buffer[2] = x8835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8834))[0]);
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
void* _env8840 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8838 = prim_car(lst);
void* lst8841 = prim_cdr(lst);
void* x8839 = apply_prim_min(lst8841);
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
void* x8839 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont8838;
arg_buffer[2] = x8839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8838))[0]);
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
void* _env8844 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8842 = prim_car(lst);
void* lst8845 = prim_cdr(lst);
void* x8843 = apply_prim_expt(lst8845);
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
void* x8843 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont8842;
arg_buffer[2] = x8843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8842))[0]);
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
void* _env8848 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8846 = prim_car(lst);
void* lst8849 = prim_cdr(lst);
void* x8847 = apply_prim_sqrt(lst8849);
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
void* x8847 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont8846;
arg_buffer[2] = x8847;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8846))[0]);
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
void* _env8852 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8850 = prim_car(lst);
void* lst8853 = prim_cdr(lst);
void* x8851 = apply_prim_remainder(lst8853);
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
void* x8851 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont8850;
arg_buffer[2] = x8851;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8850))[0]);
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
void* _env8856 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8854 = prim_car(lst);
void* lst8857 = prim_cdr(lst);
void* x8855 = apply_prim_quotient(lst8857);
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
void* x8855 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont8854;
arg_buffer[2] = x8855;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8854))[0]);
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
void* _env8860 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8858 = prim_car(lst);
void* lst8861 = prim_cdr(lst);
void* x8859 = apply_prim_random(lst8861);
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
void* x8859 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont8858;
arg_buffer[2] = x8859;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8858))[0]);
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
void* _env8864 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8862 = prim_car(lst);
void* lst8865 = prim_cdr(lst);
void* x8863 = apply_prim_symbol_u63(lst8865);
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
void* x8863 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont8862;
arg_buffer[2] = x8863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8862))[0]);
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
void* _env8868 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8866 = prim_car(lst);
void* lst8869 = prim_cdr(lst);
void* x8867 = apply_prim_pair_u63(lst8869);
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
void* x8867 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont8866;
arg_buffer[2] = x8867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8866))[0]);
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
void* _env8872 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8870 = prim_car(lst);
void* lst8873 = prim_cdr(lst);
void* x8871 = apply_prim_positive_u63(lst8873);
arg_buffer[1] = kont8870;
arg_buffer[2] = x8871;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8870))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8870 = arg_buffer[2];
void* x8871 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont8870;
arg_buffer[2] = x8871;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8870))[0]);
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
void* _env8876 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8874 = prim_car(lst);
void* lst8877 = prim_cdr(lst);
void* x8875 = apply_prim_negative_u63(lst8877);
arg_buffer[1] = kont8874;
arg_buffer[2] = x8875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8874))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8874 = arg_buffer[2];
void* x8875 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont8874;
arg_buffer[2] = x8875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8874))[0]);
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
void* _8492 = arg_buffer[1];
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

void* kont8401 = prim_car(x);
void* x8490 = prim_cdr(x);

//clo-app
arg_buffer[1] = kont8401;
arg_buffer[2] = x8490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8401))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8493_fptr() // lam8493 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8494 = arg_buffer[1];
//reading env and args
void* a8317 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8494);
void* kont8402 = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* a8315 = decode_clo_array[1];

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = kont8402;
arg_buffer[3] = a8315;
arg_buffer[4] = a8317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8493 = encode_clo(alloc_clo(lam8493_fptr, 0));

void even_u63_fptr() // even? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8497 = arg_buffer[1];
//reading env and args
void* kont8402 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8878 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8878, 0);
void* a8315 = encode_mpz(mpzvar8878);
mpz_t* mpzvar8879 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8879, 2);
void* a8316 = encode_mpz(mpzvar8879);

//creating new closure instance
void** clo8880 = alloc_clo(lam8493_fptr, 3);

//setting env list
clo8880[1] = a8315;
clo8880[2] = equal_u63;
clo8880[3] = kont8402;
void* f8403 = encode_clo(clo8880);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f8403;
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

void lam8498_fptr() // lam8498 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8499 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8499);
void* a8318 = decode_clo_array[3];
void* kont8404 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = kont8404;
arg_buffer[3] = a8318;
arg_buffer[4] = a8320;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8498 = encode_clo(alloc_clo(lam8498_fptr, 0));

void odd_u63_fptr() // odd? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8502 = arg_buffer[1];
//reading env and args
void* kont8404 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8881, 1);
void* a8318 = encode_mpz(mpzvar8881);
mpz_t* mpzvar8882 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8882, 2);
void* a8319 = encode_mpz(mpzvar8882);

//creating new closure instance
void** clo8883 = alloc_clo(lam8498_fptr, 3);

//setting env list
clo8883[1] = equal_u63;
clo8883[2] = kont8404;
clo8883[3] = a8318;
void* f8405 = encode_clo(clo8883);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f8405;
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

void lam8503_fptr() // lam8503 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* xy8323 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8504);
void* kont8406 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8406;
arg_buffer[2] = xy8323;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8406))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void lam8505_fptr() // lam8505 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8506 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8506);
void* a8324 = decode_clo_array[3];
void* kont8406 = decode_clo_array[2];
void* list_u45ref = decode_clo_array[1];

//clo-app
arg_buffer[1] = list_u45ref;
arg_buffer[2] = kont8406;
arg_buffer[3] = a8324;
arg_buffer[4] = a8326;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8505 = encode_clo(alloc_clo(lam8505_fptr, 0));

void lam8508_fptr() // lam8508 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* a8324 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8509);
void* kont8406 = decode_clo_array[4];
void* list_u45ref = decode_clo_array[3];
void* n = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8884 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8884, 1);
void* a8325 = encode_mpz(mpzvar8884);

//creating new closure instance
void** clo8885 = alloc_clo(lam8505_fptr, 3);

//setting env list
clo8885[1] = list_u45ref;
clo8885[2] = kont8406;
clo8885[3] = a8324;
void* f8408 = encode_clo(clo8885);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8408;
arg_buffer[3] = n;
arg_buffer[4] = a8325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8508 = encode_clo(alloc_clo(lam8508_fptr, 0));

void lam8510_fptr() // lam8510 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8511 = arg_buffer[1];
//reading env and args
void* a8322 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8511);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8406 = decode_clo_array[5];
void* list_u45ref = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8886 = is_true(a8322);
if(if_guard8886)
{

//creating new closure instance
void** clo8887 = alloc_clo(lam8503_fptr, 1);

//setting env list
clo8887[1] = kont8406;
void* f8407 = encode_clo(clo8887);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8407;
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
void** clo8888 = alloc_clo(lam8508_fptr, 4);

//setting env list
clo8888[1] = _u45;
clo8888[2] = n;
clo8888[3] = list_u45ref;
clo8888[4] = kont8406;
void* f8409 = encode_clo(clo8888);



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

void* lam8510 = encode_clo(alloc_clo(lam8510_fptr, 0));

void list_u45ref_fptr() // list-ref 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8513 = arg_buffer[1];
//reading env and args
void* kont8406 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8889 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8889, 0);
void* a8321 = encode_mpz(mpzvar8889);

//creating new closure instance
void** clo8890 = alloc_clo(lam8510_fptr, 7);

//setting env list
clo8890[1] = car;
clo8890[2] = n;
clo8890[3] = _u45;
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

clo8890[4] = list_u45ref;
clo8890[5] = kont8406;
clo8890[6] = lst;
clo8890[7] = cdr;
void* f8410 = encode_clo(clo8890);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8410;
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

void lam8514_fptr() // lam8514 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8515 = arg_buffer[1];
//reading env and args
void* xy8328 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8515);
void* f8415 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8415;
arg_buffer[2] = xy8328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8415))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void lam8516_fptr() // lam8516 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8517 = arg_buffer[1];
//reading env and args
void* xy8329 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8517);
void* f8415 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8415;
arg_buffer[2] = xy8329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8415))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8516 = encode_clo(alloc_clo(lam8516_fptr, 0));

void lam8519_fptr() // lam8519 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8520 = arg_buffer[1];
//reading env and args
void* a8334 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8520);
void* member = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8411 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member;
arg_buffer[2] = kont8411;
arg_buffer[3] = item;
arg_buffer[4] = a8334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
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
void* a8333 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8522);
void* cdr = decode_clo_array[5];
void* member = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8411 = decode_clo_array[1];

//if-clause
bool if_guard8891 = is_true(a8333);
if(if_guard8891)
{

//clo-app
arg_buffer[1] = kont8411;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8411))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8892 = alloc_clo(lam8519_fptr, 3);

//setting env list
clo8892[1] = kont8411;
clo8892[2] = item;
clo8892[3] = member;
void* f8412 = encode_clo(clo8892);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8332 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8524);
void* cdr = decode_clo_array[6];
void* member = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* item = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* kont8411 = decode_clo_array[1];

//creating new closure instance
void** clo8893 = alloc_clo(lam8521_fptr, 5);

//setting env list
clo8893[1] = kont8411;
clo8893[2] = item;
clo8893[3] = lst;
clo8893[4] = member;
clo8893[5] = cdr;
void* f8413 = encode_clo(clo8893);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f8413;
arg_buffer[3] = item;
arg_buffer[4] = a8332;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void lam8525_fptr() // lam8525 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8526 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8526);
void* cdr = decode_clo_array[7];
void* member = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* kont8411 = decode_clo_array[1];

//if-clause
bool if_guard8894 = is_true(a8330);
if(if_guard8894)
{
void* xy8331 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8411;
arg_buffer[2] = xy8331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8411))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8895 = alloc_clo(lam8523_fptr, 6);

//setting env list
clo8895[1] = kont8411;
clo8895[2] = equal_u63;
clo8895[3] = item;
clo8895[4] = lst;
clo8895[5] = member;
clo8895[6] = cdr;
void* f8414 = encode_clo(clo8895);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8414;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8525 = encode_clo(alloc_clo(lam8525_fptr, 0));

void lam8527_fptr() // lam8527 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8528 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8528);
void* cdr = decode_clo_array[8];
void* member = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* null_u63 = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* kont8411 = decode_clo_array[1];

//creating new closure instance
void** clo8896 = alloc_clo(lam8525_fptr, 7);

//setting env list
clo8896[1] = kont8411;
clo8896[2] = car;
clo8896[3] = equal_u63;
clo8896[4] = item;
clo8896[5] = lst;
clo8896[6] = member;
clo8896[7] = cdr;
void* f8415 = encode_clo(clo8896);



//if-clause
bool if_guard8897 = is_true(a8327);
if(if_guard8897)
{

//creating new closure instance
void** clo8898 = alloc_clo(lam8514_fptr, 1);

//setting env list
clo8898[1] = f8415;
void* f8416 = encode_clo(clo8898);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8416;
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
void** clo8899 = alloc_clo(lam8516_fptr, 1);

//setting env list
clo8899[1] = f8415;
void* f8417 = encode_clo(clo8899);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8417;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void member_fptr() // member 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8529 = arg_buffer[1];
//reading env and args
void* kont8411 = arg_buffer[2];
void* item = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8900 = alloc_clo(lam8527_fptr, 8);

//setting env list
clo8900[1] = kont8411;
clo8900[2] = car;
clo8900[3] = equal_u63;
clo8900[4] = item;
clo8900[5] = null_u63;
clo8900[6] = lst;
void* member = encode_clo(alloc_clo(member_fptr, 0));

clo8900[7] = member;
clo8900[8] = cdr;
void* f8418 = encode_clo(clo8900);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8418;
arg_buffer[3] = item;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8532_fptr() // lam8532 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8533 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8533);
void* kont8419 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member_u63;
arg_buffer[2] = kont8419;
arg_buffer[3] = x;
arg_buffer[4] = a8340;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
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
void* a8338 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8535);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* kont8419 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8901 = is_true(a8338);
if(if_guard8901)
{
void* xy8339 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8419;
arg_buffer[2] = xy8339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8419))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8902 = alloc_clo(lam8532_fptr, 3);

//setting env list
clo8902[1] = member_u63;
clo8902[2] = x;
clo8902[3] = kont8419;
void* f8420 = encode_clo(clo8902);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8534 = encode_clo(alloc_clo(lam8534_fptr, 0));

void lam8536_fptr() // lam8536 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8537 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8537);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* kont8419 = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//creating new closure instance
void** clo8903 = alloc_clo(lam8534_fptr, 5);

//setting env list
clo8903[1] = member_u63;
clo8903[2] = x;
clo8903[3] = kont8419;
clo8903[4] = lst;
clo8903[5] = cdr;
void* f8421 = encode_clo(clo8903);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f8421;
arg_buffer[3] = a8337;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8536 = encode_clo(alloc_clo(lam8536_fptr, 0));

void lam8538_fptr() // lam8538 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8539 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8539);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8419 = decode_clo_array[5];
void* equal_u63 = decode_clo_array[4];
void* x = decode_clo_array[3];
void* car = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8904 = is_true(a8335);
if(if_guard8904)
{
void* xy8336 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8419;
arg_buffer[2] = xy8336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8419))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8905 = alloc_clo(lam8536_fptr, 6);

//setting env list
clo8905[1] = member_u63;
clo8905[2] = x;
clo8905[3] = equal_u63;
clo8905[4] = kont8419;
clo8905[5] = lst;
clo8905[6] = cdr;
void* f8422 = encode_clo(clo8905);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void member_u63_fptr() // member? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8540 = arg_buffer[1];
//reading env and args
void* kont8419 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8906 = alloc_clo(lam8538_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8906[1] = member_u63;
clo8906[2] = car;
clo8906[3] = x;
clo8906[4] = equal_u63;
clo8906[5] = kont8419;
clo8906[6] = lst;
clo8906[7] = cdr;
void* f8423 = encode_clo(clo8906);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8423;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8542_fptr() // lam8542 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8543 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8543);
void* _u43 = decode_clo_array[3];
void* a8343 = decode_clo_array[2];
void* kont8424 = decode_clo_array[1];

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = kont8424;
arg_buffer[3] = a8343;
arg_buffer[4] = a8345;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void lam8544_fptr() // lam8544 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8545 = arg_buffer[1];
//reading env and args
void* a8344 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8545);
void* length = decode_clo_array[4];
void* _u43 = decode_clo_array[3];
void* a8343 = decode_clo_array[2];
void* kont8424 = decode_clo_array[1];

//creating new closure instance
void** clo8907 = alloc_clo(lam8542_fptr, 3);

//setting env list
clo8907[1] = kont8424;
clo8907[2] = a8343;
clo8907[3] = _u43;
void* f8425 = encode_clo(clo8907);



//clo-app
arg_buffer[1] = length;
arg_buffer[2] = f8425;
arg_buffer[3] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void lam8547_fptr() // lam8547 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* a8341 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8548);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* length = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* kont8424 = decode_clo_array[1];

//if-clause
bool if_guard8908 = is_true(a8341);
if(if_guard8908)
{
mpz_t* mpzvar8909 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8909, 0);
void* xy8342 = encode_mpz(mpzvar8909);

//clo-app
arg_buffer[1] = kont8424;
arg_buffer[2] = xy8342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{
mpz_t* mpzvar8910 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8910, 1);
void* a8343 = encode_mpz(mpzvar8910);

//creating new closure instance
void** clo8911 = alloc_clo(lam8544_fptr, 4);

//setting env list
clo8911[1] = kont8424;
clo8911[2] = a8343;
clo8911[3] = _u43;
clo8911[4] = length;
void* f8426 = encode_clo(clo8911);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8426;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void length_fptr() // length 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8549 = arg_buffer[1];
//reading env and args
void* kont8424 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8912 = alloc_clo(lam8547_fptr, 5);

//setting env list
clo8912[1] = kont8424;
clo8912[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8912[3] = length;
clo8912[4] = lst;
clo8912[5] = cdr;
void* f8427 = encode_clo(clo8912);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8427;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8550_fptr() // lam8550 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* xy8347 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8551);
void* kont8428 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8428;
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
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
void* a8351 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8553);
void* a8349 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8428 = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8428;
arg_buffer[3] = a8349;
arg_buffer[4] = a8351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8350 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8555);
void* a8349 = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8428 = decode_clo_array[1];

//creating new closure instance
void** clo8913 = alloc_clo(lam8552_fptr, 3);

//setting env list
clo8913[1] = kont8428;
clo8913[2] = cons;
clo8913[3] = a8349;
void* f8430 = encode_clo(clo8913);



//clo-app
arg_buffer[1] = map;
arg_buffer[2] = f8430;
arg_buffer[3] = proc;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8349 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8557);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8428 = decode_clo_array[1];

//creating new closure instance
void** clo8914 = alloc_clo(lam8554_fptr, 5);

//setting env list
clo8914[1] = kont8428;
clo8914[2] = cons;
clo8914[3] = proc;
clo8914[4] = map;
clo8914[5] = a8349;
void* f8431 = encode_clo(clo8914);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8556 = encode_clo(alloc_clo(lam8556_fptr, 0));

void lam8558_fptr() // lam8558 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8559 = arg_buffer[1];
//reading env and args
void* a8348 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8559);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8428 = decode_clo_array[1];

//creating new closure instance
void** clo8915 = alloc_clo(lam8556_fptr, 6);

//setting env list
clo8915[1] = kont8428;
clo8915[2] = cons;
clo8915[3] = proc;
clo8915[4] = map;
clo8915[5] = lst;
clo8915[6] = cdr;
void* f8432 = encode_clo(clo8915);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8432;
arg_buffer[3] = a8348;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8558 = encode_clo(alloc_clo(lam8558_fptr, 0));

void lam8560_fptr() // lam8560 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8561 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8561);
void* lst = decode_clo_array[8];
void* map = decode_clo_array[7];
void* proc = decode_clo_array[6];
void* car = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* kont8428 = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//if-clause
bool if_guard8916 = is_true(a8346);
if(if_guard8916)
{

//creating new closure instance
void** clo8917 = alloc_clo(lam8550_fptr, 1);

//setting env list
clo8917[1] = kont8428;
void* f8429 = encode_clo(clo8917);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8429;
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
void** clo8918 = alloc_clo(lam8558_fptr, 6);

//setting env list
clo8918[1] = kont8428;
clo8918[2] = cons;
clo8918[3] = proc;
clo8918[4] = map;
clo8918[5] = lst;
clo8918[6] = cdr;
void* f8433 = encode_clo(clo8918);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void map_fptr() // map 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8562 = arg_buffer[1];
//reading env and args
void* kont8428 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8919 = alloc_clo(lam8560_fptr, 8);

//setting env list
clo8919[1] = cdr;
clo8919[2] = list;
clo8919[3] = kont8428;
clo8919[4] = cons;
clo8919[5] = car;
clo8919[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8919[7] = map;
clo8919[8] = lst;
void* f8434 = encode_clo(clo8919);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8434;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8563_fptr() // lam8563 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8564 = arg_buffer[1];
//reading env and args
void* xy8353 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8564);
void* kont8435 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8435;
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
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
void* a8358 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8566);
void* kont8435 = decode_clo_array[3];
void* a8356 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8435;
arg_buffer[3] = a8356;
arg_buffer[4] = a8358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8357 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8568);
void* kont8435 = decode_clo_array[5];
void* filter = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* a8356 = decode_clo_array[2];
void* op = decode_clo_array[1];

//creating new closure instance
void** clo8920 = alloc_clo(lam8565_fptr, 3);

//setting env list
clo8920[1] = cons;
clo8920[2] = a8356;
clo8920[3] = kont8435;
void* f8437 = encode_clo(clo8920);



//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = f8437;
arg_buffer[3] = op;
arg_buffer[4] = a8357;
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
void* a8356 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8570);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* kont8435 = decode_clo_array[4];
void* op = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8921 = alloc_clo(lam8567_fptr, 5);

//setting env list
clo8921[1] = op;
clo8921[2] = a8356;
clo8921[3] = cons;
clo8921[4] = filter;
clo8921[5] = kont8435;
void* f8438 = encode_clo(clo8921);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
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
void* a8359 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8572);
void* kont8435 = decode_clo_array[3];
void* op = decode_clo_array[2];
void* filter = decode_clo_array[1];

//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = kont8435;
arg_buffer[3] = op;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8355 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8574);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8435 = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8922 = is_true(a8355);
if(if_guard8922)
{

//creating new closure instance
void** clo8923 = alloc_clo(lam8569_fptr, 6);

//setting env list
clo8923[1] = cons;
clo8923[2] = filter;
clo8923[3] = op;
clo8923[4] = kont8435;
clo8923[5] = lst;
clo8923[6] = cdr;
void* f8439 = encode_clo(clo8923);



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
else
{

//creating new closure instance
void** clo8924 = alloc_clo(lam8571_fptr, 3);

//setting env list
clo8924[1] = filter;
clo8924[2] = op;
clo8924[3] = kont8435;
void* f8440 = encode_clo(clo8924);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8440;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void lam8575_fptr() // lam8575 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8576);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8435 = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8925 = alloc_clo(lam8573_fptr, 7);

//setting env list
clo8925[1] = car;
clo8925[2] = filter;
clo8925[3] = cons;
clo8925[4] = op;
clo8925[5] = kont8435;
clo8925[6] = lst;
clo8925[7] = cdr;
void* f8441 = encode_clo(clo8925);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8441;
arg_buffer[3] = a8354;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void lam8577_fptr() // lam8577 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8578 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8578);
void* lst = decode_clo_array[8];
void* kont8435 = decode_clo_array[7];
void* op = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8926 = is_true(a8352);
if(if_guard8926)
{

//creating new closure instance
void** clo8927 = alloc_clo(lam8563_fptr, 1);

//setting env list
clo8927[1] = kont8435;
void* f8436 = encode_clo(clo8927);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8436;
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
void** clo8928 = alloc_clo(lam8575_fptr, 7);

//setting env list
clo8928[1] = car;
clo8928[2] = filter;
clo8928[3] = cons;
clo8928[4] = op;
clo8928[5] = kont8435;
clo8928[6] = lst;
clo8928[7] = cdr;
void* f8442 = encode_clo(clo8928);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8442;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

void filter_fptr() // filter 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8579 = arg_buffer[1];
//reading env and args
void* kont8435 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8929 = alloc_clo(lam8577_fptr, 8);

//setting env list
clo8929[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8929[2] = filter;
clo8929[3] = cdr;
clo8929[4] = list;
clo8929[5] = cons;
clo8929[6] = op;
clo8929[7] = kont8435;
clo8929[8] = lst;
void* f8443 = encode_clo(clo8929);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8443;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8580_fptr() // lam8580 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8581 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8581);
void* drop = decode_clo_array[3];
void* a8362 = decode_clo_array[2];
void* kont8444 = decode_clo_array[1];

//clo-app
arg_buffer[1] = drop;
arg_buffer[2] = kont8444;
arg_buffer[3] = a8362;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void lam8583_fptr() // lam8583 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8584);
void* drop = decode_clo_array[4];
void* n = decode_clo_array[3];
void* kont8444 = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8930 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8930, 1);
void* a8363 = encode_mpz(mpzvar8930);

//creating new closure instance
void** clo8931 = alloc_clo(lam8580_fptr, 3);

//setting env list
clo8931[1] = kont8444;
clo8931[2] = a8362;
clo8931[3] = drop;
void* f8445 = encode_clo(clo8931);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8445;
arg_buffer[3] = n;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void lam8585_fptr() // lam8585 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8586 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8586);
void* cdr = decode_clo_array[6];
void* n = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* drop = decode_clo_array[3];
void* kont8444 = decode_clo_array[2];
void* _u45 = decode_clo_array[1];

//if-clause
bool if_guard8932 = is_true(a8361);
if(if_guard8932)
{

//clo-app
arg_buffer[1] = kont8444;
arg_buffer[2] = lst;
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
void** clo8933 = alloc_clo(lam8583_fptr, 4);

//setting env list
clo8933[1] = _u45;
clo8933[2] = kont8444;
clo8933[3] = n;
clo8933[4] = drop;
void* f8446 = encode_clo(clo8933);



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

}

void* lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void drop_fptr() // drop 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8588 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8934 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8934, 0);
void* a8360 = encode_mpz(mpzvar8934);

//creating new closure instance
void** clo8935 = alloc_clo(lam8585_fptr, 6);

//setting env list
clo8935[1] = _u45;
clo8935[2] = kont8444;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8935[3] = drop;
clo8935[4] = lst;
clo8935[5] = n;
clo8935[6] = cdr;
void* f8447 = encode_clo(clo8935);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8447;
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

void lam8589_fptr() // lam8589 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8590 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8590);
void* a8367 = decode_clo_array[4];
void* kont8448 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldl;
arg_buffer[2] = kont8448;
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

void* lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void lam8591_fptr() // lam8591 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8592 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8592);
void* cdr = decode_clo_array[5];
void* kont8448 = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo8936 = alloc_clo(lam8589_fptr, 4);

//setting env list
clo8936[1] = foldl;
clo8936[2] = fun;
clo8936[3] = kont8448;
clo8936[4] = a8367;
void* f8449 = encode_clo(clo8936);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8449;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void lam8593_fptr() // lam8593 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8594 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8594);
void* cdr = decode_clo_array[6];
void* kont8448 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* fun = decode_clo_array[3];
void* acc = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo8937 = alloc_clo(lam8591_fptr, 5);

//setting env list
clo8937[1] = foldl;
clo8937[2] = fun;
clo8937[3] = lst;
clo8937[4] = kont8448;
clo8937[5] = cdr;
void* f8450 = encode_clo(clo8937);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8450;
arg_buffer[3] = a8366;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8593 = encode_clo(alloc_clo(lam8593_fptr, 0));

void lam8595_fptr() // lam8595 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8596 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8596);
void* cdr = decode_clo_array[7];
void* kont8448 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* car = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//if-clause
bool if_guard8938 = is_true(a8365);
if(if_guard8938)
{

//clo-app
arg_buffer[1] = kont8448;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8939 = alloc_clo(lam8593_fptr, 6);

//setting env list
clo8939[1] = foldl;
clo8939[2] = acc;
clo8939[3] = fun;
clo8939[4] = lst;
clo8939[5] = kont8448;
clo8939[6] = cdr;
void* f8451 = encode_clo(clo8939);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8451;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8595 = encode_clo(alloc_clo(lam8595_fptr, 0));

void foldl_fptr() // foldl 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8597 = arg_buffer[1];
//reading env and args
void* kont8448 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8940 = alloc_clo(lam8595_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8940[1] = foldl;
clo8940[2] = car;
clo8940[3] = acc;
clo8940[4] = fun;
clo8940[5] = lst;
clo8940[6] = kont8448;
clo8940[7] = cdr;
void* f8452 = encode_clo(clo8940);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8452;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8598_fptr() // lam8598 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8599 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8599);
void* a8370 = decode_clo_array[3];
void* kont8453 = decode_clo_array[2];
void* fun = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8453;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8371 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8601);
void* foldr = decode_clo_array[5];
void* a8370 = decode_clo_array[4];
void* kont8453 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* acc = decode_clo_array[1];

//creating new closure instance
void** clo8941 = alloc_clo(lam8598_fptr, 3);

//setting env list
clo8941[1] = fun;
clo8941[2] = kont8453;
clo8941[3] = a8370;
void* f8454 = encode_clo(clo8941);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8454;
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

void* lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void lam8602_fptr() // lam8602 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8603 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8603);
void* cdr = decode_clo_array[6];
void* kont8453 = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//creating new closure instance
void** clo8942 = alloc_clo(lam8600_fptr, 5);

//setting env list
clo8942[1] = acc;
clo8942[2] = fun;
clo8942[3] = kont8453;
clo8942[4] = a8370;
clo8942[5] = foldr;
void* f8455 = encode_clo(clo8942);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8455;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8602 = encode_clo(alloc_clo(lam8602_fptr, 0));

void lam8604_fptr() // lam8604 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8605 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8605);
void* cdr = decode_clo_array[7];
void* kont8453 = decode_clo_array[6];
void* fun = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* car = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//if-clause
bool if_guard8943 = is_true(a8369);
if(if_guard8943)
{

//clo-app
arg_buffer[1] = kont8453;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8453))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8944 = alloc_clo(lam8602_fptr, 6);

//setting env list
clo8944[1] = lst;
clo8944[2] = foldr;
clo8944[3] = acc;
clo8944[4] = fun;
clo8944[5] = kont8453;
clo8944[6] = cdr;
void* f8456 = encode_clo(clo8944);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8456;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void foldr_fptr() // foldr 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8606 = arg_buffer[1];
//reading env and args
void* kont8453 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8945 = alloc_clo(lam8604_fptr, 7);

//setting env list
clo8945[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8945[2] = foldr;
clo8945[3] = car;
clo8945[4] = acc;
clo8945[5] = fun;
clo8945[6] = kont8453;
clo8945[7] = cdr;
void* f8457 = encode_clo(clo8945);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8457;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8607_fptr() // lam8607 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8608 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8608);
void* reverse_u45helper = decode_clo_array[3];
void* a8374 = decode_clo_array[2];
void* kont8458 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8458;
arg_buffer[3] = a8374;
arg_buffer[4] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8375 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8610);
void* reverse_u45helper = decode_clo_array[5];
void* a8374 = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* kont8458 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8946 = alloc_clo(lam8607_fptr, 3);

//setting env list
clo8946[1] = kont8458;
clo8946[2] = a8374;
clo8946[3] = reverse_u45helper;
void* f8459 = encode_clo(clo8946);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f8459;
arg_buffer[3] = a8375;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void lam8611_fptr() // lam8611 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8612 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8612);
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* lst2 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* kont8458 = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8947 = alloc_clo(lam8609_fptr, 5);

//setting env list
clo8947[1] = cons;
clo8947[2] = kont8458;
clo8947[3] = lst2;
clo8947[4] = a8374;
clo8947[5] = reverse_u45helper;
void* f8460 = encode_clo(clo8947);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8460;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void lam8613_fptr() // lam8613 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8614 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8614);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* lst2 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* kont8458 = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8948 = is_true(a8373);
if(if_guard8948)
{

//clo-app
arg_buffer[1] = kont8458;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8458))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8949 = alloc_clo(lam8611_fptr, 6);

//setting env list
clo8949[1] = car;
clo8949[2] = kont8458;
clo8949[3] = cons;
clo8949[4] = lst2;
clo8949[5] = reverse_u45helper;
clo8949[6] = lst;
void* f8461 = encode_clo(clo8949);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8461;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8613 = encode_clo(alloc_clo(lam8613_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8615 = arg_buffer[1];
//reading env and args
void* kont8458 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8950 = alloc_clo(lam8613_fptr, 7);

//setting env list
clo8950[1] = car;
clo8950[2] = kont8458;
clo8950[3] = cons;
clo8950[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8950[5] = reverse_u45helper;
clo8950[6] = lst;
clo8950[7] = cdr;
void* f8462 = encode_clo(clo8950);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8462;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8616_fptr() // lam8616 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8617 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8617);
void* kont8463 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* reverse_u45helper = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8463;
arg_buffer[3] = lst;
arg_buffer[4] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8616 = encode_clo(alloc_clo(lam8616_fptr, 0));

void reverse_fptr() // reverse 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8618 = arg_buffer[1];
//reading env and args
void* kont8463 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8951 = alloc_clo(lam8616_fptr, 3);

//setting env list
clo8951[1] = reverse_u45helper;
clo8951[2] = lst;
clo8951[3] = kont8463;
void* f8464 = encode_clo(clo8951);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8619_fptr() // lam8619 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8620 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8620);
void* kont8465 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* a8379 = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8465;
arg_buffer[3] = a8379;
arg_buffer[4] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8380 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8622);
void* kont8465 = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* rhs = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* a8379 = decode_clo_array[1];

//creating new closure instance
void** clo8952 = alloc_clo(lam8619_fptr, 3);

//setting env list
clo8952[1] = a8379;
clo8952[2] = cons;
clo8952[3] = kont8465;
void* f8466 = encode_clo(clo8952);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8466;
arg_buffer[3] = a8380;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void lam8623_fptr() // lam8623 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8624 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8624);
void* cdr = decode_clo_array[6];
void* append1 = decode_clo_array[5];
void* rhs = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* lhs = decode_clo_array[2];
void* kont8465 = decode_clo_array[1];

//creating new closure instance
void** clo8953 = alloc_clo(lam8621_fptr, 5);

//setting env list
clo8953[1] = a8379;
clo8953[2] = cons;
clo8953[3] = rhs;
clo8953[4] = append1;
clo8953[5] = kont8465;
void* f8467 = encode_clo(clo8953);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8467;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void lam8625_fptr() // lam8625 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8626 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8626);
void* cdr = decode_clo_array[7];
void* append1 = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* lhs = decode_clo_array[4];
void* kont8465 = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8954 = is_true(a8378);
if(if_guard8954)
{

//clo-app
arg_buffer[1] = kont8465;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8465))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8955 = alloc_clo(lam8623_fptr, 6);

//setting env list
clo8955[1] = kont8465;
clo8955[2] = lhs;
clo8955[3] = cons;
clo8955[4] = rhs;
clo8955[5] = append1;
clo8955[6] = cdr;
void* f8468 = encode_clo(clo8955);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8468;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8625 = encode_clo(alloc_clo(lam8625_fptr, 0));

void append1_fptr() // append1 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8627 = arg_buffer[1];
//reading env and args
void* kont8465 = arg_buffer[2];
void* lhs = arg_buffer[3];
void* rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8956 = alloc_clo(lam8625_fptr, 7);

//setting env list
clo8956[1] = car;
clo8956[2] = rhs;
clo8956[3] = kont8465;
clo8956[4] = lhs;
clo8956[5] = cons;
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

clo8956[6] = append1;
clo8956[7] = cdr;
void* f8469 = encode_clo(clo8956);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8469;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8628_fptr() // lam8628 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8629 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8629);
void* a8382 = decode_clo_array[4];
void* foldr = decode_clo_array[3];
void* kont8470 = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8470;
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

void* lam8628 = encode_clo(alloc_clo(lam8628_fptr, 0));

void lam8630_fptr() // lam8630 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8631 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8631);
void* a8382 = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8470 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8957 = alloc_clo(lam8628_fptr, 4);

//setting env list
clo8957[1] = append1;
clo8957[2] = kont8470;
clo8957[3] = foldr;
clo8957[4] = a8382;
void* f8471 = encode_clo(clo8957);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8471;
arg_buffer[3] = a8383;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
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
void* a8382 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8633);
void* list = decode_clo_array[6];
void* foldr = decode_clo_array[5];
void* kont8470 = decode_clo_array[4];
void* xs = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8958 = alloc_clo(lam8630_fptr, 5);

//setting env list
clo8958[1] = append1;
clo8958[2] = x;
clo8958[3] = kont8470;
clo8958[4] = foldr;
clo8958[5] = a8382;
void* f8472 = encode_clo(clo8958);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8472;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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
void* x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8635);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8470 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8959 = alloc_clo(lam8632_fptr, 6);

//setting env list
clo8959[1] = append1;
clo8959[2] = x;
clo8959[3] = xs;
clo8959[4] = kont8470;
clo8959[5] = foldr;
clo8959[6] = list;
void* f8473 = encode_clo(clo8959);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8473;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8634 = encode_clo(alloc_clo(lam8634_fptr, 0));

void lam8636_fptr() // lam8636 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8637 = arg_buffer[1];
//reading env and args
void* vargs8314 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8637);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8470 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8960 = alloc_clo(lam8634_fptr, 5);

//setting env list
clo8960[1] = xs;
clo8960[2] = append1;
clo8960[3] = kont8470;
clo8960[4] = foldr;
clo8960[5] = list;
void* f8474 = encode_clo(clo8960);



//clo-app
arg_buffer[1] = f8474;
arg_buffer[2] = vargs8314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8636 = encode_clo(alloc_clo(lam8636_fptr, 0));

void lam8638_fptr() // lam8638 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8639 = arg_buffer[1];
//reading env and args
void* xs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8639);
void* foldr = decode_clo_array[6];
void* kont8470 = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* vargs8491 = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo8961 = alloc_clo(lam8636_fptr, 5);

//setting env list
clo8961[1] = xs;
clo8961[2] = append1;
clo8961[3] = kont8470;
clo8961[4] = foldr;
clo8961[5] = list;
void* f8475 = encode_clo(clo8961);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8475;
arg_buffer[3] = vargs8491;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8638 = encode_clo(alloc_clo(lam8638_fptr, 0));

void append_fptr() // append 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8640 = arg_buffer[1];
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

void* kont8470 = prim_car(vargs);
void* vargs8491 = prim_cdr(vargs);

//creating new closure instance
void** clo8962 = alloc_clo(lam8638_fptr, 6);

//setting env list
clo8962[1] = cdr;
clo8962[2] = list;
clo8962[3] = vargs8491;
clo8962[4] = append1;
clo8962[5] = kont8470;
clo8962[6] = foldr;
void* f8476 = encode_clo(clo8962);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8476;
arg_buffer[3] = vargs8491;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8641_fptr() // lam8641 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8642 = arg_buffer[1];
//reading env and args
void* xy8387 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8642);
void* kont8477 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8477;
arg_buffer[2] = xy8387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
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
void* a8392 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8644);
void* kont8477 = decode_clo_array[4];
void* a8388 = decode_clo_array[3];
void* a8390 = decode_clo_array[2];
void* take_u45helper = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8477;
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

void* lam8643 = encode_clo(alloc_clo(lam8643_fptr, 0));

void lam8645_fptr() // lam8645 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8646 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8646);
void* kont8477 = decode_clo_array[6];
void* a8388 = decode_clo_array[5];
void* a8390 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8963 = alloc_clo(lam8643_fptr, 4);

//setting env list
clo8963[1] = take_u45helper;
clo8963[2] = a8390;
clo8963[3] = a8388;
clo8963[4] = kont8477;
void* f8479 = encode_clo(clo8963);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f8479;
arg_buffer[3] = a8391;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8645 = encode_clo(alloc_clo(lam8645_fptr, 0));

void lam8647_fptr() // lam8647 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8648 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8648);
void* kont8477 = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* a8388 = decode_clo_array[5];
void* car = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8964 = alloc_clo(lam8645_fptr, 6);

//setting env list
clo8964[1] = lst2;
clo8964[2] = take_u45helper;
clo8964[3] = cons;
clo8964[4] = a8390;
clo8964[5] = a8388;
clo8964[6] = kont8477;
void* f8480 = encode_clo(clo8964);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8480;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8647 = encode_clo(alloc_clo(lam8647_fptr, 0));

void lam8650_fptr() // lam8650 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8651 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8651);
void* kont8477 = decode_clo_array[8];
void* lst = decode_clo_array[7];
void* cons = decode_clo_array[6];
void* _u45 = decode_clo_array[5];
void* take_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];
mpz_t* mpzvar8965 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8965, 1);
void* a8389 = encode_mpz(mpzvar8965);

//creating new closure instance
void** clo8966 = alloc_clo(lam8647_fptr, 7);

//setting env list
clo8966[1] = lst2;
clo8966[2] = take_u45helper;
clo8966[3] = cons;
clo8966[4] = car;
clo8966[5] = a8388;
clo8966[6] = lst;
clo8966[7] = kont8477;
void* f8481 = encode_clo(clo8966);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8481;
arg_buffer[3] = n;
arg_buffer[4] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8650 = encode_clo(alloc_clo(lam8650_fptr, 0));

void lam8652_fptr() // lam8652 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8653 = arg_buffer[1];
//reading env and args
void* a8386 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8653);
void* lst = decode_clo_array[10];
void* reverse = decode_clo_array[9];
void* cons = decode_clo_array[8];
void* _u45 = decode_clo_array[7];
void* kont8477 = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* take_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8967 = is_true(a8386);
if(if_guard8967)
{

//creating new closure instance
void** clo8968 = alloc_clo(lam8641_fptr, 1);

//setting env list
clo8968[1] = kont8477;
void* f8478 = encode_clo(clo8968);



//clo-app
arg_buffer[1] = reverse;
arg_buffer[2] = f8478;
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
void** clo8969 = alloc_clo(lam8650_fptr, 8);

//setting env list
clo8969[1] = car;
clo8969[2] = n;
clo8969[3] = lst2;
clo8969[4] = take_u45helper;
clo8969[5] = _u45;
clo8969[6] = cons;
clo8969[7] = lst;
clo8969[8] = kont8477;
void* f8482 = encode_clo(clo8969);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8482;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8652 = encode_clo(alloc_clo(lam8652_fptr, 0));

void take_u45helper_fptr() // take-helper 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8655 = arg_buffer[1];
//reading env and args
void* kont8477 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8970 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8970, 0);
void* a8385 = encode_mpz(mpzvar8970);

//creating new closure instance
void** clo8971 = alloc_clo(lam8652_fptr, 10);

//setting env list
clo8971[1] = car;
clo8971[2] = n;
clo8971[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8971[4] = take_u45helper;
clo8971[5] = cdr;
clo8971[6] = kont8477;
clo8971[7] = _u45;
clo8971[8] = cons;
clo8971[9] = reverse;
clo8971[10] = lst;
void* f8483 = encode_clo(clo8971);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8483;
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

void lam8656_fptr() // lam8656 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8657 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8657);
void* lst = decode_clo_array[4];
void* kont8484 = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* n = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8484;
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

void* lam8656 = encode_clo(alloc_clo(lam8656_fptr, 0));

void take_fptr() // take 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8658 = arg_buffer[1];
//reading env and args
void* kont8484 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8972 = alloc_clo(lam8656_fptr, 4);

//setting env list
clo8972[1] = n;
clo8972[2] = take_u45helper;
clo8972[3] = kont8484;
clo8972[4] = lst;
void* f8485 = encode_clo(clo8972);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8660_fptr() // lam8660 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8661 = arg_buffer[1];
//reading env and args
void* a8398 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8661);
void* kont8486 = decode_clo_array[4];
void* a8394 = decode_clo_array[3];
void* a8395 = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8973 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8973, 5);
void* a8399 = encode_mpz(mpzvar8973);

//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = kont8486;
arg_buffer[3] = a8394;
arg_buffer[4] = a8395;
arg_buffer[5] = a8398;
arg_buffer[6] = a8399;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8660 = encode_clo(alloc_clo(lam8660_fptr, 0));

void call_fptr() // call 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8666 = arg_buffer[1];
//reading env and args
void* kont8486 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8974 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8974, 100);
void* a8394 = encode_mpz(mpzvar8974);
mpz_t* mpzvar8975 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8975, 80);
void* a8395 = encode_mpz(mpzvar8975);
mpz_t* mpzvar8976 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8976, 10);
void* a8396 = encode_mpz(mpzvar8976);
mpz_t* mpzvar8977 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8977, 2);
void* a8397 = encode_mpz(mpzvar8977);

//creating new closure instance
void** clo8978 = alloc_clo(lam8660_fptr, 4);

//setting env list
clo8978[1] = _u45;
clo8978[2] = a8395;
clo8978[3] = a8394;
clo8978[4] = kont8486;
void* f8487 = encode_clo(clo8978);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8487;
arg_buffer[3] = a8396;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8667_fptr() // lam8667 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8668 = arg_buffer[1];
//reading env and args
void* xy8400 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8668);
void* kont8488 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8488;
arg_buffer[2] = xy8400;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8488))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8667 = encode_clo(alloc_clo(lam8667_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8669 = arg_buffer[1];
//reading env and args
void* kont8488 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8979 = alloc_clo(lam8667_fptr, 1);

//setting env list
clo8979[1] = kont8488;
void* f8489 = encode_clo(clo8979);



//clo-app
arg_buffer[1] = call;
arg_buffer[2] = f8489;
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

