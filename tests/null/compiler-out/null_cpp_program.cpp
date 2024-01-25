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
void* _env8662 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8660 = prim_car(lst);
void* lst8663 = prim_cdr(lst);
void* x8661 = apply_prim__u43(lst8663);
arg_buffer[1] = kont8660;
arg_buffer[2] = x8661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8660))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8660 = arg_buffer[2];
void* x8661 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8660;
arg_buffer[2] = x8661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8660))[0]);
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
void* _env8666 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8664 = prim_car(lst);
void* lst8667 = prim_cdr(lst);
void* x8665 = apply_prim__u45(lst8667);
arg_buffer[1] = kont8664;
arg_buffer[2] = x8665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8664))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8664 = arg_buffer[2];
void* x8665 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8664;
arg_buffer[2] = x8665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8664))[0]);
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
void* _env8670 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8668 = prim_car(lst);
void* lst8671 = prim_cdr(lst);
void* x8669 = apply_prim__u42(lst8671);
arg_buffer[1] = kont8668;
arg_buffer[2] = x8669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8668))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8668 = arg_buffer[2];
void* x8669 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8668;
arg_buffer[2] = x8669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8668))[0]);
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
void* _env8674 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8672 = prim_car(lst);
void* lst8675 = prim_cdr(lst);
void* x8673 = apply_prim__u47(lst8675);
arg_buffer[1] = kont8672;
arg_buffer[2] = x8673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8672))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8672 = arg_buffer[2];
void* x8673 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8672;
arg_buffer[2] = x8673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8672))[0]);
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
void* _env8678 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8676 = prim_car(lst);
void* lst8679 = prim_cdr(lst);
void* x8677 = apply_prim__u61(lst8679);
arg_buffer[1] = kont8676;
arg_buffer[2] = x8677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8676))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8676 = arg_buffer[2];
void* x8677 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8676;
arg_buffer[2] = x8677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8676))[0]);
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
void* _env8682 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8680 = prim_car(lst);
void* lst8683 = prim_cdr(lst);
void* x8681 = apply_prim__u62(lst8683);
arg_buffer[1] = kont8680;
arg_buffer[2] = x8681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8680))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8680 = arg_buffer[2];
void* x8681 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8680;
arg_buffer[2] = x8681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8680))[0]);
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
void* _env8686 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8684 = prim_car(lst);
void* lst8687 = prim_cdr(lst);
void* x8685 = apply_prim__u60(lst8687);
arg_buffer[1] = kont8684;
arg_buffer[2] = x8685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8684))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8684 = arg_buffer[2];
void* x8685 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8684;
arg_buffer[2] = x8685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8684))[0]);
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
void* _env8690 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8688 = prim_car(lst);
void* lst8691 = prim_cdr(lst);
void* x8689 = apply_prim__u60_u61(lst8691);
arg_buffer[1] = kont8688;
arg_buffer[2] = x8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8688 = arg_buffer[2];
void* x8689 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8688;
arg_buffer[2] = x8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
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
void* _env8694 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8692 = prim_car(lst);
void* lst8695 = prim_cdr(lst);
void* x8693 = apply_prim__u62_u61(lst8695);
arg_buffer[1] = kont8692;
arg_buffer[2] = x8693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8692))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8692 = arg_buffer[2];
void* x8693 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8692;
arg_buffer[2] = x8693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8692))[0]);
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
void* _env8698 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8696 = prim_car(lst);
void* lst8699 = prim_cdr(lst);
void* x8697 = apply_prim_modulo(lst8699);
arg_buffer[1] = kont8696;
arg_buffer[2] = x8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8696))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8696 = arg_buffer[2];
void* x8697 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8696;
arg_buffer[2] = x8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8696))[0]);
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
void* _env8702 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8700 = prim_car(lst);
void* lst8703 = prim_cdr(lst);
void* x8701 = apply_prim_null_u63(lst8703);
arg_buffer[1] = kont8700;
arg_buffer[2] = x8701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8700))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8700 = arg_buffer[2];
void* x8701 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8700;
arg_buffer[2] = x8701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8700))[0]);
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
void* _env8706 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8704 = prim_car(lst);
void* lst8707 = prim_cdr(lst);
void* x8705 = apply_prim_equal_u63(lst8707);
arg_buffer[1] = kont8704;
arg_buffer[2] = x8705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8704 = arg_buffer[2];
void* x8705 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8704;
arg_buffer[2] = x8705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
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
void* _env8710 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8708 = prim_car(lst);
void* lst8711 = prim_cdr(lst);
void* x8709 = apply_prim_eq_u63(lst8711);
arg_buffer[1] = kont8708;
arg_buffer[2] = x8709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8708 = arg_buffer[2];
void* x8709 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8708;
arg_buffer[2] = x8709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
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
void* _env8714 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8712 = prim_car(lst);
void* lst8715 = prim_cdr(lst);
void* x8713 = apply_prim_cons(lst8715);
arg_buffer[1] = kont8712;
arg_buffer[2] = x8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8712 = arg_buffer[2];
void* x8713 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8712;
arg_buffer[2] = x8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
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
void* _env8718 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8716 = prim_car(lst);
void* lst8719 = prim_cdr(lst);
void* x8717 = apply_prim_car(lst8719);
arg_buffer[1] = kont8716;
arg_buffer[2] = x8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8716 = arg_buffer[2];
void* x8717 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8716;
arg_buffer[2] = x8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
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
void* _env8722 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8720 = prim_car(lst);
void* lst8723 = prim_cdr(lst);
void* x8721 = apply_prim_cdr(lst8723);
arg_buffer[1] = kont8720;
arg_buffer[2] = x8721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8720 = arg_buffer[2];
void* x8721 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont8720;
arg_buffer[2] = x8721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
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
void* _env8726 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8724 = prim_car(lst);
void* lst8727 = prim_cdr(lst);
void* x8725 = apply_prim_float_u45_u62int(lst8727);
arg_buffer[1] = kont8724;
arg_buffer[2] = x8725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8724 = arg_buffer[2];
void* x8725 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont8724;
arg_buffer[2] = x8725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
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
void* _env8730 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8728 = prim_car(lst);
void* lst8731 = prim_cdr(lst);
void* x8729 = apply_prim_int_u45_u62float(lst8731);
arg_buffer[1] = kont8728;
arg_buffer[2] = x8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8728 = arg_buffer[2];
void* x8729 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont8728;
arg_buffer[2] = x8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
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
void* _env8734 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8732 = prim_car(lst);
void* lst8735 = prim_cdr(lst);
void* x8733 = apply_prim_hash(lst8735);
arg_buffer[1] = kont8732;
arg_buffer[2] = x8733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8732 = arg_buffer[2];
void* x8733 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont8732;
arg_buffer[2] = x8733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
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
void* _env8738 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8736 = prim_car(lst);
void* lst8739 = prim_cdr(lst);
void* x8737 = apply_prim_hash_u45ref(lst8739);
arg_buffer[1] = kont8736;
arg_buffer[2] = x8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8736 = arg_buffer[2];
void* x8737 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont8736;
arg_buffer[2] = x8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
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
void* _env8742 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8740 = prim_car(lst);
void* lst8743 = prim_cdr(lst);
void* x8741 = apply_prim_hash_u45set(lst8743);
arg_buffer[1] = kont8740;
arg_buffer[2] = x8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8740))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8740 = arg_buffer[2];
void* x8741 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont8740;
arg_buffer[2] = x8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8740))[0]);
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
void* _env8746 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8744 = prim_car(lst);
void* lst8747 = prim_cdr(lst);
void* x8745 = apply_prim_hash_u45keys(lst8747);
arg_buffer[1] = kont8744;
arg_buffer[2] = x8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8744))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8744 = arg_buffer[2];
void* x8745 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont8744;
arg_buffer[2] = x8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8744))[0]);
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
void* _env8750 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8748 = prim_car(lst);
void* lst8751 = prim_cdr(lst);
void* x8749 = apply_prim_hash_u45has_u45key_u63(lst8751);
arg_buffer[1] = kont8748;
arg_buffer[2] = x8749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8748))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8748 = arg_buffer[2];
void* x8749 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont8748;
arg_buffer[2] = x8749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8748))[0]);
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
void* _env8754 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8752 = prim_car(lst);
void* lst8755 = prim_cdr(lst);
void* x8753 = apply_prim_hash_u45count(lst8755);
arg_buffer[1] = kont8752;
arg_buffer[2] = x8753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8752))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8752 = arg_buffer[2];
void* x8753 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont8752;
arg_buffer[2] = x8753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8752))[0]);
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
void* _env8758 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8756 = prim_car(lst);
void* lst8759 = prim_cdr(lst);
void* x8757 = apply_prim_set(lst8759);
arg_buffer[1] = kont8756;
arg_buffer[2] = x8757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8756))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8756 = arg_buffer[2];
void* x8757 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont8756;
arg_buffer[2] = x8757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8756))[0]);
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
void* _env8762 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8760 = prim_car(lst);
void* lst8763 = prim_cdr(lst);
void* x8761 = apply_prim_set_u45_u62list(lst8763);
arg_buffer[1] = kont8760;
arg_buffer[2] = x8761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8760))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8760 = arg_buffer[2];
void* x8761 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont8760;
arg_buffer[2] = x8761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8760))[0]);
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
void* _env8766 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8764 = prim_car(lst);
void* lst8767 = prim_cdr(lst);
void* x8765 = apply_prim_list_u45_u62set(lst8767);
arg_buffer[1] = kont8764;
arg_buffer[2] = x8765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8764))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8764 = arg_buffer[2];
void* x8765 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont8764;
arg_buffer[2] = x8765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8764))[0]);
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
void* _env8770 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8768 = prim_car(lst);
void* lst8771 = prim_cdr(lst);
void* x8769 = apply_prim_set_u45add(lst8771);
arg_buffer[1] = kont8768;
arg_buffer[2] = x8769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8768))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8768 = arg_buffer[2];
void* x8769 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont8768;
arg_buffer[2] = x8769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8768))[0]);
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
void* _env8774 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8772 = prim_car(lst);
void* lst8775 = prim_cdr(lst);
void* x8773 = apply_prim_set_u45member_u63(lst8775);
arg_buffer[1] = kont8772;
arg_buffer[2] = x8773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8772))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8772 = arg_buffer[2];
void* x8773 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont8772;
arg_buffer[2] = x8773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8772))[0]);
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
void* _env8778 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8776 = prim_car(lst);
void* lst8779 = prim_cdr(lst);
void* x8777 = apply_prim_set_u45remove(lst8779);
arg_buffer[1] = kont8776;
arg_buffer[2] = x8777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8776))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8776 = arg_buffer[2];
void* x8777 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont8776;
arg_buffer[2] = x8777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8776))[0]);
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
void* _env8782 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8780 = prim_car(lst);
void* lst8783 = prim_cdr(lst);
void* x8781 = apply_prim_set_u45count(lst8783);
arg_buffer[1] = kont8780;
arg_buffer[2] = x8781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8780))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8780 = arg_buffer[2];
void* x8781 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont8780;
arg_buffer[2] = x8781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8780))[0]);
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
void* _env8786 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8784 = prim_car(lst);
void* lst8787 = prim_cdr(lst);
void* x8785 = apply_prim_string_u63(lst8787);
arg_buffer[1] = kont8784;
arg_buffer[2] = x8785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8784))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8784 = arg_buffer[2];
void* x8785 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont8784;
arg_buffer[2] = x8785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8784))[0]);
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
void* _env8790 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8788 = prim_car(lst);
void* lst8791 = prim_cdr(lst);
void* x8789 = apply_prim_string_u45length(lst8791);
arg_buffer[1] = kont8788;
arg_buffer[2] = x8789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8788))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8788 = arg_buffer[2];
void* x8789 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont8788;
arg_buffer[2] = x8789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8788))[0]);
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
void* _env8794 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8792 = prim_car(lst);
void* lst8795 = prim_cdr(lst);
void* x8793 = apply_prim_string_u45ref(lst8795);
arg_buffer[1] = kont8792;
arg_buffer[2] = x8793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8792))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8792 = arg_buffer[2];
void* x8793 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont8792;
arg_buffer[2] = x8793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8792))[0]);
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
void* _env8798 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8796 = prim_car(lst);
void* lst8799 = prim_cdr(lst);
void* x8797 = apply_prim_substring(lst8799);
arg_buffer[1] = kont8796;
arg_buffer[2] = x8797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8796))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8796 = arg_buffer[2];
void* x8797 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont8796;
arg_buffer[2] = x8797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8796))[0]);
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
void* _env8802 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8800 = prim_car(lst);
void* lst8803 = prim_cdr(lst);
void* x8801 = apply_prim_string_u45append(lst8803);
arg_buffer[1] = kont8800;
arg_buffer[2] = x8801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8800))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8800 = arg_buffer[2];
void* x8801 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont8800;
arg_buffer[2] = x8801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8800))[0]);
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
void* _env8806 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8804 = prim_car(lst);
void* lst8807 = prim_cdr(lst);
void* x8805 = apply_prim_string_u45_u62list(lst8807);
arg_buffer[1] = kont8804;
arg_buffer[2] = x8805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8804))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8804 = arg_buffer[2];
void* x8805 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont8804;
arg_buffer[2] = x8805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8804))[0]);
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
void* _env8810 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8808 = prim_car(lst);
void* lst8811 = prim_cdr(lst);
void* x8809 = apply_prim_exact_u45floor(lst8811);
arg_buffer[1] = kont8808;
arg_buffer[2] = x8809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8808))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8808 = arg_buffer[2];
void* x8809 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont8808;
arg_buffer[2] = x8809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8808))[0]);
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
void* _env8814 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8812 = prim_car(lst);
void* lst8815 = prim_cdr(lst);
void* x8813 = apply_prim_exact_u45ceiling(lst8815);
arg_buffer[1] = kont8812;
arg_buffer[2] = x8813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8812))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8812 = arg_buffer[2];
void* x8813 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont8812;
arg_buffer[2] = x8813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8812))[0]);
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
void* _env8818 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8816 = prim_car(lst);
void* lst8819 = prim_cdr(lst);
void* x8817 = apply_prim_exact_u45round(lst8819);
arg_buffer[1] = kont8816;
arg_buffer[2] = x8817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8816))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8816 = arg_buffer[2];
void* x8817 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont8816;
arg_buffer[2] = x8817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8816))[0]);
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
void* _env8822 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8820 = prim_car(lst);
void* lst8823 = prim_cdr(lst);
void* x8821 = apply_prim_abs(lst8823);
arg_buffer[1] = kont8820;
arg_buffer[2] = x8821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8820))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8820 = arg_buffer[2];
void* x8821 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont8820;
arg_buffer[2] = x8821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8820))[0]);
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
void* _env8826 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8824 = prim_car(lst);
void* lst8827 = prim_cdr(lst);
void* x8825 = apply_prim_max(lst8827);
arg_buffer[1] = kont8824;
arg_buffer[2] = x8825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8824))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8824 = arg_buffer[2];
void* x8825 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont8824;
arg_buffer[2] = x8825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8824))[0]);
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
void* _env8830 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8828 = prim_car(lst);
void* lst8831 = prim_cdr(lst);
void* x8829 = apply_prim_min(lst8831);
arg_buffer[1] = kont8828;
arg_buffer[2] = x8829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8828))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8828 = arg_buffer[2];
void* x8829 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont8828;
arg_buffer[2] = x8829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8828))[0]);
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
void* _env8834 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8832 = prim_car(lst);
void* lst8835 = prim_cdr(lst);
void* x8833 = apply_prim_expt(lst8835);
arg_buffer[1] = kont8832;
arg_buffer[2] = x8833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8832))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8832 = arg_buffer[2];
void* x8833 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont8832;
arg_buffer[2] = x8833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8832))[0]);
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
void* _env8838 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8836 = prim_car(lst);
void* lst8839 = prim_cdr(lst);
void* x8837 = apply_prim_sqrt(lst8839);
arg_buffer[1] = kont8836;
arg_buffer[2] = x8837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8836))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8836 = arg_buffer[2];
void* x8837 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont8836;
arg_buffer[2] = x8837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8836))[0]);
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
void* _env8842 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8840 = prim_car(lst);
void* lst8843 = prim_cdr(lst);
void* x8841 = apply_prim_remainder(lst8843);
arg_buffer[1] = kont8840;
arg_buffer[2] = x8841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8840))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8840 = arg_buffer[2];
void* x8841 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont8840;
arg_buffer[2] = x8841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8840))[0]);
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
void* _env8846 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8844 = prim_car(lst);
void* lst8847 = prim_cdr(lst);
void* x8845 = apply_prim_quotient(lst8847);
arg_buffer[1] = kont8844;
arg_buffer[2] = x8845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8844))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8844 = arg_buffer[2];
void* x8845 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont8844;
arg_buffer[2] = x8845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8844))[0]);
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
void* _env8850 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8848 = prim_car(lst);
void* lst8851 = prim_cdr(lst);
void* x8849 = apply_prim_random(lst8851);
arg_buffer[1] = kont8848;
arg_buffer[2] = x8849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8848))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8848 = arg_buffer[2];
void* x8849 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont8848;
arg_buffer[2] = x8849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8848))[0]);
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
void* _env8854 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8852 = prim_car(lst);
void* lst8855 = prim_cdr(lst);
void* x8853 = apply_prim_symbol_u63(lst8855);
arg_buffer[1] = kont8852;
arg_buffer[2] = x8853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8852))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8852 = arg_buffer[2];
void* x8853 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont8852;
arg_buffer[2] = x8853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8852))[0]);
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
void* _env8858 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8856 = prim_car(lst);
void* lst8859 = prim_cdr(lst);
void* x8857 = apply_prim_pair_u63(lst8859);
arg_buffer[1] = kont8856;
arg_buffer[2] = x8857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8856))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8856 = arg_buffer[2];
void* x8857 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont8856;
arg_buffer[2] = x8857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8856))[0]);
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
void* _env8862 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8860 = prim_car(lst);
void* lst8863 = prim_cdr(lst);
void* x8861 = apply_prim_positive_u63(lst8863);
arg_buffer[1] = kont8860;
arg_buffer[2] = x8861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8860 = arg_buffer[2];
void* x8861 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont8860;
arg_buffer[2] = x8861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);
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
void* _env8866 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8864 = prim_car(lst);
void* lst8867 = prim_cdr(lst);
void* x8865 = apply_prim_negative_u63(lst8867);
arg_buffer[1] = kont8864;
arg_buffer[2] = x8865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8864 = arg_buffer[2];
void* x8865 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont8864;
arg_buffer[2] = x8865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);
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
void* _8487 = arg_buffer[1];
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

