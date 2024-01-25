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
void* _env8618 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8616 = prim_car(lst);
void* lst8619 = prim_cdr(lst);
void* x8617 = apply_prim__u43(lst8619);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8616);
arg_buffer[2] = x8617;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8616))[0]);
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
void* _env8622 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8620 = prim_car(lst);
void* lst8623 = prim_cdr(lst);
void* x8621 = apply_prim__u45(lst8623);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8620);
arg_buffer[2] = x8621;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8620))[0]);
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
void* _env8626 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8624 = prim_car(lst);
void* lst8627 = prim_cdr(lst);
void* x8625 = apply_prim__u42(lst8627);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8624);
arg_buffer[2] = x8625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8624))[0]);
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
void* _env8630 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8628 = prim_car(lst);
void* lst8631 = prim_cdr(lst);
void* x8629 = apply_prim__u47(lst8631);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8628);
arg_buffer[2] = x8629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8628))[0]);
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
void* _env8634 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8632 = prim_car(lst);
void* lst8635 = prim_cdr(lst);
void* x8633 = apply_prim__u61(lst8635);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8632);
arg_buffer[2] = x8633;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8632))[0]);
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
void* _env8638 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8636 = prim_car(lst);
void* lst8639 = prim_cdr(lst);
void* x8637 = apply_prim__u62(lst8639);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8636);
arg_buffer[2] = x8637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8636))[0]);
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
void* _env8642 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8640 = prim_car(lst);
void* lst8643 = prim_cdr(lst);
void* x8641 = apply_prim__u60(lst8643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8640);
arg_buffer[2] = x8641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8640))[0]);
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
void* _env8646 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8644 = prim_car(lst);
void* lst8647 = prim_cdr(lst);
void* x8645 = apply_prim__u60_u61(lst8647);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8644);
arg_buffer[2] = x8645;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8644))[0]);
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
void* _env8650 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8648 = prim_car(lst);
void* lst8651 = prim_cdr(lst);
void* x8649 = apply_prim__u62_u61(lst8651);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8648);
arg_buffer[2] = x8649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8648))[0]);
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
void* _env8654 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8652 = prim_car(lst);
void* lst8655 = prim_cdr(lst);
void* x8653 = apply_prim_modulo(lst8655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8652);
arg_buffer[2] = x8653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8652))[0]);
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
void* _env8658 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8656 = prim_car(lst);
void* lst8659 = prim_cdr(lst);
void* x8657 = apply_prim_null_u63(lst8659);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8656);
arg_buffer[2] = x8657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8656))[0]);
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
void* _env8662 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8660 = prim_car(lst);
void* lst8663 = prim_cdr(lst);
void* x8661 = apply_prim_equal_u63(lst8663);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8660);
arg_buffer[2] = x8661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8660))[0]);
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
void* _env8666 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8664 = prim_car(lst);
void* lst8667 = prim_cdr(lst);
void* x8665 = apply_prim_eq_u63(lst8667);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8664);
arg_buffer[2] = x8665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8664))[0]);
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
void* _env8670 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8668 = prim_car(lst);
void* lst8671 = prim_cdr(lst);
void* x8669 = apply_prim_cons(lst8671);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8668);
arg_buffer[2] = x8669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8668))[0]);
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
void* _env8674 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8672 = prim_car(lst);
void* lst8675 = prim_cdr(lst);
void* x8673 = apply_prim_car(lst8675);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8672);
arg_buffer[2] = x8673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8672))[0]);
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
void* _env8678 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8676 = prim_car(lst);
void* lst8679 = prim_cdr(lst);
void* x8677 = apply_prim_cdr(lst8679);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8676);
arg_buffer[2] = x8677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8676))[0]);
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
void* _env8682 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8680 = prim_car(lst);
void* lst8683 = prim_cdr(lst);
void* x8681 = apply_prim_float_u45_u62int(lst8683);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8680);
arg_buffer[2] = x8681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8680))[0]);
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
void* _env8686 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8684 = prim_car(lst);
void* lst8687 = prim_cdr(lst);
void* x8685 = apply_prim_int_u45_u62float(lst8687);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8684);
arg_buffer[2] = x8685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8684))[0]);
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
void* _env8690 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8688 = prim_car(lst);
void* lst8691 = prim_cdr(lst);
void* x8689 = apply_prim_hash(lst8691);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8688);
arg_buffer[2] = x8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
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
void* _env8694 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8692 = prim_car(lst);
void* lst8695 = prim_cdr(lst);
void* x8693 = apply_prim_hash_u45ref(lst8695);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8692);
arg_buffer[2] = x8693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8692))[0]);
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
void* _env8698 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8696 = prim_car(lst);
void* lst8699 = prim_cdr(lst);
void* x8697 = apply_prim_hash_u45set(lst8699);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8696);
arg_buffer[2] = x8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8696))[0]);
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
void* _env8702 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8700 = prim_car(lst);
void* lst8703 = prim_cdr(lst);
void* x8701 = apply_prim_hash_u45keys(lst8703);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8700);
arg_buffer[2] = x8701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8700))[0]);
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
void* _env8706 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8704 = prim_car(lst);
void* lst8707 = prim_cdr(lst);
void* x8705 = apply_prim_hash_u45has_u45key_u63(lst8707);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8704);
arg_buffer[2] = x8705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
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
void* _env8710 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8708 = prim_car(lst);
void* lst8711 = prim_cdr(lst);
void* x8709 = apply_prim_hash_u45count(lst8711);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8708);
arg_buffer[2] = x8709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
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
void* _env8714 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8712 = prim_car(lst);
void* lst8715 = prim_cdr(lst);
void* x8713 = apply_prim_set(lst8715);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8712);
arg_buffer[2] = x8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
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
void* _env8718 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8716 = prim_car(lst);
void* lst8719 = prim_cdr(lst);
void* x8717 = apply_prim_set_u45_u62list(lst8719);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8716);
arg_buffer[2] = x8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
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
void* _env8722 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8720 = prim_car(lst);
void* lst8723 = prim_cdr(lst);
void* x8721 = apply_prim_list_u45_u62set(lst8723);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8720);
arg_buffer[2] = x8721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
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
void* _env8726 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8724 = prim_car(lst);
void* lst8727 = prim_cdr(lst);
void* x8725 = apply_prim_set_u45add(lst8727);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8724);
arg_buffer[2] = x8725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
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
void* _env8730 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8728 = prim_car(lst);
void* lst8731 = prim_cdr(lst);
void* x8729 = apply_prim_string_u63(lst8731);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8728);
arg_buffer[2] = x8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
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
void* _env8734 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8732 = prim_car(lst);
void* lst8735 = prim_cdr(lst);
void* x8733 = apply_prim_string_u45length(lst8735);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8732);
arg_buffer[2] = x8733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
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
void* _env8738 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8736 = prim_car(lst);
void* lst8739 = prim_cdr(lst);
void* x8737 = apply_prim_string_u45ref(lst8739);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8736);
arg_buffer[2] = x8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
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
void* _env8742 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8740 = prim_car(lst);
void* lst8743 = prim_cdr(lst);
void* x8741 = apply_prim_substring(lst8743);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8740);
arg_buffer[2] = x8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8740))[0]);
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
void* _env8746 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8744 = prim_car(lst);
void* lst8747 = prim_cdr(lst);
void* x8745 = apply_prim_string_u45append(lst8747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8744);
arg_buffer[2] = x8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8744))[0]);
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
void* _env8750 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8748 = prim_car(lst);
void* lst8751 = prim_cdr(lst);
void* x8749 = apply_prim_string_u45_u62list(lst8751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8748);
arg_buffer[2] = x8749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8748))[0]);
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
void* _env8754 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8752 = prim_car(lst);
void* lst8755 = prim_cdr(lst);
void* x8753 = apply_prim_exact_u45floor(lst8755);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8752);
arg_buffer[2] = x8753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8752))[0]);
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
void* _env8758 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8756 = prim_car(lst);
void* lst8759 = prim_cdr(lst);
void* x8757 = apply_prim_exact_u45ceiling(lst8759);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8756);
arg_buffer[2] = x8757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8756))[0]);
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
void* _env8762 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8760 = prim_car(lst);
void* lst8763 = prim_cdr(lst);
void* x8761 = apply_prim_exact_u45round(lst8763);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8760);
arg_buffer[2] = x8761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8760))[0]);
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
void* _env8766 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8764 = prim_car(lst);
void* lst8767 = prim_cdr(lst);
void* x8765 = apply_prim_absolute(lst8767);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8764);
arg_buffer[2] = x8765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8764))[0]);
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
void* _env8770 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8768 = prim_car(lst);
void* lst8771 = prim_cdr(lst);
void* x8769 = apply_prim_max(lst8771);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8768);
arg_buffer[2] = x8769;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8768))[0]);
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
void* _env8774 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8772 = prim_car(lst);
void* lst8775 = prim_cdr(lst);
void* x8773 = apply_prim_min(lst8775);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8772);
arg_buffer[2] = x8773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8772))[0]);
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
void* _env8778 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8776 = prim_car(lst);
void* lst8779 = prim_cdr(lst);
void* x8777 = apply_prim_expt(lst8779);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8776);
arg_buffer[2] = x8777;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8776))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void* list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8481 = arg_buffer[1];
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

