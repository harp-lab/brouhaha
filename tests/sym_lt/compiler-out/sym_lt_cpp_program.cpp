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
void* _env8584 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8582 = prim_car(lst);
void* lst8585 = prim_cdr(lst);
void* x8583 = apply_prim__u43(lst8585);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8582);
arg_buffer[2] = x8583;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8582))[0]);
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
void* _env8588 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8586 = prim_car(lst);
void* lst8589 = prim_cdr(lst);
void* x8587 = apply_prim__u45(lst8589);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8586);
arg_buffer[2] = x8587;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8586))[0]);
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
void* _env8592 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8590 = prim_car(lst);
void* lst8593 = prim_cdr(lst);
void* x8591 = apply_prim__u42(lst8593);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8590);
arg_buffer[2] = x8591;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8590))[0]);
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
void* _env8596 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8594 = prim_car(lst);
void* lst8597 = prim_cdr(lst);
void* x8595 = apply_prim__u47(lst8597);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8594);
arg_buffer[2] = x8595;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8594))[0]);
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
void* _env8600 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8598 = prim_car(lst);
void* lst8601 = prim_cdr(lst);
void* x8599 = apply_prim__u61(lst8601);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8598);
arg_buffer[2] = x8599;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8598))[0]);
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
void* _env8604 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8602 = prim_car(lst);
void* lst8605 = prim_cdr(lst);
void* x8603 = apply_prim__u62(lst8605);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8602);
arg_buffer[2] = x8603;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8602))[0]);
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
void* _env8608 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8606 = prim_car(lst);
void* lst8609 = prim_cdr(lst);
void* x8607 = apply_prim__u60(lst8609);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8606);
arg_buffer[2] = x8607;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8606))[0]);
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
void* _env8612 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8610 = prim_car(lst);
void* lst8613 = prim_cdr(lst);
void* x8611 = apply_prim__u60_u61(lst8613);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8610);
arg_buffer[2] = x8611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8610))[0]);
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
void* x8615 = apply_prim__u62_u61(lst8617);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8614);
arg_buffer[2] = x8615;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8614))[0]);
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
void* x8619 = apply_prim_modulo(lst8621);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8618);
arg_buffer[2] = x8619;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8618))[0]);
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
void* x8623 = apply_prim_null_u63(lst8625);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8622);
arg_buffer[2] = x8623;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8622))[0]);
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
void* x8627 = apply_prim_equal_u63(lst8629);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8626);
arg_buffer[2] = x8627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8626))[0]);
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
void* x8631 = apply_prim_eq_u63(lst8633);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8630);
arg_buffer[2] = x8631;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8630))[0]);
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
void* x8635 = apply_prim_cons(lst8637);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8634);
arg_buffer[2] = x8635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8634))[0]);
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
void* x8639 = apply_prim_car(lst8641);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8638);
arg_buffer[2] = x8639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8638))[0]);
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
void* x8643 = apply_prim_cdr(lst8645);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8642);
arg_buffer[2] = x8643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8642))[0]);
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
void* x8647 = apply_prim_float_u45_u62int(lst8649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8646);
arg_buffer[2] = x8647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8646))[0]);
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
void* x8651 = apply_prim_int_u45_u62float(lst8653);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8650);
arg_buffer[2] = x8651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8650))[0]);
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
void* x8655 = apply_prim_hash(lst8657);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8654);
arg_buffer[2] = x8655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8654))[0]);
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
void* x8659 = apply_prim_hash_u45ref(lst8661);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8658);
arg_buffer[2] = x8659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8658))[0]);
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
void* x8663 = apply_prim_hash_u45set(lst8665);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8662);
arg_buffer[2] = x8663;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8662))[0]);
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
void* x8667 = apply_prim_hash_u45keys(lst8669);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8666);
arg_buffer[2] = x8667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8666))[0]);
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
void* x8671 = apply_prim_hash_u45has_u45key_u63(lst8673);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8670);
arg_buffer[2] = x8671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8670))[0]);
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
void* x8675 = apply_prim_hash_u45count(lst8677);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8674);
arg_buffer[2] = x8675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8674))[0]);
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
void* x8679 = apply_prim_set(lst8681);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8678);
arg_buffer[2] = x8679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8678))[0]);
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
void* x8683 = apply_prim_set_u45_u62list(lst8685);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8682);
arg_buffer[2] = x8683;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682))[0]);
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
void* x8687 = apply_prim_list_u45_u62set(lst8689);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8686);
arg_buffer[2] = x8687;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8686))[0]);
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
void* x8691 = apply_prim_set_u45add(lst8693);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8690);
arg_buffer[2] = x8691;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8690))[0]);
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
void* x8695 = apply_prim_set_u45member_u63(lst8697);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8694);
arg_buffer[2] = x8695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8694))[0]);
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
void* x8699 = apply_prim_set_u45remove(lst8701);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8698);
arg_buffer[2] = x8699;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8698))[0]);
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
void* x8703 = apply_prim_set_u45count(lst8705);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8702);
arg_buffer[2] = x8703;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8702))[0]);
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
void* x8707 = apply_prim_string_u63(lst8709);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8706);
arg_buffer[2] = x8707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8706))[0]);
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
void* x8711 = apply_prim_string_u45length(lst8713);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8710);
arg_buffer[2] = x8711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8710))[0]);
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
void* x8715 = apply_prim_string_u45ref(lst8717);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8714);
arg_buffer[2] = x8715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8714))[0]);
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
void* x8719 = apply_prim_substring(lst8721);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8718);
arg_buffer[2] = x8719;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8718))[0]);
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
void* x8723 = apply_prim_string_u45append(lst8725);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8722);
arg_buffer[2] = x8723;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8722))[0]);
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
void* x8727 = apply_prim_string_u45_u62list(lst8729);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8726);
arg_buffer[2] = x8727;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8726))[0]);
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
void* x8731 = apply_prim_exact_u45floor(lst8733);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8730);
arg_buffer[2] = x8731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8730))[0]);
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
void* x8735 = apply_prim_exact_u45ceiling(lst8737);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8734);
arg_buffer[2] = x8735;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8734))[0]);
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
void* x8739 = apply_prim_exact_u45round(lst8741);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8738);
arg_buffer[2] = x8739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8738))[0]);
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
void* x8743 = apply_prim_absolute(lst8745);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8742);
arg_buffer[2] = x8743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8742))[0]);
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
void* x8747 = apply_prim_max(lst8749);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8746);
arg_buffer[2] = x8747;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8746))[0]);
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
void* x8751 = apply_prim_min(lst8753);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8750);
arg_buffer[2] = x8751;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8750))[0]);
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
void* x8755 = apply_prim_expt(lst8757);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8754);
arg_buffer[2] = x8755;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8754))[0]);
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
void* x8759 = apply_prim_squareroot(lst8761);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8758);
arg_buffer[2] = x8759;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8758))[0]);
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
void* x8763 = apply_prim_remaind(lst8765);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8762);
arg_buffer[2] = x8763;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8762))[0]);
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
void* x8767 = apply_prim_quotient(lst8769);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8766);
arg_buffer[2] = x8767;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8766))[0]);
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
void* x8771 = apply_prim_randnum(lst8773);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8770);
arg_buffer[2] = x8771;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8770))[0]);
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
void* x8775 = apply_prim_symbol_u63(lst8777);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8774);
arg_buffer[2] = x8775;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8774))[0]);
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
void* x8779 = apply_prim_pair_u63(lst8781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8778);
arg_buffer[2] = x8779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8778))[0]);
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
void* x8783 = apply_prim_positive_u63(lst8785);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8782);
arg_buffer[2] = x8783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8782))[0]);
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
void* x8787 = apply_prim_negative_u63(lst8789);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8786);
arg_buffer[2] = x8787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8786))[0]);
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
void* _8449 = arg_buffer[1];
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

