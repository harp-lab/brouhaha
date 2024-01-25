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
void* _env8625 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8623 = prim_car(lst);
void* lst8626 = prim_cdr(lst);
void* x8624 = apply_prim__u43(lst8626);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8623);
arg_buffer[2] = x8624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8623))[0]);
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
void* _env8629 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8627 = prim_car(lst);
void* lst8630 = prim_cdr(lst);
void* x8628 = apply_prim__u45(lst8630);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8627);
arg_buffer[2] = x8628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8627))[0]);
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
void* _env8633 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8631 = prim_car(lst);
void* lst8634 = prim_cdr(lst);
void* x8632 = apply_prim__u42(lst8634);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8631);
arg_buffer[2] = x8632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8631))[0]);
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
void* _env8637 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8635 = prim_car(lst);
void* lst8638 = prim_cdr(lst);
void* x8636 = apply_prim__u47(lst8638);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8635);
arg_buffer[2] = x8636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8635))[0]);
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
void* _env8641 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8639 = prim_car(lst);
void* lst8642 = prim_cdr(lst);
void* x8640 = apply_prim__u61(lst8642);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8639);
arg_buffer[2] = x8640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8639))[0]);
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
void* _env8645 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8643 = prim_car(lst);
void* lst8646 = prim_cdr(lst);
void* x8644 = apply_prim__u62(lst8646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8643);
arg_buffer[2] = x8644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8643))[0]);
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
void* _env8649 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8647 = prim_car(lst);
void* lst8650 = prim_cdr(lst);
void* x8648 = apply_prim__u60(lst8650);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8647);
arg_buffer[2] = x8648;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8647))[0]);
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
void* _env8653 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8651 = prim_car(lst);
void* lst8654 = prim_cdr(lst);
void* x8652 = apply_prim__u60_u61(lst8654);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8651);
arg_buffer[2] = x8652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8651))[0]);
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
void* _env8657 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8655 = prim_car(lst);
void* lst8658 = prim_cdr(lst);
void* x8656 = apply_prim__u62_u61(lst8658);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8655);
arg_buffer[2] = x8656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8655))[0]);
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
void* _env8661 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8659 = prim_car(lst);
void* lst8662 = prim_cdr(lst);
void* x8660 = apply_prim_modulo(lst8662);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8659);
arg_buffer[2] = x8660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8659))[0]);
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
void* _env8665 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8663 = prim_car(lst);
void* lst8666 = prim_cdr(lst);
void* x8664 = apply_prim_null_u63(lst8666);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8663);
arg_buffer[2] = x8664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8663))[0]);
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
void* _env8669 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8667 = prim_car(lst);
void* lst8670 = prim_cdr(lst);
void* x8668 = apply_prim_equal_u63(lst8670);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8667);
arg_buffer[2] = x8668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8667))[0]);
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
void* _env8673 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8671 = prim_car(lst);
void* lst8674 = prim_cdr(lst);
void* x8672 = apply_prim_eq_u63(lst8674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8671);
arg_buffer[2] = x8672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8671))[0]);
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
void* _env8677 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8675 = prim_car(lst);
void* lst8678 = prim_cdr(lst);
void* x8676 = apply_prim_cons(lst8678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8675);
arg_buffer[2] = x8676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8675))[0]);
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
void* x8680 = apply_prim_car(lst8682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8679);
arg_buffer[2] = x8680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8679))[0]);
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
void* x8684 = apply_prim_cdr(lst8686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683);
arg_buffer[2] = x8684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683))[0]);
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
void* x8688 = apply_prim_float_u45_u62int(lst8690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8687);
arg_buffer[2] = x8688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8687))[0]);
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
void* x8692 = apply_prim_int_u45_u62float(lst8694);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8691);
arg_buffer[2] = x8692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8691))[0]);
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
void* x8696 = apply_prim_hash(lst8698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8695);
arg_buffer[2] = x8696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8695))[0]);
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
void* x8700 = apply_prim_hash_u45ref(lst8702);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8699);
arg_buffer[2] = x8700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8699))[0]);
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
void* x8704 = apply_prim_hash_u45set(lst8706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8703);
arg_buffer[2] = x8704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8703))[0]);
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
void* x8708 = apply_prim_hash_u45keys(lst8710);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8707);
arg_buffer[2] = x8708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8707))[0]);
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
void* x8712 = apply_prim_hash_u45has_u45key_u63(lst8714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8711);
arg_buffer[2] = x8712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);
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
void* x8716 = apply_prim_hash_u45count(lst8718);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8715);
arg_buffer[2] = x8716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8715))[0]);
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
void* x8720 = apply_prim_set(lst8722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8719);
arg_buffer[2] = x8720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8719))[0]);
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
void* x8724 = apply_prim_set_u45_u62list(lst8726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8723);
arg_buffer[2] = x8724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8723))[0]);
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
void* x8728 = apply_prim_list_u45_u62set(lst8730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8727);
arg_buffer[2] = x8728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8727))[0]);
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
void* x8732 = apply_prim_set_u45add(lst8734);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8731);
arg_buffer[2] = x8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8731))[0]);
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
void* x8736 = apply_prim_set_u45member_u63(lst8738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8735);
arg_buffer[2] = x8736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8735))[0]);
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
void* x8740 = apply_prim_set_u45remove(lst8742);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8739);
arg_buffer[2] = x8740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8739))[0]);
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
void* x8744 = apply_prim_set_u45count(lst8746);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8743);
arg_buffer[2] = x8744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8743))[0]);
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
void* x8748 = apply_prim_string_u63(lst8750);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8747);
arg_buffer[2] = x8748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8747))[0]);
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
void* x8752 = apply_prim_string_u45length(lst8754);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8751);
arg_buffer[2] = x8752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8751))[0]);
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
void* x8756 = apply_prim_string_u45ref(lst8758);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8755);
arg_buffer[2] = x8756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8755))[0]);
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
void* x8760 = apply_prim_substring(lst8762);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8759);
arg_buffer[2] = x8760;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8759))[0]);
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
void* x8764 = apply_prim_string_u45append(lst8766);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8763);
arg_buffer[2] = x8764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8763))[0]);
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
void* x8768 = apply_prim_string_u45_u62list(lst8770);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8767);
arg_buffer[2] = x8768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8767))[0]);
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
void* x8772 = apply_prim_exact_u45floor(lst8774);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8771);
arg_buffer[2] = x8772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8771))[0]);
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
void* x8776 = apply_prim_exact_u45ceiling(lst8778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775);
arg_buffer[2] = x8776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775))[0]);
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
void* x8780 = apply_prim_exact_u45round(lst8782);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8779);
arg_buffer[2] = x8780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8779))[0]);
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
void* x8784 = apply_prim_absolute(lst8786);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8783);
arg_buffer[2] = x8784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8783))[0]);
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
void* x8788 = apply_prim_max(lst8790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8787);
arg_buffer[2] = x8788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8787))[0]);
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
void* x8792 = apply_prim_min(lst8794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8791);
arg_buffer[2] = x8792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8791))[0]);
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
void* x8796 = apply_prim_expt(lst8798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8795);
arg_buffer[2] = x8796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8795))[0]);
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
void* x8800 = apply_prim_squareroot(lst8802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8799);
arg_buffer[2] = x8800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8799))[0]);
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
void* x8804 = apply_prim_remaind(lst8806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8803);
arg_buffer[2] = x8804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8803))[0]);
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
void* x8808 = apply_prim_quotient(lst8810);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8807);
arg_buffer[2] = x8808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8807))[0]);
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
void* x8812 = apply_prim_randnum(lst8814);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8811);
arg_buffer[2] = x8812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8811))[0]);
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
void* x8816 = apply_prim_symbol_u63(lst8818);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8815);
arg_buffer[2] = x8816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8815))[0]);
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
void* x8820 = apply_prim_pair_u63(lst8822);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8819);
arg_buffer[2] = x8820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8819))[0]);
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
void* x8824 = apply_prim_positive_u63(lst8826);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8823);
arg_buffer[2] = x8824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8823))[0]);
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
void* x8828 = apply_prim_negative_u63(lst8830);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8827);
arg_buffer[2] = x8828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8827))[0]);
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
void* _8487 = arg_buffer[1];
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