void* kont8396 = prim_car(x);
void* x8485 = prim_cdr(x);

//clo-app
arg_buffer[1] = kont8396;
arg_buffer[2] = x8485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8396))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8488_fptr() // lam8488 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8489 = arg_buffer[1];
//reading env and args
void* a8317 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8489);
void* kont8397 = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* a8315 = decode_clo_array[1];

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = kont8397;
arg_buffer[3] = a8315;
arg_buffer[4] = a8317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8488 = encode_clo(alloc_clo(lam8488_fptr, 0));

void even_u63_fptr() // even? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8492 = arg_buffer[1];
//reading env and args
void* kont8397 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8868 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8868, 0);
void* a8315 = encode_mpz(mpzvar8868);
mpz_t* mpzvar8869 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8869, 2);
void* a8316 = encode_mpz(mpzvar8869);

//creating new closure instance
void** clo8870 = alloc_clo(lam8488_fptr, 3);

//setting env list
clo8870[1] = a8315;
clo8870[2] = equal_u63;
clo8870[3] = kont8397;
void* f8398 = encode_clo(clo8870);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f8398;
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

void lam8493_fptr() // lam8493 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8494 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8494);
void* a8318 = decode_clo_array[3];
void* kont8399 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = kont8399;
arg_buffer[3] = a8318;
arg_buffer[4] = a8320;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8493 = encode_clo(alloc_clo(lam8493_fptr, 0));

