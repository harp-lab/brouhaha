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
void* x8639 = apply_prim__u43(lst8641);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8638);
arg_buffer[2] = x8639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8638))[0]);
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
void* x8643 = apply_prim__u45(lst8645);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8642);
arg_buffer[2] = x8643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8642))[0]);
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
void* x8647 = apply_prim__u42(lst8649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8646);
arg_buffer[2] = x8647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8646))[0]);
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
void* x8651 = apply_prim__u47(lst8653);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8650);
arg_buffer[2] = x8651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8650))[0]);
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
void* x8655 = apply_prim__u61(lst8657);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8654);
arg_buffer[2] = x8655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8654))[0]);
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
void* x8659 = apply_prim__u62(lst8661);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8658);
arg_buffer[2] = x8659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8658))[0]);
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
void* x8663 = apply_prim__u60(lst8665);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8662);
arg_buffer[2] = x8663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8662))[0]);
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
void* x8667 = apply_prim__u60_u61(lst8669);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8666);
arg_buffer[2] = x8667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8666))[0]);
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
void* x8671 = apply_prim__u62_u61(lst8673);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8670);
arg_buffer[2] = x8671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8670))[0]);
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
void* x8675 = apply_prim_modulo(lst8677);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8674);
arg_buffer[2] = x8675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8674))[0]);
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
void* x8679 = apply_prim_null_u63(lst8681);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8678);
arg_buffer[2] = x8679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8678))[0]);
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
void* x8683 = apply_prim_equal_u63(lst8685);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8682);
arg_buffer[2] = x8683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682))[0]);
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
void* x8687 = apply_prim_eq_u63(lst8689);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8686);
arg_buffer[2] = x8687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8686))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

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

void* set_u45member_u63_fptr() // set-member? 
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
void* x8751 = apply_prim_set_u45member_u63(lst8753);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8750);
arg_buffer[2] = x8751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8750))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45remove_fptr() // set-remove 
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
void* x8755 = apply_prim_set_u45remove(lst8757);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8754);
arg_buffer[2] = x8755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8754))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8760 = arg_buffer[1];
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

void* kont8758 = prim_car(lst);
void* lst8761 = prim_cdr(lst);
void* x8759 = apply_prim_set_u45count(lst8761);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8758);
arg_buffer[2] = x8759;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8758))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8764 = arg_buffer[1];
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

void* kont8762 = prim_car(lst);
void* lst8765 = prim_cdr(lst);
void* x8763 = apply_prim_string_u63(lst8765);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8762);
arg_buffer[2] = x8763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8762))[0]);
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
void* _env8768 = arg_buffer[1];
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

void* kont8766 = prim_car(lst);
void* lst8769 = prim_cdr(lst);
void* x8767 = apply_prim_string_u45length(lst8769);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8766);
arg_buffer[2] = x8767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8766))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8772 = arg_buffer[1];
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

void* kont8770 = prim_car(lst);
void* lst8773 = prim_cdr(lst);
void* x8771 = apply_prim_string_u45ref(lst8773);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8770);
arg_buffer[2] = x8771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8770))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8776 = arg_buffer[1];
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

void* kont8774 = prim_car(lst);
void* lst8777 = prim_cdr(lst);
void* x8775 = apply_prim_substring(lst8777);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8774);
arg_buffer[2] = x8775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8774))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8780 = arg_buffer[1];
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

void* kont8778 = prim_car(lst);
void* lst8781 = prim_cdr(lst);
void* x8779 = apply_prim_string_u45append(lst8781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8778);
arg_buffer[2] = x8779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8778))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8784 = arg_buffer[1];
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

void* kont8782 = prim_car(lst);
void* lst8785 = prim_cdr(lst);
void* x8783 = apply_prim_string_u45_u62list(lst8785);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8782);
arg_buffer[2] = x8783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8782))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* exact_u45floor_fptr() // exact-floor 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8788 = arg_buffer[1];
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

void* kont8786 = prim_car(lst);
void* lst8789 = prim_cdr(lst);
void* x8787 = apply_prim_exact_u45floor(lst8789);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8786);
arg_buffer[2] = x8787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8786))[0]);
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
void* _env8792 = arg_buffer[1];
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

void* kont8790 = prim_car(lst);
void* lst8793 = prim_cdr(lst);
void* x8791 = apply_prim_exact_u45ceiling(lst8793);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8790);
arg_buffer[2] = x8791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8790))[0]);
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
void* _env8796 = arg_buffer[1];
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

void* kont8794 = prim_car(lst);
void* lst8797 = prim_cdr(lst);
void* x8795 = apply_prim_exact_u45round(lst8797);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8794);
arg_buffer[2] = x8795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8794))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void* absolute_fptr() // absolute 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8800 = arg_buffer[1];
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

void* kont8798 = prim_car(lst);
void* lst8801 = prim_cdr(lst);
void* x8799 = apply_prim_absolute(lst8801);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8798);
arg_buffer[2] = x8799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8798))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* absolute = encode_clo(alloc_clo(absolute_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8804 = arg_buffer[1];
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

void* kont8802 = prim_car(lst);
void* lst8805 = prim_cdr(lst);
void* x8803 = apply_prim_max(lst8805);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8802);
arg_buffer[2] = x8803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8802))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* min_fptr() // min 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8808 = arg_buffer[1];
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

void* kont8806 = prim_car(lst);
void* lst8809 = prim_cdr(lst);
void* x8807 = apply_prim_min(lst8809);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8806);
arg_buffer[2] = x8807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8806))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* min = encode_clo(alloc_clo(min_fptr, 0));

void* expt_fptr() // expt 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8812 = arg_buffer[1];
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

void* kont8810 = prim_car(lst);
void* lst8813 = prim_cdr(lst);
void* x8811 = apply_prim_expt(lst8813);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8810);
arg_buffer[2] = x8811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8810))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void* squareroot_fptr() // squareroot 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8816 = arg_buffer[1];
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

void* kont8814 = prim_car(lst);
void* lst8817 = prim_cdr(lst);
void* x8815 = apply_prim_squareroot(lst8817);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8814);
arg_buffer[2] = x8815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8814))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* squareroot = encode_clo(alloc_clo(squareroot_fptr, 0));