void* kont8418 = prim_car(x);
void* x8486 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8418);
arg_buffer[2] = x8486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8418))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8488_fptr() // lam8488 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8489 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8419 = (decode_clo(env8489))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8489))[2];
//not do dummy comment
void* a8350 = (decode_clo(env8489))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8350, a8352);
arg_buffer[1]=reinterpret_cast<void*>(kont8419);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8419))[0]);
function_ptr();
return nullptr;
}

void* lam8488 = encode_clo(alloc_clo(lam8488_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8492 = arg_buffer[1];
//reading env and args
void* kont8419 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8831 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8831, "0", 10);
void* a8350 = encode_mpz(mpzvar8831);
mpz_t* mpzvar8832 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8832, "2", 10);
void* a8351 = encode_mpz(mpzvar8832);

//creating new closure instance
void** clo8834 = alloc_clo(lam8488_fptr, 3);

//setting env list
clo8834[1] = a8350;
clo8834[2] = equal_u63;
clo8834[3] = kont8419;
void* f8420 = encode_clo(clo8834);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8351);
arg_buffer[1]=reinterpret_cast<void*>(f8420);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8420))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

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
void* a8353 = (decode_clo(env8494))[3];
//not do dummy comment
void* kont8421 = (decode_clo(env8494))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8494))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8353, a8355);
arg_buffer[1]=reinterpret_cast<void*>(kont8421);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8421))[0]);
function_ptr();
return nullptr;
}

void* lam8493 = encode_clo(alloc_clo(lam8493_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8497 = arg_buffer[1];
//reading env and args
void* kont8421 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8835 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8835, "1", 10);
void* a8353 = encode_mpz(mpzvar8835);
mpz_t* mpzvar8836 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8836, "2", 10);
void* a8354 = encode_mpz(mpzvar8836);

//creating new closure instance
void** clo8838 = alloc_clo(lam8493_fptr, 3);

//setting env list
clo8838[1] = equal_u63;
clo8838[2] = kont8421;
clo8838[3] = a8353;
void* f8422 = encode_clo(clo8838);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8354);
arg_buffer[1]=reinterpret_cast<void*>(f8422);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8422))[0]);
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8500_fptr() // lam8500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8501 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8423 = (decode_clo(env8501))[3];
//not do dummy comment
void* x = (decode_clo(env8501))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8501))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8423;
arg_buffer[3] = x;
arg_buffer[4] = a8361;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8500 = encode_clo(alloc_clo(lam8500_fptr, 0));

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
void* cdr = (decode_clo(env8503))[5];
//not do dummy comment
void* lst = (decode_clo(env8503))[4];
//not do dummy comment
void* kont8423 = (decode_clo(env8503))[3];
//not do dummy comment
void* x = (decode_clo(env8503))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8503))[1];

//if-clause
bool if_guard8839 = is_true(a8359);
if(if_guard8839)
{
void* xy8360 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8423);
arg_buffer[2] = xy8360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8841 = alloc_clo(lam8500_fptr, 3);

//setting env list
clo8841[1] = member_u63;
clo8841[2] = x;
clo8841[3] = kont8423;
void* f8424 = encode_clo(clo8841);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8424);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8424))[0]);
function_ptr();
return nullptr;
}

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
void* cdr = (decode_clo(env8505))[6];
//not do dummy comment
void* lst = (decode_clo(env8505))[5];
//not do dummy comment
void* kont8423 = (decode_clo(env8505))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8505))[3];
//not do dummy comment
void* x = (decode_clo(env8505))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8505))[1];

