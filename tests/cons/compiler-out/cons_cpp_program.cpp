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
void* _env8670 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8668 = prim_car(lst);
void* lst8671 = prim_cdr(lst);
void* x8669 = apply_prim__u43(lst8671);
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
void* x8669 = apply_prim__u43(arg_buffer);
arg_buffer[1] = kont8668;
arg_buffer[2] = x8669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8668))[0]);
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
void* _env8674 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8672 = prim_car(lst);
void* lst8675 = prim_cdr(lst);
void* x8673 = apply_prim__u45(lst8675);
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
void* x8673 = apply_prim__u45(arg_buffer);
arg_buffer[1] = kont8672;
arg_buffer[2] = x8673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8672))[0]);
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
void* _env8678 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8676 = prim_car(lst);
void* lst8679 = prim_cdr(lst);
void* x8677 = apply_prim__u42(lst8679);
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
void* x8677 = apply_prim__u42(arg_buffer);
arg_buffer[1] = kont8676;
arg_buffer[2] = x8677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8676))[0]);
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
void* _env8682 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8680 = prim_car(lst);
void* lst8683 = prim_cdr(lst);
void* x8681 = apply_prim__u47(lst8683);
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
void* x8681 = apply_prim__u47(arg_buffer);
arg_buffer[1] = kont8680;
arg_buffer[2] = x8681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8680))[0]);
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
void* _env8686 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8684 = prim_car(lst);
void* lst8687 = prim_cdr(lst);
void* x8685 = apply_prim__u61(lst8687);
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
void* x8685 = apply_prim__u61(arg_buffer);
arg_buffer[1] = kont8684;
arg_buffer[2] = x8685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8684))[0]);
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
void* _env8690 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8688 = prim_car(lst);
void* lst8691 = prim_cdr(lst);
void* x8689 = apply_prim__u62(lst8691);
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
void* x8689 = apply_prim__u62(arg_buffer);
arg_buffer[1] = kont8688;
arg_buffer[2] = x8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
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
void* _env8694 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8692 = prim_car(lst);
void* lst8695 = prim_cdr(lst);
void* x8693 = apply_prim__u60(lst8695);
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
void* x8693 = apply_prim__u60(arg_buffer);
arg_buffer[1] = kont8692;
arg_buffer[2] = x8693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8692))[0]);
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
void* _env8698 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8696 = prim_car(lst);
void* lst8699 = prim_cdr(lst);
void* x8697 = apply_prim__u60_u61(lst8699);
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
void* x8697 = apply_prim__u60_u61(arg_buffer);
arg_buffer[1] = kont8696;
arg_buffer[2] = x8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8696))[0]);
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
void* _env8702 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8700 = prim_car(lst);
void* lst8703 = prim_cdr(lst);
void* x8701 = apply_prim__u62_u61(lst8703);
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
void* x8701 = apply_prim__u62_u61(arg_buffer);
arg_buffer[1] = kont8700;
arg_buffer[2] = x8701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8700))[0]);
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
void* _env8706 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8704 = prim_car(lst);
void* lst8707 = prim_cdr(lst);
void* x8705 = apply_prim_modulo(lst8707);
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
void* x8705 = apply_prim_modulo(arg_buffer);
arg_buffer[1] = kont8704;
arg_buffer[2] = x8705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
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
void* _env8710 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8708 = prim_car(lst);
void* lst8711 = prim_cdr(lst);
void* x8709 = apply_prim_null_u63(lst8711);
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
void* x8709 = apply_prim_null_u63(arg_buffer);
arg_buffer[1] = kont8708;
arg_buffer[2] = x8709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
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
void* _env8714 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8712 = prim_car(lst);
void* lst8715 = prim_cdr(lst);
void* x8713 = apply_prim_equal_u63(lst8715);
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
void* x8713 = apply_prim_equal_u63(arg_buffer);
arg_buffer[1] = kont8712;
arg_buffer[2] = x8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
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
void* _env8718 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8716 = prim_car(lst);
void* lst8719 = prim_cdr(lst);
void* x8717 = apply_prim_eq_u63(lst8719);
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
void* x8717 = apply_prim_eq_u63(arg_buffer);
arg_buffer[1] = kont8716;
arg_buffer[2] = x8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
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
void* _env8722 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8720 = prim_car(lst);
void* lst8723 = prim_cdr(lst);
void* x8721 = apply_prim_cons(lst8723);
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
void* x8721 = apply_prim_cons(arg_buffer);
arg_buffer[1] = kont8720;
arg_buffer[2] = x8721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
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
void* _env8726 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8724 = prim_car(lst);
void* lst8727 = prim_cdr(lst);
void* x8725 = apply_prim_car(lst8727);
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
void* x8725 = apply_prim_car(arg_buffer);
arg_buffer[1] = kont8724;
arg_buffer[2] = x8725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
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
void* _env8730 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8728 = prim_car(lst);
void* lst8731 = prim_cdr(lst);
void* x8729 = apply_prim_cdr(lst8731);
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
void* x8729 = apply_prim_cdr(arg_buffer);
arg_buffer[1] = kont8728;
arg_buffer[2] = x8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
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
void* _env8734 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8732 = prim_car(lst);
void* lst8735 = prim_cdr(lst);
void* x8733 = apply_prim_float_u45_u62int(lst8735);
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
void* x8733 = apply_prim_float_u45_u62int(arg_buffer);
arg_buffer[1] = kont8732;
arg_buffer[2] = x8733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
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
void* _env8738 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8736 = prim_car(lst);
void* lst8739 = prim_cdr(lst);
void* x8737 = apply_prim_int_u45_u62float(lst8739);
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
void* x8737 = apply_prim_int_u45_u62float(arg_buffer);
arg_buffer[1] = kont8736;
arg_buffer[2] = x8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
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
void* _env8742 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8740 = prim_car(lst);
void* lst8743 = prim_cdr(lst);
void* x8741 = apply_prim_hash(lst8743);
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
void* x8741 = apply_prim_hash(arg_buffer);
arg_buffer[1] = kont8740;
arg_buffer[2] = x8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8740))[0]);
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
void* _env8746 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8744 = prim_car(lst);
void* lst8747 = prim_cdr(lst);
void* x8745 = apply_prim_hash_u45ref(lst8747);
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
void* x8745 = apply_prim_hash_u45ref(arg_buffer);
arg_buffer[1] = kont8744;
arg_buffer[2] = x8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8744))[0]);
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
void* _env8750 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8748 = prim_car(lst);
void* lst8751 = prim_cdr(lst);
void* x8749 = apply_prim_hash_u45set(lst8751);
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
void* x8749 = apply_prim_hash_u45set(arg_buffer);
arg_buffer[1] = kont8748;
arg_buffer[2] = x8749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8748))[0]);
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
void* _env8754 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8752 = prim_car(lst);
void* lst8755 = prim_cdr(lst);
void* x8753 = apply_prim_hash_u45keys(lst8755);
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
void* x8753 = apply_prim_hash_u45keys(arg_buffer);
arg_buffer[1] = kont8752;
arg_buffer[2] = x8753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8752))[0]);
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
void* _env8758 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8756 = prim_car(lst);
void* lst8759 = prim_cdr(lst);
void* x8757 = apply_prim_hash_u45has_u45key_u63(lst8759);
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
void* x8757 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
arg_buffer[1] = kont8756;
arg_buffer[2] = x8757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8756))[0]);
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
void* _env8762 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8760 = prim_car(lst);
void* lst8763 = prim_cdr(lst);
void* x8761 = apply_prim_hash_u45count(lst8763);
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
void* x8761 = apply_prim_hash_u45count(arg_buffer);
arg_buffer[1] = kont8760;
arg_buffer[2] = x8761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8760))[0]);
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
void* _env8766 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8764 = prim_car(lst);
void* lst8767 = prim_cdr(lst);
void* x8765 = apply_prim_set(lst8767);
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
void* x8765 = apply_prim_set(arg_buffer);
arg_buffer[1] = kont8764;
arg_buffer[2] = x8765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8764))[0]);
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
void* _env8770 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8768 = prim_car(lst);
void* lst8771 = prim_cdr(lst);
void* x8769 = apply_prim_set_u45_u62list(lst8771);
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
void* x8769 = apply_prim_set_u45_u62list(arg_buffer);
arg_buffer[1] = kont8768;
arg_buffer[2] = x8769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8768))[0]);
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
void* _env8774 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8772 = prim_car(lst);
void* lst8775 = prim_cdr(lst);
void* x8773 = apply_prim_list_u45_u62set(lst8775);
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
void* x8773 = apply_prim_list_u45_u62set(arg_buffer);
arg_buffer[1] = kont8772;
arg_buffer[2] = x8773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8772))[0]);
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
void* _env8778 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8776 = prim_car(lst);
void* lst8779 = prim_cdr(lst);
void* x8777 = apply_prim_set_u45add(lst8779);
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
void* x8777 = apply_prim_set_u45add(arg_buffer);
arg_buffer[1] = kont8776;
arg_buffer[2] = x8777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8776))[0]);
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
void* _env8782 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8780 = prim_car(lst);
void* lst8783 = prim_cdr(lst);
void* x8781 = apply_prim_set_u45member_u63(lst8783);
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
void* x8781 = apply_prim_set_u45member_u63(arg_buffer);
arg_buffer[1] = kont8780;
arg_buffer[2] = x8781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8780))[0]);
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
void* _env8786 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8784 = prim_car(lst);
void* lst8787 = prim_cdr(lst);
void* x8785 = apply_prim_set_u45remove(lst8787);
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
void* x8785 = apply_prim_set_u45remove(arg_buffer);
arg_buffer[1] = kont8784;
arg_buffer[2] = x8785;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8784))[0]);
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
void* _env8790 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8788 = prim_car(lst);
void* lst8791 = prim_cdr(lst);
void* x8789 = apply_prim_set_u45count(lst8791);
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
void* x8789 = apply_prim_set_u45count(arg_buffer);
arg_buffer[1] = kont8788;
arg_buffer[2] = x8789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8788))[0]);
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
void* _env8794 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8792 = prim_car(lst);
void* lst8795 = prim_cdr(lst);
void* x8793 = apply_prim_string_u63(lst8795);
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
void* x8793 = apply_prim_string_u63(arg_buffer);
arg_buffer[1] = kont8792;
arg_buffer[2] = x8793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8792))[0]);
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
void* _env8798 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8796 = prim_car(lst);
void* lst8799 = prim_cdr(lst);
void* x8797 = apply_prim_string_u45length(lst8799);
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
void* x8797 = apply_prim_string_u45length(arg_buffer);
arg_buffer[1] = kont8796;
arg_buffer[2] = x8797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8796))[0]);
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
void* _env8802 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8800 = prim_car(lst);
void* lst8803 = prim_cdr(lst);
void* x8801 = apply_prim_string_u45ref(lst8803);
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
void* x8801 = apply_prim_string_u45ref(arg_buffer);
arg_buffer[1] = kont8800;
arg_buffer[2] = x8801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8800))[0]);
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
void* _env8806 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8804 = prim_car(lst);
void* lst8807 = prim_cdr(lst);
void* x8805 = apply_prim_substring(lst8807);
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
void* x8805 = apply_prim_substring(arg_buffer);
arg_buffer[1] = kont8804;
arg_buffer[2] = x8805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8804))[0]);
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
void* _env8810 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8808 = prim_car(lst);
void* lst8811 = prim_cdr(lst);
void* x8809 = apply_prim_string_u45append(lst8811);
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
void* x8809 = apply_prim_string_u45append(arg_buffer);
arg_buffer[1] = kont8808;
arg_buffer[2] = x8809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8808))[0]);
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
void* _env8814 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8812 = prim_car(lst);
void* lst8815 = prim_cdr(lst);
void* x8813 = apply_prim_string_u45_u62list(lst8815);
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
void* x8813 = apply_prim_string_u45_u62list(arg_buffer);
arg_buffer[1] = kont8812;
arg_buffer[2] = x8813;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8812))[0]);
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
void* _env8818 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8816 = prim_car(lst);
void* lst8819 = prim_cdr(lst);
void* x8817 = apply_prim_exact_u45floor(lst8819);
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
void* x8817 = apply_prim_exact_u45floor(arg_buffer);
arg_buffer[1] = kont8816;
arg_buffer[2] = x8817;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8816))[0]);
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
void* _env8822 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8820 = prim_car(lst);
void* lst8823 = prim_cdr(lst);
void* x8821 = apply_prim_exact_u45ceiling(lst8823);
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
void* x8821 = apply_prim_exact_u45ceiling(arg_buffer);
arg_buffer[1] = kont8820;
arg_buffer[2] = x8821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8820))[0]);
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
void* _env8826 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8824 = prim_car(lst);
void* lst8827 = prim_cdr(lst);
void* x8825 = apply_prim_exact_u45round(lst8827);
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
void* x8825 = apply_prim_exact_u45round(arg_buffer);
arg_buffer[1] = kont8824;
arg_buffer[2] = x8825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8824))[0]);
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
void* _env8830 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8828 = prim_car(lst);
void* lst8831 = prim_cdr(lst);
void* x8829 = apply_prim_abs(lst8831);
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
void* x8829 = apply_prim_abs(arg_buffer);
arg_buffer[1] = kont8828;
arg_buffer[2] = x8829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8828))[0]);
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
void* _env8834 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8832 = prim_car(lst);
void* lst8835 = prim_cdr(lst);
void* x8833 = apply_prim_max(lst8835);
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
void* x8833 = apply_prim_max(arg_buffer);
arg_buffer[1] = kont8832;
arg_buffer[2] = x8833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8832))[0]);
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
void* _env8838 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8836 = prim_car(lst);
void* lst8839 = prim_cdr(lst);
void* x8837 = apply_prim_min(lst8839);
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
void* x8837 = apply_prim_min(arg_buffer);
arg_buffer[1] = kont8836;
arg_buffer[2] = x8837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8836))[0]);
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
void* _env8842 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8840 = prim_car(lst);
void* lst8843 = prim_cdr(lst);
void* x8841 = apply_prim_expt(lst8843);
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
void* x8841 = apply_prim_expt(arg_buffer);
arg_buffer[1] = kont8840;
arg_buffer[2] = x8841;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8840))[0]);
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
void* _env8846 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8844 = prim_car(lst);
void* lst8847 = prim_cdr(lst);
void* x8845 = apply_prim_sqrt(lst8847);
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
void* x8845 = apply_prim_sqrt(arg_buffer);
arg_buffer[1] = kont8844;
arg_buffer[2] = x8845;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8844))[0]);
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
void* _env8850 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8848 = prim_car(lst);
void* lst8851 = prim_cdr(lst);
void* x8849 = apply_prim_remainder(lst8851);
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
void* x8849 = apply_prim_remainder(arg_buffer);
arg_buffer[1] = kont8848;
arg_buffer[2] = x8849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8848))[0]);
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
void* _env8854 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8852 = prim_car(lst);
void* lst8855 = prim_cdr(lst);
void* x8853 = apply_prim_quotient(lst8855);
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
void* x8853 = apply_prim_quotient(arg_buffer);
arg_buffer[1] = kont8852;
arg_buffer[2] = x8853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8852))[0]);
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
void* _env8858 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8856 = prim_car(lst);
void* lst8859 = prim_cdr(lst);
void* x8857 = apply_prim_random(lst8859);
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
void* x8857 = apply_prim_random(arg_buffer);
arg_buffer[1] = kont8856;
arg_buffer[2] = x8857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8856))[0]);
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
void* _env8862 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8860 = prim_car(lst);
void* lst8863 = prim_cdr(lst);
void* x8861 = apply_prim_symbol_u63(lst8863);
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
void* x8861 = apply_prim_symbol_u63(arg_buffer);
arg_buffer[1] = kont8860;
arg_buffer[2] = x8861;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8860))[0]);
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
void* _env8866 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8864 = prim_car(lst);
void* lst8867 = prim_cdr(lst);
void* x8865 = apply_prim_pair_u63(lst8867);
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
void* x8865 = apply_prim_pair_u63(arg_buffer);
arg_buffer[1] = kont8864;
arg_buffer[2] = x8865;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);
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
void* _env8870 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8868 = prim_car(lst);
void* lst8871 = prim_cdr(lst);
void* x8869 = apply_prim_positive_u63(lst8871);
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
void* x8869 = apply_prim_positive_u63(arg_buffer);
arg_buffer[1] = kont8868;
arg_buffer[2] = x8869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);
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
void* _env8874 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* lst = arg_buffer[2];
void* kont8872 = prim_car(lst);
void* lst8875 = prim_cdr(lst);
void* x8873 = apply_prim_negative_u63(lst8875);
arg_buffer[1] = kont8872;
arg_buffer[2] = x8873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
void* kont8872 = arg_buffer[2];
void* x8873 = apply_prim_negative_u63(arg_buffer);
arg_buffer[1] = kont8872;
arg_buffer[2] = x8873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8872))[0]);
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
void* _8491 = arg_buffer[1];
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

