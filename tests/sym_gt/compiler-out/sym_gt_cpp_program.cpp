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
void* _env8623 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8621 = prim_car(lst);
void* lst8624 = prim_cdr(lst);
void* x8622 = apply_prim__u43(lst8624);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8621);
arg_buffer[2] = x8622;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8621))[0]);
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
void* _env8627 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8625 = prim_car(lst);
void* lst8628 = prim_cdr(lst);
void* x8626 = apply_prim__u45(lst8628);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8625);
arg_buffer[2] = x8626;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8625))[0]);
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
void* _env8631 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8629 = prim_car(lst);
void* lst8632 = prim_cdr(lst);
void* x8630 = apply_prim__u42(lst8632);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8629);
arg_buffer[2] = x8630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8629))[0]);
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
void* x8634 = apply_prim__u47(lst8636);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8633);
arg_buffer[2] = x8634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8633))[0]);
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
void* x8638 = apply_prim__u61(lst8640);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8637);
arg_buffer[2] = x8638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8637))[0]);
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
void* x8642 = apply_prim__u62(lst8644);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8641);
arg_buffer[2] = x8642;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8641))[0]);
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
void* x8646 = apply_prim__u60(lst8648);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8645);
arg_buffer[2] = x8646;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8645))[0]);
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
void* x8650 = apply_prim__u60_u61(lst8652);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8649);
arg_buffer[2] = x8650;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8649))[0]);
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
void* x8654 = apply_prim__u62_u61(lst8656);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8653);
arg_buffer[2] = x8654;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8653))[0]);
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
void* x8658 = apply_prim_modulo(lst8660);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8657);
arg_buffer[2] = x8658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8657))[0]);
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
void* x8662 = apply_prim_null_u63(lst8664);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8661);
arg_buffer[2] = x8662;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8661))[0]);
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
void* x8666 = apply_prim_equal_u63(lst8668);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8665);
arg_buffer[2] = x8666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8665))[0]);
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
void* x8670 = apply_prim_eq_u63(lst8672);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8669);
arg_buffer[2] = x8670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8669))[0]);
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
void* x8674 = apply_prim_cons(lst8676);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8673);
arg_buffer[2] = x8674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8673))[0]);
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
void* x8678 = apply_prim_car(lst8680);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8677);
arg_buffer[2] = x8678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8677))[0]);
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
void* x8682 = apply_prim_cdr(lst8684);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8681);
arg_buffer[2] = x8682;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8681))[0]);
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
void* x8686 = apply_prim_float_u45_u62int(lst8688);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8685);
arg_buffer[2] = x8686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8685))[0]);
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
void* x8690 = apply_prim_int_u45_u62float(lst8692);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8689);
arg_buffer[2] = x8690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8689))[0]);
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
void* x8694 = apply_prim_hash(lst8696);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8693);
arg_buffer[2] = x8694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8693))[0]);
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
void* x8698 = apply_prim_hash_u45ref(lst8700);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8697);
arg_buffer[2] = x8698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8697))[0]);
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
void* x8702 = apply_prim_hash_u45set(lst8704);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8701);
arg_buffer[2] = x8702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8701))[0]);
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
void* x8706 = apply_prim_hash_u45keys(lst8708);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8705);
arg_buffer[2] = x8706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8705))[0]);
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
void* x8710 = apply_prim_hash_u45has_u45key_u63(lst8712);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8709);
arg_buffer[2] = x8710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8709))[0]);
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
void* x8714 = apply_prim_hash_u45count(lst8716);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8713);
arg_buffer[2] = x8714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8713))[0]);
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
void* x8718 = apply_prim_set(lst8720);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8717);
arg_buffer[2] = x8718;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8717))[0]);
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
void* x8722 = apply_prim_set_u45_u62list(lst8724);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8721);
arg_buffer[2] = x8722;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8721))[0]);
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
void* x8726 = apply_prim_list_u45_u62set(lst8728);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8725);
arg_buffer[2] = x8726;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8725))[0]);
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
void* x8730 = apply_prim_set_u45add(lst8732);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8729);
arg_buffer[2] = x8730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8729))[0]);
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
void* x8734 = apply_prim_set_u45member_u63(lst8736);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8733);
arg_buffer[2] = x8734;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8733))[0]);
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
void* x8738 = apply_prim_set_u45remove(lst8740);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8737);
arg_buffer[2] = x8738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8737))[0]);
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
void* x8742 = apply_prim_set_u45count(lst8744);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8741);
arg_buffer[2] = x8742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8741))[0]);
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
void* _8486 = arg_buffer[1];
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
void* x8485 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8417);
arg_buffer[2] = x8485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8487_fptr() // lam8487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8488 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8418 = (decode_clo(env8488))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8488))[2];
//not do dummy comment
void* a8350 = (decode_clo(env8488))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8350, a8352);
arg_buffer[1]=reinterpret_cast<void*>(kont8418);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8418))[0]);
function_ptr();
return nullptr;
}

void* lam8487 = encode_clo(alloc_clo(lam8487_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8491 = arg_buffer[1];
//reading env and args
void* kont8418 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8829 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8829, "0", 10);
void* a8350 = encode_mpz(mpzvar8829);
mpz_t* mpzvar8830 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8830, "2", 10);
void* a8351 = encode_mpz(mpzvar8830);

//creating new closure instance
void** clo8832 = alloc_clo(lam8487_fptr, 3);