void* remaind_fptr() // remaind 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8820 = arg_buffer[1];
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

void* kont8818 = prim_car(lst);
void* lst8821 = prim_cdr(lst);
void* x8819 = apply_prim_remaind(lst8821);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8818);
arg_buffer[2] = x8819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8818))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* remaind = encode_clo(alloc_clo(remaind_fptr, 0));

void* quotient_fptr() // quotient 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8824 = arg_buffer[1];
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

void* kont8822 = prim_car(lst);
void* lst8825 = prim_cdr(lst);
void* x8823 = apply_prim_quotient(lst8825);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8822);
arg_buffer[2] = x8823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8822))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void* randnum_fptr() // randnum 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8828 = arg_buffer[1];
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

void* kont8826 = prim_car(lst);
void* lst8829 = prim_cdr(lst);
void* x8827 = apply_prim_randnum(lst8829);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8826);
arg_buffer[2] = x8827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8826))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* randnum = encode_clo(alloc_clo(randnum_fptr, 0));

void* symbol_u63_fptr() // symbol? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8832 = arg_buffer[1];
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

void* kont8830 = prim_car(lst);
void* lst8833 = prim_cdr(lst);
void* x8831 = apply_prim_symbol_u63(lst8833);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8830);
arg_buffer[2] = x8831;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8830))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void* pair_u63_fptr() // pair? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8836 = arg_buffer[1];
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

void* kont8834 = prim_car(lst);
void* lst8837 = prim_cdr(lst);
void* x8835 = apply_prim_pair_u63(lst8837);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8834);
arg_buffer[2] = x8835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8834))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void* positive_u63_fptr() // positive? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8840 = arg_buffer[1];
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

void* kont8838 = prim_car(lst);
void* lst8841 = prim_cdr(lst);
void* x8839 = apply_prim_positive_u63(lst8841);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8838);
arg_buffer[2] = x8839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8838))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void* negative_u63_fptr() // negative? 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _env8844 = arg_buffer[1];
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

void* kont8842 = prim_car(lst);
void* lst8845 = prim_cdr(lst);
void* x8843 = apply_prim_negative_u63(lst8845);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8842);
arg_buffer[2] = x8843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8842))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void* list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8495 = arg_buffer[1];
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

void* kont8423 = prim_car(x);
void* x8494 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8423);
arg_buffer[2] = x8494;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8496_fptr() // lam8496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8497 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8424 = (decode_clo(env8497))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8497))[2];
//not do dummy comment
void* a8350 = (decode_clo(env8497))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8350, a8352);
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
function_ptr();
return nullptr;
}

void* lam8496 = encode_clo(alloc_clo(lam8496_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8500 = arg_buffer[1];
//reading env and args
void* kont8424 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8846 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8846, "0", 10);
void* a8350 = encode_mpz(mpzvar8846);
mpz_t* mpzvar8847 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8847, "2", 10);
void* a8351 = encode_mpz(mpzvar8847);

//creating new closure instance
void** clo8849 = alloc_clo(lam8496_fptr, 3);

//setting env list
clo8849[1] = a8350;
clo8849[2] = equal_u63;
clo8849[3] = kont8424;
void* f8425 = encode_clo(clo8849);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8351);
arg_buffer[1]=reinterpret_cast<void*>(f8425);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8425))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8501_fptr() // lam8501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8502 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8353 = (decode_clo(env8502))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8502))[2];
//not do dummy comment
void* kont8426 = (decode_clo(env8502))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8353, a8355);
arg_buffer[1]=reinterpret_cast<void*>(kont8426);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8426))[0]);
function_ptr();
return nullptr;
}

void* lam8501 = encode_clo(alloc_clo(lam8501_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8505 = arg_buffer[1];
//reading env and args
void* kont8426 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8850 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8850, "1", 10);
void* a8353 = encode_mpz(mpzvar8850);
mpz_t* mpzvar8851 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8851, "2", 10);
void* a8354 = encode_mpz(mpzvar8851);

//creating new closure instance
void** clo8853 = alloc_clo(lam8501_fptr, 3);

//setting env list
clo8853[1] = kont8426;
clo8853[2] = equal_u63;
clo8853[3] = a8353;
void* f8427 = encode_clo(clo8853);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8354);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8508_fptr() // lam8508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env8509))[3];
//not do dummy comment
void* x = (decode_clo(env8509))[2];
//not do dummy comment
void* kont8428 = (decode_clo(env8509))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8428;
arg_buffer[3] = x;
arg_buffer[4] = a8361;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8508 = encode_clo(alloc_clo(lam8508_fptr, 0));

void* lam8510_fptr() // lam8510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8511 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8511))[5];
//not do dummy comment
void* lst = (decode_clo(env8511))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8511))[3];
//not do dummy comment
void* x = (decode_clo(env8511))[2];
//not do dummy comment
void* kont8428 = (decode_clo(env8511))[1];

//if-clause
bool if_guard8854 = is_true(a8359);
if(if_guard8854)
{
void* xy8360 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8428);
arg_buffer[2] = xy8360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8856 = alloc_clo(lam8508_fptr, 3);

//setting env list
clo8856[1] = kont8428;
clo8856[2] = x;
clo8856[3] = member_u63;
void* f8429 = encode_clo(clo8856);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
function_ptr();
return nullptr;
}

}

void* lam8510 = encode_clo(alloc_clo(lam8510_fptr, 0));

void* lam8512_fptr() // lam8512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8513 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8513))[6];
//not do dummy comment
void* lst = (decode_clo(env8513))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8513))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8513))[3];
//not do dummy comment
void* x = (decode_clo(env8513))[2];
//not do dummy comment
void* kont8428 = (decode_clo(env8513))[1];

//creating new closure instance
void** clo8858 = alloc_clo(lam8510_fptr, 5);

//setting env list
clo8858[1] = kont8428;
clo8858[2] = x;
clo8858[3] = member_u63;
clo8858[4] = lst;
clo8858[5] = cdr;
void* f8430 = encode_clo(clo8858);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8358, x);
arg_buffer[1]=reinterpret_cast<void*>(f8430);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
function_ptr();
return nullptr;
}

void* lam8512 = encode_clo(alloc_clo(lam8512_fptr, 0));