void* kont8410 = prim_car(x);
void* x8480 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8410);
arg_buffer[2] = x8480;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8410))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8482_fptr() // lam8482 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8483 = arg_buffer[1];
//reading env and args
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8411 = (decode_clo(env8483))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8483))[2];
//not do dummy comment
void* a8344 = (decode_clo(env8483))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8411);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8411))[0]);
function_ptr();
return nullptr;
}

void* lam8482 = encode_clo(alloc_clo(lam8482_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8486 = arg_buffer[1];
//reading env and args
void* kont8411 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8780 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8780, "0", 10);
void* a8344 = encode_mpz(mpzvar8780);
mpz_t* mpzvar8781 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8781, "2", 10);
void* a8345 = encode_mpz(mpzvar8781);

//creating new closure instance
void** clo8783 = alloc_clo(lam8482_fptr, 3);

//setting env list
clo8783[1] = a8344;
clo8783[2] = equal_u63;
clo8783[3] = kont8411;
void* f8412 = encode_clo(clo8783);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8412);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8412))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8487_fptr() // lam8487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8488 = arg_buffer[1];
//reading env and args
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8347 = (decode_clo(env8488))[3];
//not do dummy comment
void* kont8413 = (decode_clo(env8488))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8488))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8413);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8413))[0]);
function_ptr();
return nullptr;
}

void* lam8487 = encode_clo(alloc_clo(lam8487_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8491 = arg_buffer[1];
//reading env and args
void* kont8413 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8784 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8784, "1", 10);
void* a8347 = encode_mpz(mpzvar8784);
mpz_t* mpzvar8785 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8785, "2", 10);
void* a8348 = encode_mpz(mpzvar8785);

//creating new closure instance
void** clo8787 = alloc_clo(lam8487_fptr, 3);

//setting env list
clo8787[1] = equal_u63;
clo8787[2] = kont8413;
clo8787[3] = a8347;
void* f8414 = encode_clo(clo8787);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8414);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8414))[0]);
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8494_fptr() // lam8494 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8495 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8415 = (decode_clo(env8495))[3];
//not do dummy comment
void* x = (decode_clo(env8495))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8495))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8415;
arg_buffer[3] = x;
arg_buffer[4] = a8355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8494 = encode_clo(alloc_clo(lam8494_fptr, 0));