//setting env list
clo8832[1] = a8350;
clo8832[2] = equal_u63;
clo8832[3] = kont8418;
void* f8419 = encode_clo(clo8832);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8351);
arg_buffer[1]=reinterpret_cast<void*>(f8419);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8492_fptr() // lam8492 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8493 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8353 = (decode_clo(env8493))[3];
//not do dummy comment
void* kont8420 = (decode_clo(env8493))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8493))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8353, a8355);
arg_buffer[1]=reinterpret_cast<void*>(kont8420);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8420))[0]);
function_ptr();
return nullptr;
}

void* lam8492 = encode_clo(alloc_clo(lam8492_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8496 = arg_buffer[1];
//reading env and args
void* kont8420 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8833 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8833, "1", 10);
void* a8353 = encode_mpz(mpzvar8833);
mpz_t* mpzvar8834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8834, "2", 10);
void* a8354 = encode_mpz(mpzvar8834);

//creating new closure instance
void** clo8836 = alloc_clo(lam8492_fptr, 3);

//setting env list
clo8836[1] = equal_u63;
clo8836[2] = kont8420;
clo8836[3] = a8353;
void* f8421 = encode_clo(clo8836);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8354);
arg_buffer[1]=reinterpret_cast<void*>(f8421);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8421))[0]);
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8499_fptr() // lam8499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8500 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8422 = (decode_clo(env8500))[3];
//not do dummy comment
void* x = (decode_clo(env8500))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8500))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8422;
arg_buffer[3] = x;
arg_buffer[4] = a8361;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8499 = encode_clo(alloc_clo(lam8499_fptr, 0));

void* lam8501_fptr() // lam8501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8502 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8502))[5];
//not do dummy comment
void* lst = (decode_clo(env8502))[4];
//not do dummy comment
void* kont8422 = (decode_clo(env8502))[3];
//not do dummy comment
void* x = (decode_clo(env8502))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8502))[1];

//if-clause
bool if_guard8837 = is_true(a8359);
if(if_guard8837)
{
void* xy8360 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8422);
arg_buffer[2] = xy8360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8422))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8839 = alloc_clo(lam8499_fptr, 3);

//setting env list
clo8839[1] = member_u63;
clo8839[2] = x;
clo8839[3] = kont8422;
void* f8423 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8423);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8423))[0]);
function_ptr();
return nullptr;
}

}

void* lam8501 = encode_clo(alloc_clo(lam8501_fptr, 0));

void* lam8503_fptr() // lam8503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8504))[6];
//not do dummy comment
void* lst = (decode_clo(env8504))[5];
//not do dummy comment
void* kont8422 = (decode_clo(env8504))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8504))[3];
//not do dummy comment
void* x = (decode_clo(env8504))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8504))[1];

//creating new closure instance
void** clo8841 = alloc_clo(lam8501_fptr, 5);

//setting env list
clo8841[1] = member_u63;
clo8841[2] = x;
clo8841[3] = kont8422;
clo8841[4] = lst;
clo8841[5] = cdr;
void* f8424 = encode_clo(clo8841);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8358, x);
arg_buffer[1]=reinterpret_cast<void*>(f8424);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8424))[0]);
function_ptr();
return nullptr;
}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void* lam8505_fptr() // lam8505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8506 = arg_buffer[1];
//reading env and args
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8506))[7];
//not do dummy comment
void* lst = (decode_clo(env8506))[6];
//not do dummy comment
void* kont8422 = (decode_clo(env8506))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8506))[4];
//not do dummy comment
void* x = (decode_clo(env8506))[3];
//not do dummy comment
void* car = (decode_clo(env8506))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8506))[1];

//if-clause
bool if_guard8842 = is_true(a8356);
if(if_guard8842)
{
void* xy8357 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8422);
arg_buffer[2] = xy8357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8422))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8844 = alloc_clo(lam8503_fptr, 6);

//setting env list
clo8844[1] = member_u63;
clo8844[2] = x;
clo8844[3] = equal_u63;
clo8844[4] = kont8422;
clo8844[5] = lst;
clo8844[6] = cdr;
void* f8425 = encode_clo(clo8844);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8425);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8425))[0]);
function_ptr();
return nullptr;
}

}

void* lam8505 = encode_clo(alloc_clo(lam8505_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8507 = arg_buffer[1];
//reading env and args
void* kont8422 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8846 = alloc_clo(lam8505_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8846[1] = member_u63;
clo8846[2] = car;
clo8846[3] = x;
clo8846[4] = equal_u63;
clo8846[5] = kont8422;
clo8846[6] = lst;
clo8846[7] = cdr;
void* f8426 = encode_clo(clo8846);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8508_fptr() // lam8508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8509 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8509))[3];
//not do dummy comment
void* a8363 = (decode_clo(env8509))[2];
//not do dummy comment
void* kont8427 = (decode_clo(env8509))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8427;
arg_buffer[3] = a8363;
arg_buffer[4] = a8365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8511))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8511))[4];
//not do dummy comment
void* cons = (decode_clo(env8511))[3];
//not do dummy comment
void* a8363 = (decode_clo(env8511))[2];
//not do dummy comment
void* kont8427 = (decode_clo(env8511))[1];

//creating new closure instance
void** clo8848 = alloc_clo(lam8508_fptr, 3);

//setting env list
clo8848[1] = kont8427;
clo8848[2] = a8363;
clo8848[3] = reverse_u45helper;
void* f8428 = encode_clo(clo8848);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8364, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
function_ptr();
return nullptr;
}