void* kont8380 = prim_car(x);
void* x8448 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8380);
arg_buffer[2] = x8448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8380))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8450_fptr() // lam8450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8451 = arg_buffer[1];
//reading env and args
void* a8317 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8451))[3];
//not do dummy comment
void* a8315 = (decode_clo(env8451))[2];
//not do dummy comment
void* kont8381 = (decode_clo(env8451))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8381;
arg_buffer[3] = a8315;
arg_buffer[4] = a8317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8450 = encode_clo(alloc_clo(lam8450_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8454 = arg_buffer[1];
//reading env and args
void* kont8381 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8790 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8790, "0", 10);
void* a8315 = encode_mpz(mpzvar8790);
mpz_t* mpzvar8791 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8791, "2", 10);
void* a8316 = encode_mpz(mpzvar8791);

//creating new closure instance
void** clo8793 = alloc_clo(lam8450_fptr, 3);

//setting env list
clo8793[1] = kont8381;
clo8793[2] = a8315;
clo8793[3] = equal_u63;
void* f8382 = encode_clo(clo8793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8382;
arg_buffer[3] = x;
arg_buffer[4] = a8316;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8455_fptr() // lam8455 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8456 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8456))[3];
//not do dummy comment
void* a8318 = (decode_clo(env8456))[2];
//not do dummy comment
void* kont8383 = (decode_clo(env8456))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8383;
arg_buffer[3] = a8318;
arg_buffer[4] = a8320;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8455 = encode_clo(alloc_clo(lam8455_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8459 = arg_buffer[1];
//reading env and args
void* kont8383 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8794 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8794, "1", 10);
void* a8318 = encode_mpz(mpzvar8794);
mpz_t* mpzvar8795 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8795, "2", 10);
void* a8319 = encode_mpz(mpzvar8795);

//creating new closure instance
void** clo8797 = alloc_clo(lam8455_fptr, 3);

//setting env list
clo8797[1] = kont8383;
clo8797[2] = a8318;
clo8797[3] = equal_u63;
void* f8384 = encode_clo(clo8797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8384;
arg_buffer[3] = x;
arg_buffer[4] = a8319;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8462_fptr() // lam8462 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8463 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8385 = (decode_clo(env8463))[3];
//not do dummy comment
void* x = (decode_clo(env8463))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8463))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8385;
arg_buffer[3] = x;
arg_buffer[4] = a8326;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8462 = encode_clo(alloc_clo(lam8462_fptr, 0));

void* lam8464_fptr() // lam8464 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8465 = arg_buffer[1];
//reading env and args
void* a8324 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8465))[5];
//not do dummy comment
void* kont8385 = (decode_clo(env8465))[4];
//not do dummy comment
void* lst = (decode_clo(env8465))[3];
//not do dummy comment
void* x = (decode_clo(env8465))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8465))[1];

//if-clause
bool if_guard8798 = is_true(a8324);
if(if_guard8798)
{
void* xy8325 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8385);
arg_buffer[2] = xy8325;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8385))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8800 = alloc_clo(lam8462_fptr, 3);

//setting env list
clo8800[1] = member_u63;
clo8800[2] = x;
clo8800[3] = kont8385;
void* f8386 = encode_clo(clo8800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8464 = encode_clo(alloc_clo(lam8464_fptr, 0));

void* lam8466_fptr() // lam8466 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8467 = arg_buffer[1];
//reading env and args
void* a8323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8467))[6];
//not do dummy comment
void* kont8385 = (decode_clo(env8467))[5];
//not do dummy comment
void* lst = (decode_clo(env8467))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8467))[3];
//not do dummy comment
void* x = (decode_clo(env8467))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8467))[1];

//creating new closure instance
void** clo8802 = alloc_clo(lam8464_fptr, 5);

