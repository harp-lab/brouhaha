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
void* _env8695 = arg_buffer[1];
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

void* kont8693 = prim_car(lst);
void* lst8696 = prim_cdr(lst);
void* x8694 = apply_prim__u43(lst8696);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8693);
arg_buffer[2] = x8694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8693))[0]);
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
void* _env8699 = arg_buffer[1];
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

void* kont8697 = prim_car(lst);
void* lst8700 = prim_cdr(lst);
void* x8698 = apply_prim__u45(lst8700);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8697);
arg_buffer[2] = x8698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8697))[0]);
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
void* _env8703 = arg_buffer[1];
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

void* kont8701 = prim_car(lst);
void* lst8704 = prim_cdr(lst);
void* x8702 = apply_prim__u42(lst8704);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8701);
arg_buffer[2] = x8702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8701))[0]);
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
void* _env8707 = arg_buffer[1];
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

void* kont8705 = prim_car(lst);
void* lst8708 = prim_cdr(lst);
void* x8706 = apply_prim__u47(lst8708);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8705);
arg_buffer[2] = x8706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8705))[0]);
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
void* _env8711 = arg_buffer[1];
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

void* kont8709 = prim_car(lst);
void* lst8712 = prim_cdr(lst);
void* x8710 = apply_prim__u61(lst8712);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8709);
arg_buffer[2] = x8710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8709))[0]);
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
void* _env8715 = arg_buffer[1];
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

void* kont8713 = prim_car(lst);
void* lst8716 = prim_cdr(lst);
void* x8714 = apply_prim__u62(lst8716);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8713);
arg_buffer[2] = x8714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8713))[0]);
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
void* _env8719 = arg_buffer[1];
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

void* kont8717 = prim_car(lst);
void* lst8720 = prim_cdr(lst);
void* x8718 = apply_prim__u60(lst8720);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8717);
arg_buffer[2] = x8718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8717))[0]);
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
void* _env8723 = arg_buffer[1];
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

void* kont8721 = prim_car(lst);
void* lst8724 = prim_cdr(lst);
void* x8722 = apply_prim__u60_u61(lst8724);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8721);
arg_buffer[2] = x8722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8721))[0]);
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
void* _env8727 = arg_buffer[1];
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

void* kont8725 = prim_car(lst);
void* lst8728 = prim_cdr(lst);
void* x8726 = apply_prim__u62_u61(lst8728);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8725);
arg_buffer[2] = x8726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8725))[0]);
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
void* _env8731 = arg_buffer[1];
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

void* kont8729 = prim_car(lst);
void* lst8732 = prim_cdr(lst);
void* x8730 = apply_prim_modulo(lst8732);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8729);
arg_buffer[2] = x8730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8729))[0]);
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
void* _env8735 = arg_buffer[1];
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

void* kont8733 = prim_car(lst);
void* lst8736 = prim_cdr(lst);
void* x8734 = apply_prim_null_u63(lst8736);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8733);
arg_buffer[2] = x8734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8733))[0]);
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
void* _env8739 = arg_buffer[1];
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

void* kont8737 = prim_car(lst);
void* lst8740 = prim_cdr(lst);
void* x8738 = apply_prim_equal_u63(lst8740);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8737);
arg_buffer[2] = x8738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8737))[0]);
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
void* _env8743 = arg_buffer[1];
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

void* kont8741 = prim_car(lst);
void* lst8744 = prim_cdr(lst);
void* x8742 = apply_prim_eq_u63(lst8744);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8741);
arg_buffer[2] = x8742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8741))[0]);
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
void* _env8747 = arg_buffer[1];
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

void* kont8745 = prim_car(lst);
void* lst8748 = prim_cdr(lst);
void* x8746 = apply_prim_exact_u45floor(lst8748);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8745);
arg_buffer[2] = x8746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8745))[0]);
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
void* _env8751 = arg_buffer[1];
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

void* kont8749 = prim_car(lst);
void* lst8752 = prim_cdr(lst);
void* x8750 = apply_prim_exact_u45ceiling(lst8752);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8749);
arg_buffer[2] = x8750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8749))[0]);
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
void* _env8755 = arg_buffer[1];
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

void* kont8753 = prim_car(lst);
void* lst8756 = prim_cdr(lst);
void* x8754 = apply_prim_exact_u45round(lst8756);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8753);
arg_buffer[2] = x8754;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8753))[0]);
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
void* _env8759 = arg_buffer[1];
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

void* kont8757 = prim_car(lst);
void* lst8760 = prim_cdr(lst);
void* x8758 = apply_prim_cons(lst8760);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8757);
arg_buffer[2] = x8758;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8757))[0]);
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
void* _env8763 = arg_buffer[1];
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

void* kont8761 = prim_car(lst);
void* lst8764 = prim_cdr(lst);
void* x8762 = apply_prim_car(lst8764);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8761);
arg_buffer[2] = x8762;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8761))[0]);
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
void* _env8767 = arg_buffer[1];
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

void* kont8765 = prim_car(lst);
void* lst8768 = prim_cdr(lst);
void* x8766 = apply_prim_cdr(lst8768);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8765);
arg_buffer[2] = x8766;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8765))[0]);
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
void* _env8771 = arg_buffer[1];
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

void* kont8769 = prim_car(lst);
void* lst8772 = prim_cdr(lst);
void* x8770 = apply_prim_float_u45_u62int(lst8772);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8769);
arg_buffer[2] = x8770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8769))[0]);
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
void* _env8775 = arg_buffer[1];
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

void* kont8773 = prim_car(lst);
void* lst8776 = prim_cdr(lst);
void* x8774 = apply_prim_int_u45_u62float(lst8776);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8773);
arg_buffer[2] = x8774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8773))[0]);
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
void* _env8779 = arg_buffer[1];
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

void* kont8777 = prim_car(lst);
void* lst8780 = prim_cdr(lst);
void* x8778 = apply_prim_hash_u45ref(lst8780);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8777);
arg_buffer[2] = x8778;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8777))[0]);
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
void* _env8783 = arg_buffer[1];
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

void* kont8781 = prim_car(lst);
void* lst8784 = prim_cdr(lst);
void* x8782 = apply_prim_hash_u45set(lst8784);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8781);
arg_buffer[2] = x8782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8781))[0]);
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
void* _env8787 = arg_buffer[1];
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

