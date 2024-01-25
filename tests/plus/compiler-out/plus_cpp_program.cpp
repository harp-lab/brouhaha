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
void* _env8666 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8664 = prim_car(lst);
void* lst8667 = prim_cdr(lst);
void* x8665 = apply_prim__u43(lst8667);
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
void* x8665 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8664;
arg_buffer[2] = x8665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8664))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr() // - 
{
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
void* x8669 = apply_prim__u45(lst8671);
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
void* x8669 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8668;
arg_buffer[2] = x8669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8668))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr() // * 
{
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
void* x8673 = apply_prim__u42(lst8675);
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
void* x8673 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8672;
arg_buffer[2] = x8673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8672))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr() // / 
{
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
void* x8677 = apply_prim__u47(lst8679);
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
void* x8677 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8676;
arg_buffer[2] = x8677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8676))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr() // = 
{
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
void* x8681 = apply_prim__u61(lst8683);
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
void* x8681 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8680;
arg_buffer[2] = x8681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8680))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr() // > 
{
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
void* x8685 = apply_prim__u62(lst8687);
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
void* x8685 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8684;
arg_buffer[2] = x8685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8684))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr() // < 
{
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
void* x8689 = apply_prim__u60(lst8691);
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
void* x8689 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8688;
arg_buffer[2] = x8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr() // <= 
{
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
void* x8693 = apply_prim__u60_u61(lst8695);
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
void* x8693 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8692;
arg_buffer[2] = x8693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8692))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr() // >= 
{
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
void* x8697 = apply_prim__u62_u61(lst8699);
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
void* x8697 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8696;
arg_buffer[2] = x8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8696))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr() // modulo 
{
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
void* x8701 = apply_prim_modulo(lst8703);
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
void* x8701 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8700;
arg_buffer[2] = x8701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8700))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr() // null? 
{
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
void* x8705 = apply_prim_null_u63(lst8707);
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
void* x8705 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8704;
arg_buffer[2] = x8705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr() // equal? 
{
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
void* x8709 = apply_prim_equal_u63(lst8711);
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
void* x8709 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8708;
arg_buffer[2] = x8709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr() // eq? 
{
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
void* x8713 = apply_prim_eq_u63(lst8715);
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
void* x8713 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8712;
arg_buffer[2] = x8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr() // cons 
{
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
void* x8717 = apply_prim_cons(lst8719);
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
void* x8717 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8716;
arg_buffer[2] = x8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr() // car 
{
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
void* x8721 = apply_prim_car(lst8723);
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
void* x8721 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8720;
arg_buffer[2] = x8721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr() // cdr 
{
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
void* x8725 = apply_prim_cdr(lst8727);
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
void* x8725 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont8724;
arg_buffer[2] = x8725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr() // float->int 
{
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
void* x8729 = apply_prim_float_u45_u62int(lst8731);
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
void* x8729 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont8728;
arg_buffer[2] = x8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr() // int->float 
{
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
void* x8733 = apply_prim_int_u45_u62float(lst8735);
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
void* x8733 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont8732;
arg_buffer[2] = x8733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr() // hash 
{
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
void* x8737 = apply_prim_hash(lst8739);
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
void* x8737 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont8736;
arg_buffer[2] = x8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr() // hash-ref 
{
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
void* x8741 = apply_prim_hash_u45ref(lst8743);
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
void* x8741 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont8740;
arg_buffer[2] = x8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8740))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr() // hash-set 
{
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
void* x8745 = apply_prim_hash_u45set(lst8747);
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
void* x8745 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont8744;
arg_buffer[2] = x8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8744))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr() // hash-keys 
{
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
void* x8749 = apply_prim_hash_u45keys(lst8751);
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
void* x8749 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont8748;
arg_buffer[2] = x8749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8748))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
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
void* x8753 = apply_prim_hash_u45has_u45key_u63(lst8755);
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
void* x8753 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont8752;
arg_buffer[2] = x8753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8752))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr() // hash-count 
{
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
void* x8757 = apply_prim_hash_u45count(lst8759);
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
void* x8757 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont8756;
arg_buffer[2] = x8757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8756))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr() // set 
{
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
void* x8761 = apply_prim_set(lst8763);
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
void* x8761 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont8760;
arg_buffer[2] = x8761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8760))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr() // set->list 
{
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
void* x8765 = apply_prim_set_u45_u62list(lst8767);
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
void* x8765 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont8764;
arg_buffer[2] = x8765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8764))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr() // list->set 
{
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
void* x8769 = apply_prim_list_u45_u62set(lst8771);
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
void* x8769 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont8768;
arg_buffer[2] = x8769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8768))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr() // set-add 
{
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
void* x8773 = apply_prim_set_u45add(lst8775);
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
void* x8773 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont8772;
arg_buffer[2] = x8773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8772))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr() // set-member? 
{
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
void* x8777 = apply_prim_set_u45member_u63(lst8779);
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
void* x8777 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont8776;
arg_buffer[2] = x8777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8776))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr() // set-remove 
{
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
void* x8781 = apply_prim_set_u45remove(lst8783);
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
void* x8781 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont8780;
arg_buffer[2] = x8781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8780))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr() // set-count 
{
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
void* x8785 = apply_prim_set_u45count(lst8787);
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
void* x8785 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont8784;
arg_buffer[2] = x8785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8784))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr() // string? 
{
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
void* x8789 = apply_prim_string_u63(lst8791);
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
void* x8789 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont8788;
arg_buffer[2] = x8789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8788))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr() // string-length 
{
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
void* x8793 = apply_prim_string_u45length(lst8795);
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
void* x8793 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont8792;
arg_buffer[2] = x8793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8792))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr() // string-ref 
{
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
void* x8797 = apply_prim_string_u45ref(lst8799);
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
void* x8797 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont8796;
arg_buffer[2] = x8797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8796))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr() // substring 
{
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
void* x8801 = apply_prim_substring(lst8803);
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
void* x8801 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont8800;
arg_buffer[2] = x8801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8800))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr() // string-append 
{
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
void* x8805 = apply_prim_string_u45append(lst8807);
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
void* x8805 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont8804;
arg_buffer[2] = x8805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8804))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr() // string->list 
{
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
void* x8809 = apply_prim_string_u45_u62list(lst8811);
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
void* x8809 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont8808;
arg_buffer[2] = x8809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8808))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr() // exact-floor 
{
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
void* x8813 = apply_prim_exact_u45floor(lst8815);
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
void* x8813 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont8812;
arg_buffer[2] = x8813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8812))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr() // exact-ceiling 
{
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
void* x8817 = apply_prim_exact_u45ceiling(lst8819);
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
void* x8817 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont8816;
arg_buffer[2] = x8817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8816))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr() // exact-round 
{
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
void* x8821 = apply_prim_exact_u45round(lst8823);
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
void* x8821 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont8820;
arg_buffer[2] = x8821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8820))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr() // abs 
{
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
void* x8825 = apply_prim_abs(lst8827);
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
void* x8825 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont8824;
arg_buffer[2] = x8825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8824))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr() // max 
{
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
void* x8829 = apply_prim_max(lst8831);
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
void* x8829 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont8828;
arg_buffer[2] = x8829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8828))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr() // min 
{
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
void* x8833 = apply_prim_min(lst8835);
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
void* x8833 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont8832;
arg_buffer[2] = x8833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8832))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr() // expt 
{
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
void* x8837 = apply_prim_expt(lst8839);
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
void* x8837 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont8836;
arg_buffer[2] = x8837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8836))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr() // sqrt 
{
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
void* x8841 = apply_prim_sqrt(lst8843);
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
void* x8841 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont8840;
arg_buffer[2] = x8841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8840))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr() // remainder 
{
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
void* x8845 = apply_prim_remainder(lst8847);
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
void* x8845 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont8844;
arg_buffer[2] = x8845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8844))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr() // quotient 
{
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
void* x8849 = apply_prim_quotient(lst8851);
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
void* x8849 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont8848;
arg_buffer[2] = x8849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8848))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr() // random 
{
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
void* x8853 = apply_prim_random(lst8855);
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
void* x8853 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont8852;
arg_buffer[2] = x8853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8852))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr() // symbol? 
{
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
void* x8857 = apply_prim_symbol_u63(lst8859);
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
void* x8857 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont8856;
arg_buffer[2] = x8857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8856))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr() // pair? 
{
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
void* x8861 = apply_prim_pair_u63(lst8863);
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
void* x8861 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont8860;
arg_buffer[2] = x8861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr() // positive? 
{
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
void* x8865 = apply_prim_positive_u63(lst8867);
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
void* x8865 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont8864;
arg_buffer[2] = x8865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr() // negative? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8870 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8868 = prim_car(lst);
void* lst8871 = prim_cdr(lst);
void* x8869 = apply_prim_negative_u63(lst8871);
arg_buffer[1] = kont8868;
arg_buffer[2] = x8869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8868 = arg_buffer[2];
void* x8869 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont8868;
arg_buffer[2] = x8869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8490 = arg_buffer[1];
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

void* kont8400 = prim_car(x);
void* x8488 = prim_cdr(x);

//clo-app
arg_buffer[1] = kont8400;
arg_buffer[2] = x8488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8400))[0]);
//call next proc using a function pointer
function_ptr();
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8491_fptr() // lam8491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8492 = arg_buffer[1];
//reading env and args
void* a8322 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8492);
void* a8320 = decode_clo_array[3];
void* kont8401 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8320, a8322);
arg_buffer[1] = kont8401;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8401))[0]);
function_ptr();
}