//creating new closure instance
void** clo8843 = alloc_clo(lam8502_fptr, 5);

//setting env list
clo8843[1] = member_u63;
clo8843[2] = x;
clo8843[3] = kont8423;
clo8843[4] = lst;
clo8843[5] = cdr;
void* f8425 = encode_clo(clo8843);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8358, x);
arg_buffer[1]=reinterpret_cast<void*>(f8425);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8425))[0]);
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8507))[7];
//not do dummy comment
void* lst = (decode_clo(env8507))[6];
//not do dummy comment
void* kont8423 = (decode_clo(env8507))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8507))[4];
//not do dummy comment
void* x = (decode_clo(env8507))[3];
//not do dummy comment
void* car = (decode_clo(env8507))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8507))[1];

//if-clause
bool if_guard8844 = is_true(a8356);
if(if_guard8844)
{
void* xy8357 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8423);
arg_buffer[2] = xy8357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8423))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8846 = alloc_clo(lam8504_fptr, 6);

//setting env list
clo8846[1] = member_u63;
clo8846[2] = x;
clo8846[3] = equal_u63;
clo8846[4] = kont8423;
clo8846[5] = lst;
clo8846[6] = cdr;
void* f8426 = encode_clo(clo8846);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
function_ptr();
return nullptr;
}

}

void* lam8506 = encode_clo(alloc_clo(lam8506_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8508 = arg_buffer[1];
//reading env and args
void* kont8423 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8848 = alloc_clo(lam8506_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8848[1] = member_u63;
clo8848[2] = car;
clo8848[3] = x;
clo8848[4] = equal_u63;
clo8848[5] = kont8423;
clo8848[6] = lst;
clo8848[7] = cdr;
void* f8427 = encode_clo(clo8848);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8509_fptr() // lam8509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8510 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8510))[3];
//not do dummy comment
void* a8363 = (decode_clo(env8510))[2];
//not do dummy comment
void* kont8428 = (decode_clo(env8510))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8428;
arg_buffer[3] = a8363;
arg_buffer[4] = a8365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
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
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8512))[5];
//not do dummy comment
void* a8363 = (decode_clo(env8512))[4];
//not do dummy comment
void* kont8428 = (decode_clo(env8512))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8512))[2];
//not do dummy comment
void* cons = (decode_clo(env8512))[1];

//creating new closure instance
void** clo8850 = alloc_clo(lam8509_fptr, 3);

//setting env list
clo8850[1] = kont8428;
clo8850[2] = a8363;
clo8850[3] = reverse_u45helper;
void* f8429 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8364, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
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
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8514))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8514))[5];
//not do dummy comment
void* kont8428 = (decode_clo(env8514))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8514))[3];
//not do dummy comment
void* car = (decode_clo(env8514))[2];
//not do dummy comment
void* cons = (decode_clo(env8514))[1];

//creating new closure instance
void** clo8852 = alloc_clo(lam8511_fptr, 5);

//setting env list
clo8852[1] = cons;
clo8852[2] = lst2;
clo8852[3] = kont8428;
clo8852[4] = a8363;
clo8852[5] = reverse_u45helper;
void* f8430 = encode_clo(clo8852);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8430);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
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
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8516))[7];
//not do dummy comment
void* lst = (decode_clo(env8516))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8516))[5];
//not do dummy comment
void* kont8428 = (decode_clo(env8516))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8516))[3];
//not do dummy comment
void* car = (decode_clo(env8516))[2];
//not do dummy comment
void* cons = (decode_clo(env8516))[1];

//if-clause
bool if_guard8853 = is_true(a8362);
if(if_guard8853)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8428);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8428))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8855 = alloc_clo(lam8513_fptr, 6);

//setting env list
clo8855[1] = cons;
clo8855[2] = car;
clo8855[3] = lst2;
clo8855[4] = kont8428;
clo8855[5] = reverse_u45helper;
clo8855[6] = lst;
void* f8431 = encode_clo(clo8855);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

}

void* lam8515 = encode_clo(alloc_clo(lam8515_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8517 = arg_buffer[1];
//reading env and args
void* kont8428 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8857 = alloc_clo(lam8515_fptr, 7);

//setting env list
clo8857[1] = cons;
clo8857[2] = car;
clo8857[3] = lst2;
clo8857[4] = kont8428;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8857[5] = reverse_u45helper;
clo8857[6] = lst;
clo8857[7] = cdr;
void* f8432 = encode_clo(clo8857);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8518_fptr() // lam8518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8519 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8433 = (decode_clo(env8519))[3];
//not do dummy comment
void* lst = (decode_clo(env8519))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8519))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8433;
arg_buffer[3] = lst;
arg_buffer[4] = a8366;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8518 = encode_clo(alloc_clo(lam8518_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8520 = arg_buffer[1];
//reading env and args
void* kont8433 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8859 = alloc_clo(lam8518_fptr, 3);

//setting env list
clo8859[1] = reverse_u45helper;
clo8859[2] = lst;
clo8859[3] = kont8433;
void* f8434 = encode_clo(clo8859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8434;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8521_fptr() // lam8521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* xy8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8435 = (decode_clo(env8522))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8435);
arg_buffer[2] = xy8369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
//call next proc using a function pointer
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
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8524))[4];
//not do dummy comment
void* kont8435 = (decode_clo(env8524))[3];
//not do dummy comment
void* a8372 = (decode_clo(env8524))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8435;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[5] = a8374;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8526))[6];
//not do dummy comment
void* kont8435 = (decode_clo(env8526))[5];
//not do dummy comment
void* a8372 = (decode_clo(env8526))[4];
//not do dummy comment
void* cons = (decode_clo(env8526))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8526))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8526))[1];

//creating new closure instance
void** clo8861 = alloc_clo(lam8523_fptr, 4);

