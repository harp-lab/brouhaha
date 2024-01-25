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
void* x8680 = apply_prim__u43(lst8682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8679);
arg_buffer[2] = x8680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8679))[0]);
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
void* x8684 = apply_prim__u45(lst8686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683);
arg_buffer[2] = x8684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683))[0]);
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
void* x8688 = apply_prim__u42(lst8690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8687);
arg_buffer[2] = x8688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8687))[0]);
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
void* x8692 = apply_prim__u47(lst8694);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8691);
arg_buffer[2] = x8692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8691))[0]);
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
void* x8696 = apply_prim__u61(lst8698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8695);
arg_buffer[2] = x8696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8695))[0]);
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
void* x8700 = apply_prim__u62(lst8702);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8699);
arg_buffer[2] = x8700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8699))[0]);
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
void* x8704 = apply_prim__u60(lst8706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8703);
arg_buffer[2] = x8704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8703))[0]);
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
void* x8708 = apply_prim__u60_u61(lst8710);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8707);
arg_buffer[2] = x8708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8707))[0]);
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
void* x8712 = apply_prim__u62_u61(lst8714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8711);
arg_buffer[2] = x8712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);
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
void* x8716 = apply_prim_modulo(lst8718);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8715);
arg_buffer[2] = x8716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8715))[0]);
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
void* x8720 = apply_prim_null_u63(lst8722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8719);
arg_buffer[2] = x8720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8719))[0]);
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
void* x8724 = apply_prim_equal_u63(lst8726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8723);
arg_buffer[2] = x8724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8723))[0]);
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
void* x8728 = apply_prim_eq_u63(lst8730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8727);
arg_buffer[2] = x8728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8727))[0]);
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
void* x8732 = apply_prim_cons(lst8734);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8731);
arg_buffer[2] = x8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8731))[0]);
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
void* x8736 = apply_prim_car(lst8738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8735);
arg_buffer[2] = x8736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8735))[0]);
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
void* x8740 = apply_prim_cdr(lst8742);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8739);
arg_buffer[2] = x8740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8739))[0]);
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
void* x8744 = apply_prim_float_u45_u62int(lst8746);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8743);
arg_buffer[2] = x8744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8743))[0]);
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
void* x8748 = apply_prim_int_u45_u62float(lst8750);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8747);
arg_buffer[2] = x8748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8747))[0]);
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
void* x8752 = apply_prim_hash(lst8754);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8751);
arg_buffer[2] = x8752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8751))[0]);
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
void* x8756 = apply_prim_hash_u45ref(lst8758);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8755);
arg_buffer[2] = x8756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8755))[0]);
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
void* x8760 = apply_prim_hash_u45set(lst8762);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8759);
arg_buffer[2] = x8760;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8759))[0]);
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
void* _env8765 = arg_buffer[1];
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

void* kont8763 = prim_car(lst);
void* lst8766 = prim_cdr(lst);
void* x8764 = apply_prim_hash_u45keys(lst8766);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8763);
arg_buffer[2] = x8764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8763))[0]);
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
void* _env8769 = arg_buffer[1];
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

void* kont8767 = prim_car(lst);
void* lst8770 = prim_cdr(lst);
void* x8768 = apply_prim_hash_u45has_u45key_u63(lst8770);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8767);
arg_buffer[2] = x8768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8767))[0]);
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
void* _env8773 = arg_buffer[1];
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

void* kont8771 = prim_car(lst);
void* lst8774 = prim_cdr(lst);
void* x8772 = apply_prim_hash_u45count(lst8774);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8771);
arg_buffer[2] = x8772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8771))[0]);
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
void* _env8777 = arg_buffer[1];
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

void* kont8775 = prim_car(lst);
void* lst8778 = prim_cdr(lst);
void* x8776 = apply_prim_set(lst8778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775);
arg_buffer[2] = x8776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775))[0]);
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
void* _env8781 = arg_buffer[1];
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

void* kont8779 = prim_car(lst);
void* lst8782 = prim_cdr(lst);
void* x8780 = apply_prim_set_u45_u62list(lst8782);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8779);
arg_buffer[2] = x8780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8779))[0]);
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
void* _env8785 = arg_buffer[1];
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

void* kont8783 = prim_car(lst);
void* lst8786 = prim_cdr(lst);
void* x8784 = apply_prim_list_u45_u62set(lst8786);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8783);
arg_buffer[2] = x8784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8783))[0]);
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
void* _env8789 = arg_buffer[1];
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

void* kont8787 = prim_car(lst);
void* lst8790 = prim_cdr(lst);
void* x8788 = apply_prim_set_u45add(lst8790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8787);
arg_buffer[2] = x8788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8787))[0]);
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
void* _env8793 = arg_buffer[1];
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

void* kont8791 = prim_car(lst);
void* lst8794 = prim_cdr(lst);
void* x8792 = apply_prim_set_u45member_u63(lst8794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8791);
arg_buffer[2] = x8792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8791))[0]);
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
void* _env8797 = arg_buffer[1];
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

void* kont8795 = prim_car(lst);
void* lst8798 = prim_cdr(lst);
void* x8796 = apply_prim_set_u45remove(lst8798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8795);
arg_buffer[2] = x8796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8795))[0]);
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
void* _env8801 = arg_buffer[1];
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

void* kont8799 = prim_car(lst);
void* lst8802 = prim_cdr(lst);
void* x8800 = apply_prim_set_u45count(lst8802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8799);
arg_buffer[2] = x8800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8799))[0]);
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
void* _env8805 = arg_buffer[1];
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

void* kont8803 = prim_car(lst);
void* lst8806 = prim_cdr(lst);
void* x8804 = apply_prim_string_u63(lst8806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8803);
arg_buffer[2] = x8804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8803))[0]);
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
void* _env8809 = arg_buffer[1];
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

void* kont8807 = prim_car(lst);
void* lst8810 = prim_cdr(lst);
void* x8808 = apply_prim_string_u45length(lst8810);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8807);
arg_buffer[2] = x8808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8807))[0]);
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
void* _env8813 = arg_buffer[1];
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

void* kont8811 = prim_car(lst);
void* lst8814 = prim_cdr(lst);
void* x8812 = apply_prim_string_u45ref(lst8814);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8811);
arg_buffer[2] = x8812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8811))[0]);
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
void* _env8817 = arg_buffer[1];
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

void* kont8815 = prim_car(lst);
void* lst8818 = prim_cdr(lst);
void* x8816 = apply_prim_substring(lst8818);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8815);
arg_buffer[2] = x8816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8815))[0]);
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
void* _env8821 = arg_buffer[1];
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

void* kont8819 = prim_car(lst);
void* lst8822 = prim_cdr(lst);
void* x8820 = apply_prim_string_u45append(lst8822);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8819);
arg_buffer[2] = x8820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8819))[0]);
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
void* _env8825 = arg_buffer[1];
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

void* kont8823 = prim_car(lst);
void* lst8826 = prim_cdr(lst);
void* x8824 = apply_prim_string_u45_u62list(lst8826);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8823);
arg_buffer[2] = x8824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8823))[0]);
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
void* _env8829 = arg_buffer[1];
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

void* kont8827 = prim_car(lst);
void* lst8830 = prim_cdr(lst);
void* x8828 = apply_prim_exact_u45floor(lst8830);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8827);
arg_buffer[2] = x8828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8827))[0]);
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
void* _env8833 = arg_buffer[1];
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

void* kont8831 = prim_car(lst);
void* lst8834 = prim_cdr(lst);
void* x8832 = apply_prim_exact_u45ceiling(lst8834);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8831);
arg_buffer[2] = x8832;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8831))[0]);
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
void* _env8837 = arg_buffer[1];
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

void* kont8835 = prim_car(lst);
void* lst8838 = prim_cdr(lst);
void* x8836 = apply_prim_exact_u45round(lst8838);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8835);
arg_buffer[2] = x8836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8835))[0]);
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
void* _env8841 = arg_buffer[1];
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

void* kont8839 = prim_car(lst);
void* lst8842 = prim_cdr(lst);
void* x8840 = apply_prim_abs(lst8842);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8839);
arg_buffer[2] = x8840;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8839))[0]);
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
void* _env8845 = arg_buffer[1];
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

void* kont8843 = prim_car(lst);
void* lst8846 = prim_cdr(lst);
void* x8844 = apply_prim_max(lst8846);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8843);
arg_buffer[2] = x8844;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8843))[0]);
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
void* _env8849 = arg_buffer[1];
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

