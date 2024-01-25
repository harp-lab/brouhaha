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
void* _env8616 = arg_buffer[1];
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

void* kont8614 = prim_car(lst);
void* lst8617 = prim_cdr(lst);
void* x8615 = apply_prim__u43(lst8617);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8614);
arg_buffer[2] = x8615;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8614))[0]);
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
void* _env8620 = arg_buffer[1];
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

void* kont8618 = prim_car(lst);
void* lst8621 = prim_cdr(lst);
void* x8619 = apply_prim__u45(lst8621);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8618);
arg_buffer[2] = x8619;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8618))[0]);
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
void* _env8624 = arg_buffer[1];
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

void* kont8622 = prim_car(lst);
void* lst8625 = prim_cdr(lst);
void* x8623 = apply_prim__u42(lst8625);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8622);
arg_buffer[2] = x8623;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8622))[0]);
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
void* x8627 = apply_prim__u47(lst8629);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8626);
arg_buffer[2] = x8627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8626))[0]);
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
void* x8631 = apply_prim__u61(lst8633);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8630);
arg_buffer[2] = x8631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8630))[0]);
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
void* x8635 = apply_prim__u62(lst8637);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8634);
arg_buffer[2] = x8635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8634))[0]);
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
void* x8639 = apply_prim__u60(lst8641);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8638);
arg_buffer[2] = x8639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8638))[0]);
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
void* x8643 = apply_prim__u60_u61(lst8645);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8642);
arg_buffer[2] = x8643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8642))[0]);
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
void* x8647 = apply_prim__u62_u61(lst8649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8646);
arg_buffer[2] = x8647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8646))[0]);
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
void* x8651 = apply_prim_modulo(lst8653);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8650);
arg_buffer[2] = x8651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8650))[0]);
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
void* x8655 = apply_prim_null_u63(lst8657);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8654);
arg_buffer[2] = x8655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8654))[0]);
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
void* x8659 = apply_prim_equal_u63(lst8661);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8658);
arg_buffer[2] = x8659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8658))[0]);
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
void* x8663 = apply_prim_eq_u63(lst8665);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8662);
arg_buffer[2] = x8663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8662))[0]);
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
void* x8667 = apply_prim_cons(lst8669);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8666);
arg_buffer[2] = x8667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8666))[0]);
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
void* x8671 = apply_prim_car(lst8673);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8670);
arg_buffer[2] = x8671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8670))[0]);
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
void* x8675 = apply_prim_cdr(lst8677);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8674);
arg_buffer[2] = x8675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8674))[0]);
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
void* x8679 = apply_prim_float_u45_u62int(lst8681);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8678);
arg_buffer[2] = x8679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8678))[0]);
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
void* x8683 = apply_prim_int_u45_u62float(lst8685);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8682);
arg_buffer[2] = x8683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682))[0]);
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
void* x8687 = apply_prim_hash(lst8689);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8686);
arg_buffer[2] = x8687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8686))[0]);
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
void* x8691 = apply_prim_hash_u45ref(lst8693);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8690);
arg_buffer[2] = x8691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8690))[0]);
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
void* x8695 = apply_prim_hash_u45set(lst8697);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8694);
arg_buffer[2] = x8695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8694))[0]);
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
void* x8699 = apply_prim_hash_u45keys(lst8701);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8698);
arg_buffer[2] = x8699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8698))[0]);
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
void* x8703 = apply_prim_hash_u45has_u45key_u63(lst8705);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8702);
arg_buffer[2] = x8703;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8702))[0]);
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
void* x8707 = apply_prim_hash_u45count(lst8709);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8706);
arg_buffer[2] = x8707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8706))[0]);
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
void* x8711 = apply_prim_set(lst8713);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8710);
arg_buffer[2] = x8711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8710))[0]);
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
void* x8715 = apply_prim_set_u45_u62list(lst8717);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8714);
arg_buffer[2] = x8715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8714))[0]);
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
void* x8719 = apply_prim_list_u45_u62set(lst8721);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8718);
arg_buffer[2] = x8719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8718))[0]);
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
void* x8723 = apply_prim_set_u45add(lst8725);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8722);
arg_buffer[2] = x8723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8722))[0]);
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
void* x8727 = apply_prim_string_u63(lst8729);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8726);
arg_buffer[2] = x8727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8726))[0]);
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
void* x8731 = apply_prim_string_u45length(lst8733);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8730);
arg_buffer[2] = x8731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8730))[0]);
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
void* x8735 = apply_prim_string_u45ref(lst8737);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8734);
arg_buffer[2] = x8735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8734))[0]);
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
void* x8739 = apply_prim_substring(lst8741);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8738);
arg_buffer[2] = x8739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8738))[0]);
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
void* x8743 = apply_prim_string_u45append(lst8745);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8742);
arg_buffer[2] = x8743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8742))[0]);
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
void* x8747 = apply_prim_string_u45_u62list(lst8749);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8746);
arg_buffer[2] = x8747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8746))[0]);
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
void* x8751 = apply_prim_exact_u45floor(lst8753);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8750);
arg_buffer[2] = x8751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8750))[0]);
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
void* x8755 = apply_prim_exact_u45ceiling(lst8757);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8754);
arg_buffer[2] = x8755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8754))[0]);
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
void* x8759 = apply_prim_exact_u45round(lst8761);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8758);
arg_buffer[2] = x8759;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8758))[0]);
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
void* x8763 = apply_prim_absolute(lst8765);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8762);
arg_buffer[2] = x8763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8762))[0]);
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
void* x8767 = apply_prim_max(lst8769);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8766);
arg_buffer[2] = x8767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8766))[0]);
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
void* x8771 = apply_prim_min(lst8773);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8770);
arg_buffer[2] = x8771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8770))[0]);
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
void* x8775 = apply_prim_expt(lst8777);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8774);
arg_buffer[2] = x8775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8774))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void* remaind_fptr() // remaind 
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
void* x8779 = apply_prim_remaind(lst8781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8778);
arg_buffer[2] = x8779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8778))[0]);
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
void* x8783 = apply_prim_quotient(lst8785);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8782);
arg_buffer[2] = x8783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8782))[0]);
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
void* x8787 = apply_prim_randnum(lst8789);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8786);
arg_buffer[2] = x8787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8786))[0]);
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
void* x8791 = apply_prim_symbol_u63(lst8793);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8790);
arg_buffer[2] = x8791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8790))[0]);
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
void* x8795 = apply_prim_pair_u63(lst8797);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8794);
arg_buffer[2] = x8795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8794))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void* list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8480 = arg_buffer[1];
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

