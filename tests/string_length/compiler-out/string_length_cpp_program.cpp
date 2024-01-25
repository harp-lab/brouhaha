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
void* _env8628 = arg_buffer[1];
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

void* kont8626 = prim_car(lst);
void* lst8629 = prim_cdr(lst);
void* x8627 = apply_prim__u43(lst8629);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8626);
arg_buffer[2] = x8627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8626))[0]);
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
void* _env8632 = arg_buffer[1];
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

void* kont8630 = prim_car(lst);
void* lst8633 = prim_cdr(lst);
void* x8631 = apply_prim__u45(lst8633);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8630);
arg_buffer[2] = x8631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8630))[0]);
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
void* _env8636 = arg_buffer[1];
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

void* kont8634 = prim_car(lst);
void* lst8637 = prim_cdr(lst);
void* x8635 = apply_prim__u42(lst8637);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8634);
arg_buffer[2] = x8635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8634))[0]);
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
void* _env8640 = arg_buffer[1];
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

void* kont8638 = prim_car(lst);
void* lst8641 = prim_cdr(lst);
void* x8639 = apply_prim__u47(lst8641);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8638);
arg_buffer[2] = x8639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8638))[0]);
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
void* _env8644 = arg_buffer[1];
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

void* kont8642 = prim_car(lst);
void* lst8645 = prim_cdr(lst);
void* x8643 = apply_prim__u61(lst8645);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8642);
arg_buffer[2] = x8643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8642))[0]);
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
void* _env8648 = arg_buffer[1];
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

void* kont8646 = prim_car(lst);
void* lst8649 = prim_cdr(lst);
void* x8647 = apply_prim__u62(lst8649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8646);
arg_buffer[2] = x8647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8646))[0]);
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
void* _env8652 = arg_buffer[1];
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

void* kont8650 = prim_car(lst);
void* lst8653 = prim_cdr(lst);
void* x8651 = apply_prim__u60(lst8653);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8650);
arg_buffer[2] = x8651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8650))[0]);
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
void* _env8656 = arg_buffer[1];
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

void* kont8654 = prim_car(lst);
void* lst8657 = prim_cdr(lst);
void* x8655 = apply_prim__u60_u61(lst8657);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8654);
arg_buffer[2] = x8655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8654))[0]);
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
void* _env8660 = arg_buffer[1];
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

void* kont8658 = prim_car(lst);
void* lst8661 = prim_cdr(lst);
void* x8659 = apply_prim__u62_u61(lst8661);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8658);
arg_buffer[2] = x8659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8658))[0]);
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
void* _env8664 = arg_buffer[1];
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

void* kont8662 = prim_car(lst);
void* lst8665 = prim_cdr(lst);
void* x8663 = apply_prim_modulo(lst8665);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8662);
arg_buffer[2] = x8663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8662))[0]);
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
void* _env8668 = arg_buffer[1];
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

void* kont8666 = prim_car(lst);
void* lst8669 = prim_cdr(lst);
void* x8667 = apply_prim_null_u63(lst8669);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8666);
arg_buffer[2] = x8667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8666))[0]);
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
void* _env8672 = arg_buffer[1];
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

void* kont8670 = prim_car(lst);
void* lst8673 = prim_cdr(lst);
void* x8671 = apply_prim_equal_u63(lst8673);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8670);
arg_buffer[2] = x8671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8670))[0]);
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
void* _env8676 = arg_buffer[1];
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

void* kont8674 = prim_car(lst);
void* lst8677 = prim_cdr(lst);
void* x8675 = apply_prim_eq_u63(lst8677);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8674);
arg_buffer[2] = x8675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8674))[0]);
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
void* _env8680 = arg_buffer[1];
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

void* kont8678 = prim_car(lst);
void* lst8681 = prim_cdr(lst);
void* x8679 = apply_prim_exact_u45floor(lst8681);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8678);
arg_buffer[2] = x8679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8678))[0]);
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
void* _env8684 = arg_buffer[1];
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

void* kont8682 = prim_car(lst);
void* lst8685 = prim_cdr(lst);
void* x8683 = apply_prim_exact_u45ceiling(lst8685);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8682);
arg_buffer[2] = x8683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682))[0]);
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
void* _env8688 = arg_buffer[1];
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

void* kont8686 = prim_car(lst);
void* lst8689 = prim_cdr(lst);
void* x8687 = apply_prim_exact_u45round(lst8689);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8686);
arg_buffer[2] = x8687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8686))[0]);
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
void* _env8692 = arg_buffer[1];
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

void* kont8690 = prim_car(lst);
void* lst8693 = prim_cdr(lst);
void* x8691 = apply_prim_cons(lst8693);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8690);
arg_buffer[2] = x8691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8690))[0]);
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
void* _env8696 = arg_buffer[1];
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

void* kont8694 = prim_car(lst);
void* lst8697 = prim_cdr(lst);
void* x8695 = apply_prim_car(lst8697);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8694);
arg_buffer[2] = x8695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8694))[0]);
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
void* _env8700 = arg_buffer[1];
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

void* kont8698 = prim_car(lst);
void* lst8701 = prim_cdr(lst);
void* x8699 = apply_prim_cdr(lst8701);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8698);
arg_buffer[2] = x8699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8698))[0]);
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
void* _env8704 = arg_buffer[1];
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

void* kont8702 = prim_car(lst);
void* lst8705 = prim_cdr(lst);
void* x8703 = apply_prim_float_u45_u62int(lst8705);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8702);
arg_buffer[2] = x8703;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8702))[0]);
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
void* _env8708 = arg_buffer[1];
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

void* kont8706 = prim_car(lst);
void* lst8709 = prim_cdr(lst);
void* x8707 = apply_prim_int_u45_u62float(lst8709);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8706);
arg_buffer[2] = x8707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8706))[0]);
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
void* _env8712 = arg_buffer[1];
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

void* kont8710 = prim_car(lst);
void* lst8713 = prim_cdr(lst);
void* x8711 = apply_prim_hash(lst8713);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8710);
arg_buffer[2] = x8711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8710))[0]);
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
void* _env8716 = arg_buffer[1];
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

