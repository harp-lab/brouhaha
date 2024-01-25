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
void* _env8617 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8615 = prim_car(lst);
void* lst8618 = prim_cdr(lst);
void* x8616 = apply_prim__u43(lst8618);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8615);
arg_buffer[2] = x8616;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8615))[0]);
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
void* _env8621 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8619 = prim_car(lst);
void* lst8622 = prim_cdr(lst);
void* x8620 = apply_prim__u45(lst8622);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8619);
arg_buffer[2] = x8620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8619))[0]);
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
void* x8624 = apply_prim__u42(lst8626);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8623);
arg_buffer[2] = x8624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8623))[0]);
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
void* x8628 = apply_prim__u47(lst8630);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8627);
arg_buffer[2] = x8628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8627))[0]);
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
void* x8632 = apply_prim__u61(lst8634);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8631);
arg_buffer[2] = x8632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8631))[0]);
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
void* x8636 = apply_prim__u62(lst8638);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8635);
arg_buffer[2] = x8636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8635))[0]);
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
void* x8640 = apply_prim__u60(lst8642);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8639);
arg_buffer[2] = x8640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8639))[0]);
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
void* x8644 = apply_prim__u60_u61(lst8646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8643);
arg_buffer[2] = x8644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8643))[0]);
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
void* x8648 = apply_prim__u62_u61(lst8650);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8647);
arg_buffer[2] = x8648;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8647))[0]);
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
void* x8652 = apply_prim_modulo(lst8654);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8651);
arg_buffer[2] = x8652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8651))[0]);
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
void* x8656 = apply_prim_null_u63(lst8658);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8655);
arg_buffer[2] = x8656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8655))[0]);
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
void* x8660 = apply_prim_equal_u63(lst8662);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8659);
arg_buffer[2] = x8660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8659))[0]);
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
void* x8664 = apply_prim_eq_u63(lst8666);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8663);
arg_buffer[2] = x8664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8663))[0]);
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
void* x8668 = apply_prim_cons(lst8670);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8667);
arg_buffer[2] = x8668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8667))[0]);
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
void* x8672 = apply_prim_car(lst8674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8671);
arg_buffer[2] = x8672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8671))[0]);
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
void* x8676 = apply_prim_cdr(lst8678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8675);
arg_buffer[2] = x8676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8675))[0]);
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
void* x8680 = apply_prim_float_u45_u62int(lst8682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8679);
arg_buffer[2] = x8680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8679))[0]);
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
void* x8684 = apply_prim_int_u45_u62float(lst8686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683);
arg_buffer[2] = x8684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683))[0]);
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
void* x8688 = apply_prim_hash(lst8690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8687);
arg_buffer[2] = x8688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8687))[0]);
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
void* x8692 = apply_prim_hash_u45ref(lst8694);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8691);
arg_buffer[2] = x8692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8691))[0]);
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
void* x8696 = apply_prim_hash_u45set(lst8698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8695);
arg_buffer[2] = x8696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8695))[0]);
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
void* x8700 = apply_prim_hash_u45keys(lst8702);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8699);
arg_buffer[2] = x8700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8699))[0]);
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
void* x8704 = apply_prim_hash_u45has_u45key_u63(lst8706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8703);
arg_buffer[2] = x8704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8703))[0]);
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
void* x8708 = apply_prim_hash_u45count(lst8710);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8707);
arg_buffer[2] = x8708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8707))[0]);
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
void* x8712 = apply_prim_set(lst8714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8711);
arg_buffer[2] = x8712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);
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
void* x8716 = apply_prim_set_u45_u62list(lst8718);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8715);
arg_buffer[2] = x8716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8715))[0]);
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
void* x8720 = apply_prim_list_u45_u62set(lst8722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8719);
arg_buffer[2] = x8720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8719))[0]);
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
void* x8724 = apply_prim_set_u45add(lst8726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8723);
arg_buffer[2] = x8724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8723))[0]);
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
void* x8728 = apply_prim_set_u45member_u63(lst8730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8727);
arg_buffer[2] = x8728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8727))[0]);
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
void* x8732 = apply_prim_set_u45remove(lst8734);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8731);
arg_buffer[2] = x8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8731))[0]);
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
void* x8736 = apply_prim_set_u45count(lst8738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8735);
arg_buffer[2] = x8736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8735))[0]);
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
void* x8740 = apply_prim_string_u63(lst8742);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8739);
arg_buffer[2] = x8740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8739))[0]);
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
void* x8744 = apply_prim_string_u45length(lst8746);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8743);
arg_buffer[2] = x8744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8743))[0]);
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
void* x8748 = apply_prim_string_u45ref(lst8750);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8747);
arg_buffer[2] = x8748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8747))[0]);
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
void* x8752 = apply_prim_substring(lst8754);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8751);
arg_buffer[2] = x8752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8751))[0]);
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
void* x8756 = apply_prim_string_u45append(lst8758);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8755);
arg_buffer[2] = x8756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8755))[0]);
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
void* x8760 = apply_prim_string_u45_u62list(lst8762);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8759);
arg_buffer[2] = x8760;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8759))[0]);
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
void* x8764 = apply_prim_exact_u45floor(lst8766);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8763);
arg_buffer[2] = x8764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8763))[0]);
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
void* x8768 = apply_prim_exact_u45ceiling(lst8770);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8767);
arg_buffer[2] = x8768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8767))[0]);
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
void* x8772 = apply_prim_exact_u45round(lst8774);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8771);
arg_buffer[2] = x8772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8771))[0]);
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
void* x8776 = apply_prim_absolute(lst8778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775);
arg_buffer[2] = x8776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775))[0]);
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
void* x8780 = apply_prim_max(lst8782);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8779);
arg_buffer[2] = x8780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8779))[0]);
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
void* x8784 = apply_prim_min(lst8786);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8783);
arg_buffer[2] = x8784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8783))[0]);
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
void* x8788 = apply_prim_expt(lst8790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8787);
arg_buffer[2] = x8788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8787))[0]);
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
void* x8792 = apply_prim_squareroot(lst8794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8791);
arg_buffer[2] = x8792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8791))[0]);
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
void* x8796 = apply_prim_remaind(lst8798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8795);
arg_buffer[2] = x8796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8795))[0]);
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
void* x8800 = apply_prim_quotient(lst8802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8799);
arg_buffer[2] = x8800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8799))[0]);
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
void* x8804 = apply_prim_randnum(lst8806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8803);
arg_buffer[2] = x8804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8803))[0]);
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
void* x8808 = apply_prim_symbol_u63(lst8810);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8807);
arg_buffer[2] = x8808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8807))[0]);
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
void* x8812 = apply_prim_pair_u63(lst8814);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8811);
arg_buffer[2] = x8812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8811))[0]);
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
void* x8816 = apply_prim_positive_u63(lst8818);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8815);
arg_buffer[2] = x8816;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8815))[0]);
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
void* x8820 = apply_prim_negative_u63(lst8822);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8819);
arg_buffer[2] = x8820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8819))[0]);
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
void* _8483 = arg_buffer[1];
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