void* kont8409 = prim_car(x);
void* x8479 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8409);
arg_buffer[2] = x8479;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8409))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8481_fptr() // lam8481 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8482 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8410 = (decode_clo(env8482))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8482))[2];
//not do dummy comment
void* a8344 = (decode_clo(env8482))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8410);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8410))[0]);
function_ptr();
return nullptr;
}

void* lam8481 = encode_clo(alloc_clo(lam8481_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8485 = arg_buffer[1];
//reading env and args
void* kont8410 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8798 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8798, "0", 10);
void* a8344 = encode_mpz(mpzvar8798);
mpz_t* mpzvar8799 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8799, "2", 10);
void* a8345 = encode_mpz(mpzvar8799);

//creating new closure instance
void** clo8801 = alloc_clo(lam8481_fptr, 3);

//setting env list
clo8801[1] = a8344;
clo8801[2] = equal_u63;
clo8801[3] = kont8410;
void* f8411 = encode_clo(clo8801);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8411);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8411))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8486_fptr() // lam8486 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8487 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8347 = (decode_clo(env8487))[3];
//not do dummy comment
void* kont8412 = (decode_clo(env8487))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8487))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8412);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8412))[0]);
function_ptr();
return nullptr;
}

void* lam8486 = encode_clo(alloc_clo(lam8486_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8490 = arg_buffer[1];
//reading env and args
void* kont8412 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8802 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8802, "1", 10);
void* a8347 = encode_mpz(mpzvar8802);
mpz_t* mpzvar8803 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8803, "2", 10);
void* a8348 = encode_mpz(mpzvar8803);

//creating new closure instance
void** clo8805 = alloc_clo(lam8486_fptr, 3);

//setting env list
clo8805[1] = equal_u63;
clo8805[2] = kont8412;
clo8805[3] = a8347;
void* f8413 = encode_clo(clo8805);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8413);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8413))[0]);
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8493_fptr() // lam8493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8494 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8414 = (decode_clo(env8494))[3];
//not do dummy comment
void* x = (decode_clo(env8494))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8494))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8414;
arg_buffer[3] = x;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8493 = encode_clo(alloc_clo(lam8493_fptr, 0));

void* lam8495_fptr() // lam8495 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8496 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8496))[5];
//not do dummy comment
void* lst = (decode_clo(env8496))[4];
//not do dummy comment
void* kont8414 = (decode_clo(env8496))[3];
//not do dummy comment
void* x = (decode_clo(env8496))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8496))[1];

//if-clause
bool if_guard8806 = is_true(a8353);
if(if_guard8806)
{
void* xy8354 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8414);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8414))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8808 = alloc_clo(lam8493_fptr, 3);

//setting env list
clo8808[1] = member_u63;
clo8808[2] = x;
clo8808[3] = kont8414;
void* f8415 = encode_clo(clo8808);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8415);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8415))[0]);
function_ptr();
return nullptr;
}

}

void* lam8495 = encode_clo(alloc_clo(lam8495_fptr, 0));

void* lam8497_fptr() // lam8497 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8498 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8498))[6];
//not do dummy comment
void* lst = (decode_clo(env8498))[5];
//not do dummy comment
void* kont8414 = (decode_clo(env8498))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8498))[3];
//not do dummy comment
void* x = (decode_clo(env8498))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8498))[1];

//creating new closure instance
void** clo8810 = alloc_clo(lam8495_fptr, 5);

//setting env list
clo8810[1] = member_u63;
clo8810[2] = x;
clo8810[3] = kont8414;
clo8810[4] = lst;
clo8810[5] = cdr;
void* f8416 = encode_clo(clo8810);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8416);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8416))[0]);
function_ptr();
return nullptr;
}

void* lam8497 = encode_clo(alloc_clo(lam8497_fptr, 0));

void* lam8499_fptr() // lam8499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8500 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8500))[7];
//not do dummy comment
void* lst = (decode_clo(env8500))[6];
//not do dummy comment
void* kont8414 = (decode_clo(env8500))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8500))[4];
//not do dummy comment
void* x = (decode_clo(env8500))[3];
//not do dummy comment
void* car = (decode_clo(env8500))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8500))[1];

//if-clause
bool if_guard8811 = is_true(a8350);
if(if_guard8811)
{
void* xy8351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8414);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8414))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8813 = alloc_clo(lam8497_fptr, 6);

//setting env list
clo8813[1] = member_u63;
clo8813[2] = x;
clo8813[3] = equal_u63;
clo8813[4] = kont8414;
clo8813[5] = lst;
clo8813[6] = cdr;
void* f8417 = encode_clo(clo8813);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8417);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8417))[0]);
function_ptr();
return nullptr;
}

}

