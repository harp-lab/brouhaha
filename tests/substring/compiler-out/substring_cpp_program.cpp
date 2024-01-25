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
void* x8625 = apply_prim__u43(lst8627);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8624);
arg_buffer[2] = x8625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8624))[0]);
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
void* x8629 = apply_prim__u45(lst8631);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8628);
arg_buffer[2] = x8629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8628))[0]);
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
void* x8633 = apply_prim__u42(lst8635);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8632);
arg_buffer[2] = x8633;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8632))[0]);
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
void* x8637 = apply_prim__u47(lst8639);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8636);
arg_buffer[2] = x8637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8636))[0]);
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
void* x8641 = apply_prim__u61(lst8643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8640);
arg_buffer[2] = x8641;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8640))[0]);
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
void* x8645 = apply_prim__u62(lst8647);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8644);
arg_buffer[2] = x8645;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8644))[0]);
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
void* x8649 = apply_prim__u60(lst8651);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8648);
arg_buffer[2] = x8649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8648))[0]);
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
void* x8653 = apply_prim__u60_u61(lst8655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8652);
arg_buffer[2] = x8653;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8652))[0]);
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
void* x8657 = apply_prim__u62_u61(lst8659);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8656);
arg_buffer[2] = x8657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8656))[0]);
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
void* x8661 = apply_prim_modulo(lst8663);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8660);
arg_buffer[2] = x8661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8660))[0]);
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
void* x8665 = apply_prim_null_u63(lst8667);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8664);
arg_buffer[2] = x8665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8664))[0]);
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
void* x8669 = apply_prim_equal_u63(lst8671);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8668);
arg_buffer[2] = x8669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8668))[0]);
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
void* x8673 = apply_prim_eq_u63(lst8675);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8672);
arg_buffer[2] = x8673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8672))[0]);
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
void* x8677 = apply_prim_exact_u45floor(lst8679);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8676);
arg_buffer[2] = x8677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8676))[0]);
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
void* x8681 = apply_prim_exact_u45ceiling(lst8683);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8680);
arg_buffer[2] = x8681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8680))[0]);
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
void* x8685 = apply_prim_exact_u45round(lst8687);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8684);
arg_buffer[2] = x8685;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8684))[0]);
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
void* x8689 = apply_prim_cons(lst8691);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8688);
arg_buffer[2] = x8689;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
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
void* x8693 = apply_prim_car(lst8695);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8692);
arg_buffer[2] = x8693;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8692))[0]);
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
void* x8697 = apply_prim_cdr(lst8699);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8696);
arg_buffer[2] = x8697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8696))[0]);
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
void* x8701 = apply_prim_float_u45_u62int(lst8703);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8700);
arg_buffer[2] = x8701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8700))[0]);
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
void* x8705 = apply_prim_int_u45_u62float(lst8707);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8704);
arg_buffer[2] = x8705;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8704))[0]);
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
void* x8709 = apply_prim_hash(lst8711);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8708);
arg_buffer[2] = x8709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8708))[0]);
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
void* x8713 = apply_prim_hash_u45ref(lst8715);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8712);
arg_buffer[2] = x8713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8712))[0]);
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
void* x8717 = apply_prim_hash_u45set(lst8719);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8716);
arg_buffer[2] = x8717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8716))[0]);
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
void* x8721 = apply_prim_hash_u45keys(lst8723);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8720);
arg_buffer[2] = x8721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8720))[0]);
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
void* x8725 = apply_prim_hash_u45has_u45key_u63(lst8727);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8724);
arg_buffer[2] = x8725;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8724))[0]);
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
void* x8729 = apply_prim_hash_u45count(lst8731);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8728);
arg_buffer[2] = x8729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
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
void* x8733 = apply_prim_set(lst8735);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8732);
arg_buffer[2] = x8733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
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
void* x8737 = apply_prim_set_u45_u62list(lst8739);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8736);
arg_buffer[2] = x8737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
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
void* x8741 = apply_prim_list_u45_u62set(lst8743);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8740);
arg_buffer[2] = x8741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8740))[0]);
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
void* x8745 = apply_prim_set_u45add(lst8747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8744);
arg_buffer[2] = x8745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8744))[0]);
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
void* x8749 = apply_prim_string_u63(lst8751);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8748);
arg_buffer[2] = x8749;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8748))[0]);
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
void* x8753 = apply_prim_string_u45length(lst8755);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8752);
arg_buffer[2] = x8753;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8752))[0]);
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
void* x8757 = apply_prim_string_u45ref(lst8759);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8756);
arg_buffer[2] = x8757;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8756))[0]);
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
void* x8761 = apply_prim_substring(lst8763);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8760);
arg_buffer[2] = x8761;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8760))[0]);
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
void* _8486 = arg_buffer[1];
//reading env and args
void* kont8413 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* xy8344 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8413);
arg_buffer[2] = xy8344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8413))[0]);
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
void* _8487 = arg_buffer[1];
//reading env and args
void* kont8414 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* xy8345 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8414);
arg_buffer[2] = xy8345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8414))[0]);
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
void* _8488 = arg_buffer[1];
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

void* kont8415 = prim_car(x);
void* x8485 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8415);
arg_buffer[2] = x8485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8415))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8489_fptr() // lam8489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8490 = arg_buffer[1];
//reading env and args
void* a8348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8346 = (decode_clo(env8490))[3];
//not do dummy comment
void* kont8416 = (decode_clo(env8490))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8490))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8346, a8348);
arg_buffer[1]=reinterpret_cast<void*>(kont8416);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8416))[0]);
function_ptr();
return nullptr;
}

