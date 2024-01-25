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
void* _env8635 = arg_buffer[1];
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

void* kont8633 = prim_car(lst);
void* lst8636 = prim_cdr(lst);
void* x8634 = apply_prim__u43(lst8636);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8633);
arg_buffer[2] = x8634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8633))[0]);
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
void* _env8639 = arg_buffer[1];
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

void* kont8637 = prim_car(lst);
void* lst8640 = prim_cdr(lst);
void* x8638 = apply_prim__u45(lst8640);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8637);
arg_buffer[2] = x8638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8637))[0]);
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
void* _env8643 = arg_buffer[1];
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

void* kont8641 = prim_car(lst);
void* lst8644 = prim_cdr(lst);
void* x8642 = apply_prim__u42(lst8644);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8641);
arg_buffer[2] = x8642;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8641))[0]);
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
void* _env8647 = arg_buffer[1];
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

void* kont8645 = prim_car(lst);
void* lst8648 = prim_cdr(lst);
void* x8646 = apply_prim__u47(lst8648);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8645);
arg_buffer[2] = x8646;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8645))[0]);
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
void* _env8651 = arg_buffer[1];
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

void* kont8649 = prim_car(lst);
void* lst8652 = prim_cdr(lst);
void* x8650 = apply_prim__u61(lst8652);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8649);
arg_buffer[2] = x8650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8649))[0]);
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
void* _env8655 = arg_buffer[1];
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

void* kont8653 = prim_car(lst);
void* lst8656 = prim_cdr(lst);
void* x8654 = apply_prim__u62(lst8656);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8653);
arg_buffer[2] = x8654;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8653))[0]);
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
void* _env8659 = arg_buffer[1];
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

void* kont8657 = prim_car(lst);
void* lst8660 = prim_cdr(lst);
void* x8658 = apply_prim__u60(lst8660);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8657);
arg_buffer[2] = x8658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8657))[0]);
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
void* _env8663 = arg_buffer[1];
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

void* kont8661 = prim_car(lst);
void* lst8664 = prim_cdr(lst);
void* x8662 = apply_prim__u60_u61(lst8664);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8661);
arg_buffer[2] = x8662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8661))[0]);
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
void* x8666 = apply_prim__u62_u61(lst8668);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8665);
arg_buffer[2] = x8666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8665))[0]);
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
void* x8670 = apply_prim_modulo(lst8672);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8669);
arg_buffer[2] = x8670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8669))[0]);
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
void* x8674 = apply_prim_null_u63(lst8676);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8673);
arg_buffer[2] = x8674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8673))[0]);
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
void* x8678 = apply_prim_equal_u63(lst8680);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8677);
arg_buffer[2] = x8678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8677))[0]);
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
void* x8682 = apply_prim_eq_u63(lst8684);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8681);
arg_buffer[2] = x8682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8681))[0]);
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
void* x8686 = apply_prim_cons(lst8688);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8685);
arg_buffer[2] = x8686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8685))[0]);
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
void* x8690 = apply_prim_car(lst8692);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8689);
arg_buffer[2] = x8690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8689))[0]);
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
void* x8694 = apply_prim_cdr(lst8696);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8693);
arg_buffer[2] = x8694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8693))[0]);
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
void* x8698 = apply_prim_float_u45_u62int(lst8700);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8697);
arg_buffer[2] = x8698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8697))[0]);
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
void* x8702 = apply_prim_int_u45_u62float(lst8704);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8701);
arg_buffer[2] = x8702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8701))[0]);
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
void* x8706 = apply_prim_hash(lst8708);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8705);
arg_buffer[2] = x8706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8705))[0]);
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
void* x8710 = apply_prim_hash_u45ref(lst8712);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8709);
arg_buffer[2] = x8710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8709))[0]);
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
void* x8714 = apply_prim_hash_u45set(lst8716);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8713);
arg_buffer[2] = x8714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8713))[0]);
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
void* x8718 = apply_prim_hash_u45keys(lst8720);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8717);
arg_buffer[2] = x8718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8717))[0]);
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
void* x8722 = apply_prim_hash_u45has_u45key_u63(lst8724);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8721);
arg_buffer[2] = x8722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8721))[0]);
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
void* x8726 = apply_prim_hash_u45count(lst8728);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8725);
arg_buffer[2] = x8726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8725))[0]);
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
void* x8730 = apply_prim_set(lst8732);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8729);
arg_buffer[2] = x8730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8729))[0]);
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
void* x8734 = apply_prim_set_u45_u62list(lst8736);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8733);
arg_buffer[2] = x8734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8733))[0]);
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
void* x8738 = apply_prim_list_u45_u62set(lst8740);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8737);
arg_buffer[2] = x8738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8737))[0]);
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
void* x8742 = apply_prim_set_u45add(lst8744);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8741);
arg_buffer[2] = x8742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8741))[0]);
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
void* x8746 = apply_prim_string_u63(lst8748);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8745);
arg_buffer[2] = x8746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8745))[0]);
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
void* x8750 = apply_prim_string_u45length(lst8752);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8749);
arg_buffer[2] = x8750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8749))[0]);
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
void* x8754 = apply_prim_string_u45ref(lst8756);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8753);
arg_buffer[2] = x8754;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8753))[0]);
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
void* x8758 = apply_prim_substring(lst8760);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8757);
arg_buffer[2] = x8758;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8757))[0]);
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
void* x8762 = apply_prim_string_u45append(lst8764);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8761);
arg_buffer[2] = x8762;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8761))[0]);
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
void* x8766 = apply_prim_string_u45_u62list(lst8768);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8765);
arg_buffer[2] = x8766;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8765))[0]);
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
void* x8770 = apply_prim_exact_u45floor(lst8772);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8769);
arg_buffer[2] = x8770;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8769))[0]);
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
void* x8774 = apply_prim_exact_u45ceiling(lst8776);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8773);
arg_buffer[2] = x8774;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8773))[0]);
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
void* x8778 = apply_prim_exact_u45round(lst8780);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8777);
arg_buffer[2] = x8778;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8777))[0]);
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
void* x8782 = apply_prim_absolute(lst8784);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8781);
arg_buffer[2] = x8782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8781))[0]);
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
void* x8786 = apply_prim_max(lst8788);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8785);
arg_buffer[2] = x8786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8785))[0]);
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
void* _env8791 = arg_buffer[1];
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

