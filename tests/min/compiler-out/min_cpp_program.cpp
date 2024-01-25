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
void* _env8601 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8599 = prim_car(lst);
void* lst8602 = prim_cdr(lst);
void* x8600 = apply_prim__u43(lst8602);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8599);
arg_buffer[2] = x8600;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8599))[0]);
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
void* _env8605 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8603 = prim_car(lst);
void* lst8606 = prim_cdr(lst);
void* x8604 = apply_prim__u45(lst8606);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8603);
arg_buffer[2] = x8604;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8603))[0]);
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
void* _env8609 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8607 = prim_car(lst);
void* lst8610 = prim_cdr(lst);
void* x8608 = apply_prim__u42(lst8610);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8607);
arg_buffer[2] = x8608;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8607))[0]);
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
void* _env8613 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont8611 = prim_car(lst);
void* lst8614 = prim_cdr(lst);
void* x8612 = apply_prim__u47(lst8614);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8611);
arg_buffer[2] = x8612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8611))[0]);
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
void* x8616 = apply_prim__u61(lst8618);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8615);
arg_buffer[2] = x8616;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8615))[0]);
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
void* x8620 = apply_prim__u62(lst8622);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8619);
arg_buffer[2] = x8620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8619))[0]);
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
void* x8624 = apply_prim__u60(lst8626);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8623);
arg_buffer[2] = x8624;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8623))[0]);
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
void* x8628 = apply_prim__u60_u61(lst8630);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8627);
arg_buffer[2] = x8628;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8627))[0]);
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
void* x8632 = apply_prim__u62_u61(lst8634);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8631);
arg_buffer[2] = x8632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8631))[0]);
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
void* x8636 = apply_prim_modulo(lst8638);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8635);
arg_buffer[2] = x8636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8635))[0]);
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
void* x8640 = apply_prim_null_u63(lst8642);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8639);
arg_buffer[2] = x8640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8639))[0]);
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
void* x8644 = apply_prim_equal_u63(lst8646);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8643);
arg_buffer[2] = x8644;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8643))[0]);
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
void* x8648 = apply_prim_eq_u63(lst8650);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8647);
arg_buffer[2] = x8648;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8647))[0]);
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
void* x8652 = apply_prim_cons(lst8654);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8651);
arg_buffer[2] = x8652;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8651))[0]);
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
void* x8656 = apply_prim_car(lst8658);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8655);
arg_buffer[2] = x8656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8655))[0]);
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
void* x8660 = apply_prim_cdr(lst8662);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8659);
arg_buffer[2] = x8660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8659))[0]);
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
void* x8664 = apply_prim_float_u45_u62int(lst8666);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8663);
arg_buffer[2] = x8664;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8663))[0]);
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
void* x8668 = apply_prim_int_u45_u62float(lst8670);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8667);
arg_buffer[2] = x8668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8667))[0]);
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
void* x8672 = apply_prim_hash(lst8674);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8671);
arg_buffer[2] = x8672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8671))[0]);
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
void* x8676 = apply_prim_hash_u45ref(lst8678);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8675);
arg_buffer[2] = x8676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8675))[0]);
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
void* x8680 = apply_prim_hash_u45set(lst8682);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8679);
arg_buffer[2] = x8680;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8679))[0]);
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
void* x8684 = apply_prim_hash_u45keys(lst8686);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683);
arg_buffer[2] = x8684;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683))[0]);
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
void* x8688 = apply_prim_hash_u45has_u45key_u63(lst8690);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8687);
arg_buffer[2] = x8688;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8687))[0]);
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
void* x8692 = apply_prim_hash_u45count(lst8694);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8691);
arg_buffer[2] = x8692;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8691))[0]);
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
void* x8696 = apply_prim_set(lst8698);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8695);
arg_buffer[2] = x8696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8695))[0]);
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
void* x8700 = apply_prim_set_u45_u62list(lst8702);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8699);
arg_buffer[2] = x8700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8699))[0]);
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
void* x8704 = apply_prim_list_u45_u62set(lst8706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8703);
arg_buffer[2] = x8704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8703))[0]);
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
void* x8708 = apply_prim_set_u45add(lst8710);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8707);
arg_buffer[2] = x8708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8707))[0]);
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
void* x8712 = apply_prim_set_u45member_u63(lst8714);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8711);
arg_buffer[2] = x8712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);
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
void* x8716 = apply_prim_set_u45remove(lst8718);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8715);
arg_buffer[2] = x8716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8715))[0]);
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
void* x8720 = apply_prim_set_u45count(lst8722);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8719);
arg_buffer[2] = x8720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8719))[0]);
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
void* x8724 = apply_prim_string_u63(lst8726);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8723);
arg_buffer[2] = x8724;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8723))[0]);
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
void* x8728 = apply_prim_string_u45length(lst8730);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8727);
arg_buffer[2] = x8728;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8727))[0]);
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
void* x8732 = apply_prim_string_u45ref(lst8734);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8731);
arg_buffer[2] = x8732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8731))[0]);
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
void* x8736 = apply_prim_substring(lst8738);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8735);
arg_buffer[2] = x8736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8735))[0]);
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
void* x8740 = apply_prim_string_u45append(lst8742);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8739);
arg_buffer[2] = x8740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8739))[0]);
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
void* x8744 = apply_prim_string_u45_u62list(lst8746);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8743);
arg_buffer[2] = x8744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8743))[0]);
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
void* x8748 = apply_prim_exact_u45floor(lst8750);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8747);
arg_buffer[2] = x8748;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8747))[0]);
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
void* x8752 = apply_prim_exact_u45ceiling(lst8754);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8751);
arg_buffer[2] = x8752;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8751))[0]);
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
void* x8756 = apply_prim_exact_u45round(lst8758);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8755);
arg_buffer[2] = x8756;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8755))[0]);
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
void* x8760 = apply_prim_absolute(lst8762);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8759);
arg_buffer[2] = x8760;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8759))[0]);
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
void* x8764 = apply_prim_max(lst8766);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8763);
arg_buffer[2] = x8764;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8763))[0]);
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
void* x8768 = apply_prim_min(lst8770);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8767);
arg_buffer[2] = x8768;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8767))[0]);
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
void* x8772 = apply_prim_expt(lst8774);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8771);
arg_buffer[2] = x8772;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8771))[0]);
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
void* x8776 = apply_prim_squareroot(lst8778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8775);
arg_buffer[2] = x8776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8775))[0]);
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
void* x8780 = apply_prim_remaind(lst8782);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8779);
arg_buffer[2] = x8780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8779))[0]);
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
void* x8784 = apply_prim_quotient(lst8786);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8783);
arg_buffer[2] = x8784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8783))[0]);
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
void* x8788 = apply_prim_randnum(lst8790);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8787);
arg_buffer[2] = x8788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8787))[0]);
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
void* x8792 = apply_prim_symbol_u63(lst8794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8791);
arg_buffer[2] = x8792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8791))[0]);
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
void* x8796 = apply_prim_pair_u63(lst8798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8795);
arg_buffer[2] = x8796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8795))[0]);
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
void* x8800 = apply_prim_positive_u63(lst8802);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8799);
arg_buffer[2] = x8800;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8799))[0]);
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
void* x8804 = apply_prim_negative_u63(lst8806);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8803);
arg_buffer[2] = x8804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8803))[0]);
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
void* _8458 = arg_buffer[1];
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