void* lam8489 = encode_clo(alloc_clo(lam8489_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8493 = arg_buffer[1];
//reading env and args
void* kont8416 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8764 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8764, "0", 10);
void* a8346 = encode_mpz(mpzvar8764);
mpz_t* mpzvar8765 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8765, "2", 10);
void* a8347 = encode_mpz(mpzvar8765);

//creating new closure instance
void** clo8767 = alloc_clo(lam8489_fptr, 3);

//setting env list
clo8767[1] = equal_u63;
clo8767[2] = kont8416;
clo8767[3] = a8346;
void* f8417 = encode_clo(clo8767);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8347);
arg_buffer[1]=reinterpret_cast<void*>(f8417);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8417))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8494_fptr() // lam8494 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8495 = arg_buffer[1];
//reading env and args
void* a8351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8349 = (decode_clo(env8495))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8495))[2];
//not do dummy comment
void* kont8418 = (decode_clo(env8495))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8349, a8351);
arg_buffer[1]=reinterpret_cast<void*>(kont8418);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8418))[0]);
function_ptr();
return nullptr;
}

void* lam8494 = encode_clo(alloc_clo(lam8494_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8498 = arg_buffer[1];
//reading env and args
void* kont8418 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8768, "1", 10);
void* a8349 = encode_mpz(mpzvar8768);
mpz_t* mpzvar8769 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8769, "2", 10);
void* a8350 = encode_mpz(mpzvar8769);

//creating new closure instance
void** clo8771 = alloc_clo(lam8494_fptr, 3);

//setting env list
clo8771[1] = kont8418;
clo8771[2] = equal_u63;
clo8771[3] = a8349;
void* f8419 = encode_clo(clo8771);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8350);
arg_buffer[1]=reinterpret_cast<void*>(f8419);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8419))[0]);
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8501_fptr() // lam8501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8502 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env8502))[3];
//not do dummy comment
void* x = (decode_clo(env8502))[2];
//not do dummy comment
void* kont8420 = (decode_clo(env8502))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8420;
arg_buffer[3] = x;
arg_buffer[4] = a8357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8501 = encode_clo(alloc_clo(lam8501_fptr, 0));

void* lam8503_fptr() // lam8503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8504 = arg_buffer[1];
//reading env and args
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8504))[5];
//not do dummy comment
void* lst = (decode_clo(env8504))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8504))[3];
//not do dummy comment
void* x = (decode_clo(env8504))[2];
//not do dummy comment
void* kont8420 = (decode_clo(env8504))[1];

//if-clause
bool if_guard8772 = is_true(a8355);
if(if_guard8772)
{
void* xy8356 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8420);
arg_buffer[2] = xy8356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8420))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8774 = alloc_clo(lam8501_fptr, 3);

//setting env list
clo8774[1] = kont8420;
clo8774[2] = x;
clo8774[3] = member_u63;
void* f8421 = encode_clo(clo8774);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8421);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8421))[0]);
function_ptr();
return nullptr;
}

}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void* lam8505_fptr() // lam8505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8506 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8506))[6];
//not do dummy comment
void* lst = (decode_clo(env8506))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8506))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8506))[3];
//not do dummy comment
void* x = (decode_clo(env8506))[2];
//not do dummy comment
void* kont8420 = (decode_clo(env8506))[1];

//creating new closure instance
void** clo8776 = alloc_clo(lam8503_fptr, 5);

//setting env list
clo8776[1] = kont8420;
clo8776[2] = x;
clo8776[3] = member_u63;
clo8776[4] = lst;
clo8776[5] = cdr;
void* f8422 = encode_clo(clo8776);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8354, x);
arg_buffer[1]=reinterpret_cast<void*>(f8422);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8422))[0]);
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
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8508))[7];
//not do dummy comment
void* lst = (decode_clo(env8508))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8508))[5];
//not do dummy comment
void* car = (decode_clo(env8508))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8508))[3];
//not do dummy comment
void* x = (decode_clo(env8508))[2];
//not do dummy comment
void* kont8420 = (decode_clo(env8508))[1];

//if-clause
bool if_guard8777 = is_true(a8352);
if(if_guard8777)
{
void* xy8353 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8420);
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8420))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8779 = alloc_clo(lam8505_fptr, 6);

//setting env list
clo8779[1] = kont8420;
clo8779[2] = x;
clo8779[3] = member_u63;
clo8779[4] = equal_u63;
clo8779[5] = lst;
clo8779[6] = cdr;
void* f8423 = encode_clo(clo8779);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8423);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8423))[0]);
function_ptr();
return nullptr;
}

}

void* lam8507 = encode_clo(alloc_clo(lam8507_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8509 = arg_buffer[1];
//reading env and args
void* kont8420 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8781 = alloc_clo(lam8507_fptr, 7);

//setting env list
clo8781[1] = kont8420;
clo8781[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8781[3] = member_u63;
clo8781[4] = car;
clo8781[5] = equal_u63;
clo8781[6] = lst;
clo8781[7] = cdr;
void* f8424 = encode_clo(clo8781);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8424);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8424))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8510_fptr() // lam8510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8511 = arg_buffer[1];
//reading env and args
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8425 = (decode_clo(env8511))[4];
//not do dummy comment
void* fun = (decode_clo(env8511))[3];
//not do dummy comment
void* foldl = (decode_clo(env8511))[2];
//not do dummy comment
void* a8360 = (decode_clo(env8511))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8425;
arg_buffer[3] = fun;
arg_buffer[4] = a8360;
arg_buffer[5] = a8361;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
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
void* a8360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8513))[5];
//not do dummy comment
void* fun = (decode_clo(env8513))[4];
//not do dummy comment
void* foldl = (decode_clo(env8513))[3];
//not do dummy comment
void* kont8425 = (decode_clo(env8513))[2];
//not do dummy comment
void* cdr = (decode_clo(env8513))[1];