void* lam8499 = encode_clo(alloc_clo(lam8499_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8501 = arg_buffer[1];
//reading env and args
void* kont8414 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8815 = alloc_clo(lam8499_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8815[1] = member_u63;
clo8815[2] = car;
clo8815[3] = x;
clo8815[4] = equal_u63;
clo8815[5] = kont8414;
clo8815[6] = lst;
clo8815[7] = cdr;
void* f8418 = encode_clo(clo8815);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8418);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8418))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8502_fptr() // lam8502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8503 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8358 = (decode_clo(env8503))[4];
//not do dummy comment
void* foldl = (decode_clo(env8503))[3];
//not do dummy comment
void* kont8419 = (decode_clo(env8503))[2];
//not do dummy comment
void* fun = (decode_clo(env8503))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8419;
arg_buffer[3] = fun;
arg_buffer[4] = a8358;
arg_buffer[5] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8502 = encode_clo(alloc_clo(lam8502_fptr, 0));

void* lam8504_fptr() // lam8504 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8505 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8505))[5];
//not do dummy comment
void* lst = (decode_clo(env8505))[4];
//not do dummy comment
void* foldl = (decode_clo(env8505))[3];
//not do dummy comment
void* kont8419 = (decode_clo(env8505))[2];
//not do dummy comment
void* fun = (decode_clo(env8505))[1];

//creating new closure instance
void** clo8817 = alloc_clo(lam8502_fptr, 4);

//setting env list
clo8817[1] = fun;
clo8817[2] = kont8419;
clo8817[3] = foldl;
clo8817[4] = a8358;
void* f8420 = encode_clo(clo8817);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8420);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8420))[0]);
function_ptr();
return nullptr;
}

void* lam8504 = encode_clo(alloc_clo(lam8504_fptr, 0));

void* lam8506_fptr() // lam8506 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8507 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8507))[6];
//not do dummy comment
void* lst = (decode_clo(env8507))[5];
//not do dummy comment
void* acc = (decode_clo(env8507))[4];
//not do dummy comment
void* foldl = (decode_clo(env8507))[3];
//not do dummy comment
void* kont8419 = (decode_clo(env8507))[2];
//not do dummy comment
void* fun = (decode_clo(env8507))[1];

//creating new closure instance
void** clo8819 = alloc_clo(lam8504_fptr, 5);

//setting env list
clo8819[1] = fun;
clo8819[2] = kont8419;
clo8819[3] = foldl;
clo8819[4] = lst;
clo8819[5] = cdr;
void* f8421 = encode_clo(clo8819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8421;
arg_buffer[3] = a8357;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8506 = encode_clo(alloc_clo(lam8506_fptr, 0));

void* lam8508_fptr() // lam8508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8509))[7];
//not do dummy comment
void* lst = (decode_clo(env8509))[6];
//not do dummy comment
void* acc = (decode_clo(env8509))[5];
//not do dummy comment
void* car = (decode_clo(env8509))[4];
//not do dummy comment
void* foldl = (decode_clo(env8509))[3];
//not do dummy comment
void* kont8419 = (decode_clo(env8509))[2];
//not do dummy comment
void* fun = (decode_clo(env8509))[1];

//if-clause
bool if_guard8820 = is_true(a8356);
if(if_guard8820)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8419);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8419))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8822 = alloc_clo(lam8506_fptr, 6);

//setting env list
clo8822[1] = fun;
clo8822[2] = kont8419;
clo8822[3] = foldl;
clo8822[4] = acc;
clo8822[5] = lst;
clo8822[6] = cdr;
void* f8422 = encode_clo(clo8822);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8422);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8422))[0]);
function_ptr();
return nullptr;
}

}

void* lam8508 = encode_clo(alloc_clo(lam8508_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8510 = arg_buffer[1];
//reading env and args
void* kont8419 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8824 = alloc_clo(lam8508_fptr, 7);

//setting env list
clo8824[1] = fun;
clo8824[2] = kont8419;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8824[3] = foldl;
clo8824[4] = car;
clo8824[5] = acc;
clo8824[6] = lst;
clo8824[7] = cdr;
void* f8423 = encode_clo(clo8824);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8423);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8423))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8511_fptr() // lam8511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8512 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8512))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8512))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8512))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8424;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8511 = encode_clo(alloc_clo(lam8511_fptr, 0));

void* lam8513_fptr() // lam8513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8514 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8361 = (decode_clo(env8514))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8514))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8514))[3];
//not do dummy comment
void* cons = (decode_clo(env8514))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8514))[1];

//creating new closure instance
void** clo8826 = alloc_clo(lam8511_fptr, 3);

//setting env list
clo8826[1] = kont8424;
clo8826[2] = reverse_u45helper;
clo8826[3] = a8361;
void* f8425 = encode_clo(clo8826);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8425);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8425))[0]);
function_ptr();
return nullptr;
}

void* lam8513 = encode_clo(alloc_clo(lam8513_fptr, 0));

void* lam8515_fptr() // lam8515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8516 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8516))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8516))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8516))[4];
//not do dummy comment
void* car = (decode_clo(env8516))[3];
//not do dummy comment
void* cons = (decode_clo(env8516))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8516))[1];

//creating new closure instance
void** clo8828 = alloc_clo(lam8513_fptr, 5);

//setting env list
clo8828[1] = kont8424;
clo8828[2] = cons;
clo8828[3] = lst2;
clo8828[4] = reverse_u45helper;
clo8828[5] = a8361;
void* f8426 = encode_clo(clo8828);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
function_ptr();
return nullptr;
}

void* lam8515 = encode_clo(alloc_clo(lam8515_fptr, 0));