void* kont8399 = prim_car(x);
void* x8489 = prim_cdr(x);

//clo-app
arg_buffer[1] = kont8399;
arg_buffer[2] = x8489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8399))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8492_fptr() // lam8492 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8493 = arg_buffer[1];
//reading env and args
void* a8317 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8493);
void* kont8400 = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* a8315 = decode_clo_array[1];

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = kont8400;
arg_buffer[3] = a8315;
arg_buffer[4] = a8317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8492 = encode_clo(alloc_clo(lam8492_fptr, 0));

void even_u63_fptr() // even? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8496 = arg_buffer[1];
//reading env and args
void* kont8400 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8876 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8876, 0);
void* a8315 = encode_mpz(mpzvar8876);
mpz_t* mpzvar8877 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8877, 2);
void* a8316 = encode_mpz(mpzvar8877);

//creating new closure instance
void** clo8878 = alloc_clo(lam8492_fptr, 3);

//setting env list
clo8878[1] = a8315;
clo8878[2] = equal_u63;
clo8878[3] = kont8400;
void* f8401 = encode_clo(clo8878);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f8401;
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

void lam8497_fptr() // lam8497 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8498 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8498);
void* a8318 = decode_clo_array[3];
void* kont8402 = decode_clo_array[2];
void* equal_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = kont8402;
arg_buffer[3] = a8318;
arg_buffer[4] = a8320;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8497 = encode_clo(alloc_clo(lam8497_fptr, 0));

