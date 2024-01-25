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
void* _env8667 = arg_buffer[1];
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

void* kont8665 = prim_car(lst);
void* lst8668 = prim_cdr(lst);
void* x8666 = apply_prim__u43(lst8668);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8665);
arg_buffer[2] = x8666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8665))[0]);
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
void* _env8671 = arg_buffer[1];
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

void* kont8669 = prim_car(lst);
void* lst8672 = prim_cdr(lst);
void* x8670 = apply_prim__u45(lst8672);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8669);
arg_buffer[2] = x8670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8669))[0]);
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
void* _env8675 = arg_buffer[1];
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

void* kont8673 = prim_car(lst);
void* lst8676 = prim_cdr(lst);
void* x8674 = apply_prim__u42(lst8676);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8673);
arg_buffer[2] = x8674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8673))[0]);
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
void* _env8679 = arg_buffer[1];
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

void* kont8677 = prim_car(lst);
void* lst8680 = prim_cdr(lst);
void* x8678 = apply_prim__u47(lst8680);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8677);
arg_buffer[2] = x8678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8677))[0]);
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
void* _env8683 = arg_buffer[1];
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

void* kont8681 = prim_car(lst);
void* lst8684 = prim_cdr(lst);
void* x8682 = apply_prim__u61(lst8684);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8681);
arg_buffer[2] = x8682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8681))[0]);
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
void* _env8687 = arg_buffer[1];
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

void* kont8685 = prim_car(lst);
void* lst8688 = prim_cdr(lst);
void* x8686 = apply_prim__u62(lst8688);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8685);
arg_buffer[2] = x8686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8685))[0]);
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
void* _env8691 = arg_buffer[1];
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

void* kont8689 = prim_car(lst);
void* lst8692 = prim_cdr(lst);
void* x8690 = apply_prim__u60(lst8692);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8689);
arg_buffer[2] = x8690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8689))[0]);
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
void* x8694 = apply_prim__u60_u61(lst8696);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8693);
arg_buffer[2] = x8694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8693))[0]);
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
void* x8698 = apply_prim__u62_u61(lst8700);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8697);
arg_buffer[2] = x8698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8697))[0]);
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
void* x8702 = apply_prim_modulo(lst8704);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8701);
arg_buffer[2] = x8702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8701))[0]);
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
void* x8706 = apply_prim_null_u63(lst8708);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8705);
arg_buffer[2] = x8706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8705))[0]);
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
void* x8710 = apply_prim_equal_u63(lst8712);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8709);
arg_buffer[2] = x8710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8709))[0]);
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
void* x8714 = apply_prim_eq_u63(lst8716);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8713);
arg_buffer[2] = x8714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8713))[0]);
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
void* x8718 = apply_prim_exact_u45floor(lst8720);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8717);
arg_buffer[2] = x8718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8717))[0]);
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
void* x8722 = apply_prim_exact_u45ceiling(lst8724);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8721);
arg_buffer[2] = x8722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8721))[0]);
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
void* x8726 = apply_prim_exact_u45round(lst8728);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8725);
arg_buffer[2] = x8726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8725))[0]);
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
void* x8730 = apply_prim_cons(lst8732);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8729);
arg_buffer[2] = x8730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8729))[0]);
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
void* x8734 = apply_prim_car(lst8736);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8733);
arg_buffer[2] = x8734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8733))[0]);
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
void* x8738 = apply_prim_cdr(lst8740);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8737);
arg_buffer[2] = x8738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8737))[0]);
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
void* x8742 = apply_prim_float_u45_u62int(lst8744);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8741);
arg_buffer[2] = x8742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8741))[0]);
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
void* x8746 = apply_prim_int_u45_u62float(lst8748);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8745);
arg_buffer[2] = x8746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8745))[0]);
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
void* x8750 = apply_prim_hash_u45ref(lst8752);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8749);
arg_buffer[2] = x8750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8749))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void* lam8512_fptr() // lam8512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8513 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8427 = (decode_clo(env8513))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8513))[2];
//not do dummy comment
void* a8344 = (decode_clo(env8513))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8427);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8427))[0]);
function_ptr();
return nullptr;
}

void* lam8512 = encode_clo(alloc_clo(lam8512_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8516 = arg_buffer[1];
//reading env and args
void* kont8427 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8753 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8753, "0", 10);
void* a8344 = encode_mpz(mpzvar8753);
mpz_t* mpzvar8754 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8754, "2", 10);
void* a8345 = encode_mpz(mpzvar8754);

//creating new closure instance
void** clo8756 = alloc_clo(lam8512_fptr, 3);

//setting env list
clo8756[1] = a8344;
clo8756[2] = equal_u63;
clo8756[3] = kont8427;
void* f8428 = encode_clo(clo8756);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8517_fptr() // lam8517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8347 = (decode_clo(env8518))[3];
//not do dummy comment
void* kont8429 = (decode_clo(env8518))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8518))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8429);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8429))[0]);
function_ptr();
return nullptr;
}

void* lam8517 = encode_clo(alloc_clo(lam8517_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8521 = arg_buffer[1];
//reading env and args
void* kont8429 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8757 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8757, "1", 10);
void* a8347 = encode_mpz(mpzvar8757);
mpz_t* mpzvar8758 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8758, "2", 10);
void* a8348 = encode_mpz(mpzvar8758);

//creating new closure instance
void** clo8760 = alloc_clo(lam8517_fptr, 3);

//setting env list
clo8760[1] = equal_u63;
clo8760[2] = kont8429;
clo8760[3] = a8347;
void* f8430 = encode_clo(clo8760);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8430);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
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
void* _8522 = arg_buffer[1];
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