void* kont8785 = prim_car(lst);
void* lst8788 = prim_cdr(lst);
void* x8786 = apply_prim_hash_u45keys(lst8788);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8785);
arg_buffer[2] = x8786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8785))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void* lam8525_fptr() // lam8525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8526 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8442 = (decode_clo(env8526))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8526))[2];
//not do dummy comment
void* a8344 = (decode_clo(env8526))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8442);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8442))[0]);
function_ptr();
return nullptr;
}

void* lam8525 = encode_clo(alloc_clo(lam8525_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8529 = arg_buffer[1];
//reading env and args
void* kont8442 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8789 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8789, "0", 10);
void* a8344 = encode_mpz(mpzvar8789);
mpz_t* mpzvar8790 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8790, "2", 10);
void* a8345 = encode_mpz(mpzvar8790);

//creating new closure instance
void** clo8792 = alloc_clo(lam8525_fptr, 3);

//setting env list
clo8792[1] = a8344;
clo8792[2] = equal_u63;
clo8792[3] = kont8442;
void* f8443 = encode_clo(clo8792);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8530_fptr() // lam8530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8347 = (decode_clo(env8531))[3];
//not do dummy comment
void* kont8444 = (decode_clo(env8531))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8531))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8444);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
function_ptr();
return nullptr;
}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8534 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8793 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8793, "1", 10);
void* a8347 = encode_mpz(mpzvar8793);
mpz_t* mpzvar8794 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8794, "2", 10);
void* a8348 = encode_mpz(mpzvar8794);

//creating new closure instance
void** clo8796 = alloc_clo(lam8530_fptr, 3);

//setting env list
clo8796[1] = equal_u63;
clo8796[2] = kont8444;
clo8796[3] = a8347;
void* f8445 = encode_clo(clo8796);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
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
void* _8535 = arg_buffer[1];
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

void* kont8446 = prim_car(x);
void* x8524 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8446);
arg_buffer[2] = x8524;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8538_fptr() // lam8538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8539 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8447 = (decode_clo(env8539))[3];
//not do dummy comment
void* x = (decode_clo(env8539))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8539))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8447;
arg_buffer[3] = x;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
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
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8541))[5];
//not do dummy comment
void* lst = (decode_clo(env8541))[4];
//not do dummy comment
void* kont8447 = (decode_clo(env8541))[3];
//not do dummy comment
void* x = (decode_clo(env8541))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8541))[1];

//if-clause
bool if_guard8797 = is_true(a8353);
if(if_guard8797)
{
void* xy8354 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8799 = alloc_clo(lam8538_fptr, 3);

//setting env list
clo8799[1] = member_u63;
clo8799[2] = x;
clo8799[3] = kont8447;
void* f8448 = encode_clo(clo8799);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8448);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
function_ptr();
return nullptr;
}

}

void* lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void* lam8542_fptr() // lam8542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8543 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8543))[6];
//not do dummy comment
void* lst = (decode_clo(env8543))[5];
//not do dummy comment
void* kont8447 = (decode_clo(env8543))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8543))[3];
//not do dummy comment
void* x = (decode_clo(env8543))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8543))[1];

//creating new closure instance
void** clo8801 = alloc_clo(lam8540_fptr, 5);

//setting env list
clo8801[1] = member_u63;
clo8801[2] = x;
clo8801[3] = kont8447;
clo8801[4] = lst;
clo8801[5] = cdr;
void* f8449 = encode_clo(clo8801);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
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
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8545))[7];
//not do dummy comment
void* lst = (decode_clo(env8545))[6];
//not do dummy comment
void* kont8447 = (decode_clo(env8545))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8545))[4];
//not do dummy comment
void* x = (decode_clo(env8545))[3];
//not do dummy comment
void* car = (decode_clo(env8545))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8545))[1];

//if-clause
bool if_guard8802 = is_true(a8350);
if(if_guard8802)
{
void* xy8351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8804 = alloc_clo(lam8542_fptr, 6);

//setting env list
clo8804[1] = member_u63;
clo8804[2] = x;
clo8804[3] = equal_u63;
clo8804[4] = kont8447;
clo8804[5] = lst;
clo8804[6] = cdr;
void* f8450 = encode_clo(clo8804);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8546 = arg_buffer[1];
//reading env and args
void* kont8447 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8806 = alloc_clo(lam8544_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8806[1] = member_u63;
clo8806[2] = car;
clo8806[3] = x;
clo8806[4] = equal_u63;
clo8806[5] = kont8447;
clo8806[6] = lst;
clo8806[7] = cdr;
void* f8451 = encode_clo(clo8806);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8547_fptr() // lam8547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8548))[4];
//not do dummy comment
void* kont8452 = (decode_clo(env8548))[3];
//not do dummy comment
void* a8358 = (decode_clo(env8548))[2];
//not do dummy comment
void* foldl = (decode_clo(env8548))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8452;
arg_buffer[3] = fun;
arg_buffer[4] = a8358;
arg_buffer[5] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void* lam8549_fptr() // lam8549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8550 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8550))[5];
//not do dummy comment
void* lst = (decode_clo(env8550))[4];
//not do dummy comment
void* fun = (decode_clo(env8550))[3];
//not do dummy comment
void* kont8452 = (decode_clo(env8550))[2];
//not do dummy comment
void* foldl = (decode_clo(env8550))[1];

//creating new closure instance
void** clo8808 = alloc_clo(lam8547_fptr, 4);

//setting env list
clo8808[1] = foldl;
clo8808[2] = a8358;
clo8808[3] = kont8452;
clo8808[4] = fun;
void* f8453 = encode_clo(clo8808);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
function_ptr();
return nullptr;
}

void* lam8549 = encode_clo(alloc_clo(lam8549_fptr, 0));

void* lam8551_fptr() // lam8551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8552 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8552))[6];
//not do dummy comment
void* lst = (decode_clo(env8552))[5];
//not do dummy comment
void* fun = (decode_clo(env8552))[4];
//not do dummy comment
void* foldl = (decode_clo(env8552))[3];
//not do dummy comment
void* acc = (decode_clo(env8552))[2];
//not do dummy comment
void* kont8452 = (decode_clo(env8552))[1];

//creating new closure instance
void** clo8810 = alloc_clo(lam8549_fptr, 5);

//setting env list
clo8810[1] = foldl;
clo8810[2] = kont8452;
clo8810[3] = fun;
clo8810[4] = lst;
clo8810[5] = cdr;
void* f8454 = encode_clo(clo8810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8454;
arg_buffer[3] = a8357;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8551 = encode_clo(alloc_clo(lam8551_fptr, 0));

void* lam8553_fptr() // lam8553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8554 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8554))[7];
//not do dummy comment
void* lst = (decode_clo(env8554))[6];
//not do dummy comment
void* fun = (decode_clo(env8554))[5];
//not do dummy comment
void* car = (decode_clo(env8554))[4];
//not do dummy comment
void* foldl = (decode_clo(env8554))[3];
//not do dummy comment
void* acc = (decode_clo(env8554))[2];
//not do dummy comment
void* kont8452 = (decode_clo(env8554))[1];

//if-clause
bool if_guard8811 = is_true(a8356);
if(if_guard8811)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8452);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8813 = alloc_clo(lam8551_fptr, 6);

//setting env list
clo8813[1] = kont8452;
clo8813[2] = acc;
clo8813[3] = foldl;
clo8813[4] = fun;
clo8813[5] = lst;
clo8813[6] = cdr;
void* f8455 = encode_clo(clo8813);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8455);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
function_ptr();
return nullptr;
}

}

void* lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8555 = arg_buffer[1];
//reading env and args
void* kont8452 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8815 = alloc_clo(lam8553_fptr, 7);

//setting env list
clo8815[1] = kont8452;
clo8815[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8815[3] = foldl;
clo8815[4] = car;
clo8815[5] = fun;
clo8815[6] = lst;
clo8815[7] = cdr;
void* f8456 = encode_clo(clo8815);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8456);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8556_fptr() // lam8556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8557 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8557))[3];
//not do dummy comment
void* a8361 = (decode_clo(env8557))[2];
//not do dummy comment
void* kont8457 = (decode_clo(env8557))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8457;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8556 = encode_clo(alloc_clo(lam8556_fptr, 0));

void* lam8558_fptr() // lam8558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8559 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8559))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8559))[4];
//not do dummy comment
void* cons = (decode_clo(env8559))[3];
//not do dummy comment
void* a8361 = (decode_clo(env8559))[2];
//not do dummy comment
void* kont8457 = (decode_clo(env8559))[1];

//creating new closure instance
void** clo8817 = alloc_clo(lam8556_fptr, 3);

//setting env list
clo8817[1] = kont8457;
clo8817[2] = a8361;
clo8817[3] = reverse_u45helper;
void* f8458 = encode_clo(clo8817);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
return nullptr;
}

void* lam8558 = encode_clo(alloc_clo(lam8558_fptr, 0));

void* lam8560_fptr() // lam8560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8561 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8561))[6];
//not do dummy comment
void* lst = (decode_clo(env8561))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8561))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8561))[3];
//not do dummy comment
void* car = (decode_clo(env8561))[2];
//not do dummy comment
void* cons = (decode_clo(env8561))[1];

//creating new closure instance
void** clo8819 = alloc_clo(lam8558_fptr, 5);

//setting env list
clo8819[1] = kont8457;
clo8819[2] = a8361;
clo8819[3] = cons;
clo8819[4] = lst2;
clo8819[5] = reverse_u45helper;
void* f8459 = encode_clo(clo8819);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
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
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8563))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8563))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8563))[5];
//not do dummy comment
void* car = (decode_clo(env8563))[4];
//not do dummy comment
void* cons = (decode_clo(env8563))[3];
//not do dummy comment
void* kont8457 = (decode_clo(env8563))[2];
//not do dummy comment
void* cdr = (decode_clo(env8563))[1];

//if-clause
bool if_guard8820 = is_true(a8360);
if(if_guard8820)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8457);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8822 = alloc_clo(lam8560_fptr, 6);

//setting env list
clo8822[1] = cons;
clo8822[2] = car;
clo8822[3] = lst2;
clo8822[4] = reverse_u45helper;
clo8822[5] = lst;
clo8822[6] = kont8457;
void* f8460 = encode_clo(clo8822);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8460);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
function_ptr();
return nullptr;
}

}

void* lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8564 = arg_buffer[1];
//reading env and args
void* kont8457 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8824 = alloc_clo(lam8562_fptr, 7);

//setting env list
clo8824[1] = cdr;
clo8824[2] = kont8457;
clo8824[3] = cons;
clo8824[4] = car;
clo8824[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8824[6] = reverse_u45helper;
clo8824[7] = lst;
void* f8461 = encode_clo(clo8824);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8565_fptr() // lam8565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8566))[3];
//not do dummy comment
void* kont8462 = (decode_clo(env8566))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8566))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8462;
arg_buffer[3] = lst;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8567 = arg_buffer[1];
//reading env and args
void* kont8462 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8826 = alloc_clo(lam8565_fptr, 3);

//setting env list
clo8826[1] = reverse_u45helper;
clo8826[2] = kont8462;
clo8826[3] = lst;
void* f8463 = encode_clo(clo8826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8463;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8568_fptr() // lam8568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8464 = (decode_clo(env8569))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8464);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8571))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8571))[3];
//not do dummy comment
void* a8368 = (decode_clo(env8571))[2];
//not do dummy comment
void* kont8464 = (decode_clo(env8571))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8464;
arg_buffer[3] = a8368;
arg_buffer[4] = a8370;
arg_buffer[5] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8573))[6];
//not do dummy comment
void* cons = (decode_clo(env8573))[5];
//not do dummy comment
void* a8368 = (decode_clo(env8573))[4];
//not do dummy comment
void* kont8464 = (decode_clo(env8573))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8573))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8573))[1];

//creating new closure instance
void** clo8828 = alloc_clo(lam8570_fptr, 4);

//setting env list
clo8828[1] = kont8464;
clo8828[2] = a8368;
clo8828[3] = take_u45helper;
clo8828[4] = a8370;
void* f8466 = encode_clo(clo8828);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8575))[7];
//not do dummy comment
void* car = (decode_clo(env8575))[6];
//not do dummy comment
void* cons = (decode_clo(env8575))[5];
//not do dummy comment
void* a8368 = (decode_clo(env8575))[4];
//not do dummy comment
void* kont8464 = (decode_clo(env8575))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8575))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8575))[1];

//creating new closure instance
void** clo8830 = alloc_clo(lam8572_fptr, 6);