void* lam8491 = encode_clo(alloc_clo(lam8491_fptr, 0));

void even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8495 = arg_buffer[1];
//reading env and args
void* kont8401 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8872, 0);
void* a8320 = encode_mpz(mpzvar8872);
mpz_t* mpzvar8873 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8873, 2);
void* a8321 = encode_mpz(mpzvar8873);

//creating new closure instance
void** clo8874 = alloc_clo(lam8491_fptr, 3);

//setting env list
clo8874[1] = equal_u63;
clo8874[2] = kont8401;
clo8874[3] = a8320;
void* f8402 = encode_clo(clo8874);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8321);
arg_buffer[1] = f8402;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8402))[0]);
function_ptr();
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8496_fptr() // lam8496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8497 = arg_buffer[1];
//reading env and args
void* a8325 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8497);
void* equal_u63 = decode_clo_array[3];
void* a8323 = decode_clo_array[2];
void* kont8403 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8323, a8325);
arg_buffer[1] = kont8403;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8403))[0]);
function_ptr();
}

void* lam8496 = encode_clo(alloc_clo(lam8496_fptr, 0));

void odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8500 = arg_buffer[1];
//reading env and args
void* kont8403 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8875 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8875, 1);
void* a8323 = encode_mpz(mpzvar8875);
mpz_t* mpzvar8876 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8876, 2);
void* a8324 = encode_mpz(mpzvar8876);

//creating new closure instance
void** clo8877 = alloc_clo(lam8496_fptr, 3);

//setting env list
clo8877[1] = kont8403;
clo8877[2] = a8323;
clo8877[3] = equal_u63;
void* f8404 = encode_clo(clo8877);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8324);
arg_buffer[1] = f8404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8404))[0]);
function_ptr();
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void lam8501_fptr() // lam8501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8502 = arg_buffer[1];
//reading env and args
void* xy8328 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8502);
void* kont8405 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8405;
arg_buffer[2] = xy8328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8405))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8501 = encode_clo(alloc_clo(lam8501_fptr, 0));

void lam8503_fptr() // lam8503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8331 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8504);
void* kont8405 = decode_clo_array[3];
void* a8329 = decode_clo_array[2];
void* list_u45ref = decode_clo_array[1];

//clo-app
arg_buffer[1] = list_u45ref;
arg_buffer[2] = kont8405;
arg_buffer[3] = a8329;
arg_buffer[4] = a8331;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void lam8506_fptr() // lam8506 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8507 = arg_buffer[1];
//reading env and args
void* a8329 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8507);
void* kont8405 = decode_clo_array[4];
void* list_u45ref = decode_clo_array[3];
void* n = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8878 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8878, 1);
void* a8330 = encode_mpz(mpzvar8878);

//creating new closure instance
void** clo8879 = alloc_clo(lam8503_fptr, 3);

//setting env list
clo8879[1] = list_u45ref;
clo8879[2] = a8329;
clo8879[3] = kont8405;
void* f8407 = encode_clo(clo8879);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8330);
arg_buffer[1] = f8407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8407))[0]);
function_ptr();
}

void* lam8506 = encode_clo(alloc_clo(lam8506_fptr, 0));

void lam8508_fptr() // lam8508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8509);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8405 = decode_clo_array[5];
void* list_u45ref = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8880 = is_true(a8327);
if(if_guard8880)
{

//creating new closure instance
void** clo8881 = alloc_clo(lam8501_fptr, 1);

//setting env list
clo8881[1] = kont8405;
void* f8406 = encode_clo(clo8881);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8406;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8406))[0]);
function_ptr();
}
else
{

//creating new closure instance
void** clo8882 = alloc_clo(lam8506_fptr, 4);

//setting env list
clo8882[1] = _u45;
clo8882[2] = n;
clo8882[3] = list_u45ref;
clo8882[4] = kont8405;
void* f8408 = encode_clo(clo8882);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8408;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8408))[0]);
function_ptr();
}

}

void* lam8508 = encode_clo(alloc_clo(lam8508_fptr, 0));