void* lam8510 = encode_clo(alloc_clo(lam8510_fptr, 0));

void* lam8512_fptr() // lam8512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8513 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8513))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8513))[5];
//not do dummy comment
void* kont8427 = (decode_clo(env8513))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8513))[3];
//not do dummy comment
void* car = (decode_clo(env8513))[2];
//not do dummy comment
void* cons = (decode_clo(env8513))[1];

//creating new closure instance
void** clo8850 = alloc_clo(lam8510_fptr, 5);

//setting env list
clo8850[1] = kont8427;
clo8850[2] = a8363;
clo8850[3] = cons;
clo8850[4] = lst2;
clo8850[5] = reverse_u45helper;
void* f8429 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
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
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8515))[7];
//not do dummy comment
void* lst = (decode_clo(env8515))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8515))[5];
//not do dummy comment
void* kont8427 = (decode_clo(env8515))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8515))[3];
//not do dummy comment
void* car = (decode_clo(env8515))[2];
//not do dummy comment
void* cons = (decode_clo(env8515))[1];

//if-clause
bool if_guard8851 = is_true(a8362);
if(if_guard8851)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8427);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8427))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8853 = alloc_clo(lam8512_fptr, 6);

//setting env list
clo8853[1] = cons;
clo8853[2] = car;
clo8853[3] = lst2;
clo8853[4] = kont8427;
clo8853[5] = reverse_u45helper;
clo8853[6] = lst;
void* f8430 = encode_clo(clo8853);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8430);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
function_ptr();
return nullptr;
}

}

void* lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8516 = arg_buffer[1];
//reading env and args
void* kont8427 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8855 = alloc_clo(lam8514_fptr, 7);

//setting env list
clo8855[1] = cons;
clo8855[2] = car;
clo8855[3] = lst2;
clo8855[4] = kont8427;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8855[5] = reverse_u45helper;
clo8855[6] = lst;
clo8855[7] = cdr;
void* f8431 = encode_clo(clo8855);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8517_fptr() // lam8517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8518))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8518))[2];
//not do dummy comment
void* kont8432 = (decode_clo(env8518))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8432;
arg_buffer[3] = lst;
arg_buffer[4] = a8366;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8517 = encode_clo(alloc_clo(lam8517_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8519 = arg_buffer[1];
//reading env and args
void* kont8432 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8857 = alloc_clo(lam8517_fptr, 3);

//setting env list
clo8857[1] = kont8432;
clo8857[2] = reverse_u45helper;
clo8857[3] = lst;
void* f8433 = encode_clo(clo8857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8433;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8520_fptr() // lam8520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8521 = arg_buffer[1];
//reading env and args
void* xy8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8434 = (decode_clo(env8521))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8434);
arg_buffer[2] = xy8369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8434))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void* lam8522_fptr() // lam8522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8523 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8372 = (decode_clo(env8523))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8523))[3];
//not do dummy comment
void* a8370 = (decode_clo(env8523))[2];
//not do dummy comment
void* kont8434 = (decode_clo(env8523))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8434;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[5] = a8374;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8522 = encode_clo(alloc_clo(lam8522_fptr, 0));

void* lam8524_fptr() // lam8524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8372 = (decode_clo(env8525))[6];
//not do dummy comment
void* cons = (decode_clo(env8525))[5];
//not do dummy comment
void* a8370 = (decode_clo(env8525))[4];
//not do dummy comment
void* kont8434 = (decode_clo(env8525))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8525))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8525))[1];

//creating new closure instance
void** clo8859 = alloc_clo(lam8522_fptr, 4);

//setting env list
clo8859[1] = kont8434;
clo8859[2] = a8370;
clo8859[3] = take_u45helper;
clo8859[4] = a8372;
void* f8436 = encode_clo(clo8859);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8373, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

void* lam8524 = encode_clo(alloc_clo(lam8524_fptr, 0));

void* lam8526_fptr() // lam8526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8527 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8527))[7];
//not do dummy comment
void* car = (decode_clo(env8527))[6];
//not do dummy comment
void* cons = (decode_clo(env8527))[5];
//not do dummy comment
void* a8370 = (decode_clo(env8527))[4];
//not do dummy comment
void* kont8434 = (decode_clo(env8527))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8527))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8527))[1];

//creating new closure instance
void** clo8861 = alloc_clo(lam8524_fptr, 6);

//setting env list
clo8861[1] = lst2;
clo8861[2] = take_u45helper;
clo8861[3] = kont8434;
clo8861[4] = a8370;
clo8861[5] = cons;
clo8861[6] = a8372;
void* f8437 = encode_clo(clo8861);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

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
void* kont8434 = (decode_clo(env8530))[8];
//not do dummy comment
void* lst = (decode_clo(env8530))[7];
//not do dummy comment
void* cons = (decode_clo(env8530))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8530))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8530))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8530))[3];
//not do dummy comment
void* n = (decode_clo(env8530))[2];
//not do dummy comment
void* car = (decode_clo(env8530))[1];
mpz_t* mpzvar8862 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8862, "1", 10);
void* a8371 = encode_mpz(mpzvar8862);

//creating new closure instance
void** clo8864 = alloc_clo(lam8526_fptr, 7);