void* kont8387 = prim_car(x);
void* x8457 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8387);
arg_buffer[2] = x8457;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8387))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8459_fptr() // lam8459 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8460 = arg_buffer[1];
//reading env and args
void* a8317 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8388 = (decode_clo(env8460))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8460))[2];
//not do dummy comment
void* a8315 = (decode_clo(env8460))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8315, a8317);
arg_buffer[1]=reinterpret_cast<void*>(kont8388);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8388))[0]);
function_ptr();
return nullptr;
}

void* lam8459 = encode_clo(alloc_clo(lam8459_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8463 = arg_buffer[1];
//reading env and args
void* kont8388 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8807 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8807, "0", 10);
void* a8315 = encode_mpz(mpzvar8807);
mpz_t* mpzvar8808 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8808, "2", 10);
void* a8316 = encode_mpz(mpzvar8808);

//creating new closure instance
void** clo8810 = alloc_clo(lam8459_fptr, 3);

//setting env list
clo8810[1] = a8315;
clo8810[2] = equal_u63;
clo8810[3] = kont8388;
void* f8389 = encode_clo(clo8810);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8316);
arg_buffer[1]=reinterpret_cast<void*>(f8389);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8389))[0]);
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8464_fptr() // lam8464 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8465 = arg_buffer[1];
//reading env and args
void* a8320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8390 = (decode_clo(env8465))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8465))[2];
//not do dummy comment
void* a8318 = (decode_clo(env8465))[1];

//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8318, a8320);
arg_buffer[1]=reinterpret_cast<void*>(kont8390);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8390))[0]);
function_ptr();
return nullptr;
}

void* lam8464 = encode_clo(alloc_clo(lam8464_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8468 = arg_buffer[1];
//reading env and args
void* kont8390 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8811 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8811, "1", 10);
void* a8318 = encode_mpz(mpzvar8811);
mpz_t* mpzvar8812 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8812, "2", 10);
void* a8319 = encode_mpz(mpzvar8812);

//creating new closure instance
void** clo8814 = alloc_clo(lam8464_fptr, 3);

//setting env list
clo8814[1] = a8318;
clo8814[2] = equal_u63;
clo8814[3] = kont8390;
void* f8391 = encode_clo(clo8814);



//clo-app
arg_buffer[2]=apply_prim_modulo_2(x, a8319);
arg_buffer[1]=reinterpret_cast<void*>(f8391);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8391))[0]);
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* lam8471_fptr() // lam8471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8472 = arg_buffer[1];
//reading env and args
void* a8326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8392 = (decode_clo(env8472))[3];
//not do dummy comment
void* x = (decode_clo(env8472))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8472))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8392;
arg_buffer[3] = x;
arg_buffer[4] = a8326;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
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
void* a8324 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8474))[5];
//not do dummy comment
void* lst = (decode_clo(env8474))[4];
//not do dummy comment
void* kont8392 = (decode_clo(env8474))[3];
//not do dummy comment
void* x = (decode_clo(env8474))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8474))[1];

//if-clause
bool if_guard8815 = is_true(a8324);
if(if_guard8815)
{
void* xy8325 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8392);
arg_buffer[2] = xy8325;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8392))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8817 = alloc_clo(lam8471_fptr, 3);

//setting env list
clo8817[1] = member_u63;
clo8817[2] = x;
clo8817[3] = kont8392;
void* f8393 = encode_clo(clo8817);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8393);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8393))[0]);
function_ptr();
return nullptr;
}

}

void* lam8473 = encode_clo(alloc_clo(lam8473_fptr, 0));

void* lam8475_fptr() // lam8475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8476 = arg_buffer[1];
//reading env and args
void* a8323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8476))[6];
//not do dummy comment
void* lst = (decode_clo(env8476))[5];
//not do dummy comment
void* x = (decode_clo(env8476))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8476))[3];
//not do dummy comment
void* kont8392 = (decode_clo(env8476))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8476))[1];

//creating new closure instance
void** clo8819 = alloc_clo(lam8473_fptr, 5);

//setting env list
clo8819[1] = member_u63;
clo8819[2] = x;
clo8819[3] = kont8392;
clo8819[4] = lst;
clo8819[5] = cdr;
void* f8394 = encode_clo(clo8819);



//clo-app
arg_buffer[2]=apply_prim_equal_u63_2(a8323, x);
arg_buffer[1]=reinterpret_cast<void*>(f8394);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8394))[0]);
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
void* a8321 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8478))[7];
//not do dummy comment
void* lst = (decode_clo(env8478))[6];
//not do dummy comment
void* x = (decode_clo(env8478))[5];
//not do dummy comment
void* car = (decode_clo(env8478))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env8478))[3];
//not do dummy comment
void* kont8392 = (decode_clo(env8478))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8478))[1];

//if-clause
bool if_guard8820 = is_true(a8321);
if(if_guard8820)
{
void* xy8322 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8392);
arg_buffer[2] = xy8322;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8392))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8822 = alloc_clo(lam8475_fptr, 6);

//setting env list
clo8822[1] = equal_u63;
clo8822[2] = kont8392;
clo8822[3] = member_u63;
clo8822[4] = x;
clo8822[5] = lst;
clo8822[6] = cdr;
void* f8395 = encode_clo(clo8822);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8395);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8395))[0]);
function_ptr();
return nullptr;
}

}