void* kont8714 = prim_car(lst);
void* lst8717 = prim_cdr(lst);
void* x8715 = apply_prim_hash_u45ref(lst8717);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8714);
arg_buffer[2] = x8715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8714))[0]);
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
void* _env8720 = arg_buffer[1];
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

void* kont8718 = prim_car(lst);
void* lst8721 = prim_cdr(lst);
void* x8719 = apply_prim_hash_u45set(lst8721);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8718);
arg_buffer[2] = x8719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8718))[0]);
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
void* _env8724 = arg_buffer[1];
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

void* kont8722 = prim_car(lst);
void* lst8725 = prim_cdr(lst);
void* x8723 = apply_prim_hash_u45keys(lst8725);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8722);
arg_buffer[2] = x8723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8722))[0]);
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
void* _env8728 = arg_buffer[1];
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

void* kont8726 = prim_car(lst);
void* lst8729 = prim_cdr(lst);
void* x8727 = apply_prim_hash_u45has_u45key_u63(lst8729);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8726);
arg_buffer[2] = x8727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8726))[0]);
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
void* _env8732 = arg_buffer[1];
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

void* kont8730 = prim_car(lst);
void* lst8733 = prim_cdr(lst);
void* x8731 = apply_prim_hash_u45count(lst8733);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8730);
arg_buffer[2] = x8731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8730))[0]);
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
void* _env8736 = arg_buffer[1];
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

void* kont8734 = prim_car(lst);
void* lst8737 = prim_cdr(lst);
void* x8735 = apply_prim_set(lst8737);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8734);
arg_buffer[2] = x8735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8734))[0]);
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
void* _env8740 = arg_buffer[1];
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

void* kont8738 = prim_car(lst);
void* lst8741 = prim_cdr(lst);
void* x8739 = apply_prim_set_u45_u62list(lst8741);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8738);
arg_buffer[2] = x8739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8738))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void* list_u45_u62set_fptr() // list->set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8744 = arg_buffer[1];
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

void* kont8742 = prim_car(lst);
void* lst8745 = prim_cdr(lst);
void* x8743 = apply_prim_list_u45_u62set(lst8745);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8742);
arg_buffer[2] = x8743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8742))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8748 = arg_buffer[1];
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

void* kont8746 = prim_car(lst);
void* lst8749 = prim_cdr(lst);
void* x8747 = apply_prim_set_u45add(lst8749);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8746);
arg_buffer[2] = x8747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8746))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8752 = arg_buffer[1];
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

void* kont8750 = prim_car(lst);
void* lst8753 = prim_cdr(lst);
void* x8751 = apply_prim_string_u63(lst8753);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8750);
arg_buffer[2] = x8751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8750))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8756 = arg_buffer[1];
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

void* kont8754 = prim_car(lst);
void* lst8757 = prim_cdr(lst);
void* x8755 = apply_prim_string_u45length(lst8757);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8754);
arg_buffer[2] = x8755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8754))[0]);
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
void* _8488 = arg_buffer[1];
//reading env and args
void* kont8413 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* xy8344 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8413);
arg_buffer[2] = xy8344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8413))[0]);
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
void* _8489 = arg_buffer[1];
//reading env and args
void* kont8414 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* xy8345 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8414);
arg_buffer[2] = xy8345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8414))[0]);
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
void* _8490 = arg_buffer[1];
//reading env and args
void* kont8415 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8346 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[2] = xy8346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
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
void* _8491 = arg_buffer[1];
//reading env and args
void* kont8416 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8347 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8416);
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8416))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8492 = arg_buffer[1];
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

void* kont8417 = prim_car(x);
void* x8487 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8417);
arg_buffer[2] = x8487;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8493_fptr() // lam8493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8494 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8348 = (decode_clo(env8494))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8494))[2];
//not do dummy comment
void* kont8418 = (decode_clo(env8494))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8348, a8350);
arg_buffer[1]=reinterpret_cast<void*>(kont8418);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8418))[0]);
function_ptr();
return nullptr;
}

void* lam8493 = encode_clo(alloc_clo(lam8493_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8497 = arg_buffer[1];
//reading env and args
void* kont8418 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8758 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8758, "0", 10);
void* a8348 = encode_mpz(mpzvar8758);
mpz_t* mpzvar8759 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8759, "2", 10);
void* a8349 = encode_mpz(mpzvar8759);

//creating new closure instance
void** clo8761 = alloc_clo(lam8493_fptr, 3);

//setting env list
clo8761[1] = kont8418;
clo8761[2] = equal_u63;
clo8761[3] = a8348;
void* f8419 = encode_clo(clo8761);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8349);
arg_buffer[1]=reinterpret_cast<void*>(f8419);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8498_fptr() // lam8498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8499 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8351 = (decode_clo(env8499))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8499))[2];
//not do dummy comment
void* kont8420 = (decode_clo(env8499))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8351, a8353);
arg_buffer[1]=reinterpret_cast<void*>(kont8420);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8420))[0]);
function_ptr();
return nullptr;
}

void* lam8498 = encode_clo(alloc_clo(lam8498_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8502 = arg_buffer[1];
//reading env and args
void* kont8420 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8762 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8762, "1", 10);
void* a8351 = encode_mpz(mpzvar8762);
mpz_t* mpzvar8763 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8763, "2", 10);
void* a8352 = encode_mpz(mpzvar8763);

//creating new closure instance
void** clo8765 = alloc_clo(lam8498_fptr, 3);

//setting env list
clo8765[1] = kont8420;
clo8765[2] = equal_u63;
clo8765[3] = a8351;
void* f8421 = encode_clo(clo8765);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8352);
arg_buffer[1]=reinterpret_cast<void*>(f8421);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8421))[0]);
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8505_fptr() // lam8505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8506 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env8506))[3];
//not do dummy comment
void* kont8422 = (decode_clo(env8506))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8506))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8422;
arg_buffer[3] = x;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8505 = encode_clo(alloc_clo(lam8505_fptr, 0));

void* lam8507_fptr() // lam8507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8508 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8508))[5];
//not do dummy comment
void* lst = (decode_clo(env8508))[4];
//not do dummy comment
void* x = (decode_clo(env8508))[3];
//not do dummy comment
void* kont8422 = (decode_clo(env8508))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8508))[1];