//setting env list
clo8830[1] = lst2;
clo8830[2] = take_u45helper;
clo8830[3] = kont8464;
clo8830[4] = a8368;
clo8830[5] = cons;
clo8830[6] = a8370;
void* f8467 = encode_clo(clo8830);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void* lam8577_fptr() // lam8577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8578 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8578))[8];
//not do dummy comment
void* kont8464 = (decode_clo(env8578))[7];
//not do dummy comment
void* cons = (decode_clo(env8578))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8578))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8578))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8578))[3];
//not do dummy comment
void* n = (decode_clo(env8578))[2];
//not do dummy comment
void* car = (decode_clo(env8578))[1];
mpz_t* mpzvar8831 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8831, "1", 10);
void* a8369 = encode_mpz(mpzvar8831);

//creating new closure instance
void** clo8833 = alloc_clo(lam8574_fptr, 7);

//setting env list
clo8833[1] = lst2;
clo8833[2] = take_u45helper;
clo8833[3] = kont8464;
clo8833[4] = a8368;
clo8833[5] = cons;
clo8833[6] = car;
clo8833[7] = lst;
void* f8468 = encode_clo(clo8833);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8580))[10];
//not do dummy comment
void* lst = (decode_clo(env8580))[9];
//not do dummy comment
void* cons = (decode_clo(env8580))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8580))[7];
//not do dummy comment
void* kont8464 = (decode_clo(env8580))[6];
//not do dummy comment
void* reverse = (decode_clo(env8580))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8580))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8580))[3];
//not do dummy comment
void* n = (decode_clo(env8580))[2];
//not do dummy comment
void* car = (decode_clo(env8580))[1];

//if-clause
bool if_guard8834 = is_true(a8366);
if(if_guard8834)
{

//creating new closure instance
void** clo8836 = alloc_clo(lam8568_fptr, 1);

//setting env list
clo8836[1] = kont8464;
void* f8465 = encode_clo(clo8836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8465;
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
void** clo8838 = alloc_clo(lam8577_fptr, 8);

//setting env list
clo8838[1] = car;
clo8838[2] = n;
clo8838[3] = lst2;
clo8838[4] = take_u45helper;
clo8838[5] = _u45;
clo8838[6] = cons;
clo8838[7] = kont8464;
clo8838[8] = lst;
void* f8469 = encode_clo(clo8838);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
function_ptr();
return nullptr;
}

}

void* lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8582 = arg_buffer[1];
//reading env and args
void* kont8464 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8839 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8839, "0", 10);
void* a8365 = encode_mpz(mpzvar8839);

//creating new closure instance
void** clo8841 = alloc_clo(lam8579_fptr, 10);

//setting env list
clo8841[1] = car;
clo8841[2] = n;
clo8841[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8841[4] = take_u45helper;
clo8841[5] = reverse;
clo8841[6] = kont8464;
clo8841[7] = _u45;
clo8841[8] = cons;
clo8841[9] = lst;
clo8841[10] = cdr;
void* f8470 = encode_clo(clo8841);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8584))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8584))[3];
//not do dummy comment
void* n = (decode_clo(env8584))[2];
//not do dummy comment
void* kont8471 = (decode_clo(env8584))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8471;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8585 = arg_buffer[1];
//reading env and args
void* kont8471 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8843 = alloc_clo(lam8583_fptr, 4);

//setting env list
clo8843[1] = kont8471;
clo8843[2] = n;
clo8843[3] = take_u45helper;
clo8843[4] = lst;
void* f8472 = encode_clo(clo8843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8472;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8587_fptr() // lam8587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8588 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8473 = (decode_clo(env8588))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8588))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8588))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8473);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8473))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8473 = (decode_clo(env8590))[4];
//not do dummy comment
void* length = (decode_clo(env8590))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8590))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8590))[1];

//creating new closure instance
void** clo8845 = alloc_clo(lam8587_fptr, 3);

//setting env list
clo8845[1] = a8376;
clo8845[2] = _u43;
clo8845[3] = kont8473;
void* f8474 = encode_clo(clo8845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8474;
arg_buffer[3] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void* lam8592_fptr() // lam8592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8593 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8593))[5];
//not do dummy comment
void* length = (decode_clo(env8593))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8593))[3];
//not do dummy comment
void* cdr = (decode_clo(env8593))[2];
//not do dummy comment
void* kont8473 = (decode_clo(env8593))[1];

//if-clause
bool if_guard8846 = is_true(a8374);
if(if_guard8846)
{
mpz_t* mpzvar8847 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8847, "0", 10);
void* xy8375 = encode_mpz(mpzvar8847);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8473);
arg_buffer[2] = xy8375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8473))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8848, "1", 10);
void* a8376 = encode_mpz(mpzvar8848);

//creating new closure instance
void** clo8850 = alloc_clo(lam8589_fptr, 4);

//setting env list
clo8850[1] = a8376;
clo8850[2] = _u43;
clo8850[3] = length;
clo8850[4] = kont8473;
void* f8475 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
function_ptr();
return nullptr;
}

}

void* lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8594 = arg_buffer[1];
//reading env and args
void* kont8473 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8852 = alloc_clo(lam8592_fptr, 5);

//setting env list
clo8852[1] = kont8473;
clo8852[2] = cdr;
clo8852[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8852[4] = length;
clo8852[5] = lst;
void* f8476 = encode_clo(clo8852);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8595_fptr() // lam8595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8596 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8477 = (decode_clo(env8596))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8477);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8595 = encode_clo(alloc_clo(lam8595_fptr, 0));

void* lam8597_fptr() // lam8597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8598 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8477 = (decode_clo(env8598))[3];
//not do dummy comment
void* a8382 = (decode_clo(env8598))[2];
//not do dummy comment
void* cons = (decode_clo(env8598))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8477);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
function_ptr();
return nullptr;
}

void* lam8597 = encode_clo(alloc_clo(lam8597_fptr, 0));

void* lam8599_fptr() // lam8599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8600 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8477 = (decode_clo(env8600))[5];
//not do dummy comment
void* proc = (decode_clo(env8600))[4];
//not do dummy comment
void* cons = (decode_clo(env8600))[3];
//not do dummy comment
void* map = (decode_clo(env8600))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8600))[1];

//creating new closure instance
void** clo8854 = alloc_clo(lam8597_fptr, 3);