void* lam8514_fptr() // lam8514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8515 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8515))[7];
//not do dummy comment
void* lst = (decode_clo(env8515))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8515))[5];
//not do dummy comment
void* car = (decode_clo(env8515))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8515))[3];
//not do dummy comment
void* x = (decode_clo(env8515))[2];
//not do dummy comment
void* kont8428 = (decode_clo(env8515))[1];

//if-clause
bool if_guard8859 = is_true(a8356);
if(if_guard8859)
{
void* xy8357 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8428);
arg_buffer[2] = xy8357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8861 = alloc_clo(lam8512_fptr, 6);

//setting env list
clo8861[1] = kont8428;
clo8861[2] = x;
clo8861[3] = member_u63;
clo8861[4] = equal_u63;
clo8861[5] = lst;
clo8861[6] = cdr;
void* f8431 = encode_clo(clo8861);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

}

void* lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8516 = arg_buffer[1];
//reading env and args
void* kont8428 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8863 = alloc_clo(lam8514_fptr, 7);

//setting env list
clo8863[1] = kont8428;
clo8863[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8863[3] = member_u63;
clo8863[4] = car;
clo8863[5] = equal_u63;
clo8863[6] = lst;
clo8863[7] = cdr;
void* f8432 = encode_clo(clo8863);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8517_fptr() // lam8517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8433 = (decode_clo(env8518))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8518))[2];
//not do dummy comment
void* a8363 = (decode_clo(env8518))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8433;
arg_buffer[3] = a8363;
arg_buffer[4] = a8365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8517 = encode_clo(alloc_clo(lam8517_fptr, 0));

void* lam8519_fptr() // lam8519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8520 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8433 = (decode_clo(env8520))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8520))[4];
//not do dummy comment
void* a8363 = (decode_clo(env8520))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8520))[2];
//not do dummy comment
void* cons = (decode_clo(env8520))[1];

//creating new closure instance
void** clo8865 = alloc_clo(lam8517_fptr, 3);

//setting env list
clo8865[1] = a8363;
clo8865[2] = reverse_u45helper;
clo8865[3] = kont8433;
void* f8434 = encode_clo(clo8865);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8364, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* lam8519 = encode_clo(alloc_clo(lam8519_fptr, 0));

void* lam8521_fptr() // lam8521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8433 = (decode_clo(env8522))[6];
//not do dummy comment
void* lst = (decode_clo(env8522))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8522))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8522))[3];
//not do dummy comment
void* car = (decode_clo(env8522))[2];
//not do dummy comment
void* cons = (decode_clo(env8522))[1];

//creating new closure instance
void** clo8867 = alloc_clo(lam8519_fptr, 5);

//setting env list
clo8867[1] = cons;
clo8867[2] = lst2;
clo8867[3] = a8363;
clo8867[4] = reverse_u45helper;
clo8867[5] = kont8433;
void* f8435 = encode_clo(clo8867);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8435);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
function_ptr();
return nullptr;
}

void* lam8521 = encode_clo(alloc_clo(lam8521_fptr, 0));

void* lam8523_fptr() // lam8523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8524))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8524))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8524))[5];
//not do dummy comment
void* car = (decode_clo(env8524))[4];
//not do dummy comment
void* cons = (decode_clo(env8524))[3];
//not do dummy comment
void* cdr = (decode_clo(env8524))[2];
//not do dummy comment
void* kont8433 = (decode_clo(env8524))[1];

//if-clause
bool if_guard8868 = is_true(a8362);
if(if_guard8868)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8433);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8433))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8870 = alloc_clo(lam8521_fptr, 6);

//setting env list
clo8870[1] = cons;
clo8870[2] = car;
clo8870[3] = lst2;
clo8870[4] = reverse_u45helper;
clo8870[5] = lst;
clo8870[6] = kont8433;
void* f8436 = encode_clo(clo8870);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8525 = arg_buffer[1];
//reading env and args
void* kont8433 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8872 = alloc_clo(lam8523_fptr, 7);

//setting env list
clo8872[1] = kont8433;
clo8872[2] = cdr;
clo8872[3] = cons;
clo8872[4] = car;
clo8872[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8872[6] = reverse_u45helper;
clo8872[7] = lst;
void* f8437 = encode_clo(clo8872);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8526_fptr() // lam8526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8527 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8527))[3];
//not do dummy comment
void* kont8438 = (decode_clo(env8527))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8438;
arg_buffer[3] = lst;
arg_buffer[4] = a8366;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8528 = arg_buffer[1];
//reading env and args
void* kont8438 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8874 = alloc_clo(lam8526_fptr, 3);

//setting env list
clo8874[1] = reverse_u45helper;
clo8874[2] = kont8438;
clo8874[3] = lst;
void* f8439 = encode_clo(clo8874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8439;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8529_fptr() // lam8529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8530 = arg_buffer[1];
//reading env and args
void* xy8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8440 = (decode_clo(env8530))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[2] = xy8369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
//call next proc using a function pointer
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
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8532))[4];
//not do dummy comment
void* a8372 = (decode_clo(env8532))[3];
//not do dummy comment
void* kont8440 = (decode_clo(env8532))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8532))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8440;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[5] = a8374;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void* lam8533_fptr() // lam8533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8534 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8534))[6];
//not do dummy comment
void* a8372 = (decode_clo(env8534))[5];
//not do dummy comment
void* kont8440 = (decode_clo(env8534))[4];
//not do dummy comment
void* cons = (decode_clo(env8534))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8534))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8534))[1];

//creating new closure instance
void** clo8876 = alloc_clo(lam8531_fptr, 4);

//setting env list
clo8876[1] = take_u45helper;
clo8876[2] = kont8440;
clo8876[3] = a8372;
clo8876[4] = a8370;
void* f8442 = encode_clo(clo8876);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8373, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

void* lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8536))[7];
//not do dummy comment
void* lst = (decode_clo(env8536))[6];
//not do dummy comment
void* kont8440 = (decode_clo(env8536))[5];
//not do dummy comment
void* car = (decode_clo(env8536))[4];
//not do dummy comment
void* cons = (decode_clo(env8536))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8536))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8536))[1];