//if-clause
bool if_guard8766 = is_true(a8357);
if(if_guard8766)
{
void* xy8358 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8422);
arg_buffer[2] = xy8358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8422))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8768 = alloc_clo(lam8505_fptr, 3);

//setting env list
clo8768[1] = member_u63;
clo8768[2] = kont8422;
clo8768[3] = x;
void* f8423 = encode_clo(clo8768);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8423);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8423))[0]);
function_ptr();
return nullptr;
}

}

void* lam8507 = encode_clo(alloc_clo(lam8507_fptr, 0));

void* lam8509_fptr() // lam8509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8510 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8510))[6];
//not do dummy comment
void* lst = (decode_clo(env8510))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8510))[4];
//not do dummy comment
void* x = (decode_clo(env8510))[3];
//not do dummy comment
void* kont8422 = (decode_clo(env8510))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8510))[1];

//creating new closure instance
void** clo8770 = alloc_clo(lam8507_fptr, 5);

//setting env list
clo8770[1] = member_u63;
clo8770[2] = kont8422;
clo8770[3] = x;
clo8770[4] = lst;
clo8770[5] = cdr;
void* f8424 = encode_clo(clo8770);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8356, x);
arg_buffer[1]=reinterpret_cast<void*>(f8424);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8424))[0]);
function_ptr();
return nullptr;
}

void* lam8509 = encode_clo(alloc_clo(lam8509_fptr, 0));

void* lam8511_fptr() // lam8511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8512 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8512))[7];
//not do dummy comment
void* lst = (decode_clo(env8512))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8512))[5];
//not do dummy comment
void* x = (decode_clo(env8512))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8512))[3];
//not do dummy comment
void* kont8422 = (decode_clo(env8512))[2];
//not do dummy comment
void* car = (decode_clo(env8512))[1];

//if-clause
bool if_guard8771 = is_true(a8354);
if(if_guard8771)
{
void* xy8355 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8422);
arg_buffer[2] = xy8355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8422))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8773 = alloc_clo(lam8509_fptr, 6);

//setting env list
clo8773[1] = member_u63;
clo8773[2] = kont8422;
clo8773[3] = x;
clo8773[4] = equal_u63;
clo8773[5] = lst;
clo8773[6] = cdr;
void* f8425 = encode_clo(clo8773);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8425);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8425))[0]);
function_ptr();
return nullptr;
}

}

void* lam8511 = encode_clo(alloc_clo(lam8511_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8513 = arg_buffer[1];
//reading env and args
void* kont8422 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8775 = alloc_clo(lam8511_fptr, 7);

//setting env list
clo8775[1] = car;
clo8775[2] = kont8422;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8775[3] = member_u63;
clo8775[4] = x;
clo8775[5] = equal_u63;
clo8775[6] = lst;
clo8775[7] = cdr;
void* f8426 = encode_clo(clo8775);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8514_fptr() // lam8514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8515 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8362 = (decode_clo(env8515))[4];
//not do dummy comment
void* kont8427 = (decode_clo(env8515))[3];
//not do dummy comment
void* fun = (decode_clo(env8515))[2];
//not do dummy comment
void* foldl = (decode_clo(env8515))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8427;
arg_buffer[3] = fun;
arg_buffer[4] = a8362;
arg_buffer[5] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void* lam8516_fptr() // lam8516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8517 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8517))[5];
//not do dummy comment
void* kont8427 = (decode_clo(env8517))[4];
//not do dummy comment
void* lst = (decode_clo(env8517))[3];
//not do dummy comment
void* fun = (decode_clo(env8517))[2];
//not do dummy comment
void* foldl = (decode_clo(env8517))[1];

//creating new closure instance
void** clo8777 = alloc_clo(lam8514_fptr, 4);

//setting env list
clo8777[1] = foldl;
clo8777[2] = fun;
clo8777[3] = kont8427;
clo8777[4] = a8362;
void* f8428 = encode_clo(clo8777);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
function_ptr();
return nullptr;
}

void* lam8516 = encode_clo(alloc_clo(lam8516_fptr, 0));

void* lam8518_fptr() // lam8518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8519 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8519))[6];
//not do dummy comment
void* kont8427 = (decode_clo(env8519))[5];
//not do dummy comment
void* lst = (decode_clo(env8519))[4];
//not do dummy comment
void* fun = (decode_clo(env8519))[3];
//not do dummy comment
void* acc = (decode_clo(env8519))[2];
//not do dummy comment
void* foldl = (decode_clo(env8519))[1];

//creating new closure instance
void** clo8779 = alloc_clo(lam8516_fptr, 5);

//setting env list
clo8779[1] = foldl;
clo8779[2] = fun;
clo8779[3] = lst;
clo8779[4] = kont8427;
clo8779[5] = cdr;
void* f8429 = encode_clo(clo8779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8429;
arg_buffer[3] = a8361;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8518 = encode_clo(alloc_clo(lam8518_fptr, 0));

void* lam8520_fptr() // lam8520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8521 = arg_buffer[1];
//reading env and args
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8521))[7];
//not do dummy comment
void* kont8427 = (decode_clo(env8521))[6];
//not do dummy comment
void* lst = (decode_clo(env8521))[5];
//not do dummy comment
void* fun = (decode_clo(env8521))[4];
//not do dummy comment
void* acc = (decode_clo(env8521))[3];
//not do dummy comment
void* car = (decode_clo(env8521))[2];
//not do dummy comment
void* foldl = (decode_clo(env8521))[1];

//if-clause
bool if_guard8780 = is_true(a8360);
if(if_guard8780)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8427);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8427))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8782 = alloc_clo(lam8518_fptr, 6);

//setting env list
clo8782[1] = foldl;
clo8782[2] = acc;
clo8782[3] = fun;
clo8782[4] = lst;
clo8782[5] = kont8427;
clo8782[6] = cdr;
void* f8430 = encode_clo(clo8782);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8430);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
function_ptr();
return nullptr;
}

}

void* lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8522 = arg_buffer[1];
//reading env and args
void* kont8427 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8784 = alloc_clo(lam8520_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8784[1] = foldl;
clo8784[2] = car;
clo8784[3] = acc;
clo8784[4] = fun;
clo8784[5] = lst;
clo8784[6] = kont8427;
clo8784[7] = cdr;
void* f8431 = encode_clo(clo8784);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8523_fptr() // lam8523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8365 = (decode_clo(env8524))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8524))[2];
//not do dummy comment
void* kont8432 = (decode_clo(env8524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8432;
arg_buffer[3] = a8365;
arg_buffer[4] = a8367;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void* lam8525_fptr() // lam8525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8526 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8365 = (decode_clo(env8526))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8526))[4];
//not do dummy comment
void* cons = (decode_clo(env8526))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8526))[2];
//not do dummy comment
void* kont8432 = (decode_clo(env8526))[1];

//creating new closure instance
void** clo8786 = alloc_clo(lam8523_fptr, 3);

//setting env list
clo8786[1] = kont8432;
clo8786[2] = reverse_u45helper;
clo8786[3] = a8365;
void* f8433 = encode_clo(clo8786);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8366, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
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
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8528))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8528))[5];
//not do dummy comment
void* car = (decode_clo(env8528))[4];
//not do dummy comment
void* cons = (decode_clo(env8528))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8528))[2];
//not do dummy comment
void* kont8432 = (decode_clo(env8528))[1];

//creating new closure instance
void** clo8788 = alloc_clo(lam8525_fptr, 5);

//setting env list
clo8788[1] = kont8432;
clo8788[2] = reverse_u45helper;
clo8788[3] = cons;
clo8788[4] = lst2;
clo8788[5] = a8365;
void* f8434 = encode_clo(clo8788);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void* lam8529_fptr() // lam8529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8530 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8530))[7];
//not do dummy comment
void* lst = (decode_clo(env8530))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8530))[5];
//not do dummy comment
void* car = (decode_clo(env8530))[4];
//not do dummy comment
void* cons = (decode_clo(env8530))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8530))[2];
//not do dummy comment
void* kont8432 = (decode_clo(env8530))[1];

//if-clause
bool if_guard8789 = is_true(a8364);
if(if_guard8789)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8432);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8432))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8791 = alloc_clo(lam8527_fptr, 6);

//setting env list
clo8791[1] = kont8432;
clo8791[2] = reverse_u45helper;
clo8791[3] = cons;
clo8791[4] = car;
clo8791[5] = lst2;
clo8791[6] = lst;
void* f8435 = encode_clo(clo8791);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8435);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
function_ptr();
return nullptr;
}

}

void* lam8529 = encode_clo(alloc_clo(lam8529_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8531 = arg_buffer[1];
//reading env and args
void* kont8432 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8793 = alloc_clo(lam8529_fptr, 7);

//setting env list
clo8793[1] = kont8432;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8793[2] = reverse_u45helper;
clo8793[3] = cons;
clo8793[4] = car;
clo8793[5] = lst2;
clo8793[6] = lst;
clo8793[7] = cdr;
void* f8436 = encode_clo(clo8793);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8532_fptr() // lam8532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8533 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8533))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8533))[2];
//not do dummy comment
void* kont8437 = (decode_clo(env8533))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8437;
arg_buffer[3] = lst;
arg_buffer[4] = a8368;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8534 = arg_buffer[1];
//reading env and args
void* kont8437 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8795 = alloc_clo(lam8532_fptr, 3);

//setting env list
clo8795[1] = kont8437;
clo8795[2] = reverse_u45helper;
clo8795[3] = lst;
void* f8438 = encode_clo(clo8795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8438;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* xy8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8439 = (decode_clo(env8536))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8439);
arg_buffer[2] = xy8371;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* lam8537_fptr() // lam8537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8538 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8372 = (decode_clo(env8538))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8538))[3];
//not do dummy comment
void* a8374 = (decode_clo(env8538))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8538))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8439;
arg_buffer[3] = a8372;
arg_buffer[4] = a8374;
arg_buffer[5] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8537 = encode_clo(alloc_clo(lam8537_fptr, 0));

void* lam8539_fptr() // lam8539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8372 = (decode_clo(env8540))[6];
//not do dummy comment
void* a8374 = (decode_clo(env8540))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8540))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8540))[3];
//not do dummy comment
void* cons = (decode_clo(env8540))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8540))[1];

//creating new closure instance
void** clo8797 = alloc_clo(lam8537_fptr, 4);

//setting env list
clo8797[1] = kont8439;
clo8797[2] = a8374;
clo8797[3] = take_u45helper;
clo8797[4] = a8372;
void* f8441 = encode_clo(clo8797);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8375, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8441);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
function_ptr();
return nullptr;
}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void* lam8541_fptr() // lam8541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8542 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8542))[7];
//not do dummy comment
void* a8372 = (decode_clo(env8542))[6];
//not do dummy comment
void* car = (decode_clo(env8542))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8542))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8542))[3];
//not do dummy comment
void* cons = (decode_clo(env8542))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8542))[1];

//creating new closure instance
void** clo8799 = alloc_clo(lam8539_fptr, 6);

//setting env list
clo8799[1] = kont8439;
clo8799[2] = cons;
clo8799[3] = lst2;
clo8799[4] = take_u45helper;
clo8799[5] = a8374;
clo8799[6] = a8372;
void* f8442 = encode_clo(clo8799);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

void* lam8541 = encode_clo(alloc_clo(lam8541_fptr, 0));

void* lam8544_fptr() // lam8544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8545 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8545))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8545))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env8545))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8545))[5];
//not do dummy comment
void* n = (decode_clo(env8545))[4];
//not do dummy comment
void* car = (decode_clo(env8545))[3];
//not do dummy comment
void* cons = (decode_clo(env8545))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8545))[1];
mpz_t* mpzvar8800 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8800, "1", 10);
void* a8373 = encode_mpz(mpzvar8800);

//creating new closure instance
void** clo8802 = alloc_clo(lam8541_fptr, 7);