void odd_u63_fptr() // odd? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8497 = arg_buffer[1];
//reading env and args
void* kont8399 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8871 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8871, 1);
void* a8318 = encode_mpz(mpzvar8871);
mpz_t* mpzvar8872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8872, 2);
void* a8319 = encode_mpz(mpzvar8872);

//creating new closure instance
void** clo8873 = alloc_clo(lam8493_fptr, 3);

//setting env list
clo8873[1] = equal_u63;
clo8873[2] = kont8399;
clo8873[3] = a8318;
void* f8400 = encode_clo(clo8873);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f8400;
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

void lam8498_fptr() // lam8498 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8499 = arg_buffer[1];
//reading env and args
void* xy8323 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8499);
void* kont8401 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8401;
arg_buffer[2] = xy8323;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8401))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8498 = encode_clo(alloc_clo(lam8498_fptr, 0));

void lam8500_fptr() // lam8500 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8501 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8501);
void* kont8401 = decode_clo_array[3];
void* a8324 = decode_clo_array[2];
void* list_u45ref = decode_clo_array[1];

//clo-app
arg_buffer[1] = list_u45ref;
arg_buffer[2] = kont8401;
arg_buffer[3] = a8324;
arg_buffer[4] = a8326;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8500 = encode_clo(alloc_clo(lam8500_fptr, 0));

void lam8503_fptr() // lam8503 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8324 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8504);
void* kont8401 = decode_clo_array[4];
void* list_u45ref = decode_clo_array[3];
void* n = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8874 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8874, 1);
void* a8325 = encode_mpz(mpzvar8874);

//creating new closure instance
void** clo8875 = alloc_clo(lam8500_fptr, 3);

//setting env list
clo8875[1] = list_u45ref;
clo8875[2] = a8324;
clo8875[3] = kont8401;
void* f8403 = encode_clo(clo8875);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8403;
arg_buffer[3] = n;
arg_buffer[4] = a8325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a8322 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8506);
void* cdr = decode_clo_array[7];
void* list_u45ref = decode_clo_array[6];
void* _u45 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* kont8401 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8876 = is_true(a8322);
if(if_guard8876)
{

//creating new closure instance
void** clo8877 = alloc_clo(lam8498_fptr, 1);

//setting env list
clo8877[1] = kont8401;
void* f8402 = encode_clo(clo8877);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8402;
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
void** clo8878 = alloc_clo(lam8503_fptr, 4);

//setting env list
clo8878[1] = _u45;
clo8878[2] = n;
clo8878[3] = list_u45ref;
clo8878[4] = kont8401;
void* f8404 = encode_clo(clo8878);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8404;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8505 = encode_clo(alloc_clo(lam8505_fptr, 0));

void list_u45ref_fptr() // list-ref 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8508 = arg_buffer[1];
//reading env and args
void* kont8401 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8879 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8879, 0);
void* a8321 = encode_mpz(mpzvar8879);