void* kont8847 = prim_car(lst);
void* lst8850 = prim_cdr(lst);
void* x8848 = apply_prim_min(lst8850);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8847);
arg_buffer[2] = x8848;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8847))[0]);
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
void* _env8853 = arg_buffer[1];
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

void* kont8851 = prim_car(lst);
void* lst8854 = prim_cdr(lst);
void* x8852 = apply_prim_expt(lst8854);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8851);
arg_buffer[2] = x8852;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8851))[0]);
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
void* _env8857 = arg_buffer[1];
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

void* kont8855 = prim_car(lst);
void* lst8858 = prim_cdr(lst);
void* x8856 = apply_prim_sqrt(lst8858);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8855);
arg_buffer[2] = x8856;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8855))[0]);
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
void* _env8861 = arg_buffer[1];
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

void* kont8859 = prim_car(lst);
void* lst8862 = prim_cdr(lst);
void* x8860 = apply_prim_remainder(lst8862);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8859);
arg_buffer[2] = x8860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8859))[0]);
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
void* _env8865 = arg_buffer[1];
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

void* kont8863 = prim_car(lst);
void* lst8866 = prim_cdr(lst);
void* x8864 = apply_prim_quotient(lst8866);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8863);
arg_buffer[2] = x8864;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8863))[0]);
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
void* _env8869 = arg_buffer[1];
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

void* kont8867 = prim_car(lst);
void* lst8870 = prim_cdr(lst);
void* x8868 = apply_prim_random(lst8870);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8867);
arg_buffer[2] = x8868;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8867))[0]);
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
void* _env8873 = arg_buffer[1];
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

void* kont8871 = prim_car(lst);
void* lst8874 = prim_cdr(lst);
void* x8872 = apply_prim_symbol_u63(lst8874);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8871);
arg_buffer[2] = x8872;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8871))[0]);
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
void* _env8877 = arg_buffer[1];
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

void* kont8875 = prim_car(lst);
void* lst8878 = prim_cdr(lst);
void* x8876 = apply_prim_pair_u63(lst8878);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8875);
arg_buffer[2] = x8876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8875))[0]);
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
void* _env8881 = arg_buffer[1];
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

void* kont8879 = prim_car(lst);
void* lst8882 = prim_cdr(lst);
void* x8880 = apply_prim_positive_u63(lst8882);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8879);
arg_buffer[2] = x8880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8879))[0]);
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
void* _env8885 = arg_buffer[1];
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

void* kont8883 = prim_car(lst);
void* lst8886 = prim_cdr(lst);
void* x8884 = apply_prim_negative_u63(lst8886);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8883);
arg_buffer[2] = x8884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8883))[0]);
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
void* _8497 = arg_buffer[1];
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

void* kont8405 = prim_car(x);
void* x8495 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8405);
arg_buffer[2] = x8495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8405))[0]);
//call next proc using a function pointer
function_ptr();
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void lam8498_fptr() // lam8498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8499 = arg_buffer[1];
//reading env and args
void* a8317 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8315 = (decode_clo(env8499))[3];
//not do dummy comment
void* kont8406 = (decode_clo(env8499))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8499))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8406;
arg_buffer[3] = a8315;
arg_buffer[4] = a8317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8498 = encode_clo(alloc_clo(lam8498_fptr, 0));

void even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8502 = arg_buffer[1];
//reading env and args
void* kont8406 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8887 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8887, "0", 10);
void* a8315 = encode_mpz(mpzvar8887);
mpz_t* mpzvar8888 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8888, "2", 10);
void* a8316 = encode_mpz(mpzvar8888);

//creating new closure instance
void** clo8890 = alloc_clo(lam8498_fptr, 3);

//setting env list
clo8890[1] = equal_u63;
clo8890[2] = kont8406;
clo8890[3] = a8315;
void* f8407 = encode_clo(clo8890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8407;
arg_buffer[3] = x;
arg_buffer[4] = a8316;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8503_fptr() // lam8503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8318 = (decode_clo(env8504))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8504))[2];
//not do dummy comment
void* kont8408 = (decode_clo(env8504))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8408;
arg_buffer[3] = a8318;
arg_buffer[4] = a8320;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8507 = arg_buffer[1];
//reading env and args
void* kont8408 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8891 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8891, "1", 10);
void* a8318 = encode_mpz(mpzvar8891);
mpz_t* mpzvar8892 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8892, "2", 10);
void* a8319 = encode_mpz(mpzvar8892);

//creating new closure instance
void** clo8894 = alloc_clo(lam8503_fptr, 3);

//setting env list
clo8894[1] = kont8408;
clo8894[2] = equal_u63;
clo8894[3] = a8318;
void* f8409 = encode_clo(clo8894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8409;
arg_buffer[3] = x;
arg_buffer[4] = a8319;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void lam8508_fptr() // lam8508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* xy8323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8410 = (decode_clo(env8509))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8410);
arg_buffer[2] = xy8323;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8410))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8508 = encode_clo(alloc_clo(lam8508_fptr, 0));

void lam8510_fptr() // lam8510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8511 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8324 = (decode_clo(env8511))[3];
//not do dummy comment
void* list_u45ref = (decode_clo(env8511))[2];
//not do dummy comment
void* kont8410 = (decode_clo(env8511))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list_u45ref);
arg_buffer[2] = kont8410;
arg_buffer[3] = a8324;
arg_buffer[4] = a8326;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8510 = encode_clo(alloc_clo(lam8510_fptr, 0));

void lam8513_fptr() // lam8513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8514 = arg_buffer[1];
//reading env and args
void* a8324 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list_u45ref = (decode_clo(env8514))[4];
//not do dummy comment
void* kont8410 = (decode_clo(env8514))[3];
//not do dummy comment
void* n = (decode_clo(env8514))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8514))[1];
mpz_t* mpzvar8895 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8895, "1", 10);
void* a8325 = encode_mpz(mpzvar8895);

//creating new closure instance
void** clo8897 = alloc_clo(lam8510_fptr, 3);

//setting env list
clo8897[1] = kont8410;
clo8897[2] = list_u45ref;
clo8897[3] = a8324;
void* f8412 = encode_clo(clo8897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8412;
arg_buffer[3] = n;
arg_buffer[4] = a8325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8513 = encode_clo(alloc_clo(lam8513_fptr, 0));

void lam8515_fptr() // lam8515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8516 = arg_buffer[1];
//reading env and args
void* a8322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8516))[7];
//not do dummy comment
void* lst = (decode_clo(env8516))[6];
//not do dummy comment
void* list_u45ref = (decode_clo(env8516))[5];
//not do dummy comment
void* kont8410 = (decode_clo(env8516))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8516))[3];
//not do dummy comment
void* n = (decode_clo(env8516))[2];
//not do dummy comment
void* car = (decode_clo(env8516))[1];

//if-clause
bool if_guard8898 = is_true(a8322);
if(if_guard8898)
{

//creating new closure instance
void** clo8900 = alloc_clo(lam8508_fptr, 1);

//setting env list
clo8900[1] = kont8410;
void* f8411 = encode_clo(clo8900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8411;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8902 = alloc_clo(lam8513_fptr, 4);

//setting env list
clo8902[1] = _u45;
clo8902[2] = n;
clo8902[3] = kont8410;
clo8902[4] = list_u45ref;
void* f8413 = encode_clo(clo8902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8413;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8515 = encode_clo(alloc_clo(lam8515_fptr, 0));

void list_u45ref_fptr() // list-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8518 = arg_buffer[1];
//reading env and args
void* kont8410 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8903 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8903, "0", 10);
void* a8321 = encode_mpz(mpzvar8903);

//creating new closure instance
void** clo8905 = alloc_clo(lam8515_fptr, 7);

//setting env list
clo8905[1] = car;
clo8905[2] = n;
clo8905[3] = _u45;
clo8905[4] = kont8410;
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

clo8905[5] = list_u45ref;
clo8905[6] = lst;
clo8905[7] = cdr;
void* f8414 = encode_clo(clo8905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8414;
arg_buffer[3] = a8321;
arg_buffer[4] = n;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
}

void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8519_fptr() // lam8519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8520 = arg_buffer[1];
//reading env and args
void* xy8328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* f8419 = (decode_clo(env8520))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f8419);
arg_buffer[2] = xy8328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8519 = encode_clo(alloc_clo(lam8519_fptr, 0));

void lam8521_fptr() // lam8521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* xy8329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* f8419 = (decode_clo(env8522))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f8419);
arg_buffer[2] = xy8329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8521 = encode_clo(alloc_clo(lam8521_fptr, 0));

void lam8524_fptr() // lam8524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* a8334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* item = (decode_clo(env8525))[3];
//not do dummy comment
void* kont8415 = (decode_clo(env8525))[2];
//not do dummy comment
void* member = (decode_clo(env8525))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member);
arg_buffer[2] = kont8415;
arg_buffer[3] = item;
arg_buffer[4] = a8334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8524 = encode_clo(alloc_clo(lam8524_fptr, 0));