//setting env list
clo8861[1] = take_u45helper;
clo8861[2] = a8372;
clo8861[3] = kont8435;
clo8861[4] = a8370;
void* f8437 = encode_clo(clo8861);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8373, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8528))[7];
//not do dummy comment
void* kont8435 = (decode_clo(env8528))[6];
//not do dummy comment
void* lst = (decode_clo(env8528))[5];
//not do dummy comment
void* car = (decode_clo(env8528))[4];
//not do dummy comment
void* cons = (decode_clo(env8528))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8528))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8528))[1];

//creating new closure instance
void** clo8863 = alloc_clo(lam8525_fptr, 6);

//setting env list
clo8863[1] = lst2;
clo8863[2] = take_u45helper;
clo8863[3] = cons;
clo8863[4] = a8372;
clo8863[5] = kont8435;
clo8863[6] = a8370;
void* f8438 = encode_clo(clo8863);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
function_ptr();
return nullptr;
}

void* lam8527 = encode_clo(alloc_clo(lam8527_fptr, 0));

void* lam8530_fptr() // lam8530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8531 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8435 = (decode_clo(env8531))[8];
//not do dummy comment
void* lst = (decode_clo(env8531))[7];
//not do dummy comment
void* cons = (decode_clo(env8531))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8531))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8531))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8531))[3];
//not do dummy comment
void* n = (decode_clo(env8531))[2];
//not do dummy comment
void* car = (decode_clo(env8531))[1];
mpz_t* mpzvar8864 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8864, "1", 10);
void* a8371 = encode_mpz(mpzvar8864);

//creating new closure instance
void** clo8866 = alloc_clo(lam8527_fptr, 7);

//setting env list
clo8866[1] = lst2;
clo8866[2] = take_u45helper;
clo8866[3] = cons;
clo8866[4] = car;
clo8866[5] = lst;
clo8866[6] = kont8435;
clo8866[7] = a8370;
void* f8439 = encode_clo(clo8866);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8371);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
function_ptr();
return nullptr;
}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

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
void* cdr = (decode_clo(env8533))[10];
//not do dummy comment
void* kont8435 = (decode_clo(env8533))[9];
//not do dummy comment
void* lst = (decode_clo(env8533))[8];
//not do dummy comment
void* reverse = (decode_clo(env8533))[7];
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

//if-clause
bool if_guard8867 = is_true(a8368);
if(if_guard8867)
{

//creating new closure instance
void** clo8869 = alloc_clo(lam8521_fptr, 1);

//setting env list
clo8869[1] = kont8435;
void* f8436 = encode_clo(clo8869);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8436;
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
void** clo8871 = alloc_clo(lam8530_fptr, 8);

//setting env list
clo8871[1] = car;
clo8871[2] = n;
clo8871[3] = lst2;
clo8871[4] = take_u45helper;
clo8871[5] = _u45;
clo8871[6] = cons;
clo8871[7] = lst;
clo8871[8] = kont8435;
void* f8440 = encode_clo(clo8871);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
function_ptr();
return nullptr;
}

}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8535 = arg_buffer[1];
//reading env and args
void* kont8435 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8872, "0", 10);
void* a8367 = encode_mpz(mpzvar8872);

//creating new closure instance
void** clo8874 = alloc_clo(lam8532_fptr, 10);

//setting env list
clo8874[1] = car;
clo8874[2] = n;
clo8874[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8874[4] = take_u45helper;
clo8874[5] = _u45;
clo8874[6] = cons;
clo8874[7] = reverse;
clo8874[8] = lst;
clo8874[9] = kont8435;
clo8874[10] = cdr;
void* f8441 = encode_clo(clo8874);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8367);
arg_buffer[1]=reinterpret_cast<void*>(f8441);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8536_fptr() // lam8536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8537 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8537))[4];
//not do dummy comment
void* kont8442 = (decode_clo(env8537))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8537))[2];
//not do dummy comment
void* n = (decode_clo(env8537))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8442;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8375;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8536 = encode_clo(alloc_clo(lam8536_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8538 = arg_buffer[1];
//reading env and args
void* kont8442 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8876 = alloc_clo(lam8536_fptr, 4);

//setting env list
clo8876[1] = n;
clo8876[2] = take_u45helper;
clo8876[3] = kont8442;
clo8876[4] = lst;
void* f8443 = encode_clo(clo8876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8443;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8540_fptr() // lam8540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8541 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8444 = (decode_clo(env8541))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8541))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8541))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8378, a8380);
arg_buffer[1]=reinterpret_cast<void*>(kont8444);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
function_ptr();
return nullptr;
}

void* lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void* lam8542_fptr() // lam8542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8543 = arg_buffer[1];
//reading env and args
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8543))[4];
//not do dummy comment
void* kont8444 = (decode_clo(env8543))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8543))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8543))[1];

//creating new closure instance
void** clo8878 = alloc_clo(lam8540_fptr, 3);

//setting env list
clo8878[1] = a8378;
clo8878[2] = _u43;
clo8878[3] = kont8444;
void* f8445 = encode_clo(clo8878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8445;
arg_buffer[3] = a8379;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void* lam8545_fptr() // lam8545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8546 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8546))[5];
//not do dummy comment
void* lst = (decode_clo(env8546))[4];
//not do dummy comment
void* length = (decode_clo(env8546))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8546))[2];
//not do dummy comment
void* kont8444 = (decode_clo(env8546))[1];

//if-clause
bool if_guard8879 = is_true(a8376);
if(if_guard8879)
{
mpz_t* mpzvar8880 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8880, "0", 10);
void* xy8377 = encode_mpz(mpzvar8880);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8444);
arg_buffer[2] = xy8377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8881, "1", 10);
void* a8378 = encode_mpz(mpzvar8881);

//creating new closure instance
void** clo8883 = alloc_clo(lam8542_fptr, 4);