void* lam8517_fptr() // lam8517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8518))[7];
//not do dummy comment
void* lst = (decode_clo(env8518))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8518))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8518))[4];
//not do dummy comment
void* car = (decode_clo(env8518))[3];
//not do dummy comment
void* cons = (decode_clo(env8518))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8518))[1];

//if-clause
bool if_guard8829 = is_true(a8360);
if(if_guard8829)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8831 = alloc_clo(lam8515_fptr, 6);

//setting env list
clo8831[1] = kont8424;
clo8831[2] = cons;
clo8831[3] = car;
clo8831[4] = lst2;
clo8831[5] = reverse_u45helper;
clo8831[6] = lst;
void* f8427 = encode_clo(clo8831);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
function_ptr();
return nullptr;
}

}

void* lam8517 = encode_clo(alloc_clo(lam8517_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8519 = arg_buffer[1];
//reading env and args
void* kont8424 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8833 = alloc_clo(lam8517_fptr, 7);

//setting env list
clo8833[1] = kont8424;
clo8833[2] = cons;
clo8833[3] = car;
clo8833[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8833[5] = reverse_u45helper;
clo8833[6] = lst;
clo8833[7] = cdr;
void* f8428 = encode_clo(clo8833);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8520_fptr() // lam8520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8521 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8521))[3];
//not do dummy comment
void* lst = (decode_clo(env8521))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8521))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8429;
arg_buffer[3] = lst;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8522 = arg_buffer[1];
//reading env and args
void* kont8429 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8835 = alloc_clo(lam8520_fptr, 3);

//setting env list
clo8835[1] = kont8429;
clo8835[2] = lst;
clo8835[3] = reverse_u45helper;
void* f8430 = encode_clo(clo8835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8430;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8523_fptr() // lam8523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8431 = (decode_clo(env8524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8431);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8431))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8431 = (decode_clo(env8526))[4];
//not do dummy comment
void* a8368 = (decode_clo(env8526))[3];
//not do dummy comment
void* a8370 = (decode_clo(env8526))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8526))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8431;
arg_buffer[3] = a8368;
arg_buffer[4] = a8370;
arg_buffer[5] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8431 = (decode_clo(env8528))[6];
//not do dummy comment
void* a8368 = (decode_clo(env8528))[5];
//not do dummy comment
void* a8370 = (decode_clo(env8528))[4];
//not do dummy comment
void* cons = (decode_clo(env8528))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8528))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8528))[1];

//creating new closure instance
void** clo8837 = alloc_clo(lam8525_fptr, 4);

//setting env list
clo8837[1] = take_u45helper;
clo8837[2] = a8370;
clo8837[3] = a8368;
clo8837[4] = kont8431;
void* f8433 = encode_clo(clo8837);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8530))[7];
//not do dummy comment
void* kont8431 = (decode_clo(env8530))[6];
//not do dummy comment
void* a8368 = (decode_clo(env8530))[5];
//not do dummy comment
void* car = (decode_clo(env8530))[4];
//not do dummy comment
void* cons = (decode_clo(env8530))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8530))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8530))[1];

//creating new closure instance
void** clo8839 = alloc_clo(lam8527_fptr, 6);

//setting env list
clo8839[1] = lst2;
clo8839[2] = take_u45helper;
clo8839[3] = cons;
clo8839[4] = a8370;
clo8839[5] = a8368;
clo8839[6] = kont8431;
void* f8434 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* lam8529 = encode_clo(alloc_clo(lam8529_fptr, 0));

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
void* lst = (decode_clo(env8533))[8];
//not do dummy comment
void* kont8431 = (decode_clo(env8533))[7];
//not do dummy comment
void* cons = (decode_clo(env8533))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8533))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8533))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8533))[3];
//not do dummy comment
void* n = (decode_clo(env8533))[2];
//not do dummy comment
void* car = (decode_clo(env8533))[1];
mpz_t* mpzvar8840 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8840, "1", 10);
void* a8369 = encode_mpz(mpzvar8840);

//creating new closure instance
void** clo8842 = alloc_clo(lam8529_fptr, 7);

//setting env list
clo8842[1] = lst2;
clo8842[2] = take_u45helper;
clo8842[3] = cons;
clo8842[4] = car;
clo8842[5] = a8368;
clo8842[6] = kont8431;
clo8842[7] = lst;
void* f8435 = encode_clo(clo8842);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8435);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
function_ptr();
return nullptr;
}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void* lam8534_fptr() // lam8534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8535 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8535))[10];
//not do dummy comment
void* lst = (decode_clo(env8535))[9];
//not do dummy comment
void* kont8431 = (decode_clo(env8535))[8];
//not do dummy comment
void* reverse = (decode_clo(env8535))[7];
//not do dummy comment
void* cons = (decode_clo(env8535))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8535))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8535))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8535))[3];
//not do dummy comment
void* n = (decode_clo(env8535))[2];
//not do dummy comment
void* car = (decode_clo(env8535))[1];