void* kont8431 = prim_car(x);
void* x8511 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8431);
arg_buffer[2] = x8511;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8431))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8525_fptr() // lam8525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8526 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8432 = (decode_clo(env8526))[3];
//not do dummy comment
void* x = (decode_clo(env8526))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8526))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8432;
arg_buffer[3] = x;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
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
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8528))[5];
//not do dummy comment
void* lst = (decode_clo(env8528))[4];
//not do dummy comment
void* kont8432 = (decode_clo(env8528))[3];
//not do dummy comment
void* x = (decode_clo(env8528))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8528))[1];

//if-clause
bool if_guard8761 = is_true(a8353);
if(if_guard8761)
{
void* xy8354 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8432);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8432))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8763 = alloc_clo(lam8525_fptr, 3);

//setting env list
clo8763[1] = member_u63;
clo8763[2] = x;
clo8763[3] = kont8432;
void* f8433 = encode_clo(clo8763);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
function_ptr();
return nullptr;
}

}

void* lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void* lam8529_fptr() // lam8529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8530 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8530))[6];
//not do dummy comment
void* lst = (decode_clo(env8530))[5];
//not do dummy comment
void* kont8432 = (decode_clo(env8530))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8530))[3];
//not do dummy comment
void* x = (decode_clo(env8530))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8530))[1];

//creating new closure instance
void** clo8765 = alloc_clo(lam8527_fptr, 5);

//setting env list
clo8765[1] = member_u63;
clo8765[2] = x;
clo8765[3] = kont8432;
clo8765[4] = lst;
clo8765[5] = cdr;
void* f8434 = encode_clo(clo8765);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
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
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8532))[7];
//not do dummy comment
void* lst = (decode_clo(env8532))[6];
//not do dummy comment
void* kont8432 = (decode_clo(env8532))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8532))[4];
//not do dummy comment
void* x = (decode_clo(env8532))[3];
//not do dummy comment
void* car = (decode_clo(env8532))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8532))[1];

//if-clause
bool if_guard8766 = is_true(a8350);
if(if_guard8766)
{
void* xy8351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8432);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8432))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8768 = alloc_clo(lam8529_fptr, 6);

//setting env list
clo8768[1] = member_u63;
clo8768[2] = x;
clo8768[3] = equal_u63;
clo8768[4] = kont8432;
clo8768[5] = lst;
clo8768[6] = cdr;
void* f8435 = encode_clo(clo8768);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8435);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
function_ptr();
return nullptr;
}

}

void* lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8533 = arg_buffer[1];
//reading env and args
void* kont8432 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8770 = alloc_clo(lam8531_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8770[1] = member_u63;
clo8770[2] = car;
clo8770[3] = x;
clo8770[4] = equal_u63;
clo8770[5] = kont8432;
clo8770[6] = lst;
clo8770[7] = cdr;
void* f8436 = encode_clo(clo8770);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8534_fptr() // lam8534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8535 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8535))[4];
//not do dummy comment
void* kont8437 = (decode_clo(env8535))[3];
//not do dummy comment
void* a8358 = (decode_clo(env8535))[2];
//not do dummy comment
void* foldl = (decode_clo(env8535))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8437;
arg_buffer[3] = fun;
arg_buffer[4] = a8358;
arg_buffer[5] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8537))[5];
//not do dummy comment
void* lst = (decode_clo(env8537))[4];
//not do dummy comment
void* fun = (decode_clo(env8537))[3];
//not do dummy comment
void* kont8437 = (decode_clo(env8537))[2];
//not do dummy comment
void* foldl = (decode_clo(env8537))[1];

//creating new closure instance
void** clo8772 = alloc_clo(lam8534_fptr, 4);

//setting env list
clo8772[1] = foldl;
clo8772[2] = a8358;
clo8772[3] = kont8437;
clo8772[4] = fun;
void* f8438 = encode_clo(clo8772);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
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
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8539))[6];
//not do dummy comment
void* lst = (decode_clo(env8539))[5];
//not do dummy comment
void* fun = (decode_clo(env8539))[4];
//not do dummy comment
void* acc = (decode_clo(env8539))[3];
//not do dummy comment
void* kont8437 = (decode_clo(env8539))[2];
//not do dummy comment
void* foldl = (decode_clo(env8539))[1];

//creating new closure instance
void** clo8774 = alloc_clo(lam8536_fptr, 5);

//setting env list
clo8774[1] = foldl;
clo8774[2] = kont8437;
clo8774[3] = fun;
clo8774[4] = lst;
clo8774[5] = cdr;
void* f8439 = encode_clo(clo8774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8439;
arg_buffer[3] = a8357;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8541))[7];
//not do dummy comment
void* lst = (decode_clo(env8541))[6];
//not do dummy comment
void* fun = (decode_clo(env8541))[5];
//not do dummy comment
void* acc = (decode_clo(env8541))[4];
//not do dummy comment
void* kont8437 = (decode_clo(env8541))[3];
//not do dummy comment
void* car = (decode_clo(env8541))[2];
//not do dummy comment
void* foldl = (decode_clo(env8541))[1];

//if-clause
bool if_guard8775 = is_true(a8356);
if(if_guard8775)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8437);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8437))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8777 = alloc_clo(lam8538_fptr, 6);

//setting env list
clo8777[1] = foldl;
clo8777[2] = kont8437;
clo8777[3] = acc;
clo8777[4] = fun;
clo8777[5] = lst;
clo8777[6] = cdr;
void* f8440 = encode_clo(clo8777);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
function_ptr();
return nullptr;
}

}

void* lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8542 = arg_buffer[1];
//reading env and args
void* kont8437 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8779 = alloc_clo(lam8540_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8779[1] = foldl;
clo8779[2] = car;
clo8779[3] = kont8437;
clo8779[4] = acc;
clo8779[5] = fun;
clo8779[6] = lst;
clo8779[7] = cdr;
void* f8441 = encode_clo(clo8779);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8441);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8543_fptr() // lam8543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8544))[3];
//not do dummy comment
void* kont8442 = (decode_clo(env8544))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8544))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8442;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8546))[5];
//not do dummy comment
void* kont8442 = (decode_clo(env8546))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8546))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8546))[2];
//not do dummy comment
void* cons = (decode_clo(env8546))[1];

//creating new closure instance
void** clo8781 = alloc_clo(lam8543_fptr, 3);

//setting env list
clo8781[1] = reverse_u45helper;
clo8781[2] = kont8442;
clo8781[3] = a8361;
void* f8443 = encode_clo(clo8781);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8442 = (decode_clo(env8548))[6];
//not do dummy comment
void* lst = (decode_clo(env8548))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8548))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8548))[3];
//not do dummy comment
void* car = (decode_clo(env8548))[2];
//not do dummy comment
void* cons = (decode_clo(env8548))[1];

//creating new closure instance
void** clo8783 = alloc_clo(lam8545_fptr, 5);

//setting env list
clo8783[1] = cons;
clo8783[2] = lst2;
clo8783[3] = reverse_u45helper;
clo8783[4] = kont8442;
clo8783[5] = a8361;
void* f8444 = encode_clo(clo8783);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
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
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8550))[7];
//not do dummy comment
void* kont8442 = (decode_clo(env8550))[6];
//not do dummy comment
void* lst = (decode_clo(env8550))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8550))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8550))[3];
//not do dummy comment
void* car = (decode_clo(env8550))[2];
//not do dummy comment
void* cons = (decode_clo(env8550))[1];

//if-clause
bool if_guard8784 = is_true(a8360);
if(if_guard8784)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8442);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8442))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8786 = alloc_clo(lam8547_fptr, 6);

//setting env list
clo8786[1] = cons;
clo8786[2] = car;
clo8786[3] = lst2;
clo8786[4] = reverse_u45helper;
clo8786[5] = lst;
clo8786[6] = kont8442;
void* f8445 = encode_clo(clo8786);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
function_ptr();
return nullptr;
}

}

void* lam8549 = encode_clo(alloc_clo(lam8549_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8551 = arg_buffer[1];
//reading env and args
void* kont8442 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8788 = alloc_clo(lam8549_fptr, 7);

//setting env list
clo8788[1] = cons;
clo8788[2] = car;
clo8788[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8788[4] = reverse_u45helper;
clo8788[5] = lst;
clo8788[6] = kont8442;
clo8788[7] = cdr;
void* f8446 = encode_clo(clo8788);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8446);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8552_fptr() // lam8552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8553 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8553))[3];
//not do dummy comment
void* kont8447 = (decode_clo(env8553))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8553))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8447;
arg_buffer[3] = lst;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8554 = arg_buffer[1];
//reading env and args
void* kont8447 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8790 = alloc_clo(lam8552_fptr, 3);

//setting env list
clo8790[1] = reverse_u45helper;
clo8790[2] = kont8447;
clo8790[3] = lst;
void* f8448 = encode_clo(clo8790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8555_fptr() // lam8555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8449 = (decode_clo(env8556))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8449);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
//call next proc using a function pointer
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8368 = (decode_clo(env8558))[4];
//not do dummy comment
void* kont8449 = (decode_clo(env8558))[3];
//not do dummy comment
void* a8370 = (decode_clo(env8558))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8558))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8449;
arg_buffer[3] = a8368;
arg_buffer[4] = a8370;
arg_buffer[5] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void* lam8559_fptr() // lam8559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8560 = arg_buffer[1];
//reading env and args
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8368 = (decode_clo(env8560))[6];
//not do dummy comment
void* kont8449 = (decode_clo(env8560))[5];
//not do dummy comment
void* a8370 = (decode_clo(env8560))[4];
//not do dummy comment
void* cons = (decode_clo(env8560))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8560))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8560))[1];

//creating new closure instance
void** clo8792 = alloc_clo(lam8557_fptr, 4);

//setting env list
clo8792[1] = take_u45helper;
clo8792[2] = a8370;
clo8792[3] = kont8449;
clo8792[4] = a8368;
void* f8451 = encode_clo(clo8792);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

void* lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void* lam8561_fptr() // lam8561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8562 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8562))[7];
//not do dummy comment
void* a8368 = (decode_clo(env8562))[6];
//not do dummy comment
void* kont8449 = (decode_clo(env8562))[5];
//not do dummy comment
void* car = (decode_clo(env8562))[4];
//not do dummy comment
void* cons = (decode_clo(env8562))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8562))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8562))[1];

//creating new closure instance
void** clo8794 = alloc_clo(lam8559_fptr, 6);

//setting env list
clo8794[1] = lst2;
clo8794[2] = take_u45helper;
clo8794[3] = cons;
clo8794[4] = a8370;
clo8794[5] = kont8449;
clo8794[6] = a8368;
void* f8452 = encode_clo(clo8794);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8452);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8452))[0]);
function_ptr();
return nullptr;
}

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void* lam8564_fptr() // lam8564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8565 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8565))[8];
//not do dummy comment
void* kont8449 = (decode_clo(env8565))[7];
//not do dummy comment
void* cons = (decode_clo(env8565))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8565))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8565))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8565))[3];
//not do dummy comment
void* n = (decode_clo(env8565))[2];
//not do dummy comment
void* car = (decode_clo(env8565))[1];
mpz_t* mpzvar8795 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8795, "1", 10);
void* a8369 = encode_mpz(mpzvar8795);