//setting env list
clo8802[1] = member_u63;
clo8802[2] = x;
clo8802[3] = lst;
clo8802[4] = kont8385;
clo8802[5] = cdr;
void* f8387 = encode_clo(clo8802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8387;
arg_buffer[3] = a8323;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8466 = encode_clo(alloc_clo(lam8466_fptr, 0));

void* lam8468_fptr() // lam8468 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8469 = arg_buffer[1];
//reading env and args
void* a8321 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8469))[7];
//not do dummy comment
void* kont8385 = (decode_clo(env8469))[6];
//not do dummy comment
void* lst = (decode_clo(env8469))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8469))[4];
//not do dummy comment
void* x = (decode_clo(env8469))[3];
//not do dummy comment
void* car = (decode_clo(env8469))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8469))[1];

//if-clause
bool if_guard8803 = is_true(a8321);
if(if_guard8803)
{
void* xy8322 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8385);
arg_buffer[2] = xy8322;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8385))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8805 = alloc_clo(lam8466_fptr, 6);

//setting env list
clo8805[1] = member_u63;
clo8805[2] = x;
clo8805[3] = equal_u63;
clo8805[4] = lst;
clo8805[5] = kont8385;
clo8805[6] = cdr;
void* f8388 = encode_clo(clo8805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8468 = encode_clo(alloc_clo(lam8468_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8470 = arg_buffer[1];
//reading env and args
void* kont8385 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8807 = alloc_clo(lam8468_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8807[1] = member_u63;
clo8807[2] = car;
clo8807[3] = x;
clo8807[4] = equal_u63;
clo8807[5] = lst;
clo8807[6] = kont8385;
clo8807[7] = cdr;
void* f8389 = encode_clo(clo8807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8389;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8471_fptr() // lam8471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8472 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8390 = (decode_clo(env8472))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8472))[2];
//not do dummy comment
void* a8328 = (decode_clo(env8472))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8390;
arg_buffer[3] = a8328;
arg_buffer[4] = a8330;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8471 = encode_clo(alloc_clo(lam8471_fptr, 0));

void* lam8473_fptr() // lam8473 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8474 = arg_buffer[1];
//reading env and args
void* a8329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8390 = (decode_clo(env8474))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8474))[4];
//not do dummy comment
void* a8328 = (decode_clo(env8474))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8474))[2];
//not do dummy comment
void* cons = (decode_clo(env8474))[1];

//creating new closure instance
void** clo8809 = alloc_clo(lam8471_fptr, 3);

//setting env list
clo8809[1] = a8328;
clo8809[2] = reverse_u45helper;
clo8809[3] = kont8390;
void* f8391 = encode_clo(clo8809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8391;
arg_buffer[3] = a8329;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8473 = encode_clo(alloc_clo(lam8473_fptr, 0));

void* lam8475_fptr() // lam8475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8476 = arg_buffer[1];
//reading env and args
void* a8328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8476))[6];
//not do dummy comment
void* kont8390 = (decode_clo(env8476))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8476))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8476))[3];
//not do dummy comment
void* car = (decode_clo(env8476))[2];
//not do dummy comment
void* cons = (decode_clo(env8476))[1];

//creating new closure instance
void** clo8811 = alloc_clo(lam8473_fptr, 5);

//setting env list
clo8811[1] = cons;
clo8811[2] = lst2;
clo8811[3] = a8328;
clo8811[4] = reverse_u45helper;
clo8811[5] = kont8390;
void* f8392 = encode_clo(clo8811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8392;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8475 = encode_clo(alloc_clo(lam8475_fptr, 0));

void* lam8477_fptr() // lam8477 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8478 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8478))[7];
//not do dummy comment
void* lst = (decode_clo(env8478))[6];
//not do dummy comment
void* kont8390 = (decode_clo(env8478))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8478))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8478))[3];
//not do dummy comment
void* car = (decode_clo(env8478))[2];
//not do dummy comment
void* cons = (decode_clo(env8478))[1];

//if-clause
bool if_guard8812 = is_true(a8327);
if(if_guard8812)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8390);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8390))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8814 = alloc_clo(lam8475_fptr, 6);

//setting env list
clo8814[1] = cons;
clo8814[2] = car;
clo8814[3] = lst2;
clo8814[4] = reverse_u45helper;
clo8814[5] = kont8390;
clo8814[6] = lst;
void* f8393 = encode_clo(clo8814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8477 = encode_clo(alloc_clo(lam8477_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8479 = arg_buffer[1];
//reading env and args
void* kont8390 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8816 = alloc_clo(lam8477_fptr, 7);

//setting env list
clo8816[1] = cons;
clo8816[2] = car;
clo8816[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8816[4] = reverse_u45helper;
clo8816[5] = kont8390;
clo8816[6] = lst;
clo8816[7] = cdr;
void* f8394 = encode_clo(clo8816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8394;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8480_fptr() // lam8480 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8481 = arg_buffer[1];
//reading env and args
void* a8331 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8481))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8481))[2];
//not do dummy comment
void* kont8395 = (decode_clo(env8481))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8395;
arg_buffer[3] = lst;
arg_buffer[4] = a8331;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8480 = encode_clo(alloc_clo(lam8480_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8482 = arg_buffer[1];
//reading env and args
void* kont8395 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8818 = alloc_clo(lam8480_fptr, 3);

//setting env list
clo8818[1] = kont8395;
clo8818[2] = reverse_u45helper;
clo8818[3] = lst;
void* f8396 = encode_clo(clo8818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8483_fptr() // lam8483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8484 = arg_buffer[1];
//reading env and args
void* xy8334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8397 = (decode_clo(env8484))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8397);
arg_buffer[2] = xy8334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8397))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8483 = encode_clo(alloc_clo(lam8483_fptr, 0));

void* lam8485_fptr() // lam8485 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8486 = arg_buffer[1];
//reading env and args
void* a8339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8337 = (decode_clo(env8486))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8486))[3];
//not do dummy comment
void* kont8397 = (decode_clo(env8486))[2];
//not do dummy comment
void* a8335 = (decode_clo(env8486))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8397;
arg_buffer[3] = a8335;
arg_buffer[4] = a8337;
arg_buffer[5] = a8339;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8485 = encode_clo(alloc_clo(lam8485_fptr, 0));