//setting env list
clo8883[1] = a8378;
clo8883[2] = _u43;
clo8883[3] = kont8444;
clo8883[4] = length;
void* f8446 = encode_clo(clo8883);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8446);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
function_ptr();
return nullptr;
}

}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8547 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8885 = alloc_clo(lam8545_fptr, 5);

//setting env list
clo8885[1] = kont8444;
clo8885[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8885[3] = length;
clo8885[4] = lst;
clo8885[5] = cdr;
void* f8447 = encode_clo(clo8885);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8447);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8447))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8548_fptr() // lam8548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* xy8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8448 = (decode_clo(env8549))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8448);
arg_buffer[2] = xy8382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
//call next proc using a function pointer
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
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8551))[3];
//not do dummy comment
void* a8384 = (decode_clo(env8551))[2];
//not do dummy comment
void* kont8448 = (decode_clo(env8551))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8384, a8386);
arg_buffer[1]=reinterpret_cast<void*>(kont8448);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8553))[5];
//not do dummy comment
void* proc = (decode_clo(env8553))[4];
//not do dummy comment
void* cons = (decode_clo(env8553))[3];
//not do dummy comment
void* a8384 = (decode_clo(env8553))[2];
//not do dummy comment
void* kont8448 = (decode_clo(env8553))[1];

//creating new closure instance
void** clo8887 = alloc_clo(lam8550_fptr, 3);

//setting env list
clo8887[1] = kont8448;
clo8887[2] = a8384;
clo8887[3] = cons;
void* f8450 = encode_clo(clo8887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8450;
arg_buffer[3] = proc;
arg_buffer[4] = a8385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//call next proc using a function pointer
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8555))[6];
//not do dummy comment
void* lst = (decode_clo(env8555))[5];
//not do dummy comment
void* map = (decode_clo(env8555))[4];
//not do dummy comment
void* proc = (decode_clo(env8555))[3];
//not do dummy comment
void* cons = (decode_clo(env8555))[2];
//not do dummy comment
void* kont8448 = (decode_clo(env8555))[1];

//creating new closure instance
void** clo8889 = alloc_clo(lam8552_fptr, 5);

//setting env list
clo8889[1] = kont8448;
clo8889[2] = a8384;
clo8889[3] = cons;
clo8889[4] = proc;
clo8889[5] = map;
void* f8451 = encode_clo(clo8889);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
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
void* cdr = (decode_clo(env8557))[6];
//not do dummy comment
void* lst = (decode_clo(env8557))[5];
//not do dummy comment
void* map = (decode_clo(env8557))[4];
//not do dummy comment
void* proc = (decode_clo(env8557))[3];
//not do dummy comment
void* cons = (decode_clo(env8557))[2];
//not do dummy comment
void* kont8448 = (decode_clo(env8557))[1];

//creating new closure instance
void** clo8891 = alloc_clo(lam8554_fptr, 6);

//setting env list
clo8891[1] = kont8448;
clo8891[2] = cons;
clo8891[3] = proc;
clo8891[4] = map;
clo8891[5] = lst;
clo8891[6] = cdr;
void* f8452 = encode_clo(clo8891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8452;
arg_buffer[3] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8559))[8];
//not do dummy comment
void* map = (decode_clo(env8559))[7];
//not do dummy comment
void* proc = (decode_clo(env8559))[6];
//not do dummy comment
void* car = (decode_clo(env8559))[5];
//not do dummy comment
void* cons = (decode_clo(env8559))[4];
//not do dummy comment
void* kont8448 = (decode_clo(env8559))[3];
//not do dummy comment
void* list = (decode_clo(env8559))[2];
//not do dummy comment
void* cdr = (decode_clo(env8559))[1];

//if-clause
bool if_guard8892 = is_true(a8381);
if(if_guard8892)
{

//creating new closure instance
void** clo8894 = alloc_clo(lam8548_fptr, 1);

//setting env list
clo8894[1] = kont8448;
void* f8449 = encode_clo(clo8894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8449;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8896 = alloc_clo(lam8556_fptr, 6);

//setting env list
clo8896[1] = kont8448;
clo8896[2] = cons;
clo8896[3] = proc;
clo8896[4] = map;
clo8896[5] = lst;
clo8896[6] = cdr;
void* f8453 = encode_clo(clo8896);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
function_ptr();
return nullptr;
}

}

void* lam8558 = encode_clo(alloc_clo(lam8558_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8560 = arg_buffer[1];
//reading env and args
void* kont8448 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8898 = alloc_clo(lam8558_fptr, 8);

//setting env list
clo8898[1] = cdr;
clo8898[2] = list;
clo8898[3] = kont8448;
clo8898[4] = cons;
clo8898[5] = car;
clo8898[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8898[7] = map;
clo8898[8] = lst;
void* f8454 = encode_clo(clo8898);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8454);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8561_fptr() // lam8561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8562 = arg_buffer[1];
//reading env and args
void* xy8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8455 = (decode_clo(env8562))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8455);
arg_buffer[2] = xy8388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void* lam8563_fptr() // lam8563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8564 = arg_buffer[1];
//reading env and args
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8564))[3];
//not do dummy comment
void* a8391 = (decode_clo(env8564))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8564))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8391, a8393);
arg_buffer[1]=reinterpret_cast<void*>(kont8455);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8566))[5];
//not do dummy comment
void* filter = (decode_clo(env8566))[4];
//not do dummy comment
void* cons = (decode_clo(env8566))[3];
//not do dummy comment
void* a8391 = (decode_clo(env8566))[2];
//not do dummy comment
void* kont8455 = (decode_clo(env8566))[1];

//creating new closure instance
void** clo8900 = alloc_clo(lam8563_fptr, 3);

//setting env list
clo8900[1] = kont8455;
clo8900[2] = a8391;
clo8900[3] = cons;
void* f8457 = encode_clo(clo8900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8457;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8568))[6];
//not do dummy comment
void* lst = (decode_clo(env8568))[5];
//not do dummy comment
void* kont8455 = (decode_clo(env8568))[4];
//not do dummy comment
void* op = (decode_clo(env8568))[3];
//not do dummy comment
void* filter = (decode_clo(env8568))[2];
//not do dummy comment
void* cons = (decode_clo(env8568))[1];