void* kont8414 = prim_car(x);
void* x8482 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8414);
arg_buffer[2] = x8482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8414))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8484_fptr() // lam8484 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8485 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8485))[3];
//not do dummy comment
void* a8350 = (decode_clo(env8485))[2];
//not do dummy comment
void* kont8415 = (decode_clo(env8485))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8350, a8352);
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
function_ptr();
return nullptr;
}

void* lam8484 = encode_clo(alloc_clo(lam8484_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8488 = arg_buffer[1];
//reading env and args
void* kont8415 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8823 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8823, "0", 10);
void* a8350 = encode_mpz(mpzvar8823);
mpz_t* mpzvar8824 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8824, "2", 10);
void* a8351 = encode_mpz(mpzvar8824);

//creating new closure instance
void** clo8826 = alloc_clo(lam8484_fptr, 3);

//setting env list
clo8826[1] = kont8415;
clo8826[2] = a8350;
clo8826[3] = equal_u63;
void* f8416 = encode_clo(clo8826);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8351);
arg_buffer[1]=reinterpret_cast<void*>(f8416);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8416))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8489_fptr() // lam8489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8490 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8490))[3];
//not do dummy comment
void* a8353 = (decode_clo(env8490))[2];
//not do dummy comment
void* kont8417 = (decode_clo(env8490))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8353, a8355);
arg_buffer[1]=reinterpret_cast<void*>(kont8417);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
function_ptr();
return nullptr;
}

void* lam8489 = encode_clo(alloc_clo(lam8489_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8493 = arg_buffer[1];
//reading env and args
void* kont8417 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8827 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8827, "1", 10);
void* a8353 = encode_mpz(mpzvar8827);
mpz_t* mpzvar8828 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8828, "2", 10);
void* a8354 = encode_mpz(mpzvar8828);

//creating new closure instance
void** clo8830 = alloc_clo(lam8489_fptr, 3);

//setting env list
clo8830[1] = kont8417;
clo8830[2] = a8353;
clo8830[3] = equal_u63;
void* f8418 = encode_clo(clo8830);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8354);
arg_buffer[1]=reinterpret_cast<void*>(f8418);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8418))[0]);
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8496_fptr() // lam8496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8497 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8419 = (decode_clo(env8497))[3];
//not do dummy comment
void* x = (decode_clo(env8497))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8419;
arg_buffer[3] = x;
arg_buffer[4] = a8361;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8496 = encode_clo(alloc_clo(lam8496_fptr, 0));

void* lam8498_fptr() // lam8498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8499 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8499))[5];
//not do dummy comment
void* kont8419 = (decode_clo(env8499))[4];
//not do dummy comment
void* lst = (decode_clo(env8499))[3];
//not do dummy comment
void* x = (decode_clo(env8499))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8499))[1];

//if-clause
bool if_guard8831 = is_true(a8359);
if(if_guard8831)
{
void* xy8360 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8419);
arg_buffer[2] = xy8360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8419))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8833 = alloc_clo(lam8496_fptr, 3);

//setting env list
clo8833[1] = member_u63;
clo8833[2] = x;
clo8833[3] = kont8419;
void* f8420 = encode_clo(clo8833);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8420);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8420))[0]);
function_ptr();
return nullptr;
}

}

void* lam8498 = encode_clo(alloc_clo(lam8498_fptr, 0));

void* lam8500_fptr() // lam8500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8501 = arg_buffer[1];
//reading env and args
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8501))[6];
//not do dummy comment
void* kont8419 = (decode_clo(env8501))[5];
//not do dummy comment
void* lst = (decode_clo(env8501))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8501))[3];
//not do dummy comment
void* x = (decode_clo(env8501))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8501))[1];

//creating new closure instance
void** clo8835 = alloc_clo(lam8498_fptr, 5);

//setting env list
clo8835[1] = member_u63;
clo8835[2] = x;
clo8835[3] = lst;
clo8835[4] = kont8419;
clo8835[5] = cdr;
void* f8421 = encode_clo(clo8835);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8358, x);
arg_buffer[1]=reinterpret_cast<void*>(f8421);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8421))[0]);
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8503))[7];
//not do dummy comment
void* kont8419 = (decode_clo(env8503))[6];
//not do dummy comment
void* lst = (decode_clo(env8503))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8503))[4];
//not do dummy comment
void* x = (decode_clo(env8503))[3];
//not do dummy comment
void* car = (decode_clo(env8503))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8503))[1];