void* lam8496_fptr() // lam8496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8497 = arg_buffer[1];
//reading env and args
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8497))[5];
//not do dummy comment
void* lst = (decode_clo(env8497))[4];
//not do dummy comment
void* kont8415 = (decode_clo(env8497))[3];
//not do dummy comment
void* x = (decode_clo(env8497))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8497))[1];

//if-clause
bool if_guard8788 = is_true(a8353);
if(if_guard8788)
{
void* xy8354 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8790 = alloc_clo(lam8494_fptr, 3);

//setting env list
clo8790[1] = member_u63;
clo8790[2] = x;
clo8790[3] = kont8415;
void* f8416 = encode_clo(clo8790);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8416);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8416))[0]);
function_ptr();
return nullptr;
}

}

void* lam8496 = encode_clo(alloc_clo(lam8496_fptr, 0));

void* lam8498_fptr() // lam8498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8499 = arg_buffer[1];
//reading env and args
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8499))[6];
//not do dummy comment
void* lst = (decode_clo(env8499))[5];
//not do dummy comment
void* kont8415 = (decode_clo(env8499))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8499))[3];
//not do dummy comment
void* x = (decode_clo(env8499))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8499))[1];

//creating new closure instance
void** clo8792 = alloc_clo(lam8496_fptr, 5);

//setting env list
clo8792[1] = member_u63;
clo8792[2] = x;
clo8792[3] = kont8415;
clo8792[4] = lst;
clo8792[5] = cdr;
void* f8417 = encode_clo(clo8792);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8417);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8417))[0]);
function_ptr();
return nullptr;
}

void* lam8498 = encode_clo(alloc_clo(lam8498_fptr, 0));

void* lam8500_fptr() // lam8500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8501 = arg_buffer[1];
//reading env and args
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8501))[7];
//not do dummy comment
void* lst = (decode_clo(env8501))[6];
//not do dummy comment
void* kont8415 = (decode_clo(env8501))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8501))[4];
//not do dummy comment
void* x = (decode_clo(env8501))[3];
//not do dummy comment
void* car = (decode_clo(env8501))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8501))[1];

//if-clause
bool if_guard8793 = is_true(a8350);
if(if_guard8793)
{
void* xy8351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8795 = alloc_clo(lam8498_fptr, 6);

//setting env list
clo8795[1] = member_u63;
clo8795[2] = x;
clo8795[3] = equal_u63;
clo8795[4] = kont8415;
clo8795[5] = lst;
clo8795[6] = cdr;
void* f8418 = encode_clo(clo8795);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8418);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8418))[0]);
function_ptr();
return nullptr;
}

}

void* lam8500 = encode_clo(alloc_clo(lam8500_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8502 = arg_buffer[1];
//reading env and args
void* kont8415 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8797 = alloc_clo(lam8500_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8797[1] = member_u63;
clo8797[2] = car;
clo8797[3] = x;
clo8797[4] = equal_u63;
clo8797[5] = kont8415;
clo8797[6] = lst;
clo8797[7] = cdr;
void* f8419 = encode_clo(clo8797);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8419);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8503_fptr() // lam8503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8504))[4];
//not do dummy comment
void* kont8420 = (decode_clo(env8504))[3];
//not do dummy comment
void* a8358 = (decode_clo(env8504))[2];
//not do dummy comment
void* foldl = (decode_clo(env8504))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8420;
arg_buffer[3] = fun;
arg_buffer[4] = a8358;
arg_buffer[5] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8506))[5];
//not do dummy comment
void* lst = (decode_clo(env8506))[4];
//not do dummy comment
void* fun = (decode_clo(env8506))[3];
//not do dummy comment
void* kont8420 = (decode_clo(env8506))[2];
//not do dummy comment
void* foldl = (decode_clo(env8506))[1];

//creating new closure instance
void** clo8799 = alloc_clo(lam8503_fptr, 4);

//setting env list
clo8799[1] = foldl;
clo8799[2] = a8358;
clo8799[3] = kont8420;
clo8799[4] = fun;
void* f8421 = encode_clo(clo8799);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8421);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8421))[0]);
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
void* cdr = (decode_clo(env8508))[6];
//not do dummy comment
void* lst = (decode_clo(env8508))[5];
//not do dummy comment
void* fun = (decode_clo(env8508))[4];
//not do dummy comment
void* foldl = (decode_clo(env8508))[3];
//not do dummy comment
void* acc = (decode_clo(env8508))[2];
//not do dummy comment
void* kont8420 = (decode_clo(env8508))[1];

//creating new closure instance
void** clo8801 = alloc_clo(lam8505_fptr, 5);

//setting env list
clo8801[1] = foldl;
clo8801[2] = kont8420;
clo8801[3] = fun;
clo8801[4] = lst;
clo8801[5] = cdr;
void* f8422 = encode_clo(clo8801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8422;
arg_buffer[3] = a8357;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//call next proc using a function pointer
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8510))[7];
//not do dummy comment
void* lst = (decode_clo(env8510))[6];
//not do dummy comment
void* fun = (decode_clo(env8510))[5];
//not do dummy comment
void* car = (decode_clo(env8510))[4];
//not do dummy comment
void* foldl = (decode_clo(env8510))[3];
//not do dummy comment
void* acc = (decode_clo(env8510))[2];
//not do dummy comment
void* kont8420 = (decode_clo(env8510))[1];

//if-clause
bool if_guard8802 = is_true(a8356);
if(if_guard8802)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8420);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8420))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8804 = alloc_clo(lam8507_fptr, 6);

//setting env list
clo8804[1] = kont8420;
clo8804[2] = acc;
clo8804[3] = foldl;
clo8804[4] = fun;
clo8804[5] = lst;
clo8804[6] = cdr;
void* f8423 = encode_clo(clo8804);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8423);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8423))[0]);
function_ptr();
return nullptr;
}

}