//creating new closure instance
void** clo8902 = alloc_clo(lam8565_fptr, 5);

//setting env list
clo8902[1] = kont8455;
clo8902[2] = a8391;
clo8902[3] = cons;
clo8902[4] = filter;
clo8902[5] = op;
void* f8458 = encode_clo(clo8902);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8455 = (decode_clo(env8570))[3];
//not do dummy comment
void* op = (decode_clo(env8570))[2];
//not do dummy comment
void* filter = (decode_clo(env8570))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8455;
arg_buffer[3] = op;
arg_buffer[4] = a8394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8572))[7];
//not do dummy comment
void* lst = (decode_clo(env8572))[6];
//not do dummy comment
void* kont8455 = (decode_clo(env8572))[5];
//not do dummy comment
void* op = (decode_clo(env8572))[4];
//not do dummy comment
void* cons = (decode_clo(env8572))[3];
//not do dummy comment
void* filter = (decode_clo(env8572))[2];
//not do dummy comment
void* car = (decode_clo(env8572))[1];

//if-clause
bool if_guard8903 = is_true(a8390);
if(if_guard8903)
{

//creating new closure instance
void** clo8905 = alloc_clo(lam8567_fptr, 6);

//setting env list
clo8905[1] = cons;
clo8905[2] = filter;
clo8905[3] = op;
clo8905[4] = kont8455;
clo8905[5] = lst;
clo8905[6] = cdr;
void* f8459 = encode_clo(clo8905);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8907 = alloc_clo(lam8569_fptr, 3);

//setting env list
clo8907[1] = filter;
clo8907[2] = op;
clo8907[3] = kont8455;
void* f8460 = encode_clo(clo8907);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8460);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
function_ptr();
return nullptr;
}

}

void* lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void* lam8573_fptr() // lam8573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8574 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8574))[7];
//not do dummy comment
void* lst = (decode_clo(env8574))[6];
//not do dummy comment
void* kont8455 = (decode_clo(env8574))[5];
//not do dummy comment
void* op = (decode_clo(env8574))[4];
//not do dummy comment
void* cons = (decode_clo(env8574))[3];
//not do dummy comment
void* filter = (decode_clo(env8574))[2];
//not do dummy comment
void* car = (decode_clo(env8574))[1];

//creating new closure instance
void** clo8909 = alloc_clo(lam8571_fptr, 7);

//setting env list
clo8909[1] = car;
clo8909[2] = filter;
clo8909[3] = cons;
clo8909[4] = op;
clo8909[5] = kont8455;
clo8909[6] = lst;
clo8909[7] = cdr;
void* f8461 = encode_clo(clo8909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8461;
arg_buffer[3] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8576))[8];
//not do dummy comment
void* kont8455 = (decode_clo(env8576))[7];
//not do dummy comment
void* op = (decode_clo(env8576))[6];
//not do dummy comment
void* cons = (decode_clo(env8576))[5];
//not do dummy comment
void* list = (decode_clo(env8576))[4];
//not do dummy comment
void* cdr = (decode_clo(env8576))[3];
//not do dummy comment
void* filter = (decode_clo(env8576))[2];
//not do dummy comment
void* car = (decode_clo(env8576))[1];

//if-clause
bool if_guard8910 = is_true(a8387);
if(if_guard8910)
{

//creating new closure instance
void** clo8912 = alloc_clo(lam8561_fptr, 1);

//setting env list
clo8912[1] = kont8455;
void* f8456 = encode_clo(clo8912);



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
void** clo8914 = alloc_clo(lam8573_fptr, 7);

//setting env list
clo8914[1] = car;
clo8914[2] = filter;
clo8914[3] = cons;
clo8914[4] = op;
clo8914[5] = kont8455;
clo8914[6] = lst;
clo8914[7] = cdr;
void* f8462 = encode_clo(clo8914);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8462);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
function_ptr();
return nullptr;
}

}

void* lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8577 = arg_buffer[1];
//reading env and args
void* kont8455 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8916 = alloc_clo(lam8575_fptr, 8);

//setting env list
clo8916[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8916[2] = filter;
clo8916[3] = cdr;
clo8916[4] = list;
clo8916[5] = cons;
clo8916[6] = op;
clo8916[7] = kont8455;
clo8916[8] = lst;
void* f8463 = encode_clo(clo8916);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8579))[3];
//not do dummy comment
void* a8397 = (decode_clo(env8579))[2];
//not do dummy comment
void* kont8464 = (decode_clo(env8579))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8464;
arg_buffer[3] = a8397;
arg_buffer[4] = a8399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void* lam8581_fptr() // lam8581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8582 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8582))[4];
//not do dummy comment
void* n = (decode_clo(env8582))[3];
//not do dummy comment
void* _u45 = (decode_clo(env8582))[2];
//not do dummy comment
void* kont8464 = (decode_clo(env8582))[1];
mpz_t* mpzvar8917 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8917, "1", 10);
void* a8398 = encode_mpz(mpzvar8917);

//creating new closure instance
void** clo8919 = alloc_clo(lam8578_fptr, 3);

//setting env list
clo8919[1] = kont8464;
clo8919[2] = a8397;
clo8919[3] = drop;
void* f8465 = encode_clo(clo8919);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8398);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(2);
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
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8584))[6];
//not do dummy comment
void* n = (decode_clo(env8584))[5];
//not do dummy comment
void* lst = (decode_clo(env8584))[4];
//not do dummy comment
void* drop = (decode_clo(env8584))[3];
//not do dummy comment
void* _u45 = (decode_clo(env8584))[2];
//not do dummy comment
void* kont8464 = (decode_clo(env8584))[1];