//if-clause
bool if_guard8836 = is_true(a8356);
if(if_guard8836)
{
void* xy8357 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8419);
arg_buffer[2] = xy8357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8419))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8838 = alloc_clo(lam8500_fptr, 6);

//setting env list
clo8838[1] = member_u63;
clo8838[2] = x;
clo8838[3] = equal_u63;
clo8838[4] = lst;
clo8838[5] = kont8419;
clo8838[6] = cdr;
void* f8422 = encode_clo(clo8838);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8422);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8422))[0]);
function_ptr();
return nullptr;
}

}

void* lam8502 = encode_clo(alloc_clo(lam8502_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8504 = arg_buffer[1];
//reading env and args
void* kont8419 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8840 = alloc_clo(lam8502_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8840[1] = member_u63;
clo8840[2] = car;
clo8840[3] = x;
clo8840[4] = equal_u63;
clo8840[5] = lst;
clo8840[6] = kont8419;
clo8840[7] = cdr;
void* f8423 = encode_clo(clo8840);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8423);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8423))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8505_fptr() // lam8505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8506 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8363 = (decode_clo(env8506))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8506))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8506))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8424;
arg_buffer[3] = a8363;
arg_buffer[4] = a8365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8363 = (decode_clo(env8508))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8508))[4];
//not do dummy comment
void* cons = (decode_clo(env8508))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8508))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8508))[1];

//creating new closure instance
void** clo8842 = alloc_clo(lam8505_fptr, 3);

//setting env list
clo8842[1] = kont8424;
clo8842[2] = reverse_u45helper;
clo8842[3] = a8363;
void* f8425 = encode_clo(clo8842);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8364, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8425);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8425))[0]);
function_ptr();
return nullptr;
}

void* lam8507 = encode_clo(alloc_clo(lam8507_fptr, 0));

void* lam8509_fptr() // lam8509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8510 = arg_buffer[1];
//reading env and args
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8510))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8510))[5];
//not do dummy comment
void* car = (decode_clo(env8510))[4];
//not do dummy comment
void* cons = (decode_clo(env8510))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8510))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8510))[1];

//creating new closure instance
void** clo8844 = alloc_clo(lam8507_fptr, 5);

//setting env list
clo8844[1] = kont8424;
clo8844[2] = reverse_u45helper;
clo8844[3] = cons;
clo8844[4] = lst2;
clo8844[5] = a8363;
void* f8426 = encode_clo(clo8844);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
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
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8512))[7];
//not do dummy comment
void* lst = (decode_clo(env8512))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8512))[5];
//not do dummy comment
void* car = (decode_clo(env8512))[4];
//not do dummy comment
void* cons = (decode_clo(env8512))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8512))[2];
//not do dummy comment
void* kont8424 = (decode_clo(env8512))[1];

//if-clause
bool if_guard8845 = is_true(a8362);
if(if_guard8845)
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
void** clo8847 = alloc_clo(lam8509_fptr, 6);

//setting env list
clo8847[1] = kont8424;
clo8847[2] = reverse_u45helper;
clo8847[3] = cons;
clo8847[4] = car;
clo8847[5] = lst2;
clo8847[6] = lst;
void* f8427 = encode_clo(clo8847);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
function_ptr();
return nullptr;
}

}

void* lam8511 = encode_clo(alloc_clo(lam8511_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8513 = arg_buffer[1];
//reading env and args
void* kont8424 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8849 = alloc_clo(lam8511_fptr, 7);

//setting env list
clo8849[1] = kont8424;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8849[2] = reverse_u45helper;
clo8849[3] = cons;
clo8849[4] = car;
clo8849[5] = lst2;
clo8849[6] = lst;
clo8849[7] = cdr;
void* f8428 = encode_clo(clo8849);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8514_fptr() // lam8514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8515 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8515))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8515))[2];
//not do dummy comment
void* kont8429 = (decode_clo(env8515))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8429;
arg_buffer[3] = lst;
arg_buffer[4] = a8366;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8514 = encode_clo(alloc_clo(lam8514_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8516 = arg_buffer[1];
//reading env and args
void* kont8429 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8851 = alloc_clo(lam8514_fptr, 3);

//setting env list
clo8851[1] = kont8429;
clo8851[2] = reverse_u45helper;
clo8851[3] = lst;
void* f8430 = encode_clo(clo8851);



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

void* lam8517_fptr() // lam8517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8518 = arg_buffer[1];
//reading env and args
void* xy8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8431 = (decode_clo(env8518))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8431);
arg_buffer[2] = xy8369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8431))[0]);
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
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8520))[4];
//not do dummy comment
void* a8372 = (decode_clo(env8520))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8520))[2];
//not do dummy comment
void* kont8431 = (decode_clo(env8520))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8431;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[5] = a8374;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
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
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8522))[6];
//not do dummy comment
void* a8372 = (decode_clo(env8522))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8522))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8522))[3];
//not do dummy comment
void* cons = (decode_clo(env8522))[2];
//not do dummy comment
void* kont8431 = (decode_clo(env8522))[1];

//creating new closure instance
void** clo8853 = alloc_clo(lam8519_fptr, 4);

//setting env list
clo8853[1] = kont8431;
clo8853[2] = take_u45helper;
clo8853[3] = a8372;
clo8853[4] = a8370;
void* f8433 = encode_clo(clo8853);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8373, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8524))[7];
//not do dummy comment
void* lst = (decode_clo(env8524))[6];
//not do dummy comment
void* car = (decode_clo(env8524))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8524))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8524))[3];
//not do dummy comment
void* cons = (decode_clo(env8524))[2];
//not do dummy comment
void* kont8431 = (decode_clo(env8524))[1];

