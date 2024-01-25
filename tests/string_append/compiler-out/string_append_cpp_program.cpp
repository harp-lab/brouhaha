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
void* x8621 = apply_prim__u43(lst8623);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8620);
arg_buffer[2] = x8621;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8620))[0]);
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
void* x8625 = apply_prim__u45(lst8627);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8624);
arg_buffer[2] = x8625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8624))[0]);
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
void* x8629 = apply_prim__u42(lst8631);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8628);
arg_buffer[2] = x8629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8628))[0]);
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
void* x8633 = apply_prim__u47(lst8635);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8632);
arg_buffer[2] = x8633;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8632))[0]);
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
void* x8637 = apply_prim__u61(lst8639);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8636);
arg_buffer[2] = x8637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8636))[0]);
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
void* x8641 = apply_prim__u62(lst8643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8640);
arg_buffer[2] = x8641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8640))[0]);
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
void* x8645 = apply_prim__u60(lst8647);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8644);
arg_buffer[2] = x8645;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8644))[0]);
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
void* x8649 = apply_prim__u60_u61(lst8651);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8648);
arg_buffer[2] = x8649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8648))[0]);
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
void* x8653 = apply_prim__u62_u61(lst8655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8652);
arg_buffer[2] = x8653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8652))[0]);
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
void* x8657 = apply_prim_modulo(lst8659);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8656);
arg_buffer[2] = x8657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8656))[0]);
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
void* x8661 = apply_prim_null_u63(lst8663);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8660);
arg_buffer[2] = x8661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8660))[0]);
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
void* x8665 = apply_prim_equal_u63(lst8667);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8664);
arg_buffer[2] = x8665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8664))[0]);
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
void* x8669 = apply_prim_eq_u63(lst8671);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8668);
arg_buffer[2] = x8669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8668))[0]);
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
void* x8673 = apply_prim_exact_u45floor(lst8675);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8672);
arg_buffer[2] = x8673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8672))[0]);
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
void* x8677 = apply_prim_exact_u45ceiling(lst8679);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8676);
arg_buffer[2] = x8677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8676))[0]);
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
void* x8681 = apply_prim_exact_u45round(lst8683);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8680);
arg_buffer[2] = x8681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8680))[0]);
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
void* x8685 = apply_prim_cons(lst8687);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8684);
arg_buffer[2] = x8685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8684))[0]);
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
void* x8689 = apply_prim_car(lst8691);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8688);
arg_buffer[2] = x8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
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
void* x8693 = apply_prim_cdr(lst8695);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8692);
arg_buffer[2] = x8693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8692))[0]);
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
void* x8697 = apply_prim_float_u45_u62int(lst8699);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8696);
arg_buffer[2] = x8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8696))[0]);
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
void* x8701 = apply_prim_int_u45_u62float(lst8703);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8700);
arg_buffer[2] = x8701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8700))[0]);
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
void* x8705 = apply_prim_hash(lst8707);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8704);
arg_buffer[2] = x8705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
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
void* x8709 = apply_prim_hash_u45ref(lst8711);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8708);
arg_buffer[2] = x8709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
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
void* x8713 = apply_prim_hash_u45set(lst8715);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8712);
arg_buffer[2] = x8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
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
void* x8717 = apply_prim_hash_u45keys(lst8719);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8716);
arg_buffer[2] = x8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
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
void* x8721 = apply_prim_hash_u45has_u45key_u63(lst8723);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8720);
arg_buffer[2] = x8721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
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
void* x8725 = apply_prim_hash_u45count(lst8727);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8724);
arg_buffer[2] = x8725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
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
void* x8729 = apply_prim_set(lst8731);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8728);
arg_buffer[2] = x8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
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
void* x8733 = apply_prim_set_u45_u62list(lst8735);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8732);
arg_buffer[2] = x8733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
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
void* x8737 = apply_prim_list_u45_u62set(lst8739);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8736);
arg_buffer[2] = x8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
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
void* x8741 = apply_prim_set_u45add(lst8743);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8740);
arg_buffer[2] = x8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8740))[0]);
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
void* x8745 = apply_prim_string_u63(lst8747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8744);
arg_buffer[2] = x8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8744))[0]);
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
void* x8749 = apply_prim_string_u45length(lst8751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8748);
arg_buffer[2] = x8749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8748))[0]);
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
void* x8753 = apply_prim_string_u45ref(lst8755);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8752);
arg_buffer[2] = x8753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8752))[0]);
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
void* x8757 = apply_prim_substring(lst8759);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8756);
arg_buffer[2] = x8757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8756))[0]);
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
void* x8761 = apply_prim_string_u45append(lst8763);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8760);
arg_buffer[2] = x8761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8760))[0]);
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
void* x8765 = apply_prim_string_u45_u62list(lst8767);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8764);
arg_buffer[2] = x8765;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8764))[0]);
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

void* kont8412 = prim_car(x);
void* x8482 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8412);
arg_buffer[2] = x8482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8412))[0]);
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
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8413 = (decode_clo(env8485))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8485))[2];
//not do dummy comment
void* a8344 = (decode_clo(env8485))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8344, a8346);
arg_buffer[1]=reinterpret_cast<void*>(kont8413);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8413))[0]);
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
void* kont8413 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8768, "0", 10);
void* a8344 = encode_mpz(mpzvar8768);
mpz_t* mpzvar8769 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8769, "2", 10);
void* a8345 = encode_mpz(mpzvar8769);