void odd_u63_fptr() // odd? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8501 = arg_buffer[1];
//reading env and args
void* kont8402 = arg_buffer[2];
void* x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8879 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8879, 1);
void* a8318 = encode_mpz(mpzvar8879);
mpz_t* mpzvar8880 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8880, 2);
void* a8319 = encode_mpz(mpzvar8880);

//creating new closure instance
void** clo8881 = alloc_clo(lam8497_fptr, 3);

//setting env list
clo8881[1] = equal_u63;
clo8881[2] = kont8402;
clo8881[3] = a8318;
void* f8403 = encode_clo(clo8881);



//clo-app
arg_buffer[1] = modulo;
arg_buffer[2] = f8403;
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

void lam8502_fptr() // lam8502 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8503 = arg_buffer[1];
//reading env and args
void* xy8323 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8503);
void* kont8404 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8404;
arg_buffer[2] = xy8323;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8404))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8502 = encode_clo(alloc_clo(lam8502_fptr, 0));

void lam8504_fptr() // lam8504 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8505 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8505);
void* list_u45ref = decode_clo_array[3];
void* a8324 = decode_clo_array[2];
void* kont8404 = decode_clo_array[1];

//clo-app
arg_buffer[1] = list_u45ref;
arg_buffer[2] = kont8404;
arg_buffer[3] = a8324;
arg_buffer[4] = a8326;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8504 = encode_clo(alloc_clo(lam8504_fptr, 0));

void lam8507_fptr() // lam8507 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8508 = arg_buffer[1];
//reading env and args
void* a8324 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8508);
void* kont8404 = decode_clo_array[4];
void* list_u45ref = decode_clo_array[3];
void* n = decode_clo_array[2];
void* _u45 = decode_clo_array[1];
mpz_t* mpzvar8882 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8882, 1);
void* a8325 = encode_mpz(mpzvar8882);

//creating new closure instance
void** clo8883 = alloc_clo(lam8504_fptr, 3);

//setting env list
clo8883[1] = kont8404;
clo8883[2] = a8324;
clo8883[3] = list_u45ref;
void* f8406 = encode_clo(clo8883);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8406;
arg_buffer[3] = n;
arg_buffer[4] = a8325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8507 = encode_clo(alloc_clo(lam8507_fptr, 0));

void lam8509_fptr() // lam8509 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8510 = arg_buffer[1];
//reading env and args
void* a8322 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8510);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* kont8404 = decode_clo_array[5];
void* list_u45ref = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* n = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8884 = is_true(a8322);
if(if_guard8884)
{

//creating new closure instance
void** clo8885 = alloc_clo(lam8502_fptr, 1);

//setting env list
clo8885[1] = kont8404;
void* f8405 = encode_clo(clo8885);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8405;
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
void** clo8886 = alloc_clo(lam8507_fptr, 4);

//setting env list
clo8886[1] = _u45;
clo8886[2] = n;
clo8886[3] = list_u45ref;
clo8886[4] = kont8404;
void* f8407 = encode_clo(clo8886);



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

void* lam8509 = encode_clo(alloc_clo(lam8509_fptr, 0));

void list_u45ref_fptr() // list-ref 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8512 = arg_buffer[1];
//reading env and args
void* kont8404 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8887 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8887, 0);
void* a8321 = encode_mpz(mpzvar8887);

//creating new closure instance
void** clo8888 = alloc_clo(lam8509_fptr, 7);

//setting env list
clo8888[1] = car;
clo8888[2] = n;
clo8888[3] = _u45;
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

clo8888[4] = list_u45ref;
clo8888[5] = kont8404;
clo8888[6] = lst;
clo8888[7] = cdr;
void* f8408 = encode_clo(clo8888);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8408;
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

void lam8513_fptr() // lam8513 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8514 = arg_buffer[1];
//reading env and args
void* xy8328 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8514);
void* f8413 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8413;
arg_buffer[2] = xy8328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8413))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8513 = encode_clo(alloc_clo(lam8513_fptr, 0));

void lam8515_fptr() // lam8515 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8516 = arg_buffer[1];
//reading env and args
void* xy8329 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8516);
void* f8413 = decode_clo_array[1];

//clo-app
arg_buffer[1] = f8413;
arg_buffer[2] = xy8329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8413))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8515 = encode_clo(alloc_clo(lam8515_fptr, 0));

void lam8518_fptr() // lam8518 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8519 = arg_buffer[1];
//reading env and args
void* a8334 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8519);
void* member = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8409 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member;
arg_buffer[2] = kont8409;
arg_buffer[3] = item;
arg_buffer[4] = a8334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
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
void* a8333 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8521);
void* cdr = decode_clo_array[5];
void* member = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* item = decode_clo_array[2];
void* kont8409 = decode_clo_array[1];

//if-clause
bool if_guard8889 = is_true(a8333);
if(if_guard8889)
{

//clo-app
arg_buffer[1] = kont8409;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8409))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8890 = alloc_clo(lam8518_fptr, 3);

//setting env list
clo8890[1] = kont8409;
clo8890[2] = item;
clo8890[3] = member;
void* f8410 = encode_clo(clo8890);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8410;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8332 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8523);
void* cdr = decode_clo_array[6];
void* member = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* item = decode_clo_array[3];
void* equal_u63 = decode_clo_array[2];
void* kont8409 = decode_clo_array[1];

//creating new closure instance
void** clo8891 = alloc_clo(lam8520_fptr, 5);