void* lam8487_fptr() // lam8487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8488 = arg_buffer[1];
//reading env and args
void* a8338 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8337 = (decode_clo(env8488))[6];
//not do dummy comment
void* kont8397 = (decode_clo(env8488))[5];
//not do dummy comment
void* cons = (decode_clo(env8488))[4];
//not do dummy comment
void* a8335 = (decode_clo(env8488))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8488))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8488))[1];

//creating new closure instance
void** clo8820 = alloc_clo(lam8485_fptr, 4);

//setting env list
clo8820[1] = a8335;
clo8820[2] = kont8397;
clo8820[3] = take_u45helper;
clo8820[4] = a8337;
void* f8399 = encode_clo(clo8820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8399;
arg_buffer[3] = a8338;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8487 = encode_clo(alloc_clo(lam8487_fptr, 0));

void* lam8489_fptr() // lam8489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8490 = arg_buffer[1];
//reading env and args
void* a8337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8490))[7];
//not do dummy comment
void* cons = (decode_clo(env8490))[6];
//not do dummy comment
void* a8335 = (decode_clo(env8490))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8490))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8490))[3];
//not do dummy comment
void* kont8397 = (decode_clo(env8490))[2];
//not do dummy comment
void* car = (decode_clo(env8490))[1];

//creating new closure instance
void** clo8822 = alloc_clo(lam8487_fptr, 6);

//setting env list
clo8822[1] = lst2;
clo8822[2] = take_u45helper;
clo8822[3] = a8335;
clo8822[4] = cons;
clo8822[5] = kont8397;
clo8822[6] = a8337;
void* f8400 = encode_clo(clo8822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8400;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8489 = encode_clo(alloc_clo(lam8489_fptr, 0));

void* lam8492_fptr() // lam8492 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8493 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8493))[8];
//not do dummy comment
void* cons = (decode_clo(env8493))[7];
//not do dummy comment
void* _u45 = (decode_clo(env8493))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env8493))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8493))[4];
//not do dummy comment
void* kont8397 = (decode_clo(env8493))[3];
//not do dummy comment
void* n = (decode_clo(env8493))[2];
//not do dummy comment
void* car = (decode_clo(env8493))[1];
mpz_t* mpzvar8823 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8823, "1", 10);
void* a8336 = encode_mpz(mpzvar8823);

//creating new closure instance
void** clo8825 = alloc_clo(lam8489_fptr, 7);

//setting env list
clo8825[1] = car;
clo8825[2] = kont8397;
clo8825[3] = lst2;
clo8825[4] = take_u45helper;
clo8825[5] = a8335;
clo8825[6] = cons;
clo8825[7] = lst;
void* f8401 = encode_clo(clo8825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8401;
arg_buffer[3] = n;
arg_buffer[4] = a8336;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8492 = encode_clo(alloc_clo(lam8492_fptr, 0));

void* lam8494_fptr() // lam8494 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8495 = arg_buffer[1];
//reading env and args
void* a8333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8495))[10];
//not do dummy comment
void* lst = (decode_clo(env8495))[9];
//not do dummy comment
void* reverse = (decode_clo(env8495))[8];
//not do dummy comment
void* cons = (decode_clo(env8495))[7];
//not do dummy comment
void* _u45 = (decode_clo(env8495))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env8495))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8495))[4];
//not do dummy comment
void* kont8397 = (decode_clo(env8495))[3];
//not do dummy comment
void* n = (decode_clo(env8495))[2];
//not do dummy comment
void* car = (decode_clo(env8495))[1];

//if-clause
bool if_guard8826 = is_true(a8333);
if(if_guard8826)
{

//creating new closure instance
void** clo8828 = alloc_clo(lam8483_fptr, 1);

//setting env list
clo8828[1] = kont8397;
void* f8398 = encode_clo(clo8828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8398;
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
void** clo8830 = alloc_clo(lam8492_fptr, 8);

//setting env list
clo8830[1] = car;
clo8830[2] = n;
clo8830[3] = kont8397;
clo8830[4] = lst2;
clo8830[5] = take_u45helper;
clo8830[6] = _u45;
clo8830[7] = cons;
clo8830[8] = lst;
void* f8402 = encode_clo(clo8830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8402;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8494 = encode_clo(alloc_clo(lam8494_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8497 = arg_buffer[1];
//reading env and args
void* kont8397 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8831 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8831, "0", 10);
void* a8332 = encode_mpz(mpzvar8831);

//creating new closure instance
void** clo8833 = alloc_clo(lam8494_fptr, 10);

//setting env list
clo8833[1] = car;
clo8833[2] = n;
clo8833[3] = kont8397;
clo8833[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8833[5] = take_u45helper;
clo8833[6] = _u45;
clo8833[7] = cons;
clo8833[8] = reverse;
clo8833[9] = lst;
clo8833[10] = cdr;
void* f8403 = encode_clo(clo8833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8403;
arg_buffer[3] = n;
arg_buffer[4] = a8332;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8498_fptr() // lam8498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8499 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env8499))[4];
//not do dummy comment
void* n = (decode_clo(env8499))[3];
//not do dummy comment
void* lst = (decode_clo(env8499))[2];
//not do dummy comment
void* kont8404 = (decode_clo(env8499))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8404;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8340;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8498 = encode_clo(alloc_clo(lam8498_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8500 = arg_buffer[1];
//reading env and args
void* kont8404 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8835 = alloc_clo(lam8498_fptr, 4);

//setting env list
clo8835[1] = kont8404;
clo8835[2] = lst;
clo8835[3] = n;
clo8835[4] = take_u45helper;
void* f8405 = encode_clo(clo8835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8405;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8502_fptr() // lam8502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8503 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8406 = (decode_clo(env8503))[3];
//not do dummy comment
void* a8343 = (decode_clo(env8503))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8503))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8406;
arg_buffer[3] = a8343;
arg_buffer[4] = a8345;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
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
void* a8344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8505))[4];
//not do dummy comment
void* kont8406 = (decode_clo(env8505))[3];
//not do dummy comment
void* a8343 = (decode_clo(env8505))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8505))[1];

//creating new closure instance
void** clo8837 = alloc_clo(lam8502_fptr, 3);

//setting env list
clo8837[1] = _u43;
clo8837[2] = a8343;
clo8837[3] = kont8406;
void* f8407 = encode_clo(clo8837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8407;
arg_buffer[3] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8504 = encode_clo(alloc_clo(lam8504_fptr, 0));

void* lam8507_fptr() // lam8507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8508 = arg_buffer[1];
//reading env and args
void* a8341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8508))[5];
//not do dummy comment
void* lst = (decode_clo(env8508))[4];
//not do dummy comment
void* length = (decode_clo(env8508))[3];
//not do dummy comment
void* kont8406 = (decode_clo(env8508))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8508))[1];