//creating new closure instance
void** clo8783 = alloc_clo(lam8510_fptr, 4);

//setting env list
clo8783[1] = a8360;
clo8783[2] = foldl;
clo8783[3] = fun;
clo8783[4] = kont8425;
void* f8426 = encode_clo(clo8783);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8426);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8426))[0]);
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
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8515))[6];
//not do dummy comment
void* fun = (decode_clo(env8515))[5];
//not do dummy comment
void* acc = (decode_clo(env8515))[4];
//not do dummy comment
void* foldl = (decode_clo(env8515))[3];
//not do dummy comment
void* kont8425 = (decode_clo(env8515))[2];
//not do dummy comment
void* cdr = (decode_clo(env8515))[1];

//creating new closure instance
void** clo8785 = alloc_clo(lam8512_fptr, 5);

//setting env list
clo8785[1] = cdr;
clo8785[2] = kont8425;
clo8785[3] = foldl;
clo8785[4] = fun;
clo8785[5] = lst;
void* f8427 = encode_clo(clo8785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8427;
arg_buffer[3] = a8359;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8517))[7];
//not do dummy comment
void* fun = (decode_clo(env8517))[6];
//not do dummy comment
void* acc = (decode_clo(env8517))[5];
//not do dummy comment
void* car = (decode_clo(env8517))[4];
//not do dummy comment
void* foldl = (decode_clo(env8517))[3];
//not do dummy comment
void* kont8425 = (decode_clo(env8517))[2];
//not do dummy comment
void* cdr = (decode_clo(env8517))[1];

//if-clause
bool if_guard8786 = is_true(a8358);
if(if_guard8786)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8425);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8425))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8788 = alloc_clo(lam8514_fptr, 6);

//setting env list
clo8788[1] = cdr;
clo8788[2] = kont8425;
clo8788[3] = foldl;
clo8788[4] = acc;
clo8788[5] = fun;
clo8788[6] = lst;
void* f8428 = encode_clo(clo8788);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
function_ptr();
return nullptr;
}

}

void* lam8516 = encode_clo(alloc_clo(lam8516_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8518 = arg_buffer[1];
//reading env and args
void* kont8425 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8790 = alloc_clo(lam8516_fptr, 7);

//setting env list
clo8790[1] = cdr;
clo8790[2] = kont8425;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8790[3] = foldl;
clo8790[4] = car;
clo8790[5] = acc;
clo8790[6] = fun;
clo8790[7] = lst;
void* f8429 = encode_clo(clo8790);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8519_fptr() // lam8519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8520 = arg_buffer[1];
//reading env and args
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8363 = (decode_clo(env8520))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8520))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8520))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8430;
arg_buffer[3] = a8363;
arg_buffer[4] = a8365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8363 = (decode_clo(env8522))[5];
//not do dummy comment
void* kont8430 = (decode_clo(env8522))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8522))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8522))[2];
//not do dummy comment
void* cons = (decode_clo(env8522))[1];

//creating new closure instance
void** clo8792 = alloc_clo(lam8519_fptr, 3);

//setting env list
clo8792[1] = reverse_u45helper;
clo8792[2] = kont8430;
clo8792[3] = a8363;
void* f8431 = encode_clo(clo8792);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8364, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
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
void* a8363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8524))[6];
//not do dummy comment
void* kont8430 = (decode_clo(env8524))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8524))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8524))[3];
//not do dummy comment
void* car = (decode_clo(env8524))[2];
//not do dummy comment
void* cons = (decode_clo(env8524))[1];

//creating new closure instance
void** clo8794 = alloc_clo(lam8521_fptr, 5);

//setting env list
clo8794[1] = cons;
clo8794[2] = lst2;
clo8794[3] = reverse_u45helper;
clo8794[4] = kont8430;
clo8794[5] = a8363;
void* f8432 = encode_clo(clo8794);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
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
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8526))[7];
//not do dummy comment
void* lst = (decode_clo(env8526))[6];
//not do dummy comment
void* kont8430 = (decode_clo(env8526))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8526))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8526))[3];
//not do dummy comment
void* car = (decode_clo(env8526))[2];
//not do dummy comment
void* cons = (decode_clo(env8526))[1];

//if-clause
bool if_guard8795 = is_true(a8362);
if(if_guard8795)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8430);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8430))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8797 = alloc_clo(lam8523_fptr, 6);

//setting env list
clo8797[1] = cons;
clo8797[2] = car;
clo8797[3] = lst2;
clo8797[4] = reverse_u45helper;
clo8797[5] = kont8430;
clo8797[6] = lst;
void* f8433 = encode_clo(clo8797);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8433);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8433))[0]);
function_ptr();
return nullptr;
}

}

void* lam8525 = encode_clo(alloc_clo(lam8525_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8527 = arg_buffer[1];
//reading env and args
void* kont8430 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8799 = alloc_clo(lam8525_fptr, 7);

//setting env list
clo8799[1] = cons;
clo8799[2] = car;
clo8799[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8799[4] = reverse_u45helper;
clo8799[5] = kont8430;
clo8799[6] = lst;
clo8799[7] = cdr;
void* f8434 = encode_clo(clo8799);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8528_fptr() // lam8528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8529 = arg_buffer[1];
//reading env and args
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8529))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8529))[2];
//not do dummy comment
void* kont8435 = (decode_clo(env8529))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8435;
arg_buffer[3] = lst;
arg_buffer[4] = a8366;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8528 = encode_clo(alloc_clo(lam8528_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8530 = arg_buffer[1];
//reading env and args
void* kont8435 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8801 = alloc_clo(lam8528_fptr, 3);

//setting env list
clo8801[1] = kont8435;
clo8801[2] = reverse_u45helper;
clo8801[3] = lst;
void* f8436 = encode_clo(clo8801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8531_fptr() // lam8531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8532 = arg_buffer[1];
//reading env and args
void* xy8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8437 = (decode_clo(env8532))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8437);
arg_buffer[2] = xy8369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8437))[0]);
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
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8534))[4];
//not do dummy comment
void* a8372 = (decode_clo(env8534))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8534))[2];
//not do dummy comment
void* kont8437 = (decode_clo(env8534))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8437;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[5] = a8374;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
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
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8536))[6];
//not do dummy comment
void* a8372 = (decode_clo(env8536))[5];
//not do dummy comment
void* cons = (decode_clo(env8536))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8536))[3];
//not do dummy comment
void* kont8437 = (decode_clo(env8536))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8536))[1];