void* kont8789 = prim_car(lst);
void* lst8792 = prim_cdr(lst);
void* x8790 = apply_prim_min(lst8792);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8789);
arg_buffer[2] = x8790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8789))[0]);
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
void* _env8795 = arg_buffer[1];
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

void* kont8793 = prim_car(lst);
void* lst8796 = prim_cdr(lst);
void* x8794 = apply_prim_expt(lst8796);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8793);
arg_buffer[2] = x8794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8793))[0]);
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
void* _env8799 = arg_buffer[1];
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

void* kont8797 = prim_car(lst);
void* lst8800 = prim_cdr(lst);
void* x8798 = apply_prim_squareroot(lst8800);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8797);
arg_buffer[2] = x8798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8797))[0]);
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
void* _env8803 = arg_buffer[1];
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

void* kont8801 = prim_car(lst);
void* lst8804 = prim_cdr(lst);
void* x8802 = apply_prim_remaind(lst8804);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8801);
arg_buffer[2] = x8802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8801))[0]);
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
void* _env8807 = arg_buffer[1];
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

void* kont8805 = prim_car(lst);
void* lst8808 = prim_cdr(lst);
void* x8806 = apply_prim_quotient(lst8808);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8805);
arg_buffer[2] = x8806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8805))[0]);
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
void* _env8811 = arg_buffer[1];
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

void* kont8809 = prim_car(lst);
void* lst8812 = prim_cdr(lst);
void* x8810 = apply_prim_randnum(lst8812);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8809);
arg_buffer[2] = x8810;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8809))[0]);
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
void* _env8815 = arg_buffer[1];
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

void* kont8813 = prim_car(lst);
void* lst8816 = prim_cdr(lst);
void* x8814 = apply_prim_symbol_u63(lst8816);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8813);
arg_buffer[2] = x8814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8813))[0]);
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
void* _env8819 = arg_buffer[1];
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

void* kont8817 = prim_car(lst);
void* lst8820 = prim_cdr(lst);
void* x8818 = apply_prim_pair_u63(lst8820);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8817);
arg_buffer[2] = x8818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8817))[0]);
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
void* _env8823 = arg_buffer[1];
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

void* kont8821 = prim_car(lst);
void* lst8824 = prim_cdr(lst);
void* x8822 = apply_prim_positive_u63(lst8824);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8821);
arg_buffer[2] = x8822;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8821))[0]);
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
void* _env8827 = arg_buffer[1];
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

void* kont8825 = prim_car(lst);
void* lst8828 = prim_cdr(lst);
void* x8826 = apply_prim_negative_u63(lst8828);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8825);
arg_buffer[2] = x8826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8825))[0]);
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

void* kont8420 = prim_car(x);
void* x8491 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8420);
arg_buffer[2] = x8491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8420))[0]);
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
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8421 = (decode_clo(env8494))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8494))[2];
//not do dummy comment
void* a8350 = (decode_clo(env8494))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8350, a8352);
arg_buffer[1]=reinterpret_cast<void*>(kont8421);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8421))[0]);
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
void* kont8421 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8829 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8829, "0", 10);
void* a8350 = encode_mpz(mpzvar8829);
mpz_t* mpzvar8830 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8830, "2", 10);
void* a8351 = encode_mpz(mpzvar8830);

//creating new closure instance
void** clo8832 = alloc_clo(lam8493_fptr, 3);

//setting env list
clo8832[1] = a8350;
clo8832[2] = equal_u63;
clo8832[3] = kont8421;
void* f8422 = encode_clo(clo8832);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8351);
arg_buffer[1]=reinterpret_cast<void*>(f8422);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8422))[0]);
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
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8353 = (decode_clo(env8499))[3];
//not do dummy comment
void* kont8423 = (decode_clo(env8499))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8499))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8353, a8355);
arg_buffer[1]=reinterpret_cast<void*>(kont8423);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
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
void* kont8423 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8833 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8833, "1", 10);
void* a8353 = encode_mpz(mpzvar8833);
mpz_t* mpzvar8834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8834, "2", 10);
void* a8354 = encode_mpz(mpzvar8834);

//creating new closure instance
void** clo8836 = alloc_clo(lam8498_fptr, 3);

//setting env list
clo8836[1] = equal_u63;
clo8836[2] = kont8423;
clo8836[3] = a8353;
void* f8424 = encode_clo(clo8836);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8354);
arg_buffer[1]=reinterpret_cast<void*>(f8424);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8424))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8425 = (decode_clo(env8506))[3];
//not do dummy comment
void* x = (decode_clo(env8506))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8506))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8425;
arg_buffer[3] = x;
arg_buffer[4] = a8361;
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
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8508))[5];
//not do dummy comment
void* lst = (decode_clo(env8508))[4];
//not do dummy comment
void* kont8425 = (decode_clo(env8508))[3];
//not do dummy comment
void* x = (decode_clo(env8508))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8508))[1];

//if-clause
bool if_guard8837 = is_true(a8359);
if(if_guard8837)
{
void* xy8360 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8425);
arg_buffer[2] = xy8360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8839 = alloc_clo(lam8505_fptr, 3);