//creating new closure instance
void** clo8797 = alloc_clo(lam8561_fptr, 7);

//setting env list
clo8797[1] = lst2;
clo8797[2] = take_u45helper;
clo8797[3] = cons;
clo8797[4] = car;
clo8797[5] = kont8449;
clo8797[6] = a8368;
clo8797[7] = lst;
void* f8453 = encode_clo(clo8797);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
function_ptr();
return nullptr;
}

void* lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void* lam8566_fptr() // lam8566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8567 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8567))[10];
//not do dummy comment
void* lst = (decode_clo(env8567))[9];
//not do dummy comment
void* reverse = (decode_clo(env8567))[8];
//not do dummy comment
void* kont8449 = (decode_clo(env8567))[7];
//not do dummy comment
void* cons = (decode_clo(env8567))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8567))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8567))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8567))[3];
//not do dummy comment
void* n = (decode_clo(env8567))[2];
//not do dummy comment
void* car = (decode_clo(env8567))[1];

//if-clause
bool if_guard8798 = is_true(a8366);
if(if_guard8798)
{

//creating new closure instance
void** clo8800 = alloc_clo(lam8555_fptr, 1);

//setting env list
clo8800[1] = kont8449;
void* f8450 = encode_clo(clo8800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8450;
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
void** clo8802 = alloc_clo(lam8564_fptr, 8);

//setting env list
clo8802[1] = car;
clo8802[2] = n;
clo8802[3] = lst2;
clo8802[4] = take_u45helper;
clo8802[5] = _u45;
clo8802[6] = cons;
clo8802[7] = kont8449;
clo8802[8] = lst;
void* f8454 = encode_clo(clo8802);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8454);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
function_ptr();
return nullptr;
}

}

void* lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8569 = arg_buffer[1];
//reading env and args
void* kont8449 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8803 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8803, "0", 10);
void* a8365 = encode_mpz(mpzvar8803);

//creating new closure instance
void** clo8805 = alloc_clo(lam8566_fptr, 10);

//setting env list
clo8805[1] = car;
clo8805[2] = n;
clo8805[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8805[4] = take_u45helper;
clo8805[5] = _u45;
clo8805[6] = cons;
clo8805[7] = kont8449;
clo8805[8] = reverse;
clo8805[9] = lst;
clo8805[10] = cdr;
void* f8455 = encode_clo(clo8805);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8455);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8570_fptr() // lam8570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8571 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8571))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8571))[3];
//not do dummy comment
void* n = (decode_clo(env8571))[2];
//not do dummy comment
void* kont8456 = (decode_clo(env8571))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8456;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8572 = arg_buffer[1];
//reading env and args
void* kont8456 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8807 = alloc_clo(lam8570_fptr, 4);

//setting env list
clo8807[1] = kont8456;
clo8807[2] = n;
clo8807[3] = take_u45helper;
clo8807[4] = lst;
void* f8457 = encode_clo(clo8807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8457;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8574_fptr() // lam8574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8575 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8575))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8575))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8575))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8458);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8458))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8458 = (decode_clo(env8577))[4];
//not do dummy comment
void* length = (decode_clo(env8577))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8577))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8577))[1];

//creating new closure instance
void** clo8809 = alloc_clo(lam8574_fptr, 3);

//setting env list
clo8809[1] = a8376;
clo8809[2] = _u43;
clo8809[3] = kont8458;
void* f8459 = encode_clo(clo8809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8459;
arg_buffer[3] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8576 = encode_clo(alloc_clo(lam8576_fptr, 0));

void* lam8579_fptr() // lam8579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8580 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8580))[5];
//not do dummy comment
void* kont8458 = (decode_clo(env8580))[4];
//not do dummy comment
void* lst = (decode_clo(env8580))[3];
//not do dummy comment
void* length = (decode_clo(env8580))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8580))[1];

//if-clause
bool if_guard8810 = is_true(a8374);
if(if_guard8810)
{
mpz_t* mpzvar8811 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8811, "0", 10);
void* xy8375 = encode_mpz(mpzvar8811);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8458);
arg_buffer[2] = xy8375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8458))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8812 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8812, "1", 10);
void* a8376 = encode_mpz(mpzvar8812);

//creating new closure instance
void** clo8814 = alloc_clo(lam8576_fptr, 4);

//setting env list
clo8814[1] = a8376;
clo8814[2] = _u43;
clo8814[3] = length;
clo8814[4] = kont8458;
void* f8460 = encode_clo(clo8814);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8460);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
function_ptr();
return nullptr;
}

}

void* lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8581 = arg_buffer[1];
//reading env and args
void* kont8458 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8816 = alloc_clo(lam8579_fptr, 5);

//setting env list
clo8816[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8816[2] = length;
clo8816[3] = lst;
clo8816[4] = kont8458;
clo8816[5] = cdr;
void* f8461 = encode_clo(clo8816);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8582_fptr() // lam8582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8583 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8462 = (decode_clo(env8583))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8462);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void* lam8584_fptr() // lam8584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8585 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8585))[3];
//not do dummy comment
void* a8382 = (decode_clo(env8585))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8585))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8462);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
function_ptr();
return nullptr;
}

void* lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void* lam8586_fptr() // lam8586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env8587))[5];
//not do dummy comment
void* cons = (decode_clo(env8587))[4];
//not do dummy comment
void* map = (decode_clo(env8587))[3];
//not do dummy comment
void* a8382 = (decode_clo(env8587))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8587))[1];

//creating new closure instance
void** clo8818 = alloc_clo(lam8584_fptr, 3);

//setting env list
clo8818[1] = kont8462;
clo8818[2] = a8382;
clo8818[3] = cons;
void* f8464 = encode_clo(clo8818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8464;
arg_buffer[3] = proc;
arg_buffer[4] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8589))[6];
//not do dummy comment
void* lst = (decode_clo(env8589))[5];
//not do dummy comment
void* proc = (decode_clo(env8589))[4];
//not do dummy comment
void* cons = (decode_clo(env8589))[3];
//not do dummy comment
void* map = (decode_clo(env8589))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8589))[1];

//creating new closure instance
void** clo8820 = alloc_clo(lam8586_fptr, 5);

//setting env list
clo8820[1] = kont8462;
clo8820[2] = a8382;
clo8820[3] = map;
clo8820[4] = cons;
clo8820[5] = proc;
void* f8465 = encode_clo(clo8820);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8591))[6];
//not do dummy comment
void* lst = (decode_clo(env8591))[5];
//not do dummy comment
void* proc = (decode_clo(env8591))[4];
//not do dummy comment
void* cons = (decode_clo(env8591))[3];
//not do dummy comment
void* map = (decode_clo(env8591))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8591))[1];

//creating new closure instance
void** clo8822 = alloc_clo(lam8588_fptr, 6);

//setting env list
clo8822[1] = kont8462;
clo8822[2] = map;
clo8822[3] = cons;
clo8822[4] = proc;
clo8822[5] = lst;
clo8822[6] = cdr;
void* f8466 = encode_clo(clo8822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8466;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8593))[8];
//not do dummy comment
void* proc = (decode_clo(env8593))[7];
//not do dummy comment
void* car = (decode_clo(env8593))[6];
//not do dummy comment
void* cons = (decode_clo(env8593))[5];
//not do dummy comment
void* list = (decode_clo(env8593))[4];
//not do dummy comment
void* cdr = (decode_clo(env8593))[3];
//not do dummy comment
void* map = (decode_clo(env8593))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8593))[1];

//if-clause
bool if_guard8823 = is_true(a8379);
if(if_guard8823)
{

//creating new closure instance
void** clo8825 = alloc_clo(lam8582_fptr, 1);

//setting env list
clo8825[1] = kont8462;
void* f8463 = encode_clo(clo8825);



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
void** clo8827 = alloc_clo(lam8590_fptr, 6);

//setting env list
clo8827[1] = kont8462;
clo8827[2] = map;
clo8827[3] = cons;
clo8827[4] = proc;
clo8827[5] = lst;
clo8827[6] = cdr;
void* f8467 = encode_clo(clo8827);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

}

void* lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8594 = arg_buffer[1];
//reading env and args
void* kont8462 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8829 = alloc_clo(lam8592_fptr, 8);

//setting env list
clo8829[1] = kont8462;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8829[2] = map;
clo8829[3] = cdr;
clo8829[4] = list;
clo8829[5] = cons;
clo8829[6] = car;
clo8829[7] = proc;
clo8829[8] = lst;
void* f8468 = encode_clo(clo8829);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8595_fptr() // lam8595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8596 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8469 = (decode_clo(env8596))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8469);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8469))[0]);
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8598))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8598))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8598))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8469);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8469))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8600))[5];
//not do dummy comment
void* filter = (decode_clo(env8600))[4];
//not do dummy comment
void* cons = (decode_clo(env8600))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8600))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8600))[1];

//creating new closure instance
void** clo8831 = alloc_clo(lam8597_fptr, 3);

//setting env list
clo8831[1] = kont8469;
clo8831[2] = a8389;
clo8831[3] = cons;
void* f8471 = encode_clo(clo8831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8471;
arg_buffer[3] = op;
arg_buffer[4] = a8390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8602))[6];
//not do dummy comment
void* lst = (decode_clo(env8602))[5];
//not do dummy comment
void* op = (decode_clo(env8602))[4];
//not do dummy comment
void* kont8469 = (decode_clo(env8602))[3];
//not do dummy comment
void* filter = (decode_clo(env8602))[2];
//not do dummy comment
void* cons = (decode_clo(env8602))[1];

//creating new closure instance
void** clo8833 = alloc_clo(lam8599_fptr, 5);

//setting env list
clo8833[1] = kont8469;
clo8833[2] = a8389;
clo8833[3] = cons;
clo8833[4] = filter;
clo8833[5] = op;
void* f8472 = encode_clo(clo8833);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(1);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8604))[3];
//not do dummy comment
void* kont8469 = (decode_clo(env8604))[2];
//not do dummy comment
void* filter = (decode_clo(env8604))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8469;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8606))[7];
//not do dummy comment
void* lst = (decode_clo(env8606))[6];
//not do dummy comment
void* op = (decode_clo(env8606))[5];
//not do dummy comment
void* kont8469 = (decode_clo(env8606))[4];
//not do dummy comment
void* cons = (decode_clo(env8606))[3];
//not do dummy comment
void* filter = (decode_clo(env8606))[2];
//not do dummy comment
void* car = (decode_clo(env8606))[1];