//if-clause
bool if_guard8843 = is_true(a8366);
if(if_guard8843)
{

//creating new closure instance
void** clo8845 = alloc_clo(lam8523_fptr, 1);

//setting env list
clo8845[1] = kont8431;
void* f8432 = encode_clo(clo8845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8432;
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
void** clo8847 = alloc_clo(lam8532_fptr, 8);

//setting env list
clo8847[1] = car;
clo8847[2] = n;
clo8847[3] = lst2;
clo8847[4] = take_u45helper;
clo8847[5] = _u45;
clo8847[6] = cons;
clo8847[7] = kont8431;
clo8847[8] = lst;
void* f8436 = encode_clo(clo8847);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

}

void* lam8534 = encode_clo(alloc_clo(lam8534_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8537 = arg_buffer[1];
//reading env and args
void* kont8431 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8848, "0", 10);
void* a8365 = encode_mpz(mpzvar8848);

//creating new closure instance
void** clo8850 = alloc_clo(lam8534_fptr, 10);

//setting env list
clo8850[1] = car;
clo8850[2] = n;
clo8850[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8850[4] = take_u45helper;
clo8850[5] = _u45;
clo8850[6] = cons;
clo8850[7] = reverse;
clo8850[8] = kont8431;
clo8850[9] = lst;
clo8850[10] = cdr;
void* f8437 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8538_fptr() // lam8538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8539 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8539))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8539))[3];
//not do dummy comment
void* kont8438 = (decode_clo(env8539))[2];
//not do dummy comment
void* n = (decode_clo(env8539))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8438;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8540 = arg_buffer[1];
//reading env and args
void* kont8438 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8852 = alloc_clo(lam8538_fptr, 4);

//setting env list
clo8852[1] = n;
clo8852[2] = kont8438;
clo8852[3] = take_u45helper;
clo8852[4] = lst;
void* f8439 = encode_clo(clo8852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8439;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8542_fptr() // lam8542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8543 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8543))[3];
//not do dummy comment
void* a8376 = (decode_clo(env8543))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8543))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8545))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8545))[3];
//not do dummy comment
void* a8376 = (decode_clo(env8545))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8545))[1];

//creating new closure instance
void** clo8854 = alloc_clo(lam8542_fptr, 3);

//setting env list
clo8854[1] = kont8440;
clo8854[2] = a8376;
clo8854[3] = _u43;
void* f8441 = encode_clo(clo8854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8441;
arg_buffer[3] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void* lam8547_fptr() // lam8547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8548))[5];
//not do dummy comment
void* lst = (decode_clo(env8548))[4];
//not do dummy comment
void* length = (decode_clo(env8548))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8548))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8548))[1];

//if-clause
bool if_guard8855 = is_true(a8374);
if(if_guard8855)
{
mpz_t* mpzvar8856 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8856, "0", 10);
void* xy8375 = encode_mpz(mpzvar8856);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[2] = xy8375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8857 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8857, "1", 10);
void* a8376 = encode_mpz(mpzvar8857);

//creating new closure instance
void** clo8859 = alloc_clo(lam8544_fptr, 4);

//setting env list
clo8859[1] = kont8440;
clo8859[2] = a8376;
clo8859[3] = _u43;
clo8859[4] = length;
void* f8442 = encode_clo(clo8859);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8549 = arg_buffer[1];
//reading env and args
void* kont8440 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8861 = alloc_clo(lam8547_fptr, 5);

//setting env list
clo8861[1] = kont8440;
clo8861[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8861[3] = length;
clo8861[4] = lst;
clo8861[5] = cdr;
void* f8443 = encode_clo(clo8861);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8444 = (decode_clo(env8551))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8444);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void* lam8552_fptr() // lam8552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8553 = arg_buffer[1];
//reading env and args
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8444 = (decode_clo(env8553))[3];
//not do dummy comment
void* a8382 = (decode_clo(env8553))[2];
//not do dummy comment
void* cons = (decode_clo(env8553))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8444);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
function_ptr();
return nullptr;
}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void* lam8554_fptr() // lam8554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8555 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8444 = (decode_clo(env8555))[5];
//not do dummy comment
void* proc = (decode_clo(env8555))[4];
//not do dummy comment
void* cons = (decode_clo(env8555))[3];
//not do dummy comment
void* map = (decode_clo(env8555))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8555))[1];

//creating new closure instance
void** clo8863 = alloc_clo(lam8552_fptr, 3);

//setting env list
clo8863[1] = cons;
clo8863[2] = a8382;
clo8863[3] = kont8444;
void* f8446 = encode_clo(clo8863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8446;
arg_buffer[3] = proc;
arg_buffer[4] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
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
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8557))[6];
//not do dummy comment
void* kont8444 = (decode_clo(env8557))[5];
//not do dummy comment
void* lst = (decode_clo(env8557))[4];
//not do dummy comment
void* map = (decode_clo(env8557))[3];
//not do dummy comment
void* proc = (decode_clo(env8557))[2];
//not do dummy comment
void* cons = (decode_clo(env8557))[1];

//creating new closure instance
void** clo8865 = alloc_clo(lam8554_fptr, 5);

//setting env list
clo8865[1] = a8382;
clo8865[2] = map;
clo8865[3] = cons;
clo8865[4] = proc;
clo8865[5] = kont8444;
void* f8447 = encode_clo(clo8865);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8447);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8447))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8559))[6];
//not do dummy comment
void* kont8444 = (decode_clo(env8559))[5];
//not do dummy comment
void* lst = (decode_clo(env8559))[4];
//not do dummy comment
void* map = (decode_clo(env8559))[3];
//not do dummy comment
void* proc = (decode_clo(env8559))[2];
//not do dummy comment
void* cons = (decode_clo(env8559))[1];

//creating new closure instance
void** clo8867 = alloc_clo(lam8556_fptr, 6);