//setting env list
clo8839[1] = member_u63;
clo8839[2] = x;
clo8839[3] = kont8425;
void* f8426 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8510))[6];
//not do dummy comment
void* lst = (decode_clo(env8510))[5];
//not do dummy comment
void* x = (decode_clo(env8510))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8510))[3];
//not do dummy comment
void* kont8425 = (decode_clo(env8510))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8510))[1];

//creating new closure instance
void** clo8841 = alloc_clo(lam8507_fptr, 5);

//setting env list
clo8841[1] = member_u63;
clo8841[2] = x;
clo8841[3] = kont8425;
clo8841[4] = lst;
clo8841[5] = cdr;
void* f8427 = encode_clo(clo8841);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8358, x);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8512))[7];
//not do dummy comment
void* lst = (decode_clo(env8512))[6];
//not do dummy comment
void* x = (decode_clo(env8512))[5];
//not do dummy comment
void* car = (decode_clo(env8512))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8512))[3];
//not do dummy comment
void* kont8425 = (decode_clo(env8512))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8512))[1];

//if-clause
bool if_guard8842 = is_true(a8356);
if(if_guard8842)
{
void* xy8357 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8425);
arg_buffer[2] = xy8357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8844 = alloc_clo(lam8509_fptr, 6);

//setting env list
clo8844[1] = equal_u63;
clo8844[2] = kont8425;
clo8844[3] = member_u63;
clo8844[4] = x;
clo8844[5] = lst;
clo8844[6] = cdr;
void* f8428 = encode_clo(clo8844);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
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
void* kont8425 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8846 = alloc_clo(lam8511_fptr, 7);

//setting env list
clo8846[1] = equal_u63;
clo8846[2] = kont8425;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8846[3] = member_u63;
clo8846[4] = car;
clo8846[5] = x;
clo8846[6] = lst;
clo8846[7] = cdr;
void* f8429 = encode_clo(clo8846);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
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
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8515))[4];
//not do dummy comment
void* a8364 = (decode_clo(env8515))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8515))[2];
//not do dummy comment
void* foldl = (decode_clo(env8515))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8430;
arg_buffer[3] = fun;
arg_buffer[4] = a8364;
arg_buffer[5] = a8365;
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
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8517))[5];
//not do dummy comment
void* lst = (decode_clo(env8517))[4];
//not do dummy comment
void* fun = (decode_clo(env8517))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8517))[2];
//not do dummy comment
void* foldl = (decode_clo(env8517))[1];

//creating new closure instance
void** clo8848 = alloc_clo(lam8514_fptr, 4);

//setting env list
clo8848[1] = foldl;
clo8848[2] = kont8430;
clo8848[3] = a8364;
clo8848[4] = fun;
void* f8431 = encode_clo(clo8848);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
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
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8519))[6];
//not do dummy comment
void* lst = (decode_clo(env8519))[5];
//not do dummy comment
void* fun = (decode_clo(env8519))[4];
//not do dummy comment
void* acc = (decode_clo(env8519))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8519))[2];
//not do dummy comment
void* foldl = (decode_clo(env8519))[1];

//creating new closure instance
void** clo8850 = alloc_clo(lam8516_fptr, 5);

//setting env list
clo8850[1] = foldl;
clo8850[2] = kont8430;
clo8850[3] = fun;
clo8850[4] = lst;
clo8850[5] = cdr;
void* f8432 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim__u43_2(a8363, acc);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
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
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8521))[7];
//not do dummy comment
void* lst = (decode_clo(env8521))[6];
//not do dummy comment
void* fun = (decode_clo(env8521))[5];
//not do dummy comment
void* acc = (decode_clo(env8521))[4];
//not do dummy comment
void* foldl = (decode_clo(env8521))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8521))[2];
//not do dummy comment
void* car = (decode_clo(env8521))[1];

//if-clause
bool if_guard8851 = is_true(a8362);
if(if_guard8851)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8430);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8853 = alloc_clo(lam8518_fptr, 6);

//setting env list
clo8853[1] = foldl;
clo8853[2] = kont8430;
clo8853[3] = acc;
clo8853[4] = fun;
clo8853[5] = lst;
clo8853[6] = cdr;
void* f8433 = encode_clo(clo8853);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
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
void* kont8430 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8855 = alloc_clo(lam8520_fptr, 7);

//setting env list
clo8855[1] = car;
clo8855[2] = kont8430;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8855[3] = foldl;
clo8855[4] = acc;
clo8855[5] = fun;
clo8855[6] = lst;
clo8855[7] = cdr;
void* f8434 = encode_clo(clo8855);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
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
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8435 = (decode_clo(env8524))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8524))[2];
//not do dummy comment
void* a8367 = (decode_clo(env8524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8435;
arg_buffer[3] = a8367;
arg_buffer[4] = a8369;
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
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8435 = (decode_clo(env8526))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8526))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8526))[3];
//not do dummy comment
void* cons = (decode_clo(env8526))[2];
//not do dummy comment
void* a8367 = (decode_clo(env8526))[1];

//creating new closure instance
void** clo8857 = alloc_clo(lam8523_fptr, 3);

//setting env list
clo8857[1] = a8367;
clo8857[2] = reverse_u45helper;
clo8857[3] = kont8435;
void* f8436 = encode_clo(clo8857);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8368, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
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
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8435 = (decode_clo(env8528))[6];
//not do dummy comment
void* lst = (decode_clo(env8528))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8528))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8528))[3];
//not do dummy comment
void* car = (decode_clo(env8528))[2];
//not do dummy comment
void* cons = (decode_clo(env8528))[1];