//if-clause
bool if_guard8834 = is_true(a8388);
if(if_guard8834)
{

//creating new closure instance
void** clo8836 = alloc_clo(lam8601_fptr, 6);

//setting env list
clo8836[1] = cons;
clo8836[2] = filter;
clo8836[3] = kont8469;
clo8836[4] = op;
clo8836[5] = lst;
clo8836[6] = cdr;
void* f8473 = encode_clo(clo8836);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8838 = alloc_clo(lam8603_fptr, 3);

//setting env list
clo8838[1] = filter;
clo8838[2] = kont8469;
clo8838[3] = op;
void* f8474 = encode_clo(clo8838);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
function_ptr();
return nullptr;
}

}

void* lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void* lam8607_fptr() // lam8607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8608 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8608))[7];
//not do dummy comment
void* lst = (decode_clo(env8608))[6];
//not do dummy comment
void* op = (decode_clo(env8608))[5];
//not do dummy comment
void* kont8469 = (decode_clo(env8608))[4];
//not do dummy comment
void* cons = (decode_clo(env8608))[3];
//not do dummy comment
void* filter = (decode_clo(env8608))[2];
//not do dummy comment
void* car = (decode_clo(env8608))[1];

//creating new closure instance
void** clo8840 = alloc_clo(lam8605_fptr, 7);

//setting env list
clo8840[1] = car;
clo8840[2] = filter;
clo8840[3] = cons;
clo8840[4] = kont8469;
clo8840[5] = op;
clo8840[6] = lst;
clo8840[7] = cdr;
void* f8475 = encode_clo(clo8840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8475;
arg_buffer[3] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8610))[8];
//not do dummy comment
void* op = (decode_clo(env8610))[7];
//not do dummy comment
void* kont8469 = (decode_clo(env8610))[6];
//not do dummy comment
void* cons = (decode_clo(env8610))[5];
//not do dummy comment
void* list = (decode_clo(env8610))[4];
//not do dummy comment
void* cdr = (decode_clo(env8610))[3];
//not do dummy comment
void* filter = (decode_clo(env8610))[2];
//not do dummy comment
void* car = (decode_clo(env8610))[1];

//if-clause
bool if_guard8841 = is_true(a8385);
if(if_guard8841)
{

//creating new closure instance
void** clo8843 = alloc_clo(lam8595_fptr, 1);

//setting env list
clo8843[1] = kont8469;
void* f8470 = encode_clo(clo8843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8470;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8845 = alloc_clo(lam8607_fptr, 7);

//setting env list
clo8845[1] = car;
clo8845[2] = filter;
clo8845[3] = cons;
clo8845[4] = kont8469;
clo8845[5] = op;
clo8845[6] = lst;
clo8845[7] = cdr;
void* f8476 = encode_clo(clo8845);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

}

void* lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8611 = arg_buffer[1];
//reading env and args
void* kont8469 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8847 = alloc_clo(lam8609_fptr, 8);

//setting env list
clo8847[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8847[2] = filter;
clo8847[3] = cdr;
clo8847[4] = list;
clo8847[5] = cons;
clo8847[6] = kont8469;
clo8847[7] = op;
clo8847[8] = lst;
void* f8477 = encode_clo(clo8847);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8612_fptr() // lam8612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8613 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8395 = (decode_clo(env8613))[3];
//not do dummy comment
void* drop = (decode_clo(env8613))[2];
//not do dummy comment
void* kont8478 = (decode_clo(env8613))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8478;
arg_buffer[3] = a8395;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void* lam8615_fptr() // lam8615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8616 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8616))[4];
//not do dummy comment
void* kont8478 = (decode_clo(env8616))[3];
//not do dummy comment
void* n = (decode_clo(env8616))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8616))[1];
mpz_t* mpzvar8848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8848, "1", 10);
void* a8396 = encode_mpz(mpzvar8848);

//creating new closure instance
void** clo8850 = alloc_clo(lam8612_fptr, 3);

//setting env list
clo8850[1] = kont8478;
clo8850[2] = drop;
clo8850[3] = a8395;
void* f8479 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8479);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
function_ptr();
return nullptr;
}

void* lam8615 = encode_clo(alloc_clo(lam8615_fptr, 0));

void* lam8617_fptr() // lam8617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8618 = arg_buffer[1];
//reading env and args
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8618))[6];
//not do dummy comment
void* kont8478 = (decode_clo(env8618))[5];
//not do dummy comment
void* n = (decode_clo(env8618))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8618))[3];
//not do dummy comment
void* lst = (decode_clo(env8618))[2];
//not do dummy comment
void* drop = (decode_clo(env8618))[1];

//if-clause
bool if_guard8851 = is_true(a8394);
if(if_guard8851)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8478);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8478))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8853 = alloc_clo(lam8615_fptr, 4);

//setting env list
clo8853[1] = _u45;
clo8853[2] = n;
clo8853[3] = kont8478;
clo8853[4] = drop;
void* f8480 = encode_clo(clo8853);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8480);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
function_ptr();
return nullptr;
}

}

void* lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8620 = arg_buffer[1];
//reading env and args
void* kont8478 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8854 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8854, "0", 10);
void* a8393 = encode_mpz(mpzvar8854);

//creating new closure instance
void** clo8856 = alloc_clo(lam8617_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8856[1] = drop;
clo8856[2] = lst;
clo8856[3] = _u45;
clo8856[4] = n;
clo8856[5] = kont8478;
clo8856[6] = cdr;
void* f8481 = encode_clo(clo8856);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8481);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8621_fptr() // lam8621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8622 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8399 = (decode_clo(env8622))[3];
//not do dummy comment
void* kont8482 = (decode_clo(env8622))[2];
//not do dummy comment
void* proc = (decode_clo(env8622))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8482;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8624))[5];
//not do dummy comment
void* a8399 = (decode_clo(env8624))[4];
//not do dummy comment
void* kont8482 = (decode_clo(env8624))[3];
//not do dummy comment
void* proc = (decode_clo(env8624))[2];
//not do dummy comment
void* acc = (decode_clo(env8624))[1];