//creating new closure instance
void** clo8855 = alloc_clo(lam8521_fptr, 6);

//setting env list
clo8855[1] = kont8431;
clo8855[2] = cons;
clo8855[3] = lst2;
clo8855[4] = take_u45helper;
clo8855[5] = a8372;
clo8855[6] = a8370;
void* f8434 = encode_clo(clo8855);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void* lam8526_fptr() // lam8526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8527 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8527))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8527))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env8527))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8527))[5];
//not do dummy comment
void* n = (decode_clo(env8527))[4];
//not do dummy comment
void* car = (decode_clo(env8527))[3];
//not do dummy comment
void* cons = (decode_clo(env8527))[2];
//not do dummy comment
void* kont8431 = (decode_clo(env8527))[1];
mpz_t* mpzvar8856 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8856, "1", 10);
void* a8371 = encode_mpz(mpzvar8856);

//creating new closure instance
void** clo8858 = alloc_clo(lam8523_fptr, 7);

//setting env list
clo8858[1] = kont8431;
clo8858[2] = cons;
clo8858[3] = lst2;
clo8858[4] = take_u45helper;
clo8858[5] = car;
clo8858[6] = lst;
clo8858[7] = a8370;
void* f8435 = encode_clo(clo8858);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8371);
arg_buffer[1]=reinterpret_cast<void*>(f8435);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
function_ptr();
return nullptr;
}

void* lam8526 = encode_clo(alloc_clo(lam8526_fptr, 0));

void* lam8528_fptr() // lam8528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8529 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8529))[10];
//not do dummy comment
void* lst = (decode_clo(env8529))[9];
//not do dummy comment
void* reverse = (decode_clo(env8529))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8529))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env8529))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8529))[5];
//not do dummy comment
void* n = (decode_clo(env8529))[4];
//not do dummy comment
void* car = (decode_clo(env8529))[3];
//not do dummy comment
void* cons = (decode_clo(env8529))[2];
//not do dummy comment
void* kont8431 = (decode_clo(env8529))[1];

//if-clause
bool if_guard8859 = is_true(a8368);
if(if_guard8859)
{

//creating new closure instance
void** clo8861 = alloc_clo(lam8517_fptr, 1);

//setting env list
clo8861[1] = kont8431;
void* f8432 = encode_clo(clo8861);



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
void** clo8863 = alloc_clo(lam8526_fptr, 8);

//setting env list
clo8863[1] = kont8431;
clo8863[2] = cons;
clo8863[3] = car;
clo8863[4] = n;
clo8863[5] = lst2;
clo8863[6] = take_u45helper;
clo8863[7] = _u45;
clo8863[8] = lst;
void* f8436 = encode_clo(clo8863);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

}

void* lam8528 = encode_clo(alloc_clo(lam8528_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8531 = arg_buffer[1];
//reading env and args
void* kont8431 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8864 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8864, "0", 10);
void* a8367 = encode_mpz(mpzvar8864);

//creating new closure instance
void** clo8866 = alloc_clo(lam8528_fptr, 10);

//setting env list
clo8866[1] = kont8431;
clo8866[2] = cons;
clo8866[3] = car;
clo8866[4] = n;
clo8866[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8866[6] = take_u45helper;
clo8866[7] = _u45;
clo8866[8] = reverse;
clo8866[9] = lst;
clo8866[10] = cdr;
void* f8437 = encode_clo(clo8866);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8367);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8532_fptr() // lam8532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8533 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8533))[4];
//not do dummy comment
void* kont8438 = (decode_clo(env8533))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8533))[2];
//not do dummy comment
void* n = (decode_clo(env8533))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8438;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8375;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8534 = arg_buffer[1];
//reading env and args
void* kont8438 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8868 = alloc_clo(lam8532_fptr, 4);

//setting env list
clo8868[1] = n;
clo8868[2] = take_u45helper;
clo8868[3] = kont8438;
clo8868[4] = lst;
void* f8439 = encode_clo(clo8868);



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

void* lam8536_fptr() // lam8536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8537 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8440 = (decode_clo(env8537))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8537))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8537))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8378, a8380);
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8539))[4];
//not do dummy comment
void* kont8440 = (decode_clo(env8539))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8539))[2];
//not do dummy comment
void* a8378 = (decode_clo(env8539))[1];

//creating new closure instance
void** clo8870 = alloc_clo(lam8536_fptr, 3);

//setting env list
clo8870[1] = a8378;
clo8870[2] = _u43;
clo8870[3] = kont8440;
void* f8441 = encode_clo(clo8870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8441;
arg_buffer[3] = a8379;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

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
void* cdr = (decode_clo(env8542))[5];
//not do dummy comment
void* lst = (decode_clo(env8542))[4];
//not do dummy comment
void* length = (decode_clo(env8542))[3];
//not do dummy comment
void* kont8440 = (decode_clo(env8542))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8542))[1];

//if-clause
bool if_guard8871 = is_true(a8376);
if(if_guard8871)
{
mpz_t* mpzvar8872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8872, "0", 10);
void* xy8377 = encode_mpz(mpzvar8872);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[2] = xy8377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8873 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8873, "1", 10);
void* a8378 = encode_mpz(mpzvar8873);

//creating new closure instance
void** clo8875 = alloc_clo(lam8538_fptr, 4);

//setting env list
clo8875[1] = a8378;
clo8875[2] = _u43;
clo8875[3] = kont8440;
clo8875[4] = length;
void* f8442 = encode_clo(clo8875);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

}