//setting env list
clo8854[1] = cons;
clo8854[2] = a8382;
clo8854[3] = kont8477;
void* f8479 = encode_clo(clo8854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8479;
arg_buffer[3] = proc;
arg_buffer[4] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void* lam8601_fptr() // lam8601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8602 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8602))[6];
//not do dummy comment
void* map = (decode_clo(env8602))[5];
//not do dummy comment
void* proc = (decode_clo(env8602))[4];
//not do dummy comment
void* cons = (decode_clo(env8602))[3];
//not do dummy comment
void* lst = (decode_clo(env8602))[2];
//not do dummy comment
void* kont8477 = (decode_clo(env8602))[1];

//creating new closure instance
void** clo8856 = alloc_clo(lam8599_fptr, 5);

//setting env list
clo8856[1] = a8382;
clo8856[2] = map;
clo8856[3] = cons;
clo8856[4] = proc;
clo8856[5] = kont8477;
void* f8480 = encode_clo(clo8856);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8480);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8604))[6];
//not do dummy comment
void* map = (decode_clo(env8604))[5];
//not do dummy comment
void* proc = (decode_clo(env8604))[4];
//not do dummy comment
void* cons = (decode_clo(env8604))[3];
//not do dummy comment
void* lst = (decode_clo(env8604))[2];
//not do dummy comment
void* kont8477 = (decode_clo(env8604))[1];

//creating new closure instance
void** clo8858 = alloc_clo(lam8601_fptr, 6);

//setting env list
clo8858[1] = kont8477;
clo8858[2] = lst;
clo8858[3] = cons;
clo8858[4] = proc;
clo8858[5] = map;
clo8858[6] = cdr;
void* f8481 = encode_clo(clo8858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8481;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void* lam8605_fptr() // lam8605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8606 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8606))[8];
//not do dummy comment
void* proc = (decode_clo(env8606))[7];
//not do dummy comment
void* car = (decode_clo(env8606))[6];
//not do dummy comment
void* cons = (decode_clo(env8606))[5];
//not do dummy comment
void* list = (decode_clo(env8606))[4];
//not do dummy comment
void* cdr = (decode_clo(env8606))[3];
//not do dummy comment
void* lst = (decode_clo(env8606))[2];
//not do dummy comment
void* kont8477 = (decode_clo(env8606))[1];

//if-clause
bool if_guard8859 = is_true(a8379);
if(if_guard8859)
{

//creating new closure instance
void** clo8861 = alloc_clo(lam8595_fptr, 1);

//setting env list
clo8861[1] = kont8477;
void* f8478 = encode_clo(clo8861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8863 = alloc_clo(lam8603_fptr, 6);

//setting env list
clo8863[1] = kont8477;
clo8863[2] = lst;
clo8863[3] = cons;
clo8863[4] = proc;
clo8863[5] = map;
clo8863[6] = cdr;
void* f8482 = encode_clo(clo8863);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
function_ptr();
return nullptr;
}

}

void* lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8607 = arg_buffer[1];
//reading env and args
void* kont8477 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8865 = alloc_clo(lam8605_fptr, 8);

//setting env list
clo8865[1] = kont8477;
clo8865[2] = lst;
clo8865[3] = cdr;
clo8865[4] = list;
clo8865[5] = cons;
clo8865[6] = car;
clo8865[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8865[8] = map;
void* f8483 = encode_clo(clo8865);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8483);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8483))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8608_fptr() // lam8608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8609 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8484 = (decode_clo(env8609))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8484);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8484))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void* lam8610_fptr() // lam8610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8611 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8484 = (decode_clo(env8611))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8611))[2];
//not do dummy comment
void* cons = (decode_clo(env8611))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8484);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8484))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8613))[5];
//not do dummy comment
void* kont8484 = (decode_clo(env8613))[4];
//not do dummy comment
void* a8389 = (decode_clo(env8613))[3];
//not do dummy comment
void* filter = (decode_clo(env8613))[2];
//not do dummy comment
void* cons = (decode_clo(env8613))[1];

//creating new closure instance
void** clo8867 = alloc_clo(lam8610_fptr, 3);

//setting env list
clo8867[1] = cons;
clo8867[2] = a8389;
clo8867[3] = kont8484;
void* f8486 = encode_clo(clo8867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8486;
arg_buffer[3] = op;
arg_buffer[4] = a8390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8615))[6];
//not do dummy comment
void* lst = (decode_clo(env8615))[5];
//not do dummy comment
void* op = (decode_clo(env8615))[4];
//not do dummy comment
void* kont8484 = (decode_clo(env8615))[3];
//not do dummy comment
void* filter = (decode_clo(env8615))[2];
//not do dummy comment
void* cons = (decode_clo(env8615))[1];

//creating new closure instance
void** clo8869 = alloc_clo(lam8612_fptr, 5);

//setting env list
clo8869[1] = cons;
clo8869[2] = filter;
clo8869[3] = a8389;
clo8869[4] = kont8484;
clo8869[5] = op;
void* f8487 = encode_clo(clo8869);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8487);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8487))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8617))[3];
//not do dummy comment
void* kont8484 = (decode_clo(env8617))[2];
//not do dummy comment
void* filter = (decode_clo(env8617))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8484;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8619))[7];
//not do dummy comment
void* lst = (decode_clo(env8619))[6];
//not do dummy comment
void* op = (decode_clo(env8619))[5];
//not do dummy comment
void* kont8484 = (decode_clo(env8619))[4];
//not do dummy comment
void* cons = (decode_clo(env8619))[3];
//not do dummy comment
void* filter = (decode_clo(env8619))[2];
//not do dummy comment
void* car = (decode_clo(env8619))[1];

//if-clause
bool if_guard8870 = is_true(a8388);
if(if_guard8870)
{

//creating new closure instance
void** clo8872 = alloc_clo(lam8614_fptr, 6);

//setting env list
clo8872[1] = cons;
clo8872[2] = filter;
clo8872[3] = kont8484;
clo8872[4] = op;
clo8872[5] = lst;
clo8872[6] = cdr;
void* f8488 = encode_clo(clo8872);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8488);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8488))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8874 = alloc_clo(lam8616_fptr, 3);

//setting env list
clo8874[1] = filter;
clo8874[2] = kont8484;
clo8874[3] = op;
void* f8489 = encode_clo(clo8874);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8489);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8489))[0]);
function_ptr();
return nullptr;
}

}

void* lam8618 = encode_clo(alloc_clo(lam8618_fptr, 0));

void* lam8620_fptr() // lam8620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8621 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8621))[7];
//not do dummy comment
void* lst = (decode_clo(env8621))[6];
//not do dummy comment
void* op = (decode_clo(env8621))[5];
//not do dummy comment
void* kont8484 = (decode_clo(env8621))[4];
//not do dummy comment
void* cons = (decode_clo(env8621))[3];
//not do dummy comment
void* filter = (decode_clo(env8621))[2];
//not do dummy comment
void* car = (decode_clo(env8621))[1];