void* lam8477 = encode_clo(alloc_clo(lam8477_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8479 = arg_buffer[1];
//reading env and args
void* kont8392 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8824 = alloc_clo(lam8477_fptr, 7);

//setting env list
clo8824[1] = equal_u63;
clo8824[2] = kont8392;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo8824[3] = member_u63;
clo8824[4] = car;
clo8824[5] = x;
clo8824[6] = lst;
clo8824[7] = cdr;
void* f8396 = encode_clo(clo8824);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8396);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8396))[0]);
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8480_fptr() // lam8480 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8481 = arg_buffer[1];
//reading env and args
void* a8330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8481))[3];
//not do dummy comment
void* a8328 = (decode_clo(env8481))[2];
//not do dummy comment
void* kont8397 = (decode_clo(env8481))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8397;
arg_buffer[3] = a8328;
arg_buffer[4] = a8330;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8480 = encode_clo(alloc_clo(lam8480_fptr, 0));

void* lam8482_fptr() // lam8482 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8483 = arg_buffer[1];
//reading env and args
void* a8329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8483))[5];
//not do dummy comment
void* a8328 = (decode_clo(env8483))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8483))[3];
//not do dummy comment
void* kont8397 = (decode_clo(env8483))[2];
//not do dummy comment
void* cons = (decode_clo(env8483))[1];

//creating new closure instance
void** clo8826 = alloc_clo(lam8480_fptr, 3);

//setting env list
clo8826[1] = kont8397;
clo8826[2] = a8328;
clo8826[3] = reverse_u45helper;
void* f8398 = encode_clo(clo8826);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8329, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8398);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8398))[0]);
function_ptr();
return nullptr;
}

void* lam8482 = encode_clo(alloc_clo(lam8482_fptr, 0));

void* lam8484_fptr() // lam8484 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8485 = arg_buffer[1];
//reading env and args
void* a8328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8485))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8485))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8485))[4];
//not do dummy comment
void* cons = (decode_clo(env8485))[3];
//not do dummy comment
void* kont8397 = (decode_clo(env8485))[2];
//not do dummy comment
void* car = (decode_clo(env8485))[1];

//creating new closure instance
void** clo8828 = alloc_clo(lam8482_fptr, 5);

//setting env list
clo8828[1] = cons;
clo8828[2] = kont8397;
clo8828[3] = lst2;
clo8828[4] = a8328;
clo8828[5] = reverse_u45helper;
void* f8399 = encode_clo(clo8828);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8399);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8399))[0]);
function_ptr();
return nullptr;
}

void* lam8484 = encode_clo(alloc_clo(lam8484_fptr, 0));

void* lam8486_fptr() // lam8486 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8487 = arg_buffer[1];
//reading env and args
void* a8327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8487))[7];
//not do dummy comment
void* lst = (decode_clo(env8487))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8487))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8487))[4];
//not do dummy comment
void* cons = (decode_clo(env8487))[3];
//not do dummy comment
void* kont8397 = (decode_clo(env8487))[2];
//not do dummy comment
void* car = (decode_clo(env8487))[1];

//if-clause
bool if_guard8829 = is_true(a8327);
if(if_guard8829)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8397);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8397))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8831 = alloc_clo(lam8484_fptr, 6);

//setting env list
clo8831[1] = car;
clo8831[2] = kont8397;
clo8831[3] = cons;
clo8831[4] = lst2;
clo8831[5] = reverse_u45helper;
clo8831[6] = lst;
void* f8400 = encode_clo(clo8831);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8400);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8400))[0]);
function_ptr();
return nullptr;
}

}

void* lam8486 = encode_clo(alloc_clo(lam8486_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8488 = arg_buffer[1];
//reading env and args
void* kont8397 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8833 = alloc_clo(lam8486_fptr, 7);

//setting env list
clo8833[1] = car;
clo8833[2] = kont8397;
clo8833[3] = cons;
clo8833[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo8833[5] = reverse_u45helper;
clo8833[6] = lst;
clo8833[7] = cdr;
void* f8401 = encode_clo(clo8833);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8401);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8401))[0]);
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8489_fptr() // lam8489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8490 = arg_buffer[1];
//reading env and args
void* a8331 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8402 = (decode_clo(env8490))[3];
//not do dummy comment
void* lst = (decode_clo(env8490))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8490))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8402;
arg_buffer[3] = lst;
arg_buffer[4] = a8331;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8489 = encode_clo(alloc_clo(lam8489_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8491 = arg_buffer[1];
//reading env and args
void* kont8402 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8835 = alloc_clo(lam8489_fptr, 3);

//setting env list
clo8835[1] = reverse_u45helper;
clo8835[2] = lst;
clo8835[3] = kont8402;
void* f8403 = encode_clo(clo8835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8403;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8492_fptr() // lam8492 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8493 = arg_buffer[1];
//reading env and args
void* xy8334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8404 = (decode_clo(env8493))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8404);
arg_buffer[2] = xy8334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8404))[0]);
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
void* a8339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8337 = (decode_clo(env8495))[4];
//not do dummy comment
void* kont8404 = (decode_clo(env8495))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8495))[2];
//not do dummy comment
void* a8335 = (decode_clo(env8495))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8404;
arg_buffer[3] = a8335;
arg_buffer[4] = a8337;
arg_buffer[5] = a8339;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a8338 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8337 = (decode_clo(env8497))[6];
//not do dummy comment
void* kont8404 = (decode_clo(env8497))[5];
//not do dummy comment
void* cons = (decode_clo(env8497))[4];
//not do dummy comment
void* a8335 = (decode_clo(env8497))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8497))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8497))[1];

//creating new closure instance
void** clo8837 = alloc_clo(lam8494_fptr, 4);

//setting env list
clo8837[1] = a8335;
clo8837[2] = take_u45helper;
clo8837[3] = kont8404;
clo8837[4] = a8337;
void* f8406 = encode_clo(clo8837);



//clo-app
arg_buffer[2]=apply_prim_cons_2(a8338, lst2);
arg_buffer[1]=reinterpret_cast<void*>(f8406);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8406))[0]);
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
void* a8337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env8499))[7];
//not do dummy comment
void* cons = (decode_clo(env8499))[6];
//not do dummy comment
void* a8335 = (decode_clo(env8499))[5];
//not do dummy comment
void* lst = (decode_clo(env8499))[4];
//not do dummy comment
void* kont8404 = (decode_clo(env8499))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8499))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8499))[1];

//creating new closure instance
void** clo8839 = alloc_clo(lam8496_fptr, 6);

//setting env list
clo8839[1] = lst2;
clo8839[2] = take_u45helper;
clo8839[3] = a8335;
clo8839[4] = cons;
clo8839[5] = kont8404;
clo8839[6] = a8337;
void* f8407 = encode_clo(clo8839);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8407);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8407))[0]);
function_ptr();
return nullptr;
}