//setting env list
clo8891[1] = kont8409;
clo8891[2] = item;
clo8891[3] = lst;
clo8891[4] = member;
clo8891[5] = cdr;
void* f8411 = encode_clo(clo8891);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f8411;
arg_buffer[3] = item;
arg_buffer[4] = a8332;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void lam8524_fptr() // lam8524 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8525);
void* cdr = decode_clo_array[7];
void* member = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8409 = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8892 = is_true(a8330);
if(if_guard8892)
{
void* xy8331 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8409;
arg_buffer[2] = xy8331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8409))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8893 = alloc_clo(lam8522_fptr, 6);

//setting env list
clo8893[1] = kont8409;
clo8893[2] = equal_u63;
clo8893[3] = item;
clo8893[4] = lst;
clo8893[5] = member;
clo8893[6] = cdr;
void* f8412 = encode_clo(clo8893);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8524 = encode_clo(alloc_clo(lam8524_fptr, 0));

void lam8526_fptr() // lam8526 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8527 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8527);
void* cdr = decode_clo_array[8];
void* member = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* null_u63 = decode_clo_array[5];
void* item = decode_clo_array[4];
void* equal_u63 = decode_clo_array[3];
void* kont8409 = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8894 = alloc_clo(lam8524_fptr, 7);

//setting env list
clo8894[1] = car;
clo8894[2] = kont8409;
clo8894[3] = equal_u63;
clo8894[4] = item;
clo8894[5] = lst;
clo8894[6] = member;
clo8894[7] = cdr;
void* f8413 = encode_clo(clo8894);



//if-clause
bool if_guard8895 = is_true(a8327);
if(if_guard8895)
{

//creating new closure instance
void** clo8896 = alloc_clo(lam8513_fptr, 1);

//setting env list
clo8896[1] = f8413;
void* f8414 = encode_clo(clo8896);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8414;
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
void** clo8897 = alloc_clo(lam8515_fptr, 1);

//setting env list
clo8897[1] = f8413;
void* f8415 = encode_clo(clo8897);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8415;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

void member_fptr() // member 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8528 = arg_buffer[1];
//reading env and args
void* kont8409 = arg_buffer[2];
void* item = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8898 = alloc_clo(lam8526_fptr, 8);

//setting env list
clo8898[1] = car;
clo8898[2] = kont8409;
clo8898[3] = equal_u63;
clo8898[4] = item;
clo8898[5] = null_u63;
clo8898[6] = lst;
void* member = encode_clo(alloc_clo(member_fptr, 0));

clo8898[7] = member;
clo8898[8] = cdr;
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

void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8531_fptr() // lam8531 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8532 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8532);
void* kont8417 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* member_u63 = decode_clo_array[1];

//clo-app
arg_buffer[1] = member_u63;
arg_buffer[2] = kont8417;
arg_buffer[3] = x;
arg_buffer[4] = a8340;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
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
void* a8338 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8534);
void* cdr = decode_clo_array[5];
void* x = decode_clo_array[4];
void* member_u63 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* kont8417 = decode_clo_array[1];

//if-clause
bool if_guard8899 = is_true(a8338);
if(if_guard8899)
{
void* xy8339 = encode_bool(true);

//clo-app
arg_buffer[1] = kont8417;
arg_buffer[2] = xy8339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8900 = alloc_clo(lam8531_fptr, 3);

//setting env list
clo8900[1] = member_u63;
clo8900[2] = x;
clo8900[3] = kont8417;
void* f8418 = encode_clo(clo8900);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void lam8535_fptr() // lam8535 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8536);
void* cdr = decode_clo_array[6];
void* equal_u63 = decode_clo_array[5];
void* x = decode_clo_array[4];
void* member_u63 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* kont8417 = decode_clo_array[1];

//creating new closure instance
void** clo8901 = alloc_clo(lam8533_fptr, 5);

//setting env list
clo8901[1] = kont8417;
clo8901[2] = lst;
clo8901[3] = member_u63;
clo8901[4] = x;
clo8901[5] = cdr;
void* f8419 = encode_clo(clo8901);



//clo-app
arg_buffer[1] = equal_u63;
arg_buffer[2] = f8419;
arg_buffer[3] = a8337;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void lam8537_fptr() // lam8537 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8538 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8538);
void* cdr = decode_clo_array[7];
void* equal_u63 = decode_clo_array[6];
void* x = decode_clo_array[5];
void* car = decode_clo_array[4];
void* member_u63 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* kont8417 = decode_clo_array[1];

//if-clause
bool if_guard8902 = is_true(a8335);
if(if_guard8902)
{
void* xy8336 = encode_bool(false);

//clo-app
arg_buffer[1] = kont8417;
arg_buffer[2] = xy8336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8903 = alloc_clo(lam8535_fptr, 6);

//setting env list
clo8903[1] = kont8417;
clo8903[2] = lst;
clo8903[3] = member_u63;
clo8903[4] = x;
clo8903[5] = equal_u63;
clo8903[6] = cdr;
void* f8420 = encode_clo(clo8903);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8537 = encode_clo(alloc_clo(lam8537_fptr, 0));

void member_u63_fptr() // member? 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8539 = arg_buffer[1];
//reading env and args
void* kont8417 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8904 = alloc_clo(lam8537_fptr, 7);

//setting env list
clo8904[1] = kont8417;
clo8904[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8904[3] = member_u63;
clo8904[4] = car;
clo8904[5] = x;
clo8904[6] = equal_u63;
clo8904[7] = cdr;
void* f8421 = encode_clo(clo8904);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8541_fptr() // lam8541 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8542 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8542);
void* a8343 = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* kont8422 = decode_clo_array[1];

//clo-app
arg_buffer[1] = _u43;
arg_buffer[2] = kont8422;
arg_buffer[3] = a8343;
arg_buffer[4] = a8345;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8541 = encode_clo(alloc_clo(lam8541_fptr, 0));

void lam8543_fptr() // lam8543 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8344 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8544);
void* length = decode_clo_array[4];
void* a8343 = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* kont8422 = decode_clo_array[1];

//creating new closure instance
void** clo8905 = alloc_clo(lam8541_fptr, 3);

//setting env list
clo8905[1] = kont8422;
clo8905[2] = _u43;
clo8905[3] = a8343;
void* f8423 = encode_clo(clo8905);



//clo-app
arg_buffer[1] = length;
arg_buffer[2] = f8423;
arg_buffer[3] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8543 = encode_clo(alloc_clo(lam8543_fptr, 0));

void lam8546_fptr() // lam8546 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8547 = arg_buffer[1];
//reading env and args
void* a8341 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8547);
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* length = decode_clo_array[3];
void* _u43 = decode_clo_array[2];
void* kont8422 = decode_clo_array[1];

//if-clause
bool if_guard8906 = is_true(a8341);
if(if_guard8906)
{
mpz_t* mpzvar8907 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8907, 0);
void* xy8342 = encode_mpz(mpzvar8907);

//clo-app
arg_buffer[1] = kont8422;
arg_buffer[2] = xy8342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8422))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{
mpz_t* mpzvar8908 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8908, 1);
void* a8343 = encode_mpz(mpzvar8908);

//creating new closure instance
void** clo8909 = alloc_clo(lam8543_fptr, 4);

//setting env list
clo8909[1] = kont8422;
clo8909[2] = _u43;
clo8909[3] = a8343;
clo8909[4] = length;
void* f8424 = encode_clo(clo8909);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8546 = encode_clo(alloc_clo(lam8546_fptr, 0));

void length_fptr() // length 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8548 = arg_buffer[1];
//reading env and args
void* kont8422 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8910 = alloc_clo(lam8546_fptr, 5);

//setting env list
clo8910[1] = kont8422;
clo8910[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8910[3] = length;
clo8910[4] = lst;
clo8910[5] = cdr;
void* f8425 = encode_clo(clo8910);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8425;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8549_fptr() // lam8549 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8550 = arg_buffer[1];
//reading env and args
void* xy8347 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8550);
void* kont8426 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8426;
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8426))[0]);
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
void* a8351 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8552);
void* a8349 = decode_clo_array[3];
void* kont8426 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8426;
arg_buffer[3] = a8349;
arg_buffer[4] = a8351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8350 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8554);
void* a8349 = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* kont8426 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8911 = alloc_clo(lam8551_fptr, 3);