//setting env list
clo8802[1] = kont8439;
clo8802[2] = cons;
clo8802[3] = lst2;
clo8802[4] = take_u45helper;
clo8802[5] = car;
clo8802[6] = a8372;
clo8802[7] = lst;
void* f8443 = encode_clo(clo8802);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8373);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
function_ptr();
return nullptr;
}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void* lam8546_fptr() // lam8546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8547 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8547))[10];
//not do dummy comment
void* lst = (decode_clo(env8547))[9];
//not do dummy comment
void* reverse = (decode_clo(env8547))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8547))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env8547))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8547))[5];
//not do dummy comment
void* n = (decode_clo(env8547))[4];
//not do dummy comment
void* car = (decode_clo(env8547))[3];
//not do dummy comment
void* cons = (decode_clo(env8547))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8547))[1];

//if-clause
bool if_guard8803 = is_true(a8370);
if(if_guard8803)
{

//creating new closure instance
void** clo8805 = alloc_clo(lam8535_fptr, 1);

//setting env list
clo8805[1] = kont8439;
void* f8440 = encode_clo(clo8805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8440;
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
void** clo8807 = alloc_clo(lam8544_fptr, 8);

//setting env list
clo8807[1] = kont8439;
clo8807[2] = cons;
clo8807[3] = car;
clo8807[4] = n;
clo8807[5] = lst2;
clo8807[6] = take_u45helper;
clo8807[7] = _u45;
clo8807[8] = lst;
void* f8444 = encode_clo(clo8807);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
function_ptr();
return nullptr;
}

}

void* lam8546 = encode_clo(alloc_clo(lam8546_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8549 = arg_buffer[1];
//reading env and args
void* kont8439 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8808 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8808, "0", 10);
void* a8369 = encode_mpz(mpzvar8808);

//creating new closure instance
void** clo8810 = alloc_clo(lam8546_fptr, 10);

//setting env list
clo8810[1] = kont8439;
clo8810[2] = cons;
clo8810[3] = car;
clo8810[4] = n;
clo8810[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8810[6] = take_u45helper;
clo8810[7] = _u45;
clo8810[8] = reverse;
clo8810[9] = lst;
clo8810[10] = cdr;
void* f8445 = encode_clo(clo8810);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8551))[4];
//not do dummy comment
void* kont8446 = (decode_clo(env8551))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8551))[2];
//not do dummy comment
void* n = (decode_clo(env8551))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8446;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8552 = arg_buffer[1];
//reading env and args
void* kont8446 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8812 = alloc_clo(lam8550_fptr, 4);

//setting env list
clo8812[1] = n;
clo8812[2] = take_u45helper;
clo8812[3] = kont8446;
clo8812[4] = lst;
void* f8447 = encode_clo(clo8812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8447;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8554_fptr() // lam8554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8555 = arg_buffer[1];
//reading env and args
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8380 = (decode_clo(env8555))[3];
//not do dummy comment
void* kont8448 = (decode_clo(env8555))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8555))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8380, a8382);
arg_buffer[1]=reinterpret_cast<void*>(kont8448);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
function_ptr();
return nullptr;
}

void* lam8554 = encode_clo(alloc_clo(lam8554_fptr, 0));

void* lam8556_fptr() // lam8556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8557 = arg_buffer[1];
//reading env and args
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8380 = (decode_clo(env8557))[4];
//not do dummy comment
void* length = (decode_clo(env8557))[3];
//not do dummy comment
void* kont8448 = (decode_clo(env8557))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8557))[1];

//creating new closure instance
void** clo8814 = alloc_clo(lam8554_fptr, 3);

//setting env list
clo8814[1] = _u43;
clo8814[2] = kont8448;
clo8814[3] = a8380;
void* f8449 = encode_clo(clo8814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8449;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8556 = encode_clo(alloc_clo(lam8556_fptr, 0));

void* lam8559_fptr() // lam8559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8560 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8560))[5];
//not do dummy comment
void* lst = (decode_clo(env8560))[4];
//not do dummy comment
void* length = (decode_clo(env8560))[3];
//not do dummy comment
void* kont8448 = (decode_clo(env8560))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8560))[1];

//if-clause
bool if_guard8815 = is_true(a8378);
if(if_guard8815)
{
mpz_t* mpzvar8816 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8816, "0", 10);
void* xy8379 = encode_mpz(mpzvar8816);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448);
arg_buffer[2] = xy8379;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8817 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8817, "1", 10);
void* a8380 = encode_mpz(mpzvar8817);

//creating new closure instance
void** clo8819 = alloc_clo(lam8556_fptr, 4);

//setting env list
clo8819[1] = _u43;
clo8819[2] = kont8448;
clo8819[3] = length;
clo8819[4] = a8380;
void* f8450 = encode_clo(clo8819);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

}

void* lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8561 = arg_buffer[1];
//reading env and args
void* kont8448 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8821 = alloc_clo(lam8559_fptr, 5);

//setting env list
clo8821[1] = _u43;
clo8821[2] = kont8448;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8821[3] = length;
clo8821[4] = lst;
clo8821[5] = cdr;
void* f8451 = encode_clo(clo8821);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8562_fptr() // lam8562 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8563 = arg_buffer[1];
//reading env and args
void* xy8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8452 = (decode_clo(env8563))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8452);
arg_buffer[2] = xy8384;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

void* lam8564_fptr() // lam8564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8565 = arg_buffer[1];
//reading env and args
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8386 = (decode_clo(env8565))[3];
//not do dummy comment
void* kont8452 = (decode_clo(env8565))[2];
//not do dummy comment
void* cons = (decode_clo(env8565))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8386, a8388);
arg_buffer[1]=reinterpret_cast<void*>(kont8452);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
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
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8567))[5];
//not do dummy comment
void* a8386 = (decode_clo(env8567))[4];
//not do dummy comment
void* cons = (decode_clo(env8567))[3];
//not do dummy comment
void* proc = (decode_clo(env8567))[2];
//not do dummy comment
void* kont8452 = (decode_clo(env8567))[1];

//creating new closure instance
void** clo8823 = alloc_clo(lam8564_fptr, 3);