//creating new closure instance
void** clo8880 = alloc_clo(lam8505_fptr, 7);

//setting env list
clo8880[1] = car;
clo8880[2] = n;
clo8880[3] = kont8401;
clo8880[4] = lst;
clo8880[5] = _u45;
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

clo8880[6] = list_u45ref;
clo8880[7] = cdr;
void* f8405 = encode_clo(clo8880);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8405;
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

void lam8509_fptr() // lam8509 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8510 = arg_buffer[1];
//reading env and args
void* xy8328 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8510);
void* f8410 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8410;
arg_buffer[2] = xy8328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8410))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8509 = encode_clo(alloc_clo(lam8509_fptr, 0));

void lam8511_fptr() // lam8511 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8512 = arg_buffer[1];
//reading env and args
void* xy8329 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8512);
void* f8410 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8410;
arg_buffer[2] = xy8329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8410))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8511 = encode_clo(alloc_clo(lam8511_fptr, 0));

void lam8514_fptr() // lam8514 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8515 = arg_buffer[1];
//reading env and args
void* a8334 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8515);
void* member = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8406 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member;
arg_buffer[2] = kont8406;
arg_buffer[3] = item;
arg_buffer[4] = a8334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
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
void* a8333 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8517);
void* cdr = decode_clo_array[5];
void* member = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8406 = decode_clo_array[1];

//if-clause
bool if_guard8881 = is_true(a8333);
if(if_guard8881)
{

//clo-app
arg_buffer[1] = kont8406;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8406))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8882 = alloc_clo(lam8514_fptr, 3);

//setting env list
clo8882[1] = kont8406;
clo8882[2] = item;
clo8882[3] = member;
void* f8407 = encode_clo(clo8882);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8407;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8516 = encode_clo(alloc_clo(lam8516_fptr, 0));

void lam8518_fptr() // lam8518 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8519 = arg_buffer[1];
//reading env and args
void* a8332 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8519);
void* cdr = decode_clo_array[6];
void* member = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* item = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* kont8406 = decode_clo_array[1];

//creating new closure instance
void** clo8883 = alloc_clo(lam8516_fptr, 5);

//setting env list
clo8883[1] = kont8406;
clo8883[2] = item;
clo8883[3] = lst;
clo8883[4] = member;
clo8883[5] = cdr;
void* f8408 = encode_clo(clo8883);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f8408;
arg_buffer[3] = item;
arg_buffer[4] = a8332;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8518 = encode_clo(alloc_clo(lam8518_fptr, 0));

void lam8520_fptr() // lam8520 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8521 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8521);
void* cdr = decode_clo_array[7];
void* member = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8406 = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8884 = is_true(a8330);
if(if_guard8884)
{
void* xy8331 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8406;
arg_buffer[2] = xy8331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8406))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8885 = alloc_clo(lam8518_fptr, 6);

//setting env list
clo8885[1] = kont8406;
clo8885[2] = equal_u63;
clo8885[3] = item;
clo8885[4] = lst;
clo8885[5] = member;
clo8885[6] = cdr;
void* f8409 = encode_clo(clo8885);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8409;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void lam8522_fptr() // lam8522 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8523 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8523);
void* cdr = decode_clo_array[8];
void* member = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* null_u63 = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8406 = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8886 = alloc_clo(lam8520_fptr, 7);

//setting env list
clo8886[1] = car;
clo8886[2] = kont8406;
clo8886[3] = equal_u63;
clo8886[4] = item;
clo8886[5] = lst;
clo8886[6] = member;
clo8886[7] = cdr;
void* f8410 = encode_clo(clo8886);



//if-clause
bool if_guard8887 = is_true(a8327);
if(if_guard8887)
{

//creating new closure instance
void** clo8888 = alloc_clo(lam8509_fptr, 1);

//setting env list
clo8888[1] = f8410;
void* f8411 = encode_clo(clo8888);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8411;
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
void** clo8889 = alloc_clo(lam8511_fptr, 1);

//setting env list
clo8889[1] = f8410;
void* f8412 = encode_clo(clo8889);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void member_fptr() // member 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8524 = arg_buffer[1];
//reading env and args
void* kont8406 = arg_buffer[2];
void* item = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8890 = alloc_clo(lam8522_fptr, 8);

//setting env list
clo8890[1] = car;
clo8890[2] = kont8406;
clo8890[3] = equal_u63;
clo8890[4] = item;
clo8890[5] = null_u63;
clo8890[6] = lst;
void* member = encode_clo(alloc_clo(member_fptr, 0));

clo8890[7] = member;
clo8890[8] = cdr;
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

void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8527_fptr() // lam8527 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8528 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8528);
void* kont8414 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member_u63;
arg_buffer[2] = kont8414;
arg_buffer[3] = x;
arg_buffer[4] = a8340;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void lam8529_fptr() // lam8529 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8530 = arg_buffer[1];
//reading env and args
void* a8338 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8530);
void* cdr = decode_clo_array[5];
void* kont8414 = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8891 = is_true(a8338);
if(if_guard8891)
{
void* xy8339 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8414;
arg_buffer[2] = xy8339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8414))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8892 = alloc_clo(lam8527_fptr, 3);

//setting env list
clo8892[1] = member_u63;
clo8892[2] = x;
clo8892[3] = kont8414;
void* f8415 = encode_clo(clo8892);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8415;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8529 = encode_clo(alloc_clo(lam8529_fptr, 0));

void lam8531_fptr() // lam8531 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8532 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8532);
void* cdr = decode_clo_array[6];
void* kont8414 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//creating new closure instance
void** clo8893 = alloc_clo(lam8529_fptr, 5);

//setting env list
clo8893[1] = member_u63;
clo8893[2] = x;
clo8893[3] = lst;
clo8893[4] = kont8414;
clo8893[5] = cdr;
void* f8416 = encode_clo(clo8893);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f8416;
arg_buffer[3] = a8337;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void lam8533_fptr() // lam8533 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8534 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8534);
void* cdr = decode_clo_array[7];
void* kont8414 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* equal_u63 = decode_clo_array[4];
void* x = decode_clo_array[3];
void* car = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8894 = is_true(a8335);
if(if_guard8894)
{
void* xy8336 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8414;
arg_buffer[2] = xy8336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8414))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8895 = alloc_clo(lam8531_fptr, 6);