//setting env list
clo8911[1] = cons;
clo8911[2] = kont8426;
clo8911[3] = a8349;
void* f8428 = encode_clo(clo8911);



//clo-app
arg_buffer[1] = map;
arg_buffer[2] = f8428;
arg_buffer[3] = proc;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8349 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8556);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* kont8426 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8912 = alloc_clo(lam8553_fptr, 5);

//setting env list
clo8912[1] = cons;
clo8912[2] = kont8426;
clo8912[3] = proc;
clo8912[4] = map;
clo8912[5] = a8349;
void* f8429 = encode_clo(clo8912);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8429;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void lam8557_fptr() // lam8557 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8558 = arg_buffer[1];
//reading env and args
void* a8348 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8558);
void* cdr = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* map = decode_clo_array[4];
void* proc = decode_clo_array[3];
void* kont8426 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8913 = alloc_clo(lam8555_fptr, 6);

//setting env list
clo8913[1] = cons;
clo8913[2] = kont8426;
clo8913[3] = proc;
clo8913[4] = map;
clo8913[5] = lst;
clo8913[6] = cdr;
void* f8430 = encode_clo(clo8913);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f8430;
arg_buffer[3] = a8348;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void lam8559_fptr() // lam8559 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8560 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8560);
void* lst = decode_clo_array[8];
void* map = decode_clo_array[7];
void* proc = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* list = decode_clo_array[4];
void* cdr = decode_clo_array[3];
void* kont8426 = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8914 = is_true(a8346);
if(if_guard8914)
{

//creating new closure instance
void** clo8915 = alloc_clo(lam8549_fptr, 1);

//setting env list
clo8915[1] = kont8426;
void* f8427 = encode_clo(clo8915);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8427;
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
void** clo8916 = alloc_clo(lam8557_fptr, 6);

//setting env list
clo8916[1] = cons;
clo8916[2] = kont8426;
clo8916[3] = proc;
clo8916[4] = map;
clo8916[5] = lst;
clo8916[6] = cdr;
void* f8431 = encode_clo(clo8916);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void map_fptr() // map 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8561 = arg_buffer[1];
//reading env and args
void* kont8426 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8917 = alloc_clo(lam8559_fptr, 8);

//setting env list
clo8917[1] = car;
clo8917[2] = kont8426;
clo8917[3] = cdr;
clo8917[4] = list;
clo8917[5] = cons;
clo8917[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8917[7] = map;
clo8917[8] = lst;
void* f8432 = encode_clo(clo8917);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8562_fptr() // lam8562 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8563 = arg_buffer[1];
//reading env and args
void* xy8353 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8563);
void* kont8433 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8433;
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8433))[0]);
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
void* a8358 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8565);
void* kont8433 = decode_clo_array[3];
void* a8356 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8433;
arg_buffer[3] = a8356;
arg_buffer[4] = a8358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8357 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8567);
void* kont8433 = decode_clo_array[5];
void* filter = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* a8356 = decode_clo_array[2];
void* op = decode_clo_array[1];

//creating new closure instance
void** clo8918 = alloc_clo(lam8564_fptr, 3);

//setting env list
clo8918[1] = cons;
clo8918[2] = a8356;
clo8918[3] = kont8433;
void* f8435 = encode_clo(clo8918);



//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = f8435;
arg_buffer[3] = op;
arg_buffer[4] = a8357;
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
void* a8356 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8569);
void* cdr = decode_clo_array[6];
void* op = decode_clo_array[5];
void* filter = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* kont8433 = decode_clo_array[1];

//creating new closure instance
void** clo8919 = alloc_clo(lam8566_fptr, 5);

//setting env list
clo8919[1] = op;
clo8919[2] = a8356;
clo8919[3] = cons;
clo8919[4] = filter;
clo8919[5] = kont8433;
void* f8436 = encode_clo(clo8919);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8436;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
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
void* a8359 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8571);
void* kont8433 = decode_clo_array[3];
void* op = decode_clo_array[2];
void* filter = decode_clo_array[1];

//clo-app
arg_buffer[1] = filter;
arg_buffer[2] = kont8433;
arg_buffer[3] = op;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8355 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8573);
void* cdr = decode_clo_array[7];
void* op = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* kont8433 = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8920 = is_true(a8355);
if(if_guard8920)
{

//creating new closure instance
void** clo8921 = alloc_clo(lam8568_fptr, 6);

//setting env list
clo8921[1] = kont8433;
clo8921[2] = lst;
clo8921[3] = cons;
clo8921[4] = filter;
clo8921[5] = op;
clo8921[6] = cdr;
void* f8437 = encode_clo(clo8921);



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
else
{

//creating new closure instance
void** clo8922 = alloc_clo(lam8570_fptr, 3);

//setting env list
clo8922[1] = filter;
clo8922[2] = op;
clo8922[3] = kont8433;
void* f8438 = encode_clo(clo8922);



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

}

void* lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void lam8574_fptr() // lam8574 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8575 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8575);
void* cdr = decode_clo_array[7];
void* op = decode_clo_array[6];
void* cons = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* kont8433 = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//creating new closure instance
void** clo8923 = alloc_clo(lam8572_fptr, 7);

//setting env list
clo8923[1] = car;
clo8923[2] = filter;
clo8923[3] = kont8433;
clo8923[4] = lst;
clo8923[5] = cons;
clo8923[6] = op;
clo8923[7] = cdr;
void* f8439 = encode_clo(clo8923);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f8439;
arg_buffer[3] = a8354;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void lam8576_fptr() // lam8576 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8577 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8577);
void* op = decode_clo_array[8];
void* cons = decode_clo_array[7];
void* list = decode_clo_array[6];
void* cdr = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* kont8433 = decode_clo_array[3];
void* filter = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8924 = is_true(a8352);
if(if_guard8924)
{

//creating new closure instance
void** clo8925 = alloc_clo(lam8562_fptr, 1);

//setting env list
clo8925[1] = kont8433;
void* f8434 = encode_clo(clo8925);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8434;
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
void** clo8926 = alloc_clo(lam8574_fptr, 7);

//setting env list
clo8926[1] = car;
clo8926[2] = filter;
clo8926[3] = kont8433;
clo8926[4] = lst;
clo8926[5] = cons;
clo8926[6] = op;
clo8926[7] = cdr;
void* f8440 = encode_clo(clo8926);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8440;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8576 = encode_clo(alloc_clo(lam8576_fptr, 0));

void filter_fptr() // filter 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8578 = arg_buffer[1];
//reading env and args
void* kont8433 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8927 = alloc_clo(lam8576_fptr, 8);

//setting env list
clo8927[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8927[2] = filter;
clo8927[3] = kont8433;
clo8927[4] = lst;
clo8927[5] = cdr;
clo8927[6] = list;
clo8927[7] = cons;
clo8927[8] = op;
void* f8441 = encode_clo(clo8927);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8441;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8579_fptr() // lam8579 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8580 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8580);
void* drop = decode_clo_array[3];
void* a8362 = decode_clo_array[2];
void* kont8442 = decode_clo_array[1];

//clo-app
arg_buffer[1] = drop;
arg_buffer[2] = kont8442;
arg_buffer[3] = a8362;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void lam8582_fptr() // lam8582 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8583 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8583);
void* drop = decode_clo_array[4];
void* _u45 = decode_clo_array[3];
void* kont8442 = decode_clo_array[2];
void* n = decode_clo_array[1];
mpz_t* mpzvar8928 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8928, 1);
void* a8363 = encode_mpz(mpzvar8928);

//creating new closure instance
void** clo8929 = alloc_clo(lam8579_fptr, 3);

//setting env list
clo8929[1] = kont8442;
clo8929[2] = a8362;
clo8929[3] = drop;
void* f8443 = encode_clo(clo8929);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8443;
arg_buffer[3] = n;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void lam8584_fptr() // lam8584 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8585 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8585);
void* cdr = decode_clo_array[6];
void* _u45 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* drop = decode_clo_array[3];
void* kont8442 = decode_clo_array[2];
void* n = decode_clo_array[1];

//if-clause
bool if_guard8930 = is_true(a8361);
if(if_guard8930)
{

//clo-app
arg_buffer[1] = kont8442;
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8442))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8931 = alloc_clo(lam8582_fptr, 4);

//setting env list
clo8931[1] = n;
clo8931[2] = kont8442;
clo8931[3] = _u45;
clo8931[4] = drop;
void* f8444 = encode_clo(clo8931);



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

}

void* lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void drop_fptr() // drop 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8587 = arg_buffer[1];
//reading env and args
void* kont8442 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8932, 0);
void* a8360 = encode_mpz(mpzvar8932);

//creating new closure instance
void** clo8933 = alloc_clo(lam8584_fptr, 6);

//setting env list
clo8933[1] = n;
clo8933[2] = kont8442;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8933[3] = drop;
clo8933[4] = lst;
clo8933[5] = _u45;
clo8933[6] = cdr;
void* f8445 = encode_clo(clo8933);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8445;
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

void lam8588_fptr() // lam8588 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8589 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8589);
void* kont8446 = decode_clo_array[4];
void* a8367 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldl;
arg_buffer[2] = kont8446;
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

void* lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void lam8590_fptr() // lam8590 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8591 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8591);
void* cdr = decode_clo_array[5];
void* kont8446 = decode_clo_array[4];
void* lst = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo8934 = alloc_clo(lam8588_fptr, 4);

//setting env list
clo8934[1] = foldl;
clo8934[2] = fun;
clo8934[3] = a8367;
clo8934[4] = kont8446;
void* f8447 = encode_clo(clo8934);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8447;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void lam8592_fptr() // lam8592 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8593 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8593);
void* cdr = decode_clo_array[6];
void* kont8446 = decode_clo_array[5];
void* lst = decode_clo_array[4];
void* fun = decode_clo_array[3];
void* acc = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//creating new closure instance
void** clo8935 = alloc_clo(lam8590_fptr, 5);

//setting env list
clo8935[1] = foldl;
clo8935[2] = fun;
clo8935[3] = lst;
clo8935[4] = kont8446;
clo8935[5] = cdr;
void* f8448 = encode_clo(clo8935);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f8448;
arg_buffer[3] = a8366;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void lam8594_fptr() // lam8594 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8595 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8595);
void* cdr = decode_clo_array[7];
void* kont8446 = decode_clo_array[6];
void* lst = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* car = decode_clo_array[2];
void* foldl = decode_clo_array[1];

//if-clause
bool if_guard8936 = is_true(a8365);
if(if_guard8936)
{

//clo-app
arg_buffer[1] = kont8446;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8937 = alloc_clo(lam8592_fptr, 6);

//setting env list
clo8937[1] = foldl;
clo8937[2] = acc;
clo8937[3] = fun;
clo8937[4] = lst;
clo8937[5] = kont8446;
clo8937[6] = cdr;
void* f8449 = encode_clo(clo8937);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8449;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void foldl_fptr() // foldl 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8596 = arg_buffer[1];
//reading env and args
void* kont8446 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8938 = alloc_clo(lam8594_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8938[1] = foldl;
clo8938[2] = car;
clo8938[3] = acc;
clo8938[4] = fun;
clo8938[5] = lst;
clo8938[6] = kont8446;
clo8938[7] = cdr;
void* f8450 = encode_clo(clo8938);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8450;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8597_fptr() // lam8597 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8598 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8598);
void* a8370 = decode_clo_array[3];
void* kont8451 = decode_clo_array[2];
void* fun = decode_clo_array[1];

//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = kont8451;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8371 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8600);
void* foldr = decode_clo_array[5];
void* a8370 = decode_clo_array[4];
void* kont8451 = decode_clo_array[3];
void* fun = decode_clo_array[2];
void* acc = decode_clo_array[1];

//creating new closure instance
void** clo8939 = alloc_clo(lam8597_fptr, 3);

//setting env list
clo8939[1] = fun;
clo8939[2] = kont8451;
clo8939[3] = a8370;
void* f8452 = encode_clo(clo8939);



//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = f8452;
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

void* lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void lam8601_fptr() // lam8601 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8602 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8602);
void* cdr = decode_clo_array[6];
void* kont8451 = decode_clo_array[5];
void* fun = decode_clo_array[4];
void* acc = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//creating new closure instance
void** clo8940 = alloc_clo(lam8599_fptr, 5);

//setting env list
clo8940[1] = acc;
clo8940[2] = fun;
clo8940[3] = kont8451;
clo8940[4] = a8370;
clo8940[5] = foldr;
void* f8453 = encode_clo(clo8940);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8453;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8601 = encode_clo(alloc_clo(lam8601_fptr, 0));

void lam8603_fptr() // lam8603 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8604 = arg_buffer[1];
//reading env and args
void* a8369 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8604);
void* cdr = decode_clo_array[7];
void* kont8451 = decode_clo_array[6];
void* fun = decode_clo_array[5];
void* acc = decode_clo_array[4];
void* car = decode_clo_array[3];
void* foldr = decode_clo_array[2];
void* lst = decode_clo_array[1];

//if-clause
bool if_guard8941 = is_true(a8369);
if(if_guard8941)
{

//clo-app
arg_buffer[1] = kont8451;
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8942 = alloc_clo(lam8601_fptr, 6);

//setting env list
clo8942[1] = lst;
clo8942[2] = foldr;
clo8942[3] = acc;
clo8942[4] = fun;
clo8942[5] = kont8451;
clo8942[6] = cdr;
void* f8454 = encode_clo(clo8942);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void foldr_fptr() // foldr 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8605 = arg_buffer[1];
//reading env and args
void* kont8451 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8943 = alloc_clo(lam8603_fptr, 7);

//setting env list
clo8943[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8943[2] = foldr;
clo8943[3] = car;
clo8943[4] = acc;
clo8943[5] = fun;
clo8943[6] = kont8451;
clo8943[7] = cdr;
void* f8455 = encode_clo(clo8943);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8455;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8606_fptr() // lam8606 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8607 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8607);
void* reverse_u45helper = decode_clo_array[3];
void* a8374 = decode_clo_array[2];
void* kont8456 = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8456;
arg_buffer[3] = a8374;
arg_buffer[4] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8375 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8609);
void* reverse_u45helper = decode_clo_array[5];
void* a8374 = decode_clo_array[4];
void* kont8456 = decode_clo_array[3];
void* lst2 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8944 = alloc_clo(lam8606_fptr, 3);

//setting env list
clo8944[1] = kont8456;
clo8944[2] = a8374;
clo8944[3] = reverse_u45helper;
void* f8457 = encode_clo(clo8944);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f8457;
arg_buffer[3] = a8375;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void lam8610_fptr() // lam8610 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8611 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8611);
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* kont8456 = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8945 = alloc_clo(lam8608_fptr, 5);

//setting env list
clo8945[1] = cons;
clo8945[2] = lst2;
clo8945[3] = kont8456;
clo8945[4] = a8374;
clo8945[5] = reverse_u45helper;
void* f8458 = encode_clo(clo8945);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8610 = encode_clo(alloc_clo(lam8610_fptr, 0));

void lam8612_fptr() // lam8612 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8613 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8613);
void* cdr = decode_clo_array[7];
void* lst = decode_clo_array[6];
void* reverse_u45helper = decode_clo_array[5];
void* kont8456 = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* car = decode_clo_array[2];
void* cons = decode_clo_array[1];

//if-clause
bool if_guard8946 = is_true(a8373);
if(if_guard8946)
{

//clo-app
arg_buffer[1] = kont8456;
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8947 = alloc_clo(lam8610_fptr, 6);

//setting env list
clo8947[1] = cons;
clo8947[2] = car;
clo8947[3] = lst2;
clo8947[4] = kont8456;
clo8947[5] = reverse_u45helper;
clo8947[6] = lst;
void* f8459 = encode_clo(clo8947);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8459;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8614 = arg_buffer[1];
//reading env and args
void* kont8456 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8948 = alloc_clo(lam8612_fptr, 7);

//setting env list
clo8948[1] = cons;
clo8948[2] = car;
clo8948[3] = lst2;
clo8948[4] = kont8456;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8948[5] = reverse_u45helper;
clo8948[6] = lst;
clo8948[7] = cdr;
void* f8460 = encode_clo(clo8948);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8460;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8615_fptr() // lam8615 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8616 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8616);
void* kont8461 = decode_clo_array[3];
void* lst = decode_clo_array[2];
void* reverse_u45helper = decode_clo_array[1];

//clo-app
arg_buffer[1] = reverse_u45helper;
arg_buffer[2] = kont8461;
arg_buffer[3] = lst;
arg_buffer[4] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8615 = encode_clo(alloc_clo(lam8615_fptr, 0));

void reverse_fptr() // reverse 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8617 = arg_buffer[1];
//reading env and args
void* kont8461 = arg_buffer[2];
void* lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8949 = alloc_clo(lam8615_fptr, 3);

//setting env list
clo8949[1] = reverse_u45helper;
clo8949[2] = lst;
clo8949[3] = kont8461;
void* f8462 = encode_clo(clo8949);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8618_fptr() // lam8618 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8619 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8619);
void* kont8463 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* a8379 = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8463;
arg_buffer[3] = a8379;
arg_buffer[4] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8380 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8621);
void* kont8463 = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* rhs = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* a8379 = decode_clo_array[1];

//creating new closure instance
void** clo8950 = alloc_clo(lam8618_fptr, 3);

//setting env list
clo8950[1] = a8379;
clo8950[2] = cons;
clo8950[3] = kont8463;
void* f8464 = encode_clo(clo8950);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8464;
arg_buffer[3] = a8380;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8620 = encode_clo(alloc_clo(lam8620_fptr, 0));

void lam8622_fptr() // lam8622 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8623 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8623);
void* cdr = decode_clo_array[6];
void* kont8463 = decode_clo_array[5];
void* lhs = decode_clo_array[4];
void* append1 = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* cons = decode_clo_array[1];

//creating new closure instance
void** clo8951 = alloc_clo(lam8620_fptr, 5);

//setting env list
clo8951[1] = a8379;
clo8951[2] = cons;
clo8951[3] = rhs;
clo8951[4] = append1;
clo8951[5] = kont8463;
void* f8465 = encode_clo(clo8951);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8465;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8622 = encode_clo(alloc_clo(lam8622_fptr, 0));

void lam8624_fptr() // lam8624 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8625 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8625);
void* cdr = decode_clo_array[7];
void* kont8463 = decode_clo_array[6];
void* lhs = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* cons = decode_clo_array[3];
void* rhs = decode_clo_array[2];
void* car = decode_clo_array[1];

//if-clause
bool if_guard8952 = is_true(a8378);
if(if_guard8952)
{

//clo-app
arg_buffer[1] = kont8463;
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8463))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8953 = alloc_clo(lam8622_fptr, 6);

//setting env list
clo8953[1] = cons;
clo8953[2] = rhs;
clo8953[3] = append1;
clo8953[4] = lhs;
clo8953[5] = kont8463;
clo8953[6] = cdr;
void* f8466 = encode_clo(clo8953);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8466;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8624 = encode_clo(alloc_clo(lam8624_fptr, 0));

void append1_fptr() // append1 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8626 = arg_buffer[1];
//reading env and args
void* kont8463 = arg_buffer[2];
void* lhs = arg_buffer[3];
void* rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8954 = alloc_clo(lam8624_fptr, 7);

//setting env list
clo8954[1] = car;
clo8954[2] = rhs;
clo8954[3] = cons;
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

clo8954[4] = append1;
clo8954[5] = lhs;
clo8954[6] = kont8463;
clo8954[7] = cdr;
void* f8467 = encode_clo(clo8954);



//clo-app
arg_buffer[1] = null_u63;
arg_buffer[2] = f8467;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8627_fptr() // lam8627 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8628 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8628);
void* a8382 = decode_clo_array[4];
void* foldr = decode_clo_array[3];
void* kont8468 = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//clo-app
arg_buffer[1] = foldr;
arg_buffer[2] = kont8468;
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

void* lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void lam8629_fptr() // lam8629 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8630 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8630);
void* a8382 = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8468 = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8955 = alloc_clo(lam8627_fptr, 4);

//setting env list
clo8955[1] = append1;
clo8955[2] = kont8468;
clo8955[3] = foldr;
clo8955[4] = a8382;
void* f8469 = encode_clo(clo8955);



//clo-app
arg_buffer[1] = append1;
arg_buffer[2] = f8469;
arg_buffer[3] = a8383;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
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
void* a8382 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8632);
void* list = decode_clo_array[6];
void* foldr = decode_clo_array[5];
void* kont8468 = decode_clo_array[4];
void* xs = decode_clo_array[3];
void* x = decode_clo_array[2];
void* append1 = decode_clo_array[1];