//setting env list
clo8823[1] = cons;
clo8823[2] = kont8452;
clo8823[3] = a8386;
void* f8454 = encode_clo(clo8823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8454;
arg_buffer[3] = proc;
arg_buffer[4] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void* lam8568_fptr() // lam8568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8569 = arg_buffer[1];
//reading env and args
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8569))[6];
//not do dummy comment
void* lst = (decode_clo(env8569))[5];
//not do dummy comment
void* map = (decode_clo(env8569))[4];
//not do dummy comment
void* cons = (decode_clo(env8569))[3];
//not do dummy comment
void* proc = (decode_clo(env8569))[2];
//not do dummy comment
void* kont8452 = (decode_clo(env8569))[1];

//creating new closure instance
void** clo8825 = alloc_clo(lam8566_fptr, 5);

//setting env list
clo8825[1] = kont8452;
clo8825[2] = proc;
clo8825[3] = cons;
clo8825[4] = a8386;
clo8825[5] = map;
void* f8455 = encode_clo(clo8825);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8455);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8571))[6];
//not do dummy comment
void* lst = (decode_clo(env8571))[5];
//not do dummy comment
void* map = (decode_clo(env8571))[4];
//not do dummy comment
void* cons = (decode_clo(env8571))[3];
//not do dummy comment
void* proc = (decode_clo(env8571))[2];
//not do dummy comment
void* kont8452 = (decode_clo(env8571))[1];

//creating new closure instance
void** clo8827 = alloc_clo(lam8568_fptr, 6);

//setting env list
clo8827[1] = kont8452;
clo8827[2] = proc;
clo8827[3] = cons;
clo8827[4] = map;
clo8827[5] = lst;
clo8827[6] = cdr;
void* f8456 = encode_clo(clo8827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8456;
arg_buffer[3] = a8385;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8573))[8];
//not do dummy comment
void* map = (decode_clo(env8573))[7];
//not do dummy comment
void* car = (decode_clo(env8573))[6];
//not do dummy comment
void* cons = (decode_clo(env8573))[5];
//not do dummy comment
void* list = (decode_clo(env8573))[4];
//not do dummy comment
void* cdr = (decode_clo(env8573))[3];
//not do dummy comment
void* proc = (decode_clo(env8573))[2];
//not do dummy comment
void* kont8452 = (decode_clo(env8573))[1];

//if-clause
bool if_guard8828 = is_true(a8383);
if(if_guard8828)
{

//creating new closure instance
void** clo8830 = alloc_clo(lam8562_fptr, 1);

//setting env list
clo8830[1] = kont8452;
void* f8453 = encode_clo(clo8830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8453;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8832 = alloc_clo(lam8570_fptr, 6);

//setting env list
clo8832[1] = kont8452;
clo8832[2] = proc;
clo8832[3] = cons;
clo8832[4] = map;
clo8832[5] = lst;
clo8832[6] = cdr;
void* f8457 = encode_clo(clo8832);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8457);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8457))[0]);
function_ptr();
return nullptr;
}

}

void* lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8574 = arg_buffer[1];
//reading env and args
void* kont8452 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8834 = alloc_clo(lam8572_fptr, 8);

//setting env list
clo8834[1] = kont8452;
clo8834[2] = proc;
clo8834[3] = cdr;
clo8834[4] = list;
clo8834[5] = cons;
clo8834[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8834[7] = map;
clo8834[8] = lst;
void* f8458 = encode_clo(clo8834);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8575_fptr() // lam8575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* xy8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8459 = (decode_clo(env8576))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8459);
arg_buffer[2] = xy8390;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8459))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void* lam8577_fptr() // lam8577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8578 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8393 = (decode_clo(env8578))[3];
//not do dummy comment
void* kont8459 = (decode_clo(env8578))[2];
//not do dummy comment
void* cons = (decode_clo(env8578))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8393, a8395);
arg_buffer[1]=reinterpret_cast<void*>(kont8459);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8459))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8393 = (decode_clo(env8580))[5];
//not do dummy comment
void* kont8459 = (decode_clo(env8580))[4];
//not do dummy comment
void* op = (decode_clo(env8580))[3];
//not do dummy comment
void* filter = (decode_clo(env8580))[2];
//not do dummy comment
void* cons = (decode_clo(env8580))[1];

//creating new closure instance
void** clo8836 = alloc_clo(lam8577_fptr, 3);

//setting env list
clo8836[1] = cons;
clo8836[2] = kont8459;
clo8836[3] = a8393;
void* f8461 = encode_clo(clo8836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8461;
arg_buffer[3] = op;
arg_buffer[4] = a8394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void* lam8581_fptr() // lam8581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8582))[6];
//not do dummy comment
void* kont8459 = (decode_clo(env8582))[5];
//not do dummy comment
void* lst = (decode_clo(env8582))[4];
//not do dummy comment
void* op = (decode_clo(env8582))[3];
//not do dummy comment
void* filter = (decode_clo(env8582))[2];
//not do dummy comment
void* cons = (decode_clo(env8582))[1];

//creating new closure instance
void** clo8838 = alloc_clo(lam8579_fptr, 5);

//setting env list
clo8838[1] = cons;
clo8838[2] = filter;
clo8838[3] = op;
clo8838[4] = kont8459;
clo8838[5] = a8393;
void* f8462 = encode_clo(clo8838);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8462);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
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
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8459 = (decode_clo(env8584))[3];
//not do dummy comment
void* op = (decode_clo(env8584))[2];
//not do dummy comment
void* filter = (decode_clo(env8584))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8459;
arg_buffer[3] = op;
arg_buffer[4] = a8396;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8586))[7];
//not do dummy comment
void* kont8459 = (decode_clo(env8586))[6];
//not do dummy comment
void* lst = (decode_clo(env8586))[5];
//not do dummy comment
void* op = (decode_clo(env8586))[4];
//not do dummy comment
void* cons = (decode_clo(env8586))[3];
//not do dummy comment
void* filter = (decode_clo(env8586))[2];
//not do dummy comment
void* car = (decode_clo(env8586))[1];

//if-clause
bool if_guard8839 = is_true(a8392);
if(if_guard8839)
{

//creating new closure instance
void** clo8841 = alloc_clo(lam8581_fptr, 6);

//setting env list
clo8841[1] = cons;
clo8841[2] = filter;
clo8841[3] = op;
clo8841[4] = lst;
clo8841[5] = kont8459;
clo8841[6] = cdr;
void* f8463 = encode_clo(clo8841);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8843 = alloc_clo(lam8583_fptr, 3);

//setting env list
clo8843[1] = filter;
clo8843[2] = op;
clo8843[3] = kont8459;
void* f8464 = encode_clo(clo8843);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
function_ptr();
return nullptr;
}

}

void* lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void* lam8587_fptr() // lam8587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8588 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8588))[7];
//not do dummy comment
void* kont8459 = (decode_clo(env8588))[6];
//not do dummy comment
void* lst = (decode_clo(env8588))[5];
//not do dummy comment
void* op = (decode_clo(env8588))[4];
//not do dummy comment
void* cons = (decode_clo(env8588))[3];
//not do dummy comment
void* filter = (decode_clo(env8588))[2];
//not do dummy comment
void* car = (decode_clo(env8588))[1];

//creating new closure instance
void** clo8845 = alloc_clo(lam8585_fptr, 7);

//setting env list
clo8845[1] = car;
clo8845[2] = filter;
clo8845[3] = cons;
clo8845[4] = op;
clo8845[5] = lst;
clo8845[6] = kont8459;
clo8845[7] = cdr;
void* f8465 = encode_clo(clo8845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8465;
arg_buffer[3] = a8391;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
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
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8459 = (decode_clo(env8590))[8];
//not do dummy comment
void* lst = (decode_clo(env8590))[7];
//not do dummy comment
void* op = (decode_clo(env8590))[6];
//not do dummy comment
void* cons = (decode_clo(env8590))[5];
//not do dummy comment
void* list = (decode_clo(env8590))[4];
//not do dummy comment
void* cdr = (decode_clo(env8590))[3];
//not do dummy comment
void* filter = (decode_clo(env8590))[2];
//not do dummy comment
void* car = (decode_clo(env8590))[1];

//if-clause
bool if_guard8846 = is_true(a8389);
if(if_guard8846)
{

//creating new closure instance
void** clo8848 = alloc_clo(lam8575_fptr, 1);

//setting env list
clo8848[1] = kont8459;
void* f8460 = encode_clo(clo8848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8460;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8850 = alloc_clo(lam8587_fptr, 7);

//setting env list
clo8850[1] = car;
clo8850[2] = filter;
clo8850[3] = cons;
clo8850[4] = op;
clo8850[5] = lst;
clo8850[6] = kont8459;
clo8850[7] = cdr;
void* f8466 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
return nullptr;
}

}

void* lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8591 = arg_buffer[1];
//reading env and args
void* kont8459 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8852 = alloc_clo(lam8589_fptr, 8);

//setting env list
clo8852[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8852[2] = filter;
clo8852[3] = cdr;
clo8852[4] = list;
clo8852[5] = cons;
clo8852[6] = op;
clo8852[7] = lst;
clo8852[8] = kont8459;
void* f8467 = encode_clo(clo8852);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8592_fptr() // lam8592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8593 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8593))[3];
//not do dummy comment
void* a8399 = (decode_clo(env8593))[2];
//not do dummy comment
void* kont8468 = (decode_clo(env8593))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8468;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void* lam8595_fptr() // lam8595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8596 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8596))[4];
//not do dummy comment
void* kont8468 = (decode_clo(env8596))[3];
//not do dummy comment
void* n = (decode_clo(env8596))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8596))[1];
mpz_t* mpzvar8853 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8853, "1", 10);
void* a8400 = encode_mpz(mpzvar8853);

//creating new closure instance
void** clo8855 = alloc_clo(lam8592_fptr, 3);

//setting env list
clo8855[1] = kont8468;
clo8855[2] = a8399;
clo8855[3] = drop;
void* f8469 = encode_clo(clo8855);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8400);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8598))[6];
//not do dummy comment
void* kont8468 = (decode_clo(env8598))[5];
//not do dummy comment
void* n = (decode_clo(env8598))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8598))[3];
//not do dummy comment
void* lst = (decode_clo(env8598))[2];
//not do dummy comment
void* drop = (decode_clo(env8598))[1];

//if-clause
bool if_guard8856 = is_true(a8398);
if(if_guard8856)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8468);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8468))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8858 = alloc_clo(lam8595_fptr, 4);

//setting env list
clo8858[1] = _u45;
clo8858[2] = n;
clo8858[3] = kont8468;
clo8858[4] = drop;
void* f8470 = encode_clo(clo8858);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
function_ptr();
return nullptr;
}

}

void* lam8597 = encode_clo(alloc_clo(lam8597_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8600 = arg_buffer[1];
//reading env and args
void* kont8468 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8859 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8859, "0", 10);
void* a8397 = encode_mpz(mpzvar8859);

//creating new closure instance
void** clo8861 = alloc_clo(lam8597_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8861[1] = drop;
clo8861[2] = lst;
clo8861[3] = _u45;
clo8861[4] = n;
clo8861[5] = kont8468;
clo8861[6] = cdr;
void* f8471 = encode_clo(clo8861);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8397);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8601_fptr() // lam8601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8602 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8403 = (decode_clo(env8602))[3];
//not do dummy comment
void* proc = (decode_clo(env8602))[2];
//not do dummy comment
void* kont8472 = (decode_clo(env8602))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8472;
arg_buffer[3] = a8403;
arg_buffer[4] = a8405;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8604))[5];
//not do dummy comment
void* a8403 = (decode_clo(env8604))[4];
//not do dummy comment
void* kont8472 = (decode_clo(env8604))[3];
//not do dummy comment
void* proc = (decode_clo(env8604))[2];
//not do dummy comment
void* acc = (decode_clo(env8604))[1];

//creating new closure instance
void** clo8863 = alloc_clo(lam8601_fptr, 3);

//setting env list
clo8863[1] = kont8472;
clo8863[2] = proc;
clo8863[3] = a8403;
void* f8473 = encode_clo(clo8863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8473;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8404;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8606))[6];
//not do dummy comment
void* kont8472 = (decode_clo(env8606))[5];
//not do dummy comment
void* foldr = (decode_clo(env8606))[4];
//not do dummy comment
void* lst = (decode_clo(env8606))[3];
//not do dummy comment
void* proc = (decode_clo(env8606))[2];
//not do dummy comment
void* acc = (decode_clo(env8606))[1];