//creating new closure instance
void** clo8771 = alloc_clo(lam8484_fptr, 3);

//setting env list
clo8771[1] = a8344;
clo8771[2] = equal_u63;
clo8771[3] = kont8413;
void* f8414 = encode_clo(clo8771);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8345);
arg_buffer[1]=reinterpret_cast<void*>(f8414);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8414))[0]);
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
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8347 = (decode_clo(env8490))[3];
//not do dummy comment
void* kont8415 = (decode_clo(env8490))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8490))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8347, a8349);
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
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
void* kont8415 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8772 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8772, "1", 10);
void* a8347 = encode_mpz(mpzvar8772);
mpz_t* mpzvar8773 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8773, "2", 10);
void* a8348 = encode_mpz(mpzvar8773);

//creating new closure instance
void** clo8775 = alloc_clo(lam8489_fptr, 3);

//setting env list
clo8775[1] = equal_u63;
clo8775[2] = kont8415;
clo8775[3] = a8347;
void* f8416 = encode_clo(clo8775);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8348);
arg_buffer[1]=reinterpret_cast<void*>(f8416);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8416))[0]);
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
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8497))[3];
//not do dummy comment
void* x = (decode_clo(env8497))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8417;
arg_buffer[3] = x;
arg_buffer[4] = a8355;
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
void* a8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8499))[5];
//not do dummy comment
void* lst = (decode_clo(env8499))[4];
//not do dummy comment
void* kont8417 = (decode_clo(env8499))[3];
//not do dummy comment
void* x = (decode_clo(env8499))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8499))[1];

//if-clause
bool if_guard8776 = is_true(a8353);
if(if_guard8776)
{
void* xy8354 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8417);
arg_buffer[2] = xy8354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8778 = alloc_clo(lam8496_fptr, 3);

//setting env list
clo8778[1] = member_u63;
clo8778[2] = x;
clo8778[3] = kont8417;
void* f8418 = encode_clo(clo8778);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8418);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8418))[0]);
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
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8501))[6];
//not do dummy comment
void* lst = (decode_clo(env8501))[5];
//not do dummy comment
void* x = (decode_clo(env8501))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8501))[3];
//not do dummy comment
void* kont8417 = (decode_clo(env8501))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8501))[1];

//creating new closure instance
void** clo8780 = alloc_clo(lam8498_fptr, 5);

//setting env list
clo8780[1] = member_u63;
clo8780[2] = x;
clo8780[3] = kont8417;
clo8780[4] = lst;
clo8780[5] = cdr;
void* f8419 = encode_clo(clo8780);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8352, x);
arg_buffer[1]=reinterpret_cast<void*>(f8419);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
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
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8503))[7];
//not do dummy comment
void* lst = (decode_clo(env8503))[6];
//not do dummy comment
void* x = (decode_clo(env8503))[5];
//not do dummy comment
void* car = (decode_clo(env8503))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8503))[3];
//not do dummy comment
void* kont8417 = (decode_clo(env8503))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8503))[1];

//if-clause
bool if_guard8781 = is_true(a8350);
if(if_guard8781)
{
void* xy8351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8417);
arg_buffer[2] = xy8351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8783 = alloc_clo(lam8500_fptr, 6);

//setting env list
clo8783[1] = equal_u63;
clo8783[2] = kont8417;
clo8783[3] = member_u63;
clo8783[4] = x;
clo8783[5] = lst;
clo8783[6] = cdr;
void* f8420 = encode_clo(clo8783);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8420);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8420))[0]);
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
void* kont8417 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8785 = alloc_clo(lam8502_fptr, 7);

//setting env list
clo8785[1] = equal_u63;
clo8785[2] = kont8417;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8785[3] = member_u63;
clo8785[4] = car;
clo8785[5] = x;
clo8785[6] = lst;
clo8785[7] = cdr;
void* f8421 = encode_clo(clo8785);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8421);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8421))[0]);
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
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8506))[4];
//not do dummy comment
void* foldl = (decode_clo(env8506))[3];
//not do dummy comment
void* a8358 = (decode_clo(env8506))[2];
//not do dummy comment
void* kont8422 = (decode_clo(env8506))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8422;
arg_buffer[3] = fun;
arg_buffer[4] = a8358;
arg_buffer[5] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8508))[5];
//not do dummy comment
void* lst = (decode_clo(env8508))[4];
//not do dummy comment
void* fun = (decode_clo(env8508))[3];
//not do dummy comment
void* kont8422 = (decode_clo(env8508))[2];
//not do dummy comment
void* foldl = (decode_clo(env8508))[1];

//creating new closure instance
void** clo8787 = alloc_clo(lam8505_fptr, 4);

//setting env list
clo8787[1] = kont8422;
clo8787[2] = a8358;
clo8787[3] = foldl;
clo8787[4] = fun;
void* f8423 = encode_clo(clo8787);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8423);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8423))[0]);
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
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8510))[6];
//not do dummy comment
void* lst = (decode_clo(env8510))[5];
//not do dummy comment
void* fun = (decode_clo(env8510))[4];
//not do dummy comment
void* acc = (decode_clo(env8510))[3];
//not do dummy comment
void* kont8422 = (decode_clo(env8510))[2];
//not do dummy comment
void* foldl = (decode_clo(env8510))[1];