void* lam8541 = encode_clo(alloc_clo(lam8541_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8543 = arg_buffer[1];
//reading env and args
void* kont8440 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8877 = alloc_clo(lam8541_fptr, 5);

//setting env list
clo8877[1] = _u43;
clo8877[2] = kont8440;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8877[3] = length;
clo8877[4] = lst;
clo8877[5] = cdr;
void* f8443 = encode_clo(clo8877);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8544_fptr() // lam8544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8545 = arg_buffer[1];
//reading env and args
void* xy8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8444 = (decode_clo(env8545))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8444);
arg_buffer[2] = xy8382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
//call next proc using a function pointer
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
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8444 = (decode_clo(env8547))[3];
//not do dummy comment
void* cons = (decode_clo(env8547))[2];
//not do dummy comment
void* a8384 = (decode_clo(env8547))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8384, a8386);
arg_buffer[1]=reinterpret_cast<void*>(kont8444);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
function_ptr();
return nullptr;
}

void* lam8546 = encode_clo(alloc_clo(lam8546_fptr, 0));

void* lam8548_fptr() // lam8548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8549))[5];
//not do dummy comment
void* cons = (decode_clo(env8549))[4];
//not do dummy comment
void* a8384 = (decode_clo(env8549))[3];
//not do dummy comment
void* proc = (decode_clo(env8549))[2];
//not do dummy comment
void* kont8444 = (decode_clo(env8549))[1];

//creating new closure instance
void** clo8879 = alloc_clo(lam8546_fptr, 3);

//setting env list
clo8879[1] = a8384;
clo8879[2] = cons;
clo8879[3] = kont8444;
void* f8446 = encode_clo(clo8879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8446;
arg_buffer[3] = proc;
arg_buffer[4] = a8385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8551))[6];
//not do dummy comment
void* lst = (decode_clo(env8551))[5];
//not do dummy comment
void* map = (decode_clo(env8551))[4];
//not do dummy comment
void* cons = (decode_clo(env8551))[3];
//not do dummy comment
void* proc = (decode_clo(env8551))[2];
//not do dummy comment
void* kont8444 = (decode_clo(env8551))[1];

//creating new closure instance
void** clo8881 = alloc_clo(lam8548_fptr, 5);

//setting env list
clo8881[1] = kont8444;
clo8881[2] = proc;
clo8881[3] = a8384;
clo8881[4] = cons;
clo8881[5] = map;
void* f8447 = encode_clo(clo8881);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8447);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8447))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8553))[6];
//not do dummy comment
void* lst = (decode_clo(env8553))[5];
//not do dummy comment
void* map = (decode_clo(env8553))[4];
//not do dummy comment
void* cons = (decode_clo(env8553))[3];
//not do dummy comment
void* proc = (decode_clo(env8553))[2];
//not do dummy comment
void* kont8444 = (decode_clo(env8553))[1];

//creating new closure instance
void** clo8883 = alloc_clo(lam8550_fptr, 6);

//setting env list
clo8883[1] = kont8444;
clo8883[2] = proc;
clo8883[3] = cons;
clo8883[4] = map;
clo8883[5] = lst;
clo8883[6] = cdr;
void* f8448 = encode_clo(clo8883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8448;
arg_buffer[3] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8555))[8];
//not do dummy comment
void* map = (decode_clo(env8555))[7];
//not do dummy comment
void* car = (decode_clo(env8555))[6];
//not do dummy comment
void* cons = (decode_clo(env8555))[5];
//not do dummy comment
void* list = (decode_clo(env8555))[4];
//not do dummy comment
void* cdr = (decode_clo(env8555))[3];
//not do dummy comment
void* proc = (decode_clo(env8555))[2];
//not do dummy comment
void* kont8444 = (decode_clo(env8555))[1];

//if-clause
bool if_guard8884 = is_true(a8381);
if(if_guard8884)
{

//creating new closure instance
void** clo8886 = alloc_clo(lam8544_fptr, 1);

//setting env list
clo8886[1] = kont8444;
void* f8445 = encode_clo(clo8886);



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
void** clo8888 = alloc_clo(lam8552_fptr, 6);

//setting env list
clo8888[1] = kont8444;
clo8888[2] = proc;
clo8888[3] = cons;
clo8888[4] = map;
clo8888[5] = lst;
clo8888[6] = cdr;
void* f8449 = encode_clo(clo8888);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
function_ptr();
return nullptr;
}

}

void* lam8554 = encode_clo(alloc_clo(lam8554_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8556 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8890 = alloc_clo(lam8554_fptr, 8);

//setting env list
clo8890[1] = kont8444;
clo8890[2] = proc;
clo8890[3] = cdr;
clo8890[4] = list;
clo8890[5] = cons;
clo8890[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8890[7] = map;
clo8890[8] = lst;
void* f8450 = encode_clo(clo8890);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8557_fptr() // lam8557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8558 = arg_buffer[1];
//reading env and args
void* xy8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8558))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8451);
arg_buffer[2] = xy8388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
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
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8560))[3];
//not do dummy comment
void* a8391 = (decode_clo(env8560))[2];
//not do dummy comment
void* cons = (decode_clo(env8560))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8391, a8393);
arg_buffer[1]=reinterpret_cast<void*>(kont8451);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8562))[5];
//not do dummy comment
void* a8391 = (decode_clo(env8562))[4];
//not do dummy comment
void* op = (decode_clo(env8562))[3];
//not do dummy comment
void* filter = (decode_clo(env8562))[2];
//not do dummy comment
void* cons = (decode_clo(env8562))[1];

//creating new closure instance
void** clo8892 = alloc_clo(lam8559_fptr, 3);