//creating new closure instance
void** clo8858 = alloc_clo(lam8621_fptr, 3);

//setting env list
clo8858[1] = proc;
clo8858[2] = kont8482;
clo8858[3] = a8399;
void* f8483 = encode_clo(clo8858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8483;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8626))[6];
//not do dummy comment
void* kont8482 = (decode_clo(env8626))[5];
//not do dummy comment
void* foldr = (decode_clo(env8626))[4];
//not do dummy comment
void* lst = (decode_clo(env8626))[3];
//not do dummy comment
void* proc = (decode_clo(env8626))[2];
//not do dummy comment
void* acc = (decode_clo(env8626))[1];

//creating new closure instance
void** clo8860 = alloc_clo(lam8623_fptr, 5);

//setting env list
clo8860[1] = acc;
clo8860[2] = proc;
clo8860[3] = kont8482;
clo8860[4] = a8399;
clo8860[5] = foldr;
void* f8484 = encode_clo(clo8860);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8484);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8484))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8628))[7];
//not do dummy comment
void* kont8482 = (decode_clo(env8628))[6];
//not do dummy comment
void* car = (decode_clo(env8628))[5];
//not do dummy comment
void* foldr = (decode_clo(env8628))[4];
//not do dummy comment
void* lst = (decode_clo(env8628))[3];
//not do dummy comment
void* proc = (decode_clo(env8628))[2];
//not do dummy comment
void* acc = (decode_clo(env8628))[1];

//if-clause
bool if_guard8861 = is_true(a8398);
if(if_guard8861)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8482);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8482))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8863 = alloc_clo(lam8625_fptr, 6);

//setting env list
clo8863[1] = acc;
clo8863[2] = proc;
clo8863[3] = lst;
clo8863[4] = foldr;
clo8863[5] = kont8482;
clo8863[6] = cdr;
void* f8485 = encode_clo(clo8863);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8485);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8485))[0]);
function_ptr();
return nullptr;
}

}

void* lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8629 = arg_buffer[1];
//reading env and args
void* kont8482 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8865 = alloc_clo(lam8627_fptr, 7);

//setting env list
clo8865[1] = acc;
clo8865[2] = proc;
clo8865[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8865[4] = foldr;
clo8865[5] = car;
clo8865[6] = kont8482;
clo8865[7] = cdr;
void* f8486 = encode_clo(clo8865);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8486);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8486))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8630_fptr() // lam8630 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8631 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8403 = (decode_clo(env8631))[3];
//not do dummy comment
void* cons = (decode_clo(env8631))[2];
//not do dummy comment
void* kont8487 = (decode_clo(env8631))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8487);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8487))[0]);
function_ptr();
return nullptr;
}

void* lam8630 = encode_clo(alloc_clo(lam8630_fptr, 0));

void* lam8632_fptr() // lam8632 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8633 = arg_buffer[1];
//reading env and args
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8633))[5];
//not do dummy comment
void* a8403 = (decode_clo(env8633))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8633))[3];
//not do dummy comment
void* cons = (decode_clo(env8633))[2];
//not do dummy comment
void* kont8487 = (decode_clo(env8633))[1];

//creating new closure instance
void** clo8867 = alloc_clo(lam8630_fptr, 3);

//setting env list
clo8867[1] = kont8487;
clo8867[2] = cons;
clo8867[3] = a8403;
void* f8488 = encode_clo(clo8867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8488;
arg_buffer[3] = a8404;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8632 = encode_clo(alloc_clo(lam8632_fptr, 0));

void* lam8634_fptr() // lam8634 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8635 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8635))[6];
//not do dummy comment
void* append = (decode_clo(env8635))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8635))[4];
//not do dummy comment
void* lst1 = (decode_clo(env8635))[3];
//not do dummy comment
void* cons = (decode_clo(env8635))[2];
//not do dummy comment
void* kont8487 = (decode_clo(env8635))[1];

//creating new closure instance
void** clo8869 = alloc_clo(lam8632_fptr, 5);

//setting env list
clo8869[1] = kont8487;
clo8869[2] = cons;
clo8869[3] = lst2;
clo8869[4] = a8403;
clo8869[5] = append;
void* f8489 = encode_clo(clo8869);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8489);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8489))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8637))[7];
//not do dummy comment
void* append = (decode_clo(env8637))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8637))[5];
//not do dummy comment
void* lst1 = (decode_clo(env8637))[4];
//not do dummy comment
void* car = (decode_clo(env8637))[3];
//not do dummy comment
void* cons = (decode_clo(env8637))[2];
//not do dummy comment
void* kont8487 = (decode_clo(env8637))[1];

//if-clause
bool if_guard8870 = is_true(a8402);
if(if_guard8870)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8487);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8487))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8872 = alloc_clo(lam8634_fptr, 6);

//setting env list
clo8872[1] = kont8487;
clo8872[2] = cons;
clo8872[3] = lst1;
clo8872[4] = lst2;
clo8872[5] = append;
clo8872[6] = cdr;
void* f8490 = encode_clo(clo8872);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8490);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8490))[0]);
function_ptr();
return nullptr;
}

}