//creating new closure instance
void** clo8789 = alloc_clo(lam8507_fptr, 5);

//setting env list
clo8789[1] = foldl;
clo8789[2] = kont8422;
clo8789[3] = fun;
clo8789[4] = lst;
clo8789[5] = cdr;
void* f8424 = encode_clo(clo8789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8424;
arg_buffer[3] = a8357;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8512))[7];
//not do dummy comment
void* lst = (decode_clo(env8512))[6];
//not do dummy comment
void* fun = (decode_clo(env8512))[5];
//not do dummy comment
void* acc = (decode_clo(env8512))[4];
//not do dummy comment
void* foldl = (decode_clo(env8512))[3];
//not do dummy comment
void* kont8422 = (decode_clo(env8512))[2];
//not do dummy comment
void* car = (decode_clo(env8512))[1];

//if-clause
bool if_guard8790 = is_true(a8356);
if(if_guard8790)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8422);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8422))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8792 = alloc_clo(lam8509_fptr, 6);

//setting env list
clo8792[1] = foldl;
clo8792[2] = kont8422;
clo8792[3] = acc;
clo8792[4] = fun;
clo8792[5] = lst;
clo8792[6] = cdr;
void* f8425 = encode_clo(clo8792);



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

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8513 = arg_buffer[1];
//reading env and args
void* kont8422 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8794 = alloc_clo(lam8511_fptr, 7);

//setting env list
clo8794[1] = car;
clo8794[2] = kont8422;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8794[3] = foldl;
clo8794[4] = acc;
clo8794[5] = fun;
clo8794[6] = lst;
clo8794[7] = cdr;
void* f8426 = encode_clo(clo8794);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

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
void* a8361 = (decode_clo(env8515))[3];
//not do dummy comment
void* kont8427 = (decode_clo(env8515))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8515))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8427;
arg_buffer[3] = a8361;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8361 = (decode_clo(env8517))[5];
//not do dummy comment
void* kont8427 = (decode_clo(env8517))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8517))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8517))[2];
//not do dummy comment
void* cons = (decode_clo(env8517))[1];

//creating new closure instance
void** clo8796 = alloc_clo(lam8514_fptr, 3);

//setting env list
clo8796[1] = reverse_u45helper;
clo8796[2] = kont8427;
clo8796[3] = a8361;
void* f8428 = encode_clo(clo8796);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8362, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(2);
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
void* kont8427 = (decode_clo(env8519))[6];
//not do dummy comment
void* lst = (decode_clo(env8519))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8519))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8519))[3];
//not do dummy comment
void* car = (decode_clo(env8519))[2];
//not do dummy comment
void* cons = (decode_clo(env8519))[1];

//creating new closure instance
void** clo8798 = alloc_clo(lam8516_fptr, 5);

//setting env list
clo8798[1] = cons;
clo8798[2] = lst2;
clo8798[3] = reverse_u45helper;
clo8798[4] = kont8427;
clo8798[5] = a8361;
void* f8429 = encode_clo(clo8798);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
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
void* reverse_u45helper = (decode_clo(env8521))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8521))[3];
//not do dummy comment
void* car = (decode_clo(env8521))[2];
//not do dummy comment
void* cons = (decode_clo(env8521))[1];

//if-clause
bool if_guard8799 = is_true(a8360);
if(if_guard8799)
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
void** clo8801 = alloc_clo(lam8518_fptr, 6);

//setting env list
clo8801[1] = cons;
clo8801[2] = car;
clo8801[3] = lst2;
clo8801[4] = reverse_u45helper;
clo8801[5] = lst;
clo8801[6] = kont8427;
void* f8430 = encode_clo(clo8801);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8430);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8430))[0]);
function_ptr();
return nullptr;
}

}

void* lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8522 = arg_buffer[1];
//reading env and args
void* kont8427 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8803 = alloc_clo(lam8520_fptr, 7);

//setting env list
clo8803[1] = cons;
clo8803[2] = car;
clo8803[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8803[4] = reverse_u45helper;
clo8803[5] = lst;
clo8803[6] = kont8427;
clo8803[7] = cdr;
void* f8431 = encode_clo(clo8803);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8523_fptr() // lam8523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8524))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8524))[2];
//not do dummy comment
void* kont8432 = (decode_clo(env8524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8432;
arg_buffer[3] = lst;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8523 = encode_clo(alloc_clo(lam8523_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8525 = arg_buffer[1];
//reading env and args
void* kont8432 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8805 = alloc_clo(lam8523_fptr, 3);

//setting env list
clo8805[1] = kont8432;
clo8805[2] = reverse_u45helper;
clo8805[3] = lst;
void* f8433 = encode_clo(clo8805);



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

void* lam8526_fptr() // lam8526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8527 = arg_buffer[1];
//reading env and args
void* xy8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8434 = (decode_clo(env8527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8434);
arg_buffer[2] = xy8367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8434))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8368 = (decode_clo(env8529))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8529))[3];
//not do dummy comment
void* a8370 = (decode_clo(env8529))[2];
//not do dummy comment
void* kont8434 = (decode_clo(env8529))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8434;
arg_buffer[3] = a8368;
arg_buffer[4] = a8370;
arg_buffer[5] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8368 = (decode_clo(env8531))[6];
//not do dummy comment
void* cons = (decode_clo(env8531))[5];
//not do dummy comment
void* a8370 = (decode_clo(env8531))[4];
//not do dummy comment
void* kont8434 = (decode_clo(env8531))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8531))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8531))[1];