//setting env list
clo8892[1] = cons;
clo8892[2] = a8391;
clo8892[3] = kont8451;
void* f8453 = encode_clo(clo8892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8453;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8564))[6];
//not do dummy comment
void* kont8451 = (decode_clo(env8564))[5];
//not do dummy comment
void* lst = (decode_clo(env8564))[4];
//not do dummy comment
void* op = (decode_clo(env8564))[3];
//not do dummy comment
void* filter = (decode_clo(env8564))[2];
//not do dummy comment
void* cons = (decode_clo(env8564))[1];

//creating new closure instance
void** clo8894 = alloc_clo(lam8561_fptr, 5);

//setting env list
clo8894[1] = cons;
clo8894[2] = filter;
clo8894[3] = op;
clo8894[4] = a8391;
clo8894[5] = kont8451;
void* f8454 = encode_clo(clo8894);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8454);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8454))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8566))[3];
//not do dummy comment
void* op = (decode_clo(env8566))[2];
//not do dummy comment
void* filter = (decode_clo(env8566))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8451;
arg_buffer[3] = op;
arg_buffer[4] = a8394;
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8568))[7];
//not do dummy comment
void* kont8451 = (decode_clo(env8568))[6];
//not do dummy comment
void* lst = (decode_clo(env8568))[5];
//not do dummy comment
void* op = (decode_clo(env8568))[4];
//not do dummy comment
void* cons = (decode_clo(env8568))[3];
//not do dummy comment
void* filter = (decode_clo(env8568))[2];
//not do dummy comment
void* car = (decode_clo(env8568))[1];

//if-clause
bool if_guard8895 = is_true(a8390);
if(if_guard8895)
{

//creating new closure instance
void** clo8897 = alloc_clo(lam8563_fptr, 6);

//setting env list
clo8897[1] = cons;
clo8897[2] = filter;
clo8897[3] = op;
clo8897[4] = lst;
clo8897[5] = kont8451;
clo8897[6] = cdr;
void* f8455 = encode_clo(clo8897);



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
void** clo8899 = alloc_clo(lam8565_fptr, 3);

//setting env list
clo8899[1] = filter;
clo8899[2] = op;
clo8899[3] = kont8451;
void* f8456 = encode_clo(clo8899);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8456);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
function_ptr();
return nullptr;
}

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
void* cdr = (decode_clo(env8570))[7];
//not do dummy comment
void* kont8451 = (decode_clo(env8570))[6];
//not do dummy comment
void* lst = (decode_clo(env8570))[5];
//not do dummy comment
void* op = (decode_clo(env8570))[4];
//not do dummy comment
void* cons = (decode_clo(env8570))[3];
//not do dummy comment
void* filter = (decode_clo(env8570))[2];
//not do dummy comment
void* car = (decode_clo(env8570))[1];

//creating new closure instance
void** clo8901 = alloc_clo(lam8567_fptr, 7);

//setting env list
clo8901[1] = car;
clo8901[2] = filter;
clo8901[3] = cons;
clo8901[4] = op;
clo8901[5] = lst;
clo8901[6] = kont8451;
clo8901[7] = cdr;
void* f8457 = encode_clo(clo8901);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8457;
arg_buffer[3] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8451 = (decode_clo(env8572))[8];
//not do dummy comment
void* lst = (decode_clo(env8572))[7];
//not do dummy comment
void* op = (decode_clo(env8572))[6];
//not do dummy comment
void* cons = (decode_clo(env8572))[5];
//not do dummy comment
void* list = (decode_clo(env8572))[4];
//not do dummy comment
void* cdr = (decode_clo(env8572))[3];
//not do dummy comment
void* filter = (decode_clo(env8572))[2];
//not do dummy comment
void* car = (decode_clo(env8572))[1];

//if-clause
bool if_guard8902 = is_true(a8387);
if(if_guard8902)
{

//creating new closure instance
void** clo8904 = alloc_clo(lam8557_fptr, 1);

//setting env list
clo8904[1] = kont8451;
void* f8452 = encode_clo(clo8904);



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
void** clo8906 = alloc_clo(lam8569_fptr, 7);

//setting env list
clo8906[1] = car;
clo8906[2] = filter;
clo8906[3] = cons;
clo8906[4] = op;
clo8906[5] = lst;
clo8906[6] = kont8451;
clo8906[7] = cdr;
void* f8458 = encode_clo(clo8906);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8458);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8458))[0]);
function_ptr();
return nullptr;
}

}

void* lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8573 = arg_buffer[1];
//reading env and args
void* kont8451 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8908 = alloc_clo(lam8571_fptr, 8);

//setting env list
clo8908[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8908[2] = filter;
clo8908[3] = cdr;
clo8908[4] = list;
clo8908[5] = cons;
clo8908[6] = op;
clo8908[7] = lst;
clo8908[8] = kont8451;
void* f8459 = encode_clo(clo8908);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8574_fptr() // lam8574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8575 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8575))[3];
//not do dummy comment
void* kont8460 = (decode_clo(env8575))[2];
//not do dummy comment
void* a8397 = (decode_clo(env8575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8460;
arg_buffer[3] = a8397;
arg_buffer[4] = a8399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
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
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8578))[4];
//not do dummy comment
void* kont8460 = (decode_clo(env8578))[3];
//not do dummy comment
void* n = (decode_clo(env8578))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8578))[1];
mpz_t* mpzvar8909 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8909, "1", 10);
void* a8398 = encode_mpz(mpzvar8909);

//creating new closure instance
void** clo8911 = alloc_clo(lam8574_fptr, 3);