//creating new closure instance
void** clo8859 = alloc_clo(lam8525_fptr, 5);

//setting env list
clo8859[1] = a8367;
clo8859[2] = cons;
clo8859[3] = lst2;
clo8859[4] = reverse_u45helper;
clo8859[5] = kont8435;
void* f8437 = encode_clo(clo8859);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8530))[7];
//not do dummy comment
void* kont8435 = (decode_clo(env8530))[6];
//not do dummy comment
void* lst = (decode_clo(env8530))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8530))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8530))[3];
//not do dummy comment
void* car = (decode_clo(env8530))[2];
//not do dummy comment
void* cons = (decode_clo(env8530))[1];

//if-clause
bool if_guard8860 = is_true(a8366);
if(if_guard8860)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8435);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8862 = alloc_clo(lam8527_fptr, 6);

//setting env list
clo8862[1] = cons;
clo8862[2] = car;
clo8862[3] = lst2;
clo8862[4] = reverse_u45helper;
clo8862[5] = lst;
clo8862[6] = kont8435;
void* f8438 = encode_clo(clo8862);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
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
void* kont8435 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8864 = alloc_clo(lam8529_fptr, 7);

//setting env list
clo8864[1] = cons;
clo8864[2] = car;
clo8864[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8864[4] = reverse_u45helper;
clo8864[5] = lst;
clo8864[6] = kont8435;
clo8864[7] = cdr;
void* f8439 = encode_clo(clo8864);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8533))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8533))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8533))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8440;
arg_buffer[3] = lst;
arg_buffer[4] = a8370;
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
void* kont8440 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8866 = alloc_clo(lam8532_fptr, 3);

//setting env list
clo8866[1] = kont8440;
clo8866[2] = reverse_u45helper;
clo8866[3] = lst;
void* f8441 = encode_clo(clo8866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8441;
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
void* xy8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8442 = (decode_clo(env8536))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8442);
arg_buffer[2] = xy8373;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8442))[0]);
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
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8374 = (decode_clo(env8538))[4];
//not do dummy comment
void* a8376 = (decode_clo(env8538))[3];
//not do dummy comment
void* kont8442 = (decode_clo(env8538))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8538))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8442;
arg_buffer[3] = a8374;
arg_buffer[4] = a8376;
arg_buffer[5] = a8378;
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8374 = (decode_clo(env8540))[6];
//not do dummy comment
void* a8376 = (decode_clo(env8540))[5];
//not do dummy comment
void* kont8442 = (decode_clo(env8540))[4];
//not do dummy comment
void* cons = (decode_clo(env8540))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8540))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8540))[1];

//creating new closure instance
void** clo8868 = alloc_clo(lam8537_fptr, 4);

//setting env list
clo8868[1] = take_u45helper;
clo8868[2] = kont8442;
clo8868[3] = a8376;
clo8868[4] = a8374;
void* f8444 = encode_clo(clo8868);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8377, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
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
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8542))[7];
//not do dummy comment
void* a8374 = (decode_clo(env8542))[6];
//not do dummy comment
void* kont8442 = (decode_clo(env8542))[5];
//not do dummy comment
void* car = (decode_clo(env8542))[4];
//not do dummy comment
void* cons = (decode_clo(env8542))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8542))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8542))[1];

//creating new closure instance
void** clo8870 = alloc_clo(lam8539_fptr, 6);

//setting env list
clo8870[1] = lst2;
clo8870[2] = take_u45helper;
clo8870[3] = cons;
clo8870[4] = kont8442;
clo8870[5] = a8376;
clo8870[6] = a8374;
void* f8445 = encode_clo(clo8870);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
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
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8545))[8];
//not do dummy comment
void* kont8442 = (decode_clo(env8545))[7];
//not do dummy comment
void* cons = (decode_clo(env8545))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8545))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8545))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8545))[3];
//not do dummy comment
void* n = (decode_clo(env8545))[2];
//not do dummy comment
void* car = (decode_clo(env8545))[1];
mpz_t* mpzvar8871 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8871, "1", 10);
void* a8375 = encode_mpz(mpzvar8871);

//creating new closure instance
void** clo8873 = alloc_clo(lam8541_fptr, 7);

//setting env list
clo8873[1] = lst2;
clo8873[2] = take_u45helper;
clo8873[3] = cons;
clo8873[4] = car;
clo8873[5] = kont8442;
clo8873[6] = a8374;
clo8873[7] = lst;
void* f8446 = encode_clo(clo8873);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8375);
arg_buffer[1]=reinterpret_cast<void*>(f8446);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8547))[10];
//not do dummy comment
void* lst = (decode_clo(env8547))[9];
//not do dummy comment
void* reverse = (decode_clo(env8547))[8];
//not do dummy comment
void* kont8442 = (decode_clo(env8547))[7];
//not do dummy comment
void* cons = (decode_clo(env8547))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8547))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8547))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8547))[3];
//not do dummy comment
void* n = (decode_clo(env8547))[2];
//not do dummy comment
void* car = (decode_clo(env8547))[1];

//if-clause
bool if_guard8874 = is_true(a8372);
if(if_guard8874)
{

//creating new closure instance
void** clo8876 = alloc_clo(lam8535_fptr, 1);

//setting env list
clo8876[1] = kont8442;
void* f8443 = encode_clo(clo8876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8443;
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
void** clo8878 = alloc_clo(lam8544_fptr, 8);

//setting env list
clo8878[1] = car;
clo8878[2] = n;
clo8878[3] = lst2;
clo8878[4] = take_u45helper;
clo8878[5] = _u45;
clo8878[6] = cons;
clo8878[7] = kont8442;
clo8878[8] = lst;
void* f8447 = encode_clo(clo8878);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8447);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8447))[0]);
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
void* kont8442 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8879 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8879, "0", 10);
void* a8371 = encode_mpz(mpzvar8879);