//setting env list
clo8864[1] = lst2;
clo8864[2] = take_u45helper;
clo8864[3] = kont8434;
clo8864[4] = a8370;
clo8864[5] = cons;
clo8864[6] = car;
clo8864[7] = lst;
void* f8438 = encode_clo(clo8864);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8371);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
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
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8532))[10];
//not do dummy comment
void* kont8434 = (decode_clo(env8532))[9];
//not do dummy comment
void* lst = (decode_clo(env8532))[8];
//not do dummy comment
void* reverse = (decode_clo(env8532))[7];
//not do dummy comment
void* cons = (decode_clo(env8532))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8532))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8532))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8532))[3];
//not do dummy comment
void* n = (decode_clo(env8532))[2];
//not do dummy comment
void* car = (decode_clo(env8532))[1];

//if-clause
bool if_guard8865 = is_true(a8368);
if(if_guard8865)
{

//creating new closure instance
void** clo8867 = alloc_clo(lam8520_fptr, 1);

//setting env list
clo8867[1] = kont8434;
void* f8435 = encode_clo(clo8867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8435;
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
void** clo8869 = alloc_clo(lam8529_fptr, 8);

//setting env list
clo8869[1] = car;
clo8869[2] = n;
clo8869[3] = lst2;
clo8869[4] = take_u45helper;
clo8869[5] = _u45;
clo8869[6] = cons;
clo8869[7] = lst;
clo8869[8] = kont8434;
void* f8439 = encode_clo(clo8869);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
function_ptr();
return nullptr;
}

}

void* lam8531 = encode_clo(alloc_clo(lam8531_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8534 = arg_buffer[1];
//reading env and args
void* kont8434 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8870 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8870, "0", 10);
void* a8367 = encode_mpz(mpzvar8870);

//creating new closure instance
void** clo8872 = alloc_clo(lam8531_fptr, 10);

//setting env list
clo8872[1] = car;
clo8872[2] = n;
clo8872[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8872[4] = take_u45helper;
clo8872[5] = _u45;
clo8872[6] = cons;
clo8872[7] = reverse;
clo8872[8] = lst;
clo8872[9] = kont8434;
clo8872[10] = cdr;
void* f8440 = encode_clo(clo8872);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8367);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8536))[4];
//not do dummy comment
void* kont8441 = (decode_clo(env8536))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8536))[2];
//not do dummy comment
void* n = (decode_clo(env8536))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8441;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8375;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8537 = arg_buffer[1];
//reading env and args
void* kont8441 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8874 = alloc_clo(lam8535_fptr, 4);

//setting env list
clo8874[1] = n;
clo8874[2] = take_u45helper;
clo8874[3] = kont8441;
clo8874[4] = lst;
void* f8442 = encode_clo(clo8874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8442;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8539_fptr() // lam8539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8443 = (decode_clo(env8540))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8540))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8540))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8378, a8380);
arg_buffer[1]=reinterpret_cast<void*>(kont8443);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8542))[4];
//not do dummy comment
void* kont8443 = (decode_clo(env8542))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8542))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8542))[1];

//creating new closure instance
void** clo8876 = alloc_clo(lam8539_fptr, 3);

//setting env list
clo8876[1] = a8378;
clo8876[2] = _u43;
clo8876[3] = kont8443;
void* f8444 = encode_clo(clo8876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8444;
arg_buffer[3] = a8379;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
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
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8545))[5];
//not do dummy comment
void* lst = (decode_clo(env8545))[4];
//not do dummy comment
void* length = (decode_clo(env8545))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8545))[2];
//not do dummy comment
void* kont8443 = (decode_clo(env8545))[1];

//if-clause
bool if_guard8877 = is_true(a8376);
if(if_guard8877)
{
mpz_t* mpzvar8878 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8878, "0", 10);
void* xy8377 = encode_mpz(mpzvar8878);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8443);
arg_buffer[2] = xy8377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8879 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8879, "1", 10);
void* a8378 = encode_mpz(mpzvar8879);

//creating new closure instance
void** clo8881 = alloc_clo(lam8541_fptr, 4);

//setting env list
clo8881[1] = a8378;
clo8881[2] = _u43;
clo8881[3] = kont8443;
clo8881[4] = length;
void* f8445 = encode_clo(clo8881);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
function_ptr();
return nullptr;
}

}

void* lam8544 = encode_clo(alloc_clo(lam8544_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8546 = arg_buffer[1];
//reading env and args
void* kont8443 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8883 = alloc_clo(lam8544_fptr, 5);

//setting env list
clo8883[1] = kont8443;
clo8883[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8883[3] = length;
clo8883[4] = lst;
clo8883[5] = cdr;
void* f8446 = encode_clo(clo8883);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8446);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8547_fptr() // lam8547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8548 = arg_buffer[1];
//reading env and args
void* xy8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8447 = (decode_clo(env8548))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[2] = xy8382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
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
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8384 = (decode_clo(env8550))[3];
//not do dummy comment
void* cons = (decode_clo(env8550))[2];
//not do dummy comment
void* kont8447 = (decode_clo(env8550))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8384, a8386);
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8552))[5];
//not do dummy comment
void* proc = (decode_clo(env8552))[4];
//not do dummy comment
void* a8384 = (decode_clo(env8552))[3];
//not do dummy comment
void* cons = (decode_clo(env8552))[2];
//not do dummy comment
void* kont8447 = (decode_clo(env8552))[1];

//creating new closure instance
void** clo8885 = alloc_clo(lam8549_fptr, 3);