//setting env list
clo8911[1] = a8397;
clo8911[2] = kont8460;
clo8911[3] = drop;
void* f8461 = encode_clo(clo8911);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8398);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
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
void* cdr = (decode_clo(env8580))[6];
//not do dummy comment
void* kont8460 = (decode_clo(env8580))[5];
//not do dummy comment
void* n = (decode_clo(env8580))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8580))[3];
//not do dummy comment
void* lst = (decode_clo(env8580))[2];
//not do dummy comment
void* drop = (decode_clo(env8580))[1];

//if-clause
bool if_guard8912 = is_true(a8396);
if(if_guard8912)
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
void** clo8914 = alloc_clo(lam8577_fptr, 4);

//setting env list
clo8914[1] = _u45;
clo8914[2] = n;
clo8914[3] = kont8460;
clo8914[4] = drop;
void* f8462 = encode_clo(clo8914);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8462);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
function_ptr();
return nullptr;
}

}

void* lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8582 = arg_buffer[1];
//reading env and args
void* kont8460 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8915 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8915, "0", 10);
void* a8395 = encode_mpz(mpzvar8915);

//creating new closure instance
void** clo8917 = alloc_clo(lam8579_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8917[1] = drop;
clo8917[2] = lst;
clo8917[3] = _u45;
clo8917[4] = n;
clo8917[5] = kont8460;
clo8917[6] = cdr;
void* f8463 = encode_clo(clo8917);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8395);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8402 = (decode_clo(env8584))[4];
//not do dummy comment
void* fun = (decode_clo(env8584))[3];
//not do dummy comment
void* foldl = (decode_clo(env8584))[2];
//not do dummy comment
void* kont8464 = (decode_clo(env8584))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8464;
arg_buffer[3] = fun;
arg_buffer[4] = a8402;
arg_buffer[5] = a8403;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8586))[5];
//not do dummy comment
void* lst = (decode_clo(env8586))[4];
//not do dummy comment
void* fun = (decode_clo(env8586))[3];
//not do dummy comment
void* foldl = (decode_clo(env8586))[2];
//not do dummy comment
void* kont8464 = (decode_clo(env8586))[1];

//creating new closure instance
void** clo8919 = alloc_clo(lam8583_fptr, 4);

//setting env list
clo8919[1] = kont8464;
clo8919[2] = foldl;
clo8919[3] = fun;
clo8919[4] = a8402;
void* f8465 = encode_clo(clo8919);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
function_ptr();
return nullptr;
}

void* lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void* lam8587_fptr() // lam8587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8588 = arg_buffer[1];
//reading env and args
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8588))[6];
//not do dummy comment
void* lst = (decode_clo(env8588))[5];
//not do dummy comment
void* fun = (decode_clo(env8588))[4];
//not do dummy comment
void* acc = (decode_clo(env8588))[3];
//not do dummy comment
void* foldl = (decode_clo(env8588))[2];
//not do dummy comment
void* kont8464 = (decode_clo(env8588))[1];

//creating new closure instance
void** clo8921 = alloc_clo(lam8585_fptr, 5);

//setting env list
clo8921[1] = kont8464;
clo8921[2] = foldl;
clo8921[3] = fun;
clo8921[4] = lst;
clo8921[5] = cdr;
void* f8466 = encode_clo(clo8921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8466;
arg_buffer[3] = a8401;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8590))[7];
//not do dummy comment
void* lst = (decode_clo(env8590))[6];
//not do dummy comment
void* fun = (decode_clo(env8590))[5];
//not do dummy comment
void* acc = (decode_clo(env8590))[4];
//not do dummy comment
void* car = (decode_clo(env8590))[3];
//not do dummy comment
void* foldl = (decode_clo(env8590))[2];
//not do dummy comment
void* kont8464 = (decode_clo(env8590))[1];

//if-clause
bool if_guard8922 = is_true(a8400);
if(if_guard8922)
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
void** clo8924 = alloc_clo(lam8587_fptr, 6);

//setting env list
clo8924[1] = kont8464;
clo8924[2] = foldl;
clo8924[3] = acc;
clo8924[4] = fun;
clo8924[5] = lst;
clo8924[6] = cdr;
void* f8467 = encode_clo(clo8924);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
function_ptr();
return nullptr;
}

}

void* lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8591 = arg_buffer[1];
//reading env and args
void* kont8464 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8926 = alloc_clo(lam8589_fptr, 7);

//setting env list
clo8926[1] = kont8464;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8926[2] = foldl;
clo8926[3] = car;
clo8926[4] = acc;
clo8926[5] = fun;
clo8926[6] = lst;
clo8926[7] = cdr;
void* f8468 = encode_clo(clo8926);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8592_fptr() // lam8592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8593 = arg_buffer[1];
//reading env and args
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8593))[3];
//not do dummy comment
void* a8405 = (decode_clo(env8593))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8593))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8469;
arg_buffer[3] = a8405;
arg_buffer[4] = a8407;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void* lam8594_fptr() // lam8594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8595 = arg_buffer[1];
//reading env and args
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8595))[5];
//not do dummy comment
void* acc = (decode_clo(env8595))[4];
//not do dummy comment
void* foldr = (decode_clo(env8595))[3];
//not do dummy comment
void* a8405 = (decode_clo(env8595))[2];
//not do dummy comment
void* kont8469 = (decode_clo(env8595))[1];

//creating new closure instance
void** clo8928 = alloc_clo(lam8592_fptr, 3);