//setting env list
clo8895[1] = member_u63;
clo8895[2] = x;
clo8895[3] = equal_u63;
clo8895[4] = lst;
clo8895[5] = kont8414;
clo8895[6] = cdr;
void* f8417 = encode_clo(clo8895);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8417;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void member_u63_fptr() // member? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8535 = arg_buffer[1];
//reading env and args
void* kont8414 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8896 = alloc_clo(lam8533_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8896[1] = member_u63;
clo8896[2] = car;
clo8896[3] = x;
clo8896[4] = equal_u63;
clo8896[5] = lst;
clo8896[6] = kont8414;
clo8896[7] = cdr;
void* f8418 = encode_clo(clo8896);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8537_fptr() // lam8537 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8538 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8538);
void* kont8419 = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* a8343 = decode_clo_array[1];

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = kont8419;
arg_buffer[3] = a8343;
arg_buffer[4] = a8345;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8537 = encode_clo(alloc_clo(lam8537_fptr, 0));

void lam8539_fptr() // lam8539 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8344 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8540);
void* length = decode_clo_array[4];
void* kont8419 = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* a8343 = decode_clo_array[1];

//creating new closure instance
void** clo8897 = alloc_clo(lam8537_fptr, 3);

//setting env list
clo8897[1] = a8343;
clo8897[2] = _u43;
clo8897[3] = kont8419;
void* f8420 = encode_clo(clo8897);



//clo-app
arg_buffer[1] = length;
arg_buffer[2] = f8420;
arg_buffer[3] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void lam8542_fptr() // lam8542 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8543 = arg_buffer[1];
//reading env and args
void* a8341 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8543);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* length = decode_clo_array[3];
void* kont8419 = decode_clo_array[2];
void* _u43 = decode_clo_array[1];

//if-clause
bool if_guard8898 = is_true(a8341);
if(if_guard8898)
{
mpz_t* mpzvar8899 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8899, 0);
void* xy8342 = encode_mpz(mpzvar8899);

//clo-app
arg_buffer[1] = kont8419;
arg_buffer[2] = xy8342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8419))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{
mpz_t* mpzvar8900 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8900, 1);
void* a8343 = encode_mpz(mpzvar8900);

//creating new closure instance
void** clo8901 = alloc_clo(lam8539_fptr, 4);

//setting env list
clo8901[1] = a8343;
clo8901[2] = _u43;
clo8901[3] = kont8419;
clo8901[4] = length;
void* f8421 = encode_clo(clo8901);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void length_fptr() // length 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8544 = arg_buffer[1];
//reading env and args
void* kont8419 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8902 = alloc_clo(lam8542_fptr, 5);

//setting env list
clo8902[1] = _u43;
clo8902[2] = kont8419;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8902[3] = length;
clo8902[4] = lst;
clo8902[5] = cdr;
void* f8422 = encode_clo(clo8902);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8545_fptr() // lam8545 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8546 = arg_buffer[1];
//reading env and args
void* xy8347 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8546);
void* kont8423 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8423;
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void lam8547_fptr() // lam8547 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* a8351 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8548);
void* a8349 = decode_clo_array[3];
void* kont8423 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8423;
arg_buffer[3] = a8349;
arg_buffer[4] = a8351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void lam8549_fptr() // lam8549 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8550 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8550);
void* a8349 = decode_clo_array[5];
void* map = decode_clo_array[4];
void* kont8423 = decode_clo_array[3];
void* proc = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8903 = alloc_clo(lam8547_fptr, 3);

//setting env list
clo8903[1] = cons;
clo8903[2] = kont8423;
clo8903[3] = a8349;
void* f8425 = encode_clo(clo8903);



//clo-app
arg_buffer[1] = map;
arg_buffer[2] = f8425;
arg_buffer[3] = proc;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8549 = encode_clo(alloc_clo(lam8549_fptr, 0));

void lam8551_fptr() // lam8551 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8552 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8552);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* kont8423 = decode_clo_array[3];
void* proc = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8904 = alloc_clo(lam8549_fptr, 5);

//setting env list
clo8904[1] = cons;
clo8904[2] = proc;
clo8904[3] = kont8423;
clo8904[4] = map;
clo8904[5] = a8349;
void* f8426 = encode_clo(clo8904);



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

void* lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void lam8553_fptr() // lam8553 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8554 = arg_buffer[1];
//reading env and args
void* a8348 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8554);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* kont8423 = decode_clo_array[3];
void* proc = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8905 = alloc_clo(lam8551_fptr, 6);

//setting env list
clo8905[1] = cons;
clo8905[2] = proc;
clo8905[3] = kont8423;
clo8905[4] = map;
clo8905[5] = lst;
clo8905[6] = cdr;
void* f8427 = encode_clo(clo8905);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8427;
arg_buffer[3] = a8348;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void lam8555_fptr() // lam8555 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8556);
void* lst = decode_clo_array[8];
void* map = decode_clo_array[7];
void* kont8423 = decode_clo_array[6];
void* proc = decode_clo_array[5];
void* car = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//if-clause
bool if_guard8906 = is_true(a8346);
if(if_guard8906)
{

//creating new closure instance
void** clo8907 = alloc_clo(lam8545_fptr, 1);

//setting env list
clo8907[1] = kont8423;
void* f8424 = encode_clo(clo8907);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8424;
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
void** clo8908 = alloc_clo(lam8553_fptr, 6);

//setting env list
clo8908[1] = cons;
clo8908[2] = proc;
clo8908[3] = kont8423;
clo8908[4] = map;
clo8908[5] = lst;
clo8908[6] = cdr;
void* f8428 = encode_clo(clo8908);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void map_fptr() // map 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8557 = arg_buffer[1];
//reading env and args
void* kont8423 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8909 = alloc_clo(lam8555_fptr, 8);

//setting env list
clo8909[1] = cdr;
clo8909[2] = list;
clo8909[3] = cons;
clo8909[4] = car;
clo8909[5] = proc;
clo8909[6] = kont8423;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8909[7] = map;
clo8909[8] = lst;
void* f8429 = encode_clo(clo8909);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8429;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8558_fptr() // lam8558 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8559 = arg_buffer[1];
//reading env and args
void* xy8353 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8559);
void* kont8430 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8430;
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
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
void* a8358 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8561);
void* kont8430 = decode_clo_array[3];
void* a8356 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8430;
arg_buffer[3] = a8356;
arg_buffer[4] = a8358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void lam8562_fptr() // lam8562 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8563 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8563);
void* kont8430 = decode_clo_array[5];
void* filter = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* a8356 = decode_clo_array[2];
void* op = decode_clo_array[1];

//creating new closure instance
void** clo8910 = alloc_clo(lam8560_fptr, 3);

//setting env list
clo8910[1] = cons;
clo8910[2] = a8356;
clo8910[3] = kont8430;
void* f8432 = encode_clo(clo8910);



//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = f8432;
arg_buffer[3] = op;
arg_buffer[4] = a8357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

void lam8564_fptr() // lam8564 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8565 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8565);
void* cdr = decode_clo_array[6];
void* kont8430 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* op = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8911 = alloc_clo(lam8562_fptr, 5);

//setting env list
clo8911[1] = op;
clo8911[2] = a8356;
clo8911[3] = cons;
clo8911[4] = filter;
clo8911[5] = kont8430;
void* f8433 = encode_clo(clo8911);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void lam8566_fptr() // lam8566 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8567 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8567);
void* kont8430 = decode_clo_array[3];
void* op = decode_clo_array[2];
void* filter = decode_clo_array[1];

//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = kont8430;
arg_buffer[3] = op;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void lam8568_fptr() // lam8568 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8569);
void* cdr = decode_clo_array[7];
void* kont8430 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8912 = is_true(a8355);
if(if_guard8912)
{

//creating new closure instance
void** clo8913 = alloc_clo(lam8564_fptr, 6);

//setting env list
clo8913[1] = cons;
clo8913[2] = filter;
clo8913[3] = op;
clo8913[4] = lst;
clo8913[5] = kont8430;
clo8913[6] = cdr;
void* f8434 = encode_clo(clo8913);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8434;
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
void** clo8914 = alloc_clo(lam8566_fptr, 3);

//setting env list
clo8914[1] = filter;
clo8914[2] = op;
clo8914[3] = kont8430;
void* f8435 = encode_clo(clo8914);



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

}