//creating new closure instance
void** clo8807 = alloc_clo(lam8528_fptr, 4);

//setting env list
clo8807[1] = kont8434;
clo8807[2] = a8370;
clo8807[3] = take_u45helper;
clo8807[4] = a8368;
void* f8436 = encode_clo(clo8807);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8371, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8533))[7];
//not do dummy comment
void* a8368 = (decode_clo(env8533))[6];
//not do dummy comment
void* kont8434 = (decode_clo(env8533))[5];
//not do dummy comment
void* car = (decode_clo(env8533))[4];
//not do dummy comment
void* cons = (decode_clo(env8533))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8533))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8533))[1];

//creating new closure instance
void** clo8809 = alloc_clo(lam8530_fptr, 6);

//setting env list
clo8809[1] = lst2;
clo8809[2] = take_u45helper;
clo8809[3] = kont8434;
clo8809[4] = a8370;
clo8809[5] = cons;
clo8809[6] = a8368;
void* f8437 = encode_clo(clo8809);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8437);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8437))[0]);
function_ptr();
return nullptr;
}

void* lam8532 = encode_clo(alloc_clo(lam8532_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8536))[8];
//not do dummy comment
void* kont8434 = (decode_clo(env8536))[7];
//not do dummy comment
void* cons = (decode_clo(env8536))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8536))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8536))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8536))[3];
//not do dummy comment
void* n = (decode_clo(env8536))[2];
//not do dummy comment
void* car = (decode_clo(env8536))[1];
mpz_t* mpzvar8810 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8810, "1", 10);
void* a8369 = encode_mpz(mpzvar8810);

//creating new closure instance
void** clo8812 = alloc_clo(lam8532_fptr, 7);

//setting env list
clo8812[1] = lst2;
clo8812[2] = take_u45helper;
clo8812[3] = cons;
clo8812[4] = car;
clo8812[5] = kont8434;
clo8812[6] = a8368;
clo8812[7] = lst;
void* f8438 = encode_clo(clo8812);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8369);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8538))[10];
//not do dummy comment
void* lst = (decode_clo(env8538))[9];
//not do dummy comment
void* reverse = (decode_clo(env8538))[8];
//not do dummy comment
void* kont8434 = (decode_clo(env8538))[7];
//not do dummy comment
void* cons = (decode_clo(env8538))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8538))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8538))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8538))[3];
//not do dummy comment
void* n = (decode_clo(env8538))[2];
//not do dummy comment
void* car = (decode_clo(env8538))[1];

//if-clause
bool if_guard8813 = is_true(a8366);
if(if_guard8813)
{

//creating new closure instance
void** clo8815 = alloc_clo(lam8526_fptr, 1);

//setting env list
clo8815[1] = kont8434;
void* f8435 = encode_clo(clo8815);



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
void** clo8817 = alloc_clo(lam8535_fptr, 8);

//setting env list
clo8817[1] = car;
clo8817[2] = n;
clo8817[3] = lst2;
clo8817[4] = take_u45helper;
clo8817[5] = _u45;
clo8817[6] = cons;
clo8817[7] = kont8434;
clo8817[8] = lst;
void* f8439 = encode_clo(clo8817);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
function_ptr();
return nullptr;
}

}

void* lam8537 = encode_clo(alloc_clo(lam8537_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8540 = arg_buffer[1];
//reading env and args
void* kont8434 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8818 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8818, "0", 10);
void* a8365 = encode_mpz(mpzvar8818);

//creating new closure instance
void** clo8820 = alloc_clo(lam8537_fptr, 10);

//setting env list
clo8820[1] = car;
clo8820[2] = n;
clo8820[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8820[4] = take_u45helper;
clo8820[5] = _u45;
clo8820[6] = cons;
clo8820[7] = kont8434;
clo8820[8] = reverse;
clo8820[9] = lst;
clo8820[10] = cdr;
void* f8440 = encode_clo(clo8820);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8365);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8541_fptr() // lam8541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8542 = arg_buffer[1];
//reading env and args
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8441 = (decode_clo(env8542))[4];
//not do dummy comment
void* lst = (decode_clo(env8542))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8542))[2];
//not do dummy comment
void* n = (decode_clo(env8542))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8441;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8541 = encode_clo(alloc_clo(lam8541_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8543 = arg_buffer[1];
//reading env and args
void* kont8441 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8822 = alloc_clo(lam8541_fptr, 4);

//setting env list
clo8822[1] = n;
clo8822[2] = take_u45helper;
clo8822[3] = lst;
clo8822[4] = kont8441;
void* f8442 = encode_clo(clo8822);



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

void* lam8545_fptr() // lam8545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8546 = arg_buffer[1];
//reading env and args
void* a8378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8443 = (decode_clo(env8546))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8546))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8546))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8376, a8378);
arg_buffer[1]=reinterpret_cast<void*>(kont8443);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
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
void* a8377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8443 = (decode_clo(env8548))[4];
//not do dummy comment
void* length = (decode_clo(env8548))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8548))[2];
//not do dummy comment
void* a8376 = (decode_clo(env8548))[1];

//creating new closure instance
void** clo8824 = alloc_clo(lam8545_fptr, 3);