//if-clause
bool if_guard8920 = is_true(a8396);
if(if_guard8920)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8464);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8922 = alloc_clo(lam8581_fptr, 4);

//setting env list
clo8922[1] = kont8464;
clo8922[2] = _u45;
clo8922[3] = n;
clo8922[4] = drop;
void* f8466 = encode_clo(clo8922);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
return nullptr;
}

}

void* lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8586 = arg_buffer[1];
//reading env and args
void* kont8464 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8923 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8923, "0", 10);
void* a8395 = encode_mpz(mpzvar8923);

//creating new closure instance
void** clo8925 = alloc_clo(lam8583_fptr, 6);

//setting env list
clo8925[1] = kont8464;
clo8925[2] = _u45;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8925[3] = drop;
clo8925[4] = lst;
clo8925[5] = n;
clo8925[6] = cdr;
void* f8467 = encode_clo(clo8925);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8395);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8587_fptr() // lam8587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8588 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8402 = (decode_clo(env8588))[4];
//not do dummy comment
void* kont8468 = (decode_clo(env8588))[3];
//not do dummy comment
void* fun = (decode_clo(env8588))[2];
//not do dummy comment
void* foldl = (decode_clo(env8588))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8468;
arg_buffer[3] = fun;
arg_buffer[4] = a8402;
arg_buffer[5] = a8403;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8590))[5];
//not do dummy comment
void* kont8468 = (decode_clo(env8590))[4];
//not do dummy comment
void* lst = (decode_clo(env8590))[3];
//not do dummy comment
void* fun = (decode_clo(env8590))[2];
//not do dummy comment
void* foldl = (decode_clo(env8590))[1];

//creating new closure instance
void** clo8927 = alloc_clo(lam8587_fptr, 4);

//setting env list
clo8927[1] = foldl;
clo8927[2] = fun;
clo8927[3] = kont8468;
clo8927[4] = a8402;
void* f8469 = encode_clo(clo8927);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
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
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8592))[6];
//not do dummy comment
void* kont8468 = (decode_clo(env8592))[5];
//not do dummy comment
void* lst = (decode_clo(env8592))[4];
//not do dummy comment
void* fun = (decode_clo(env8592))[3];
//not do dummy comment
void* acc = (decode_clo(env8592))[2];
//not do dummy comment
void* foldl = (decode_clo(env8592))[1];

//creating new closure instance
void** clo8929 = alloc_clo(lam8589_fptr, 5);

//setting env list
clo8929[1] = foldl;
clo8929[2] = fun;
clo8929[3] = lst;
clo8929[4] = kont8468;
clo8929[5] = cdr;
void* f8470 = encode_clo(clo8929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8470;
arg_buffer[3] = a8401;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8594))[7];
//not do dummy comment
void* kont8468 = (decode_clo(env8594))[6];
//not do dummy comment
void* lst = (decode_clo(env8594))[5];
//not do dummy comment
void* fun = (decode_clo(env8594))[4];
//not do dummy comment
void* acc = (decode_clo(env8594))[3];
//not do dummy comment
void* car = (decode_clo(env8594))[2];
//not do dummy comment
void* foldl = (decode_clo(env8594))[1];

//if-clause
bool if_guard8930 = is_true(a8400);
if(if_guard8930)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8468);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8468))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8932 = alloc_clo(lam8591_fptr, 6);

//setting env list
clo8932[1] = foldl;
clo8932[2] = acc;
clo8932[3] = fun;
clo8932[4] = lst;
clo8932[5] = kont8468;
clo8932[6] = cdr;
void* f8471 = encode_clo(clo8932);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
function_ptr();
return nullptr;
}

}

void* lam8593 = encode_clo(alloc_clo(lam8593_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8595 = arg_buffer[1];
//reading env and args
void* kont8468 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8934 = alloc_clo(lam8593_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8934[1] = foldl;
clo8934[2] = car;
clo8934[3] = acc;
clo8934[4] = fun;
clo8934[5] = lst;
clo8934[6] = kont8468;
clo8934[7] = cdr;
void* f8472 = encode_clo(clo8934);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8596_fptr() // lam8596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8597 = arg_buffer[1];
//reading env and args
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8405 = (decode_clo(env8597))[3];
//not do dummy comment
void* kont8473 = (decode_clo(env8597))[2];
//not do dummy comment
void* fun = (decode_clo(env8597))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8473;
arg_buffer[3] = a8405;
arg_buffer[4] = a8407;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void* lam8598_fptr() // lam8598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8599 = arg_buffer[1];
//reading env and args
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8473 = (decode_clo(env8599))[5];
//not do dummy comment
void* fun = (decode_clo(env8599))[4];
//not do dummy comment
void* acc = (decode_clo(env8599))[3];
//not do dummy comment
void* foldr = (decode_clo(env8599))[2];
//not do dummy comment
void* a8405 = (decode_clo(env8599))[1];

//creating new closure instance
void** clo8936 = alloc_clo(lam8596_fptr, 3);

//setting env list
clo8936[1] = fun;
clo8936[2] = kont8473;
clo8936[3] = a8405;
void* f8474 = encode_clo(clo8936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8474;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8406;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
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
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8601))[6];
//not do dummy comment
void* kont8473 = (decode_clo(env8601))[5];
//not do dummy comment
void* fun = (decode_clo(env8601))[4];
//not do dummy comment
void* acc = (decode_clo(env8601))[3];
//not do dummy comment
void* foldr = (decode_clo(env8601))[2];
//not do dummy comment
void* lst = (decode_clo(env8601))[1];

//creating new closure instance
void** clo8938 = alloc_clo(lam8598_fptr, 5);

//setting env list
clo8938[1] = a8405;
clo8938[2] = foldr;
clo8938[3] = acc;
clo8938[4] = fun;
clo8938[5] = kont8473;
void* f8475 = encode_clo(clo8938);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8603))[7];
//not do dummy comment
void* kont8473 = (decode_clo(env8603))[6];
//not do dummy comment
void* fun = (decode_clo(env8603))[5];
//not do dummy comment
void* acc = (decode_clo(env8603))[4];
//not do dummy comment
void* car = (decode_clo(env8603))[3];
//not do dummy comment
void* foldr = (decode_clo(env8603))[2];
//not do dummy comment
void* lst = (decode_clo(env8603))[1];