void lam8526_fptr() // lam8526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8527 = arg_buffer[1];
//reading env and args
void* a8333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8527))[5];
//not do dummy comment
void* lst = (decode_clo(env8527))[4];
//not do dummy comment
void* item = (decode_clo(env8527))[3];
//not do dummy comment
void* kont8415 = (decode_clo(env8527))[2];
//not do dummy comment
void* member = (decode_clo(env8527))[1];

//if-clause
bool if_guard8906 = is_true(a8333);
if(if_guard8906)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8908 = alloc_clo(lam8524_fptr, 3);

//setting env list
clo8908[1] = member;
clo8908[2] = kont8415;
clo8908[3] = item;
void* f8416 = encode_clo(clo8908);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

void lam8528_fptr() // lam8528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8529 = arg_buffer[1];
//reading env and args
void* a8332 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8529))[6];
//not do dummy comment
void* lst = (decode_clo(env8529))[5];
//not do dummy comment
void* item = (decode_clo(env8529))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8529))[3];
//not do dummy comment
void* kont8415 = (decode_clo(env8529))[2];
//not do dummy comment
void* member = (decode_clo(env8529))[1];

//creating new closure instance
void** clo8910 = alloc_clo(lam8526_fptr, 5);

//setting env list
clo8910[1] = member;
clo8910[2] = kont8415;
clo8910[3] = item;
clo8910[4] = lst;
clo8910[5] = cdr;
void* f8417 = encode_clo(clo8910);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8417;
arg_buffer[3] = item;
arg_buffer[4] = a8332;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8528 = encode_clo(alloc_clo(lam8528_fptr, 0));

void lam8530_fptr() // lam8530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8531))[7];
//not do dummy comment
void* lst = (decode_clo(env8531))[6];
//not do dummy comment
void* item = (decode_clo(env8531))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8531))[4];
//not do dummy comment
void* car = (decode_clo(env8531))[3];
//not do dummy comment
void* kont8415 = (decode_clo(env8531))[2];
//not do dummy comment
void* member = (decode_clo(env8531))[1];

//if-clause
bool if_guard8911 = is_true(a8330);
if(if_guard8911)
{
void* xy8331 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[2] = xy8331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8913 = alloc_clo(lam8528_fptr, 6);

//setting env list
clo8913[1] = member;
clo8913[2] = kont8415;
clo8913[3] = equal_u63;
clo8913[4] = item;
clo8913[5] = lst;
clo8913[6] = cdr;
void* f8418 = encode_clo(clo8913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void lam8532_fptr() // lam8532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8533 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8533))[8];
//not do dummy comment
void* lst = (decode_clo(env8533))[7];
//not do dummy comment
void* null_u63 = (decode_clo(env8533))[6];
//not do dummy comment
void* item = (decode_clo(env8533))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8533))[4];
//not do dummy comment
void* car = (decode_clo(env8533))[3];
//not do dummy comment
void* kont8415 = (decode_clo(env8533))[2];
//not do dummy comment
void* member = (decode_clo(env8533))[1];

//creating new closure instance
void** clo8915 = alloc_clo(lam8530_fptr, 7);

//setting env list
clo8915[1] = member;
clo8915[2] = kont8415;
clo8915[3] = car;
clo8915[4] = equal_u63;
clo8915[5] = item;
clo8915[6] = lst;
clo8915[7] = cdr;
void* f8419 = encode_clo(clo8915);



//if-clause
bool if_guard8916 = is_true(a8327);
if(if_guard8916)
{

//creating new closure instance
void** clo8918 = alloc_clo(lam8519_fptr, 1);

//setting env list
clo8918[1] = f8419;
void* f8420 = encode_clo(clo8918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8420;
arg_buffer[3] = item;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8920 = alloc_clo(lam8521_fptr, 1);

//setting env list
clo8920[1] = f8419;
void* f8421 = encode_clo(clo8920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void member_fptr() // member 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8534 = arg_buffer[1];
//reading env and args
void* kont8415 = arg_buffer[2];
void* item = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8922 = alloc_clo(lam8532_fptr, 8);

//setting env list
void* member = encode_clo(alloc_clo(member_fptr, 0));

clo8922[1] = member;
clo8922[2] = kont8415;
clo8922[3] = car;
clo8922[4] = equal_u63;
clo8922[5] = item;
clo8922[6] = null_u63;
clo8922[7] = lst;
clo8922[8] = cdr;
void* f8422 = encode_clo(clo8922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8422;
arg_buffer[3] = item;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* member = encode_clo(alloc_clo(member_fptr, 0));

void lam8537_fptr() // lam8537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8538 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8423 = (decode_clo(env8538))[3];
//not do dummy comment
void* x = (decode_clo(env8538))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8538))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8423;
arg_buffer[3] = x;
arg_buffer[4] = a8340;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8537 = encode_clo(alloc_clo(lam8537_fptr, 0));

void lam8539_fptr() // lam8539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8338 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8540))[5];
//not do dummy comment
void* lst = (decode_clo(env8540))[4];
//not do dummy comment
void* kont8423 = (decode_clo(env8540))[3];
//not do dummy comment
void* x = (decode_clo(env8540))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8540))[1];

//if-clause
bool if_guard8923 = is_true(a8338);
if(if_guard8923)
{
void* xy8339 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8423);
arg_buffer[2] = xy8339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8925 = alloc_clo(lam8537_fptr, 3);

//setting env list
clo8925[1] = member_u63;
clo8925[2] = x;
clo8925[3] = kont8423;
void* f8424 = encode_clo(clo8925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void lam8541_fptr() // lam8541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8542 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8542))[6];
//not do dummy comment
void* lst = (decode_clo(env8542))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8542))[4];
//not do dummy comment
void* kont8423 = (decode_clo(env8542))[3];
//not do dummy comment
void* x = (decode_clo(env8542))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8542))[1];

//creating new closure instance
void** clo8927 = alloc_clo(lam8539_fptr, 5);

//setting env list
clo8927[1] = member_u63;
clo8927[2] = x;
clo8927[3] = kont8423;
clo8927[4] = lst;
clo8927[5] = cdr;
void* f8425 = encode_clo(clo8927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8425;
arg_buffer[3] = a8337;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8541 = encode_clo(alloc_clo(lam8541_fptr, 0));

void lam8543_fptr() // lam8543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8544))[7];
//not do dummy comment
void* lst = (decode_clo(env8544))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8544))[5];
//not do dummy comment
void* kont8423 = (decode_clo(env8544))[4];
//not do dummy comment
void* x = (decode_clo(env8544))[3];
//not do dummy comment
void* car = (decode_clo(env8544))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8544))[1];

//if-clause
bool if_guard8928 = is_true(a8335);
if(if_guard8928)
{
void* xy8336 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8423);
arg_buffer[2] = xy8336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8930 = alloc_clo(lam8541_fptr, 6);

//setting env list
clo8930[1] = member_u63;
clo8930[2] = x;
clo8930[3] = kont8423;
clo8930[4] = equal_u63;
clo8930[5] = lst;
clo8930[6] = cdr;
void* f8426 = encode_clo(clo8930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8426;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8543 = encode_clo(alloc_clo(lam8543_fptr, 0));

void member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8545 = arg_buffer[1];
//reading env and args
void* kont8423 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8932 = alloc_clo(lam8543_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8932[1] = member_u63;
clo8932[2] = car;
clo8932[3] = x;
clo8932[4] = kont8423;
clo8932[5] = equal_u63;
clo8932[6] = lst;
clo8932[7] = cdr;
void* f8427 = encode_clo(clo8932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8427;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8547_fptr() // lam8547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8428 = (decode_clo(env8548))[3];
//not do dummy comment
void* a8343 = (decode_clo(env8548))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8548))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8428;
arg_buffer[3] = a8343;
arg_buffer[4] = a8345;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
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
void* a8344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8550))[4];
//not do dummy comment
void* kont8428 = (decode_clo(env8550))[3];
//not do dummy comment
void* a8343 = (decode_clo(env8550))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8550))[1];