void* lam8498 = encode_clo(alloc_clo(lam8498_fptr, 0));

void* lam8501_fptr() // lam8501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8502 = arg_buffer[1];
//reading env and args
void* a8335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8502))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8502))[7];
//not do dummy comment
void* lst = (decode_clo(env8502))[6];
//not do dummy comment
void* kont8404 = (decode_clo(env8502))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8502))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8502))[3];
//not do dummy comment
void* n = (decode_clo(env8502))[2];
//not do dummy comment
void* car = (decode_clo(env8502))[1];
mpz_t* mpzvar8840 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8840, "1", 10);
void* a8336 = encode_mpz(mpzvar8840);

//creating new closure instance
void** clo8842 = alloc_clo(lam8498_fptr, 7);

//setting env list
clo8842[1] = lst2;
clo8842[2] = take_u45helper;
clo8842[3] = kont8404;
clo8842[4] = lst;
clo8842[5] = a8335;
clo8842[6] = cons;
clo8842[7] = car;
void* f8408 = encode_clo(clo8842);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8336);
arg_buffer[1]=reinterpret_cast<void*>(f8408);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8408))[0]);
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
void* a8333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8504))[10];
//not do dummy comment
void* reverse = (decode_clo(env8504))[9];
//not do dummy comment
void* cons = (decode_clo(env8504))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8504))[7];
//not do dummy comment
void* lst = (decode_clo(env8504))[6];
//not do dummy comment
void* kont8404 = (decode_clo(env8504))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8504))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8504))[3];
//not do dummy comment
void* n = (decode_clo(env8504))[2];
//not do dummy comment
void* car = (decode_clo(env8504))[1];

//if-clause
bool if_guard8843 = is_true(a8333);
if(if_guard8843)
{

//creating new closure instance
void** clo8845 = alloc_clo(lam8492_fptr, 1);

//setting env list
clo8845[1] = kont8404;
void* f8405 = encode_clo(clo8845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8405;
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
void** clo8847 = alloc_clo(lam8501_fptr, 8);

//setting env list
clo8847[1] = car;
clo8847[2] = n;
clo8847[3] = lst2;
clo8847[4] = take_u45helper;
clo8847[5] = kont8404;
clo8847[6] = lst;
clo8847[7] = _u45;
clo8847[8] = cons;
void* f8409 = encode_clo(clo8847);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8409);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8409))[0]);
function_ptr();
return nullptr;
}

}

void* lam8503 = encode_clo(alloc_clo(lam8503_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8506 = arg_buffer[1];
//reading env and args
void* kont8404 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar8848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8848, "0", 10);
void* a8332 = encode_mpz(mpzvar8848);

//creating new closure instance
void** clo8850 = alloc_clo(lam8503_fptr, 10);

//setting env list
clo8850[1] = car;
clo8850[2] = n;
clo8850[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo8850[4] = take_u45helper;
clo8850[5] = kont8404;
clo8850[6] = lst;
clo8850[7] = _u45;
clo8850[8] = cons;
clo8850[9] = reverse;
clo8850[10] = cdr;
void* f8410 = encode_clo(clo8850);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8332);
arg_buffer[1]=reinterpret_cast<void*>(f8410);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8410))[0]);
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8507_fptr() // lam8507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8508 = arg_buffer[1];
//reading env and args
void* a8340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8508))[4];
//not do dummy comment
void* kont8411 = (decode_clo(env8508))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8508))[2];
//not do dummy comment
void* n = (decode_clo(env8508))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8411;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8340;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8507 = encode_clo(alloc_clo(lam8507_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8509 = arg_buffer[1];
//reading env and args
void* kont8411 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8852 = alloc_clo(lam8507_fptr, 4);

//setting env list
clo8852[1] = n;
clo8852[2] = take_u45helper;
clo8852[3] = kont8411;
clo8852[4] = lst;
void* f8412 = encode_clo(clo8852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8511_fptr() // lam8511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8512 = arg_buffer[1];
//reading env and args
void* a8345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8343 = (decode_clo(env8512))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8512))[2];
//not do dummy comment
void* kont8413 = (decode_clo(env8512))[1];

//clo-app
arg_buffer[2]=apply_prim__u43_2(a8343, a8345);
arg_buffer[1]=reinterpret_cast<void*>(kont8413);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8413))[0]);
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
void* a8344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8514))[4];
//not do dummy comment
void* a8343 = (decode_clo(env8514))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8514))[2];
//not do dummy comment
void* kont8413 = (decode_clo(env8514))[1];

//creating new closure instance
void** clo8854 = alloc_clo(lam8511_fptr, 3);

//setting env list
clo8854[1] = kont8413;
clo8854[2] = _u43;
clo8854[3] = a8343;
void* f8414 = encode_clo(clo8854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8414;
arg_buffer[3] = a8344;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8513 = encode_clo(alloc_clo(lam8513_fptr, 0));

void* lam8516_fptr() // lam8516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8517 = arg_buffer[1];
//reading env and args
void* a8341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8517))[5];
//not do dummy comment
void* lst = (decode_clo(env8517))[4];
//not do dummy comment
void* length = (decode_clo(env8517))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8517))[2];
//not do dummy comment
void* kont8413 = (decode_clo(env8517))[1];

//if-clause
bool if_guard8855 = is_true(a8341);
if(if_guard8855)
{
mpz_t* mpzvar8856 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8856, "0", 10);
void* xy8342 = encode_mpz(mpzvar8856);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8413);
arg_buffer[2] = xy8342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8413))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar8857 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8857, "1", 10);
void* a8343 = encode_mpz(mpzvar8857);

//creating new closure instance
void** clo8859 = alloc_clo(lam8513_fptr, 4);

//setting env list
clo8859[1] = kont8413;
clo8859[2] = _u43;
clo8859[3] = a8343;
clo8859[4] = length;
void* f8415 = encode_clo(clo8859);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8415);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8415))[0]);
function_ptr();
return nullptr;
}

}