//setting env list
clo8824[1] = a8376;
clo8824[2] = _u43;
clo8824[3] = kont8443;
void* f8444 = encode_clo(clo8824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8444;
arg_buffer[3] = a8377;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8547 = encode_clo(alloc_clo(lam8547_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8551))[5];
//not do dummy comment
void* kont8443 = (decode_clo(env8551))[4];
//not do dummy comment
void* lst = (decode_clo(env8551))[3];
//not do dummy comment
void* length = (decode_clo(env8551))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8551))[1];

//if-clause
bool if_guard8825 = is_true(a8374);
if(if_guard8825)
{
mpz_t* mpzvar8826 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8826, "0", 10);
void* xy8375 = encode_mpz(mpzvar8826);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8443);
arg_buffer[2] = xy8375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8827 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8827, "1", 10);
void* a8376 = encode_mpz(mpzvar8827);

//creating new closure instance
void** clo8829 = alloc_clo(lam8547_fptr, 4);

//setting env list
clo8829[1] = a8376;
clo8829[2] = _u43;
clo8829[3] = length;
clo8829[4] = kont8443;
void* f8445 = encode_clo(clo8829);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
function_ptr();
return nullptr;
}

}

void* lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8552 = arg_buffer[1];
//reading env and args
void* kont8443 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8831 = alloc_clo(lam8550_fptr, 5);

//setting env list
clo8831[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8831[2] = length;
clo8831[3] = lst;
clo8831[4] = kont8443;
clo8831[5] = cdr;
void* f8446 = encode_clo(clo8831);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8446);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8553_fptr() // lam8553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8554 = arg_buffer[1];
//reading env and args
void* xy8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8447 = (decode_clo(env8554))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[2] = xy8380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
//call next proc using a function pointer
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8382 = (decode_clo(env8556))[3];
//not do dummy comment
void* kont8447 = (decode_clo(env8556))[2];
//not do dummy comment
void* cons = (decode_clo(env8556))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8382, a8384);
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8447 = (decode_clo(env8558))[5];
//not do dummy comment
void* proc = (decode_clo(env8558))[4];
//not do dummy comment
void* cons = (decode_clo(env8558))[3];
//not do dummy comment
void* map = (decode_clo(env8558))[2];
//not do dummy comment
void* a8382 = (decode_clo(env8558))[1];

//creating new closure instance
void** clo8833 = alloc_clo(lam8555_fptr, 3);

//setting env list
clo8833[1] = cons;
clo8833[2] = kont8447;
clo8833[3] = a8382;
void* f8449 = encode_clo(clo8833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8449;
arg_buffer[3] = proc;
arg_buffer[4] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8560))[6];
//not do dummy comment
void* lst = (decode_clo(env8560))[5];
//not do dummy comment
void* map = (decode_clo(env8560))[4];
//not do dummy comment
void* kont8447 = (decode_clo(env8560))[3];
//not do dummy comment
void* proc = (decode_clo(env8560))[2];
//not do dummy comment
void* cons = (decode_clo(env8560))[1];

//creating new closure instance
void** clo8835 = alloc_clo(lam8557_fptr, 5);

//setting env list
clo8835[1] = a8382;
clo8835[2] = map;
clo8835[3] = cons;
clo8835[4] = proc;
clo8835[5] = kont8447;
void* f8450 = encode_clo(clo8835);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8562))[6];
//not do dummy comment
void* lst = (decode_clo(env8562))[5];
//not do dummy comment
void* map = (decode_clo(env8562))[4];
//not do dummy comment
void* kont8447 = (decode_clo(env8562))[3];
//not do dummy comment
void* proc = (decode_clo(env8562))[2];
//not do dummy comment
void* cons = (decode_clo(env8562))[1];

//creating new closure instance
void** clo8837 = alloc_clo(lam8559_fptr, 6);

//setting env list
clo8837[1] = cons;
clo8837[2] = proc;
clo8837[3] = kont8447;
clo8837[4] = map;
clo8837[5] = lst;
clo8837[6] = cdr;
void* f8451 = encode_clo(clo8837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8451;
arg_buffer[3] = a8381;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8564))[8];
//not do dummy comment
void* map = (decode_clo(env8564))[7];
//not do dummy comment
void* kont8447 = (decode_clo(env8564))[6];
//not do dummy comment
void* proc = (decode_clo(env8564))[5];
//not do dummy comment
void* car = (decode_clo(env8564))[4];
//not do dummy comment
void* cons = (decode_clo(env8564))[3];
//not do dummy comment
void* list = (decode_clo(env8564))[2];
//not do dummy comment
void* cdr = (decode_clo(env8564))[1];

//if-clause
bool if_guard8838 = is_true(a8379);
if(if_guard8838)
{

//creating new closure instance
void** clo8840 = alloc_clo(lam8553_fptr, 1);

//setting env list
clo8840[1] = kont8447;
void* f8448 = encode_clo(clo8840);



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
void** clo8842 = alloc_clo(lam8561_fptr, 6);

//setting env list
clo8842[1] = cons;
clo8842[2] = proc;
clo8842[3] = kont8447;
clo8842[4] = map;
clo8842[5] = lst;
clo8842[6] = cdr;
void* f8452 = encode_clo(clo8842);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8452);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8452))[0]);
function_ptr();
return nullptr;
}

}