void* lam8509 = encode_clo(alloc_clo(lam8509_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8511 = arg_buffer[1];
//reading env and args
void* kont8420 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8806 = alloc_clo(lam8509_fptr, 7);

//setting env list
clo8806[1] = kont8420;
clo8806[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8806[3] = foldl;
clo8806[4] = car;
clo8806[5] = fun;
clo8806[6] = lst;
clo8806[7] = cdr;
void* f8424 = encode_clo(clo8806);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8424);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8424))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

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
void* reverse_u45helper = (decode_clo(env8513))[3];
//not do dummy comment
void* a8361 = (decode_clo(env8513))[2];
//not do dummy comment
void* kont8425 = (decode_clo(env8513))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8425;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
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
void* reverse_u45helper = (decode_clo(env8515))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8515))[4];
//not do dummy comment
void* cons = (decode_clo(env8515))[3];
//not do dummy comment
void* a8361 = (decode_clo(env8515))[2];
//not do dummy comment
void* kont8425 = (decode_clo(env8515))[1];

//creating new closure instance
void** clo8808 = alloc_clo(lam8512_fptr, 3);

//setting env list
clo8808[1] = kont8425;
clo8808[2] = a8361;
clo8808[3] = reverse_u45helper;
void* f8426 = encode_clo(clo8808);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8425 = (decode_clo(env8517))[6];
//not do dummy comment
void* lst = (decode_clo(env8517))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8517))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8517))[3];
//not do dummy comment
void* car = (decode_clo(env8517))[2];
//not do dummy comment
void* cons = (decode_clo(env8517))[1];

//creating new closure instance
void** clo8810 = alloc_clo(lam8514_fptr, 5);

//setting env list
clo8810[1] = kont8425;
clo8810[2] = a8361;
clo8810[3] = cons;
clo8810[4] = lst2;
clo8810[5] = reverse_u45helper;
void* f8427 = encode_clo(clo8810);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
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
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8519))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8519))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8519))[5];
//not do dummy comment
void* car = (decode_clo(env8519))[4];
//not do dummy comment
void* cons = (decode_clo(env8519))[3];
//not do dummy comment
void* kont8425 = (decode_clo(env8519))[2];
//not do dummy comment
void* cdr = (decode_clo(env8519))[1];

//if-clause
bool if_guard8811 = is_true(a8360);
if(if_guard8811)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8425);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8813 = alloc_clo(lam8516_fptr, 6);

//setting env list
clo8813[1] = cons;
clo8813[2] = car;
clo8813[3] = lst2;
clo8813[4] = reverse_u45helper;
clo8813[5] = lst;
clo8813[6] = kont8425;
void* f8428 = encode_clo(clo8813);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
function_ptr();
return nullptr;
}

}

void* lam8518 = encode_clo(alloc_clo(lam8518_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8520 = arg_buffer[1];
//reading env and args
void* kont8425 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8815 = alloc_clo(lam8518_fptr, 7);

//setting env list
clo8815[1] = cdr;
clo8815[2] = kont8425;
clo8815[3] = cons;
clo8815[4] = car;
clo8815[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8815[6] = reverse_u45helper;
clo8815[7] = lst;
void* f8429 = encode_clo(clo8815);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8521_fptr() // lam8521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8522 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8522))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8522))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8522))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8430;
arg_buffer[3] = lst;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8521 = encode_clo(alloc_clo(lam8521_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8523 = arg_buffer[1];
//reading env and args
void* kont8430 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8817 = alloc_clo(lam8521_fptr, 3);

//setting env list
clo8817[1] = reverse_u45helper;
clo8817[2] = kont8430;
clo8817[3] = lst;
void* f8431 = encode_clo(clo8817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8431;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8524_fptr() // lam8524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8525 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8432 = (decode_clo(env8525))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8432);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8432))[0]);
//call next proc using a function pointer
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
void* a8370 = (decode_clo(env8527))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8527))[3];
//not do dummy comment
void* a8368 = (decode_clo(env8527))[2];
//not do dummy comment
void* kont8432 = (decode_clo(env8527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8432;
arg_buffer[3] = a8368;
arg_buffer[4] = a8370;
arg_buffer[5] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8529))[6];
//not do dummy comment
void* cons = (decode_clo(env8529))[5];
//not do dummy comment
void* a8368 = (decode_clo(env8529))[4];
//not do dummy comment
void* kont8432 = (decode_clo(env8529))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8529))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8529))[1];

//creating new closure instance
void** clo8819 = alloc_clo(lam8526_fptr, 4);

//setting env list
clo8819[1] = kont8432;
clo8819[2] = a8368;
clo8819[3] = take_u45helper;
clo8819[4] = a8370;
void* f8434 = encode_clo(clo8819);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* lam8528 = encode_clo(alloc_clo(lam8528_fptr, 0));

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
void* lst = (decode_clo(env8531))[7];
//not do dummy comment
void* car = (decode_clo(env8531))[6];
//not do dummy comment
void* cons = (decode_clo(env8531))[5];
//not do dummy comment
void* a8368 = (decode_clo(env8531))[4];
//not do dummy comment
void* kont8432 = (decode_clo(env8531))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8531))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8531))[1];

//creating new closure instance
void** clo8821 = alloc_clo(lam8528_fptr, 6);

//setting env list
clo8821[1] = lst2;
clo8821[2] = take_u45helper;
clo8821[3] = kont8432;
clo8821[4] = a8368;
clo8821[5] = cons;
clo8821[6] = a8370;
void* f8435 = encode_clo(clo8821);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8435);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
function_ptr();
return nullptr;
}

void* lam8530 = encode_clo(alloc_clo(lam8530_fptr, 0));

void* lam8533_fptr() // lam8533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8534 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8534))[8];
//not do dummy comment
void* kont8432 = (decode_clo(env8534))[7];
//not do dummy comment
void* cons = (decode_clo(env8534))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8534))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8534))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8534))[3];
//not do dummy comment
void* n = (decode_clo(env8534))[2];
//not do dummy comment
void* car = (decode_clo(env8534))[1];
mpz_t* mpzvar8822 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8822, "1", 10);
void* a8369 = encode_mpz(mpzvar8822);