//setting env list
clo8867[1] = cons;
clo8867[2] = proc;
clo8867[3] = map;
clo8867[4] = lst;
clo8867[5] = kont8444;
clo8867[6] = cdr;
void* f8448 = encode_clo(clo8867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8448;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8444 = (decode_clo(env8561))[8];
//not do dummy comment
void* lst = (decode_clo(env8561))[7];
//not do dummy comment
void* map = (decode_clo(env8561))[6];
//not do dummy comment
void* proc = (decode_clo(env8561))[5];
//not do dummy comment
void* car = (decode_clo(env8561))[4];
//not do dummy comment
void* cons = (decode_clo(env8561))[3];
//not do dummy comment
void* list = (decode_clo(env8561))[2];
//not do dummy comment
void* cdr = (decode_clo(env8561))[1];

//if-clause
bool if_guard8868 = is_true(a8379);
if(if_guard8868)
{

//creating new closure instance
void** clo8870 = alloc_clo(lam8550_fptr, 1);

//setting env list
clo8870[1] = kont8444;
void* f8445 = encode_clo(clo8870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8872 = alloc_clo(lam8558_fptr, 6);

//setting env list
clo8872[1] = cons;
clo8872[2] = proc;
clo8872[3] = map;
clo8872[4] = lst;
clo8872[5] = kont8444;
clo8872[6] = cdr;
void* f8449 = encode_clo(clo8872);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
function_ptr();
return nullptr;
}

}

void* lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8562 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8874 = alloc_clo(lam8560_fptr, 8);

//setting env list
clo8874[1] = cdr;
clo8874[2] = list;
clo8874[3] = cons;
clo8874[4] = car;
clo8874[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8874[6] = map;
clo8874[7] = lst;
clo8874[8] = kont8444;
void* f8450 = encode_clo(clo8874);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8563_fptr() // lam8563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8564 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8564))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8451);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8563 = encode_clo(alloc_clo(lam8563_fptr, 0));

void* lam8565_fptr() // lam8565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8566 = arg_buffer[1];
//reading env and args
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8566))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8566))[2];
//not do dummy comment
void* cons = (decode_clo(env8566))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8451);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
function_ptr();
return nullptr;
}

void* lam8565 = encode_clo(alloc_clo(lam8565_fptr, 0));

void* lam8567_fptr() // lam8567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8568 = arg_buffer[1];
//reading env and args
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8568))[5];
//not do dummy comment
void* kont8451 = (decode_clo(env8568))[4];
//not do dummy comment
void* a8389 = (decode_clo(env8568))[3];
//not do dummy comment
void* filter = (decode_clo(env8568))[2];
//not do dummy comment
void* cons = (decode_clo(env8568))[1];

//creating new closure instance
void** clo8876 = alloc_clo(lam8565_fptr, 3);

//setting env list
clo8876[1] = cons;
clo8876[2] = a8389;
clo8876[3] = kont8451;
void* f8453 = encode_clo(clo8876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8453;
arg_buffer[3] = op;
arg_buffer[4] = a8390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8567 = encode_clo(alloc_clo(lam8567_fptr, 0));

void* lam8569_fptr() // lam8569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8570 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8570))[6];
//not do dummy comment
void* lst = (decode_clo(env8570))[5];
//not do dummy comment
void* op = (decode_clo(env8570))[4];
//not do dummy comment
void* kont8451 = (decode_clo(env8570))[3];
//not do dummy comment
void* filter = (decode_clo(env8570))[2];
//not do dummy comment
void* cons = (decode_clo(env8570))[1];

//creating new closure instance
void** clo8878 = alloc_clo(lam8567_fptr, 5);

//setting env list
clo8878[1] = cons;
clo8878[2] = filter;
clo8878[3] = a8389;
clo8878[4] = kont8451;
clo8878[5] = op;
void* f8454 = encode_clo(clo8878);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8454);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8572))[3];
//not do dummy comment
void* kont8451 = (decode_clo(env8572))[2];
//not do dummy comment
void* filter = (decode_clo(env8572))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8451;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8574))[7];
//not do dummy comment
void* lst = (decode_clo(env8574))[6];
//not do dummy comment
void* op = (decode_clo(env8574))[5];
//not do dummy comment
void* kont8451 = (decode_clo(env8574))[4];
//not do dummy comment
void* cons = (decode_clo(env8574))[3];
//not do dummy comment
void* filter = (decode_clo(env8574))[2];
//not do dummy comment
void* car = (decode_clo(env8574))[1];

//if-clause
bool if_guard8879 = is_true(a8388);
if(if_guard8879)
{

//creating new closure instance
void** clo8881 = alloc_clo(lam8569_fptr, 6);

//setting env list
clo8881[1] = cons;
clo8881[2] = filter;
clo8881[3] = kont8451;
clo8881[4] = op;
clo8881[5] = lst;
clo8881[6] = cdr;
void* f8455 = encode_clo(clo8881);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8455);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8883 = alloc_clo(lam8571_fptr, 3);

//setting env list
clo8883[1] = filter;
clo8883[2] = kont8451;
clo8883[3] = op;
void* f8456 = encode_clo(clo8883);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8456);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
function_ptr();
return nullptr;
}

}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void* lam8575_fptr() // lam8575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8576 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8576))[7];
//not do dummy comment
void* lst = (decode_clo(env8576))[6];
//not do dummy comment
void* op = (decode_clo(env8576))[5];
//not do dummy comment
void* kont8451 = (decode_clo(env8576))[4];
//not do dummy comment
void* cons = (decode_clo(env8576))[3];
//not do dummy comment
void* filter = (decode_clo(env8576))[2];
//not do dummy comment
void* car = (decode_clo(env8576))[1];

//creating new closure instance
void** clo8885 = alloc_clo(lam8573_fptr, 7);