//creating new closure instance
void** clo8878 = alloc_clo(lam8533_fptr, 6);

//setting env list
clo8878[1] = lst2;
clo8878[2] = take_u45helper;
clo8878[3] = cons;
clo8878[4] = kont8440;
clo8878[5] = a8372;
clo8878[6] = a8370;
void* f8443 = encode_clo(clo8878);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
function_ptr();
return nullptr;
}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* lam8538_fptr() // lam8538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8539 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8539))[8];
//not do dummy comment
void* kont8440 = (decode_clo(env8539))[7];
//not do dummy comment
void* cons = (decode_clo(env8539))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8539))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8539))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8539))[3];
//not do dummy comment
void* n = (decode_clo(env8539))[2];
//not do dummy comment
void* car = (decode_clo(env8539))[1];
mpz_t* mpzvar8879 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8879, "1", 10);
void* a8371 = encode_mpz(mpzvar8879);

//creating new closure instance
void** clo8881 = alloc_clo(lam8535_fptr, 7);

//setting env list
clo8881[1] = lst2;
clo8881[2] = take_u45helper;
clo8881[3] = cons;
clo8881[4] = car;
clo8881[5] = kont8440;
clo8881[6] = lst;
clo8881[7] = a8370;
void* f8444 = encode_clo(clo8881);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8371);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
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
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8541))[10];
//not do dummy comment
void* lst = (decode_clo(env8541))[9];
//not do dummy comment
void* cons = (decode_clo(env8541))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8541))[7];
//not do dummy comment
void* kont8440 = (decode_clo(env8541))[6];
//not do dummy comment
void* reverse = (decode_clo(env8541))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8541))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8541))[3];
//not do dummy comment
void* n = (decode_clo(env8541))[2];
//not do dummy comment
void* car = (decode_clo(env8541))[1];

//if-clause
bool if_guard8882 = is_true(a8368);
if(if_guard8882)
{

//creating new closure instance
void** clo8884 = alloc_clo(lam8529_fptr, 1);

//setting env list
clo8884[1] = kont8440;
void* f8441 = encode_clo(clo8884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8441;
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
void** clo8886 = alloc_clo(lam8538_fptr, 8);

//setting env list
clo8886[1] = car;
clo8886[2] = n;
clo8886[3] = lst2;
clo8886[4] = take_u45helper;
clo8886[5] = _u45;
clo8886[6] = cons;
clo8886[7] = kont8440;
clo8886[8] = lst;
void* f8445 = encode_clo(clo8886);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
function_ptr();
return nullptr;
}

}

void* lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8543 = arg_buffer[1];
//reading env and args
void* kont8440 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8887 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8887, "0", 10);
void* a8367 = encode_mpz(mpzvar8887);

//creating new closure instance
void** clo8889 = alloc_clo(lam8540_fptr, 10);

//setting env list
clo8889[1] = car;
clo8889[2] = n;
clo8889[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8889[4] = take_u45helper;
clo8889[5] = reverse;
clo8889[6] = kont8440;
clo8889[7] = _u45;
clo8889[8] = cons;
clo8889[9] = lst;
clo8889[10] = cdr;
void* f8446 = encode_clo(clo8889);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8367);
arg_buffer[1]=reinterpret_cast<void*>(f8446);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8544_fptr() // lam8544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8545 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8545))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8545))[3];
//not do dummy comment
void* n = (decode_clo(env8545))[2];
//not do dummy comment
void* kont8447 = (decode_clo(env8545))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8447;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8375;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8546 = arg_buffer[1];
//reading env and args
void* kont8447 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8891 = alloc_clo(lam8544_fptr, 4);

//setting env list
clo8891[1] = kont8447;
clo8891[2] = n;
clo8891[3] = take_u45helper;
clo8891[4] = lst;
void* f8448 = encode_clo(clo8891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8548_fptr() // lam8548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8449 = (decode_clo(env8549))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8549))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8549))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8378, a8380);
arg_buffer[1]=reinterpret_cast<void*>(kont8449);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
function_ptr();
return nullptr;
}

void* lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8449 = (decode_clo(env8551))[4];
//not do dummy comment
void* length = (decode_clo(env8551))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8551))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8551))[1];

//creating new closure instance
void** clo8893 = alloc_clo(lam8548_fptr, 3);

//setting env list
clo8893[1] = a8378;
clo8893[2] = _u43;
clo8893[3] = kont8449;
void* f8450 = encode_clo(clo8893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8450;
arg_buffer[3] = a8379;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void* lam8553_fptr() // lam8553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8554 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8554))[5];
//not do dummy comment
void* length = (decode_clo(env8554))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8554))[3];
//not do dummy comment
void* cdr = (decode_clo(env8554))[2];
//not do dummy comment
void* kont8449 = (decode_clo(env8554))[1];

//if-clause
bool if_guard8894 = is_true(a8376);
if(if_guard8894)
{
mpz_t* mpzvar8895 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8895, "0", 10);
void* xy8377 = encode_mpz(mpzvar8895);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8449);
arg_buffer[2] = xy8377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8896 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8896, "1", 10);
void* a8378 = encode_mpz(mpzvar8896);

//creating new closure instance
void** clo8898 = alloc_clo(lam8550_fptr, 4);

//setting env list
clo8898[1] = a8378;
clo8898[2] = _u43;
clo8898[3] = length;
clo8898[4] = kont8449;
void* f8451 = encode_clo(clo8898);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

}

void* lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8555 = arg_buffer[1];
//reading env and args
void* kont8449 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8900 = alloc_clo(lam8553_fptr, 5);

//setting env list
clo8900[1] = kont8449;
clo8900[2] = cdr;
clo8900[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8900[4] = length;
clo8900[5] = lst;
void* f8452 = encode_clo(clo8900);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8452);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8452))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8556_fptr() // lam8556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8557 = arg_buffer[1];
//reading env and args
void* xy8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8453 = (decode_clo(env8557))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8453);
arg_buffer[2] = xy8382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8453))[0]);
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
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8453 = (decode_clo(env8559))[3];
//not do dummy comment
void* cons = (decode_clo(env8559))[2];
//not do dummy comment
void* a8384 = (decode_clo(env8559))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8384, a8386);
arg_buffer[1]=reinterpret_cast<void*>(kont8453);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8453))[0]);
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8453 = (decode_clo(env8561))[5];
//not do dummy comment
void* map = (decode_clo(env8561))[4];
//not do dummy comment
void* proc = (decode_clo(env8561))[3];
//not do dummy comment
void* cons = (decode_clo(env8561))[2];
//not do dummy comment
void* a8384 = (decode_clo(env8561))[1];