//creating new closure instance
void** clo8934 = alloc_clo(lam8547_fptr, 3);

//setting env list
clo8934[1] = _u43;
clo8934[2] = a8343;
clo8934[3] = kont8428;
void* f8429 = encode_clo(clo8934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8429;
arg_buffer[3] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8549 = encode_clo(alloc_clo(lam8549_fptr, 0));

void lam8552_fptr() // lam8552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8553 = arg_buffer[1];
//reading env and args
void* a8341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8553))[5];
//not do dummy comment
void* lst = (decode_clo(env8553))[4];
//not do dummy comment
void* length = (decode_clo(env8553))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8553))[2];
//not do dummy comment
void* kont8428 = (decode_clo(env8553))[1];

//if-clause
bool if_guard8935 = is_true(a8341);
if(if_guard8935)
{
mpz_t* mpzvar8936 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8936, "0", 10);
void* xy8342 = encode_mpz(mpzvar8936);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8428);
arg_buffer[2] = xy8342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{
mpz_t* mpzvar8937 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8937, "1", 10);
void* a8343 = encode_mpz(mpzvar8937);

//creating new closure instance
void** clo8939 = alloc_clo(lam8549_fptr, 4);

//setting env list
clo8939[1] = _u43;
clo8939[2] = a8343;
clo8939[3] = kont8428;
clo8939[4] = length;
void* f8430 = encode_clo(clo8939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8554 = arg_buffer[1];
//reading env and args
void* kont8428 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8941 = alloc_clo(lam8552_fptr, 5);

//setting env list
clo8941[1] = kont8428;
clo8941[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8941[3] = length;
clo8941[4] = lst;
clo8941[5] = cdr;
void* f8431 = encode_clo(clo8941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8555_fptr() // lam8555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* xy8347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8432 = (decode_clo(env8556))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8432);
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8432))[0]);
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
void* a8351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8432 = (decode_clo(env8558))[3];
//not do dummy comment
void* cons = (decode_clo(env8558))[2];
//not do dummy comment
void* a8349 = (decode_clo(env8558))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8432;
arg_buffer[3] = a8349;
arg_buffer[4] = a8351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void lam8559_fptr() // lam8559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8560 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8432 = (decode_clo(env8560))[5];
//not do dummy comment
void* map = (decode_clo(env8560))[4];
//not do dummy comment
void* proc = (decode_clo(env8560))[3];
//not do dummy comment
void* cons = (decode_clo(env8560))[2];
//not do dummy comment
void* a8349 = (decode_clo(env8560))[1];

//creating new closure instance
void** clo8943 = alloc_clo(lam8557_fptr, 3);

//setting env list
clo8943[1] = a8349;
clo8943[2] = cons;
clo8943[3] = kont8432;
void* f8434 = encode_clo(clo8943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8434;
arg_buffer[3] = proc;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void lam8561_fptr() // lam8561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8562 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8562))[6];
//not do dummy comment
void* kont8432 = (decode_clo(env8562))[5];
//not do dummy comment
void* lst = (decode_clo(env8562))[4];
//not do dummy comment
void* map = (decode_clo(env8562))[3];
//not do dummy comment
void* proc = (decode_clo(env8562))[2];
//not do dummy comment
void* cons = (decode_clo(env8562))[1];

//creating new closure instance
void** clo8945 = alloc_clo(lam8559_fptr, 5);

//setting env list
clo8945[1] = a8349;
clo8945[2] = cons;
clo8945[3] = proc;
clo8945[4] = map;
clo8945[5] = kont8432;
void* f8435 = encode_clo(clo8945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8435;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8564))[6];
//not do dummy comment
void* kont8432 = (decode_clo(env8564))[5];
//not do dummy comment
void* lst = (decode_clo(env8564))[4];
//not do dummy comment
void* map = (decode_clo(env8564))[3];
//not do dummy comment
void* proc = (decode_clo(env8564))[2];
//not do dummy comment
void* cons = (decode_clo(env8564))[1];

//creating new closure instance
void** clo8947 = alloc_clo(lam8561_fptr, 6);