//setting env list
clo8885[1] = kont8447;
clo8885[2] = cons;
clo8885[3] = a8384;
void* f8449 = encode_clo(clo8885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8449;
arg_buffer[3] = proc;
arg_buffer[4] = a8385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8554))[6];
//not do dummy comment
void* lst = (decode_clo(env8554))[5];
//not do dummy comment
void* map = (decode_clo(env8554))[4];
//not do dummy comment
void* proc = (decode_clo(env8554))[3];
//not do dummy comment
void* cons = (decode_clo(env8554))[2];
//not do dummy comment
void* kont8447 = (decode_clo(env8554))[1];

//creating new closure instance
void** clo8887 = alloc_clo(lam8551_fptr, 5);

//setting env list
clo8887[1] = kont8447;
clo8887[2] = cons;
clo8887[3] = a8384;
clo8887[4] = proc;
clo8887[5] = map;
void* f8450 = encode_clo(clo8887);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

void* lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void* lam8555_fptr() // lam8555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8556))[6];
//not do dummy comment
void* lst = (decode_clo(env8556))[5];
//not do dummy comment
void* map = (decode_clo(env8556))[4];
//not do dummy comment
void* proc = (decode_clo(env8556))[3];
//not do dummy comment
void* cons = (decode_clo(env8556))[2];
//not do dummy comment
void* kont8447 = (decode_clo(env8556))[1];

//creating new closure instance
void** clo8889 = alloc_clo(lam8553_fptr, 6);

//setting env list
clo8889[1] = kont8447;
clo8889[2] = cons;
clo8889[3] = proc;
clo8889[4] = map;
clo8889[5] = lst;
clo8889[6] = cdr;
void* f8451 = encode_clo(clo8889);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8451;
arg_buffer[3] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8558))[8];
//not do dummy comment
void* map = (decode_clo(env8558))[7];
//not do dummy comment
void* proc = (decode_clo(env8558))[6];
//not do dummy comment
void* car = (decode_clo(env8558))[5];
//not do dummy comment
void* list = (decode_clo(env8558))[4];
//not do dummy comment
void* cdr = (decode_clo(env8558))[3];
//not do dummy comment
void* cons = (decode_clo(env8558))[2];
//not do dummy comment
void* kont8447 = (decode_clo(env8558))[1];

//if-clause
bool if_guard8890 = is_true(a8381);
if(if_guard8890)
{

//creating new closure instance
void** clo8892 = alloc_clo(lam8547_fptr, 1);

//setting env list
clo8892[1] = kont8447;
void* f8448 = encode_clo(clo8892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8894 = alloc_clo(lam8555_fptr, 6);

//setting env list
clo8894[1] = kont8447;
clo8894[2] = cons;
clo8894[3] = proc;
clo8894[4] = map;
clo8894[5] = lst;
clo8894[6] = cdr;
void* f8452 = encode_clo(clo8894);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8452);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8452))[0]);
function_ptr();
return nullptr;
}

}

void* lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8559 = arg_buffer[1];
//reading env and args
void* kont8447 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8896 = alloc_clo(lam8557_fptr, 8);

//setting env list
clo8896[1] = kont8447;
clo8896[2] = cons;
clo8896[3] = cdr;
clo8896[4] = list;
clo8896[5] = car;
clo8896[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8896[7] = map;
clo8896[8] = lst;
void* f8453 = encode_clo(clo8896);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8560_fptr() // lam8560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8561 = arg_buffer[1];
//reading env and args
void* xy8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8454 = (decode_clo(env8561))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8454);
arg_buffer[2] = xy8388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
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
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8454 = (decode_clo(env8563))[3];
//not do dummy comment
void* a8391 = (decode_clo(env8563))[2];
//not do dummy comment
void* cons = (decode_clo(env8563))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8391, a8393);
arg_buffer[1]=reinterpret_cast<void*>(kont8454);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8454 = (decode_clo(env8565))[5];
//not do dummy comment
void* a8391 = (decode_clo(env8565))[4];
//not do dummy comment
void* op = (decode_clo(env8565))[3];
//not do dummy comment
void* filter = (decode_clo(env8565))[2];
//not do dummy comment
void* cons = (decode_clo(env8565))[1];

//creating new closure instance
void** clo8898 = alloc_clo(lam8562_fptr, 3);

//setting env list
clo8898[1] = cons;
clo8898[2] = a8391;
clo8898[3] = kont8454;
void* f8456 = encode_clo(clo8898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8456;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8567))[6];
//not do dummy comment
void* lst = (decode_clo(env8567))[5];
//not do dummy comment
void* kont8454 = (decode_clo(env8567))[4];
//not do dummy comment
void* op = (decode_clo(env8567))[3];
//not do dummy comment
void* filter = (decode_clo(env8567))[2];
//not do dummy comment
void* cons = (decode_clo(env8567))[1];

//creating new closure instance
void** clo8900 = alloc_clo(lam8564_fptr, 5);

//setting env list
clo8900[1] = cons;
clo8900[2] = filter;
clo8900[3] = op;
clo8900[4] = a8391;
clo8900[5] = kont8454;
void* f8457 = encode_clo(clo8900);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8457);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8457))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8454 = (decode_clo(env8569))[3];
//not do dummy comment
void* op = (decode_clo(env8569))[2];
//not do dummy comment
void* filter = (decode_clo(env8569))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8454;
arg_buffer[3] = op;
arg_buffer[4] = a8394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8571))[7];
//not do dummy comment
void* lst = (decode_clo(env8571))[6];
//not do dummy comment
void* kont8454 = (decode_clo(env8571))[5];
//not do dummy comment
void* op = (decode_clo(env8571))[4];
//not do dummy comment
void* cons = (decode_clo(env8571))[3];
//not do dummy comment
void* filter = (decode_clo(env8571))[2];
//not do dummy comment
void* car = (decode_clo(env8571))[1];