//creating new closure instance
void** clo8824 = alloc_clo(lam8530_fptr, 7);

//setting env list
clo8824[1] = lst2;
clo8824[2] = take_u45helper;
clo8824[3] = kont8432;
clo8824[4] = a8368;
clo8824[5] = cons;
clo8824[6] = car;
clo8824[7] = lst;
void* f8436 = encode_clo(clo8824);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8536))[10];
//not do dummy comment
void* lst = (decode_clo(env8536))[9];
//not do dummy comment
void* cons = (decode_clo(env8536))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8536))[7];
//not do dummy comment
void* kont8432 = (decode_clo(env8536))[6];
//not do dummy comment
void* reverse = (decode_clo(env8536))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8536))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8536))[3];
//not do dummy comment
void* n = (decode_clo(env8536))[2];
//not do dummy comment
void* car = (decode_clo(env8536))[1];

//if-clause
bool if_guard8825 = is_true(a8366);
if(if_guard8825)
{

//creating new closure instance
void** clo8827 = alloc_clo(lam8524_fptr, 1);

//setting env list
clo8827[1] = kont8432;
void* f8433 = encode_clo(clo8827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8433;
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
void** clo8829 = alloc_clo(lam8533_fptr, 8);

//setting env list
clo8829[1] = car;
clo8829[2] = n;
clo8829[3] = lst2;
clo8829[4] = take_u45helper;
clo8829[5] = _u45;
clo8829[6] = cons;
clo8829[7] = kont8432;
clo8829[8] = lst;
void* f8437 = encode_clo(clo8829);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

}

void* lam8535 = encode_clo(alloc_clo(lam8535_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8538 = arg_buffer[1];
//reading env and args
void* kont8432 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8830 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8830, "0", 10);
void* a8365 = encode_mpz(mpzvar8830);

//creating new closure instance
void** clo8832 = alloc_clo(lam8535_fptr, 10);

//setting env list
clo8832[1] = car;
clo8832[2] = n;
clo8832[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8832[4] = take_u45helper;
clo8832[5] = reverse;
clo8832[6] = kont8432;
clo8832[7] = _u45;
clo8832[8] = cons;
clo8832[9] = lst;
clo8832[10] = cdr;
void* f8438 = encode_clo(clo8832);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8539_fptr() // lam8539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8540 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8540))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8540))[3];
//not do dummy comment
void* n = (decode_clo(env8540))[2];
//not do dummy comment
void* kont8439 = (decode_clo(env8540))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8439;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8539 = encode_clo(alloc_clo(lam8539_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8541 = arg_buffer[1];
//reading env and args
void* kont8439 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8834 = alloc_clo(lam8539_fptr, 4);

//setting env list
clo8834[1] = kont8439;
clo8834[2] = n;
clo8834[3] = take_u45helper;
clo8834[4] = lst;
void* f8440 = encode_clo(clo8834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8440;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8543_fptr() // lam8543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8441 = (decode_clo(env8544))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8544))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8544))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8441);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8441))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8441 = (decode_clo(env8546))[4];
//not do dummy comment
void* length = (decode_clo(env8546))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8546))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8546))[1];

//creating new closure instance
void** clo8836 = alloc_clo(lam8543_fptr, 3);

//setting env list
clo8836[1] = a8376;
clo8836[2] = _u43;
clo8836[3] = kont8441;
void* f8442 = encode_clo(clo8836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8442;
arg_buffer[3] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void* lam8548_fptr() // lam8548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8549 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8549))[5];
//not do dummy comment
void* length = (decode_clo(env8549))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8549))[3];
//not do dummy comment
void* kont8441 = (decode_clo(env8549))[2];
//not do dummy comment
void* cdr = (decode_clo(env8549))[1];

//if-clause
bool if_guard8837 = is_true(a8374);
if(if_guard8837)
{
mpz_t* mpzvar8838 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8838, "0", 10);
void* xy8375 = encode_mpz(mpzvar8838);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8441);
arg_buffer[2] = xy8375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8441))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8839 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8839, "1", 10);
void* a8376 = encode_mpz(mpzvar8839);

//creating new closure instance
void** clo8841 = alloc_clo(lam8545_fptr, 4);

//setting env list
clo8841[1] = a8376;
clo8841[2] = _u43;
clo8841[3] = length;
clo8841[4] = kont8441;
void* f8443 = encode_clo(clo8841);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
function_ptr();
return nullptr;
}

}

void* lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8550 = arg_buffer[1];
//reading env and args
void* kont8441 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8843 = alloc_clo(lam8548_fptr, 5);

//setting env list
clo8843[1] = cdr;
clo8843[2] = kont8441;
clo8843[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8843[4] = length;
clo8843[5] = lst;
void* f8444 = encode_clo(clo8843);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8551_fptr() // lam8551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8552 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8445 = (decode_clo(env8552))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8445);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
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
void* kont8445 = (decode_clo(env8554))[3];
//not do dummy comment
void* a8382 = (decode_clo(env8554))[2];
//not do dummy comment
void* cons = (decode_clo(env8554))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8445);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
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
void* kont8445 = (decode_clo(env8556))[5];
//not do dummy comment
void* proc = (decode_clo(env8556))[4];
//not do dummy comment
void* cons = (decode_clo(env8556))[3];
//not do dummy comment
void* map = (decode_clo(env8556))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8556))[1];

//creating new closure instance
void** clo8845 = alloc_clo(lam8553_fptr, 3);

//setting env list
clo8845[1] = cons;
clo8845[2] = a8382;
clo8845[3] = kont8445;
void* f8447 = encode_clo(clo8845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8447;
arg_buffer[3] = proc;
arg_buffer[4] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8558))[6];
//not do dummy comment
void* map = (decode_clo(env8558))[5];
//not do dummy comment
void* proc = (decode_clo(env8558))[4];
//not do dummy comment
void* cons = (decode_clo(env8558))[3];
//not do dummy comment
void* lst = (decode_clo(env8558))[2];
//not do dummy comment
void* kont8445 = (decode_clo(env8558))[1];