//creating new closure instance
void** clo8803 = alloc_clo(lam8533_fptr, 4);

//setting env list
clo8803[1] = kont8437;
clo8803[2] = take_u45helper;
clo8803[3] = a8372;
clo8803[4] = a8370;
void* f8439 = encode_clo(clo8803);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8373, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8439);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8439))[0]);
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
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8538))[7];
//not do dummy comment
void* a8370 = (decode_clo(env8538))[6];
//not do dummy comment
void* car = (decode_clo(env8538))[5];
//not do dummy comment
void* cons = (decode_clo(env8538))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8538))[3];
//not do dummy comment
void* kont8437 = (decode_clo(env8538))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8538))[1];

//creating new closure instance
void** clo8805 = alloc_clo(lam8535_fptr, 6);

//setting env list
clo8805[1] = lst2;
clo8805[2] = kont8437;
clo8805[3] = take_u45helper;
clo8805[4] = cons;
clo8805[5] = a8372;
clo8805[6] = a8370;
void* f8440 = encode_clo(clo8805);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
function_ptr();
return nullptr;
}

void* lam8537 = encode_clo(alloc_clo(lam8537_fptr, 0));

void* lam8540_fptr() // lam8540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8541 = arg_buffer[1];
//reading env and args
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8541))[8];
//not do dummy comment
void* cons = (decode_clo(env8541))[7];
//not do dummy comment
void* _u45 = (decode_clo(env8541))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env8541))[5];
//not do dummy comment
void* kont8437 = (decode_clo(env8541))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8541))[3];
//not do dummy comment
void* n = (decode_clo(env8541))[2];
//not do dummy comment
void* car = (decode_clo(env8541))[1];
mpz_t* mpzvar8806 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8806, "1", 10);
void* a8371 = encode_mpz(mpzvar8806);

//creating new closure instance
void** clo8808 = alloc_clo(lam8537_fptr, 7);

//setting env list
clo8808[1] = lst2;
clo8808[2] = kont8437;
clo8808[3] = take_u45helper;
clo8808[4] = cons;
clo8808[5] = car;
clo8808[6] = a8370;
clo8808[7] = lst;
void* f8441 = encode_clo(clo8808);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8371);
arg_buffer[1]=reinterpret_cast<void*>(f8441);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
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
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8543))[10];
//not do dummy comment
void* lst = (decode_clo(env8543))[9];
//not do dummy comment
void* reverse = (decode_clo(env8543))[8];
//not do dummy comment
void* cons = (decode_clo(env8543))[7];
//not do dummy comment
void* _u45 = (decode_clo(env8543))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env8543))[5];
//not do dummy comment
void* kont8437 = (decode_clo(env8543))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8543))[3];
//not do dummy comment
void* n = (decode_clo(env8543))[2];
//not do dummy comment
void* car = (decode_clo(env8543))[1];

//if-clause
bool if_guard8809 = is_true(a8368);
if(if_guard8809)
{

//creating new closure instance
void** clo8811 = alloc_clo(lam8531_fptr, 1);

//setting env list
clo8811[1] = kont8437;
void* f8438 = encode_clo(clo8811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8438;
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
void** clo8813 = alloc_clo(lam8540_fptr, 8);

//setting env list
clo8813[1] = car;
clo8813[2] = n;
clo8813[3] = lst2;
clo8813[4] = kont8437;
clo8813[5] = take_u45helper;
clo8813[6] = _u45;
clo8813[7] = cons;
clo8813[8] = lst;
void* f8442 = encode_clo(clo8813);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8442);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8442))[0]);
function_ptr();
return nullptr;
}

}

void* lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8545 = arg_buffer[1];
//reading env and args
void* kont8437 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8814 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8814, "0", 10);
void* a8367 = encode_mpz(mpzvar8814);

//creating new closure instance
void** clo8816 = alloc_clo(lam8542_fptr, 10);

//setting env list
clo8816[1] = car;
clo8816[2] = n;
clo8816[3] = lst2;
clo8816[4] = kont8437;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8816[5] = take_u45helper;
clo8816[6] = _u45;
clo8816[7] = cons;
clo8816[8] = reverse;
clo8816[9] = lst;
clo8816[10] = cdr;
void* f8443 = encode_clo(clo8816);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8367);
arg_buffer[1]=reinterpret_cast<void*>(f8443);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8443))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8546_fptr() // lam8546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8547 = arg_buffer[1];
//reading env and args
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8444 = (decode_clo(env8547))[4];
//not do dummy comment
void* lst = (decode_clo(env8547))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8547))[2];
//not do dummy comment
void* n = (decode_clo(env8547))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8444;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8375;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8546 = encode_clo(alloc_clo(lam8546_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8548 = arg_buffer[1];
//reading env and args
void* kont8444 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8818 = alloc_clo(lam8546_fptr, 4);

//setting env list
clo8818[1] = n;
clo8818[2] = take_u45helper;
clo8818[3] = lst;
clo8818[4] = kont8444;
void* f8445 = encode_clo(clo8818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8550_fptr() // lam8550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8551 = arg_buffer[1];
//reading env and args
void* a8380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8378 = (decode_clo(env8551))[3];
//not do dummy comment
void* kont8446 = (decode_clo(env8551))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8551))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8378, a8380);
arg_buffer[1]=reinterpret_cast<void*>(kont8446);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
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
void* a8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8378 = (decode_clo(env8553))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8553))[3];
//not do dummy comment
void* kont8446 = (decode_clo(env8553))[2];
//not do dummy comment
void* length = (decode_clo(env8553))[1];