//creating new closure instance
void** clo8956 = alloc_clo(lam8629_fptr, 5);

//setting env list
clo8956[1] = append1;
clo8956[2] = x;
clo8956[3] = kont8468;
clo8956[4] = foldr;
clo8956[5] = a8382;
void* f8470 = encode_clo(clo8956);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8470;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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
void* x = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8634);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8468 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8957 = alloc_clo(lam8631_fptr, 6);

//setting env list
clo8957[1] = append1;
clo8957[2] = x;
clo8957[3] = xs;
clo8957[4] = kont8468;
clo8957[5] = foldr;
clo8957[6] = list;
void* f8471 = encode_clo(clo8957);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8471;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8633 = encode_clo(alloc_clo(lam8633_fptr, 0));

void lam8635_fptr() // lam8635 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8636 = arg_buffer[1];
//reading env and args
void* vargs8314 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8636);
void* list = decode_clo_array[5];
void* foldr = decode_clo_array[4];
void* kont8468 = decode_clo_array[3];
void* append1 = decode_clo_array[2];
void* xs = decode_clo_array[1];

//creating new closure instance
void** clo8958 = alloc_clo(lam8633_fptr, 5);

//setting env list
clo8958[1] = xs;
clo8958[2] = append1;
clo8958[3] = kont8468;
clo8958[4] = foldr;
clo8958[5] = list;
void* f8472 = encode_clo(clo8958);



//clo-app
arg_buffer[1] = f8472;
arg_buffer[2] = vargs8314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8635 = encode_clo(alloc_clo(lam8635_fptr, 0));

void lam8637_fptr() // lam8637 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8638 = arg_buffer[1];
//reading env and args
void* xs = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8638);
void* foldr = decode_clo_array[6];
void* kont8468 = decode_clo_array[5];
void* append1 = decode_clo_array[4];
void* vargs8490 = decode_clo_array[3];
void* list = decode_clo_array[2];
void* cdr = decode_clo_array[1];

//creating new closure instance
void** clo8959 = alloc_clo(lam8635_fptr, 5);

//setting env list
clo8959[1] = xs;
clo8959[2] = append1;
clo8959[3] = kont8468;
clo8959[4] = foldr;
clo8959[5] = list;
void* f8473 = encode_clo(clo8959);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8473;
arg_buffer[3] = vargs8490;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8637 = encode_clo(alloc_clo(lam8637_fptr, 0));

void append_fptr() // append 
{
call_counter++;
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8639 = arg_buffer[1];
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

void* kont8468 = prim_car(vargs);
void* vargs8490 = prim_cdr(vargs);

//creating new closure instance
void** clo8960 = alloc_clo(lam8637_fptr, 6);

//setting env list
clo8960[1] = cdr;
clo8960[2] = list;
clo8960[3] = vargs8490;
clo8960[4] = append1;
clo8960[5] = kont8468;
clo8960[6] = foldr;
void* f8474 = encode_clo(clo8960);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8474;
arg_buffer[3] = vargs8490;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8640_fptr() // lam8640 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8641 = arg_buffer[1];
//reading env and args
void* xy8387 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8641);
void* kont8475 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8475;
arg_buffer[2] = xy8387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8475))[0]);
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
void* a8392 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8643);
void* a8388 = decode_clo_array[4];
void* a8390 = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* kont8475 = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8475;
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