//setting env list
clo8885[1] = car;
clo8885[2] = filter;
clo8885[3] = cons;
clo8885[4] = kont8451;
clo8885[5] = op;
clo8885[6] = lst;
clo8885[7] = cdr;
void* f8457 = encode_clo(clo8885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8457;
arg_buffer[3] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8578))[8];
//not do dummy comment
void* op = (decode_clo(env8578))[7];
//not do dummy comment
void* kont8451 = (decode_clo(env8578))[6];
//not do dummy comment
void* cons = (decode_clo(env8578))[5];
//not do dummy comment
void* list = (decode_clo(env8578))[4];
//not do dummy comment
void* cdr = (decode_clo(env8578))[3];
//not do dummy comment
void* filter = (decode_clo(env8578))[2];
//not do dummy comment
void* car = (decode_clo(env8578))[1];

//if-clause
bool if_guard8886 = is_true(a8385);
if(if_guard8886)
{

//creating new closure instance
void** clo8888 = alloc_clo(lam8563_fptr, 1);

//setting env list
clo8888[1] = kont8451;
void* f8452 = encode_clo(clo8888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8452;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8890 = alloc_clo(lam8575_fptr, 7);

//setting env list
clo8890[1] = car;
clo8890[2] = filter;
clo8890[3] = cons;
clo8890[4] = kont8451;
clo8890[5] = op;
clo8890[6] = lst;
clo8890[7] = cdr;
void* f8458 = encode_clo(clo8890);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
return nullptr;
}

}

void* lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8579 = arg_buffer[1];
//reading env and args
void* kont8451 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8892 = alloc_clo(lam8577_fptr, 8);

//setting env list
clo8892[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8892[2] = filter;
clo8892[3] = cdr;
clo8892[4] = list;
clo8892[5] = cons;
clo8892[6] = kont8451;
clo8892[7] = op;
clo8892[8] = lst;
void* f8459 = encode_clo(clo8892);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8580_fptr() // lam8580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8581 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8395 = (decode_clo(env8581))[3];
//not do dummy comment
void* kont8460 = (decode_clo(env8581))[2];
//not do dummy comment
void* drop = (decode_clo(env8581))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8460;
arg_buffer[3] = a8395;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void* lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8460 = (decode_clo(env8584))[4];
//not do dummy comment
void* drop = (decode_clo(env8584))[3];
//not do dummy comment
void* n = (decode_clo(env8584))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8584))[1];
mpz_t* mpzvar8893 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8893, "1", 10);
void* a8396 = encode_mpz(mpzvar8893);

//creating new closure instance
void** clo8895 = alloc_clo(lam8580_fptr, 3);

//setting env list
clo8895[1] = drop;
clo8895[2] = kont8460;
clo8895[3] = a8395;
void* f8461 = encode_clo(clo8895);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
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
void* cdr = (decode_clo(env8586))[6];
//not do dummy comment
void* kont8460 = (decode_clo(env8586))[5];
//not do dummy comment
void* n = (decode_clo(env8586))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8586))[3];
//not do dummy comment
void* lst = (decode_clo(env8586))[2];
//not do dummy comment
void* drop = (decode_clo(env8586))[1];

//if-clause
bool if_guard8896 = is_true(a8394);
if(if_guard8896)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8460);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8460))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8898 = alloc_clo(lam8583_fptr, 4);

//setting env list
clo8898[1] = _u45;
clo8898[2] = n;
clo8898[3] = drop;
clo8898[4] = kont8460;
void* f8462 = encode_clo(clo8898);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8462);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
function_ptr();
return nullptr;
}

}

void* lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8588 = arg_buffer[1];
//reading env and args
void* kont8460 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8899 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8899, "0", 10);
void* a8393 = encode_mpz(mpzvar8899);

//creating new closure instance
void** clo8901 = alloc_clo(lam8585_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8901[1] = drop;
clo8901[2] = lst;
clo8901[3] = _u45;
clo8901[4] = n;
clo8901[5] = kont8460;
clo8901[6] = cdr;
void* f8463 = encode_clo(clo8901);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8589_fptr() // lam8589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8590 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8399 = (decode_clo(env8590))[3];
//not do dummy comment
void* kont8464 = (decode_clo(env8590))[2];
//not do dummy comment
void* proc = (decode_clo(env8590))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8464;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8592))[5];
//not do dummy comment
void* a8399 = (decode_clo(env8592))[4];
//not do dummy comment
void* kont8464 = (decode_clo(env8592))[3];
//not do dummy comment
void* proc = (decode_clo(env8592))[2];
//not do dummy comment
void* acc = (decode_clo(env8592))[1];

//creating new closure instance
void** clo8903 = alloc_clo(lam8589_fptr, 3);

//setting env list
clo8903[1] = proc;
clo8903[2] = kont8464;
clo8903[3] = a8399;
void* f8465 = encode_clo(clo8903);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8465;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void* lam8593_fptr() // lam8593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8594 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8594))[6];
//not do dummy comment
void* kont8464 = (decode_clo(env8594))[5];
//not do dummy comment
void* foldr = (decode_clo(env8594))[4];
//not do dummy comment
void* lst = (decode_clo(env8594))[3];
//not do dummy comment
void* proc = (decode_clo(env8594))[2];
//not do dummy comment
void* acc = (decode_clo(env8594))[1];

//creating new closure instance
void** clo8905 = alloc_clo(lam8591_fptr, 5);

//setting env list
clo8905[1] = acc;
clo8905[2] = proc;
clo8905[3] = kont8464;
clo8905[4] = a8399;
clo8905[5] = foldr;
void* f8466 = encode_clo(clo8905);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
return nullptr;
}

void* lam8593 = encode_clo(alloc_clo(lam8593_fptr, 0));

void* lam8595_fptr() // lam8595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8596 = arg_buffer[1];
//reading env and args
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8596))[7];
//not do dummy comment
void* kont8464 = (decode_clo(env8596))[6];
//not do dummy comment
void* car = (decode_clo(env8596))[5];
//not do dummy comment
void* foldr = (decode_clo(env8596))[4];
//not do dummy comment
void* lst = (decode_clo(env8596))[3];
//not do dummy comment
void* proc = (decode_clo(env8596))[2];
//not do dummy comment
void* acc = (decode_clo(env8596))[1];