void* lam8568 = encode_clo(alloc_clo(lam8568_fptr, 0));

void lam8570_fptr() // lam8570 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8571 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8571);
void* cdr = decode_clo_array[7];
void* kont8430 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8915 = alloc_clo(lam8568_fptr, 7);

//setting env list
clo8915[1] = car;
clo8915[2] = filter;
clo8915[3] = cons;
clo8915[4] = op;
clo8915[5] = lst;
clo8915[6] = kont8430;
clo8915[7] = cdr;
void* f8436 = encode_clo(clo8915);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8436;
arg_buffer[3] = a8354;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void lam8572_fptr() // lam8572 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8573 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8573);
void* kont8430 = decode_clo_array[8];
void* lst = decode_clo_array[7];
void* op = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8916 = is_true(a8352);
if(if_guard8916)
{

//creating new closure instance
void** clo8917 = alloc_clo(lam8558_fptr, 1);

//setting env list
clo8917[1] = kont8430;
void* f8431 = encode_clo(clo8917);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8431;
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
void** clo8918 = alloc_clo(lam8570_fptr, 7);

//setting env list
clo8918[1] = car;
clo8918[2] = filter;
clo8918[3] = cons;
clo8918[4] = op;
clo8918[5] = lst;
clo8918[6] = kont8430;
clo8918[7] = cdr;
void* f8437 = encode_clo(clo8918);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8437;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void filter_fptr() // filter 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8574 = arg_buffer[1];
//reading env and args
void* kont8430 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8919 = alloc_clo(lam8572_fptr, 8);

//setting env list
clo8919[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8919[2] = filter;
clo8919[3] = cdr;
clo8919[4] = list;
clo8919[5] = cons;
clo8919[6] = op;
clo8919[7] = lst;
clo8919[8] = kont8430;
void* f8438 = encode_clo(clo8919);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8575_fptr() // lam8575 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8576);
void* drop = decode_clo_array[3];
void* kont8439 = decode_clo_array[2];
void* a8362 = decode_clo_array[1];

//clo-app
arg_buffer[1] = drop;
arg_buffer[2] = kont8439;
arg_buffer[3] = a8362;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void lam8578_fptr() // lam8578 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8579);
void* drop = decode_clo_array[4];
void* kont8439 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8920 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8920, 1);
void* a8363 = encode_mpz(mpzvar8920);

//creating new closure instance
void** clo8921 = alloc_clo(lam8575_fptr, 3);

//setting env list
clo8921[1] = a8362;
clo8921[2] = kont8439;
clo8921[3] = drop;
void* f8440 = encode_clo(clo8921);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8440;
arg_buffer[3] = n;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void lam8580_fptr() // lam8580 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8581 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8581);
void* cdr = decode_clo_array[6];
void* kont8439 = decode_clo_array[5];
void* n = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* drop = decode_clo_array[1];

//if-clause
bool if_guard8922 = is_true(a8361);
if(if_guard8922)
{

//clo-app
arg_buffer[1] = kont8439;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8923 = alloc_clo(lam8578_fptr, 4);

//setting env list
clo8923[1] = _u45;
clo8923[2] = n;
clo8923[3] = kont8439;
clo8923[4] = drop;
void* f8441 = encode_clo(clo8923);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8441;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void drop_fptr() // drop 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8583 = arg_buffer[1];
//reading env and args
void* kont8439 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8924 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8924, 0);
void* a8360 = encode_mpz(mpzvar8924);

//creating new closure instance
void** clo8925 = alloc_clo(lam8580_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8925[1] = drop;
clo8925[2] = lst;
clo8925[3] = _u45;
clo8925[4] = n;
clo8925[5] = kont8439;
clo8925[6] = cdr;
void* f8442 = encode_clo(clo8925);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8442;
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

void lam8584_fptr() // lam8584 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8585 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8585);
void* a8367 = decode_clo_array[4];
void* fun = decode_clo_array[3];
void* kont8443 = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldl;
arg_buffer[2] = kont8443;
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

void* lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void lam8586_fptr() // lam8586 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8587);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* fun = decode_clo_array[3];
void* kont8443 = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo8926 = alloc_clo(lam8584_fptr, 4);

//setting env list
clo8926[1] = foldl;
clo8926[2] = kont8443;
clo8926[3] = fun;
clo8926[4] = a8367;
void* f8444 = encode_clo(clo8926);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8444;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void lam8588_fptr() // lam8588 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8589 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8589);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* kont8443 = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo8927 = alloc_clo(lam8586_fptr, 5);

//setting env list
clo8927[1] = foldl;
clo8927[2] = kont8443;
clo8927[3] = fun;
clo8927[4] = lst;
clo8927[5] = cdr;
void* f8445 = encode_clo(clo8927);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8445;
arg_buffer[3] = a8366;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void lam8590_fptr() // lam8590 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8591 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8591);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* fun = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* car = decode_clo_array[3];
void* kont8443 = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//if-clause
bool if_guard8928 = is_true(a8365);
if(if_guard8928)
{

//clo-app
arg_buffer[1] = kont8443;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8929 = alloc_clo(lam8588_fptr, 6);

//setting env list
clo8929[1] = foldl;
clo8929[2] = kont8443;
clo8929[3] = acc;
clo8929[4] = fun;
clo8929[5] = lst;
clo8929[6] = cdr;
void* f8446 = encode_clo(clo8929);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void foldl_fptr() // foldl 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8592 = arg_buffer[1];
//reading env and args
void* kont8443 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8930 = alloc_clo(lam8590_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8930[1] = foldl;
clo8930[2] = kont8443;
clo8930[3] = car;
clo8930[4] = acc;
clo8930[5] = fun;
clo8930[6] = lst;
clo8930[7] = cdr;
void* f8447 = encode_clo(clo8930);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8447;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8593_fptr() // lam8593 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8594 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8594);
void* kont8448 = decode_clo_array[3];
void* a8370 = decode_clo_array[2];
void* fun = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8448;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
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
void* a8371 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8596);
void* kont8448 = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* a8370 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* acc = decode_clo_array[1];

//creating new closure instance
void** clo8931 = alloc_clo(lam8593_fptr, 3);

//setting env list
clo8931[1] = fun;
clo8931[2] = a8370;
clo8931[3] = kont8448;
void* f8449 = encode_clo(clo8931);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8449;
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

void* lam8595 = encode_clo(alloc_clo(lam8595_fptr, 0));

void lam8597_fptr() // lam8597 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8598 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8598);
void* cdr = decode_clo_array[6];
void* kont8448 = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//creating new closure instance
void** clo8932 = alloc_clo(lam8595_fptr, 5);

//setting env list
clo8932[1] = acc;
clo8932[2] = fun;
clo8932[3] = a8370;
clo8932[4] = foldr;
clo8932[5] = kont8448;
void* f8450 = encode_clo(clo8932);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8450;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8597 = encode_clo(alloc_clo(lam8597_fptr, 0));

void lam8599_fptr() // lam8599 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8600 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8600);
void* cdr = decode_clo_array[7];
void* kont8448 = decode_clo_array[6];
void* fun = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* car = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//if-clause
bool if_guard8933 = is_true(a8369);
if(if_guard8933)
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
void** clo8934 = alloc_clo(lam8597_fptr, 6);

//setting env list
clo8934[1] = lst;
clo8934[2] = foldr;
clo8934[3] = acc;
clo8934[4] = fun;
clo8934[5] = kont8448;
clo8934[6] = cdr;
void* f8451 = encode_clo(clo8934);



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

void* lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void foldr_fptr() // foldr 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8601 = arg_buffer[1];
//reading env and args
void* kont8448 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8935 = alloc_clo(lam8599_fptr, 7);

//setting env list
clo8935[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8935[2] = foldr;
clo8935[3] = car;
clo8935[4] = acc;
clo8935[5] = fun;
clo8935[6] = kont8448;
clo8935[7] = cdr;
void* f8452 = encode_clo(clo8935);



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

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8602_fptr() // lam8602 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8603 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8603);
void* reverse_u45helper = decode_clo_array[3];
void* kont8453 = decode_clo_array[2];
void* a8374 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8453;
arg_buffer[3] = a8374;
arg_buffer[4] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8375 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8605);
void* reverse_u45helper = decode_clo_array[5];
void* kont8453 = decode_clo_array[4];
void* a8374 = decode_clo_array[3];
void* lst2 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8936 = alloc_clo(lam8602_fptr, 3);

//setting env list
clo8936[1] = a8374;
clo8936[2] = kont8453;
clo8936[3] = reverse_u45helper;
void* f8454 = encode_clo(clo8936);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f8454;
arg_buffer[3] = a8375;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void lam8606_fptr() // lam8606 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8607 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8607);
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* kont8453 = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8937 = alloc_clo(lam8604_fptr, 5);

//setting env list
clo8937[1] = cons;
clo8937[2] = lst2;
clo8937[3] = a8374;
clo8937[4] = kont8453;
clo8937[5] = reverse_u45helper;
void* f8455 = encode_clo(clo8937);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8455;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8606 = encode_clo(alloc_clo(lam8606_fptr, 0));

void lam8608_fptr() // lam8608 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8609 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8609);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* kont8453 = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* cons = decode_clo_array[1];

//if-clause
bool if_guard8938 = is_true(a8373);
if(if_guard8938)
{

//clo-app
arg_buffer[1] = kont8453;
arg_buffer[2] = lst2;
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
void** clo8939 = alloc_clo(lam8606_fptr, 6);

//setting env list
clo8939[1] = cons;
clo8939[2] = car;
clo8939[3] = lst2;
clo8939[4] = kont8453;
clo8939[5] = reverse_u45helper;
clo8939[6] = lst;
void* f8456 = encode_clo(clo8939);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8456;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8610 = arg_buffer[1];
//reading env and args
void* kont8453 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8940 = alloc_clo(lam8608_fptr, 7);

//setting env list
clo8940[1] = cons;
clo8940[2] = car;
clo8940[3] = lst2;
clo8940[4] = kont8453;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8940[5] = reverse_u45helper;
clo8940[6] = lst;
clo8940[7] = cdr;
void* f8457 = encode_clo(clo8940);



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

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8611_fptr() // lam8611 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8612 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8612);
void* lst = decode_clo_array[3];
void* reverse_u45helper = decode_clo_array[2];
void* kont8458 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8458;
arg_buffer[3] = lst;
arg_buffer[4] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void reverse_fptr() // reverse 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8613 = arg_buffer[1];
//reading env and args
void* kont8458 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8941 = alloc_clo(lam8611_fptr, 3);

//setting env list
clo8941[1] = kont8458;
clo8941[2] = reverse_u45helper;
clo8941[3] = lst;
void* f8459 = encode_clo(clo8941);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8459;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8614_fptr() // lam8614 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8615 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8615);
void* kont8460 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* a8379 = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8460;
arg_buffer[3] = a8379;
arg_buffer[4] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8614 = encode_clo(alloc_clo(lam8614_fptr, 0));

void lam8616_fptr() // lam8616 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8617 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8617);
void* append1 = decode_clo_array[5];
void* rhs = decode_clo_array[4];
void* kont8460 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* a8379 = decode_clo_array[1];

//creating new closure instance
void** clo8942 = alloc_clo(lam8614_fptr, 3);

//setting env list
clo8942[1] = a8379;
clo8942[2] = cons;
clo8942[3] = kont8460;
void* f8461 = encode_clo(clo8942);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8461;
arg_buffer[3] = a8380;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8616 = encode_clo(alloc_clo(lam8616_fptr, 0));

void lam8618_fptr() // lam8618 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8619 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8619);
void* cdr = decode_clo_array[6];
void* lhs = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* rhs = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8460 = decode_clo_array[1];

//creating new closure instance
void** clo8943 = alloc_clo(lam8616_fptr, 5);

//setting env list
clo8943[1] = a8379;
clo8943[2] = cons;
clo8943[3] = kont8460;
clo8943[4] = rhs;
clo8943[5] = append1;
void* f8462 = encode_clo(clo8943);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8462;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8618 = encode_clo(alloc_clo(lam8618_fptr, 0));

void lam8620_fptr() // lam8620 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8621 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8621);
void* cdr = decode_clo_array[7];
void* lhs = decode_clo_array[6];
void* append1 = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* kont8460 = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8944 = is_true(a8378);
if(if_guard8944)
{

//clo-app
arg_buffer[1] = kont8460;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8460))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8945 = alloc_clo(lam8618_fptr, 6);

//setting env list
clo8945[1] = kont8460;
clo8945[2] = cons;
clo8945[3] = rhs;
clo8945[4] = append1;
clo8945[5] = lhs;
clo8945[6] = cdr;
void* f8463 = encode_clo(clo8945);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8463;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8620 = encode_clo(alloc_clo(lam8620_fptr, 0));

void append1_fptr() // append1 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8622 = arg_buffer[1];
//reading env and args
void* kont8460 = arg_buffer[2];
void* lhs = arg_buffer[3];
void* rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8946 = alloc_clo(lam8620_fptr, 7);

//setting env list
clo8946[1] = car;
clo8946[2] = rhs;
clo8946[3] = kont8460;
clo8946[4] = cons;
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

clo8946[5] = append1;
clo8946[6] = lhs;
clo8946[7] = cdr;
void* f8464 = encode_clo(clo8946);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8464;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8623_fptr() // lam8623 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8624 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8624);
void* a8382 = decode_clo_array[4];
void* append1 = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* kont8465 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8465;
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

void* lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void lam8625_fptr() // lam8625 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8626 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8626);
void* a8382 = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8465 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8947 = alloc_clo(lam8623_fptr, 4);

//setting env list
clo8947[1] = kont8465;
clo8947[2] = foldr;
clo8947[3] = append1;
clo8947[4] = a8382;
void* f8466 = encode_clo(clo8947);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8466;
arg_buffer[3] = a8383;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8625 = encode_clo(alloc_clo(lam8625_fptr, 0));

void lam8627_fptr() // lam8627 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8628 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8628);
void* list = decode_clo_array[6];
void* xs = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8465 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8948 = alloc_clo(lam8625_fptr, 5);

//setting env list
clo8948[1] = append1;
clo8948[2] = x;
clo8948[3] = kont8465;
clo8948[4] = foldr;
clo8948[5] = a8382;
void* f8467 = encode_clo(clo8948);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8467;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void lam8629_fptr() // lam8629 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8630 = arg_buffer[1];
//reading env and args
void* x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8630);
void* list = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* xs = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* kont8465 = decode_clo_array[1];

//creating new closure instance
void** clo8949 = alloc_clo(lam8627_fptr, 6);

//setting env list
clo8949[1] = append1;
clo8949[2] = x;
clo8949[3] = kont8465;
clo8949[4] = foldr;
clo8949[5] = xs;
clo8949[6] = list;
void* f8468 = encode_clo(clo8949);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8629 = encode_clo(alloc_clo(lam8629_fptr, 0));

void lam8631_fptr() // lam8631 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8632 = arg_buffer[1];
//reading env and args
void* vargs8314 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8632);
void* list = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* xs = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* kont8465 = decode_clo_array[1];

//creating new closure instance
void** clo8950 = alloc_clo(lam8629_fptr, 5);

//setting env list
clo8950[1] = kont8465;
clo8950[2] = foldr;
clo8950[3] = xs;
clo8950[4] = append1;
clo8950[5] = list;
void* f8469 = encode_clo(clo8950);



//clo-app
arg_buffer[1] = f8469;
arg_buffer[2] = vargs8314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8631 = encode_clo(alloc_clo(lam8631_fptr, 0));

void lam8633_fptr() // lam8633 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8634 = arg_buffer[1];
//reading env and args
void* xs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8634);
void* vargs8486 = decode_clo_array[6];
void* append1 = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* kont8465 = decode_clo_array[1];