//creating new closure instance
void** clo8820 = alloc_clo(lam8550_fptr, 3);

//setting env list
clo8820[1] = _u43;
clo8820[2] = kont8446;
clo8820[3] = a8378;
void* f8447 = encode_clo(clo8820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8447;
arg_buffer[3] = a8379;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void* lam8555_fptr() // lam8555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8556 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8556))[5];
//not do dummy comment
void* lst = (decode_clo(env8556))[4];
//not do dummy comment
void* _u43 = (decode_clo(env8556))[3];
//not do dummy comment
void* kont8446 = (decode_clo(env8556))[2];
//not do dummy comment
void* length = (decode_clo(env8556))[1];

//if-clause
bool if_guard8821 = is_true(a8376);
if(if_guard8821)
{
mpz_t* mpzvar8822 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8822, "0", 10);
void* xy8377 = encode_mpz(mpzvar8822);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8446);
arg_buffer[2] = xy8377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8823 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8823, "1", 10);
void* a8378 = encode_mpz(mpzvar8823);

//creating new closure instance
void** clo8825 = alloc_clo(lam8552_fptr, 4);

//setting env list
clo8825[1] = length;
clo8825[2] = kont8446;
clo8825[3] = _u43;
clo8825[4] = a8378;
void* f8448 = encode_clo(clo8825);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8448);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8448))[0]);
function_ptr();
return nullptr;
}

}

void* lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8557 = arg_buffer[1];
//reading env and args
void* kont8446 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8827 = alloc_clo(lam8555_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8827[1] = length;
clo8827[2] = kont8446;
clo8827[3] = _u43;
clo8827[4] = lst;
clo8827[5] = cdr;
void* f8449 = encode_clo(clo8827);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8558_fptr() // lam8558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8559 = arg_buffer[1];
//reading env and args
void* xy8382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8450 = (decode_clo(env8559))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8450);
arg_buffer[2] = xy8382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8450))[0]);
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
void* a8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8384 = (decode_clo(env8561))[3];
//not do dummy comment
void* kont8450 = (decode_clo(env8561))[2];
//not do dummy comment
void* cons = (decode_clo(env8561))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8384, a8386);
arg_buffer[1]=reinterpret_cast<void*>(kont8450);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8450))[0]);
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
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8563))[5];
//not do dummy comment
void* a8384 = (decode_clo(env8563))[4];
//not do dummy comment
void* kont8450 = (decode_clo(env8563))[3];
//not do dummy comment
void* proc = (decode_clo(env8563))[2];
//not do dummy comment
void* cons = (decode_clo(env8563))[1];

//creating new closure instance
void** clo8829 = alloc_clo(lam8560_fptr, 3);

//setting env list
clo8829[1] = cons;
clo8829[2] = kont8450;
clo8829[3] = a8384;
void* f8452 = encode_clo(clo8829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8452;
arg_buffer[3] = proc;
arg_buffer[4] = a8385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8565))[6];
//not do dummy comment
void* lst = (decode_clo(env8565))[5];
//not do dummy comment
void* map = (decode_clo(env8565))[4];
//not do dummy comment
void* kont8450 = (decode_clo(env8565))[3];
//not do dummy comment
void* proc = (decode_clo(env8565))[2];
//not do dummy comment
void* cons = (decode_clo(env8565))[1];

//creating new closure instance
void** clo8831 = alloc_clo(lam8562_fptr, 5);

//setting env list
clo8831[1] = cons;
clo8831[2] = proc;
clo8831[3] = kont8450;
clo8831[4] = a8384;
clo8831[5] = map;
void* f8453 = encode_clo(clo8831);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8453);
arg_buffer[0] = reinterpret_cast<void*>(1);
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
void* a8383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8567))[6];
//not do dummy comment
void* lst = (decode_clo(env8567))[5];
//not do dummy comment
void* map = (decode_clo(env8567))[4];
//not do dummy comment
void* kont8450 = (decode_clo(env8567))[3];
//not do dummy comment
void* proc = (decode_clo(env8567))[2];
//not do dummy comment
void* cons = (decode_clo(env8567))[1];

//creating new closure instance
void** clo8833 = alloc_clo(lam8564_fptr, 6);

//setting env list
clo8833[1] = cons;
clo8833[2] = proc;
clo8833[3] = kont8450;
clo8833[4] = map;
clo8833[5] = lst;
clo8833[6] = cdr;
void* f8454 = encode_clo(clo8833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8454;
arg_buffer[3] = a8383;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8569))[8];
//not do dummy comment
void* map = (decode_clo(env8569))[7];
//not do dummy comment
void* kont8450 = (decode_clo(env8569))[6];
//not do dummy comment
void* proc = (decode_clo(env8569))[5];
//not do dummy comment
void* car = (decode_clo(env8569))[4];
//not do dummy comment
void* cons = (decode_clo(env8569))[3];
//not do dummy comment
void* list = (decode_clo(env8569))[2];
//not do dummy comment
void* cdr = (decode_clo(env8569))[1];