//if-clause
bool if_guard8901 = is_true(a8390);
if(if_guard8901)
{

//creating new closure instance
void** clo8903 = alloc_clo(lam8566_fptr, 6);

//setting env list
clo8903[1] = cons;
clo8903[2] = filter;
clo8903[3] = op;
clo8903[4] = kont8454;
clo8903[5] = lst;
clo8903[6] = cdr;
void* f8458 = encode_clo(clo8903);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8905 = alloc_clo(lam8568_fptr, 3);

//setting env list
clo8905[1] = filter;
clo8905[2] = op;
clo8905[3] = kont8454;
void* f8459 = encode_clo(clo8905);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
return nullptr;
}

}

void* lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void* lam8572_fptr() // lam8572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8573 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8573))[7];
//not do dummy comment
void* lst = (decode_clo(env8573))[6];
//not do dummy comment
void* kont8454 = (decode_clo(env8573))[5];
//not do dummy comment
void* op = (decode_clo(env8573))[4];
//not do dummy comment
void* cons = (decode_clo(env8573))[3];
//not do dummy comment
void* filter = (decode_clo(env8573))[2];
//not do dummy comment
void* car = (decode_clo(env8573))[1];

//creating new closure instance
void** clo8907 = alloc_clo(lam8570_fptr, 7);

//setting env list
clo8907[1] = car;
clo8907[2] = filter;
clo8907[3] = cons;
clo8907[4] = op;
clo8907[5] = kont8454;
clo8907[6] = lst;
clo8907[7] = cdr;
void* f8460 = encode_clo(clo8907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8460;
arg_buffer[3] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
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
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8575))[8];
//not do dummy comment
void* kont8454 = (decode_clo(env8575))[7];
//not do dummy comment
void* op = (decode_clo(env8575))[6];
//not do dummy comment
void* cons = (decode_clo(env8575))[5];
//not do dummy comment
void* list = (decode_clo(env8575))[4];
//not do dummy comment
void* cdr = (decode_clo(env8575))[3];
//not do dummy comment
void* filter = (decode_clo(env8575))[2];
//not do dummy comment
void* car = (decode_clo(env8575))[1];

//if-clause
bool if_guard8908 = is_true(a8387);
if(if_guard8908)
{

//creating new closure instance
void** clo8910 = alloc_clo(lam8560_fptr, 1);

//setting env list
clo8910[1] = kont8454;
void* f8455 = encode_clo(clo8910);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8455;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8912 = alloc_clo(lam8572_fptr, 7);

//setting env list
clo8912[1] = car;
clo8912[2] = filter;
clo8912[3] = cons;
clo8912[4] = op;
clo8912[5] = kont8454;
clo8912[6] = lst;
clo8912[7] = cdr;
void* f8461 = encode_clo(clo8912);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
function_ptr();
return nullptr;
}

}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8576 = arg_buffer[1];
//reading env and args
void* kont8454 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8914 = alloc_clo(lam8574_fptr, 8);

//setting env list
clo8914[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8914[2] = filter;
clo8914[3] = cdr;
clo8914[4] = list;
clo8914[5] = cons;
clo8914[6] = op;
clo8914[7] = kont8454;
clo8914[8] = lst;
void* f8462 = encode_clo(clo8914);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8462);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8577_fptr() // lam8577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8578 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8578))[3];
//not do dummy comment
void* a8397 = (decode_clo(env8578))[2];
//not do dummy comment
void* kont8463 = (decode_clo(env8578))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8463;
arg_buffer[3] = a8397;
arg_buffer[4] = a8399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

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
void* drop = (decode_clo(env8581))[4];
//not do dummy comment
void* n = (decode_clo(env8581))[3];
//not do dummy comment
void* kont8463 = (decode_clo(env8581))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8581))[1];
mpz_t* mpzvar8915 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8915, "1", 10);
void* a8398 = encode_mpz(mpzvar8915);

//creating new closure instance
void** clo8917 = alloc_clo(lam8577_fptr, 3);

//setting env list
clo8917[1] = kont8463;
clo8917[2] = a8397;
clo8917[3] = drop;
void* f8464 = encode_clo(clo8917);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8398);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
function_ptr();
return nullptr;
}

void* lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void* lam8582_fptr() // lam8582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8583 = arg_buffer[1];
//reading env and args
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8583))[6];
//not do dummy comment
void* n = (decode_clo(env8583))[5];
//not do dummy comment
void* kont8463 = (decode_clo(env8583))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8583))[3];
//not do dummy comment
void* lst = (decode_clo(env8583))[2];
//not do dummy comment
void* drop = (decode_clo(env8583))[1];

//if-clause
bool if_guard8918 = is_true(a8396);
if(if_guard8918)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8463);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8463))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8920 = alloc_clo(lam8580_fptr, 4);

//setting env list
clo8920[1] = _u45;
clo8920[2] = kont8463;
clo8920[3] = n;
clo8920[4] = drop;
void* f8465 = encode_clo(clo8920);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
function_ptr();
return nullptr;
}

}

void* lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8585 = arg_buffer[1];
//reading env and args
void* kont8463 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8921 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8921, "0", 10);
void* a8395 = encode_mpz(mpzvar8921);

//creating new closure instance
void** clo8923 = alloc_clo(lam8582_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8923[1] = drop;
clo8923[2] = lst;
clo8923[3] = _u45;
clo8923[4] = kont8463;
clo8923[5] = n;
clo8923[6] = cdr;
void* f8466 = encode_clo(clo8923);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8395);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8586_fptr() // lam8586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8402 = (decode_clo(env8587))[4];
//not do dummy comment
void* kont8467 = (decode_clo(env8587))[3];
//not do dummy comment
void* fun = (decode_clo(env8587))[2];
//not do dummy comment
void* foldl = (decode_clo(env8587))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8467;
arg_buffer[3] = fun;
arg_buffer[4] = a8402;
arg_buffer[5] = a8403;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8589))[5];
//not do dummy comment
void* kont8467 = (decode_clo(env8589))[4];
//not do dummy comment
void* lst = (decode_clo(env8589))[3];
//not do dummy comment
void* fun = (decode_clo(env8589))[2];
//not do dummy comment
void* foldl = (decode_clo(env8589))[1];

//creating new closure instance
void** clo8925 = alloc_clo(lam8586_fptr, 4);

//setting env list
clo8925[1] = foldl;
clo8925[2] = fun;
clo8925[3] = kont8467;
clo8925[4] = a8402;
void* f8468 = encode_clo(clo8925);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
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
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8591))[6];
//not do dummy comment
void* kont8467 = (decode_clo(env8591))[5];
//not do dummy comment
void* lst = (decode_clo(env8591))[4];
//not do dummy comment
void* fun = (decode_clo(env8591))[3];
//not do dummy comment
void* acc = (decode_clo(env8591))[2];
//not do dummy comment
void* foldl = (decode_clo(env8591))[1];

//creating new closure instance
void** clo8927 = alloc_clo(lam8588_fptr, 5);

//setting env list
clo8927[1] = foldl;
clo8927[2] = fun;
clo8927[3] = lst;
clo8927[4] = kont8467;
clo8927[5] = cdr;
void* f8469 = encode_clo(clo8927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8469;
arg_buffer[3] = a8401;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8593))[7];
//not do dummy comment
void* kont8467 = (decode_clo(env8593))[6];
//not do dummy comment
void* lst = (decode_clo(env8593))[5];
//not do dummy comment
void* fun = (decode_clo(env8593))[4];
//not do dummy comment
void* acc = (decode_clo(env8593))[3];
//not do dummy comment
void* car = (decode_clo(env8593))[2];
//not do dummy comment
void* foldl = (decode_clo(env8593))[1];

//if-clause
bool if_guard8928 = is_true(a8400);
if(if_guard8928)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8467);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8467))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8930 = alloc_clo(lam8590_fptr, 6);

//setting env list
clo8930[1] = foldl;
clo8930[2] = acc;
clo8930[3] = fun;
clo8930[4] = lst;
clo8930[5] = kont8467;
clo8930[6] = cdr;
void* f8470 = encode_clo(clo8930);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
function_ptr();
return nullptr;
}

}

void* lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8594 = arg_buffer[1];
//reading env and args
void* kont8467 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8932 = alloc_clo(lam8592_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8932[1] = foldl;
clo8932[2] = car;
clo8932[3] = acc;
clo8932[4] = fun;
clo8932[5] = lst;
clo8932[6] = kont8467;
clo8932[7] = cdr;
void* f8471 = encode_clo(clo8932);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8595_fptr() // lam8595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8596 = arg_buffer[1];
//reading env and args
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8405 = (decode_clo(env8596))[3];
//not do dummy comment
void* kont8472 = (decode_clo(env8596))[2];
//not do dummy comment
void* fun = (decode_clo(env8596))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8472;
arg_buffer[3] = a8405;
arg_buffer[4] = a8407;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8472 = (decode_clo(env8598))[5];
//not do dummy comment
void* fun = (decode_clo(env8598))[4];
//not do dummy comment
void* acc = (decode_clo(env8598))[3];
//not do dummy comment
void* foldr = (decode_clo(env8598))[2];
//not do dummy comment
void* a8405 = (decode_clo(env8598))[1];

//creating new closure instance
void** clo8934 = alloc_clo(lam8595_fptr, 3);

//setting env list
clo8934[1] = fun;
clo8934[2] = kont8472;
clo8934[3] = a8405;
void* f8473 = encode_clo(clo8934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8473;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8406;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
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
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8600))[6];
//not do dummy comment
void* kont8472 = (decode_clo(env8600))[5];
//not do dummy comment
void* fun = (decode_clo(env8600))[4];
//not do dummy comment
void* acc = (decode_clo(env8600))[3];
//not do dummy comment
void* foldr = (decode_clo(env8600))[2];
//not do dummy comment
void* lst = (decode_clo(env8600))[1];

//creating new closure instance
void** clo8936 = alloc_clo(lam8597_fptr, 5);