//creating new closure instance
void** clo8847 = alloc_clo(lam8555_fptr, 5);

//setting env list
clo8847[1] = a8382;
clo8847[2] = map;
clo8847[3] = cons;
clo8847[4] = proc;
clo8847[5] = kont8445;
void* f8448 = encode_clo(clo8847);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8448);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8560))[6];
//not do dummy comment
void* map = (decode_clo(env8560))[5];
//not do dummy comment
void* proc = (decode_clo(env8560))[4];
//not do dummy comment
void* cons = (decode_clo(env8560))[3];
//not do dummy comment
void* lst = (decode_clo(env8560))[2];
//not do dummy comment
void* kont8445 = (decode_clo(env8560))[1];

//creating new closure instance
void** clo8849 = alloc_clo(lam8557_fptr, 6);

//setting env list
clo8849[1] = kont8445;
clo8849[2] = lst;
clo8849[3] = cons;
clo8849[4] = proc;
clo8849[5] = map;
clo8849[6] = cdr;
void* f8449 = encode_clo(clo8849);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8449;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//call next proc using a function pointer
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8562))[8];
//not do dummy comment
void* proc = (decode_clo(env8562))[7];
//not do dummy comment
void* car = (decode_clo(env8562))[6];
//not do dummy comment
void* cons = (decode_clo(env8562))[5];
//not do dummy comment
void* list = (decode_clo(env8562))[4];
//not do dummy comment
void* cdr = (decode_clo(env8562))[3];
//not do dummy comment
void* lst = (decode_clo(env8562))[2];
//not do dummy comment
void* kont8445 = (decode_clo(env8562))[1];

//if-clause
bool if_guard8850 = is_true(a8379);
if(if_guard8850)
{

//creating new closure instance
void** clo8852 = alloc_clo(lam8551_fptr, 1);

//setting env list
clo8852[1] = kont8445;
void* f8446 = encode_clo(clo8852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8854 = alloc_clo(lam8559_fptr, 6);

//setting env list
clo8854[1] = kont8445;
clo8854[2] = lst;
clo8854[3] = cons;
clo8854[4] = proc;
clo8854[5] = map;
clo8854[6] = cdr;
void* f8450 = encode_clo(clo8854);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

}

void* lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8563 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8856 = alloc_clo(lam8561_fptr, 8);

//setting env list
clo8856[1] = kont8445;
clo8856[2] = lst;
clo8856[3] = cdr;
clo8856[4] = list;
clo8856[5] = cons;
clo8856[6] = car;
clo8856[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8856[8] = map;
void* f8451 = encode_clo(clo8856);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8564_fptr() // lam8564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8565 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8452 = (decode_clo(env8565))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8452);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
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
void* kont8452 = (decode_clo(env8567))[3];
//not do dummy comment
void* a8389 = (decode_clo(env8567))[2];
//not do dummy comment
void* cons = (decode_clo(env8567))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8452);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8569))[5];
//not do dummy comment
void* kont8452 = (decode_clo(env8569))[4];
//not do dummy comment
void* a8389 = (decode_clo(env8569))[3];
//not do dummy comment
void* filter = (decode_clo(env8569))[2];
//not do dummy comment
void* cons = (decode_clo(env8569))[1];

//creating new closure instance
void** clo8858 = alloc_clo(lam8566_fptr, 3);

//setting env list
clo8858[1] = cons;
clo8858[2] = a8389;
clo8858[3] = kont8452;
void* f8454 = encode_clo(clo8858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8454;
arg_buffer[3] = op;
arg_buffer[4] = a8390;
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
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8571))[6];
//not do dummy comment
void* lst = (decode_clo(env8571))[5];
//not do dummy comment
void* op = (decode_clo(env8571))[4];
//not do dummy comment
void* kont8452 = (decode_clo(env8571))[3];
//not do dummy comment
void* filter = (decode_clo(env8571))[2];
//not do dummy comment
void* cons = (decode_clo(env8571))[1];

//creating new closure instance
void** clo8860 = alloc_clo(lam8568_fptr, 5);

//setting env list
clo8860[1] = cons;
clo8860[2] = filter;
clo8860[3] = a8389;
clo8860[4] = kont8452;
clo8860[5] = op;
void* f8455 = encode_clo(clo8860);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8455);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8573))[3];
//not do dummy comment
void* kont8452 = (decode_clo(env8573))[2];
//not do dummy comment
void* filter = (decode_clo(env8573))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8452;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8575))[7];
//not do dummy comment
void* lst = (decode_clo(env8575))[6];
//not do dummy comment
void* op = (decode_clo(env8575))[5];
//not do dummy comment
void* kont8452 = (decode_clo(env8575))[4];
//not do dummy comment
void* cons = (decode_clo(env8575))[3];
//not do dummy comment
void* filter = (decode_clo(env8575))[2];
//not do dummy comment
void* car = (decode_clo(env8575))[1];

//if-clause
bool if_guard8861 = is_true(a8388);
if(if_guard8861)
{

//creating new closure instance
void** clo8863 = alloc_clo(lam8570_fptr, 6);

//setting env list
clo8863[1] = cons;
clo8863[2] = filter;
clo8863[3] = kont8452;
clo8863[4] = op;
clo8863[5] = lst;
clo8863[6] = cdr;
void* f8456 = encode_clo(clo8863);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8456);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8865 = alloc_clo(lam8572_fptr, 3);

//setting env list
clo8865[1] = filter;
clo8865[2] = kont8452;
clo8865[3] = op;
void* f8457 = encode_clo(clo8865);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8457);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8457))[0]);
function_ptr();
return nullptr;
}

}

void* lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void* lam8576_fptr() // lam8576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8577 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8577))[7];
//not do dummy comment
void* lst = (decode_clo(env8577))[6];
//not do dummy comment
void* op = (decode_clo(env8577))[5];
//not do dummy comment
void* kont8452 = (decode_clo(env8577))[4];
//not do dummy comment
void* cons = (decode_clo(env8577))[3];
//not do dummy comment
void* filter = (decode_clo(env8577))[2];
//not do dummy comment
void* car = (decode_clo(env8577))[1];

//creating new closure instance
void** clo8867 = alloc_clo(lam8574_fptr, 7);

//setting env list
clo8867[1] = car;
clo8867[2] = filter;
clo8867[3] = cons;
clo8867[4] = kont8452;
clo8867[5] = op;
clo8867[6] = lst;
clo8867[7] = cdr;
void* f8458 = encode_clo(clo8867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8458;
arg_buffer[3] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8576 = encode_clo(alloc_clo(lam8576_fptr, 0));

void* lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8579))[8];
//not do dummy comment
void* op = (decode_clo(env8579))[7];
//not do dummy comment
void* kont8452 = (decode_clo(env8579))[6];
//not do dummy comment
void* cons = (decode_clo(env8579))[5];
//not do dummy comment
void* list = (decode_clo(env8579))[4];
//not do dummy comment
void* cdr = (decode_clo(env8579))[3];
//not do dummy comment
void* filter = (decode_clo(env8579))[2];
//not do dummy comment
void* car = (decode_clo(env8579))[1];

//if-clause
bool if_guard8868 = is_true(a8385);
if(if_guard8868)
{

//creating new closure instance
void** clo8870 = alloc_clo(lam8564_fptr, 1);

//setting env list
clo8870[1] = kont8452;
void* f8453 = encode_clo(clo8870);



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
void** clo8872 = alloc_clo(lam8576_fptr, 7);

//setting env list
clo8872[1] = car;
clo8872[2] = filter;
clo8872[3] = cons;
clo8872[4] = kont8452;
clo8872[5] = op;
clo8872[6] = lst;
clo8872[7] = cdr;
void* f8459 = encode_clo(clo8872);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
return nullptr;
}

}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8580 = arg_buffer[1];
//reading env and args
void* kont8452 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8874 = alloc_clo(lam8578_fptr, 8);

//setting env list
clo8874[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8874[2] = filter;
clo8874[3] = cdr;
clo8874[4] = list;
clo8874[5] = cons;
clo8874[6] = kont8452;
clo8874[7] = op;
clo8874[8] = lst;
void* f8460 = encode_clo(clo8874);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8460);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

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
void* a8395 = (decode_clo(env8582))[3];
//not do dummy comment
void* kont8461 = (decode_clo(env8582))[2];
//not do dummy comment
void* drop = (decode_clo(env8582))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8461;
arg_buffer[3] = a8395;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void* lam8584_fptr() // lam8584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8585 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env8585))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8585))[3];
//not do dummy comment
void* kont8461 = (decode_clo(env8585))[2];
//not do dummy comment
void* drop = (decode_clo(env8585))[1];
mpz_t* mpzvar8875 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8875, "1", 10);
void* a8396 = encode_mpz(mpzvar8875);

//creating new closure instance
void** clo8877 = alloc_clo(lam8581_fptr, 3);

//setting env list
clo8877[1] = drop;
clo8877[2] = kont8461;
clo8877[3] = a8395;
void* f8462 = encode_clo(clo8877);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8462);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8587))[6];
//not do dummy comment
void* n = (decode_clo(env8587))[5];
//not do dummy comment
void* _u45 = (decode_clo(env8587))[4];
//not do dummy comment
void* lst = (decode_clo(env8587))[3];
//not do dummy comment
void* kont8461 = (decode_clo(env8587))[2];
//not do dummy comment
void* drop = (decode_clo(env8587))[1];

//if-clause
bool if_guard8878 = is_true(a8394);
if(if_guard8878)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8461);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8461))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8880 = alloc_clo(lam8584_fptr, 4);

//setting env list
clo8880[1] = drop;
clo8880[2] = kont8461;
clo8880[3] = _u45;
clo8880[4] = n;
void* f8463 = encode_clo(clo8880);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8463);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8463))[0]);
function_ptr();
return nullptr;
}

}

void* lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8589 = arg_buffer[1];
//reading env and args
void* kont8461 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8881, "0", 10);
void* a8393 = encode_mpz(mpzvar8881);

//creating new closure instance
void** clo8883 = alloc_clo(lam8586_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8883[1] = drop;
clo8883[2] = kont8461;
clo8883[3] = lst;
clo8883[4] = _u45;
clo8883[5] = n;
clo8883[6] = cdr;
void* f8464 = encode_clo(clo8883);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

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
void* a8399 = (decode_clo(env8591))[3];
//not do dummy comment
void* kont8465 = (decode_clo(env8591))[2];
//not do dummy comment
void* proc = (decode_clo(env8591))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8465;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8593))[5];
//not do dummy comment
void* a8399 = (decode_clo(env8593))[4];
//not do dummy comment
void* kont8465 = (decode_clo(env8593))[3];
//not do dummy comment
void* proc = (decode_clo(env8593))[2];
//not do dummy comment
void* acc = (decode_clo(env8593))[1];

//creating new closure instance
void** clo8885 = alloc_clo(lam8590_fptr, 3);

//setting env list
clo8885[1] = proc;
clo8885[2] = kont8465;
clo8885[3] = a8399;
void* f8466 = encode_clo(clo8885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8466;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8595))[6];
//not do dummy comment
void* kont8465 = (decode_clo(env8595))[5];
//not do dummy comment
void* foldr = (decode_clo(env8595))[4];
//not do dummy comment
void* lst = (decode_clo(env8595))[3];
//not do dummy comment
void* proc = (decode_clo(env8595))[2];
//not do dummy comment
void* acc = (decode_clo(env8595))[1];