void* lam8563 = encode_clo(alloc_clo(lam8563_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8565 = arg_buffer[1];
//reading env and args
void* kont8447 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8844 = alloc_clo(lam8563_fptr, 8);

//setting env list
clo8844[1] = cdr;
clo8844[2] = list;
clo8844[3] = cons;
clo8844[4] = car;
clo8844[5] = proc;
clo8844[6] = kont8447;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8844[7] = map;
clo8844[8] = lst;
void* f8453 = encode_clo(clo8844);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8453))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8566_fptr() // lam8566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8567 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8454 = (decode_clo(env8567))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8454);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8389 = (decode_clo(env8569))[3];
//not do dummy comment
void* kont8454 = (decode_clo(env8569))[2];
//not do dummy comment
void* cons = (decode_clo(env8569))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8389, a8391);
arg_buffer[1]=reinterpret_cast<void*>(kont8454);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
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
void* op = (decode_clo(env8571))[5];
//not do dummy comment
void* a8389 = (decode_clo(env8571))[4];
//not do dummy comment
void* cons = (decode_clo(env8571))[3];
//not do dummy comment
void* filter = (decode_clo(env8571))[2];
//not do dummy comment
void* kont8454 = (decode_clo(env8571))[1];

//creating new closure instance
void** clo8846 = alloc_clo(lam8568_fptr, 3);

//setting env list
clo8846[1] = cons;
clo8846[2] = kont8454;
clo8846[3] = a8389;
void* f8456 = encode_clo(clo8846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8456;
arg_buffer[3] = op;
arg_buffer[4] = a8390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8573))[6];
//not do dummy comment
void* lst = (decode_clo(env8573))[5];
//not do dummy comment
void* op = (decode_clo(env8573))[4];
//not do dummy comment
void* cons = (decode_clo(env8573))[3];
//not do dummy comment
void* filter = (decode_clo(env8573))[2];
//not do dummy comment
void* kont8454 = (decode_clo(env8573))[1];

//creating new closure instance
void** clo8848 = alloc_clo(lam8570_fptr, 5);

//setting env list
clo8848[1] = kont8454;
clo8848[2] = filter;
clo8848[3] = cons;
clo8848[4] = a8389;
clo8848[5] = op;
void* f8457 = encode_clo(clo8848);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8457);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8457))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8575))[3];
//not do dummy comment
void* filter = (decode_clo(env8575))[2];
//not do dummy comment
void* kont8454 = (decode_clo(env8575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8454;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8577))[7];
//not do dummy comment
void* lst = (decode_clo(env8577))[6];
//not do dummy comment
void* op = (decode_clo(env8577))[5];
//not do dummy comment
void* cons = (decode_clo(env8577))[4];
//not do dummy comment
void* filter = (decode_clo(env8577))[3];
//not do dummy comment
void* kont8454 = (decode_clo(env8577))[2];
//not do dummy comment
void* car = (decode_clo(env8577))[1];

//if-clause
bool if_guard8849 = is_true(a8388);
if(if_guard8849)
{

//creating new closure instance
void** clo8851 = alloc_clo(lam8572_fptr, 6);

//setting env list
clo8851[1] = kont8454;
clo8851[2] = filter;
clo8851[3] = cons;
clo8851[4] = op;
clo8851[5] = lst;
clo8851[6] = cdr;
void* f8458 = encode_clo(clo8851);



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
void** clo8853 = alloc_clo(lam8574_fptr, 3);

//setting env list
clo8853[1] = kont8454;
clo8853[2] = filter;
clo8853[3] = op;
void* f8459 = encode_clo(clo8853);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8459);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8459))[0]);
function_ptr();
return nullptr;
}

}

void* lam8576 = encode_clo(alloc_clo(lam8576_fptr, 0));

void* lam8578_fptr() // lam8578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8579 = arg_buffer[1];
//reading env and args
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8579))[7];
//not do dummy comment
void* lst = (decode_clo(env8579))[6];
//not do dummy comment
void* op = (decode_clo(env8579))[5];
//not do dummy comment
void* cons = (decode_clo(env8579))[4];
//not do dummy comment
void* filter = (decode_clo(env8579))[3];
//not do dummy comment
void* kont8454 = (decode_clo(env8579))[2];
//not do dummy comment
void* car = (decode_clo(env8579))[1];

//creating new closure instance
void** clo8855 = alloc_clo(lam8576_fptr, 7);

//setting env list
clo8855[1] = car;
clo8855[2] = kont8454;
clo8855[3] = filter;
clo8855[4] = cons;
clo8855[5] = op;
clo8855[6] = lst;
clo8855[7] = cdr;
void* f8460 = encode_clo(clo8855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8460;
arg_buffer[3] = a8387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void* lam8580_fptr() // lam8580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8581 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8581))[8];
//not do dummy comment
void* op = (decode_clo(env8581))[7];
//not do dummy comment
void* cons = (decode_clo(env8581))[6];
//not do dummy comment
void* list = (decode_clo(env8581))[5];
//not do dummy comment
void* cdr = (decode_clo(env8581))[4];
//not do dummy comment
void* filter = (decode_clo(env8581))[3];
//not do dummy comment
void* kont8454 = (decode_clo(env8581))[2];
//not do dummy comment
void* car = (decode_clo(env8581))[1];

//if-clause
bool if_guard8856 = is_true(a8385);
if(if_guard8856)
{

//creating new closure instance
void** clo8858 = alloc_clo(lam8566_fptr, 1);

//setting env list
clo8858[1] = kont8454;
void* f8455 = encode_clo(clo8858);



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
void** clo8860 = alloc_clo(lam8578_fptr, 7);

//setting env list
clo8860[1] = car;
clo8860[2] = kont8454;
clo8860[3] = filter;
clo8860[4] = cons;
clo8860[5] = op;
clo8860[6] = lst;
clo8860[7] = cdr;
void* f8461 = encode_clo(clo8860);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
function_ptr();
return nullptr;
}

}

void* lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8582 = arg_buffer[1];
//reading env and args
void* kont8454 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8862 = alloc_clo(lam8580_fptr, 8);

//setting env list
clo8862[1] = car;
clo8862[2] = kont8454;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8862[3] = filter;
clo8862[4] = cdr;
clo8862[5] = list;
clo8862[6] = cons;
clo8862[7] = op;
clo8862[8] = lst;
void* f8462 = encode_clo(clo8862);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8462);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8395 = (decode_clo(env8584))[3];
//not do dummy comment
void* drop = (decode_clo(env8584))[2];
//not do dummy comment
void* kont8463 = (decode_clo(env8584))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8463;
arg_buffer[3] = a8395;
arg_buffer[4] = a8397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void* lam8586_fptr() // lam8586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8587 = arg_buffer[1];
//reading env and args
void* a8395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8587))[4];
//not do dummy comment
void* kont8463 = (decode_clo(env8587))[3];
//not do dummy comment
void* n = (decode_clo(env8587))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8587))[1];
mpz_t* mpzvar8863 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8863, "1", 10);
void* a8396 = encode_mpz(mpzvar8863);

//creating new closure instance
void** clo8865 = alloc_clo(lam8583_fptr, 3);

//setting env list
clo8865[1] = kont8463;
clo8865[2] = drop;
clo8865[3] = a8395;
void* f8464 = encode_clo(clo8865);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8396);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
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
void* a8394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8589))[6];
//not do dummy comment
void* kont8463 = (decode_clo(env8589))[5];
//not do dummy comment
void* n = (decode_clo(env8589))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8589))[3];
//not do dummy comment
void* lst = (decode_clo(env8589))[2];
//not do dummy comment
void* drop = (decode_clo(env8589))[1];

//if-clause
bool if_guard8866 = is_true(a8394);
if(if_guard8866)
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
void** clo8868 = alloc_clo(lam8586_fptr, 4);

//setting env list
clo8868[1] = _u45;
clo8868[2] = n;
clo8868[3] = kont8463;
clo8868[4] = drop;
void* f8465 = encode_clo(clo8868);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
function_ptr();
return nullptr;
}

}

void* lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8591 = arg_buffer[1];
//reading env and args
void* kont8463 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8869 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8869, "0", 10);
void* a8393 = encode_mpz(mpzvar8869);

//creating new closure instance
void** clo8871 = alloc_clo(lam8588_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8871[1] = drop;
clo8871[2] = lst;
clo8871[3] = _u45;
clo8871[4] = n;
clo8871[5] = kont8463;
clo8871[6] = cdr;
void* f8466 = encode_clo(clo8871);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8393);
arg_buffer[1]=reinterpret_cast<void*>(f8466);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8466))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

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
void* a8399 = (decode_clo(env8593))[3];
//not do dummy comment
void* kont8467 = (decode_clo(env8593))[2];
//not do dummy comment
void* proc = (decode_clo(env8593))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8467;
arg_buffer[3] = a8399;
arg_buffer[4] = a8401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8595))[5];
//not do dummy comment
void* a8399 = (decode_clo(env8595))[4];
//not do dummy comment
void* kont8467 = (decode_clo(env8595))[3];
//not do dummy comment
void* proc = (decode_clo(env8595))[2];
//not do dummy comment
void* acc = (decode_clo(env8595))[1];

//creating new closure instance
void** clo8873 = alloc_clo(lam8592_fptr, 3);

//setting env list
clo8873[1] = proc;
clo8873[2] = kont8467;
clo8873[3] = a8399;
void* f8468 = encode_clo(clo8873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8468;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8400;
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
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8597))[6];
//not do dummy comment
void* kont8467 = (decode_clo(env8597))[5];
//not do dummy comment
void* foldr = (decode_clo(env8597))[4];
//not do dummy comment
void* lst = (decode_clo(env8597))[3];
//not do dummy comment
void* proc = (decode_clo(env8597))[2];
//not do dummy comment
void* acc = (decode_clo(env8597))[1];

//creating new closure instance
void** clo8875 = alloc_clo(lam8594_fptr, 5);

//setting env list
clo8875[1] = acc;
clo8875[2] = proc;
clo8875[3] = kont8467;
clo8875[4] = a8399;
clo8875[5] = foldr;
void* f8469 = encode_clo(clo8875);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
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
void* a8398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8599))[7];
//not do dummy comment
void* kont8467 = (decode_clo(env8599))[6];
//not do dummy comment
void* car = (decode_clo(env8599))[5];
//not do dummy comment
void* foldr = (decode_clo(env8599))[4];
//not do dummy comment
void* lst = (decode_clo(env8599))[3];
//not do dummy comment
void* proc = (decode_clo(env8599))[2];
//not do dummy comment
void* acc = (decode_clo(env8599))[1];