//setting env list
clo8947[1] = cons;
clo8947[2] = proc;
clo8947[3] = map;
clo8947[4] = lst;
clo8947[5] = kont8432;
clo8947[6] = cdr;
void* f8436 = encode_clo(clo8947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8436;
arg_buffer[3] = a8348;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
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
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8432 = (decode_clo(env8566))[8];
//not do dummy comment
void* lst = (decode_clo(env8566))[7];
//not do dummy comment
void* map = (decode_clo(env8566))[6];
//not do dummy comment
void* proc = (decode_clo(env8566))[5];
//not do dummy comment
void* car = (decode_clo(env8566))[4];
//not do dummy comment
void* cons = (decode_clo(env8566))[3];
//not do dummy comment
void* list = (decode_clo(env8566))[2];
//not do dummy comment
void* cdr = (decode_clo(env8566))[1];

//if-clause
bool if_guard8948 = is_true(a8346);
if(if_guard8948)
{

//creating new closure instance
void** clo8950 = alloc_clo(lam8555_fptr, 1);

//setting env list
clo8950[1] = kont8432;
void* f8433 = encode_clo(clo8950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8433;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8952 = alloc_clo(lam8563_fptr, 6);

//setting env list
clo8952[1] = cons;
clo8952[2] = proc;
clo8952[3] = map;
clo8952[4] = lst;
clo8952[5] = kont8432;
clo8952[6] = cdr;
void* f8437 = encode_clo(clo8952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8437;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8567 = arg_buffer[1];
//reading env and args
void* kont8432 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8954 = alloc_clo(lam8565_fptr, 8);

//setting env list
clo8954[1] = cdr;
clo8954[2] = list;
clo8954[3] = cons;
clo8954[4] = car;
clo8954[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8954[6] = map;
clo8954[7] = lst;
clo8954[8] = kont8432;
void* f8438 = encode_clo(clo8954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8568_fptr() // lam8568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* xy8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8439 = (decode_clo(env8569))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8439);
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8356 = (decode_clo(env8571))[3];
//not do dummy comment
void* kont8439 = (decode_clo(env8571))[2];
//not do dummy comment
void* cons = (decode_clo(env8571))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8439;
arg_buffer[3] = a8356;
arg_buffer[4] = a8358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void lam8572_fptr() // lam8572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8573 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8356 = (decode_clo(env8573))[5];
//not do dummy comment
void* op = (decode_clo(env8573))[4];
//not do dummy comment
void* kont8439 = (decode_clo(env8573))[3];
//not do dummy comment
void* filter = (decode_clo(env8573))[2];
//not do dummy comment
void* cons = (decode_clo(env8573))[1];

//creating new closure instance
void** clo8956 = alloc_clo(lam8570_fptr, 3);

//setting env list
clo8956[1] = cons;
clo8956[2] = kont8439;
clo8956[3] = a8356;
void* f8441 = encode_clo(clo8956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8441;
arg_buffer[3] = op;
arg_buffer[4] = a8357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8575))[6];
//not do dummy comment
void* lst = (decode_clo(env8575))[5];
//not do dummy comment
void* op = (decode_clo(env8575))[4];
//not do dummy comment
void* kont8439 = (decode_clo(env8575))[3];
//not do dummy comment
void* filter = (decode_clo(env8575))[2];
//not do dummy comment
void* cons = (decode_clo(env8575))[1];

//creating new closure instance
void** clo8958 = alloc_clo(lam8572_fptr, 5);

//setting env list
clo8958[1] = cons;
clo8958[2] = filter;
clo8958[3] = kont8439;
clo8958[4] = op;
clo8958[5] = a8356;
void* f8442 = encode_clo(clo8958);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8442;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void lam8576_fptr() // lam8576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8577 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8577))[3];
//not do dummy comment
void* kont8439 = (decode_clo(env8577))[2];
//not do dummy comment
void* filter = (decode_clo(env8577))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8439;
arg_buffer[3] = op;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8576 = encode_clo(alloc_clo(lam8576_fptr, 0));

void lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8579))[7];
//not do dummy comment
void* lst = (decode_clo(env8579))[6];
//not do dummy comment
void* op = (decode_clo(env8579))[5];
//not do dummy comment
void* kont8439 = (decode_clo(env8579))[4];
//not do dummy comment
void* cons = (decode_clo(env8579))[3];
//not do dummy comment
void* filter = (decode_clo(env8579))[2];
//not do dummy comment
void* car = (decode_clo(env8579))[1];

//if-clause
bool if_guard8959 = is_true(a8355);
if(if_guard8959)
{

//creating new closure instance
void** clo8961 = alloc_clo(lam8574_fptr, 6);

//setting env list
clo8961[1] = cons;
clo8961[2] = filter;
clo8961[3] = kont8439;
clo8961[4] = op;
clo8961[5] = lst;
clo8961[6] = cdr;
void* f8443 = encode_clo(clo8961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8443;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8963 = alloc_clo(lam8576_fptr, 3);

//setting env list
clo8963[1] = filter;
clo8963[2] = kont8439;
clo8963[3] = op;
void* f8444 = encode_clo(clo8963);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8444;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void lam8580_fptr() // lam8580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8581 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8581))[7];
//not do dummy comment
void* lst = (decode_clo(env8581))[6];
//not do dummy comment
void* op = (decode_clo(env8581))[5];
//not do dummy comment
void* kont8439 = (decode_clo(env8581))[4];
//not do dummy comment
void* cons = (decode_clo(env8581))[3];
//not do dummy comment
void* filter = (decode_clo(env8581))[2];
//not do dummy comment
void* car = (decode_clo(env8581))[1];

//creating new closure instance
void** clo8965 = alloc_clo(lam8578_fptr, 7);

//setting env list
clo8965[1] = car;
clo8965[2] = filter;
clo8965[3] = cons;
clo8965[4] = kont8439;
clo8965[5] = op;
clo8965[6] = lst;
clo8965[7] = cdr;
void* f8445 = encode_clo(clo8965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8445;
arg_buffer[3] = a8354;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8583))[8];
//not do dummy comment
void* op = (decode_clo(env8583))[7];
//not do dummy comment
void* kont8439 = (decode_clo(env8583))[6];
//not do dummy comment
void* cons = (decode_clo(env8583))[5];
//not do dummy comment
void* list = (decode_clo(env8583))[4];
//not do dummy comment
void* cdr = (decode_clo(env8583))[3];
//not do dummy comment
void* filter = (decode_clo(env8583))[2];
//not do dummy comment
void* car = (decode_clo(env8583))[1];

//if-clause
bool if_guard8966 = is_true(a8352);
if(if_guard8966)
{

//creating new closure instance
void** clo8968 = alloc_clo(lam8568_fptr, 1);

//setting env list
clo8968[1] = kont8439;
void* f8440 = encode_clo(clo8968);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8440;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8970 = alloc_clo(lam8580_fptr, 7);

//setting env list
clo8970[1] = car;
clo8970[2] = filter;
clo8970[3] = cons;
clo8970[4] = kont8439;
clo8970[5] = op;
clo8970[6] = lst;
clo8970[7] = cdr;
void* f8446 = encode_clo(clo8970);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8584 = arg_buffer[1];
//reading env and args
void* kont8439 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8972 = alloc_clo(lam8582_fptr, 8);

//setting env list
clo8972[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8972[2] = filter;
clo8972[3] = cdr;
clo8972[4] = list;
clo8972[5] = cons;
clo8972[6] = kont8439;
clo8972[7] = op;
clo8972[8] = lst;
void* f8447 = encode_clo(clo8972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8447;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8585_fptr() // lam8585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8586 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8448 = (decode_clo(env8586))[3];
//not do dummy comment
void* drop = (decode_clo(env8586))[2];
//not do dummy comment
void* a8362 = (decode_clo(env8586))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8448;
arg_buffer[3] = a8362;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void lam8588_fptr() // lam8588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8589 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8448 = (decode_clo(env8589))[4];
//not do dummy comment
void* drop = (decode_clo(env8589))[3];
//not do dummy comment
void* n = (decode_clo(env8589))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8589))[1];
mpz_t* mpzvar8973 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8973, "1", 10);
void* a8363 = encode_mpz(mpzvar8973);

//creating new closure instance
void** clo8975 = alloc_clo(lam8585_fptr, 3);

//setting env list
clo8975[1] = a8362;
clo8975[2] = drop;
clo8975[3] = kont8448;
void* f8449 = encode_clo(clo8975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8449;
arg_buffer[3] = n;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8591))[6];
//not do dummy comment
void* kont8448 = (decode_clo(env8591))[5];
//not do dummy comment
void* n = (decode_clo(env8591))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8591))[3];
//not do dummy comment
void* lst = (decode_clo(env8591))[2];
//not do dummy comment
void* drop = (decode_clo(env8591))[1];

//if-clause
bool if_guard8976 = is_true(a8361);
if(if_guard8976)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8978 = alloc_clo(lam8588_fptr, 4);

//setting env list
clo8978[1] = _u45;
clo8978[2] = n;
clo8978[3] = drop;
clo8978[4] = kont8448;
void* f8450 = encode_clo(clo8978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8450;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8593 = arg_buffer[1];
//reading env and args
void* kont8448 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8979 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8979, "0", 10);
void* a8360 = encode_mpz(mpzvar8979);

//creating new closure instance
void** clo8981 = alloc_clo(lam8590_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8981[1] = drop;
clo8981[2] = lst;
clo8981[3] = _u45;
clo8981[4] = n;
clo8981[5] = kont8448;
clo8981[6] = cdr;
void* f8451 = encode_clo(clo8981);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8451;
arg_buffer[3] = n;
arg_buffer[4] = a8360;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8594_fptr() // lam8594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8595 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8367 = (decode_clo(env8595))[4];
//not do dummy comment
void* kont8452 = (decode_clo(env8595))[3];
//not do dummy comment
void* fun = (decode_clo(env8595))[2];
//not do dummy comment
void* foldl = (decode_clo(env8595))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8452;
arg_buffer[3] = fun;
arg_buffer[4] = a8367;
arg_buffer[5] = a8368;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void lam8596_fptr() // lam8596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8597 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8597))[5];
//not do dummy comment
void* lst = (decode_clo(env8597))[4];
//not do dummy comment
void* kont8452 = (decode_clo(env8597))[3];
//not do dummy comment
void* fun = (decode_clo(env8597))[2];
//not do dummy comment
void* foldl = (decode_clo(env8597))[1];

//creating new closure instance
void** clo8983 = alloc_clo(lam8594_fptr, 4);

//setting env list
clo8983[1] = foldl;
clo8983[2] = fun;
clo8983[3] = kont8452;
clo8983[4] = a8367;
void* f8453 = encode_clo(clo8983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8453;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8599))[6];
//not do dummy comment
void* lst = (decode_clo(env8599))[5];
//not do dummy comment
void* kont8452 = (decode_clo(env8599))[4];
//not do dummy comment
void* fun = (decode_clo(env8599))[3];
//not do dummy comment
void* acc = (decode_clo(env8599))[2];
//not do dummy comment
void* foldl = (decode_clo(env8599))[1];

//creating new closure instance
void** clo8985 = alloc_clo(lam8596_fptr, 5);

//setting env list
clo8985[1] = foldl;
clo8985[2] = fun;
clo8985[3] = kont8452;
clo8985[4] = lst;
clo8985[5] = cdr;
void* f8454 = encode_clo(clo8985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8454;
arg_buffer[3] = a8366;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8601))[7];
//not do dummy comment
void* lst = (decode_clo(env8601))[6];
//not do dummy comment
void* kont8452 = (decode_clo(env8601))[5];
//not do dummy comment
void* fun = (decode_clo(env8601))[4];
//not do dummy comment
void* acc = (decode_clo(env8601))[3];
//not do dummy comment
void* car = (decode_clo(env8601))[2];
//not do dummy comment
void* foldl = (decode_clo(env8601))[1];

//if-clause
bool if_guard8986 = is_true(a8365);
if(if_guard8986)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8452);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8988 = alloc_clo(lam8598_fptr, 6);