//creating new closure instance
void** clo8881 = alloc_clo(lam8546_fptr, 10);

//setting env list
clo8881[1] = car;
clo8881[2] = n;
clo8881[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8881[4] = take_u45helper;
clo8881[5] = _u45;
clo8881[6] = cons;
clo8881[7] = kont8442;
clo8881[8] = reverse;
clo8881[9] = lst;
clo8881[10] = cdr;
void* f8448 = encode_clo(clo8881);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8371);
arg_buffer[1]=reinterpret_cast<void*>(f8448);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8449 = (decode_clo(env8551))[4];
//not do dummy comment
void* lst = (decode_clo(env8551))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8551))[2];
//not do dummy comment
void* n = (decode_clo(env8551))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8449;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8379;
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
void* kont8449 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8883 = alloc_clo(lam8550_fptr, 4);

//setting env list
clo8883[1] = n;
clo8883[2] = take_u45helper;
clo8883[3] = lst;
clo8883[4] = kont8449;
void* f8450 = encode_clo(clo8883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8450;
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8555))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8555))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8555))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8451);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8557))[4];
//not do dummy comment
void* length = (decode_clo(env8557))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8557))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8557))[1];

//creating new closure instance
void** clo8885 = alloc_clo(lam8554_fptr, 3);

//setting env list
clo8885[1] = a8382;
clo8885[2] = _u43;
clo8885[3] = kont8451;
void* f8452 = encode_clo(clo8885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8452;
arg_buffer[3] = a8383;
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
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8560))[5];
//not do dummy comment
void* kont8451 = (decode_clo(env8560))[4];
//not do dummy comment
void* lst = (decode_clo(env8560))[3];
//not do dummy comment
void* length = (decode_clo(env8560))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8560))[1];

//if-clause
bool if_guard8886 = is_true(a8380);
if(if_guard8886)
{
mpz_t* mpzvar8887 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8887, "0", 10);
void* xy8381 = encode_mpz(mpzvar8887);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8451);
arg_buffer[2] = xy8381;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8888 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8888, "1", 10);
void* a8382 = encode_mpz(mpzvar8888);

//creating new closure instance
void** clo8890 = alloc_clo(lam8556_fptr, 4);

//setting env list
clo8890[1] = a8382;
clo8890[2] = _u43;
clo8890[3] = length;
clo8890[4] = kont8451;
void* f8453 = encode_clo(clo8890);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
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
void* kont8451 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8892 = alloc_clo(lam8559_fptr, 5);

//setting env list
clo8892[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8892[2] = length;
clo8892[3] = lst;
clo8892[4] = kont8451;
clo8892[5] = cdr;
void* f8454 = encode_clo(clo8892);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8454);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
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
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8455 = (decode_clo(env8563))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8455);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8388 = (decode_clo(env8565))[3];
//not do dummy comment
void* kont8455 = (decode_clo(env8565))[2];
//not do dummy comment
void* cons = (decode_clo(env8565))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8388, a8390);
arg_buffer[1]=reinterpret_cast<void*>(kont8455);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
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
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8388 = (decode_clo(env8567))[5];
//not do dummy comment
void* map = (decode_clo(env8567))[4];
//not do dummy comment
void* kont8455 = (decode_clo(env8567))[3];
//not do dummy comment
void* proc = (decode_clo(env8567))[2];
//not do dummy comment
void* cons = (decode_clo(env8567))[1];

//creating new closure instance
void** clo8894 = alloc_clo(lam8564_fptr, 3);

//setting env list
clo8894[1] = cons;
clo8894[2] = kont8455;
clo8894[3] = a8388;
void* f8457 = encode_clo(clo8894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8457;
arg_buffer[3] = proc;
arg_buffer[4] = a8389;
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
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8569))[6];
//not do dummy comment
void* lst = (decode_clo(env8569))[5];
//not do dummy comment
void* map = (decode_clo(env8569))[4];
//not do dummy comment
void* kont8455 = (decode_clo(env8569))[3];
//not do dummy comment
void* proc = (decode_clo(env8569))[2];
//not do dummy comment
void* cons = (decode_clo(env8569))[1];

//creating new closure instance
void** clo8896 = alloc_clo(lam8566_fptr, 5);

//setting env list
clo8896[1] = cons;
clo8896[2] = proc;
clo8896[3] = kont8455;
clo8896[4] = map;
clo8896[5] = a8388;
void* f8458 = encode_clo(clo8896);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
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
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8571))[6];
//not do dummy comment
void* lst = (decode_clo(env8571))[5];
//not do dummy comment
void* map = (decode_clo(env8571))[4];
//not do dummy comment
void* kont8455 = (decode_clo(env8571))[3];
//not do dummy comment
void* proc = (decode_clo(env8571))[2];
//not do dummy comment
void* cons = (decode_clo(env8571))[1];

//creating new closure instance
void** clo8898 = alloc_clo(lam8568_fptr, 6);

//setting env list
clo8898[1] = cons;
clo8898[2] = proc;
clo8898[3] = kont8455;
clo8898[4] = map;
clo8898[5] = lst;
clo8898[6] = cdr;
void* f8459 = encode_clo(clo8898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8459;
arg_buffer[3] = a8387;
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8573))[8];
//not do dummy comment
void* map = (decode_clo(env8573))[7];
//not do dummy comment
void* kont8455 = (decode_clo(env8573))[6];
//not do dummy comment
void* proc = (decode_clo(env8573))[5];
//not do dummy comment
void* car = (decode_clo(env8573))[4];
//not do dummy comment
void* cons = (decode_clo(env8573))[3];
//not do dummy comment
void* list = (decode_clo(env8573))[2];
//not do dummy comment
void* cdr = (decode_clo(env8573))[1];