//if-clause
bool if_guard8834 = is_true(a8381);
if(if_guard8834)
{

//creating new closure instance
void** clo8836 = alloc_clo(lam8558_fptr, 1);

//setting env list
clo8836[1] = kont8450;
void* f8451 = encode_clo(clo8836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8451;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8838 = alloc_clo(lam8566_fptr, 6);

//setting env list
clo8838[1] = cons;
clo8838[2] = proc;
clo8838[3] = kont8450;
clo8838[4] = map;
clo8838[5] = lst;
clo8838[6] = cdr;
void* f8455 = encode_clo(clo8838);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8455);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
function_ptr();
return nullptr;
}

}

void* lam8568 = encode_clo(alloc_clo(lam8568_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8570 = arg_buffer[1];
//reading env and args
void* kont8450 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8840 = alloc_clo(lam8568_fptr, 8);

//setting env list
clo8840[1] = cdr;
clo8840[2] = list;
clo8840[3] = cons;
clo8840[4] = car;
clo8840[5] = proc;
clo8840[6] = kont8450;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8840[7] = map;
clo8840[8] = lst;
void* f8456 = encode_clo(clo8840);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8456);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8456))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8571_fptr() // lam8571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8572 = arg_buffer[1];
//reading env and args
void* xy8388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8572))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8457);
arg_buffer[2] = xy8388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
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
void* a8393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8574))[3];
//not do dummy comment
void* cons = (decode_clo(env8574))[2];
//not do dummy comment
void* a8391 = (decode_clo(env8574))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8391, a8393);
arg_buffer[1]=reinterpret_cast<void*>(kont8457);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
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
void* a8392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8457 = (decode_clo(env8576))[5];
//not do dummy comment
void* op = (decode_clo(env8576))[4];
//not do dummy comment
void* filter = (decode_clo(env8576))[3];
//not do dummy comment
void* cons = (decode_clo(env8576))[2];
//not do dummy comment
void* a8391 = (decode_clo(env8576))[1];

//creating new closure instance
void** clo8842 = alloc_clo(lam8573_fptr, 3);

//setting env list
clo8842[1] = a8391;
clo8842[2] = cons;
clo8842[3] = kont8457;
void* f8459 = encode_clo(clo8842);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8459;
arg_buffer[3] = op;
arg_buffer[4] = a8392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8578))[6];
//not do dummy comment
void* op = (decode_clo(env8578))[5];
//not do dummy comment
void* filter = (decode_clo(env8578))[4];
//not do dummy comment
void* cons = (decode_clo(env8578))[3];
//not do dummy comment
void* kont8457 = (decode_clo(env8578))[2];
//not do dummy comment
void* cdr = (decode_clo(env8578))[1];

//creating new closure instance
void** clo8844 = alloc_clo(lam8575_fptr, 5);

//setting env list
clo8844[1] = a8391;
clo8844[2] = cons;
clo8844[3] = filter;
clo8844[4] = op;
clo8844[5] = kont8457;
void* f8460 = encode_clo(clo8844);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8460);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8460))[0]);
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
void* kont8457 = (decode_clo(env8580))[3];
//not do dummy comment
void* op = (decode_clo(env8580))[2];
//not do dummy comment
void* filter = (decode_clo(env8580))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8457;
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
void* a8390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8582))[7];
//not do dummy comment
void* op = (decode_clo(env8582))[6];
//not do dummy comment
void* cons = (decode_clo(env8582))[5];
//not do dummy comment
void* kont8457 = (decode_clo(env8582))[4];
//not do dummy comment
void* cdr = (decode_clo(env8582))[3];
//not do dummy comment
void* filter = (decode_clo(env8582))[2];
//not do dummy comment
void* car = (decode_clo(env8582))[1];

//if-clause
bool if_guard8845 = is_true(a8390);
if(if_guard8845)
{

//creating new closure instance
void** clo8847 = alloc_clo(lam8577_fptr, 6);

//setting env list
clo8847[1] = cdr;
clo8847[2] = kont8457;
clo8847[3] = cons;
clo8847[4] = filter;
clo8847[5] = op;
clo8847[6] = lst;
void* f8461 = encode_clo(clo8847);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8461);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8461))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8849 = alloc_clo(lam8579_fptr, 3);

//setting env list
clo8849[1] = filter;
clo8849[2] = op;
clo8849[3] = kont8457;
void* f8462 = encode_clo(clo8849);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8462);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8462))[0]);
function_ptr();
return nullptr;
}

}

void* lam8581 = encode_clo(alloc_clo(lam8581_fptr, 0));

void* lam8583_fptr() // lam8583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8584 = arg_buffer[1];
//reading env and args
void* a8389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8584))[7];
//not do dummy comment
void* op = (decode_clo(env8584))[6];
//not do dummy comment
void* cons = (decode_clo(env8584))[5];
//not do dummy comment
void* kont8457 = (decode_clo(env8584))[4];
//not do dummy comment
void* cdr = (decode_clo(env8584))[3];
//not do dummy comment
void* filter = (decode_clo(env8584))[2];
//not do dummy comment
void* car = (decode_clo(env8584))[1];

//creating new closure instance
void** clo8851 = alloc_clo(lam8581_fptr, 7);

//setting env list
clo8851[1] = car;
clo8851[2] = filter;
clo8851[3] = cdr;
clo8851[4] = kont8457;
clo8851[5] = cons;
clo8851[6] = op;
clo8851[7] = lst;
void* f8463 = encode_clo(clo8851);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8463;
arg_buffer[3] = a8389;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8586))[8];
//not do dummy comment
void* op = (decode_clo(env8586))[7];
//not do dummy comment
void* cons = (decode_clo(env8586))[6];
//not do dummy comment
void* list = (decode_clo(env8586))[5];
//not do dummy comment
void* kont8457 = (decode_clo(env8586))[4];
//not do dummy comment
void* cdr = (decode_clo(env8586))[3];
//not do dummy comment
void* filter = (decode_clo(env8586))[2];
//not do dummy comment
void* car = (decode_clo(env8586))[1];