//setting env list
clo8988[1] = foldl;
clo8988[2] = acc;
clo8988[3] = fun;
clo8988[4] = kont8452;
clo8988[5] = lst;
clo8988[6] = cdr;
void* f8455 = encode_clo(clo8988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8455;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8602 = arg_buffer[1];
//reading env and args
void* kont8452 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8990 = alloc_clo(lam8600_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8990[1] = foldl;
clo8990[2] = car;
clo8990[3] = acc;
clo8990[4] = fun;
clo8990[5] = kont8452;
clo8990[6] = lst;
clo8990[7] = cdr;
void* f8456 = encode_clo(clo8990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8456;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8603_fptr() // lam8603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8604 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8604))[3];
//not do dummy comment
void* fun = (decode_clo(env8604))[2];
//not do dummy comment
void* kont8457 = (decode_clo(env8604))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8457;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void lam8605_fptr() // lam8605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8606 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8606))[5];
//not do dummy comment
void* foldr = (decode_clo(env8606))[4];
//not do dummy comment
void* a8370 = (decode_clo(env8606))[3];
//not do dummy comment
void* acc = (decode_clo(env8606))[2];
//not do dummy comment
void* kont8457 = (decode_clo(env8606))[1];

//creating new closure instance
void** clo8992 = alloc_clo(lam8603_fptr, 3);

//setting env list
clo8992[1] = kont8457;
clo8992[2] = fun;
clo8992[3] = a8370;
void* f8458 = encode_clo(clo8992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8458;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8371;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8608))[6];
//not do dummy comment
void* fun = (decode_clo(env8608))[5];
//not do dummy comment
void* foldr = (decode_clo(env8608))[4];
//not do dummy comment
void* lst = (decode_clo(env8608))[3];
//not do dummy comment
void* acc = (decode_clo(env8608))[2];
//not do dummy comment
void* kont8457 = (decode_clo(env8608))[1];

//creating new closure instance
void** clo8994 = alloc_clo(lam8605_fptr, 5);

//setting env list
clo8994[1] = kont8457;
clo8994[2] = acc;
clo8994[3] = a8370;
clo8994[4] = foldr;
clo8994[5] = fun;
void* f8459 = encode_clo(clo8994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8459;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
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
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8610))[7];
//not do dummy comment
void* fun = (decode_clo(env8610))[6];
//not do dummy comment
void* car = (decode_clo(env8610))[5];
//not do dummy comment
void* foldr = (decode_clo(env8610))[4];
//not do dummy comment
void* lst = (decode_clo(env8610))[3];
//not do dummy comment
void* acc = (decode_clo(env8610))[2];
//not do dummy comment
void* kont8457 = (decode_clo(env8610))[1];

//if-clause
bool if_guard8995 = is_true(a8369);
if(if_guard8995)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8457);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo8997 = alloc_clo(lam8607_fptr, 6);

//setting env list
clo8997[1] = kont8457;
clo8997[2] = acc;
clo8997[3] = lst;
clo8997[4] = foldr;
clo8997[5] = fun;
clo8997[6] = cdr;
void* f8460 = encode_clo(clo8997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8460;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8611 = arg_buffer[1];
//reading env and args
void* kont8457 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8999 = alloc_clo(lam8609_fptr, 7);

//setting env list
clo8999[1] = kont8457;
clo8999[2] = acc;
clo8999[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8999[4] = foldr;
clo8999[5] = car;
clo8999[6] = fun;
clo8999[7] = cdr;
void* f8461 = encode_clo(clo8999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8461;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8612_fptr() // lam8612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8613 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8462 = (decode_clo(env8613))[3];
//not do dummy comment
void* a8374 = (decode_clo(env8613))[2];
//not do dummy comment
void* cons = (decode_clo(env8613))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8462;
arg_buffer[3] = a8374;
arg_buffer[4] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void lam8614_fptr() // lam8614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8615 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8462 = (decode_clo(env8615))[5];
//not do dummy comment
void* a8374 = (decode_clo(env8615))[4];
//not do dummy comment
void* append1 = (decode_clo(env8615))[3];
//not do dummy comment
void* rhs = (decode_clo(env8615))[2];
//not do dummy comment
void* cons = (decode_clo(env8615))[1];

//creating new closure instance
void** clo9001 = alloc_clo(lam8612_fptr, 3);

//setting env list
clo9001[1] = cons;
clo9001[2] = a8374;
clo9001[3] = kont8462;
void* f8463 = encode_clo(clo9001);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append1);
arg_buffer[2] = f8463;
arg_buffer[3] = a8375;
arg_buffer[4] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8614 = encode_clo(alloc_clo(lam8614_fptr, 0));

void lam8616_fptr() // lam8616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8617 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lhs = (decode_clo(env8617))[6];
//not do dummy comment
void* append1 = (decode_clo(env8617))[5];
//not do dummy comment
void* rhs = (decode_clo(env8617))[4];
//not do dummy comment
void* cons = (decode_clo(env8617))[3];
//not do dummy comment
void* kont8462 = (decode_clo(env8617))[2];
//not do dummy comment
void* cdr = (decode_clo(env8617))[1];

//creating new closure instance
void** clo9003 = alloc_clo(lam8614_fptr, 5);

//setting env list
clo9003[1] = cons;
clo9003[2] = rhs;
clo9003[3] = append1;
clo9003[4] = a8374;
clo9003[5] = kont8462;
void* f8464 = encode_clo(clo9003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8464;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lhs = (decode_clo(env8619))[7];
//not do dummy comment
void* append1 = (decode_clo(env8619))[6];
//not do dummy comment
void* cons = (decode_clo(env8619))[5];
//not do dummy comment
void* kont8462 = (decode_clo(env8619))[4];
//not do dummy comment
void* cdr = (decode_clo(env8619))[3];
//not do dummy comment
void* rhs = (decode_clo(env8619))[2];
//not do dummy comment
void* car = (decode_clo(env8619))[1];

//if-clause
bool if_guard9004 = is_true(a8373);
if(if_guard9004)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8462);
arg_buffer[2] = rhs;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9006 = alloc_clo(lam8616_fptr, 6);

//setting env list
clo9006[1] = cdr;
clo9006[2] = kont8462;
clo9006[3] = cons;
clo9006[4] = rhs;
clo9006[5] = append1;
clo9006[6] = lhs;
void* f8465 = encode_clo(clo9006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8465;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8618 = encode_clo(alloc_clo(lam8618_fptr, 0));

void append1_fptr() // append1 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8620 = arg_buffer[1];
//reading env and args
void* kont8462 = arg_buffer[2];
void* lhs = arg_buffer[3];
void* rhs = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9008 = alloc_clo(lam8618_fptr, 7);

//setting env list
clo9008[1] = car;
clo9008[2] = rhs;
clo9008[3] = cdr;
clo9008[4] = kont8462;
clo9008[5] = cons;
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

clo9008[6] = append1;
clo9008[7] = lhs;
void* f8466 = encode_clo(clo9008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8466;
arg_buffer[3] = lhs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8621_fptr() // lam8621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8622 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8467 = (decode_clo(env8622))[3];
//not do dummy comment
void* append1 = (decode_clo(env8622))[2];
//not do dummy comment
void* a8379 = (decode_clo(env8622))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append1);
arg_buffer[2] = kont8467;
arg_buffer[3] = a8379;
arg_buffer[4] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
//call next proc using a function pointer
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
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8624))[4];
//not do dummy comment
void* kont8467 = (decode_clo(env8624))[3];
//not do dummy comment
void* append1 = (decode_clo(env8624))[2];
//not do dummy comment
void* a8379 = (decode_clo(env8624))[1];

//creating new closure instance
void** clo9010 = alloc_clo(lam8621_fptr, 3);

//setting env list
clo9010[1] = a8379;
clo9010[2] = append1;
clo9010[3] = kont8467;
void* f8468 = encode_clo(clo9010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8468;
arg_buffer[3] = a8380;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void lam8625_fptr() // lam8625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8626 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8626))[5];
//not do dummy comment
void* lst = (decode_clo(env8626))[4];
//not do dummy comment
void* kont8467 = (decode_clo(env8626))[3];
//not do dummy comment
void* append1 = (decode_clo(env8626))[2];
//not do dummy comment
void* car = (decode_clo(env8626))[1];

//creating new closure instance
void** clo9012 = alloc_clo(lam8623_fptr, 4);

//setting env list
clo9012[1] = a8379;
clo9012[2] = append1;
clo9012[3] = kont8467;
clo9012[4] = list;
void* f8469 = encode_clo(clo9012);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8469;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8628))[6];
//not do dummy comment
void* lst = (decode_clo(env8628))[5];
//not do dummy comment
void* kont8467 = (decode_clo(env8628))[4];
//not do dummy comment
void* reverse = (decode_clo(env8628))[3];
//not do dummy comment
void* append1 = (decode_clo(env8628))[2];
//not do dummy comment
void* car = (decode_clo(env8628))[1];