//if-clause
bool if_guard8838 = is_true(a8341);
if(if_guard8838)
{
mpz_t* mpzvar8839 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8839, "0", 10);
void* xy8342 = encode_mpz(mpzvar8839);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8406);
arg_buffer[2] = xy8342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8406))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8840 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8840, "1", 10);
void* a8343 = encode_mpz(mpzvar8840);

//creating new closure instance
void** clo8842 = alloc_clo(lam8504_fptr, 4);

//setting env list
clo8842[1] = _u43;
clo8842[2] = a8343;
clo8842[3] = kont8406;
clo8842[4] = length;
void* f8408 = encode_clo(clo8842);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8408;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8507 = encode_clo(alloc_clo(lam8507_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8509 = arg_buffer[1];
//reading env and args
void* kont8406 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8844 = alloc_clo(lam8507_fptr, 5);

//setting env list
clo8844[1] = _u43;
clo8844[2] = kont8406;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8844[3] = length;
clo8844[4] = lst;
clo8844[5] = cdr;
void* f8409 = encode_clo(clo8844);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8409;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8510_fptr() // lam8510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8511 = arg_buffer[1];
//reading env and args
void* xy8347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8410 = (decode_clo(env8511))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8410);
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8410))[0]);
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
void* a8351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8410 = (decode_clo(env8513))[3];
//not do dummy comment
void* a8349 = (decode_clo(env8513))[2];
//not do dummy comment
void* cons = (decode_clo(env8513))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8410;
arg_buffer[3] = a8349;
arg_buffer[4] = a8351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8515))[5];
//not do dummy comment
void* kont8410 = (decode_clo(env8515))[4];
//not do dummy comment
void* proc = (decode_clo(env8515))[3];
//not do dummy comment
void* a8349 = (decode_clo(env8515))[2];
//not do dummy comment
void* cons = (decode_clo(env8515))[1];

//creating new closure instance
void** clo8846 = alloc_clo(lam8512_fptr, 3);

//setting env list
clo8846[1] = cons;
clo8846[2] = a8349;
clo8846[3] = kont8410;
void* f8412 = encode_clo(clo8846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8412;
arg_buffer[3] = proc;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8517))[6];
//not do dummy comment
void* lst = (decode_clo(env8517))[5];
//not do dummy comment
void* map = (decode_clo(env8517))[4];
//not do dummy comment
void* kont8410 = (decode_clo(env8517))[3];
//not do dummy comment
void* proc = (decode_clo(env8517))[2];
//not do dummy comment
void* cons = (decode_clo(env8517))[1];

//creating new closure instance
void** clo8848 = alloc_clo(lam8514_fptr, 5);

//setting env list
clo8848[1] = cons;
clo8848[2] = a8349;
clo8848[3] = proc;
clo8848[4] = kont8410;
clo8848[5] = map;
void* f8413 = encode_clo(clo8848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8413;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
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
void* a8348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8519))[6];
//not do dummy comment
void* lst = (decode_clo(env8519))[5];
//not do dummy comment
void* map = (decode_clo(env8519))[4];
//not do dummy comment
void* kont8410 = (decode_clo(env8519))[3];
//not do dummy comment
void* proc = (decode_clo(env8519))[2];
//not do dummy comment
void* cons = (decode_clo(env8519))[1];

//creating new closure instance
void** clo8850 = alloc_clo(lam8516_fptr, 6);

//setting env list
clo8850[1] = cons;
clo8850[2] = proc;
clo8850[3] = kont8410;
clo8850[4] = map;
clo8850[5] = lst;
clo8850[6] = cdr;
void* f8414 = encode_clo(clo8850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8414;
arg_buffer[3] = a8348;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8521))[8];
//not do dummy comment
void* map = (decode_clo(env8521))[7];
//not do dummy comment
void* kont8410 = (decode_clo(env8521))[6];
//not do dummy comment
void* proc = (decode_clo(env8521))[5];
//not do dummy comment
void* car = (decode_clo(env8521))[4];
//not do dummy comment
void* cons = (decode_clo(env8521))[3];
//not do dummy comment
void* list = (decode_clo(env8521))[2];
//not do dummy comment
void* cdr = (decode_clo(env8521))[1];