//if-clause
bool if_guard8899 = is_true(a8385);
if(if_guard8899)
{

//creating new closure instance
void** clo8901 = alloc_clo(lam8562_fptr, 1);

//setting env list
clo8901[1] = kont8455;
void* f8456 = encode_clo(clo8901);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8903 = alloc_clo(lam8570_fptr, 6);

//setting env list
clo8903[1] = cons;
clo8903[2] = proc;
clo8903[3] = kont8455;
clo8903[4] = map;
clo8903[5] = lst;
clo8903[6] = cdr;
void* f8460 = encode_clo(clo8903);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8460);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
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
void* kont8455 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8905 = alloc_clo(lam8572_fptr, 8);

//setting env list
clo8905[1] = cdr;
clo8905[2] = list;
clo8905[3] = cons;
clo8905[4] = car;
clo8905[5] = proc;
clo8905[6] = kont8455;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8905[7] = map;
clo8905[8] = lst;
void* f8461 = encode_clo(clo8905);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
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
void* xy8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8462 = (decode_clo(env8576))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8462);
arg_buffer[2] = xy8392;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
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
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8395 = (decode_clo(env8578))[3];
//not do dummy comment
void* kont8462 = (decode_clo(env8578))[2];
//not do dummy comment
void* cons = (decode_clo(env8578))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8395, a8397);
arg_buffer[1]=reinterpret_cast<void*>(kont8462);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
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
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8580))[5];
//not do dummy comment
void* a8395 = (decode_clo(env8580))[4];
//not do dummy comment
void* cons = (decode_clo(env8580))[3];
//not do dummy comment
void* filter = (decode_clo(env8580))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8580))[1];

//creating new closure instance
void** clo8907 = alloc_clo(lam8577_fptr, 3);

//setting env list
clo8907[1] = cons;
clo8907[2] = kont8462;
clo8907[3] = a8395;
void* f8464 = encode_clo(clo8907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8464;
arg_buffer[3] = op;
arg_buffer[4] = a8396;
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
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8582))[6];
//not do dummy comment
void* lst = (decode_clo(env8582))[5];
//not do dummy comment
void* op = (decode_clo(env8582))[4];
//not do dummy comment
void* cons = (decode_clo(env8582))[3];
//not do dummy comment
void* filter = (decode_clo(env8582))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8582))[1];

//creating new closure instance
void** clo8909 = alloc_clo(lam8579_fptr, 5);

//setting env list
clo8909[1] = kont8462;
clo8909[2] = filter;
clo8909[3] = cons;
clo8909[4] = a8395;
clo8909[5] = op;
void* f8465 = encode_clo(clo8909);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8584))[3];
//not do dummy comment
void* filter = (decode_clo(env8584))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8584))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8462;
arg_buffer[3] = op;
arg_buffer[4] = a8398;
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8586))[7];
//not do dummy comment
void* lst = (decode_clo(env8586))[6];
//not do dummy comment
void* op = (decode_clo(env8586))[5];
//not do dummy comment
void* cons = (decode_clo(env8586))[4];
//not do dummy comment
void* filter = (decode_clo(env8586))[3];
//not do dummy comment
void* car = (decode_clo(env8586))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8586))[1];

//if-clause
bool if_guard8910 = is_true(a8394);
if(if_guard8910)
{

//creating new closure instance
void** clo8912 = alloc_clo(lam8581_fptr, 6);

//setting env list
clo8912[1] = kont8462;
clo8912[2] = filter;
clo8912[3] = cons;
clo8912[4] = op;
clo8912[5] = lst;
clo8912[6] = cdr;
void* f8466 = encode_clo(clo8912);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8914 = alloc_clo(lam8583_fptr, 3);

//setting env list
clo8914[1] = kont8462;
clo8914[2] = filter;
clo8914[3] = op;
void* f8467 = encode_clo(clo8914);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
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
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8588))[7];
//not do dummy comment
void* lst = (decode_clo(env8588))[6];
//not do dummy comment
void* op = (decode_clo(env8588))[5];
//not do dummy comment
void* cons = (decode_clo(env8588))[4];
//not do dummy comment
void* filter = (decode_clo(env8588))[3];
//not do dummy comment
void* car = (decode_clo(env8588))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8588))[1];

//creating new closure instance
void** clo8916 = alloc_clo(lam8585_fptr, 7);

//setting env list
clo8916[1] = kont8462;
clo8916[2] = car;
clo8916[3] = filter;
clo8916[4] = cons;
clo8916[5] = op;
clo8916[6] = lst;
clo8916[7] = cdr;
void* f8468 = encode_clo(clo8916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8468;
arg_buffer[3] = a8393;
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8590))[8];
//not do dummy comment
void* op = (decode_clo(env8590))[7];
//not do dummy comment
void* cons = (decode_clo(env8590))[6];
//not do dummy comment
void* list = (decode_clo(env8590))[5];
//not do dummy comment
void* cdr = (decode_clo(env8590))[4];
//not do dummy comment
void* filter = (decode_clo(env8590))[3];
//not do dummy comment
void* car = (decode_clo(env8590))[2];
//not do dummy comment
void* kont8462 = (decode_clo(env8590))[1];