void list_u45ref_fptr() // list-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8511 = arg_buffer[1];
//reading env and args
void* kont8405 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8883 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8883, 0);
void* a8326 = encode_mpz(mpzvar8883);

//creating new closure instance
void** clo8884 = alloc_clo(lam8508_fptr, 7);

//setting env list
clo8884[1] = car;
clo8884[2] = n;
clo8884[3] = _u45;
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

clo8884[4] = list_u45ref;
clo8884[5] = kont8405;
clo8884[6] = lst;
clo8884[7] = cdr;
void* f8409 = encode_clo(clo8884);



//clo-app
arg_buffer[2]=apply_prim__u61_2(a8326, n);
arg_buffer[1] = f8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8409))[0]);
function_ptr();
}

void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8512_fptr() // lam8512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8513 = arg_buffer[1];
//reading env and args
void* xy8333 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8513);
void* f8414 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8414;
arg_buffer[2] = xy8333;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8414))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8512 = encode_clo(alloc_clo(lam8512_fptr, 0));

void lam8514_fptr() // lam8514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8515 = arg_buffer[1];
//reading env and args
void* xy8334 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8515);
void* f8414 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8414;
arg_buffer[2] = xy8334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8414))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void lam8517_fptr() // lam8517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* a8339 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8518);
void* member = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8410 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member;
arg_buffer[2] = kont8410;
arg_buffer[3] = item;
arg_buffer[4] = a8339;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8517 = encode_clo(alloc_clo(lam8517_fptr, 0));

void lam8519_fptr() // lam8519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8520 = arg_buffer[1];
//reading env and args
void* a8338 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8520);
void* cdr = decode_clo_array[5];
void* member = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8410 = decode_clo_array[1];

//if-clause
bool if_guard8885 = is_true(a8338);
if(if_guard8885)
{

//clo-app
arg_buffer[1] = kont8410;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8410))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8886 = alloc_clo(lam8517_fptr, 3);

//setting env list
clo8886[1] = kont8410;
clo8886[2] = item;
clo8886[3] = member;
void* f8411 = encode_clo(clo8886);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8411;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8411))[0]);
function_ptr();
}

}

void* lam8519 = encode_clo(alloc_clo(lam8519_fptr, 0));

void lam8521_fptr() // lam8521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8522);
void* cdr = decode_clo_array[6];
void* member = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* item = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* kont8410 = decode_clo_array[1];

//creating new closure instance
void** clo8887 = alloc_clo(lam8519_fptr, 5);

//setting env list
clo8887[1] = kont8410;
clo8887[2] = item;
clo8887[3] = lst;
clo8887[4] = member;
clo8887[5] = cdr;
void* f8412 = encode_clo(clo8887);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(item, a8337);
arg_buffer[1] = f8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8412))[0]);
function_ptr();
}

void* lam8521 = encode_clo(alloc_clo(lam8521_fptr, 0));

void lam8523_fptr() // lam8523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8524);
void* cdr = decode_clo_array[7];
void* member = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8410 = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8888 = is_true(a8335);
if(if_guard8888)
{
void* xy8336 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8410;
arg_buffer[2] = xy8336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8410))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8889 = alloc_clo(lam8521_fptr, 6);

//setting env list
clo8889[1] = kont8410;
clo8889[2] = equal_u63;
clo8889[3] = item;
clo8889[4] = lst;
clo8889[5] = member;
clo8889[6] = cdr;
void* f8413 = encode_clo(clo8889);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8413;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8413))[0]);
function_ptr();
}

}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void lam8525_fptr() // lam8525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8526 = arg_buffer[1];
//reading env and args
void* a8332 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8526);
void* cdr = decode_clo_array[8];
void* member = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* null_u63 = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8410 = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8890 = alloc_clo(lam8523_fptr, 7);

//setting env list
clo8890[1] = car;
clo8890[2] = kont8410;
clo8890[3] = equal_u63;
clo8890[4] = item;
clo8890[5] = lst;
clo8890[6] = member;
clo8890[7] = cdr;
void* f8414 = encode_clo(clo8890);



//if-clause
bool if_guard8891 = is_true(a8332);
if(if_guard8891)
{

//creating new closure instance
void** clo8892 = alloc_clo(lam8512_fptr, 1);

//setting env list
clo8892[1] = f8414;
void* f8415 = encode_clo(clo8892);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(item);
arg_buffer[1] = f8415;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8415))[0]);
function_ptr();
}
else
{

//creating new closure instance
void** clo8893 = alloc_clo(lam8514_fptr, 1);

//setting env list
clo8893[1] = f8414;
void* f8416 = encode_clo(clo8893);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8416;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8416))[0]);
function_ptr();
}

}

void* lam8525 = encode_clo(alloc_clo(lam8525_fptr, 0));

void member_fptr() // member 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8527 = arg_buffer[1];
//reading env and args
void* kont8410 = arg_buffer[2];
void* item = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8894 = alloc_clo(lam8525_fptr, 8);

//setting env list
clo8894[1] = car;
clo8894[2] = kont8410;
clo8894[3] = equal_u63;
clo8894[4] = item;
clo8894[5] = null_u63;
clo8894[6] = lst;
void* member = encode_clo(alloc_clo(member_fptr, 0));

clo8894[7] = member;
clo8894[8] = cdr;
void* f8417 = encode_clo(clo8894);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(item);
arg_buffer[1] = f8417;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8417))[0]);
function_ptr();
}

void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8530_fptr() // lam8530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8531);
void* kont8418 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member_u63;
arg_buffer[2] = kont8418;
arg_buffer[3] = x;
arg_buffer[4] = a8345;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void lam8532_fptr() // lam8532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8533 = arg_buffer[1];
//reading env and args
void* a8343 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8533);
void* cdr = decode_clo_array[5];
void* kont8418 = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8895 = is_true(a8343);
if(if_guard8895)
{
void* xy8344 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8418;
arg_buffer[2] = xy8344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8418))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8896 = alloc_clo(lam8530_fptr, 3);

//setting env list
clo8896[1] = member_u63;
clo8896[2] = x;
clo8896[3] = kont8418;
void* f8419 = encode_clo(clo8896);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8419;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
function_ptr();
}

}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void lam8534_fptr() // lam8534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8535 = arg_buffer[1];
//reading env and args
void* a8342 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8535);
void* cdr = decode_clo_array[6];
void* kont8418 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//creating new closure instance
void** clo8897 = alloc_clo(lam8532_fptr, 5);

//setting env list
clo8897[1] = member_u63;
clo8897[2] = x;
clo8897[3] = lst;
clo8897[4] = kont8418;
clo8897[5] = cdr;
void* f8420 = encode_clo(clo8897);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8342, x);
arg_buffer[1] = f8420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8420))[0]);
function_ptr();
}

void* lam8534 = encode_clo(alloc_clo(lam8534_fptr, 0));