//creating new closure instance
void** clo8951 = alloc_clo(lam8631_fptr, 5);

//setting env list
clo8951[1] = kont8465;
clo8951[2] = foldr;
clo8951[3] = xs;
clo8951[4] = append1;
clo8951[5] = list;
void* f8470 = encode_clo(clo8951);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8470;
arg_buffer[3] = vargs8486;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8633 = encode_clo(alloc_clo(lam8633_fptr, 0));

void append_fptr() // append 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8635 = arg_buffer[1];
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

void* kont8465 = prim_car(vargs);
void* vargs8486 = prim_cdr(vargs);

//creating new closure instance
void** clo8952 = alloc_clo(lam8633_fptr, 6);

//setting env list
clo8952[1] = kont8465;
clo8952[2] = foldr;
clo8952[3] = cdr;
clo8952[4] = list;
clo8952[5] = append1;
clo8952[6] = vargs8486;
void* f8471 = encode_clo(clo8952);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8471;
arg_buffer[3] = vargs8486;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8636_fptr() // lam8636 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8637 = arg_buffer[1];
//reading env and args
void* xy8387 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8637);
void* kont8472 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8472;
arg_buffer[2] = xy8387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8472))[0]);
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
void* a8392 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8639);
void* a8388 = decode_clo_array[4];
void* a8390 = decode_clo_array[3];
void* kont8472 = decode_clo_array[2];
void* take_u45helper = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8472;
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