//creating new closure instance
void** clo8902 = alloc_clo(lam8558_fptr, 3);

//setting env list
clo8902[1] = a8384;
clo8902[2] = cons;
clo8902[3] = kont8453;
void* f8455 = encode_clo(clo8902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8455;
arg_buffer[3] = proc;
arg_buffer[4] = a8385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8563))[6];
//not do dummy comment
void* map = (decode_clo(env8563))[5];
//not do dummy comment
void* proc = (decode_clo(env8563))[4];
//not do dummy comment
void* cons = (decode_clo(env8563))[3];
//not do dummy comment
void* lst = (decode_clo(env8563))[2];
//not do dummy comment
void* kont8453 = (decode_clo(env8563))[1];

//creating new closure instance
void** clo8904 = alloc_clo(lam8560_fptr, 5);

//setting env list
clo8904[1] = a8384;
clo8904[2] = cons;
clo8904[3] = proc;
clo8904[4] = map;
clo8904[5] = kont8453;
void* f8456 = encode_clo(clo8904);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8456);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8565))[6];
//not do dummy comment
void* map = (decode_clo(env8565))[5];
//not do dummy comment
void* proc = (decode_clo(env8565))[4];
//not do dummy comment
void* cons = (decode_clo(env8565))[3];
//not do dummy comment
void* lst = (decode_clo(env8565))[2];
//not do dummy comment
void* kont8453 = (decode_clo(env8565))[1];

//creating new closure instance
void** clo8906 = alloc_clo(lam8562_fptr, 6);

//setting env list
clo8906[1] = kont8453;
clo8906[2] = lst;
clo8906[3] = cons;
clo8906[4] = proc;
clo8906[5] = map;
clo8906[6] = cdr;
void* f8457 = encode_clo(clo8906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8457;
arg_buffer[3] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8567))[8];
//not do dummy comment
void* proc = (decode_clo(env8567))[7];
//not do dummy comment
void* car = (decode_clo(env8567))[6];
//not do dummy comment
void* cons = (decode_clo(env8567))[5];
//not do dummy comment
void* list = (decode_clo(env8567))[4];
//not do dummy comment
void* cdr = (decode_clo(env8567))[3];
//not do dummy comment
void* lst = (decode_clo(env8567))[2];
//not do dummy comment
void* kont8453 = (decode_clo(env8567))[1];

//if-clause
bool if_guard8907 = is_true(a8381);
if(if_guard8907)
{

//creating new closure instance
void** clo8909 = alloc_clo(lam8556_fptr, 1);

//setting env list
clo8909[1] = kont8453;
void* f8454 = encode_clo(clo8909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8454;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8911 = alloc_clo(lam8564_fptr, 6);

//setting env list
clo8911[1] = kont8453;
clo8911[2] = lst;
clo8911[3] = cons;
clo8911[4] = proc;
clo8911[5] = map;
clo8911[6] = cdr;
void* f8458 = encode_clo(clo8911);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
return nullptr;
}

}

void* lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8568 = arg_buffer[1];
//reading env and args
void* kont8453 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8913 = alloc_clo(lam8566_fptr, 8);

//setting env list
clo8913[1] = kont8453;
clo8913[2] = lst;
clo8913[3] = cdr;
clo8913[4] = list;
clo8913[5] = cons;
clo8913[6] = car;
clo8913[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8913[8] = map;
void* f8459 = encode_clo(clo8913);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8569_fptr() // lam8569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8570 = arg_buffer[1];
//reading env and args
void* xy8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8460 = (decode_clo(env8570))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8460);
arg_buffer[2] = xy8388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8460))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void* lam8571_fptr() // lam8571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8572 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8391 = (decode_clo(env8572))[3];
//not do dummy comment
void* kont8460 = (decode_clo(env8572))[2];
//not do dummy comment
void* cons = (decode_clo(env8572))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8391, a8393);
arg_buffer[1]=reinterpret_cast<void*>(kont8460);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8460))[0]);
function_ptr();
return nullptr;
}

void* lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void* lam8573_fptr() // lam8573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8574 = arg_buffer[1];
//reading env and args
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8391 = (decode_clo(env8574))[5];
//not do dummy comment
void* op = (decode_clo(env8574))[4];
//not do dummy comment
void* kont8460 = (decode_clo(env8574))[3];
//not do dummy comment
void* filter = (decode_clo(env8574))[2];
//not do dummy comment
void* cons = (decode_clo(env8574))[1];

//creating new closure instance
void** clo8915 = alloc_clo(lam8571_fptr, 3);

//setting env list
clo8915[1] = cons;
clo8915[2] = kont8460;
clo8915[3] = a8391;
void* f8462 = encode_clo(clo8915);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8462;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void* lam8575_fptr() // lam8575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8576))[6];
//not do dummy comment
void* lst = (decode_clo(env8576))[5];
//not do dummy comment
void* op = (decode_clo(env8576))[4];
//not do dummy comment
void* kont8460 = (decode_clo(env8576))[3];
//not do dummy comment
void* filter = (decode_clo(env8576))[2];
//not do dummy comment
void* cons = (decode_clo(env8576))[1];

//creating new closure instance
void** clo8917 = alloc_clo(lam8573_fptr, 5);

//setting env list
clo8917[1] = cons;
clo8917[2] = filter;
clo8917[3] = kont8460;
clo8917[4] = op;
clo8917[5] = a8391;
void* f8463 = encode_clo(clo8917);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8578))[3];
//not do dummy comment
void* kont8460 = (decode_clo(env8578))[2];
//not do dummy comment
void* filter = (decode_clo(env8578))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8460;
arg_buffer[3] = op;
arg_buffer[4] = a8394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8580))[7];
//not do dummy comment
void* lst = (decode_clo(env8580))[6];
//not do dummy comment
void* op = (decode_clo(env8580))[5];
//not do dummy comment
void* kont8460 = (decode_clo(env8580))[4];
//not do dummy comment
void* cons = (decode_clo(env8580))[3];
//not do dummy comment
void* filter = (decode_clo(env8580))[2];
//not do dummy comment
void* car = (decode_clo(env8580))[1];