void lam8536_fptr() // lam8536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8537 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8537);
void* cdr = decode_clo_array[7];
void* kont8418 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* equal_u63 = decode_clo_array[4];
void* x = decode_clo_array[3];
void* car = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//if-clause
bool if_guard8898 = is_true(a8340);
if(if_guard8898)
{
void* xy8341 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8418;
arg_buffer[2] = xy8341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8418))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8899 = alloc_clo(lam8534_fptr, 6);

//setting env list
clo8899[1] = member_u63;
clo8899[2] = x;
clo8899[3] = equal_u63;
clo8899[4] = lst;
clo8899[5] = kont8418;
clo8899[6] = cdr;
void* f8421 = encode_clo(clo8899);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8421;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8421))[0]);
function_ptr();
}

}

void* lam8536 = encode_clo(alloc_clo(lam8536_fptr, 0));

void member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8538 = arg_buffer[1];
//reading env and args
void* kont8418 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8900 = alloc_clo(lam8536_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8900[1] = member_u63;
clo8900[2] = car;
clo8900[3] = x;
clo8900[4] = equal_u63;
clo8900[5] = lst;
clo8900[6] = kont8418;
clo8900[7] = cdr;
void* f8422 = encode_clo(clo8900);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8422;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8422))[0]);
function_ptr();
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8540_fptr() // lam8540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8541 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8541);
void* kont8423 = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* a8348 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8348, a8350);
arg_buffer[1] = kont8423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
function_ptr();
}

void* lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void lam8542_fptr() // lam8542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8543 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8543);
void* length = decode_clo_array[4];
void* kont8423 = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* a8348 = decode_clo_array[1];

//creating new closure instance
void** clo8901 = alloc_clo(lam8540_fptr, 3);

//setting env list
clo8901[1] = a8348;
clo8901[2] = _u43;
clo8901[3] = kont8423;
void* f8424 = encode_clo(clo8901);



//clo-app
arg_buffer[1] = length;
arg_buffer[2] = f8424;
arg_buffer[3] = a8349;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void lam8545_fptr() // lam8545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8546 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8546);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* length = decode_clo_array[3];
void* kont8423 = decode_clo_array[2];
void* _u43 = decode_clo_array[1];

//if-clause
bool if_guard8902 = is_true(a8346);
if(if_guard8902)
{
mpz_t* mpzvar8903 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8903, 0);
void* xy8347 = encode_mpz(mpzvar8903);

//clo-app
arg_buffer[1] = kont8423;
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
mpz_t* mpzvar8904 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8904, 1);
void* a8348 = encode_mpz(mpzvar8904);

//creating new closure instance
void** clo8905 = alloc_clo(lam8542_fptr, 4);

//setting env list
clo8905[1] = a8348;
clo8905[2] = _u43;
clo8905[3] = kont8423;
clo8905[4] = length;
void* f8425 = encode_clo(clo8905);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8425;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8425))[0]);
function_ptr();
}

}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8547 = arg_buffer[1];
//reading env and args
void* kont8423 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8906 = alloc_clo(lam8545_fptr, 5);

//setting env list
clo8906[1] = _u43;
clo8906[2] = kont8423;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8906[3] = length;
clo8906[4] = lst;
clo8906[5] = cdr;
void* f8426 = encode_clo(clo8906);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8426;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
function_ptr();
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8548_fptr() // lam8548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* xy8352 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8549);
void* kont8427 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8427;
arg_buffer[2] = xy8352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8427))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8551);
void* a8354 = decode_clo_array[3];
void* kont8427 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8354, a8356);
arg_buffer[1] = kont8427;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8427))[0]);
function_ptr();
}

void* lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void lam8552_fptr() // lam8552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8553 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8553);
void* a8354 = decode_clo_array[5];
void* map = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* proc = decode_clo_array[2];
void* kont8427 = decode_clo_array[1];

//creating new closure instance
void** clo8907 = alloc_clo(lam8550_fptr, 3);

//setting env list
clo8907[1] = cons;
clo8907[2] = kont8427;
clo8907[3] = a8354;
void* f8429 = encode_clo(clo8907);



//clo-app
arg_buffer[1] = map;
arg_buffer[2] = f8429;
arg_buffer[3] = proc;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void lam8554_fptr() // lam8554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8555 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8555);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* proc = decode_clo_array[2];
void* kont8427 = decode_clo_array[1];

//creating new closure instance
void** clo8908 = alloc_clo(lam8552_fptr, 5);

//setting env list
clo8908[1] = kont8427;
clo8908[2] = proc;
clo8908[3] = cons;
clo8908[4] = map;
clo8908[5] = a8354;
void* f8430 = encode_clo(clo8908);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8430;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
function_ptr();
}

void* lam8554 = encode_clo(alloc_clo(lam8554_fptr, 0));

void lam8556_fptr() // lam8556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8557 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8557);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* proc = decode_clo_array[2];
void* kont8427 = decode_clo_array[1];

//creating new closure instance
void** clo8909 = alloc_clo(lam8554_fptr, 6);

//setting env list
clo8909[1] = kont8427;
clo8909[2] = proc;
clo8909[3] = cons;
clo8909[4] = map;
clo8909[5] = lst;
clo8909[6] = cdr;
void* f8431 = encode_clo(clo8909);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8431;
arg_buffer[3] = a8353;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8556 = encode_clo(alloc_clo(lam8556_fptr, 0));

void lam8558_fptr() // lam8558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8559 = arg_buffer[1];
//reading env and args
void* a8351 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8559);
void* lst = decode_clo_array[8];
void* map = decode_clo_array[7];
void* car = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* proc = decode_clo_array[2];
void* kont8427 = decode_clo_array[1];

//if-clause
bool if_guard8910 = is_true(a8351);
if(if_guard8910)
{

//creating new closure instance
void** clo8911 = alloc_clo(lam8548_fptr, 1);

//setting env list
clo8911[1] = kont8427;
void* f8428 = encode_clo(clo8911);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8428;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8912 = alloc_clo(lam8556_fptr, 6);

//setting env list
clo8912[1] = kont8427;
clo8912[2] = proc;
clo8912[3] = cons;
clo8912[4] = map;
clo8912[5] = lst;
clo8912[6] = cdr;
void* f8432 = encode_clo(clo8912);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8432;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
function_ptr();
}

}

void* lam8558 = encode_clo(alloc_clo(lam8558_fptr, 0));

void map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8560 = arg_buffer[1];
//reading env and args
void* kont8427 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8913 = alloc_clo(lam8558_fptr, 8);

//setting env list
clo8913[1] = kont8427;
clo8913[2] = proc;
clo8913[3] = cdr;
clo8913[4] = list;
clo8913[5] = cons;
clo8913[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8913[7] = map;
clo8913[8] = lst;
void* f8433 = encode_clo(clo8913);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8433;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
function_ptr();
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8561_fptr() // lam8561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8562 = arg_buffer[1];
//reading env and args
void* xy8358 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8562);
void* kont8434 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8434;
arg_buffer[2] = xy8358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8434))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void lam8563_fptr() // lam8563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8564 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8564);
void* kont8434 = decode_clo_array[3];
void* a8361 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8361, a8363);
arg_buffer[1] = kont8434;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8434))[0]);
function_ptr();
}