void* lam8638 = encode_clo(alloc_clo(lam8638_fptr, 0));

void lam8640_fptr() // lam8640 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8641 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8641);
void* a8388 = decode_clo_array[6];
void* a8390 = decode_clo_array[5];
void* kont8472 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8953 = alloc_clo(lam8638_fptr, 4);

//setting env list
clo8953[1] = take_u45helper;
clo8953[2] = kont8472;
clo8953[3] = a8390;
clo8953[4] = a8388;
void* f8474 = encode_clo(clo8953);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f8474;
arg_buffer[3] = a8391;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8640 = encode_clo(alloc_clo(lam8640_fptr, 0));

void lam8642_fptr() // lam8642 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8643 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8643);
void* lst = decode_clo_array[7];
void* a8388 = decode_clo_array[6];
void* kont8472 = decode_clo_array[5];
void* car = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8954 = alloc_clo(lam8640_fptr, 6);

//setting env list
clo8954[1] = lst2;
clo8954[2] = take_u45helper;
clo8954[3] = cons;
clo8954[4] = kont8472;
clo8954[5] = a8390;
clo8954[6] = a8388;
void* f8475 = encode_clo(clo8954);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8475;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8642 = encode_clo(alloc_clo(lam8642_fptr, 0));

void lam8645_fptr() // lam8645 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8646 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8646);
void* lst = decode_clo_array[8];
void* kont8472 = decode_clo_array[7];
void* cons = decode_clo_array[6];
void* _u45 = decode_clo_array[5];
void* take_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];
mpz_t* mpzvar8955 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8955, 1);
void* a8389 = encode_mpz(mpzvar8955);

//creating new closure instance
void** clo8956 = alloc_clo(lam8642_fptr, 7);

//setting env list
clo8956[1] = lst2;
clo8956[2] = take_u45helper;
clo8956[3] = cons;
clo8956[4] = car;
clo8956[5] = kont8472;
clo8956[6] = a8388;
clo8956[7] = lst;
void* f8476 = encode_clo(clo8956);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8476;
arg_buffer[3] = n;
arg_buffer[4] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a8386 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8648);
void* cdr = decode_clo_array[10];
void* lst = decode_clo_array[9];
void* reverse = decode_clo_array[8];
void* kont8472 = decode_clo_array[7];
void* cons = decode_clo_array[6];
void* _u45 = decode_clo_array[5];
void* take_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8957 = is_true(a8386);
if(if_guard8957)
{

//creating new closure instance
void** clo8958 = alloc_clo(lam8636_fptr, 1);

//setting env list
clo8958[1] = kont8472;
void* f8473 = encode_clo(clo8958);



//clo-app
arg_buffer[1] = reverse;
arg_buffer[2] = f8473;
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
void** clo8959 = alloc_clo(lam8645_fptr, 8);

//setting env list
clo8959[1] = car;
clo8959[2] = n;
clo8959[3] = lst2;
clo8959[4] = take_u45helper;
clo8959[5] = _u45;
clo8959[6] = cons;
clo8959[7] = kont8472;
clo8959[8] = lst;
void* f8477 = encode_clo(clo8959);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8477;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8647 = encode_clo(alloc_clo(lam8647_fptr, 0));

void take_u45helper_fptr() // take-helper 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8650 = arg_buffer[1];
//reading env and args
void* kont8472 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8960 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8960, 0);
void* a8385 = encode_mpz(mpzvar8960);

//creating new closure instance
void** clo8961 = alloc_clo(lam8647_fptr, 10);

//setting env list
clo8961[1] = car;
clo8961[2] = n;
clo8961[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8961[4] = take_u45helper;
clo8961[5] = _u45;
clo8961[6] = cons;
clo8961[7] = kont8472;
clo8961[8] = reverse;
clo8961[9] = lst;
clo8961[10] = cdr;
void* f8478 = encode_clo(clo8961);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8478;
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

void lam8651_fptr() // lam8651 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8652 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8652);
void* kont8479 = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* n = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8479;
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

void* lam8651 = encode_clo(alloc_clo(lam8651_fptr, 0));

void take_fptr() // take 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8653 = arg_buffer[1];
//reading env and args
void* kont8479 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8962 = alloc_clo(lam8651_fptr, 4);

//setting env list
clo8962[1] = n;
clo8962[2] = take_u45helper;
clo8962[3] = lst;
clo8962[4] = kont8479;
void* f8480 = encode_clo(clo8962);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8480;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8654_fptr() // lam8654 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8655 = arg_buffer[1];
//reading env and args
void* xy8394 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8655);
void* kont8481 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8481;
arg_buffer[2] = xy8394;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8481))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8654 = encode_clo(alloc_clo(lam8654_fptr, 0));

void call_fptr() // call 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8656 = arg_buffer[1];
//reading env and args
void* kont8481 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8963 = alloc_clo(lam8654_fptr, 1);

//setting env list
clo8963[1] = kont8481;
void* f8482 = encode_clo(clo8963);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8657_fptr() // lam8657 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8658 = arg_buffer[1];
//reading env and args
void* xy8395 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8658);
void* kont8483 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8483;
arg_buffer[2] = xy8395;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8657 = encode_clo(alloc_clo(lam8657_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8659 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8964 = alloc_clo(lam8657_fptr, 1);

//setting env list
clo8964[1] = kont8483;
void* f8484 = encode_clo(clo8964);



//clo-app
arg_buffer[1] = call;
arg_buffer[2] = f8484;
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