//if-clause
bool if_guard8917 = is_true(a8391);
if(if_guard8917)
{

//creating new closure instance
void** clo8919 = alloc_clo(lam8575_fptr, 1);

//setting env list
clo8919[1] = kont8462;
void* f8463 = encode_clo(clo8919);



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
void** clo8921 = alloc_clo(lam8587_fptr, 7);

//setting env list
clo8921[1] = kont8462;
clo8921[2] = car;
clo8921[3] = filter;
clo8921[4] = cons;
clo8921[5] = op;
clo8921[6] = lst;
clo8921[7] = cdr;
void* f8469 = encode_clo(clo8921);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
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
void* kont8462 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8923 = alloc_clo(lam8589_fptr, 8);

//setting env list
clo8923[1] = kont8462;
clo8923[2] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8923[3] = filter;
clo8923[4] = cdr;
clo8923[5] = list;
clo8923[6] = cons;
clo8923[7] = op;
clo8923[8] = lst;
void* f8470 = encode_clo(clo8923);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
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
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8401 = (decode_clo(env8593))[3];
//not do dummy comment
void* drop = (decode_clo(env8593))[2];
//not do dummy comment
void* kont8471 = (decode_clo(env8593))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8471;
arg_buffer[3] = a8401;
arg_buffer[4] = a8403;
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
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8596))[4];
//not do dummy comment
void* kont8471 = (decode_clo(env8596))[3];
//not do dummy comment
void* n = (decode_clo(env8596))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8596))[1];
mpz_t* mpzvar8924 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8924, "1", 10);
void* a8402 = encode_mpz(mpzvar8924);

//creating new closure instance
void** clo8926 = alloc_clo(lam8592_fptr, 3);

//setting env list
clo8926[1] = kont8471;
clo8926[2] = drop;
clo8926[3] = a8401;
void* f8472 = encode_clo(clo8926);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8402);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8598))[6];
//not do dummy comment
void* kont8471 = (decode_clo(env8598))[5];
//not do dummy comment
void* n = (decode_clo(env8598))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8598))[3];
//not do dummy comment
void* lst = (decode_clo(env8598))[2];
//not do dummy comment
void* drop = (decode_clo(env8598))[1];

//if-clause
bool if_guard8927 = is_true(a8400);
if(if_guard8927)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8471);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8471))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8929 = alloc_clo(lam8595_fptr, 4);

//setting env list
clo8929[1] = _u45;
clo8929[2] = n;
clo8929[3] = kont8471;
clo8929[4] = drop;
void* f8473 = encode_clo(clo8929);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
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
void* kont8471 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8930 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8930, "0", 10);
void* a8399 = encode_mpz(mpzvar8930);

//creating new closure instance
void** clo8932 = alloc_clo(lam8597_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8932[1] = drop;
clo8932[2] = lst;
clo8932[3] = _u45;
clo8932[4] = n;
clo8932[5] = kont8471;
clo8932[6] = cdr;
void* f8474 = encode_clo(clo8932);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8399);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
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
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8405 = (decode_clo(env8602))[3];
//not do dummy comment
void* kont8475 = (decode_clo(env8602))[2];
//not do dummy comment
void* proc = (decode_clo(env8602))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8475;
arg_buffer[3] = a8405;
arg_buffer[4] = a8407;
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
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8475 = (decode_clo(env8604))[5];
//not do dummy comment
void* foldr = (decode_clo(env8604))[4];
//not do dummy comment
void* a8405 = (decode_clo(env8604))[3];
//not do dummy comment
void* proc = (decode_clo(env8604))[2];
//not do dummy comment
void* acc = (decode_clo(env8604))[1];

//creating new closure instance
void** clo8934 = alloc_clo(lam8601_fptr, 3);

//setting env list
clo8934[1] = proc;
clo8934[2] = kont8475;
clo8934[3] = a8405;
void* f8476 = encode_clo(clo8934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8476;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8406;
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
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8606))[6];
//not do dummy comment
void* kont8475 = (decode_clo(env8606))[5];
//not do dummy comment
void* foldr = (decode_clo(env8606))[4];
//not do dummy comment
void* lst = (decode_clo(env8606))[3];
//not do dummy comment
void* proc = (decode_clo(env8606))[2];
//not do dummy comment
void* acc = (decode_clo(env8606))[1];

//creating new closure instance
void** clo8936 = alloc_clo(lam8603_fptr, 5);

//setting env list
clo8936[1] = acc;
clo8936[2] = proc;
clo8936[3] = a8405;
clo8936[4] = foldr;
clo8936[5] = kont8475;
void* f8477 = encode_clo(clo8936);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8608))[7];
//not do dummy comment
void* kont8475 = (decode_clo(env8608))[6];
//not do dummy comment
void* car = (decode_clo(env8608))[5];
//not do dummy comment
void* foldr = (decode_clo(env8608))[4];
//not do dummy comment
void* lst = (decode_clo(env8608))[3];
//not do dummy comment
void* proc = (decode_clo(env8608))[2];
//not do dummy comment
void* acc = (decode_clo(env8608))[1];

//if-clause
bool if_guard8937 = is_true(a8404);
if(if_guard8937)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8475);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8475))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8939 = alloc_clo(lam8605_fptr, 6);

//setting env list
clo8939[1] = acc;
clo8939[2] = proc;
clo8939[3] = lst;
clo8939[4] = foldr;
clo8939[5] = kont8475;
clo8939[6] = cdr;
void* f8478 = encode_clo(clo8939);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8478);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
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
void* kont8475 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8941 = alloc_clo(lam8607_fptr, 7);

//setting env list
clo8941[1] = acc;
clo8941[2] = proc;
clo8941[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8941[4] = foldr;
clo8941[5] = car;
clo8941[6] = kont8475;
clo8941[7] = cdr;
void* f8479 = encode_clo(clo8941);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8479);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
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
void* a8411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8409 = (decode_clo(env8611))[3];
//not do dummy comment
void* cons = (decode_clo(env8611))[2];
//not do dummy comment
void* kont8480 = (decode_clo(env8611))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8409, a8411);
arg_buffer[1]=reinterpret_cast<void*>(kont8480);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8480))[0]);
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
void* a8410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst2 = (decode_clo(env8613))[5];
//not do dummy comment
void* cons = (decode_clo(env8613))[4];
//not do dummy comment
void* kont8480 = (decode_clo(env8613))[3];
//not do dummy comment
void* append = (decode_clo(env8613))[2];
//not do dummy comment
void* a8409 = (decode_clo(env8613))[1];