//creating new closure instance
void** clo8876 = alloc_clo(lam8618_fptr, 7);

//setting env list
clo8876[1] = car;
clo8876[2] = filter;
clo8876[3] = cons;
clo8876[4] = kont8484;
clo8876[5] = op;
clo8876[6] = lst;
clo8876[7] = cdr;
void* f8490 = encode_clo(clo8876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8490;
arg_buffer[3] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8623))[8];
//not do dummy comment
void* op = (decode_clo(env8623))[7];
//not do dummy comment
void* kont8484 = (decode_clo(env8623))[6];
//not do dummy comment
void* cons = (decode_clo(env8623))[5];
//not do dummy comment
void* list = (decode_clo(env8623))[4];
//not do dummy comment
void* cdr = (decode_clo(env8623))[3];
//not do dummy comment
void* filter = (decode_clo(env8623))[2];
//not do dummy comment
void* car = (decode_clo(env8623))[1];

//if-clause
bool if_guard8877 = is_true(a8385);
if(if_guard8877)
{

//creating new closure instance
void** clo8879 = alloc_clo(lam8608_fptr, 1);

//setting env list
clo8879[1] = kont8484;
void* f8485 = encode_clo(clo8879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8881 = alloc_clo(lam8620_fptr, 7);

//setting env list
clo8881[1] = car;
clo8881[2] = filter;
clo8881[3] = cons;
clo8881[4] = kont8484;
clo8881[5] = op;
clo8881[6] = lst;
clo8881[7] = cdr;
void* f8491 = encode_clo(clo8881);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8491);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8491))[0]);
function_ptr();
return nullptr;
}

}

void* lam8622 = encode_clo(alloc_clo(lam8622_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8624 = arg_buffer[1];
//reading env and args
void* kont8484 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8883 = alloc_clo(lam8622_fptr, 8);

//setting env list
clo8883[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8883[2] = filter;
clo8883[3] = cdr;
clo8883[4] = list;
clo8883[5] = cons;
clo8883[6] = kont8484;
clo8883[7] = op;
clo8883[8] = lst;
void* f8492 = encode_clo(clo8883);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8492);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8492))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8625_fptr() // lam8625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8626 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8395 = (decode_clo(env8626))[3];
//not do dummy comment
void* kont8493 = (decode_clo(env8626))[2];
//not do dummy comment
void* drop = (decode_clo(env8626))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8493;
arg_buffer[3] = a8395;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8625 = encode_clo(alloc_clo(lam8625_fptr, 0));

void* lam8628_fptr() // lam8628 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8629 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env8629))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8629))[3];
//not do dummy comment
void* kont8493 = (decode_clo(env8629))[2];
//not do dummy comment
void* drop = (decode_clo(env8629))[1];
mpz_t* mpzvar8884 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8884, "1", 10);
void* a8396 = encode_mpz(mpzvar8884);

//creating new closure instance
void** clo8886 = alloc_clo(lam8625_fptr, 3);

//setting env list
clo8886[1] = drop;
clo8886[2] = kont8493;
clo8886[3] = a8395;
void* f8494 = encode_clo(clo8886);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8494);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8494))[0]);
function_ptr();
return nullptr;
}

void* lam8628 = encode_clo(alloc_clo(lam8628_fptr, 0));

void* lam8630_fptr() // lam8630 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8631 = arg_buffer[1];
//reading env and args
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8631))[6];
//not do dummy comment
void* n = (decode_clo(env8631))[5];
//not do dummy comment
void* _u45 = (decode_clo(env8631))[4];
//not do dummy comment
void* lst = (decode_clo(env8631))[3];
//not do dummy comment
void* kont8493 = (decode_clo(env8631))[2];
//not do dummy comment
void* drop = (decode_clo(env8631))[1];

//if-clause
bool if_guard8887 = is_true(a8394);
if(if_guard8887)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8493);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8889 = alloc_clo(lam8628_fptr, 4);

//setting env list
clo8889[1] = drop;
clo8889[2] = kont8493;
clo8889[3] = _u45;
clo8889[4] = n;
void* f8495 = encode_clo(clo8889);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8495);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8495))[0]);
function_ptr();
return nullptr;
}

}

void* lam8630 = encode_clo(alloc_clo(lam8630_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8633 = arg_buffer[1];
//reading env and args
void* kont8493 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8890 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8890, "0", 10);
void* a8393 = encode_mpz(mpzvar8890);

//creating new closure instance
void** clo8892 = alloc_clo(lam8630_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8892[1] = drop;
clo8892[2] = kont8493;
clo8892[3] = lst;
clo8892[4] = _u45;
clo8892[5] = n;
clo8892[6] = cdr;
void* f8496 = encode_clo(clo8892);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8496);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8496))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8634_fptr() // lam8634 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8635 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8399 = (decode_clo(env8635))[3];
//not do dummy comment
void* kont8497 = (decode_clo(env8635))[2];
//not do dummy comment
void* proc = (decode_clo(env8635))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8497;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8634 = encode_clo(alloc_clo(lam8634_fptr, 0));

void* lam8636_fptr() // lam8636 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8637 = arg_buffer[1];
//reading env and args
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8637))[5];
//not do dummy comment
void* a8399 = (decode_clo(env8637))[4];
//not do dummy comment
void* kont8497 = (decode_clo(env8637))[3];
//not do dummy comment
void* proc = (decode_clo(env8637))[2];
//not do dummy comment
void* acc = (decode_clo(env8637))[1];

//creating new closure instance
void** clo8894 = alloc_clo(lam8634_fptr, 3);

//setting env list
clo8894[1] = proc;
clo8894[2] = kont8497;
clo8894[3] = a8399;
void* f8498 = encode_clo(clo8894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8498;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8636 = encode_clo(alloc_clo(lam8636_fptr, 0));

void* lam8638_fptr() // lam8638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8639 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8639))[6];
//not do dummy comment
void* kont8497 = (decode_clo(env8639))[5];
//not do dummy comment
void* foldr = (decode_clo(env8639))[4];
//not do dummy comment
void* lst = (decode_clo(env8639))[3];
//not do dummy comment
void* proc = (decode_clo(env8639))[2];
//not do dummy comment
void* acc = (decode_clo(env8639))[1];

//creating new closure instance
void** clo8896 = alloc_clo(lam8636_fptr, 5);

//setting env list
clo8896[1] = acc;
clo8896[2] = proc;
clo8896[3] = kont8497;
clo8896[4] = a8399;
clo8896[5] = foldr;
void* f8499 = encode_clo(clo8896);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8499);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8499))[0]);
function_ptr();
return nullptr;
}