void* lam8516 = encode_clo(alloc_clo(lam8516_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8518 = arg_buffer[1];
//reading env and args
void* kont8413 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo8861 = alloc_clo(lam8516_fptr, 5);

//setting env list
clo8861[1] = kont8413;
clo8861[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo8861[3] = length;
clo8861[4] = lst;
clo8861[5] = cdr;
void* f8416 = encode_clo(clo8861);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8416);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8416))[0]);
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8519_fptr() // lam8519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8520 = arg_buffer[1];
//reading env and args
void* xy8347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8520))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8417);
arg_buffer[2] = xy8347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
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
void* a8351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8522))[3];
//not do dummy comment
void* a8349 = (decode_clo(env8522))[2];
//not do dummy comment
void* cons = (decode_clo(env8522))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8349, a8351);
arg_buffer[1]=reinterpret_cast<void*>(kont8417);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8417))[0]);
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
void* a8350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8524))[5];
//not do dummy comment
void* map = (decode_clo(env8524))[4];
//not do dummy comment
void* proc = (decode_clo(env8524))[3];
//not do dummy comment
void* a8349 = (decode_clo(env8524))[2];
//not do dummy comment
void* cons = (decode_clo(env8524))[1];

//creating new closure instance
void** clo8863 = alloc_clo(lam8521_fptr, 3);

//setting env list
clo8863[1] = cons;
clo8863[2] = a8349;
clo8863[3] = kont8417;
void* f8419 = encode_clo(clo8863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8419;
arg_buffer[3] = proc;
arg_buffer[4] = a8350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a8349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8526))[6];
//not do dummy comment
void* kont8417 = (decode_clo(env8526))[5];
//not do dummy comment
void* lst = (decode_clo(env8526))[4];
//not do dummy comment
void* map = (decode_clo(env8526))[3];
//not do dummy comment
void* proc = (decode_clo(env8526))[2];
//not do dummy comment
void* cons = (decode_clo(env8526))[1];

//creating new closure instance
void** clo8865 = alloc_clo(lam8523_fptr, 5);

//setting env list
clo8865[1] = cons;
clo8865[2] = a8349;
clo8865[3] = proc;
clo8865[4] = map;
clo8865[5] = kont8417;
void* f8420 = encode_clo(clo8865);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8420);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8420))[0]);
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
void* a8348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8528))[6];
//not do dummy comment
void* kont8417 = (decode_clo(env8528))[5];
//not do dummy comment
void* lst = (decode_clo(env8528))[4];
//not do dummy comment
void* map = (decode_clo(env8528))[3];
//not do dummy comment
void* proc = (decode_clo(env8528))[2];
//not do dummy comment
void* cons = (decode_clo(env8528))[1];

//creating new closure instance
void** clo8867 = alloc_clo(lam8525_fptr, 6);

//setting env list
clo8867[1] = cons;
clo8867[2] = proc;
clo8867[3] = map;
clo8867[4] = lst;
clo8867[5] = kont8417;
clo8867[6] = cdr;
void* f8421 = encode_clo(clo8867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8421;
arg_buffer[3] = a8348;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a8346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8417 = (decode_clo(env8530))[8];
//not do dummy comment
void* lst = (decode_clo(env8530))[7];
//not do dummy comment
void* map = (decode_clo(env8530))[6];
//not do dummy comment
void* proc = (decode_clo(env8530))[5];
//not do dummy comment
void* car = (decode_clo(env8530))[4];
//not do dummy comment
void* cons = (decode_clo(env8530))[3];
//not do dummy comment
void* list = (decode_clo(env8530))[2];
//not do dummy comment
void* cdr = (decode_clo(env8530))[1];

//if-clause
bool if_guard8868 = is_true(a8346);
if(if_guard8868)
{

//creating new closure instance
void** clo8870 = alloc_clo(lam8519_fptr, 1);

//setting env list
clo8870[1] = kont8417;
void* f8418 = encode_clo(clo8870);



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
void** clo8872 = alloc_clo(lam8527_fptr, 6);

//setting env list
clo8872[1] = cons;
clo8872[2] = proc;
clo8872[3] = map;
clo8872[4] = lst;
clo8872[5] = kont8417;
clo8872[6] = cdr;
void* f8422 = encode_clo(clo8872);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8422);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8422))[0]);
function_ptr();
return nullptr;
}

}

void* lam8529 = encode_clo(alloc_clo(lam8529_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8531 = arg_buffer[1];
//reading env and args
void* kont8417 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8874 = alloc_clo(lam8529_fptr, 8);

//setting env list
clo8874[1] = cdr;
clo8874[2] = list;
clo8874[3] = cons;
clo8874[4] = car;
clo8874[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo8874[6] = map;
clo8874[7] = lst;
clo8874[8] = kont8417;
void* f8423 = encode_clo(clo8874);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8423);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8423))[0]);
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8532_fptr() // lam8532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8533 = arg_buffer[1];
//reading env and args
void* xy8353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8424 = (decode_clo(env8533))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[2] = xy8353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
//call next proc using a function pointer
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
void* a8358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8356 = (decode_clo(env8535))[3];
//not do dummy comment
void* kont8424 = (decode_clo(env8535))[2];
//not do dummy comment
void* cons = (decode_clo(env8535))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8356, a8358);
arg_buffer[1]=reinterpret_cast<void*>(kont8424);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8424))[0]);
function_ptr();
return nullptr;
}

void* lam8534 = encode_clo(alloc_clo(lam8534_fptr, 0));

void* lam8536_fptr() // lam8536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8537 = arg_buffer[1];
//reading env and args
void* a8357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8356 = (decode_clo(env8537))[5];
//not do dummy comment
void* op = (decode_clo(env8537))[4];
//not do dummy comment
void* kont8424 = (decode_clo(env8537))[3];
//not do dummy comment
void* filter = (decode_clo(env8537))[2];
//not do dummy comment
void* cons = (decode_clo(env8537))[1];

//creating new closure instance
void** clo8876 = alloc_clo(lam8534_fptr, 3);

//setting env list
clo8876[1] = cons;
clo8876[2] = kont8424;
clo8876[3] = a8356;
void* f8426 = encode_clo(clo8876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8426;
arg_buffer[3] = op;
arg_buffer[4] = a8357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8539))[6];
//not do dummy comment
void* lst = (decode_clo(env8539))[5];
//not do dummy comment
void* op = (decode_clo(env8539))[4];
//not do dummy comment
void* kont8424 = (decode_clo(env8539))[3];
//not do dummy comment
void* filter = (decode_clo(env8539))[2];
//not do dummy comment
void* cons = (decode_clo(env8539))[1];

//creating new closure instance
void** clo8878 = alloc_clo(lam8536_fptr, 5);