//if-clause
bool if_guard8918 = is_true(a8390);
if(if_guard8918)
{

//creating new closure instance
void** clo8920 = alloc_clo(lam8575_fptr, 6);

//setting env list
clo8920[1] = cons;
clo8920[2] = filter;
clo8920[3] = kont8460;
clo8920[4] = op;
clo8920[5] = lst;
clo8920[6] = cdr;
void* f8464 = encode_clo(clo8920);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8922 = alloc_clo(lam8577_fptr, 3);

//setting env list
clo8922[1] = filter;
clo8922[2] = kont8460;
clo8922[3] = op;
void* f8465 = encode_clo(clo8922);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
function_ptr();
return nullptr;
}

}

void* lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void* lam8581_fptr() // lam8581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8582))[7];
//not do dummy comment
void* lst = (decode_clo(env8582))[6];
//not do dummy comment
void* op = (decode_clo(env8582))[5];
//not do dummy comment
void* kont8460 = (decode_clo(env8582))[4];
//not do dummy comment
void* cons = (decode_clo(env8582))[3];
//not do dummy comment
void* filter = (decode_clo(env8582))[2];
//not do dummy comment
void* car = (decode_clo(env8582))[1];

//creating new closure instance
void** clo8924 = alloc_clo(lam8579_fptr, 7);

//setting env list
clo8924[1] = car;
clo8924[2] = filter;
clo8924[3] = cons;
clo8924[4] = kont8460;
clo8924[5] = op;
clo8924[6] = lst;
clo8924[7] = cdr;
void* f8466 = encode_clo(clo8924);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8466;
arg_buffer[3] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
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
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8584))[8];
//not do dummy comment
void* op = (decode_clo(env8584))[7];
//not do dummy comment
void* kont8460 = (decode_clo(env8584))[6];
//not do dummy comment
void* cons = (decode_clo(env8584))[5];
//not do dummy comment
void* list = (decode_clo(env8584))[4];
//not do dummy comment
void* cdr = (decode_clo(env8584))[3];
//not do dummy comment
void* filter = (decode_clo(env8584))[2];
//not do dummy comment
void* car = (decode_clo(env8584))[1];

//if-clause
bool if_guard8925 = is_true(a8387);
if(if_guard8925)
{

//creating new closure instance
void** clo8927 = alloc_clo(lam8569_fptr, 1);

//setting env list
clo8927[1] = kont8460;
void* f8461 = encode_clo(clo8927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8461;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8929 = alloc_clo(lam8581_fptr, 7);

//setting env list
clo8929[1] = car;
clo8929[2] = filter;
clo8929[3] = cons;
clo8929[4] = kont8460;
clo8929[5] = op;
clo8929[6] = lst;
clo8929[7] = cdr;
void* f8467 = encode_clo(clo8929);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

}

void* lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8585 = arg_buffer[1];
//reading env and args
void* kont8460 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8931 = alloc_clo(lam8583_fptr, 8);

//setting env list
clo8931[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8931[2] = filter;
clo8931[3] = cdr;
clo8931[4] = list;
clo8931[5] = cons;
clo8931[6] = kont8460;
clo8931[7] = op;
clo8931[8] = lst;
void* f8468 = encode_clo(clo8931);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8586_fptr() // lam8586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8397 = (decode_clo(env8587))[3];
//not do dummy comment
void* drop = (decode_clo(env8587))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8587))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8469;
arg_buffer[3] = a8397;
arg_buffer[4] = a8399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void* lam8589_fptr() // lam8589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8590 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env8590))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8590))[3];
//not do dummy comment
void* drop = (decode_clo(env8590))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8590))[1];
mpz_t* mpzvar8932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8932, "1", 10);
void* a8398 = encode_mpz(mpzvar8932);

//creating new closure instance
void** clo8934 = alloc_clo(lam8586_fptr, 3);

//setting env list
clo8934[1] = kont8469;
clo8934[2] = drop;
clo8934[3] = a8397;
void* f8470 = encode_clo(clo8934);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8398);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
function_ptr();
return nullptr;
}

void* lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void* lam8591_fptr() // lam8591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8592 = arg_buffer[1];
//reading env and args
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8592))[6];
//not do dummy comment
void* n = (decode_clo(env8592))[5];
//not do dummy comment
void* _u45 = (decode_clo(env8592))[4];
//not do dummy comment
void* lst = (decode_clo(env8592))[3];
//not do dummy comment
void* drop = (decode_clo(env8592))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8592))[1];

//if-clause
bool if_guard8935 = is_true(a8396);
if(if_guard8935)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8469);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8469))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8937 = alloc_clo(lam8589_fptr, 4);

//setting env list
clo8937[1] = kont8469;
clo8937[2] = drop;
clo8937[3] = _u45;
clo8937[4] = n;
void* f8471 = encode_clo(clo8937);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
function_ptr();
return nullptr;
}

}

void* lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8594 = arg_buffer[1];
//reading env and args
void* kont8469 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8938 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8938, "0", 10);
void* a8395 = encode_mpz(mpzvar8938);

//creating new closure instance
void** clo8940 = alloc_clo(lam8591_fptr, 6);

//setting env list
clo8940[1] = kont8469;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8940[2] = drop;
clo8940[3] = lst;
clo8940[4] = _u45;
clo8940[5] = n;
clo8940[6] = cdr;
void* f8472 = encode_clo(clo8940);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8395);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8595_fptr() // lam8595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8596 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8402 = (decode_clo(env8596))[4];
//not do dummy comment
void* kont8473 = (decode_clo(env8596))[3];
//not do dummy comment
void* fun = (decode_clo(env8596))[2];
//not do dummy comment
void* foldl = (decode_clo(env8596))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8473;
arg_buffer[3] = fun;
arg_buffer[4] = a8402;
arg_buffer[5] = a8403;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8598))[5];
//not do dummy comment
void* lst = (decode_clo(env8598))[4];
//not do dummy comment
void* kont8473 = (decode_clo(env8598))[3];
//not do dummy comment
void* fun = (decode_clo(env8598))[2];
//not do dummy comment
void* foldl = (decode_clo(env8598))[1];