//if-clause
bool if_guard8851 = is_true(a8346);
if(if_guard8851)
{

//creating new closure instance
void** clo8853 = alloc_clo(lam8510_fptr, 1);

//setting env list
clo8853[1] = kont8410;
void* f8411 = encode_clo(clo8853);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8855 = alloc_clo(lam8518_fptr, 6);

//setting env list
clo8855[1] = cons;
clo8855[2] = proc;
clo8855[3] = kont8410;
clo8855[4] = map;
clo8855[5] = lst;
clo8855[6] = cdr;
void* f8415 = encode_clo(clo8855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8415;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8520 = encode_clo(alloc_clo(lam8520_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8522 = arg_buffer[1];
//reading env and args
void* kont8410 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8857 = alloc_clo(lam8520_fptr, 8);

//setting env list
clo8857[1] = cdr;
clo8857[2] = list;
clo8857[3] = cons;
clo8857[4] = car;
clo8857[5] = proc;
clo8857[6] = kont8410;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8857[7] = map;
clo8857[8] = lst;
void* f8416 = encode_clo(clo8857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8523_fptr() // lam8523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8524 = arg_buffer[1];
//reading env and args
void* xy8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8417);
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8526))[3];
//not do dummy comment
void* a8356 = (decode_clo(env8526))[2];
//not do dummy comment
void* cons = (decode_clo(env8526))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8417;
arg_buffer[3] = a8356;
arg_buffer[4] = a8358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8528))[5];
//not do dummy comment
void* a8356 = (decode_clo(env8528))[4];
//not do dummy comment
void* op = (decode_clo(env8528))[3];
//not do dummy comment
void* filter = (decode_clo(env8528))[2];
//not do dummy comment
void* cons = (decode_clo(env8528))[1];

//creating new closure instance
void** clo8859 = alloc_clo(lam8525_fptr, 3);

//setting env list
clo8859[1] = cons;
clo8859[2] = a8356;
clo8859[3] = kont8417;
void* f8419 = encode_clo(clo8859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8419;
arg_buffer[3] = op;
arg_buffer[4] = a8357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8530))[6];
//not do dummy comment
void* kont8417 = (decode_clo(env8530))[5];
//not do dummy comment
void* lst = (decode_clo(env8530))[4];
//not do dummy comment
void* op = (decode_clo(env8530))[3];
//not do dummy comment
void* filter = (decode_clo(env8530))[2];
//not do dummy comment
void* cons = (decode_clo(env8530))[1];

//creating new closure instance
void** clo8861 = alloc_clo(lam8527_fptr, 5);

//setting env list
clo8861[1] = cons;
clo8861[2] = filter;
clo8861[3] = op;
clo8861[4] = a8356;
clo8861[5] = kont8417;
void* f8420 = encode_clo(clo8861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8532))[3];
//not do dummy comment
void* op = (decode_clo(env8532))[2];
//not do dummy comment
void* filter = (decode_clo(env8532))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8417;
arg_buffer[3] = op;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8534))[7];
//not do dummy comment
void* kont8417 = (decode_clo(env8534))[6];
//not do dummy comment
void* lst = (decode_clo(env8534))[5];
//not do dummy comment
void* op = (decode_clo(env8534))[4];
//not do dummy comment
void* cons = (decode_clo(env8534))[3];
//not do dummy comment
void* filter = (decode_clo(env8534))[2];
//not do dummy comment
void* car = (decode_clo(env8534))[1];

//if-clause
bool if_guard8862 = is_true(a8355);
if(if_guard8862)
{

//creating new closure instance
void** clo8864 = alloc_clo(lam8529_fptr, 6);

//setting env list
clo8864[1] = cons;
clo8864[2] = filter;
clo8864[3] = op;
clo8864[4] = lst;
clo8864[5] = kont8417;
clo8864[6] = cdr;
void* f8421 = encode_clo(clo8864);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8866 = alloc_clo(lam8531_fptr, 3);

//setting env list
clo8866[1] = filter;
clo8866[2] = op;
clo8866[3] = kont8417;
void* f8422 = encode_clo(clo8866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void* lam8535_fptr() // lam8535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8536 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8536))[7];
//not do dummy comment
void* kont8417 = (decode_clo(env8536))[6];
//not do dummy comment
void* lst = (decode_clo(env8536))[5];
//not do dummy comment
void* op = (decode_clo(env8536))[4];
//not do dummy comment
void* cons = (decode_clo(env8536))[3];
//not do dummy comment
void* filter = (decode_clo(env8536))[2];
//not do dummy comment
void* car = (decode_clo(env8536))[1];

//creating new closure instance
void** clo8868 = alloc_clo(lam8533_fptr, 7);

//setting env list
clo8868[1] = car;
clo8868[2] = filter;
clo8868[3] = cons;
clo8868[4] = op;
clo8868[5] = lst;
clo8868[6] = kont8417;
clo8868[7] = cdr;
void* f8423 = encode_clo(clo8868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8423;
arg_buffer[3] = a8354;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8538))[8];
//not do dummy comment
void* lst = (decode_clo(env8538))[7];
//not do dummy comment
void* op = (decode_clo(env8538))[6];
//not do dummy comment
void* cons = (decode_clo(env8538))[5];
//not do dummy comment
void* list = (decode_clo(env8538))[4];
//not do dummy comment
void* cdr = (decode_clo(env8538))[3];
//not do dummy comment
void* filter = (decode_clo(env8538))[2];
//not do dummy comment
void* car = (decode_clo(env8538))[1];

//if-clause
bool if_guard8869 = is_true(a8352);
if(if_guard8869)
{

//creating new closure instance
void** clo8871 = alloc_clo(lam8523_fptr, 1);

//setting env list
clo8871[1] = kont8417;
void* f8418 = encode_clo(clo8871);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8873 = alloc_clo(lam8535_fptr, 7);

//setting env list
clo8873[1] = car;
clo8873[2] = filter;
clo8873[3] = cons;
clo8873[4] = op;
clo8873[5] = lst;
clo8873[6] = kont8417;
clo8873[7] = cdr;
void* f8424 = encode_clo(clo8873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8537 = encode_clo(alloc_clo(lam8537_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8539 = arg_buffer[1];
//reading env and args
void* kont8417 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8875 = alloc_clo(lam8537_fptr, 8);

//setting env list
clo8875[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8875[2] = filter;
clo8875[3] = cdr;
clo8875[4] = list;
clo8875[5] = cons;
clo8875[6] = op;
clo8875[7] = lst;
clo8875[8] = kont8417;
void* f8425 = encode_clo(clo8875);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8425;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8540_fptr() // lam8540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8541 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8541))[3];
//not do dummy comment
void* a8362 = (decode_clo(env8541))[2];
//not do dummy comment
void* kont8426 = (decode_clo(env8541))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8426;
arg_buffer[3] = a8362;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void* lam8543_fptr() // lam8543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8544 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8544))[4];
//not do dummy comment
void* kont8426 = (decode_clo(env8544))[3];
//not do dummy comment
void* n = (decode_clo(env8544))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8544))[1];
mpz_t* mpzvar8876 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8876, "1", 10);
void* a8363 = encode_mpz(mpzvar8876);

//creating new closure instance
void** clo8878 = alloc_clo(lam8540_fptr, 3);

//setting env list
clo8878[1] = kont8426;
clo8878[2] = a8362;
clo8878[3] = drop;
void* f8427 = encode_clo(clo8878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8427;
arg_buffer[3] = n;
arg_buffer[4] = a8363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//call next proc using a function pointer
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8546))[6];
//not do dummy comment
void* kont8426 = (decode_clo(env8546))[5];
//not do dummy comment
void* n = (decode_clo(env8546))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8546))[3];
//not do dummy comment
void* lst = (decode_clo(env8546))[2];
//not do dummy comment
void* drop = (decode_clo(env8546))[1];