//creating new closure instance
void** clo8887 = alloc_clo(lam8592_fptr, 5);

//setting env list
clo8887[1] = acc;
clo8887[2] = proc;
clo8887[3] = kont8465;
clo8887[4] = a8399;
clo8887[5] = foldr;
void* f8467 = encode_clo(clo8887);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8597))[7];
//not do dummy comment
void* kont8465 = (decode_clo(env8597))[6];
//not do dummy comment
void* car = (decode_clo(env8597))[5];
//not do dummy comment
void* foldr = (decode_clo(env8597))[4];
//not do dummy comment
void* lst = (decode_clo(env8597))[3];
//not do dummy comment
void* proc = (decode_clo(env8597))[2];
//not do dummy comment
void* acc = (decode_clo(env8597))[1];

//if-clause
bool if_guard8888 = is_true(a8398);
if(if_guard8888)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8465);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8465))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8890 = alloc_clo(lam8594_fptr, 6);

//setting env list
clo8890[1] = acc;
clo8890[2] = proc;
clo8890[3] = lst;
clo8890[4] = foldr;
clo8890[5] = kont8465;
clo8890[6] = cdr;
void* f8468 = encode_clo(clo8890);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
function_ptr();
return nullptr;
}

}

void* lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8598 = arg_buffer[1];
//reading env and args
void* kont8465 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8892 = alloc_clo(lam8596_fptr, 7);

//setting env list
clo8892[1] = acc;
clo8892[2] = proc;
clo8892[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8892[4] = foldr;
clo8892[5] = car;
clo8892[6] = kont8465;
clo8892[7] = cdr;
void* f8469 = encode_clo(clo8892);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

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
void* a8403 = (decode_clo(env8600))[3];
//not do dummy comment
void* kont8470 = (decode_clo(env8600))[2];
//not do dummy comment
void* cons = (decode_clo(env8600))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8470);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8470))[0]);
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
void* append = (decode_clo(env8602))[5];
//not do dummy comment
void* a8403 = (decode_clo(env8602))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8602))[3];
//not do dummy comment
void* kont8470 = (decode_clo(env8602))[2];
//not do dummy comment
void* cons = (decode_clo(env8602))[1];

//creating new closure instance
void** clo8894 = alloc_clo(lam8599_fptr, 3);

//setting env list
clo8894[1] = cons;
clo8894[2] = kont8470;
clo8894[3] = a8403;
void* f8471 = encode_clo(clo8894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8471;
arg_buffer[3] = a8404;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8604))[6];
//not do dummy comment
void* append = (decode_clo(env8604))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8604))[4];
//not do dummy comment
void* cons = (decode_clo(env8604))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8604))[2];
//not do dummy comment
void* kont8470 = (decode_clo(env8604))[1];

//creating new closure instance
void** clo8896 = alloc_clo(lam8601_fptr, 5);

//setting env list
clo8896[1] = cons;
clo8896[2] = kont8470;
clo8896[3] = lst2;
clo8896[4] = a8403;
clo8896[5] = append;
void* f8472 = encode_clo(clo8896);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8472);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8606))[7];
//not do dummy comment
void* append = (decode_clo(env8606))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8606))[5];
//not do dummy comment
void* cons = (decode_clo(env8606))[4];
//not do dummy comment
void* car = (decode_clo(env8606))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8606))[2];
//not do dummy comment
void* kont8470 = (decode_clo(env8606))[1];

//if-clause
bool if_guard8897 = is_true(a8402);
if(if_guard8897)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8470);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8470))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8899 = alloc_clo(lam8603_fptr, 6);

//setting env list
clo8899[1] = kont8470;
clo8899[2] = lst1;
clo8899[3] = cons;
clo8899[4] = lst2;
clo8899[5] = append;
clo8899[6] = cdr;
void* f8473 = encode_clo(clo8899);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}

}

void* lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8607 = arg_buffer[1];
//reading env and args
void* kont8470 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8901 = alloc_clo(lam8605_fptr, 7);

//setting env list
clo8901[1] = kont8470;
clo8901[2] = lst1;
clo8901[3] = car;
clo8901[4] = cons;
clo8901[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8901[6] = append;
clo8901[7] = cdr;
void* f8474 = encode_clo(clo8901);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8608_fptr() // lam8608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8609 = arg_buffer[1];
//reading env and args
void* a8408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8475 = (decode_clo(env8609))[2];
//not do dummy comment
void* expt = (decode_clo(env8609))[1];
void* cps_u45lst8476 = prim_cons(kont8475, a8408);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(expt);
arg_buffer[2] = cps_u45lst8476;
arg_buffer[0] = reinterpret_cast<void*>(2);
expt_fptr();
return nullptr;
}

void* lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8612 = arg_buffer[1];
//reading env and args
void* kont8475 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar8902 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8902, "2.5", 10);
void* a8406 = encode_mpf(mpfvar8902);
mpf_t* mpfvar8903 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8903, "3.9", 10);
void* a8407 = encode_mpf(mpfvar8903);

//creating new closure instance
void** clo8905 = alloc_clo(lam8608_fptr, 2);

//setting env list
clo8905[1] = expt;
clo8905[2] = kont8475;
void* f8477 = encode_clo(clo8905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8477;
arg_buffer[3] = a8406;
arg_buffer[4] = a8407;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8613_fptr() // lam8613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8614 = arg_buffer[1];
//reading env and args
void* xy8409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8478 = (decode_clo(env8614))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8478);
arg_buffer[2] = xy8409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8478))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8613 = encode_clo(alloc_clo(lam8613_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8615 = arg_buffer[1];
//reading env and args
void* kont8478 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8907 = alloc_clo(lam8613_fptr, 1);

//setting env list
clo8907[1] = kont8478;
void* f8479 = encode_clo(clo8907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8479;
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