//creating new closure instance
void** clo8942 = alloc_clo(lam8595_fptr, 4);

//setting env list
clo8942[1] = foldl;
clo8942[2] = fun;
clo8942[3] = kont8473;
clo8942[4] = a8402;
void* f8474 = encode_clo(clo8942);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
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
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8600))[6];
//not do dummy comment
void* lst = (decode_clo(env8600))[5];
//not do dummy comment
void* kont8473 = (decode_clo(env8600))[4];
//not do dummy comment
void* fun = (decode_clo(env8600))[3];
//not do dummy comment
void* acc = (decode_clo(env8600))[2];
//not do dummy comment
void* foldl = (decode_clo(env8600))[1];

//creating new closure instance
void** clo8944 = alloc_clo(lam8597_fptr, 5);

//setting env list
clo8944[1] = foldl;
clo8944[2] = fun;
clo8944[3] = kont8473;
clo8944[4] = lst;
clo8944[5] = cdr;
void* f8475 = encode_clo(clo8944);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8475;
arg_buffer[3] = a8401;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8602))[7];
//not do dummy comment
void* lst = (decode_clo(env8602))[6];
//not do dummy comment
void* kont8473 = (decode_clo(env8602))[5];
//not do dummy comment
void* fun = (decode_clo(env8602))[4];
//not do dummy comment
void* acc = (decode_clo(env8602))[3];
//not do dummy comment
void* car = (decode_clo(env8602))[2];
//not do dummy comment
void* foldl = (decode_clo(env8602))[1];

//if-clause
bool if_guard8945 = is_true(a8400);
if(if_guard8945)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8473);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8473))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8947 = alloc_clo(lam8599_fptr, 6);

//setting env list
clo8947[1] = foldl;
clo8947[2] = acc;
clo8947[3] = fun;
clo8947[4] = kont8473;
clo8947[5] = lst;
clo8947[6] = cdr;
void* f8476 = encode_clo(clo8947);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

}

void* lam8601 = encode_clo(alloc_clo(lam8601_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8603 = arg_buffer[1];
//reading env and args
void* kont8473 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8949 = alloc_clo(lam8601_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8949[1] = foldl;
clo8949[2] = car;
clo8949[3] = acc;
clo8949[4] = fun;
clo8949[5] = kont8473;
clo8949[6] = lst;
clo8949[7] = cdr;
void* f8477 = encode_clo(clo8949);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8604_fptr() // lam8604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8605 = arg_buffer[1];
//reading env and args
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8405 = (decode_clo(env8605))[3];
//not do dummy comment
void* fun = (decode_clo(env8605))[2];
//not do dummy comment
void* kont8478 = (decode_clo(env8605))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8478;
arg_buffer[3] = a8405;
arg_buffer[4] = a8407;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void* lam8606_fptr() // lam8606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8607 = arg_buffer[1];
//reading env and args
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8607))[5];
//not do dummy comment
void* acc = (decode_clo(env8607))[4];
//not do dummy comment
void* kont8478 = (decode_clo(env8607))[3];
//not do dummy comment
void* foldr = (decode_clo(env8607))[2];
//not do dummy comment
void* a8405 = (decode_clo(env8607))[1];

//creating new closure instance
void** clo8951 = alloc_clo(lam8604_fptr, 3);

//setting env list
clo8951[1] = kont8478;
clo8951[2] = fun;
clo8951[3] = a8405;
void* f8479 = encode_clo(clo8951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8479;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8406;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8606 = encode_clo(alloc_clo(lam8606_fptr, 0));

void* lam8608_fptr() // lam8608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8609 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8609))[6];
//not do dummy comment
void* fun = (decode_clo(env8609))[5];
//not do dummy comment
void* acc = (decode_clo(env8609))[4];
//not do dummy comment
void* kont8478 = (decode_clo(env8609))[3];
//not do dummy comment
void* foldr = (decode_clo(env8609))[2];
//not do dummy comment
void* lst = (decode_clo(env8609))[1];

//creating new closure instance
void** clo8953 = alloc_clo(lam8606_fptr, 5);

//setting env list
clo8953[1] = a8405;
clo8953[2] = foldr;
clo8953[3] = kont8478;
clo8953[4] = acc;
clo8953[5] = fun;
void* f8480 = encode_clo(clo8953);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8480);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8611))[7];
//not do dummy comment
void* fun = (decode_clo(env8611))[6];
//not do dummy comment
void* acc = (decode_clo(env8611))[5];
//not do dummy comment
void* foldr = (decode_clo(env8611))[4];
//not do dummy comment
void* lst = (decode_clo(env8611))[3];
//not do dummy comment
void* car = (decode_clo(env8611))[2];
//not do dummy comment
void* kont8478 = (decode_clo(env8611))[1];

//if-clause
bool if_guard8954 = is_true(a8404);
if(if_guard8954)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8478);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8478))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8956 = alloc_clo(lam8608_fptr, 6);

//setting env list
clo8956[1] = lst;
clo8956[2] = foldr;
clo8956[3] = kont8478;
clo8956[4] = acc;
clo8956[5] = fun;
clo8956[6] = cdr;
void* f8481 = encode_clo(clo8956);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8481);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
function_ptr();
return nullptr;
}

}

void* lam8610 = encode_clo(alloc_clo(lam8610_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8612 = arg_buffer[1];
//reading env and args
void* kont8478 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8958 = alloc_clo(lam8610_fptr, 7);

//setting env list
clo8958[1] = kont8478;
clo8958[2] = car;
clo8958[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8958[4] = foldr;
clo8958[5] = acc;
clo8958[6] = fun;
clo8958[7] = cdr;
void* f8482 = encode_clo(clo8958);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8613_fptr() // lam8613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8614 = arg_buffer[1];
//reading env and args
void* a8411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8483 = (decode_clo(env8614))[3];
//not do dummy comment
void* a8409 = (decode_clo(env8614))[2];
//not do dummy comment
void* cons = (decode_clo(env8614))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8409, a8411);
arg_buffer[1]=reinterpret_cast<void*>(kont8483);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
function_ptr();
return nullptr;
}

void* lam8613 = encode_clo(alloc_clo(lam8613_fptr, 0));

void* lam8615_fptr() // lam8615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8616 = arg_buffer[1];
//reading env and args
void* a8410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8483 = (decode_clo(env8616))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8616))[4];
//not do dummy comment
void* cons = (decode_clo(env8616))[3];
//not do dummy comment
void* append = (decode_clo(env8616))[2];
//not do dummy comment
void* a8409 = (decode_clo(env8616))[1];