//if-clause
bool if_guard8879 = is_true(a8361);
if(if_guard8879)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8426);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8426))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8881 = alloc_clo(lam8543_fptr, 4);

//setting env list
clo8881[1] = _u45;
clo8881[2] = n;
clo8881[3] = kont8426;
clo8881[4] = drop;
void* f8428 = encode_clo(clo8881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8548 = arg_buffer[1];
//reading env and args
void* kont8426 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8882 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8882, "0", 10);
void* a8360 = encode_mpz(mpzvar8882);

//creating new closure instance
void** clo8884 = alloc_clo(lam8545_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8884[1] = drop;
clo8884[2] = lst;
clo8884[3] = _u45;
clo8884[4] = n;
clo8884[5] = kont8426;
clo8884[6] = cdr;
void* f8429 = encode_clo(clo8884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8429;
arg_buffer[3] = n;
arg_buffer[4] = a8360;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8549_fptr() // lam8549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8550 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env8550))[4];
//not do dummy comment
void* a8367 = (decode_clo(env8550))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8550))[2];
//not do dummy comment
void* foldl = (decode_clo(env8550))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8430;
arg_buffer[3] = fun;
arg_buffer[4] = a8367;
arg_buffer[5] = a8368;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//call next proc using a function pointer
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
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8552))[5];
//not do dummy comment
void* lst = (decode_clo(env8552))[4];
//not do dummy comment
void* fun = (decode_clo(env8552))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8552))[2];
//not do dummy comment
void* foldl = (decode_clo(env8552))[1];

//creating new closure instance
void** clo8886 = alloc_clo(lam8549_fptr, 4);

//setting env list
clo8886[1] = foldl;
clo8886[2] = kont8430;
clo8886[3] = a8367;
clo8886[4] = fun;
void* f8431 = encode_clo(clo8886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8554))[6];
//not do dummy comment
void* lst = (decode_clo(env8554))[5];
//not do dummy comment
void* fun = (decode_clo(env8554))[4];
//not do dummy comment
void* acc = (decode_clo(env8554))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8554))[2];
//not do dummy comment
void* foldl = (decode_clo(env8554))[1];

//creating new closure instance
void** clo8888 = alloc_clo(lam8551_fptr, 5);

//setting env list
clo8888[1] = foldl;
clo8888[2] = kont8430;
clo8888[3] = fun;
clo8888[4] = lst;
clo8888[5] = cdr;
void* f8432 = encode_clo(clo8888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8432;
arg_buffer[3] = a8366;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8556))[7];
//not do dummy comment
void* lst = (decode_clo(env8556))[6];
//not do dummy comment
void* fun = (decode_clo(env8556))[5];
//not do dummy comment
void* acc = (decode_clo(env8556))[4];
//not do dummy comment
void* car = (decode_clo(env8556))[3];
//not do dummy comment
void* kont8430 = (decode_clo(env8556))[2];
//not do dummy comment
void* foldl = (decode_clo(env8556))[1];

//if-clause
bool if_guard8889 = is_true(a8365);
if(if_guard8889)
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
void** clo8891 = alloc_clo(lam8553_fptr, 6);

//setting env list
clo8891[1] = foldl;
clo8891[2] = kont8430;
clo8891[3] = acc;
clo8891[4] = fun;
clo8891[5] = lst;
clo8891[6] = cdr;
void* f8433 = encode_clo(clo8891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8557 = arg_buffer[1];
//reading env and args
void* kont8430 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8893 = alloc_clo(lam8555_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8893[1] = foldl;
clo8893[2] = kont8430;
clo8893[3] = car;
clo8893[4] = acc;
clo8893[5] = fun;
clo8893[6] = lst;
clo8893[7] = cdr;
void* f8434 = encode_clo(clo8893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8434;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8558_fptr() // lam8558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8559 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8559))[3];
//not do dummy comment
void* kont8435 = (decode_clo(env8559))[2];
//not do dummy comment
void* fun = (decode_clo(env8559))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8435;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8561))[5];
//not do dummy comment
void* kont8435 = (decode_clo(env8561))[4];
//not do dummy comment
void* foldr = (decode_clo(env8561))[3];
//not do dummy comment
void* fun = (decode_clo(env8561))[2];
//not do dummy comment
void* acc = (decode_clo(env8561))[1];

//creating new closure instance
void** clo8895 = alloc_clo(lam8558_fptr, 3);

//setting env list
clo8895[1] = fun;
clo8895[2] = kont8435;
clo8895[3] = a8370;
void* f8436 = encode_clo(clo8895);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8436;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8371;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8563))[6];
//not do dummy comment
void* kont8435 = (decode_clo(env8563))[5];
//not do dummy comment
void* fun = (decode_clo(env8563))[4];
//not do dummy comment
void* acc = (decode_clo(env8563))[3];
//not do dummy comment
void* foldr = (decode_clo(env8563))[2];
//not do dummy comment
void* lst = (decode_clo(env8563))[1];