//if-clause
bool if_guard8852 = is_true(a8387);
if(if_guard8852)
{

//creating new closure instance
void** clo8854 = alloc_clo(lam8571_fptr, 1);

//setting env list
clo8854[1] = kont8457;
void* f8458 = encode_clo(clo8854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8458;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8856 = alloc_clo(lam8583_fptr, 7);

//setting env list
clo8856[1] = car;
clo8856[2] = filter;
clo8856[3] = cdr;
clo8856[4] = kont8457;
clo8856[5] = cons;
clo8856[6] = op;
clo8856[7] = lst;
void* f8464 = encode_clo(clo8856);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8464);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8464))[0]);
function_ptr();
return nullptr;
}

}

void* lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8587 = arg_buffer[1];
//reading env and args
void* kont8457 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8858 = alloc_clo(lam8585_fptr, 8);

//setting env list
clo8858[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8858[2] = filter;
clo8858[3] = cdr;
clo8858[4] = kont8457;
clo8858[5] = list;
clo8858[6] = cons;
clo8858[7] = op;
clo8858[8] = lst;
void* f8465 = encode_clo(clo8858);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8465);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8465))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8588_fptr() // lam8588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8589 = arg_buffer[1];
//reading env and args
void* a8399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8466 = (decode_clo(env8589))[3];
//not do dummy comment
void* a8397 = (decode_clo(env8589))[2];
//not do dummy comment
void* drop = (decode_clo(env8589))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8466;
arg_buffer[3] = a8397;
arg_buffer[4] = a8399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void* lam8591_fptr() // lam8591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8592 = arg_buffer[1];
//reading env and args
void* a8397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8592))[4];
//not do dummy comment
void* kont8466 = (decode_clo(env8592))[3];
//not do dummy comment
void* n = (decode_clo(env8592))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8592))[1];
mpz_t* mpzvar8859 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8859, "1", 10);
void* a8398 = encode_mpz(mpzvar8859);

//creating new closure instance
void** clo8861 = alloc_clo(lam8588_fptr, 3);

//setting env list
clo8861[1] = drop;
clo8861[2] = a8397;
clo8861[3] = kont8466;
void* f8467 = encode_clo(clo8861);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8398);
arg_buffer[1]=reinterpret_cast<void*>(f8467);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8467))[0]);
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
void* a8396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8594))[6];
//not do dummy comment
void* kont8466 = (decode_clo(env8594))[5];
//not do dummy comment
void* n = (decode_clo(env8594))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8594))[3];
//not do dummy comment
void* lst = (decode_clo(env8594))[2];
//not do dummy comment
void* drop = (decode_clo(env8594))[1];

//if-clause
bool if_guard8862 = is_true(a8396);
if(if_guard8862)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8466);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8466))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8864 = alloc_clo(lam8591_fptr, 4);

//setting env list
clo8864[1] = _u45;
clo8864[2] = n;
clo8864[3] = kont8466;
clo8864[4] = drop;
void* f8468 = encode_clo(clo8864);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8468);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8468))[0]);
function_ptr();
return nullptr;
}

}

void* lam8593 = encode_clo(alloc_clo(lam8593_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8596 = arg_buffer[1];
//reading env and args
void* kont8466 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8865 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8865, "0", 10);
void* a8395 = encode_mpz(mpzvar8865);

//creating new closure instance
void** clo8867 = alloc_clo(lam8593_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8867[1] = drop;
clo8867[2] = lst;
clo8867[3] = _u45;
clo8867[4] = n;
clo8867[5] = kont8466;
clo8867[6] = cdr;
void* f8469 = encode_clo(clo8867);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8395);
arg_buffer[1]=reinterpret_cast<void*>(f8469);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8597_fptr() // lam8597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8598 = arg_buffer[1];
//reading env and args
void* a8403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8401 = (decode_clo(env8598))[3];
//not do dummy comment
void* proc = (decode_clo(env8598))[2];
//not do dummy comment
void* kont8470 = (decode_clo(env8598))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8470;
arg_buffer[3] = a8401;
arg_buffer[4] = a8403;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8600))[5];
//not do dummy comment
void* a8401 = (decode_clo(env8600))[4];
//not do dummy comment
void* kont8470 = (decode_clo(env8600))[3];
//not do dummy comment
void* proc = (decode_clo(env8600))[2];
//not do dummy comment
void* acc = (decode_clo(env8600))[1];

//creating new closure instance
void** clo8869 = alloc_clo(lam8597_fptr, 3);

//setting env list
clo8869[1] = kont8470;
clo8869[2] = proc;
clo8869[3] = a8401;
void* f8471 = encode_clo(clo8869);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8471;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8402;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8602))[6];
//not do dummy comment
void* kont8470 = (decode_clo(env8602))[5];
//not do dummy comment
void* foldr = (decode_clo(env8602))[4];
//not do dummy comment
void* lst = (decode_clo(env8602))[3];
//not do dummy comment
void* proc = (decode_clo(env8602))[2];
//not do dummy comment
void* acc = (decode_clo(env8602))[1];

//creating new closure instance
void** clo8871 = alloc_clo(lam8599_fptr, 5);

//setting env list
clo8871[1] = acc;
clo8871[2] = proc;
clo8871[3] = kont8470;
clo8871[4] = a8401;
clo8871[5] = foldr;
void* f8472 = encode_clo(clo8871);



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
void* a8400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8604))[7];
//not do dummy comment
void* foldr = (decode_clo(env8604))[6];
//not do dummy comment
void* lst = (decode_clo(env8604))[5];
//not do dummy comment
void* proc = (decode_clo(env8604))[4];
//not do dummy comment
void* acc = (decode_clo(env8604))[3];
//not do dummy comment
void* kont8470 = (decode_clo(env8604))[2];
//not do dummy comment
void* car = (decode_clo(env8604))[1];