//setting env list
clo8878[1] = cons;
clo8878[2] = filter;
clo8878[3] = kont8424;
clo8878[4] = op;
clo8878[5] = a8356;
void* f8427 = encode_clo(clo8878);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8427);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8427))[0]);
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
void* a8359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8541))[3];
//not do dummy comment
void* kont8424 = (decode_clo(env8541))[2];
//not do dummy comment
void* filter = (decode_clo(env8541))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8424;
arg_buffer[3] = op;
arg_buffer[4] = a8359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//call next proc using a function pointer
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
void* a8355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8543))[7];
//not do dummy comment
void* lst = (decode_clo(env8543))[6];
//not do dummy comment
void* op = (decode_clo(env8543))[5];
//not do dummy comment
void* kont8424 = (decode_clo(env8543))[4];
//not do dummy comment
void* cons = (decode_clo(env8543))[3];
//not do dummy comment
void* filter = (decode_clo(env8543))[2];
//not do dummy comment
void* car = (decode_clo(env8543))[1];

//if-clause
bool if_guard8879 = is_true(a8355);
if(if_guard8879)
{

//creating new closure instance
void** clo8881 = alloc_clo(lam8538_fptr, 6);

//setting env list
clo8881[1] = cons;
clo8881[2] = filter;
clo8881[3] = kont8424;
clo8881[4] = op;
clo8881[5] = lst;
clo8881[6] = cdr;
void* f8428 = encode_clo(clo8881);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8428);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8428))[0]);
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8883 = alloc_clo(lam8540_fptr, 3);

//setting env list
clo8883[1] = filter;
clo8883[2] = kont8424;
clo8883[3] = op;
void* f8429 = encode_clo(clo8883);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8429);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8429))[0]);
function_ptr();
return nullptr;
}

}

void* lam8542 = encode_clo(alloc_clo(lam8542_fptr, 0));

void* lam8544_fptr() // lam8544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8545 = arg_buffer[1];
//reading env and args
void* a8354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8545))[7];
//not do dummy comment
void* lst = (decode_clo(env8545))[6];
//not do dummy comment
void* op = (decode_clo(env8545))[5];
//not do dummy comment
void* kont8424 = (decode_clo(env8545))[4];
//not do dummy comment
void* cons = (decode_clo(env8545))[3];
//not do dummy comment
void* filter = (decode_clo(env8545))[2];
//not do dummy comment
void* car = (decode_clo(env8545))[1];

//creating new closure instance
void** clo8885 = alloc_clo(lam8542_fptr, 7);

//setting env list
clo8885[1] = car;
clo8885[2] = filter;
clo8885[3] = cons;
clo8885[4] = kont8424;
clo8885[5] = op;
clo8885[6] = lst;
clo8885[7] = cdr;
void* f8430 = encode_clo(clo8885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8430;
arg_buffer[3] = a8354;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a8352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8547))[8];
//not do dummy comment
void* op = (decode_clo(env8547))[7];
//not do dummy comment
void* kont8424 = (decode_clo(env8547))[6];
//not do dummy comment
void* cons = (decode_clo(env8547))[5];
//not do dummy comment
void* list = (decode_clo(env8547))[4];
//not do dummy comment
void* cdr = (decode_clo(env8547))[3];
//not do dummy comment
void* filter = (decode_clo(env8547))[2];
//not do dummy comment
void* car = (decode_clo(env8547))[1];

//if-clause
bool if_guard8886 = is_true(a8352);
if(if_guard8886)
{

//creating new closure instance
void** clo8888 = alloc_clo(lam8532_fptr, 1);

//setting env list
clo8888[1] = kont8424;
void* f8425 = encode_clo(clo8888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8890 = alloc_clo(lam8544_fptr, 7);

//setting env list
clo8890[1] = car;
clo8890[2] = filter;
clo8890[3] = cons;
clo8890[4] = kont8424;
clo8890[5] = op;
clo8890[6] = lst;
clo8890[7] = cdr;
void* f8431 = encode_clo(clo8890);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8431);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8431))[0]);
function_ptr();
return nullptr;
}

}

void* lam8546 = encode_clo(alloc_clo(lam8546_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8548 = arg_buffer[1];
//reading env and args
void* kont8424 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8892 = alloc_clo(lam8546_fptr, 8);

//setting env list
clo8892[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo8892[2] = filter;
clo8892[3] = cdr;
clo8892[4] = list;
clo8892[5] = cons;
clo8892[6] = kont8424;
clo8892[7] = op;
clo8892[8] = lst;
void* f8432 = encode_clo(clo8892);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8432);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8432))[0]);
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8549_fptr() // lam8549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8550 = arg_buffer[1];
//reading env and args
void* a8364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8433 = (decode_clo(env8550))[3];
//not do dummy comment
void* drop = (decode_clo(env8550))[2];
//not do dummy comment
void* a8362 = (decode_clo(env8550))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8433;
arg_buffer[3] = a8362;
arg_buffer[4] = a8364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8549 = encode_clo(alloc_clo(lam8549_fptr, 0));

void* lam8552_fptr() // lam8552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8553 = arg_buffer[1];
//reading env and args
void* a8362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8433 = (decode_clo(env8553))[4];
//not do dummy comment
void* drop = (decode_clo(env8553))[3];
//not do dummy comment
void* n = (decode_clo(env8553))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8553))[1];
mpz_t* mpzvar8893 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8893, "1", 10);
void* a8363 = encode_mpz(mpzvar8893);

//creating new closure instance
void** clo8895 = alloc_clo(lam8549_fptr, 3);

//setting env list
clo8895[1] = a8362;
clo8895[2] = drop;
clo8895[3] = kont8433;
void* f8434 = encode_clo(clo8895);



//clo-app
arg_buffer[2]=apply_prim__u45_2(n, a8363);
arg_buffer[1]=reinterpret_cast<void*>(f8434);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8434))[0]);
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
void* a8361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8555))[6];
//not do dummy comment
void* kont8433 = (decode_clo(env8555))[5];
//not do dummy comment
void* n = (decode_clo(env8555))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8555))[3];
//not do dummy comment
void* lst = (decode_clo(env8555))[2];
//not do dummy comment
void* drop = (decode_clo(env8555))[1];

//if-clause
bool if_guard8896 = is_true(a8361);
if(if_guard8896)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8433);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8433))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8898 = alloc_clo(lam8552_fptr, 4);

//setting env list
clo8898[1] = _u45;
clo8898[2] = n;
clo8898[3] = drop;
clo8898[4] = kont8433;
void* f8435 = encode_clo(clo8898);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8435);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8435))[0]);
function_ptr();
return nullptr;
}

}