//creating new closure instance
void** clo8897 = alloc_clo(lam8560_fptr, 5);

//setting env list
clo8897[1] = acc;
clo8897[2] = fun;
clo8897[3] = foldr;
clo8897[4] = kont8435;
clo8897[5] = a8370;
void* f8437 = encode_clo(clo8897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8437;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8565))[7];
//not do dummy comment
void* kont8435 = (decode_clo(env8565))[6];
//not do dummy comment
void* fun = (decode_clo(env8565))[5];
//not do dummy comment
void* acc = (decode_clo(env8565))[4];
//not do dummy comment
void* car = (decode_clo(env8565))[3];
//not do dummy comment
void* foldr = (decode_clo(env8565))[2];
//not do dummy comment
void* lst = (decode_clo(env8565))[1];

//if-clause
bool if_guard8898 = is_true(a8369);
if(if_guard8898)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8435);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8900 = alloc_clo(lam8562_fptr, 6);

//setting env list
clo8900[1] = lst;
clo8900[2] = foldr;
clo8900[3] = acc;
clo8900[4] = fun;
clo8900[5] = kont8435;
clo8900[6] = cdr;
void* f8438 = encode_clo(clo8900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8566 = arg_buffer[1];
//reading env and args
void* kont8435 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8902 = alloc_clo(lam8564_fptr, 7);

//setting env list
clo8902[1] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8902[2] = foldr;
clo8902[3] = car;
clo8902[4] = acc;
clo8902[5] = fun;
clo8902[6] = kont8435;
clo8902[7] = cdr;
void* f8439 = encode_clo(clo8902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8567_fptr() // lam8567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8568 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8374 = (decode_clo(env8568))[3];
//not do dummy comment
void* kont8440 = (decode_clo(env8568))[2];
//not do dummy comment
void* cons = (decode_clo(env8568))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8440;
arg_buffer[3] = a8374;
arg_buffer[4] = a8376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8374 = (decode_clo(env8570))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8570))[4];
//not do dummy comment
void* cons = (decode_clo(env8570))[3];
//not do dummy comment
void* append = (decode_clo(env8570))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8570))[1];

//creating new closure instance
void** clo8904 = alloc_clo(lam8567_fptr, 3);

//setting env list
clo8904[1] = cons;
clo8904[2] = kont8440;
clo8904[3] = a8374;
void* f8441 = encode_clo(clo8904);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8441;
arg_buffer[3] = a8375;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8572))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8572))[5];
//not do dummy comment
void* lst1 = (decode_clo(env8572))[4];
//not do dummy comment
void* cons = (decode_clo(env8572))[3];
//not do dummy comment
void* append = (decode_clo(env8572))[2];
//not do dummy comment
void* kont8440 = (decode_clo(env8572))[1];

//creating new closure instance
void** clo8906 = alloc_clo(lam8569_fptr, 5);

//setting env list
clo8906[1] = kont8440;
clo8906[2] = append;
clo8906[3] = cons;
clo8906[4] = lst2;
clo8906[5] = a8374;
void* f8442 = encode_clo(clo8906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8442;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8574))[7];
//not do dummy comment
void* lst2 = (decode_clo(env8574))[6];
//not do dummy comment
void* cons = (decode_clo(env8574))[5];
//not do dummy comment
void* append = (decode_clo(env8574))[4];
//not do dummy comment
void* kont8440 = (decode_clo(env8574))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8574))[2];
//not do dummy comment
void* car = (decode_clo(env8574))[1];

//if-clause
bool if_guard8907 = is_true(a8373);
if(if_guard8907)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8440);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8909 = alloc_clo(lam8571_fptr, 6);

//setting env list
clo8909[1] = kont8440;
clo8909[2] = append;
clo8909[3] = cons;
clo8909[4] = lst1;
clo8909[5] = lst2;
clo8909[6] = cdr;
void* f8443 = encode_clo(clo8909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8443;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8575 = arg_buffer[1];
//reading env and args
void* kont8440 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8911 = alloc_clo(lam8573_fptr, 7);

//setting env list
clo8911[1] = car;
clo8911[2] = lst1;
clo8911[3] = kont8440;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8911[4] = append;
clo8911[5] = cons;
clo8911[6] = lst2;
clo8911[7] = cdr;
void* f8444 = encode_clo(clo8911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8444;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8578 = arg_buffer[1];
//reading env and args
void* kont8445 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar8912 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8912, "2.01", 10);
void* a8377 = encode_mpf(mpfvar8912);
mpf_t* mpfvar8913 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8913, "2.0", 10);
void* a8378 = encode_mpf(mpfvar8913);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60);
arg_buffer[2] = kont8445;
arg_buffer[3] = a8377;
arg_buffer[4] = a8378;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8579_fptr() // lam8579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8580 = arg_buffer[1];
//reading env and args
void* xy8379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8446 = (decode_clo(env8580))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8446);
arg_buffer[2] = xy8379;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8581 = arg_buffer[1];
//reading env and args
void* kont8446 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8915 = alloc_clo(lam8579_fptr, 1);

//setting env list
clo8915[1] = kont8446;
void* f8447 = encode_clo(clo8915);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8447;
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