//if-clause
bool if_guard8872 = is_true(a8400);
if(if_guard8872)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8470);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8470))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8874 = alloc_clo(lam8601_fptr, 6);

//setting env list
clo8874[1] = acc;
clo8874[2] = proc;
clo8874[3] = lst;
clo8874[4] = foldr;
clo8874[5] = kont8470;
clo8874[6] = cdr;
void* f8473 = encode_clo(clo8874);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8473);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8473))[0]);
function_ptr();
return nullptr;
}

}

void* lam8603 = encode_clo(alloc_clo(lam8603_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8605 = arg_buffer[1];
//reading env and args
void* kont8470 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8876 = alloc_clo(lam8603_fptr, 7);

//setting env list
clo8876[1] = car;
clo8876[2] = kont8470;
clo8876[3] = acc;
clo8876[4] = proc;
clo8876[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8876[6] = foldr;
clo8876[7] = cdr;
void* f8474 = encode_clo(clo8876);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8474);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8606_fptr() // lam8606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8607 = arg_buffer[1];
//reading env and args
void* a8407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8475 = (decode_clo(env8607))[3];
//not do dummy comment
void* a8405 = (decode_clo(env8607))[2];
//not do dummy comment
void* cons = (decode_clo(env8607))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8405, a8407);
arg_buffer[1]=reinterpret_cast<void*>(kont8475);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8475))[0]);
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
void* a8406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8475 = (decode_clo(env8609))[5];
//not do dummy comment
void* append = (decode_clo(env8609))[4];
//not do dummy comment
void* cons = (decode_clo(env8609))[3];
//not do dummy comment
void* a8405 = (decode_clo(env8609))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8609))[1];

//creating new closure instance
void** clo8878 = alloc_clo(lam8606_fptr, 3);

//setting env list
clo8878[1] = cons;
clo8878[2] = a8405;
clo8878[3] = kont8475;
void* f8476 = encode_clo(clo8878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8476;
arg_buffer[3] = a8406;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//call next proc using a function pointer
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
void* a8405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8611))[6];
//not do dummy comment
void* kont8475 = (decode_clo(env8611))[5];
//not do dummy comment
void* append = (decode_clo(env8611))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8611))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8611))[2];
//not do dummy comment
void* cons = (decode_clo(env8611))[1];

//creating new closure instance
void** clo8880 = alloc_clo(lam8608_fptr, 5);

//setting env list
clo8880[1] = lst2;
clo8880[2] = a8405;
clo8880[3] = cons;
clo8880[4] = append;
clo8880[5] = kont8475;
void* f8477 = encode_clo(clo8880);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8477);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
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
void* a8404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8613))[7];
//not do dummy comment
void* kont8475 = (decode_clo(env8613))[6];
//not do dummy comment
void* append = (decode_clo(env8613))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8613))[4];
//not do dummy comment
void* cons = (decode_clo(env8613))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8613))[2];
//not do dummy comment
void* car = (decode_clo(env8613))[1];

//if-clause
bool if_guard8881 = is_true(a8404);
if(if_guard8881)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8475);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8475))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8883 = alloc_clo(lam8610_fptr, 6);

//setting env list
clo8883[1] = cons;
clo8883[2] = lst1;
clo8883[3] = lst2;
clo8883[4] = append;
clo8883[5] = kont8475;
clo8883[6] = cdr;
void* f8478 = encode_clo(clo8883);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8478);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8478))[0]);
function_ptr();
return nullptr;
}

}

void* lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8614 = arg_buffer[1];
//reading env and args
void* kont8475 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8885 = alloc_clo(lam8612_fptr, 7);

//setting env list
clo8885[1] = car;
clo8885[2] = lst1;
clo8885[3] = cons;
clo8885[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8885[5] = append;
clo8885[6] = kont8475;
clo8885[7] = cdr;
void* f8479 = encode_clo(clo8885);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8479);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8615_fptr() // lam8615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8616 = arg_buffer[1];
//reading env and args
void* a8411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* substring = (decode_clo(env8616))[2];
//not do dummy comment
void* kont8480 = (decode_clo(env8616))[1];
void* cps_u45lst8481 = prim_cons(kont8480, a8411);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(substring);
arg_buffer[2] = cps_u45lst8481;
arg_buffer[0] = reinterpret_cast<void*>(2);
substring_fptr();
return nullptr;
}

void* lam8615 = encode_clo(alloc_clo(lam8615_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8620 = arg_buffer[1];
//reading env and args
void* kont8480 = arg_buffer[2];
//Dummy comment
void* a8408 = encode_str(new(GC) std::string("brouhaha"));
mpz_t* mpzvar8886 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8886, "4", 10);
void* a8409 = encode_mpz(mpzvar8886);
mpz_t* mpzvar8887 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8887, "10", 10);
void* a8410 = encode_mpz(mpzvar8887);

//creating new closure instance
void** clo8889 = alloc_clo(lam8615_fptr, 2);

//setting env list
clo8889[1] = kont8480;
clo8889[2] = substring;
void* f8482 = encode_clo(clo8889);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8482;
arg_buffer[3] = a8408;
arg_buffer[4] = a8409;
arg_buffer[5] = a8410;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8621_fptr() // lam8621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8622 = arg_buffer[1];
//reading env and args
void* xy8412 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8483 = (decode_clo(env8622))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8483);
arg_buffer[2] = xy8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8623 = arg_buffer[1];
//reading env and args
void* kont8483 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8891 = alloc_clo(lam8621_fptr, 1);

//setting env list
clo8891[1] = kont8483;
void* f8484 = encode_clo(clo8891);



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