//creating new closure instance
void** clo8960 = alloc_clo(lam8613_fptr, 3);

//setting env list
clo8960[1] = cons;
clo8960[2] = a8409;
clo8960[3] = kont8483;
void* f8484 = encode_clo(clo8960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8484;
arg_buffer[3] = a8410;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
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
void* a8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8618))[6];
//not do dummy comment
void* kont8483 = (decode_clo(env8618))[5];
//not do dummy comment
void* append = (decode_clo(env8618))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8618))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8618))[2];
//not do dummy comment
void* cons = (decode_clo(env8618))[1];

//creating new closure instance
void** clo8962 = alloc_clo(lam8615_fptr, 5);

//setting env list
clo8962[1] = a8409;
clo8962[2] = append;
clo8962[3] = cons;
clo8962[4] = lst2;
clo8962[5] = kont8483;
void* f8485 = encode_clo(clo8962);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8485);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8485))[0]);
function_ptr();
return nullptr;
}

void* lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void* lam8619_fptr() // lam8619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8620 = arg_buffer[1];
//reading env and args
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8620))[7];
//not do dummy comment
void* kont8483 = (decode_clo(env8620))[6];
//not do dummy comment
void* append = (decode_clo(env8620))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8620))[4];
//not do dummy comment
void* cons = (decode_clo(env8620))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8620))[2];
//not do dummy comment
void* car = (decode_clo(env8620))[1];

//if-clause
bool if_guard8963 = is_true(a8408);
if(if_guard8963)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8483);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8965 = alloc_clo(lam8617_fptr, 6);

//setting env list
clo8965[1] = cons;
clo8965[2] = lst1;
clo8965[3] = lst2;
clo8965[4] = append;
clo8965[5] = kont8483;
clo8965[6] = cdr;
void* f8486 = encode_clo(clo8965);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8486);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8486))[0]);
function_ptr();
return nullptr;
}

}

void* lam8619 = encode_clo(alloc_clo(lam8619_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8621 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8967 = alloc_clo(lam8619_fptr, 7);

//setting env list
clo8967[1] = car;
clo8967[2] = lst1;
clo8967[3] = cons;
clo8967[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8967[5] = append;
clo8967[6] = kont8483;
clo8967[7] = cdr;
void* f8487 = encode_clo(clo8967);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8487);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8487))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8622_fptr() // lam8622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8623 = arg_buffer[1];
//reading env and args
void* a8421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* set_u45count = (decode_clo(env8623))[2];
//not do dummy comment
void* kont8488 = (decode_clo(env8623))[1];
void* cps_u45lst8489 = prim_cons(kont8488, a8421);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(set_u45count);
arg_buffer[2] = cps_u45lst8489;
arg_buffer[0] = reinterpret_cast<void*>(2);
set_u45count_fptr();
return nullptr;
}

void* lam8622 = encode_clo(alloc_clo(lam8622_fptr, 0));

void* lam8624_fptr() // lam8624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8625 = arg_buffer[1];
//reading env and args
void* a8420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env8625))[3];
//not do dummy comment
void* set_u45count = (decode_clo(env8625))[2];
//not do dummy comment
void* kont8488 = (decode_clo(env8625))[1];

//creating new closure instance
void** clo8969 = alloc_clo(lam8622_fptr, 2);

//setting env list
clo8969[1] = kont8488;
clo8969[2] = set_u45count;
void* f8490 = encode_clo(clo8969);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8490;
arg_buffer[3] = a8420;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8624 = encode_clo(alloc_clo(lam8624_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8634 = arg_buffer[1];
//reading env and args
void* kont8488 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8970 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8970, "1", 10);
void* a8412 = encode_mpz(mpzvar8970);
mpz_t* mpzvar8971 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8971, "2", 10);
void* a8413 = encode_mpz(mpzvar8971);
mpz_t* mpzvar8972 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8972, "2", 10);
void* a8414 = encode_mpz(mpzvar8972);
mpf_t* mpfvar8973 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8973, "3.5", 10);
void* a8415 = encode_mpf(mpfvar8973);
mpz_t* mpzvar8974 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8974, "3", 10);
void* a8416 = encode_mpz(mpzvar8974);
mpz_t* mpzvar8975 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8975, "4", 10);
void* a8417 = encode_mpz(mpzvar8975);
void* a8418 = encode_str(new(GC) std::string("haha"));
mpz_t* mpzvar8976 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8976, "10", 10);
void* a8419 = encode_mpz(mpzvar8976);

//creating new closure instance
void** clo8978 = alloc_clo(lam8624_fptr, 3);

//setting env list
clo8978[1] = kont8488;
clo8978[2] = set_u45count;
clo8978[3] = list;
void* f8491 = encode_clo(clo8978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(set);
arg_buffer[2] = f8491;
arg_buffer[3] = a8412;
arg_buffer[4] = a8413;
arg_buffer[5] = a8414;
arg_buffer[6] = a8415;
arg_buffer[7] = a8416;
arg_buffer[8] = a8417;
arg_buffer[9] = a8418;
arg_buffer[10] = a8419;
arg_buffer[0] = reinterpret_cast<void*>(10);
set_fptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8635_fptr() // lam8635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8636 = arg_buffer[1];
//reading env and args
void* xy8422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8492 = (decode_clo(env8636))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8492);
arg_buffer[2] = xy8422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8635 = encode_clo(alloc_clo(lam8635_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8637 = arg_buffer[1];
//reading env and args
void* kont8492 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8980 = alloc_clo(lam8635_fptr, 1);

//setting env list
clo8980[1] = kont8492;
void* f8493 = encode_clo(clo8980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8493;
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