void* lam8563 = encode_clo(alloc_clo(lam8563_fptr, 0));

void lam8565_fptr() // lam8565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8566);
void* kont8434 = decode_clo_array[5];
void* op = decode_clo_array[4];
void* a8361 = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8914 = alloc_clo(lam8563_fptr, 3);

//setting env list
clo8914[1] = cons;
clo8914[2] = a8361;
clo8914[3] = kont8434;
void* f8436 = encode_clo(clo8914);



//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = f8436;
arg_buffer[3] = op;
arg_buffer[4] = a8362;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void lam8567_fptr() // lam8567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8568 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8568);
void* cdr = decode_clo_array[6];
void* kont8434 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* op = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8915 = alloc_clo(lam8565_fptr, 5);

//setting env list
clo8915[1] = cons;
clo8915[2] = filter;
clo8915[3] = a8361;
clo8915[4] = op;
clo8915[5] = kont8434;
void* f8437 = encode_clo(clo8915);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8437;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
}

void* lam8567 = encode_clo(alloc_clo(lam8567_fptr, 0));

void lam8569_fptr() // lam8569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8570 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8570);
void* kont8434 = decode_clo_array[3];
void* op = decode_clo_array[2];
void* filter = decode_clo_array[1];

//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = kont8434;
arg_buffer[3] = op;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void lam8571_fptr() // lam8571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8572 = arg_buffer[1];
//reading env and args
void* a8360 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8572);
void* cdr = decode_clo_array[7];
void* kont8434 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8916 = is_true(a8360);
if(if_guard8916)
{

//creating new closure instance
void** clo8917 = alloc_clo(lam8567_fptr, 6);

//setting env list
clo8917[1] = cons;
clo8917[2] = filter;
clo8917[3] = op;
clo8917[4] = lst;
clo8917[5] = kont8434;
clo8917[6] = cdr;
void* f8438 = encode_clo(clo8917);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8438;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
function_ptr();
}
else
{

//creating new closure instance
void** clo8918 = alloc_clo(lam8569_fptr, 3);

//setting env list
clo8918[1] = filter;
clo8918[2] = op;
clo8918[3] = kont8434;
void* f8439 = encode_clo(clo8918);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8439;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
function_ptr();
}

}

void* lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void lam8573_fptr() // lam8573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8574 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8574);
void* cdr = decode_clo_array[7];
void* kont8434 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* op = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8919 = alloc_clo(lam8571_fptr, 7);

//setting env list
clo8919[1] = car;
clo8919[2] = filter;
clo8919[3] = cons;
clo8919[4] = op;
clo8919[5] = lst;
clo8919[6] = kont8434;
clo8919[7] = cdr;
void* f8440 = encode_clo(clo8919);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8440;
arg_buffer[3] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void lam8575_fptr() // lam8575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8576);
void* kont8434 = decode_clo_array[8];
void* lst = decode_clo_array[7];
void* op = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8920 = is_true(a8357);
if(if_guard8920)
{

//creating new closure instance
void** clo8921 = alloc_clo(lam8561_fptr, 1);

//setting env list
clo8921[1] = kont8434;
void* f8435 = encode_clo(clo8921);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8922 = alloc_clo(lam8573_fptr, 7);

//setting env list
clo8922[1] = car;
clo8922[2] = filter;
clo8922[3] = cons;
clo8922[4] = op;
clo8922[5] = lst;
clo8922[6] = kont8434;
clo8922[7] = cdr;
void* f8441 = encode_clo(clo8922);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8441;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
function_ptr();
}

}

void* lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8577 = arg_buffer[1];
//reading env and args
void* kont8434 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8923 = alloc_clo(lam8575_fptr, 8);

//setting env list
clo8923[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8923[2] = filter;
clo8923[3] = cdr;
clo8923[4] = list;
clo8923[5] = cons;
clo8923[6] = op;
clo8923[7] = lst;
clo8923[8] = kont8434;
void* f8442 = encode_clo(clo8923);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8442;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8579);
void* drop = decode_clo_array[3];
void* kont8443 = decode_clo_array[2];
void* a8367 = decode_clo_array[1];

//clo-app
arg_buffer[1] = drop;
arg_buffer[2] = kont8443;
arg_buffer[3] = a8367;
arg_buffer[4] = a8369;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void lam8581_fptr() // lam8581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8582);
void* drop = decode_clo_array[4];
void* kont8443 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8924 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8924, 1);
void* a8368 = encode_mpz(mpzvar8924);

//creating new closure instance
void** clo8925 = alloc_clo(lam8578_fptr, 3);

//setting env list
clo8925[1] = a8367;
clo8925[2] = kont8443;
clo8925[3] = drop;
void* f8444 = encode_clo(clo8925);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8368);
arg_buffer[1] = f8444;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
function_ptr();
}

void* lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8584);
void* cdr = decode_clo_array[6];
void* kont8443 = decode_clo_array[5];
void* n = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* drop = decode_clo_array[1];

//if-clause
bool if_guard8926 = is_true(a8366);
if(if_guard8926)
{

//clo-app
arg_buffer[1] = kont8443;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8927 = alloc_clo(lam8581_fptr, 4);

//setting env list
clo8927[1] = _u45;
clo8927[2] = n;
clo8927[3] = kont8443;
clo8927[4] = drop;
void* f8445 = encode_clo(clo8927);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8445;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
function_ptr();
}

}

void* lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8586 = arg_buffer[1];
//reading env and args
void* kont8443 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8928 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8928, 0);
void* a8365 = encode_mpz(mpzvar8928);

//creating new closure instance
void** clo8929 = alloc_clo(lam8583_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8929[1] = drop;
clo8929[2] = lst;
clo8929[3] = _u45;
clo8929[4] = n;
clo8929[5] = kont8443;
clo8929[6] = cdr;
void* f8446 = encode_clo(clo8929);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1] = f8446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
function_ptr();
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8587_fptr() // lam8587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8588 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8588);
void* a8372 = decode_clo_array[4];
void* fun = decode_clo_array[3];
void* foldl = decode_clo_array[2];
void* kont8447 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldl;
arg_buffer[2] = kont8447;
arg_buffer[3] = fun;
arg_buffer[4] = a8372;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8587 = encode_clo(alloc_clo(lam8587_fptr, 0));

void lam8589_fptr() // lam8589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8590 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8590);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* fun = decode_clo_array[3];
void* foldl = decode_clo_array[2];
void* kont8447 = decode_clo_array[1];

//creating new closure instance
void** clo8930 = alloc_clo(lam8587_fptr, 4);