void* lam8554 = encode_clo(alloc_clo(lam8554_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8557 = arg_buffer[1];
//reading env and args
void* kont8433 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar8899 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8899, "0", 10);
void* a8360 = encode_mpz(mpzvar8899);

//creating new closure instance
void** clo8901 = alloc_clo(lam8554_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo8901[1] = drop;
clo8901[2] = lst;
clo8901[3] = _u45;
clo8901[4] = n;
clo8901[5] = kont8433;
clo8901[6] = cdr;
void* f8436 = encode_clo(clo8901);



//clo-app
arg_buffer[2]=apply_prim__u61_2(n, a8360);
arg_buffer[1]=reinterpret_cast<void*>(f8436);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8436))[0]);
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8558_fptr() // lam8558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8559 = arg_buffer[1];
//reading env and args
void* a8368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8437 = (decode_clo(env8559))[4];
//not do dummy comment
void* fun = (decode_clo(env8559))[3];
//not do dummy comment
void* foldl = (decode_clo(env8559))[2];
//not do dummy comment
void* a8367 = (decode_clo(env8559))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8437;
arg_buffer[3] = fun;
arg_buffer[4] = a8367;
arg_buffer[5] = a8368;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a8367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8561))[5];
//not do dummy comment
void* lst = (decode_clo(env8561))[4];
//not do dummy comment
void* kont8437 = (decode_clo(env8561))[3];
//not do dummy comment
void* fun = (decode_clo(env8561))[2];
//not do dummy comment
void* foldl = (decode_clo(env8561))[1];

//creating new closure instance
void** clo8903 = alloc_clo(lam8558_fptr, 4);

//setting env list
clo8903[1] = a8367;
clo8903[2] = foldl;
clo8903[3] = fun;
clo8903[4] = kont8437;
void* f8438 = encode_clo(clo8903);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8438);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8438))[0]);
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
void* a8366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8563))[6];
//not do dummy comment
void* lst = (decode_clo(env8563))[5];
//not do dummy comment
void* kont8437 = (decode_clo(env8563))[4];
//not do dummy comment
void* fun = (decode_clo(env8563))[3];
//not do dummy comment
void* acc = (decode_clo(env8563))[2];
//not do dummy comment
void* foldl = (decode_clo(env8563))[1];

//creating new closure instance
void** clo8905 = alloc_clo(lam8560_fptr, 5);

//setting env list
clo8905[1] = foldl;
clo8905[2] = fun;
clo8905[3] = kont8437;
clo8905[4] = lst;
clo8905[5] = cdr;
void* f8439 = encode_clo(clo8905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8439;
arg_buffer[3] = a8366;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8565))[7];
//not do dummy comment
void* lst = (decode_clo(env8565))[6];
//not do dummy comment
void* kont8437 = (decode_clo(env8565))[5];
//not do dummy comment
void* fun = (decode_clo(env8565))[4];
//not do dummy comment
void* acc = (decode_clo(env8565))[3];
//not do dummy comment
void* car = (decode_clo(env8565))[2];
//not do dummy comment
void* foldl = (decode_clo(env8565))[1];

//if-clause
bool if_guard8906 = is_true(a8365);
if(if_guard8906)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8437);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8437))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8908 = alloc_clo(lam8562_fptr, 6);

//setting env list
clo8908[1] = foldl;
clo8908[2] = acc;
clo8908[3] = fun;
clo8908[4] = kont8437;
clo8908[5] = lst;
clo8908[6] = cdr;
void* f8440 = encode_clo(clo8908);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8440);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8440))[0]);
function_ptr();
return nullptr;
}

}

void* lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8566 = arg_buffer[1];
//reading env and args
void* kont8437 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8910 = alloc_clo(lam8564_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo8910[1] = foldl;
clo8910[2] = car;
clo8910[3] = acc;
clo8910[4] = fun;
clo8910[5] = kont8437;
clo8910[6] = lst;
clo8910[7] = cdr;
void* f8441 = encode_clo(clo8910);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8441);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8441))[0]);
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8567_fptr() // lam8567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8568 = arg_buffer[1];
//reading env and args
void* a8372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8568))[3];
//not do dummy comment
void* kont8442 = (decode_clo(env8568))[2];
//not do dummy comment
void* fun = (decode_clo(env8568))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = kont8442;
arg_buffer[3] = a8370;
arg_buffer[4] = a8372;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a8371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8370 = (decode_clo(env8570))[5];
//not do dummy comment
void* foldr = (decode_clo(env8570))[4];
//not do dummy comment
void* acc = (decode_clo(env8570))[3];
//not do dummy comment
void* kont8442 = (decode_clo(env8570))[2];
//not do dummy comment
void* fun = (decode_clo(env8570))[1];

//creating new closure instance
void** clo8912 = alloc_clo(lam8567_fptr, 3);

//setting env list
clo8912[1] = fun;
clo8912[2] = kont8442;
clo8912[3] = a8370;
void* f8443 = encode_clo(clo8912);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8443;
arg_buffer[3] = fun;
arg_buffer[4] = acc;
arg_buffer[5] = a8371;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a8370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8572))[6];
//not do dummy comment
void* acc = (decode_clo(env8572))[5];
//not do dummy comment
void* foldr = (decode_clo(env8572))[4];
//not do dummy comment
void* lst = (decode_clo(env8572))[3];
//not do dummy comment
void* kont8442 = (decode_clo(env8572))[2];
//not do dummy comment
void* fun = (decode_clo(env8572))[1];

//creating new closure instance
void** clo8914 = alloc_clo(lam8569_fptr, 5);

//setting env list
clo8914[1] = fun;
clo8914[2] = kont8442;
clo8914[3] = acc;
clo8914[4] = foldr;
clo8914[5] = a8370;
void* f8444 = encode_clo(clo8914);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8444);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8444))[0]);
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
void* a8369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8574))[7];
//not do dummy comment
void* acc = (decode_clo(env8574))[6];
//not do dummy comment
void* car = (decode_clo(env8574))[5];
//not do dummy comment
void* foldr = (decode_clo(env8574))[4];
//not do dummy comment
void* lst = (decode_clo(env8574))[3];
//not do dummy comment
void* kont8442 = (decode_clo(env8574))[2];
//not do dummy comment
void* fun = (decode_clo(env8574))[1];

//if-clause
bool if_guard8915 = is_true(a8369);
if(if_guard8915)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8442);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8442))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8917 = alloc_clo(lam8571_fptr, 6);