//setting env list
clo8928[1] = kont8469;
clo8928[2] = a8405;
clo8928[3] = fun;
void* f8470 = encode_clo(clo8928);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8470;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8406;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void* lam8596_fptr() // lam8596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8597 = arg_buffer[1];
//reading env and args
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8597))[6];
//not do dummy comment
void* fun = (decode_clo(env8597))[5];
//not do dummy comment
void* acc = (decode_clo(env8597))[4];
//not do dummy comment
void* kont8469 = (decode_clo(env8597))[3];
//not do dummy comment
void* foldr = (decode_clo(env8597))[2];
//not do dummy comment
void* lst = (decode_clo(env8597))[1];

//creating new closure instance
void** clo8930 = alloc_clo(lam8594_fptr, 5);

//setting env list
clo8930[1] = kont8469;
clo8930[2] = a8405;
clo8930[3] = foldr;
clo8930[4] = acc;
clo8930[5] = fun;
void* f8471 = encode_clo(clo8930);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8599))[7];
//not do dummy comment
void* fun = (decode_clo(env8599))[6];
//not do dummy comment
void* acc = (decode_clo(env8599))[5];
//not do dummy comment
void* car = (decode_clo(env8599))[4];
//not do dummy comment
void* kont8469 = (decode_clo(env8599))[3];
//not do dummy comment
void* foldr = (decode_clo(env8599))[2];
//not do dummy comment
void* lst = (decode_clo(env8599))[1];

//if-clause
bool if_guard8931 = is_true(a8404);
if(if_guard8931)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8469);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8469))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8933 = alloc_clo(lam8596_fptr, 6);

//setting env list
clo8933[1] = lst;
clo8933[2] = foldr;
clo8933[3] = kont8469;
clo8933[4] = acc;
clo8933[5] = fun;
clo8933[6] = cdr;
void* f8472 = encode_clo(clo8933);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
function_ptr();
return nullptr;
}

}

void* lam8598 = encode_clo(alloc_clo(lam8598_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8600 = arg_buffer[1];
//reading env and args
void* kont8469 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8935 = alloc_clo(lam8598_fptr, 7);

//setting env list
clo8935[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8935[2] = foldr;
clo8935[3] = kont8469;
clo8935[4] = car;
clo8935[5] = acc;
clo8935[6] = fun;
clo8935[7] = cdr;
void* f8473 = encode_clo(clo8935);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8601_fptr() // lam8601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8602 = arg_buffer[1];
//reading env and args
void* a8411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8409 = (decode_clo(env8602))[3];
//not do dummy comment
void* kont8474 = (decode_clo(env8602))[2];
//not do dummy comment
void* cons = (decode_clo(env8602))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8409, a8411);
arg_buffer[1]=reinterpret_cast<void*>(kont8474);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8474))[0]);
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
void* a8410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8474 = (decode_clo(env8604))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8604))[4];
//not do dummy comment
void* cons = (decode_clo(env8604))[3];
//not do dummy comment
void* append = (decode_clo(env8604))[2];
//not do dummy comment
void* a8409 = (decode_clo(env8604))[1];

//creating new closure instance
void** clo8937 = alloc_clo(lam8601_fptr, 3);

//setting env list
clo8937[1] = cons;
clo8937[2] = kont8474;
clo8937[3] = a8409;
void* f8475 = encode_clo(clo8937);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8475;
arg_buffer[3] = a8410;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8606))[6];
//not do dummy comment
void* append = (decode_clo(env8606))[5];
//not do dummy comment
void* kont8474 = (decode_clo(env8606))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8606))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8606))[2];
//not do dummy comment
void* cons = (decode_clo(env8606))[1];

//creating new closure instance
void** clo8939 = alloc_clo(lam8603_fptr, 5);

//setting env list
clo8939[1] = a8409;
clo8939[2] = append;
clo8939[3] = cons;
clo8939[4] = lst2;
clo8939[5] = kont8474;
void* f8476 = encode_clo(clo8939);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
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
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8608))[7];
//not do dummy comment
void* append = (decode_clo(env8608))[6];
//not do dummy comment
void* kont8474 = (decode_clo(env8608))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8608))[4];
//not do dummy comment
void* cons = (decode_clo(env8608))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8608))[2];
//not do dummy comment
void* car = (decode_clo(env8608))[1];

//if-clause
bool if_guard8940 = is_true(a8408);
if(if_guard8940)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8474);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8474))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8942 = alloc_clo(lam8605_fptr, 6);

//setting env list
clo8942[1] = cons;
clo8942[2] = lst1;
clo8942[3] = lst2;
clo8942[4] = kont8474;
clo8942[5] = append;
clo8942[6] = cdr;
void* f8477 = encode_clo(clo8942);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
function_ptr();
return nullptr;
}

}

void* lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8609 = arg_buffer[1];
//reading env and args
void* kont8474 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8944 = alloc_clo(lam8607_fptr, 7);

//setting env list
clo8944[1] = car;
clo8944[2] = lst1;
clo8944[3] = cons;
clo8944[4] = lst2;
clo8944[5] = kont8474;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8944[6] = append;
clo8944[7] = cdr;
void* f8478 = encode_clo(clo8944);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8478);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8611 = arg_buffer[1];
//reading env and args
void* kont8479 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8945 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8945, "-3", 10);
void* a8412 = encode_mpz(mpzvar8945);

//clo-app
arg_buffer[2]=apply_prim_exact_u45ceiling_1(a8412);
arg_buffer[1]=reinterpret_cast<void*>(kont8479);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8479))[0]);
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8612_fptr() // lam8612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8613 = arg_buffer[1];
//reading env and args
void* xy8413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8480 = (decode_clo(env8613))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8480);
arg_buffer[2] = xy8413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8480))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8614 = arg_buffer[1];
//reading env and args
void* kont8480 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8947 = alloc_clo(lam8612_fptr, 1);

//setting env list
clo8947[1] = kont8480;
void* f8481 = encode_clo(clo8947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8481;
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