//setting env list
clo8930[1] = kont8447;
clo8930[2] = foldl;
clo8930[3] = fun;
clo8930[4] = a8372;
void* f8448 = encode_clo(clo8930);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8448;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
function_ptr();
}

void* lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void lam8591_fptr() // lam8591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8592 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8592);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* foldl = decode_clo_array[2];
void* kont8447 = decode_clo_array[1];

//creating new closure instance
void** clo8931 = alloc_clo(lam8589_fptr, 5);

//setting env list
clo8931[1] = kont8447;
clo8931[2] = foldl;
clo8931[3] = fun;
clo8931[4] = lst;
clo8931[5] = cdr;
void* f8449 = encode_clo(clo8931);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8449;
arg_buffer[3] = a8371;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void lam8593_fptr() // lam8593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8594 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8594);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* fun = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* car = decode_clo_array[3];
void* foldl = decode_clo_array[2];
void* kont8447 = decode_clo_array[1];

//if-clause
bool if_guard8932 = is_true(a8370);
if(if_guard8932)
{

//clo-app
arg_buffer[1] = kont8447;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8933 = alloc_clo(lam8591_fptr, 6);

//setting env list
clo8933[1] = kont8447;
clo8933[2] = foldl;
clo8933[3] = acc;
clo8933[4] = fun;
clo8933[5] = lst;
clo8933[6] = cdr;
void* f8450 = encode_clo(clo8933);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8450;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
}

}

void* lam8593 = encode_clo(alloc_clo(lam8593_fptr, 0));

void foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8595 = arg_buffer[1];
//reading env and args
void* kont8447 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8934 = alloc_clo(lam8593_fptr, 7);

//setting env list
clo8934[1] = kont8447;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8934[2] = foldl;
clo8934[3] = car;
clo8934[4] = acc;
clo8934[5] = fun;
clo8934[6] = lst;
clo8934[7] = cdr;
void* f8451 = encode_clo(clo8934);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8451;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8596_fptr() // lam8596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8597 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8597);
void* kont8452 = decode_clo_array[3];
void* a8375 = decode_clo_array[2];
void* fun = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8452;
arg_buffer[3] = a8375;
arg_buffer[4] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void lam8598_fptr() // lam8598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8599 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8599);
void* a8375 = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* kont8452 = decode_clo_array[1];

//creating new closure instance
void** clo8935 = alloc_clo(lam8596_fptr, 3);

//setting env list
clo8935[1] = fun;
clo8935[2] = a8375;
clo8935[3] = kont8452;
void* f8453 = encode_clo(clo8935);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8453;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8598 = encode_clo(alloc_clo(lam8598_fptr, 0));

void lam8600_fptr() // lam8600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8601 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8601);
void* cdr = decode_clo_array[6];
void* fun = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* kont8452 = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//creating new closure instance
void** clo8936 = alloc_clo(lam8598_fptr, 5);

//setting env list
clo8936[1] = kont8452;
clo8936[2] = foldr;
clo8936[3] = acc;
clo8936[4] = fun;
clo8936[5] = a8375;
void* f8454 = encode_clo(clo8936);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8454;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
function_ptr();
}

void* lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void lam8602_fptr() // lam8602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8603 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8603);
void* cdr = decode_clo_array[7];
void* fun = decode_clo_array[6];
void* acc = decode_clo_array[5];
void* car = decode_clo_array[4];
void* kont8452 = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//if-clause
bool if_guard8937 = is_true(a8374);
if(if_guard8937)
{

//clo-app
arg_buffer[1] = kont8452;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8938 = alloc_clo(lam8600_fptr, 6);

//setting env list
clo8938[1] = lst;
clo8938[2] = foldr;
clo8938[3] = kont8452;
clo8938[4] = acc;
clo8938[5] = fun;
clo8938[6] = cdr;
void* f8455 = encode_clo(clo8938);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8455;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
function_ptr();
}

}

void* lam8602 = encode_clo(alloc_clo(lam8602_fptr, 0));

void foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8604 = arg_buffer[1];
//reading env and args
void* kont8452 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8939 = alloc_clo(lam8602_fptr, 7);

//setting env list
clo8939[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8939[2] = foldr;
clo8939[3] = kont8452;
clo8939[4] = car;
clo8939[5] = acc;
clo8939[6] = fun;
clo8939[7] = cdr;
void* f8456 = encode_clo(clo8939);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8456;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
function_ptr();
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8605_fptr() // lam8605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8606 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8606);
void* reverse_u45helper = decode_clo_array[3];
void* kont8457 = decode_clo_array[2];
void* a8379 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8457;
arg_buffer[3] = a8379;
arg_buffer[4] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void lam8607_fptr() // lam8607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8608 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8608);
void* reverse_u45helper = decode_clo_array[5];
void* kont8457 = decode_clo_array[4];
void* a8379 = decode_clo_array[3];
void* lst2 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8940 = alloc_clo(lam8605_fptr, 3);

//setting env list
clo8940[1] = a8379;
clo8940[2] = kont8457;
clo8940[3] = reverse_u45helper;
void* f8458 = encode_clo(clo8940);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8380, lst2);
arg_buffer[1] = f8458;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
}

void* lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void lam8609_fptr() // lam8609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8610 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8610);
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* kont8457 = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8941 = alloc_clo(lam8607_fptr, 5);

//setting env list
clo8941[1] = cons;
clo8941[2] = lst2;
clo8941[3] = a8379;
clo8941[4] = kont8457;
clo8941[5] = reverse_u45helper;
void* f8459 = encode_clo(clo8941);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8459;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
}

void* lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void lam8611_fptr() // lam8611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8612 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8612);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* kont8457 = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* cons = decode_clo_array[1];

//if-clause
bool if_guard8942 = is_true(a8378);
if(if_guard8942)
{

//clo-app
arg_buffer[1] = kont8457;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8943 = alloc_clo(lam8609_fptr, 6);

//setting env list
clo8943[1] = cons;
clo8943[2] = car;
clo8943[3] = lst2;
clo8943[4] = kont8457;
clo8943[5] = reverse_u45helper;
clo8943[6] = lst;
void* f8460 = encode_clo(clo8943);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8460;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
function_ptr();
}

}

void* lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8613 = arg_buffer[1];
//reading env and args
void* kont8457 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8944 = alloc_clo(lam8611_fptr, 7);

//setting env list
clo8944[1] = cons;
clo8944[2] = car;
clo8944[3] = lst2;
clo8944[4] = kont8457;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8944[5] = reverse_u45helper;
clo8944[6] = lst;
clo8944[7] = cdr;
void* f8461 = encode_clo(clo8944);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1] = f8461;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
function_ptr();
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8614_fptr() // lam8614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8615 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8615);
void* lst = decode_clo_array[3];
void* reverse_u45helper = decode_clo_array[2];
void* kont8462 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8462;
arg_buffer[3] = lst;
arg_buffer[4] = a8382;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8614 = encode_clo(alloc_clo(lam8614_fptr, 0));

void reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8616 = arg_buffer[1];
//reading env and args
void* kont8462 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8945 = alloc_clo(lam8614_fptr, 3);

//setting env list
clo8945[1] = kont8462;
clo8945[2] = reverse_u45helper;
clo8945[3] = lst;
void* f8463 = encode_clo(clo8945);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8463;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8617_fptr() // lam8617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8618 = arg_buffer[1];
//reading env and args
void* a8386 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8618);
void* cons = decode_clo_array[3];
void* kont8464 = decode_clo_array[2];
void* a8384 = decode_clo_array[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8384, a8386);
arg_buffer[1] = kont8464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
function_ptr();
}

void* lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void lam8619_fptr() // lam8619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8620 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8620);
void* append1 = decode_clo_array[5];
void* rhs = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* kont8464 = decode_clo_array[2];
void* a8384 = decode_clo_array[1];

//creating new closure instance
void** clo8946 = alloc_clo(lam8617_fptr, 3);

//setting env list
clo8946[1] = a8384;
clo8946[2] = kont8464;
clo8946[3] = cons;
void* f8465 = encode_clo(clo8946);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8465;
arg_buffer[3] = a8385;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8619 = encode_clo(alloc_clo(lam8619_fptr, 0));

void lam8621_fptr() // lam8621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8622 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8622);
void* lhs = decode_clo_array[6];
void* append1 = decode_clo_array[5];
void* rhs = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* kont8464 = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo8947 = alloc_clo(lam8619_fptr, 5);

//setting env list
clo8947[1] = a8384;
clo8947[2] = kont8464;
clo8947[3] = cons;
clo8947[4] = rhs;
clo8947[5] = append1;
void* f8466 = encode_clo(clo8947);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lhs);
arg_buffer[1] = f8466;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
}

void* lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void lam8623_fptr() // lam8623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8624 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8624);
void* lhs = decode_clo_array[7];
void* append1 = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* kont8464 = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8948 = is_true(a8383);
if(if_guard8948)
{

//clo-app
arg_buffer[1] = kont8464;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8949 = alloc_clo(lam8621_fptr, 6);

//setting env list
clo8949[1] = cdr;
clo8949[2] = kont8464;
clo8949[3] = cons;
clo8949[4] = rhs;
clo8949[5] = append1;
clo8949[6] = lhs;
void* f8467 = encode_clo(clo8949);



//clo-app
arg_buffer[2]=apply_prim_car_1(lhs);
arg_buffer[1] = f8467;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
}

}

void* lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void append1_fptr() // append1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8625 = arg_buffer[1];
//reading env and args
void* kont8464 = arg_buffer[2];
void* lhs = arg_buffer[3];
void* rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8950 = alloc_clo(lam8623_fptr, 7);

//setting env list
clo8950[1] = car;
clo8950[2] = rhs;
clo8950[3] = cdr;
clo8950[4] = kont8464;
clo8950[5] = cons;
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

clo8950[6] = append1;
clo8950[7] = lhs;
void* f8468 = encode_clo(clo8950);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lhs);
arg_buffer[1] = f8468;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
function_ptr();
}

void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8626_fptr() // lam8626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8627 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8627);
void* a8387 = decode_clo_array[4];
void* foldr = decode_clo_array[3];
void* kont8469 = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8469;
arg_buffer[3] = append1;
arg_buffer[4] = a8387;
arg_buffer[5] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8626 = encode_clo(alloc_clo(lam8626_fptr, 0));

void lam8628_fptr() // lam8628 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8629 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8629);
void* a8387 = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8469 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8951 = alloc_clo(lam8626_fptr, 4);

//setting env list
clo8951[1] = append1;
clo8951[2] = kont8469;
clo8951[3] = foldr;
clo8951[4] = a8387;
void* f8470 = encode_clo(clo8951);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8470;
arg_buffer[3] = a8388;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8628 = encode_clo(alloc_clo(lam8628_fptr, 0));

void lam8630_fptr() // lam8630 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8631 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8631);
void* list = decode_clo_array[6];
void* foldr = decode_clo_array[5];
void* kont8469 = decode_clo_array[4];
void* xs = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8952 = alloc_clo(lam8628_fptr, 5);

//setting env list
clo8952[1] = append1;
clo8952[2] = x;
clo8952[3] = kont8469;
clo8952[4] = foldr;
clo8952[5] = a8387;
void* f8471 = encode_clo(clo8952);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8471;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8630 = encode_clo(alloc_clo(lam8630_fptr, 0));

void lam8632_fptr() // lam8632 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8633 = arg_buffer[1];
//reading env and args
void* x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8633);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8469 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8953 = alloc_clo(lam8630_fptr, 6);

//setting env list
clo8953[1] = append1;
clo8953[2] = x;
clo8953[3] = xs;
clo8953[4] = kont8469;
clo8953[5] = foldr;
clo8953[6] = list;
void* f8472 = encode_clo(clo8953);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8472;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8632 = encode_clo(alloc_clo(lam8632_fptr, 0));

void lam8634_fptr() // lam8634 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8635 = arg_buffer[1];
//reading env and args
void* vargs8318 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8635);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8469 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8954 = alloc_clo(lam8632_fptr, 5);

//setting env list
clo8954[1] = xs;
clo8954[2] = append1;
clo8954[3] = kont8469;
clo8954[4] = foldr;
clo8954[5] = list;
void* f8473 = encode_clo(clo8954);



//clo-app
arg_buffer[1] = f8473;
arg_buffer[2] = vargs8318;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8634 = encode_clo(alloc_clo(lam8634_fptr, 0));

void lam8636_fptr() // lam8636 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8637 = arg_buffer[1];
//reading env and args
void* xs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8637);
void* foldr = decode_clo_array[6];
void* kont8469 = decode_clo_array[5];
void* vargs8489 = decode_clo_array[4];
void* append1 = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo8955 = alloc_clo(lam8634_fptr, 5);

//setting env list
clo8955[1] = xs;
clo8955[2] = append1;
clo8955[3] = kont8469;
clo8955[4] = foldr;
clo8955[5] = list;
void* f8474 = encode_clo(clo8955);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(vargs8489);
arg_buffer[1] = f8474;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
function_ptr();
}

void* lam8636 = encode_clo(alloc_clo(lam8636_fptr, 0));

void append_fptr() // append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8638 = arg_buffer[1];
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

void* kont8469 = prim_car(vargs);
void* vargs8489 = prim_cdr(vargs);

//creating new closure instance
void** clo8956 = alloc_clo(lam8636_fptr, 6);

//setting env list
clo8956[1] = cdr;
clo8956[2] = list;
clo8956[3] = append1;
clo8956[4] = vargs8489;
clo8956[5] = kont8469;
clo8956[6] = foldr;
void* f8475 = encode_clo(clo8956);