//creating new closure instance
void** clo8943 = alloc_clo(lam8610_fptr, 3);

//setting env list
clo8943[1] = kont8480;
clo8943[2] = cons;
clo8943[3] = a8409;
void* f8481 = encode_clo(clo8943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8481;
arg_buffer[3] = a8410;
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
void* a8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8615))[6];
//not do dummy comment
void* append = (decode_clo(env8615))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8615))[4];
//not do dummy comment
void* lst1 = (decode_clo(env8615))[3];
//not do dummy comment
void* cons = (decode_clo(env8615))[2];
//not do dummy comment
void* kont8480 = (decode_clo(env8615))[1];

//creating new closure instance
void** clo8945 = alloc_clo(lam8612_fptr, 5);

//setting env list
clo8945[1] = a8409;
clo8945[2] = append;
clo8945[3] = kont8480;
clo8945[4] = cons;
clo8945[5] = lst2;
void* f8482 = encode_clo(clo8945);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
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
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8617))[7];
//not do dummy comment
void* append = (decode_clo(env8617))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8617))[5];
//not do dummy comment
void* cons = (decode_clo(env8617))[4];
//not do dummy comment
void* kont8480 = (decode_clo(env8617))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8617))[2];
//not do dummy comment
void* car = (decode_clo(env8617))[1];

//if-clause
bool if_guard8946 = is_true(a8408);
if(if_guard8946)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8480);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8480))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8948 = alloc_clo(lam8614_fptr, 6);

//setting env list
clo8948[1] = kont8480;
clo8948[2] = cons;
clo8948[3] = lst1;
clo8948[4] = lst2;
clo8948[5] = append;
clo8948[6] = cdr;
void* f8483 = encode_clo(clo8948);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8483);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8483))[0]);
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
void* kont8480 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8950 = alloc_clo(lam8616_fptr, 7);

//setting env list
clo8950[1] = car;
clo8950[2] = lst1;
clo8950[3] = kont8480;
clo8950[4] = cons;
clo8950[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8950[6] = append;
clo8950[7] = cdr;
void* f8484 = encode_clo(clo8950);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8484);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8484))[0]);
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
void* a8418 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8485 = (decode_clo(env8620))[2];
//not do dummy comment
void* a8412 = (decode_clo(env8620))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(a8412);
arg_buffer[2] = kont8485;
arg_buffer[3] = a8418;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(a8412))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8619 = encode_clo(alloc_clo(lam8619_fptr, 0));

void* lam8621_fptr() // lam8621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8622 = arg_buffer[1];
//reading env and args
void* a8417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8485 = (decode_clo(env8622))[5];
//not do dummy comment
void* _u43 = (decode_clo(env8622))[4];
//not do dummy comment
void* a8412 = (decode_clo(env8622))[3];
//not do dummy comment
void* a8413 = (decode_clo(env8622))[2];
//not do dummy comment
void* foldl = (decode_clo(env8622))[1];

//creating new closure instance
void** clo8952 = alloc_clo(lam8619_fptr, 2);

//setting env list
clo8952[1] = a8412;
clo8952[2] = kont8485;
void* f8487 = encode_clo(clo8952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = f8487;
arg_buffer[3] = _u43;
arg_buffer[4] = a8413;
arg_buffer[5] = a8417;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void* lam8627_fptr() // lam8627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8628 = arg_buffer[1];
//reading env and args
void* cont8486 = arg_buffer[2];
void* l = arg_buffer[3];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8628))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(l, l);
arg_buffer[1]=reinterpret_cast<void*>(cont8486);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont8486))[0]);
function_ptr();
return nullptr;
}

void* lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8629 = arg_buffer[1];
//reading env and args
void* kont8485 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8954 = alloc_clo(lam8627_fptr, 1);

//setting env list
clo8954[1] = _u43;
void* a8412 = encode_clo(clo8954);


mpz_t* mpzvar8955 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8955, "0", 10);
void* a8413 = encode_mpz(mpzvar8955);
mpz_t* mpzvar8956 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8956, "1", 10);
void* a8414 = encode_mpz(mpzvar8956);
mpz_t* mpzvar8957 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8957, "2", 10);
void* a8415 = encode_mpz(mpzvar8957);
mpz_t* mpzvar8958 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8958, "3", 10);
void* a8416 = encode_mpz(mpzvar8958);

//creating new closure instance
void** clo8960 = alloc_clo(lam8621_fptr, 5);

//setting env list
clo8960[1] = foldl;
clo8960[2] = a8413;
clo8960[3] = a8412;
clo8960[4] = _u43;
clo8960[5] = kont8485;
void* f8488 = encode_clo(clo8960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8488;
arg_buffer[3] = a8414;
arg_buffer[4] = a8415;
arg_buffer[5] = a8416;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8630_fptr() // lam8630 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8631 = arg_buffer[1];
//reading env and args
void* xy8419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8489 = (decode_clo(env8631))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8489);
arg_buffer[2] = xy8419;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8489))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8630 = encode_clo(alloc_clo(lam8630_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8632 = arg_buffer[1];
//reading env and args
void* kont8489 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8962 = alloc_clo(lam8630_fptr, 1);

//setting env list
clo8962[1] = kont8489;
void* f8490 = encode_clo(clo8962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8490;
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