//creating new closure instance
void** clo8865 = alloc_clo(lam8603_fptr, 5);

//setting env list
clo8865[1] = acc;
clo8865[2] = proc;
clo8865[3] = kont8472;
clo8865[4] = a8403;
clo8865[5] = foldr;
void* f8474 = encode_clo(clo8865);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
function_ptr();
return nullptr;
}

void* lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void* lam8607_fptr() // lam8607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8608 = arg_buffer[1];
//reading env and args
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8608))[7];
//not do dummy comment
void* car = (decode_clo(env8608))[6];
//not do dummy comment
void* kont8472 = (decode_clo(env8608))[5];
//not do dummy comment
void* foldr = (decode_clo(env8608))[4];
//not do dummy comment
void* lst = (decode_clo(env8608))[3];
//not do dummy comment
void* proc = (decode_clo(env8608))[2];
//not do dummy comment
void* acc = (decode_clo(env8608))[1];

//if-clause
bool if_guard8866 = is_true(a8402);
if(if_guard8866)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8472);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8472))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8868 = alloc_clo(lam8605_fptr, 6);

//setting env list
clo8868[1] = acc;
clo8868[2] = proc;
clo8868[3] = lst;
clo8868[4] = foldr;
clo8868[5] = kont8472;
clo8868[6] = cdr;
void* f8475 = encode_clo(clo8868);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
function_ptr();
return nullptr;
}

}

void* lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8609 = arg_buffer[1];
//reading env and args
void* kont8472 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8870 = alloc_clo(lam8607_fptr, 7);

//setting env list
clo8870[1] = acc;
clo8870[2] = proc;
clo8870[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8870[4] = foldr;
clo8870[5] = kont8472;
clo8870[6] = car;
clo8870[7] = cdr;
void* f8476 = encode_clo(clo8870);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8610_fptr() // lam8610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8611 = arg_buffer[1];
//reading env and args
void* a8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8477 = (decode_clo(env8611))[3];
//not do dummy comment
void* cons = (decode_clo(env8611))[2];
//not do dummy comment
void* a8407 = (decode_clo(env8611))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8407, a8409);
arg_buffer[1]=reinterpret_cast<void*>(kont8477);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
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
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8477 = (decode_clo(env8613))[5];
//not do dummy comment
void* append = (decode_clo(env8613))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8613))[3];
//not do dummy comment
void* cons = (decode_clo(env8613))[2];
//not do dummy comment
void* a8407 = (decode_clo(env8613))[1];

//creating new closure instance
void** clo8872 = alloc_clo(lam8610_fptr, 3);

//setting env list
clo8872[1] = a8407;
clo8872[2] = cons;
clo8872[3] = kont8477;
void* f8478 = encode_clo(clo8872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8478;
arg_buffer[3] = a8408;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8615))[6];
//not do dummy comment
void* kont8477 = (decode_clo(env8615))[5];
//not do dummy comment
void* append = (decode_clo(env8615))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8615))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8615))[2];
//not do dummy comment
void* cons = (decode_clo(env8615))[1];

//creating new closure instance
void** clo8874 = alloc_clo(lam8612_fptr, 5);

//setting env list
clo8874[1] = a8407;
clo8874[2] = cons;
clo8874[3] = lst2;
clo8874[4] = append;
clo8874[5] = kont8477;
void* f8479 = encode_clo(clo8874);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8479);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
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
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8617))[7];
//not do dummy comment
void* kont8477 = (decode_clo(env8617))[6];
//not do dummy comment
void* append = (decode_clo(env8617))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8617))[4];
//not do dummy comment
void* cons = (decode_clo(env8617))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8617))[2];
//not do dummy comment
void* car = (decode_clo(env8617))[1];

//if-clause
bool if_guard8875 = is_true(a8406);
if(if_guard8875)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8477);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8877 = alloc_clo(lam8614_fptr, 6);

//setting env list
clo8877[1] = cons;
clo8877[2] = lst1;
clo8877[3] = lst2;
clo8877[4] = append;
clo8877[5] = kont8477;
clo8877[6] = cdr;
void* f8480 = encode_clo(clo8877);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8480);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
function_ptr();
return nullptr;
}

}

void* lam8616 = encode_clo(alloc_clo(lam8616_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8618 = arg_buffer[1];
//reading env and args
void* kont8477 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8879 = alloc_clo(lam8616_fptr, 7);

//setting env list
clo8879[1] = car;
clo8879[2] = lst1;
clo8879[3] = cons;
clo8879[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8879[5] = append;
clo8879[6] = kont8477;
clo8879[7] = cdr;
void* f8481 = encode_clo(clo8879);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8481);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8619_fptr() // lam8619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8620 = arg_buffer[1];
//reading env and args
void* a8411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* string_u45length = (decode_clo(env8620))[2];
//not do dummy comment
void* kont8482 = (decode_clo(env8620))[1];
void* cps_u45lst8483 = prim_cons(kont8482, a8411);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(string_u45length);
arg_buffer[2] = cps_u45lst8483;
arg_buffer[0] = reinterpret_cast<void*>(2);
string_u45length_fptr();
return nullptr;
}

void* lam8619 = encode_clo(alloc_clo(lam8619_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8622 = arg_buffer[1];
//reading env and args
void* kont8482 = arg_buffer[2];
//Dummy comment
void* a8410 = encode_str(new(GC) std::string("brouhahaa_is_great!"));

//creating new closure instance
void** clo8881 = alloc_clo(lam8619_fptr, 2);

//setting env list
clo8881[1] = kont8482;
clo8881[2] = string_u45length;
void* f8484 = encode_clo(clo8881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8484;
arg_buffer[3] = a8410;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8623_fptr() // lam8623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8624 = arg_buffer[1];
//reading env and args
void* xy8412 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8485 = (decode_clo(env8624))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8485);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8485))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8625 = arg_buffer[1];
//reading env and args
void* kont8485 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8883 = alloc_clo(lam8623_fptr, 1);

//setting env list
clo8883[1] = kont8485;
void* f8486 = encode_clo(clo8883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8486;
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