//if-clause
bool if_guard8906 = is_true(a8398);
if(if_guard8906)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8464);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8908 = alloc_clo(lam8593_fptr, 6);

//setting env list
clo8908[1] = acc;
clo8908[2] = proc;
clo8908[3] = lst;
clo8908[4] = foldr;
clo8908[5] = kont8464;
clo8908[6] = cdr;
void* f8467 = encode_clo(clo8908);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

}

void* lam8595 = encode_clo(alloc_clo(lam8595_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8597 = arg_buffer[1];
//reading env and args
void* kont8464 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8910 = alloc_clo(lam8595_fptr, 7);

//setting env list
clo8910[1] = acc;
clo8910[2] = proc;
clo8910[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8910[4] = foldr;
clo8910[5] = car;
clo8910[6] = kont8464;
clo8910[7] = cdr;
void* f8468 = encode_clo(clo8910);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8598_fptr() // lam8598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8599 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8403 = (decode_clo(env8599))[3];
//not do dummy comment
void* kont8469 = (decode_clo(env8599))[2];
//not do dummy comment
void* cons = (decode_clo(env8599))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8469);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8469))[0]);
function_ptr();
return nullptr;
}

void* lam8598 = encode_clo(alloc_clo(lam8598_fptr, 0));

void* lam8600_fptr() // lam8600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8601 = arg_buffer[1];
//reading env and args
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8601))[5];
//not do dummy comment
void* a8403 = (decode_clo(env8601))[4];
//not do dummy comment
void* cons = (decode_clo(env8601))[3];
//not do dummy comment
void* kont8469 = (decode_clo(env8601))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8601))[1];

//creating new closure instance
void** clo8912 = alloc_clo(lam8598_fptr, 3);

//setting env list
clo8912[1] = cons;
clo8912[2] = kont8469;
clo8912[3] = a8403;
void* f8470 = encode_clo(clo8912);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8470;
arg_buffer[3] = a8404;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void* lam8602_fptr() // lam8602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8603 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8603))[6];
//not do dummy comment
void* append = (decode_clo(env8603))[5];
//not do dummy comment
void* lst1 = (decode_clo(env8603))[4];
//not do dummy comment
void* cons = (decode_clo(env8603))[3];
//not do dummy comment
void* kont8469 = (decode_clo(env8603))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8603))[1];

//creating new closure instance
void** clo8914 = alloc_clo(lam8600_fptr, 5);

//setting env list
clo8914[1] = lst2;
clo8914[2] = kont8469;
clo8914[3] = cons;
clo8914[4] = a8403;
clo8914[5] = append;
void* f8471 = encode_clo(clo8914);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
function_ptr();
return nullptr;
}

void* lam8602 = encode_clo(alloc_clo(lam8602_fptr, 0));

void* lam8604_fptr() // lam8604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8605 = arg_buffer[1];
//reading env and args
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8605))[7];
//not do dummy comment
void* append = (decode_clo(env8605))[6];
//not do dummy comment
void* cons = (decode_clo(env8605))[5];
//not do dummy comment
void* kont8469 = (decode_clo(env8605))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8605))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8605))[2];
//not do dummy comment
void* car = (decode_clo(env8605))[1];

//if-clause
bool if_guard8915 = is_true(a8402);
if(if_guard8915)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8469);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8469))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8917 = alloc_clo(lam8602_fptr, 6);

//setting env list
clo8917[1] = lst2;
clo8917[2] = kont8469;
clo8917[3] = cons;
clo8917[4] = lst1;
clo8917[5] = append;
clo8917[6] = cdr;
void* f8472 = encode_clo(clo8917);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
function_ptr();
return nullptr;
}

}

void* lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8606 = arg_buffer[1];
//reading env and args
void* kont8469 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8919 = alloc_clo(lam8604_fptr, 7);

//setting env list
clo8919[1] = car;
clo8919[2] = lst1;
clo8919[3] = lst2;
clo8919[4] = kont8469;
clo8919[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8919[6] = append;
clo8919[7] = cdr;
void* f8473 = encode_clo(clo8919);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8607_fptr() // lam8607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8608 = arg_buffer[1];
//reading env and args
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* pair_u63 = (decode_clo(env8608))[2];
//not do dummy comment
void* kont8474 = (decode_clo(env8608))[1];
void* cps_u45lst8475 = prim_cons(kont8474, a8407);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(pair_u63);
arg_buffer[2] = cps_u45lst8475;
arg_buffer[0] = reinterpret_cast<void*>(2);
pair_u63_fptr();
return nullptr;
}

void* lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8610 = arg_buffer[1];
//reading env and args
void* kont8474 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8920 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8920, "100", 10);
void* a8406 = encode_mpz(mpzvar8920);

//creating new closure instance
void** clo8922 = alloc_clo(lam8607_fptr, 2);

//setting env list
clo8922[1] = kont8474;
clo8922[2] = pair_u63;
void* f8476 = encode_clo(clo8922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8476;
arg_buffer[3] = a8406;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8611_fptr() // lam8611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8612 = arg_buffer[1];
//reading env and args
void* xy8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8477 = (decode_clo(env8612))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8477);
arg_buffer[2] = xy8408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8613 = arg_buffer[1];
//reading env and args
void* kont8477 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8924 = alloc_clo(lam8611_fptr, 1);

//setting env list
clo8924[1] = kont8477;
void* f8478 = encode_clo(clo8924);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8478;
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