//if-clause
bool if_guard8876 = is_true(a8398);
if(if_guard8876)
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
void** clo8878 = alloc_clo(lam8596_fptr, 6);

//setting env list
clo8878[1] = acc;
clo8878[2] = proc;
clo8878[3] = lst;
clo8878[4] = foldr;
clo8878[5] = kont8467;
clo8878[6] = cdr;
void* f8470 = encode_clo(clo8878);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8470);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
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
void* kont8467 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8880 = alloc_clo(lam8598_fptr, 7);

//setting env list
clo8880[1] = acc;
clo8880[2] = proc;
clo8880[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8880[4] = foldr;
clo8880[5] = car;
clo8880[6] = kont8467;
clo8880[7] = cdr;
void* f8471 = encode_clo(clo8880);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8471);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
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
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8403 = (decode_clo(env8602))[3];
//not do dummy comment
void* cons = (decode_clo(env8602))[2];
//not do dummy comment
void* kont8472 = (decode_clo(env8602))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8403, a8405);
arg_buffer[1]=reinterpret_cast<void*>(kont8472);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8472))[0]);
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
void* append = (decode_clo(env8604))[5];
//not do dummy comment
void* a8403 = (decode_clo(env8604))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8604))[3];
//not do dummy comment
void* cons = (decode_clo(env8604))[2];
//not do dummy comment
void* kont8472 = (decode_clo(env8604))[1];

//creating new closure instance
void** clo8882 = alloc_clo(lam8601_fptr, 3);

//setting env list
clo8882[1] = kont8472;
clo8882[2] = cons;
clo8882[3] = a8403;
void* f8473 = encode_clo(clo8882);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8473;
arg_buffer[3] = a8404;
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
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8606))[6];
//not do dummy comment
void* append = (decode_clo(env8606))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8606))[4];
//not do dummy comment
void* lst1 = (decode_clo(env8606))[3];
//not do dummy comment
void* cons = (decode_clo(env8606))[2];
//not do dummy comment
void* kont8472 = (decode_clo(env8606))[1];

//creating new closure instance
void** clo8884 = alloc_clo(lam8603_fptr, 5);

//setting env list
clo8884[1] = kont8472;
clo8884[2] = cons;
clo8884[3] = lst2;
clo8884[4] = a8403;
clo8884[5] = append;
void* f8474 = encode_clo(clo8884);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
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
void* append = (decode_clo(env8608))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8608))[5];
//not do dummy comment
void* cons = (decode_clo(env8608))[4];
//not do dummy comment
void* kont8472 = (decode_clo(env8608))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8608))[2];
//not do dummy comment
void* car = (decode_clo(env8608))[1];

//if-clause
bool if_guard8885 = is_true(a8402);
if(if_guard8885)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8472);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8472))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8887 = alloc_clo(lam8605_fptr, 6);

//setting env list
clo8887[1] = kont8472;
clo8887[2] = cons;
clo8887[3] = lst1;
clo8887[4] = lst2;
clo8887[5] = append;
clo8887[6] = cdr;
void* f8475 = encode_clo(clo8887);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8475);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8475))[0]);
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
void* kont8472 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8889 = alloc_clo(lam8607_fptr, 7);

//setting env list
clo8889[1] = car;
clo8889[2] = lst1;
clo8889[3] = kont8472;
clo8889[4] = cons;
clo8889[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8889[6] = append;
clo8889[7] = cdr;
void* f8476 = encode_clo(clo8889);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8476);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8476))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8610_fptr() // lam8610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8611 = arg_buffer[1];
//reading env and args
void* a8410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* string_u45append = (decode_clo(env8611))[2];
//not do dummy comment
void* kont8477 = (decode_clo(env8611))[1];
void* cps_u45lst8478 = prim_cons(kont8477, a8410);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(string_u45append);
arg_buffer[2] = cps_u45lst8478;
arg_buffer[0] = reinterpret_cast<void*>(2);
string_u45append_fptr();
return nullptr;
}

void* lam8610 = encode_clo(alloc_clo(lam8610_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8616 = arg_buffer[1];
//reading env and args
void* kont8477 = arg_buffer[2];
//Dummy comment
void* a8406 = encode_str(new(GC) std::string("brou"));
void* a8407 = encode_str(new(GC) std::string("haha"));
void* a8408 = encode_str(new(GC) std::string("-a-minimal"));
void* a8409 = encode_str(new(GC) std::string("-racket-like-compiler!"));

//creating new closure instance
void** clo8891 = alloc_clo(lam8610_fptr, 2);

//setting env list
clo8891[1] = kont8477;
clo8891[2] = string_u45append;
void* f8479 = encode_clo(clo8891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8479;
arg_buffer[3] = a8406;
arg_buffer[4] = a8407;
arg_buffer[5] = a8408;
arg_buffer[6] = a8409;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8617_fptr() // lam8617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8618 = arg_buffer[1];
//reading env and args
void* xy8411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8480 = (decode_clo(env8618))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8480);
arg_buffer[2] = xy8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8480))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8619 = arg_buffer[1];
//reading env and args
void* kont8480 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8893 = alloc_clo(lam8617_fptr, 1);

//setting env list
clo8893[1] = kont8480;
void* f8481 = encode_clo(clo8893);



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