//setting env list
clo8936[1] = a8405;
clo8936[2] = foldr;
clo8936[3] = acc;
clo8936[4] = fun;
clo8936[5] = kont8472;
void* f8474 = encode_clo(clo8936);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8602))[7];
//not do dummy comment
void* kont8472 = (decode_clo(env8602))[6];
//not do dummy comment
void* fun = (decode_clo(env8602))[5];
//not do dummy comment
void* acc = (decode_clo(env8602))[4];
//not do dummy comment
void* car = (decode_clo(env8602))[3];
//not do dummy comment
void* foldr = (decode_clo(env8602))[2];
//not do dummy comment
void* lst = (decode_clo(env8602))[1];

//if-clause
bool if_guard8937 = is_true(a8404);
if(if_guard8937)
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
void** clo8939 = alloc_clo(lam8599_fptr, 6);

//setting env list
clo8939[1] = lst;
clo8939[2] = foldr;
clo8939[3] = acc;
clo8939[4] = fun;
clo8939[5] = kont8472;
clo8939[6] = cdr;
void* f8475 = encode_clo(clo8939);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
function_ptr();
return nullptr;
}

}

void* lam8601 = encode_clo(alloc_clo(lam8601_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8603 = arg_buffer[1];
//reading env and args
void* kont8472 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8941 = alloc_clo(lam8601_fptr, 7);

//setting env list
clo8941[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8941[2] = foldr;
clo8941[3] = car;
clo8941[4] = acc;
clo8941[5] = fun;
clo8941[6] = kont8472;
clo8941[7] = cdr;
void* f8476 = encode_clo(clo8941);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8604_fptr() // lam8604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8605 = arg_buffer[1];
//reading env and args
void* a8411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8409 = (decode_clo(env8605))[3];
//not do dummy comment
void* kont8477 = (decode_clo(env8605))[2];
//not do dummy comment
void* cons = (decode_clo(env8605))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8409, a8411);
arg_buffer[1]=reinterpret_cast<void*>(kont8477);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
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
void* a8410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8607))[5];
//not do dummy comment
void* append = (decode_clo(env8607))[4];
//not do dummy comment
void* a8409 = (decode_clo(env8607))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8607))[2];
//not do dummy comment
void* kont8477 = (decode_clo(env8607))[1];

//creating new closure instance
void** clo8943 = alloc_clo(lam8604_fptr, 3);

//setting env list
clo8943[1] = cons;
clo8943[2] = kont8477;
clo8943[3] = a8409;
void* f8478 = encode_clo(clo8943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8478;
arg_buffer[3] = a8410;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8609))[6];
//not do dummy comment
void* append = (decode_clo(env8609))[5];
//not do dummy comment
void* lst1 = (decode_clo(env8609))[4];
//not do dummy comment
void* cons = (decode_clo(env8609))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8609))[2];
//not do dummy comment
void* kont8477 = (decode_clo(env8609))[1];

//creating new closure instance
void** clo8945 = alloc_clo(lam8606_fptr, 5);

//setting env list
clo8945[1] = kont8477;
clo8945[2] = lst2;
clo8945[3] = a8409;
clo8945[4] = append;
clo8945[5] = cons;
void* f8479 = encode_clo(clo8945);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8479);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
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
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8611))[7];
//not do dummy comment
void* append = (decode_clo(env8611))[6];
//not do dummy comment
void* cons = (decode_clo(env8611))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8611))[4];
//not do dummy comment
void* kont8477 = (decode_clo(env8611))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8611))[2];
//not do dummy comment
void* car = (decode_clo(env8611))[1];

//if-clause
bool if_guard8946 = is_true(a8408);
if(if_guard8946)
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
void** clo8948 = alloc_clo(lam8608_fptr, 6);

//setting env list
clo8948[1] = kont8477;
clo8948[2] = lst2;
clo8948[3] = cons;
clo8948[4] = lst1;
clo8948[5] = append;
clo8948[6] = cdr;
void* f8480 = encode_clo(clo8948);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8480);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
function_ptr();
return nullptr;
}

}

void* lam8610 = encode_clo(alloc_clo(lam8610_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8612 = arg_buffer[1];
//reading env and args
void* kont8477 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8950 = alloc_clo(lam8610_fptr, 7);

//setting env list
clo8950[1] = car;
clo8950[2] = lst1;
clo8950[3] = kont8477;
clo8950[4] = lst2;
clo8950[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8950[6] = append;
clo8950[7] = cdr;
void* f8481 = encode_clo(clo8950);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8481);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8617 = arg_buffer[1];
//reading env and args
void* kont8482 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8951 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8951, "104", 10);
void* a8412 = encode_mpz(mpzvar8951);
mpz_t* mpzvar8952 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8952, "103", 10);
void* a8413 = encode_mpz(mpzvar8952);
mpz_t* mpzvar8953 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8953, "-100", 10);
void* a8414 = encode_mpz(mpzvar8953);
mpz_t* mpzvar8954 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8954, "-102", 10);
void* a8415 = encode_mpz(mpzvar8954);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = kont8482;
arg_buffer[3] = a8412;
arg_buffer[4] = a8413;
arg_buffer[5] = a8414;
arg_buffer[6] = a8415;
arg_buffer[0] = reinterpret_cast<void*>(6);
_u62_fptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8618_fptr() // lam8618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8619 = arg_buffer[1];
//reading env and args
void* xy8416 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8483 = (decode_clo(env8619))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8483);
arg_buffer[2] = xy8416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8618 = encode_clo(alloc_clo(lam8618_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8620 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8956 = alloc_clo(lam8618_fptr, 1);

//setting env list
clo8956[1] = kont8483;
void* f8484 = encode_clo(clo8956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8484;
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