//creating new closure instance
void** clo9014 = alloc_clo(lam8625_fptr, 5);

//setting env list
clo9014[1] = car;
clo9014[2] = append1;
clo9014[3] = kont8467;
clo9014[4] = lst;
clo9014[5] = list;
void* f8470 = encode_clo(clo9014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8470;
arg_buffer[3] = a8378;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8630))[7];
//not do dummy comment
void* kont8467 = (decode_clo(env8630))[6];
//not do dummy comment
void* reverse = (decode_clo(env8630))[5];
//not do dummy comment
void* append1 = (decode_clo(env8630))[4];
//not do dummy comment
void* car = (decode_clo(env8630))[3];
//not do dummy comment
void* list = (decode_clo(env8630))[2];
//not do dummy comment
void* cdr = (decode_clo(env8630))[1];

//if-clause
bool if_guard9015 = is_true(a8377);
if(if_guard9015)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8467);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8467))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9017 = alloc_clo(lam8627_fptr, 6);

//setting env list
clo9017[1] = car;
clo9017[2] = append1;
clo9017[3] = reverse;
clo9017[4] = kont8467;
clo9017[5] = lst;
clo9017[6] = list;
void* f8471 = encode_clo(clo9017);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8471;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8629 = encode_clo(alloc_clo(lam8629_fptr, 0));

void reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8631 = arg_buffer[1];
//reading env and args
void* kont8467 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9019 = alloc_clo(lam8629_fptr, 7);

//setting env list
clo9019[1] = cdr;
clo9019[2] = list;
clo9019[3] = car;
clo9019[4] = append1;
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

clo9019[5] = reverse;
clo9019[6] = kont8467;
clo9019[7] = lst;
void* f8472 = encode_clo(clo9019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8472;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8632_fptr() // lam8632 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8633 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8382 = (decode_clo(env8633))[4];
//not do dummy comment
void* foldl = (decode_clo(env8633))[3];
//not do dummy comment
void* kont8473 = (decode_clo(env8633))[2];
//not do dummy comment
void* append1 = (decode_clo(env8633))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8473;
arg_buffer[3] = append1;
arg_buffer[4] = a8382;
arg_buffer[5] = a8385;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8382 = (decode_clo(env8635))[5];
//not do dummy comment
void* reverse = (decode_clo(env8635))[4];
//not do dummy comment
void* foldl = (decode_clo(env8635))[3];
//not do dummy comment
void* kont8473 = (decode_clo(env8635))[2];
//not do dummy comment
void* append1 = (decode_clo(env8635))[1];

//creating new closure instance
void** clo9021 = alloc_clo(lam8632_fptr, 4);

//setting env list
clo9021[1] = append1;
clo9021[2] = kont8473;
clo9021[3] = foldl;
clo9021[4] = a8382;
void* f8474 = encode_clo(clo9021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8474;
arg_buffer[3] = a8384;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8382 = (decode_clo(env8637))[6];
//not do dummy comment
void* reverse = (decode_clo(env8637))[5];
//not do dummy comment
void* foldl = (decode_clo(env8637))[4];
//not do dummy comment
void* x = (decode_clo(env8637))[3];
//not do dummy comment
void* kont8473 = (decode_clo(env8637))[2];
//not do dummy comment
void* append1 = (decode_clo(env8637))[1];

//creating new closure instance
void** clo9023 = alloc_clo(lam8634_fptr, 5);

//setting env list
clo9023[1] = append1;
clo9023[2] = kont8473;
clo9023[3] = foldl;
clo9023[4] = reverse;
clo9023[5] = a8382;
void* f8475 = encode_clo(clo9023);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append1);
arg_buffer[2] = f8475;
arg_buffer[3] = a8383;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8636 = encode_clo(alloc_clo(lam8636_fptr, 0));

void lam8638_fptr() // lam8638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8639 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8639))[7];
//not do dummy comment
void* reverse = (decode_clo(env8639))[6];
//not do dummy comment
void* foldl = (decode_clo(env8639))[5];
//not do dummy comment
void* xs = (decode_clo(env8639))[4];
//not do dummy comment
void* x = (decode_clo(env8639))[3];
//not do dummy comment
void* kont8473 = (decode_clo(env8639))[2];
//not do dummy comment
void* append1 = (decode_clo(env8639))[1];

//creating new closure instance
void** clo9025 = alloc_clo(lam8636_fptr, 6);

//setting env list
clo9025[1] = append1;
clo9025[2] = kont8473;
clo9025[3] = x;
clo9025[4] = foldl;
clo9025[5] = reverse;
clo9025[6] = a8382;
void* f8476 = encode_clo(clo9025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8476;
arg_buffer[3] = xs;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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
void* x = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8641))[6];
//not do dummy comment
void* reverse = (decode_clo(env8641))[5];
//not do dummy comment
void* foldl = (decode_clo(env8641))[4];
//not do dummy comment
void* xs = (decode_clo(env8641))[3];
//not do dummy comment
void* kont8473 = (decode_clo(env8641))[2];
//not do dummy comment
void* append1 = (decode_clo(env8641))[1];

//creating new closure instance
void** clo9027 = alloc_clo(lam8638_fptr, 7);

//setting env list
clo9027[1] = append1;
clo9027[2] = kont8473;
clo9027[3] = x;
clo9027[4] = xs;
clo9027[5] = foldl;
clo9027[6] = reverse;
clo9027[7] = list;
void* f8477 = encode_clo(clo9027);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8477;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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
void* vargs8314 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8643))[6];
//not do dummy comment
void* reverse = (decode_clo(env8643))[5];
//not do dummy comment
void* foldl = (decode_clo(env8643))[4];
//not do dummy comment
void* xs = (decode_clo(env8643))[3];
//not do dummy comment
void* kont8473 = (decode_clo(env8643))[2];
//not do dummy comment
void* append1 = (decode_clo(env8643))[1];

//creating new closure instance
void** clo9029 = alloc_clo(lam8640_fptr, 6);

//setting env list
clo9029[1] = append1;
clo9029[2] = kont8473;
clo9029[3] = xs;
clo9029[4] = foldl;
clo9029[5] = reverse;
clo9029[6] = list;
void* f8478 = encode_clo(clo9029);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f8478);
arg_buffer[2] = vargs8314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
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
void* xs = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* vargs8496 = (decode_clo(env8645))[7];
//not do dummy comment
void* reverse = (decode_clo(env8645))[6];
//not do dummy comment
void* foldl = (decode_clo(env8645))[5];
//not do dummy comment
void* list = (decode_clo(env8645))[4];
//not do dummy comment
void* cdr = (decode_clo(env8645))[3];
//not do dummy comment
void* kont8473 = (decode_clo(env8645))[2];
//not do dummy comment
void* append1 = (decode_clo(env8645))[1];

//creating new closure instance
void** clo9031 = alloc_clo(lam8642_fptr, 6);

//setting env list
clo9031[1] = append1;
clo9031[2] = kont8473;
clo9031[3] = xs;
clo9031[4] = foldl;
clo9031[5] = reverse;
clo9031[6] = list;
void* f8479 = encode_clo(clo9031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8479;
arg_buffer[3] = vargs8496;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8644 = encode_clo(alloc_clo(lam8644_fptr, 0));

void append_fptr() // append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8646 = arg_buffer[1];
void* vargs;
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

void* kont8473 = prim_car(vargs);
void* vargs8496 = prim_cdr(vargs);

//creating new closure instance
void** clo9033 = alloc_clo(lam8644_fptr, 7);

//setting env list
clo9033[1] = append1;
clo9033[2] = kont8473;
clo9033[3] = cdr;
clo9033[4] = list;
clo9033[5] = foldl;
clo9033[6] = reverse;
clo9033[7] = vargs8496;
void* f8480 = encode_clo(clo9033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8480;
arg_buffer[3] = vargs8496;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8647_fptr() // lam8647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8648 = arg_buffer[1];
//reading env and args
void* xy8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8481 = (decode_clo(env8648))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8481);
arg_buffer[2] = xy8388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8481))[0]);
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
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8481 = (decode_clo(env8650))[4];
//not do dummy comment
void* a8389 = (decode_clo(env8650))[3];
//not do dummy comment
void* a8391 = (decode_clo(env8650))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8650))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8481;
arg_buffer[3] = a8389;
arg_buffer[4] = a8391;
arg_buffer[5] = a8393;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8649 = encode_clo(alloc_clo(lam8649_fptr, 0));