void* lam8638 = encode_clo(alloc_clo(lam8638_fptr, 0));

void* lam8640_fptr() // lam8640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8641 = arg_buffer[1];
//reading env and args
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8641))[7];
//not do dummy comment
void* kont8497 = (decode_clo(env8641))[6];
//not do dummy comment
void* car = (decode_clo(env8641))[5];
//not do dummy comment
void* foldr = (decode_clo(env8641))[4];
//not do dummy comment
void* lst = (decode_clo(env8641))[3];
//not do dummy comment
void* proc = (decode_clo(env8641))[2];
//not do dummy comment
void* acc = (decode_clo(env8641))[1];

//if-clause
bool if_guard8897 = is_true(a8398);
if(if_guard8897)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8497);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8497))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8899 = alloc_clo(lam8638_fptr, 6);

//setting env list
clo8899[1] = acc;
clo8899[2] = proc;
clo8899[3] = lst;
clo8899[4] = foldr;
clo8899[5] = kont8497;
clo8899[6] = cdr;
void* f8500 = encode_clo(clo8899);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8500);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8500))[0]);
function_ptr();
return nullptr;
}

}

void* lam8640 = encode_clo(alloc_clo(lam8640_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8642 = arg_buffer[1];
//reading env and args
void* kont8497 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8901 = alloc_clo(lam8640_fptr, 7);

//setting env list
clo8901[1] = acc;
clo8901[2] = proc;
clo8901[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8901[4] = foldr;
clo8901[5] = car;
clo8901[6] = kont8497;
clo8901[7] = cdr;
void* f8501 = encode_clo(clo8901);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8501);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8501))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8643_fptr() // lam8643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8644 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8403 = (decode_clo(env8644))[3];
//not do dummy comment
void* kont8502 = (decode_clo(env8644))[2];
//not do dummy comment
void* cons = (decode_clo(env8644))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8502);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8502))[0]);
function_ptr();
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8646))[5];
//not do dummy comment
void* a8403 = (decode_clo(env8646))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8646))[3];
//not do dummy comment
void* kont8502 = (decode_clo(env8646))[2];
//not do dummy comment
void* cons = (decode_clo(env8646))[1];

//creating new closure instance
void** clo8903 = alloc_clo(lam8643_fptr, 3);

//setting env list
clo8903[1] = cons;
clo8903[2] = kont8502;
clo8903[3] = a8403;
void* f8503 = encode_clo(clo8903);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8503;
arg_buffer[3] = a8404;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8645 = encode_clo(alloc_clo(lam8645_fptr, 0));

void* lam8647_fptr() // lam8647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8648 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8648))[6];
//not do dummy comment
void* append = (decode_clo(env8648))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8648))[4];
//not do dummy comment
void* cons = (decode_clo(env8648))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8648))[2];
//not do dummy comment
void* kont8502 = (decode_clo(env8648))[1];

//creating new closure instance
void** clo8905 = alloc_clo(lam8645_fptr, 5);

//setting env list
clo8905[1] = cons;
clo8905[2] = kont8502;
clo8905[3] = lst2;
clo8905[4] = a8403;
clo8905[5] = append;
void* f8504 = encode_clo(clo8905);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8504);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8504))[0]);
function_ptr();
return nullptr;
}

void* lam8647 = encode_clo(alloc_clo(lam8647_fptr, 0));

void* lam8649_fptr() // lam8649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8650 = arg_buffer[1];
//reading env and args
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8650))[7];
//not do dummy comment
void* append = (decode_clo(env8650))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8650))[5];
//not do dummy comment
void* cons = (decode_clo(env8650))[4];
//not do dummy comment
void* lst1 = (decode_clo(env8650))[3];
//not do dummy comment
void* car = (decode_clo(env8650))[2];
//not do dummy comment
void* kont8502 = (decode_clo(env8650))[1];

//if-clause
bool if_guard8906 = is_true(a8402);
if(if_guard8906)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8502);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8502))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8908 = alloc_clo(lam8647_fptr, 6);

//setting env list
clo8908[1] = kont8502;
clo8908[2] = lst1;
clo8908[3] = cons;
clo8908[4] = lst2;
clo8908[5] = append;
clo8908[6] = cdr;
void* f8505 = encode_clo(clo8908);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8505);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8505))[0]);
function_ptr();
return nullptr;
}

}

void* lam8649 = encode_clo(alloc_clo(lam8649_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8651 = arg_buffer[1];
//reading env and args
void* kont8502 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8910 = alloc_clo(lam8649_fptr, 7);

//setting env list
clo8910[1] = kont8502;
clo8910[2] = car;
clo8910[3] = lst1;
clo8910[4] = cons;
clo8910[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8910[6] = append;
clo8910[7] = cdr;
void* f8506 = encode_clo(clo8910);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8506);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8506))[0]);
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
void* _env8913 = arg_buffer[1];
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

void* kont8911 = prim_car(lst);
void* lst8914 = prim_cdr(lst);
void* x8912 = apply_prim_hash(lst8914);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8911);
arg_buffer[2] = x8912;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8911))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void* hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8652 = arg_buffer[1];
//reading env and args
void* kont8507 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8406 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8507);
arg_buffer[2] = xy8406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8507))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void* hash_u45count_fptr() // hash-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8653 = arg_buffer[1];
//reading env and args
void* kont8508 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8407 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8508);
arg_buffer[2] = xy8407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8508))[0]);
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
void* _env8917 = arg_buffer[1];
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