void* lam8642 = encode_clo(alloc_clo(lam8642_fptr, 0));

void lam8644_fptr() // lam8644 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8645 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8645);
void* a8388 = decode_clo_array[6];
void* a8390 = decode_clo_array[5];
void* take_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8475 = decode_clo_array[1];

//creating new closure instance
void** clo8961 = alloc_clo(lam8642_fptr, 4);

//setting env list
clo8961[1] = kont8475;
clo8961[2] = take_u45helper;
clo8961[3] = a8390;
clo8961[4] = a8388;
void* f8477 = encode_clo(clo8961);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f8477;
arg_buffer[3] = a8391;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8644 = encode_clo(alloc_clo(lam8644_fptr, 0));

void lam8646_fptr() // lam8646 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8647 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8647);
void* lst = decode_clo_array[7];
void* a8388 = decode_clo_array[6];
void* car = decode_clo_array[5];
void* take_u45helper = decode_clo_array[4];
void* lst2 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8475 = decode_clo_array[1];

//creating new closure instance
void** clo8962 = alloc_clo(lam8644_fptr, 6);

//setting env list
clo8962[1] = kont8475;
clo8962[2] = cons;
clo8962[3] = lst2;
clo8962[4] = take_u45helper;
clo8962[5] = a8390;
clo8962[6] = a8388;
void* f8478 = encode_clo(clo8962);



//clo-app
arg_buffer[1] = car;
arg_buffer[2] = f8478;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8646 = encode_clo(alloc_clo(lam8646_fptr, 0));

void lam8649_fptr() // lam8649 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8650 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8650);
void* lst = decode_clo_array[8];
void* _u45 = decode_clo_array[7];
void* take_u45helper = decode_clo_array[6];
void* lst2 = decode_clo_array[5];
void* n = decode_clo_array[4];
void* car = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8475 = decode_clo_array[1];
mpz_t* mpzvar8963 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8963, 1);
void* a8389 = encode_mpz(mpzvar8963);

//creating new closure instance
void** clo8964 = alloc_clo(lam8646_fptr, 7);

//setting env list
clo8964[1] = kont8475;
clo8964[2] = cons;
clo8964[3] = lst2;
clo8964[4] = take_u45helper;
clo8964[5] = car;
clo8964[6] = a8388;
clo8964[7] = lst;
void* f8479 = encode_clo(clo8964);



//clo-app
arg_buffer[1] = _u45;
arg_buffer[2] = f8479;
arg_buffer[3] = n;
arg_buffer[4] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8649 = encode_clo(alloc_clo(lam8649_fptr, 0));

void lam8651_fptr() // lam8651 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8652 = arg_buffer[1];
//reading env and args
void* a8386 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8652);
void* cdr = decode_clo_array[10];
void* lst = decode_clo_array[9];
void* reverse = decode_clo_array[8];
void* _u45 = decode_clo_array[7];
void* take_u45helper = decode_clo_array[6];
void* lst2 = decode_clo_array[5];
void* n = decode_clo_array[4];
void* car = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* kont8475 = decode_clo_array[1];

//if-clause
bool if_guard8965 = is_true(a8386);
if(if_guard8965)
{

//creating new closure instance
void** clo8966 = alloc_clo(lam8640_fptr, 1);

//setting env list
clo8966[1] = kont8475;
void* f8476 = encode_clo(clo8966);



//clo-app
arg_buffer[1] = reverse;
arg_buffer[2] = f8476;
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
void** clo8967 = alloc_clo(lam8649_fptr, 8);

//setting env list
clo8967[1] = kont8475;
clo8967[2] = cons;
clo8967[3] = car;
clo8967[4] = n;
clo8967[5] = lst2;
clo8967[6] = take_u45helper;
clo8967[7] = _u45;
clo8967[8] = lst;
void* f8480 = encode_clo(clo8967);



//clo-app
arg_buffer[1] = cdr;
arg_buffer[2] = f8480;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

}

void* lam8651 = encode_clo(alloc_clo(lam8651_fptr, 0));

void take_u45helper_fptr() // take-helper 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8654 = arg_buffer[1];
//reading env and args
void* kont8475 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8968, 0);
void* a8385 = encode_mpz(mpzvar8968);

//creating new closure instance
void** clo8969 = alloc_clo(lam8651_fptr, 10);

//setting env list
clo8969[1] = kont8475;
clo8969[2] = cons;
clo8969[3] = car;
clo8969[4] = n;
clo8969[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8969[6] = take_u45helper;
clo8969[7] = _u45;
clo8969[8] = reverse;
clo8969[9] = lst;
clo8969[10] = cdr;
void* f8481 = encode_clo(clo8969);



//clo-app
arg_buffer[1] = _u61;
arg_buffer[2] = f8481;
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

void lam8655_fptr() // lam8655 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8656 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8656);
void* lst = decode_clo_array[4];
void* kont8482 = decode_clo_array[3];
void* take_u45helper = decode_clo_array[2];
void* n = decode_clo_array[1];

//clo-app
arg_buffer[1] = take_u45helper;
arg_buffer[2] = kont8482;
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

void* lam8655 = encode_clo(alloc_clo(lam8655_fptr, 0));

void take_fptr() // take 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8657 = arg_buffer[1];
//reading env and args
void* kont8482 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8970 = alloc_clo(lam8655_fptr, 4);

//setting env list
clo8970[1] = n;
clo8970[2] = take_u45helper;
clo8970[3] = kont8482;
clo8970[4] = lst;
void* f8483 = encode_clo(clo8970);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8483;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8658_fptr() // lam8658 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8659 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8659);
void* kont8484 = decode_clo_array[3];
void* a8394 = decode_clo_array[2];
void* cons = decode_clo_array[1];

//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = kont8484;
arg_buffer[3] = a8394;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8658 = encode_clo(alloc_clo(lam8658_fptr, 0));

void lam8660_fptr() // lam8660 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8661 = arg_buffer[1];
//reading env and args
void* a8396 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8661);
void* kont8484 = decode_clo_array[4];
void* a8394 = decode_clo_array[3];
void* cons = decode_clo_array[2];
void* a8395 = decode_clo_array[1];

//creating new closure instance
void** clo8971 = alloc_clo(lam8658_fptr, 3);

//setting env list
clo8971[1] = cons;
clo8971[2] = a8394;
clo8971[3] = kont8484;
void* f8485 = encode_clo(clo8971);



//clo-app
arg_buffer[1] = cons;
arg_buffer[2] = f8485;
arg_buffer[3] = a8395;
arg_buffer[4] = a8396;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* _8664 = arg_buffer[1];
//reading env and args
void* kont8484 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
mpz_t* mpzvar8972 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8972, 1);
void* a8394 = encode_mpz(mpzvar8972);
mpz_t* mpzvar8973 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_si(*mpzvar8973, 20);
void* a8395 = encode_mpz(mpzvar8973);

//creating new closure instance
void** clo8974 = alloc_clo(lam8660_fptr, 4);

//setting env list
clo8974[1] = a8395;
clo8974[2] = cons;
clo8974[3] = a8394;
clo8974[4] = kont8484;
void* f8486 = encode_clo(clo8974);



//clo-app
arg_buffer[1] = list;
arg_buffer[2] = f8486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8665_fptr() // lam8665 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8666 = arg_buffer[1];
//reading env and args
void* xy8398 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8666);
void* kont8487 = decode_clo_array[1];

//clo-app
arg_buffer[1] = kont8487;
arg_buffer[2] = xy8398;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8487))[0]);
// resetting the closure array
decode_clo_array = nullptr;
//call next proc using a function pointer
function_ptr();
}

void* lam8665 = encode_clo(alloc_clo(lam8665_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main 
{
call_counter++;
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8667 = arg_buffer[1];
//reading env and args
void* kont8487 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new closure instance
void** clo8975 = alloc_clo(lam8665_fptr, 1);

//setting env list
clo8975[1] = kont8487;
void* f8488 = encode_clo(clo8975);



//clo-app
arg_buffer[1] = call;
arg_buffer[2] = f8488;
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