void lam8651_fptr() // lam8651 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8652 = arg_buffer[1];
//reading env and args
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8481 = (decode_clo(env8652))[6];
//not do dummy comment
void* a8389 = (decode_clo(env8652))[5];
//not do dummy comment
void* a8391 = (decode_clo(env8652))[4];
//not do dummy comment
void* cons = (decode_clo(env8652))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8652))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8652))[1];

//creating new closure instance
void** clo9035 = alloc_clo(lam8649_fptr, 4);

//setting env list
clo9035[1] = take_u45helper;
clo9035[2] = a8391;
clo9035[3] = a8389;
clo9035[4] = kont8481;
void* f8483 = encode_clo(clo9035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8483;
arg_buffer[3] = a8392;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8651 = encode_clo(alloc_clo(lam8651_fptr, 0));

void lam8653_fptr() // lam8653 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8654 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8481 = (decode_clo(env8654))[7];
//not do dummy comment
void* lst = (decode_clo(env8654))[6];
//not do dummy comment
void* a8389 = (decode_clo(env8654))[5];
//not do dummy comment
void* car = (decode_clo(env8654))[4];
//not do dummy comment
void* cons = (decode_clo(env8654))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8654))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8654))[1];

//creating new closure instance
void** clo9037 = alloc_clo(lam8651_fptr, 6);

//setting env list
clo9037[1] = lst2;
clo9037[2] = take_u45helper;
clo9037[3] = cons;
clo9037[4] = a8391;
clo9037[5] = a8389;
clo9037[6] = kont8481;
void* f8484 = encode_clo(clo9037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8653 = encode_clo(alloc_clo(lam8653_fptr, 0));

void lam8656_fptr() // lam8656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8657 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8481 = (decode_clo(env8657))[8];
//not do dummy comment
void* lst = (decode_clo(env8657))[7];
//not do dummy comment
void* cons = (decode_clo(env8657))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8657))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8657))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8657))[3];
//not do dummy comment
void* n = (decode_clo(env8657))[2];
//not do dummy comment
void* car = (decode_clo(env8657))[1];
mpz_t* mpzvar9038 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9038, "1", 10);
void* a8390 = encode_mpz(mpzvar9038);

//creating new closure instance
void** clo9040 = alloc_clo(lam8653_fptr, 7);

//setting env list
clo9040[1] = lst2;
clo9040[2] = take_u45helper;
clo9040[3] = cons;
clo9040[4] = car;
clo9040[5] = a8389;
clo9040[6] = lst;
clo9040[7] = kont8481;
void* f8485 = encode_clo(clo9040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8485;
arg_buffer[3] = n;
arg_buffer[4] = a8390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8656 = encode_clo(alloc_clo(lam8656_fptr, 0));

void lam8658_fptr() // lam8658 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8659 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8659))[10];
//not do dummy comment
void* kont8481 = (decode_clo(env8659))[9];
//not do dummy comment
void* lst = (decode_clo(env8659))[8];
//not do dummy comment
void* reverse = (decode_clo(env8659))[7];
//not do dummy comment
void* cons = (decode_clo(env8659))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8659))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8659))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8659))[3];
//not do dummy comment
void* n = (decode_clo(env8659))[2];
//not do dummy comment
void* car = (decode_clo(env8659))[1];

//if-clause
bool if_guard9041 = is_true(a8387);
if(if_guard9041)
{

//creating new closure instance
void** clo9043 = alloc_clo(lam8647_fptr, 1);

//setting env list
clo9043[1] = kont8481;
void* f8482 = encode_clo(clo9043);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8482;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//call next proc using a function pointer
function_ptr();
}
else
{

//creating new closure instance
void** clo9045 = alloc_clo(lam8656_fptr, 8);

//setting env list
clo9045[1] = car;
clo9045[2] = n;
clo9045[3] = lst2;
clo9045[4] = take_u45helper;
clo9045[5] = _u45;
clo9045[6] = cons;
clo9045[7] = lst;
clo9045[8] = kont8481;
void* f8486 = encode_clo(clo9045);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8486;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
}

}

void* lam8658 = encode_clo(alloc_clo(lam8658_fptr, 0));

void take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8661 = arg_buffer[1];
//reading env and args
void* kont8481 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar9046 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9046, "0", 10);
void* a8386 = encode_mpz(mpzvar9046);

//creating new closure instance
void** clo9048 = alloc_clo(lam8658_fptr, 10);

//setting env list
clo9048[1] = car;
clo9048[2] = n;
clo9048[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo9048[4] = take_u45helper;
clo9048[5] = _u45;
clo9048[6] = cons;
clo9048[7] = reverse;
clo9048[8] = lst;
clo9048[9] = kont8481;
clo9048[10] = cdr;
void* f8487 = encode_clo(clo9048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8487;
arg_buffer[3] = n;
arg_buffer[4] = a8386;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void lam8662_fptr() // lam8662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8663 = arg_buffer[1];
//reading env and args
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8663))[4];
//not do dummy comment
void* kont8488 = (decode_clo(env8663))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8663))[2];
//not do dummy comment
void* n = (decode_clo(env8663))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8488;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8394;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8662 = encode_clo(alloc_clo(lam8662_fptr, 0));

void take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8664 = arg_buffer[1];
//reading env and args
void* kont8488 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9050 = alloc_clo(lam8662_fptr, 4);

//setting env list
clo9050[1] = n;
clo9050[2] = take_u45helper;
clo9050[3] = kont8488;
clo9050[4] = lst;
void* f8489 = encode_clo(clo9050);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8665_fptr() // lam8665 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8666 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8490 = (decode_clo(env8666))[2];
//not do dummy comment
void* max = (decode_clo(env8666))[1];
void* cps_u45lst8491 = prim_cons(kont8490, a8403);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(max);
arg_buffer[2] = cps_u45lst8491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(max))[0]);
// call next proc using a function pointer
function_ptr();
}

void* lam8665 = encode_clo(alloc_clo(lam8665_fptr, 0));

void call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8675 = arg_buffer[1];
//reading env and args
void* kont8490 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar9051 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9051, "1", 10);
void* a8395 = encode_mpz(mpzvar9051);
mpz_t* mpzvar9052 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9052, "2", 10);
void* a8396 = encode_mpz(mpzvar9052);
mpz_t* mpzvar9053 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9053, "3", 10);
void* a8397 = encode_mpz(mpzvar9053);
mpz_t* mpzvar9054 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9054, "-9", 10);
void* a8398 = encode_mpz(mpzvar9054);
mpf_t* mpfvar9055 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar9055, "4.2", 10);
void* a8399 = encode_mpf(mpfvar9055);
mpz_t* mpzvar9056 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9056, "10", 10);
void* a8400 = encode_mpz(mpzvar9056);
mpf_t* mpfvar9057 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar9057, "8.5", 10);
void* a8401 = encode_mpf(mpfvar9057);
mpz_t* mpzvar9058 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9058, "7", 10);
void* a8402 = encode_mpz(mpzvar9058);

//creating new closure instance
void** clo9060 = alloc_clo(lam8665_fptr, 2);

//setting env list
clo9060[1] = max;
clo9060[2] = kont8490;
void* f8492 = encode_clo(clo9060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8492;
arg_buffer[3] = a8395;
arg_buffer[4] = a8396;
arg_buffer[5] = a8397;
arg_buffer[6] = a8398;
arg_buffer[7] = a8399;
arg_buffer[8] = a8400;
arg_buffer[9] = a8401;
arg_buffer[10] = a8402;
arg_buffer[0] = reinterpret_cast<void*>(10);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void lam8676_fptr() // lam8676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8677 = arg_buffer[1];
//reading env and args
void* xy8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8493 = (decode_clo(env8677))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8493);
arg_buffer[2] = xy8404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
//call next proc using a function pointer
function_ptr();
}

void* lam8676 = encode_clo(alloc_clo(lam8676_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8678 = arg_buffer[1];
//reading env and args
void* kont8493 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo9062 = alloc_clo(lam8676_fptr, 1);

//setting env list
clo9062[1] = kont8493;
void* f8494 = encode_clo(clo9062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8494;
arg_buffer[0] = reinterpret_cast<void*>(2);
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
//making a call to the brouhaha main function to kick off our c++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
arg_buffer[0]=0;
arg_buffer[2]=fhalt_clo;
function_ptr();
}