//if-clause
bool if_guard8939 = is_true(a8404);
if(if_guard8939)
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
void** clo8941 = alloc_clo(lam8600_fptr, 6);

//setting env list
clo8941[1] = lst;
clo8941[2] = foldr;
clo8941[3] = acc;
clo8941[4] = fun;
clo8941[5] = kont8473;
clo8941[6] = cdr;
void* f8476 = encode_clo(clo8941);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

}

void* lam8602 = encode_clo(alloc_clo(lam8602_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8604 = arg_buffer[1];
//reading env and args
void* kont8473 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8943 = alloc_clo(lam8602_fptr, 7);

//setting env list
clo8943[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8943[2] = foldr;
clo8943[3] = car;
clo8943[4] = acc;
clo8943[5] = fun;
clo8943[6] = kont8473;
clo8943[7] = cdr;
void* f8477 = encode_clo(clo8943);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8605_fptr() // lam8605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8606 = arg_buffer[1];
//reading env and args
void* a8411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8409 = (decode_clo(env8606))[3];
//not do dummy comment
void* kont8478 = (decode_clo(env8606))[2];
//not do dummy comment
void* cons = (decode_clo(env8606))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8409, a8411);
arg_buffer[1]=reinterpret_cast<void*>(kont8478);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8478))[0]);
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
void* a8410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst2 = (decode_clo(env8608))[5];
//not do dummy comment
void* kont8478 = (decode_clo(env8608))[4];
//not do dummy comment
void* cons = (decode_clo(env8608))[3];
//not do dummy comment
void* append = (decode_clo(env8608))[2];
//not do dummy comment
void* a8409 = (decode_clo(env8608))[1];

//creating new closure instance
void** clo8945 = alloc_clo(lam8605_fptr, 3);

//setting env list
clo8945[1] = cons;
clo8945[2] = kont8478;
clo8945[3] = a8409;
void* f8479 = encode_clo(clo8945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8479;
arg_buffer[3] = a8410;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8610))[6];
//not do dummy comment
void* append = (decode_clo(env8610))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8610))[4];
//not do dummy comment
void* cons = (decode_clo(env8610))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8610))[2];
//not do dummy comment
void* kont8478 = (decode_clo(env8610))[1];

//creating new closure instance
void** clo8947 = alloc_clo(lam8607_fptr, 5);

//setting env list
clo8947[1] = a8409;
clo8947[2] = append;
clo8947[3] = cons;
clo8947[4] = kont8478;
clo8947[5] = lst2;
void* f8480 = encode_clo(clo8947);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8480);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8480))[0]);
function_ptr();
return nullptr;
}

void* lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void* lam8611_fptr() // lam8611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8612 = arg_buffer[1];
//reading env and args
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8612))[7];
//not do dummy comment
void* append = (decode_clo(env8612))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8612))[5];
//not do dummy comment
void* cons = (decode_clo(env8612))[4];
//not do dummy comment
void* lst1 = (decode_clo(env8612))[3];
//not do dummy comment
void* car = (decode_clo(env8612))[2];
//not do dummy comment
void* kont8478 = (decode_clo(env8612))[1];

//if-clause
bool if_guard8948 = is_true(a8408);
if(if_guard8948)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8478);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8478))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8950 = alloc_clo(lam8609_fptr, 6);

//setting env list
clo8950[1] = kont8478;
clo8950[2] = lst1;
clo8950[3] = cons;
clo8950[4] = lst2;
clo8950[5] = append;
clo8950[6] = cdr;
void* f8481 = encode_clo(clo8950);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8481);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8481))[0]);
function_ptr();
return nullptr;
}

}

void* lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8613 = arg_buffer[1];
//reading env and args
void* kont8478 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8952 = alloc_clo(lam8611_fptr, 7);

//setting env list
clo8952[1] = kont8478;
clo8952[2] = car;
clo8952[3] = lst1;
clo8952[4] = cons;
clo8952[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8952[6] = append;
clo8952[7] = cdr;
void* f8482 = encode_clo(clo8952);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8482);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8482))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8619 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8953 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8953, "100", 10);
void* a8412 = encode_mpz(mpzvar8953);
mpz_t* mpzvar8954 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8954, "90", 10);
void* a8413 = encode_mpz(mpzvar8954);
mpf_t* mpfvar8955 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8955, "70.0", 10);
void* a8414 = encode_mpf(mpfvar8955);
mpf_t* mpfvar8956 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8956, "70.1", 10);
void* a8415 = encode_mpf(mpfvar8956);
mpz_t* mpzvar8957 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8957, "70", 10);
void* a8416 = encode_mpz(mpzvar8957);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62_u61);
arg_buffer[2] = kont8483;
arg_buffer[3] = a8412;
arg_buffer[4] = a8413;
arg_buffer[5] = a8414;
arg_buffer[6] = a8415;
arg_buffer[7] = a8416;
arg_buffer[0] = reinterpret_cast<void*>(7);
_u62_u61_fptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8620_fptr() // lam8620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8621 = arg_buffer[1];
//reading env and args
void* xy8417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8484 = (decode_clo(env8621))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8484);
arg_buffer[2] = xy8417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8484))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8620 = encode_clo(alloc_clo(lam8620_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8622 = arg_buffer[1];
//reading env and args
void* kont8484 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8959 = alloc_clo(lam8620_fptr, 1);

//setting env list
clo8959[1] = kont8484;
void* f8485 = encode_clo(clo8959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8485;
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