void* lam8636 = encode_clo(alloc_clo(lam8636_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8638 = arg_buffer[1];
//reading env and args
void* kont8487 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8874 = alloc_clo(lam8636_fptr, 7);

//setting env list
clo8874[1] = kont8487;
clo8874[2] = cons;
clo8874[3] = car;
clo8874[4] = lst1;
clo8874[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8874[6] = append;
clo8874[7] = cdr;
void* f8491 = encode_clo(clo8874);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8491);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8491))[0]);
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
void* x8876 = apply_prim_hash(lst8878);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8875);
arg_buffer[2] = x8876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8875))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void* hash_u45set_fptr() // hash-set 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8639 = arg_buffer[1];
//reading env and args
void* kont8492 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* xy8406 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8492);
arg_buffer[2] = xy8406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void* hash_u45keys_fptr() // hash-keys 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8640 = arg_buffer[1];
//reading env and args
void* kont8493 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8407 = prim_hash_u45keys(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8493);
arg_buffer[2] = xy8407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void* hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8641 = arg_buffer[1];
//reading env and args
void* kont8494 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* xy8408 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8494);
arg_buffer[2] = xy8408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8494))[0]);
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
void* _8642 = arg_buffer[1];
//reading env and args
void* kont8495 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8409 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8495);
arg_buffer[2] = xy8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8495))[0]);
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
void* x8880 = apply_prim_set(lst8882);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8879);
arg_buffer[2] = x8880;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8879))[0]);
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
void* _8643 = arg_buffer[1];
//reading env and args
void* kont8496 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* xy8410 = prim_set_u45_u62list(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8496);
arg_buffer[2] = xy8410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8496))[0]);
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
void* _8644 = arg_buffer[1];
//reading env and args
void* kont8497 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* xy8411 = prim_list_u45_u62set(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8497);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8497))[0]);
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
void* _8645 = arg_buffer[1];
//reading env and args
void* kont8498 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* xy8412 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8498);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8498))[0]);
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
void* _8646 = arg_buffer[1];
//reading env and args
void* kont8499 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8413 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8499);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8499))[0]);
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
void* _8647 = arg_buffer[1];
//reading env and args
void* kont8500 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8414 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8500);
arg_buffer[2] = xy8414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8500))[0]);
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
void* _8648 = arg_buffer[1];
//reading env and args
void* kont8501 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8415 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8501);
arg_buffer[2] = xy8415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8501))[0]);
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
void* _8649 = arg_buffer[1];
//reading env and args
void* kont8502 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8416 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8502);
arg_buffer[2] = xy8416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8502))[0]);
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
void* _8650 = arg_buffer[1];
//reading env and args
void* kont8503 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8417 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8503);
arg_buffer[2] = xy8417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8503))[0]);
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
void* _8651 = arg_buffer[1];
//reading env and args
void* kont8504 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8418 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8504);
arg_buffer[2] = xy8418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8504))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam8652_fptr() // lam8652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8653 = arg_buffer[1];
//reading env and args
void* a8425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8505 = (decode_clo(env8653))[2];
//not do dummy comment
void* hash_u45ref = (decode_clo(env8653))[1];
void* cps_u45lst8506 = prim_cons(kont8505, a8425);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = cps_u45lst8506;
arg_buffer[0] = reinterpret_cast<void*>(2);
hash_u45ref_fptr();
return nullptr;
}

void* lam8652 = encode_clo(alloc_clo(lam8652_fptr, 0));

void* lam8655_fptr() // lam8655 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8656 = arg_buffer[1];
//reading env and args
void* a8423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env8656))[3];
//not do dummy comment
void* list = (decode_clo(env8656))[2];
//not do dummy comment
void* kont8505 = (decode_clo(env8656))[1];
void* a8424 = encode_str(new(GC) std::string("work"));

//creating new closure instance
void** clo8884 = alloc_clo(lam8652_fptr, 2);

//setting env list
clo8884[1] = hash_u45ref;
clo8884[2] = kont8505;
void* f8507 = encode_clo(clo8884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8507;
arg_buffer[3] = a8423;
arg_buffer[4] = a8424;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8655 = encode_clo(alloc_clo(lam8655_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8661 = arg_buffer[1];
//reading env and args
void* kont8505 = arg_buffer[2];
//Dummy comment
void* a8419 = encode_str(new(GC) std::string("work"));
mpf_t* mpfvar8885 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8885, "80.9", 10);
void* a8420 = encode_mpf(mpfvar8885);
mpz_t* mpzvar8886 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8886, "10", 10);
void* a8421 = encode_mpz(mpzvar8886);
void* a8422 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo8888 = alloc_clo(lam8655_fptr, 3);

//setting env list
clo8888[1] = kont8505;
clo8888[2] = list;
clo8888[3] = hash_u45ref;
void* f8508 = encode_clo(clo8888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f8508;
arg_buffer[3] = a8419;
arg_buffer[4] = a8420;
arg_buffer[5] = a8421;
arg_buffer[6] = a8422;
arg_buffer[0] = reinterpret_cast<void*>(6);
hash_fptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8662_fptr() // lam8662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8663 = arg_buffer[1];
//reading env and args
void* xy8426 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8509 = (decode_clo(env8663))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8509);
arg_buffer[2] = xy8426;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8509))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8662 = encode_clo(alloc_clo(lam8662_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8664 = arg_buffer[1];
//reading env and args
void* kont8509 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8890 = alloc_clo(lam8662_fptr, 1);

//setting env list
clo8890[1] = kont8509;
void* f8510 = encode_clo(clo8890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8510;
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