//setting env list
clo8917[1] = fun;
clo8917[2] = kont8442;
clo8917[3] = lst;
clo8917[4] = foldr;
clo8917[5] = acc;
clo8917[6] = cdr;
void* f8445 = encode_clo(clo8917);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8445);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8445))[0]);
function_ptr();
return nullptr;
}

}

void* lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8575 = arg_buffer[1];
//reading env and args
void* kont8442 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo8919 = alloc_clo(lam8573_fptr, 7);

//setting env list
clo8919[1] = fun;
clo8919[2] = kont8442;
clo8919[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo8919[4] = foldr;
clo8919[5] = car;
clo8919[6] = acc;
clo8919[7] = cdr;
void* f8446 = encode_clo(clo8919);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst);
arg_buffer[1]=reinterpret_cast<void*>(f8446);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8446))[0]);
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8576_fptr() // lam8576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8577 = arg_buffer[1];
//reading env and args
void* a8376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8374 = (decode_clo(env8577))[3];
//not do dummy comment
void* cons = (decode_clo(env8577))[2];
//not do dummy comment
void* kont8447 = (decode_clo(env8577))[1];

//clo-app
arg_buffer[2]=apply_prim_cons_2(a8374, a8376);
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
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
void* a8375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8374 = (decode_clo(env8579))[5];
//not do dummy comment
void* append = (decode_clo(env8579))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8579))[3];
//not do dummy comment
void* cons = (decode_clo(env8579))[2];
//not do dummy comment
void* kont8447 = (decode_clo(env8579))[1];

//creating new closure instance
void** clo8921 = alloc_clo(lam8576_fptr, 3);

//setting env list
clo8921[1] = kont8447;
clo8921[2] = cons;
clo8921[3] = a8374;
void* f8448 = encode_clo(clo8921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8448;
arg_buffer[3] = a8375;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a8374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8581))[6];
//not do dummy comment
void* append = (decode_clo(env8581))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8581))[4];
//not do dummy comment
void* lst1 = (decode_clo(env8581))[3];
//not do dummy comment
void* cons = (decode_clo(env8581))[2];
//not do dummy comment
void* kont8447 = (decode_clo(env8581))[1];

//creating new closure instance
void** clo8923 = alloc_clo(lam8578_fptr, 5);

//setting env list
clo8923[1] = kont8447;
clo8923[2] = cons;
clo8923[3] = lst2;
clo8923[4] = append;
clo8923[5] = a8374;
void* f8449 = encode_clo(clo8923);



//clo-app
arg_buffer[2]=apply_prim_cdr_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8449);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8449))[0]);
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
void* a8373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8583))[7];
//not do dummy comment
void* append = (decode_clo(env8583))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8583))[5];
//not do dummy comment
void* cons = (decode_clo(env8583))[4];
//not do dummy comment
void* kont8447 = (decode_clo(env8583))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8583))[2];
//not do dummy comment
void* car = (decode_clo(env8583))[1];

//if-clause
bool if_guard8924 = is_true(a8373);
if(if_guard8924)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8447);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo8926 = alloc_clo(lam8580_fptr, 6);

//setting env list
clo8926[1] = kont8447;
clo8926[2] = cons;
clo8926[3] = lst1;
clo8926[4] = lst2;
clo8926[5] = append;
clo8926[6] = cdr;
void* f8450 = encode_clo(clo8926);



//clo-app
arg_buffer[2]=apply_prim_car_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8450);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8450))[0]);
function_ptr();
return nullptr;
}

}

void* lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8584 = arg_buffer[1];
//reading env and args
void* kont8447 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo8928 = alloc_clo(lam8582_fptr, 7);

//setting env list
clo8928[1] = car;
clo8928[2] = lst1;
clo8928[3] = kont8447;
clo8928[4] = cons;
clo8928[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo8928[6] = append;
clo8928[7] = cdr;
void* f8451 = encode_clo(clo8928);



//clo-app
arg_buffer[2]=apply_prim_null_u63_1(lst1);
arg_buffer[1]=reinterpret_cast<void*>(f8451);
arg_buffer[0] = reinterpret_cast<void*>(1);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8451))[0]);
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* lam8585_fptr() // lam8585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8586 = arg_buffer[1];
//reading env and args
void* a8385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8452 = (decode_clo(env8586))[2];
//not do dummy comment
void* min = (decode_clo(env8586))[1];
void* cps_u45lst8453 = prim_cons(kont8452, a8385);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(min);
arg_buffer[2] = cps_u45lst8453;
arg_buffer[0] = reinterpret_cast<void*>(2);
min_fptr();
return nullptr;
}

void* lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8595 = arg_buffer[1];
//reading env and args
void* kont8452 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8929 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8929, "1", 10);
void* a8377 = encode_mpz(mpzvar8929);
mpz_t* mpzvar8930 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8930, "2", 10);
void* a8378 = encode_mpz(mpzvar8930);
mpz_t* mpzvar8931 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8931, "3", 10);
void* a8379 = encode_mpz(mpzvar8931);
mpz_t* mpzvar8932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8932, "-9", 10);
void* a8380 = encode_mpz(mpzvar8932);
mpf_t* mpfvar8933 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8933, "4.2", 10);
void* a8381 = encode_mpf(mpfvar8933);
mpz_t* mpzvar8934 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8934, "10", 10);
void* a8382 = encode_mpz(mpzvar8934);
mpf_t* mpfvar8935 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar8935, "8.5", 10);
void* a8383 = encode_mpf(mpfvar8935);
mpz_t* mpzvar8936 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8936, "7", 10);
void* a8384 = encode_mpz(mpzvar8936);

//creating new closure instance
void** clo8938 = alloc_clo(lam8585_fptr, 2);

//setting env list
clo8938[1] = min;
clo8938[2] = kont8452;
void* f8454 = encode_clo(clo8938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8454;
arg_buffer[3] = a8377;
arg_buffer[4] = a8378;
arg_buffer[5] = a8379;
arg_buffer[6] = a8380;
arg_buffer[7] = a8381;
arg_buffer[8] = a8382;
arg_buffer[9] = a8383;
arg_buffer[10] = a8384;
arg_buffer[0] = reinterpret_cast<void*>(10);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8596_fptr() // lam8596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8597 = arg_buffer[1];
//reading env and args
void* xy8386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8455 = (decode_clo(env8597))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8455);
arg_buffer[2] = xy8386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8598 = arg_buffer[1];
//reading env and args
void* kont8455 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8940 = alloc_clo(lam8596_fptr, 1);

//setting env list
clo8940[1] = kont8455;
void* f8456 = encode_clo(clo8940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8456;
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