//clo-app
arg_buffer[2]=apply_prim_car_1(vargs8489);
arg_buffer[1] = f8475;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
function_ptr();
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8639_fptr() // lam8639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8640 = arg_buffer[1];
//reading env and args
void* xy8392 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8640);
void* kont8476 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8476;
arg_buffer[2] = xy8392;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8476))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8639 = encode_clo(alloc_clo(lam8639_fptr, 0));

void lam8641_fptr() // lam8641 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8642 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8642);
void* a8393 = decode_clo_array[4];
void* a8395 = decode_clo_array[3];
void* kont8476 = decode_clo_array[2];
void* take_u45helper = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8476;
arg_buffer[3] = a8393;
arg_buffer[4] = a8395;
arg_buffer[5] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8641 = encode_clo(alloc_clo(lam8641_fptr, 0));

void lam8643_fptr() // lam8643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8644 = arg_buffer[1];
//reading env and args
void* a8396 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8644);
void* a8393 = decode_clo_array[6];
void* a8395 = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* kont8476 = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8957 = alloc_clo(lam8641_fptr, 4);

//setting env list
clo8957[1] = take_u45helper;
clo8957[2] = kont8476;
clo8957[3] = a8395;
clo8957[4] = a8393;
void* f8478 = encode_clo(clo8957);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8396, lst2);
arg_buffer[1] = f8478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
function_ptr();
}

void* lam8643 = encode_clo(alloc_clo(lam8643_fptr, 0));

void lam8645_fptr() // lam8645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8646 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8646);
void* lst = decode_clo_array[7];
void* a8393 = decode_clo_array[6];
void* car = decode_clo_array[5];
void* cons = decode_clo_array[4];
void* kont8476 = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* lst2 = decode_clo_array[1];

//creating new closure instance
void** clo8958 = alloc_clo(lam8643_fptr, 6);

//setting env list
clo8958[1] = lst2;
clo8958[2] = take_u45helper;
clo8958[3] = kont8476;
clo8958[4] = cons;
clo8958[5] = a8395;
clo8958[6] = a8393;
void* f8479 = encode_clo(clo8958);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1] = f8479;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
function_ptr();
}

void* lam8645 = encode_clo(alloc_clo(lam8645_fptr, 0));

void lam8648_fptr() // lam8648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8649 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8649);
void* lst = decode_clo_array[8];
void* cons = decode_clo_array[7];
void* _u45 = decode_clo_array[6];
void* kont8476 = decode_clo_array[5];
void* take_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];
mpz_t* mpzvar8959 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8959, 1);
void* a8394 = encode_mpz(mpzvar8959);

//creating new closure instance
void** clo8960 = alloc_clo(lam8645_fptr, 7);

//setting env list
clo8960[1] = lst2;
clo8960[2] = take_u45helper;
clo8960[3] = kont8476;
clo8960[4] = cons;
clo8960[5] = car;
clo8960[6] = a8393;
clo8960[7] = lst;
void* f8480 = encode_clo(clo8960);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8394);
arg_buffer[1] = f8480;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
function_ptr();
}

void* lam8648 = encode_clo(alloc_clo(lam8648_fptr, 0));

void lam8650_fptr() // lam8650 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8651 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8651);
void* cdr = decode_clo_array[10];
void* lst = decode_clo_array[9];
void* reverse = decode_clo_array[8];
void* cons = decode_clo_array[7];
void* _u45 = decode_clo_array[6];
void* kont8476 = decode_clo_array[5];
void* take_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8961 = is_true(a8391);
if(if_guard8961)
{

//creating new closure instance
void** clo8962 = alloc_clo(lam8639_fptr, 1);

//setting env list
clo8962[1] = kont8476;
void* f8477 = encode_clo(clo8962);



//clo-app
arg_buffer[1] = reverse;
arg_buffer[2] = f8477;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8963 = alloc_clo(lam8648_fptr, 8);

//setting env list
clo8963[1] = car;
clo8963[2] = n;
clo8963[3] = lst2;
clo8963[4] = take_u45helper;
clo8963[5] = kont8476;
clo8963[6] = _u45;
clo8963[7] = cons;
clo8963[8] = lst;
void* f8481 = encode_clo(clo8963);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1] = f8481;
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
function_ptr();
}

}

void* lam8650 = encode_clo(alloc_clo(lam8650_fptr, 0));

void take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8653 = arg_buffer[1];
//reading env and args
void* kont8476 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8964 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8964, 0);
void* a8390 = encode_mpz(mpzvar8964);

//creating new closure instance
void** clo8965 = alloc_clo(lam8650_fptr, 10);

//setting env list
clo8965[1] = car;
clo8965[2] = n;
clo8965[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8965[4] = take_u45helper;
clo8965[5] = kont8476;
clo8965[6] = _u45;
clo8965[7] = cons;
clo8965[8] = reverse;
clo8965[9] = lst;
clo8965[10] = cdr;
void* f8482 = encode_clo(clo8965);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8390);
arg_buffer[1] = f8482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
function_ptr();
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void lam8654_fptr() // lam8654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8655 = arg_buffer[1];
//reading env and args
void* a8398 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8655);
void* kont8483 = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* n = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8483;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8398;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8654 = encode_clo(alloc_clo(lam8654_fptr, 0));

void take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8656 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8966 = alloc_clo(lam8654_fptr, 4);

//setting env list
clo8966[1] = n;
clo8966[2] = take_u45helper;
clo8966[3] = lst;
clo8966[4] = kont8483;
void* f8484 = encode_clo(clo8966);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8484;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8657_fptr() // lam8657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8658 = arg_buffer[1];
//reading env and args
void* _u438319 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8658);
void* b = decode_clo_array[3];
void* a = decode_clo_array[2];
void* kont8485 = decode_clo_array[1];

//clo-app
arg_buffer[1] = _u438319;
arg_buffer[2] = kont8485;
arg_buffer[3] = a;
arg_buffer[4] = b;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u438319))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8657 = encode_clo(alloc_clo(lam8657_fptr, 0));

void call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8661 = arg_buffer[1];
//reading env and args
void* kont8485 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8967 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8967, 5);
void* a = encode_mpz(mpzvar8967);
mpz_t* mpzvar8968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8968, 6);
void* b = encode_mpz(mpzvar8968);

//creating new closure instance
void** clo8969 = alloc_clo(lam8657_fptr, 3);

//setting env list
clo8969[1] = kont8485;
clo8969[2] = a;
clo8969[3] = b;
void* f8486 = encode_clo(clo8969);



//clo-app
arg_buffer[1] = f8486;
arg_buffer[2] = _u45;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8486))[0]);
//call next proc using a function pointer
function_ptr();
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8663 = arg_buffer[1];
//reading env and args
void* kont8487 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8970 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8970, 1);
void* a8399 = encode_mpz(mpzvar8970);

//clo-app
arg_buffer[1] = call;
arg_buffer[2] = kont8487;
arg_buffer[3] = a8399;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
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