void* kont8915 = prim_car(lst);
void* lst8918 = prim_cdr(lst);
void* x8916 = apply_prim_set(lst8918);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8915);
arg_buffer[2] = x8916;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8915))[0]);
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
void* _8654 = arg_buffer[1];
//reading env and args
void* kont8509 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8408 = prim_set_u45_u62list(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8509);
arg_buffer[2] = xy8408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8509))[0]);
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
void* _8655 = arg_buffer[1];
//reading env and args
void* kont8510 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8409 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8510);
arg_buffer[2] = xy8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8510))[0]);
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
void* _8656 = arg_buffer[1];
//reading env and args
void* kont8511 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8410 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8511);
arg_buffer[2] = xy8410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8511))[0]);
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
void* _8657 = arg_buffer[1];
//reading env and args
void* kont8512 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8411 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8512);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8512))[0]);
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
void* _8658 = arg_buffer[1];
//reading env and args
void* kont8513 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8412 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8513);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8513))[0]);
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
void* _8659 = arg_buffer[1];
//reading env and args
void* kont8514 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8413 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8514);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8514))[0]);
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
void* _8660 = arg_buffer[1];
//reading env and args
void* kont8515 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8414 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8515);
arg_buffer[2] = xy8414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8515))[0]);
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
void* _8661 = arg_buffer[1];
//reading env and args
void* kont8516 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8415 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8516);
arg_buffer[2] = xy8415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8516))[0]);
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
void* _8662 = arg_buffer[1];
//reading env and args
void* kont8517 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8416 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8517);
arg_buffer[2] = xy8416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8517))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam8663_fptr() // lam8663 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8664 = arg_buffer[1];
//reading env and args
void* a8440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45keys = (decode_clo(env8664))[2];
//not do dummy comment
void* kont8518 = (decode_clo(env8664))[1];
void* cps_u45lst8519 = prim_cons(kont8518, a8440);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(hash_u45keys);
arg_buffer[2] = cps_u45lst8519;
arg_buffer[0] = reinterpret_cast<void*>(2);
hash_u45keys_fptr();
return nullptr;
}

void* lam8663 = encode_clo(alloc_clo(lam8663_fptr, 0));

void* lam8665_fptr() // lam8665 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8666 = arg_buffer[1];
//reading env and args
void* a8439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8666))[3];
//not do dummy comment
void* hash_u45keys = (decode_clo(env8666))[2];
//not do dummy comment
void* kont8518 = (decode_clo(env8666))[1];

//creating new closure instance
void** clo8920 = alloc_clo(lam8663_fptr, 2);

//setting env list
clo8920[1] = kont8518;
clo8920[2] = hash_u45keys;
void* f8520 = encode_clo(clo8920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8520;
arg_buffer[3] = a8439;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8665 = encode_clo(alloc_clo(lam8665_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8689 = arg_buffer[1];
//reading env and args
void* kont8518 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8921 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8921, "1", 10);
void* a8417 = encode_mpz(mpzvar8921);
mpz_t* mpzvar8922 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8922, "1", 10);
void* a8418 = encode_mpz(mpzvar8922);
mpz_t* mpzvar8923 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8923, "2", 10);
void* a8419 = encode_mpz(mpzvar8923);
mpz_t* mpzvar8924 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8924, "2", 10);
void* a8420 = encode_mpz(mpzvar8924);
mpz_t* mpzvar8925 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8925, "3", 10);
void* a8421 = encode_mpz(mpzvar8925);
mpz_t* mpzvar8926 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8926, "3", 10);
void* a8422 = encode_mpz(mpzvar8926);
mpz_t* mpzvar8927 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8927, "4", 10);
void* a8423 = encode_mpz(mpzvar8927);
mpz_t* mpzvar8928 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8928, "4", 10);
void* a8424 = encode_mpz(mpzvar8928);
mpz_t* mpzvar8929 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8929, "5", 10);
void* a8425 = encode_mpz(mpzvar8929);
mpz_t* mpzvar8930 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8930, "5", 10);
void* a8426 = encode_mpz(mpzvar8930);
mpz_t* mpzvar8931 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8931, "6", 10);
void* a8427 = encode_mpz(mpzvar8931);
mpz_t* mpzvar8932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8932, "6", 10);
void* a8428 = encode_mpz(mpzvar8932);
mpz_t* mpzvar8933 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8933, "7", 10);
void* a8429 = encode_mpz(mpzvar8933);
mpz_t* mpzvar8934 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8934, "7", 10);
void* a8430 = encode_mpz(mpzvar8934);
mpz_t* mpzvar8935 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8935, "8", 10);
void* a8431 = encode_mpz(mpzvar8935);
mpz_t* mpzvar8936 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8936, "8", 10);
void* a8432 = encode_mpz(mpzvar8936);
mpz_t* mpzvar8937 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8937, "9", 10);
void* a8433 = encode_mpz(mpzvar8937);
mpz_t* mpzvar8938 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8938, "9", 10);
void* a8434 = encode_mpz(mpzvar8938);
mpz_t* mpzvar8939 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8939, "0", 10);
void* a8435 = encode_mpz(mpzvar8939);
mpz_t* mpzvar8940 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8940, "0", 10);
void* a8436 = encode_mpz(mpzvar8940);
mpz_t* mpzvar8941 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8941, "11", 10);
void* a8437 = encode_mpz(mpzvar8941);
mpz_t* mpzvar8942 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8942, "11", 10);
void* a8438 = encode_mpz(mpzvar8942);

//creating new closure instance
void** clo8944 = alloc_clo(lam8665_fptr, 3);

//setting env list
clo8944[1] = kont8518;
clo8944[2] = hash_u45keys;
clo8944[3] = list;
void* f8521 = encode_clo(clo8944);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f8521;
arg_buffer[3] = a8417;
arg_buffer[4] = a8418;
arg_buffer[5] = a8419;
arg_buffer[6] = a8420;
arg_buffer[7] = a8421;
arg_buffer[8] = a8422;
arg_buffer[9] = a8423;
arg_buffer[10] = a8424;
arg_buffer[11] = a8425;
arg_buffer[12] = a8426;
arg_buffer[13] = a8427;
arg_buffer[14] = a8428;
arg_buffer[15] = a8429;
arg_buffer[16] = a8430;
arg_buffer[17] = a8431;
arg_buffer[18] = a8432;
arg_buffer[19] = a8433;
arg_buffer[20] = a8434;
arg_buffer[21] = a8435;
arg_buffer[22] = a8436;
arg_buffer[23] = a8437;
arg_buffer[24] = a8438;
arg_buffer[0] = reinterpret_cast<void*>(24);
hash_fptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8690_fptr() // lam8690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8691 = arg_buffer[1];
//reading env and args
void* xy8441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8522 = (decode_clo(env8691))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8522);
arg_buffer[2] = xy8441;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8522))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8690 = encode_clo(alloc_clo(lam8690_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8692 = arg_buffer[1];
//reading env and args
void* kont8522 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8946 = alloc_clo(lam8690_fptr, 1);

//setting env list
clo8946[1] = kont8522;
void* f8523 = encode_clo(clo8946);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8523;
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

